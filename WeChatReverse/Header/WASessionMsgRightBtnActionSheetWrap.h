//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WASessionMsgRightBtnActionSheetTopViewDelegate.h"
#import "WCActionSheetDelegate.h"

@class CContact, NSString, WCActionSheet;

@interface WASessionMsgRightBtnActionSheetWrap : NSObject <WCActionSheetDelegate, WASessionMsgRightBtnActionSheetTopViewDelegate>
{
    CContact *_contact;
    _Bool _isShowHomePage;
    _Bool _isShowBlockSessionMsg;
    WCActionSheet *_actionSheet;
    long long _aboutUsBtnIndex;
    long long _enterHomePageBtnIndex;
    long long _operateSessionMsgBtnIndex;
    id <WASessionMsgRightBtnActionSheetWrapDelegate> _delegate;
}

@property(nonatomic) __weak id <WASessionMsgRightBtnActionSheetWrapDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onExpose;
- (void)onShowDetail;
- (id)getCustomView;
- (void)setupData;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)show;
- (id)initWithShowHomePage:(_Bool)arg1 showBlockSessionMessage:(_Bool)arg2 contact:(id)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

