//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIButton, UISearchDisplayController;

@protocol MMWebSearchViewDelegate <NSObject>

@optional
- (void)didEndSearch:(UISearchDisplayController *)arg1;
- (void)willEndSearch:(UISearchDisplayController *)arg1;
- (void)didBeginSearch:(UISearchDisplayController *)arg1;
- (void)willBeginSearch:(UISearchDisplayController *)arg1;
- (void)onTapBlurEffectView;
- (void)onFinalBackButtonClick:(UIButton *)arg1;
@end
