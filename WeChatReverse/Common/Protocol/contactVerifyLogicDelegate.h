//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class CContactVerifyLogic, NSArray, NSString;

@protocol contactVerifyLogicDelegate <NSObject>

@optional
- (void)onContactVerifyFillVerifyMsg:(NSArray *)arg1;
- (double)getTextFieldTopMarginVerifyLogic:(CContactVerifyLogic *)arg1;
- (NSString *)getAlertMessageForVerifyLogic:(CContactVerifyLogic *)arg1;
- (NSString *)getAlertTitleForVerifyLogic:(CContactVerifyLogic *)arg1;
- (void)contactVerifyOk:(NSArray *)arg1 opCode:(unsigned int)arg2;
- (void)onContactVerifyFail;
@end

