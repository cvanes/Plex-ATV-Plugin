/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRPhotoMediaAsset.h"
#import "BRATVMediaItem.h"


@interface BRStreamingPhotoAsset : BRPhotoMediaAsset <BRATVMediaItem> {
@private
	ATVMediaItemRef _mediaItem;	// 36 = 0x24
	ATVDataClientRef _dataClient;	// 40 = 0x28
	BOOL _useForScreenSaver;	// 44 = 0x2c
}
@property(assign) BOOL useForScreenSaver;	// G=0x32e60479; S=0x32e60469; converted property
+ (id)assetWithATVMediaItem:(ATVMediaItemRef)atvmediaItem dataClient:(ATVDataClientRef)client;	// 0x32e608cd
- (id)initWithATVMediaItem:(ATVMediaItemRef)atvmediaItem dataClient:(ATVDataClientRef)client;	// 0x32e6082d
- (CGRect)_paddedFaceRectFromFaceRect:(CGRect)faceRect;	// 0x32e60499
- (id)dateTaken;	// 0x32e607f9
- (void)dealloc;	// 0x32e60951
- (CGRect)faceRectForFaceCollectionID:(id)faceCollectionID;	// 0x32e609a1
- (id)faces;	// 0x32e60779
- (BOOL)hasVideoContent;	// 0x32e60681
- (id)imageProxy;	// 0x32e607ad
- (BOOL)isLocal;	// 0x32e60465
- (ATVMediaItemRef)mediaItemRef;	// 0x32e60489
- (id)mediaType;	// 0x32e60905
- (id)mediaURL;	// 0x32e606cd
// converted property setter: - (void)setUseForScreenSaver:(BOOL)screenSaver;	// 0x32e60469
- (id)subImageProxyWithRect:(CGRect)rect;	// 0x32e60715
// converted property getter: - (BOOL)useForScreenSaver;	// 0x32e60479
@end

