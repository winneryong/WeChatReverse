//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@protocol IMMFacebookMgrExt <NSObject>

@optional
- (void)facebookCheckAccessTokenValidFinished:(_Bool)arg1;
- (void)onExtendTokenFinish:(_Bool)arg1;
- (void)onUnBindFacebookFinish:(unsigned int)arg1;
- (void)onBindFacebookFinish:(unsigned int)arg1;
- (void)onLoginFacebookBegan:(NSString *)arg1;
- (void)onFBDidNotLogin:(_Bool)arg1;
- (void)onFBDidLogin;
@end

