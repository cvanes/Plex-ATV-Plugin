//
//  HWSettingsController.m
//  atvTwo
//
//  Created by ccjensen on 10/01/2011.
//
//  Inspired by 
//
//		MLoader.m
//		MextLoader
//
//		Created by Thomas Cool on 10/22/10.
//		Copyright 2010 tomcool.org. All rights reserved.
//

#import "HWSettingsController.h"
#import "SMFMenuItem.h"
#import "HWPmsListController.h"
#import "SMFBaseAsset.h"
#import "SMFMediaPreview.h"
#import "Constants.h"

@implementation HWSettingsController
@synthesize topLevelController;

#define PlexPluginVersion @"0.6.6"

#define CombinedPmsCategoriesIndex 0
#define DefaultServerIndex 1
#define QualitySettingIndex 2
#define PluginVersionNumberIndex 3

#pragma mark -
#pragma mark init/dealoc

- (id) init {
	if((self = [super init]) != nil) {
    topLevelController = nil;
		[self setLabel:@"Plex Settings"];
		[self setListTitle:@"Plex Settings"];
				
		[self setupList];
	}	
	return self;
}

- (void)wasPopped{
  NSLog(@"Did pop controller %@", self);
  [topLevelController reloadCategories];
  [super wasPopped];
}

- (void)setupList {
	[_items removeAllObjects];
	
	// =========== combined PMS category view ===========
	SMFMenuItem *combinedPmsCategoriesMenuItem = [SMFMenuItem menuItem];
	
	NSString *combinedPmsCategories = [[SMFPreferences preferences] boolForKey:PreferencesUseCombinedPmsView] ? @"Enabled" : @"Disabled";
	NSString *combinedPmsCategoriesTitle = [[NSString alloc] initWithFormat:@"Combined PMS View:    %@", combinedPmsCategories];
	[combinedPmsCategoriesMenuItem setTitle:combinedPmsCategoriesTitle];
	[combinedPmsCategoriesTitle release];
	[_items addObject:combinedPmsCategoriesMenuItem];
	
	// =========== default server ===========
	SMFMenuItem *defaultServerMenuItem = [SMFMenuItem folderMenuItem];
	
	NSString *defaultServer = [[SMFPreferences preferences] objectForKey:PreferencesDefaultServerName];
	NSString *defaultServerTitle = [[NSString alloc] initWithFormat:@"Default Server:    %@", defaultServer];
	[defaultServerMenuItem setTitle:defaultServerTitle];
	[defaultServerTitle release];
	[_items addObject:defaultServerMenuItem];
	
	
	// =========== quality setting ===========
	SMFMenuItem *qualitySettingMenuItem = [SMFMenuItem menuItem];
	
	NSString *qualitySetting = [[SMFPreferences preferences] objectForKey:PreferencesQualitySetting];
	qualitySetting = qualitySetting == nil || qualitySetting == @"" ? @"Medium" : qualitySetting;
	NSString *qualitySettingTitle = [[NSString alloc] initWithFormat:@"Quality Setting:   %@", qualitySetting];
	[qualitySettingMenuItem setTitle:qualitySettingTitle];
	[qualitySettingTitle release];
	[_items addObject:qualitySettingMenuItem];
	
	
	// =========== version number ===========
	SMFMenuItem *pluginVersionNumberMenuItem = [SMFMenuItem menuItem];
	
	NSString *pluginVersionNumber = PlexPluginVersion;
	NSString *pluginVersionNumberTitle = [[NSString alloc] initWithFormat:@"Version:   %@", pluginVersionNumber];
	[pluginVersionNumberMenuItem setTitle:pluginVersionNumberTitle];
	[pluginVersionNumberTitle release];
	[_items addObject:pluginVersionNumberMenuItem];
	
	//this code can be used to find all the accessory types
	//	for (int i = 0; i<32; i++) {
	//		BRMenuItem *tempSettingMenuItem = [[BRMenuItem alloc] init];
	//		[tempSettingMenuItem addAccessoryOfType:i];
	//		
	//		NSString *tempSettingTitle = [[NSString alloc] initWithFormat:@"temp %d", i];
	//		[tempSettingMenuItem setText:tempSettingTitle withAttributes:[[BRThemeInfo sharedTheme] menuItemTextAttributes]];
	//		[tempSettingTitle release];
	//		[_items addObject:tempSettingMenuItem];
	//	}
}

- (void)dealloc {
	[super dealloc];	
}

- (void)wasExhumed {
	[self setupList];
	[self.list reload];
	[super wasExhumed];
}

#pragma mark -
#pragma mark List Delegate Methods
- (void)itemSelected:(long)selected {
	switch (selected) {
		case CombinedPmsCategoriesIndex: {
			// =========== combined PMS category view ===========
			BOOL isTurnedOn = [[SMFPreferences preferences] boolForKey:PreferencesUseCombinedPmsView];
			[[SMFPreferences preferences] setBool:!isTurnedOn forKey:PreferencesUseCombinedPmsView];
			
			[self setupList];
			[self.list reload];
			break;
		}
		case DefaultServerIndex: {
			// =========== default server ===========
			HWPmsListController* menuController = [[HWPmsListController alloc] init];
			[[[BRApplicationStackManager singleton] stack] pushController:menuController];
			[menuController autorelease];
			break;
		}
		case QualitySettingIndex: {
			// =========== quality setting ===========
			NSString *qualitySetting = [[SMFPreferences preferences] objectForKey:PreferencesQualitySetting];
      
			if ([qualitySetting isEqualToString:@"Low"]) {
				[[SMFPreferences preferences] setObject:@"Medium" forKey:PreferencesQualitySetting];
			} else if ([qualitySetting isEqualToString:@"Medium"]) {
				[[SMFPreferences preferences] setObject:@"High" forKey:PreferencesQualitySetting];
			} else {
				[[SMFPreferences preferences] setObject:@"Low" forKey:PreferencesQualitySetting];
			}
			
			[self setupList];
			[self.list reload];
			break;
		}
		default:
			break;
	}
}


-(id)previewControlForItem:(long)item
{
	SMFBaseAsset *asset = [[SMFBaseAsset alloc] init];
	switch (item) {
		case CombinedPmsCategoriesIndex: {
			// =========== combined PMS category view ===========
			[asset setTitle:@"Enables/Disables the combined view"];
			[asset setSummary:@"Toggles between using a single default server or a combined view"];
			break;
		}
		case DefaultServerIndex: {
			// =========== default server ===========
			[asset setTitle:@"Select the default server"];
			[asset setSummary:@"Shows the category's belonging to the default server"];
			break;
		}
		case QualitySettingIndex: {
			// =========== quality setting ===========
			[asset setTitle:@"Select the video quality"];
			[asset setSummary:@"Sets the quality of the streamed video (currently not used)"];
			break;
		}
		case PluginVersionNumberIndex: {
			// =========== quality setting ===========
			[asset setTitle:@"Credit to:"];
			[asset setSummary:@"quequick, b0bben and ccjensen"];
			break;
		}
		default:
			break;
	}
	[asset setCoverArt:[BRImage imageWithPath:[[NSBundle bundleForClass:[self class]] pathForResource:@"PlexSettings" ofType:@"png"]]];
	SMFMediaPreview *p = [[SMFMediaPreview alloc] init];
	[p setShowsMetadataImmediately:YES];
	[p setAsset:asset];
	[asset release];
	return [p autorelease];  
}


@end
