//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CMessageWrap, NSString;

@protocol IDownloadImageExt <NSObject>

@optional
- (void)OnDownloadForSaveAlbumFail:(CMessageWrap *)arg1 Expired:(_Bool)arg2;
- (void)OnImageSaveAlbumError:(CMessageWrap *)arg1;
- (void)OnImageSaveAlbumSuccess:(CMessageWrap *)arg1;
- (void)OnDownloadImageStopByChatName:(NSString *)arg1 FromDelMsg:(_Bool)arg2;
- (void)OnDownloadImagePartNew:(CMessageWrap *)arg1 PartLen:(unsigned int)arg2 TotalLen:(unsigned int)arg3 TryShow:(_Bool)arg4;
- (void)OnDownloadImagePart:(CMessageWrap *)arg1 PartLen:(unsigned int)arg2 TotalLen:(unsigned int)arg3;
- (void)OnDownloadImageOk:(CMessageWrap *)arg1;
- (void)OnDownloadImageFail:(CMessageWrap *)arg1;
- (void)OnDownloadImageExpired:(CMessageWrap *)arg1;
@end

