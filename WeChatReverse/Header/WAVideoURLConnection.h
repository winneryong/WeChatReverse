//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSURLConnection.h"

#import "AVAssetResourceLoaderDelegate.h"
#import "WAVideoRequestTaskDelegate.h"

@class NSMutableArray, NSString, WAVideoRequestTask;

@interface WAVideoURLConnection : NSURLConnection <WAVideoRequestTaskDelegate, AVAssetResourceLoaderDelegate>
{
    _Bool _paused;
    WAVideoRequestTask *_task;
    id <WAVideoURLConnectionDelegate> _delegate;
    NSMutableArray *_pendingRequests;
    NSString *_tempPath;
}

@property(retain, nonatomic) NSString *tempPath; // @synthesize tempPath=_tempPath;
@property(nonatomic) _Bool paused; // @synthesize paused=_paused;
@property(retain, nonatomic) NSMutableArray *pendingRequests; // @synthesize pendingRequests=_pendingRequests;
@property(nonatomic) __weak id <WAVideoURLConnectionDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WAVideoRequestTask *task; // @synthesize task=_task;
- (void).cxx_destruct;
- (void)didFailLoadingWithTask:(id)arg1 WithError:(long long)arg2;
- (void)didFinishLoadingWithTask:(id)arg1;
- (void)didReceiveVideoDataWithTask:(id)arg1;
- (void)task:(id)arg1 didReceiveVideoLength:(unsigned long long)arg2 mimeType:(id)arg3;
- (void)resume;
- (void)pause;
- (id)getSchemeVideoURL:(id)arg1;
- (void)setDownloadPath:(id)arg1;
- (void)resourceLoader:(id)arg1 didCancelLoadingRequest:(id)arg2;
- (void)dealWithLoadingRequest:(id)arg1;
- (_Bool)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2;
- (_Bool)respondWithDataForRequest:(id)arg1;
- (void)processPendingRequests;
- (void)fillInContentInformation:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
