//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WebviewJSEventHandlerBase.h"

#import "IWCShareCardPkgExt.h"
#import "WCNewShareCardConsumedViewDelegate.h"

@class NSString, WCNewShareCardConsumedView;

@interface WebviewJSEventHandler_consumedShareCard : WebviewJSEventHandlerBase <IWCShareCardPkgExt, WCNewShareCardConsumedViewDelegate>
{
    NSString *_consumedCardId;
    NSString *_consumedCode;
    WCNewShareCardConsumedView *_newconsumedView;
}

- (void).cxx_destruct;
- (void)onShareCardConsumedViewCloseBtnClick;
- (void)onShareCardAfterConsumed:(_Bool)arg1;
- (void)onMsgNotifyShareCardConsumed:(id)arg1 sharedCardId:(id)arg2 consumedBoxId:(id)arg3 subscribeAppUserName:(id)arg4 subscribeWording:(id)arg5 retMsg:(id)arg6;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

