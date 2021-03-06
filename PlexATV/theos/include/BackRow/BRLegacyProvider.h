/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BRControlFactory.h"
#import "BRProvider.h"
#import "BRControlHeightFactory.h"

@class NSMutableArray;
@protocol BRMenuListItemProvider;

__attribute__((visibility("hidden")))
@interface BRLegacyProvider : NSObject <BRControlFactory, BRControlHeightFactory, BRProvider> {
@private
	id<BRMenuListItemProvider> _source;	// 4 = 0x4
	NSMutableArray *_dividers;	// 8 = 0x8
	long _firstDividerIndex;	// 12 = 0xc
	long _lastDividerIndex;	// 16 = 0x10
}
@property(retain) id datasource;	// G=0x32d8ed11; S=0x32d66e41; converted property
- (long)_listRowForProviderRow:(long)providerRow;	// 0x32dbda4d
- (long)_providerRowForListRow:(long)listRow divider:(id *)divider;	// 0x32dbdb11
- (void)_updateDividers;	// 0x32dbdc1d
- (void)addDividerAtIndex:(long)index withLabel:(id)label;	// 0x32dbe031
- (id)controlFactory;	// 0x32dbda49
- (id)controlForData:(id)data currentControl:(id)control requestedBy:(id)by;	// 0x32dbde01
- (id)dataAtIndex:(long)index;	// 0x32dbdec9
- (long)dataCount;	// 0x32dbe231
// converted property getter: - (id)datasource;	// 0x32d8ed11
- (long)datasourceIndexForProviderIndex:(long)providerIndex;	// 0x32dbde5d
- (void)dealloc;	// 0x32dbe1e9
- (id)hashForDataAtIndex:(long)index;	// 0x32dbde89
- (float)heightForControlForData:(id)data requestedBy:(id)by;	// 0x32dbdd61
- (long)providerIndexForDatasourceIndex:(long)datasourceIndex;	// 0x32dbde75
- (void)removeDividerAtIndex:(long)index;	// 0x32dbdf45
- (void)removeDividers;	// 0x32dbdf09
// converted property setter: - (void)setDatasource:(id)datasource;	// 0x32d66e41
@end

