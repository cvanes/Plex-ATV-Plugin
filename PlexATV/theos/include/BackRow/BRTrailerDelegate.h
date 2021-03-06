/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BRBaseParserDelegate.h"

@class NSMutableArray, NSXMLParser, BRMovieTrailer, BRMovieTrailersProvider, BRResolution;

__attribute__((visibility("hidden")))
@interface BRTrailerDelegate : BRBaseParserDelegate {
@private
	BRMovieTrailersProvider *_provider;	// 12 = 0xc
	BRMovieTrailer *_movieTrailer;	// 16 = 0x10
	NSMutableArray *_elementCollection;	// 20 = 0x14
	BRResolution *_resolution;	// 24 = 0x18
	NSXMLParser *_parser;	// 28 = 0x1c
}
- (id)initWithMediaProvider:(id)mediaProvider resolution:(id)resolution;	// 0x32d82115
- (void)dealloc;	// 0x32d82fbd
- (void)endCast;	// 0x32d829bd
- (void)endCopyright;	// 0x32d82835
- (void)endDescription;	// 0x32d828c5
- (void)endDirector;	// 0x32d8287d
- (void)endGenre;	// 0x32d82a49
- (void)endLarge;	// 0x32d82c75
- (void)endLocation;	// 0x32d82b79
- (void)endMovieinfo;	// 0x32d82cdd
- (void)endName;	// 0x32d82979
- (void)endPostdate;	// 0x32d827a5
- (void)endPoster;	// 0x32d82c09
- (void)endRating;	// 0x32d82715
- (void)endReleasedate;	// 0x32d827ed
- (void)endRuntime;	// 0x32d826cd
- (void)endStudio;	// 0x32d8275d
- (void)endTitle;	// 0x32d825c9
- (void)endXlarge;	// 0x32d82bc1
- (void)setWeakReferenceToParser:(id)parser;	// 0x32d8219d
- (void)startCastWithAttributes:(id)attributes;	// 0x32d8292d
- (void)startGenreWithAttributes:(id)attributes;	// 0x32d829fd
- (void)startMovieinfoWithAttributes:(id)attributes;	// 0x32d8230d
@end

