//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

#import "UIScrollViewDelegate.h"

@class MMWebImageView, NSString, UIButton, UIImageView, UILabel, UIScrollView, UIView, WCFitLayoutView, WCGiftCardData, WCGiftCardLetterView;

@interface WCGiftCardDetailView : MMUIView <UIScrollViewDelegate>
{
    WCGiftCardData *_giftCardData;
    double _viewWidth;
    id <WCGiftCardDetailViewDelegate> _delegate;
    WCFitLayoutView *_descriptView;
    UILabel *_desLabel;
    UILabel *_cardTitleLabel;
    UILabel *_priceLabel;
    MMWebImageView *_cardPic;
    UIImageView *_cardBackShadowPic;
    UIScrollView *_scrollView;
    UIView *_topBarView;
    UIView *_scrollTopBackView;
    UIView *_scrollCenterBackView;
    UIView *_scrollBackView;
    UILabel *_toUserLaebl;
    WCGiftCardLetterView *_letterView;
    MMWebImageView *_headImageView;
    UILabel *_fromUserLabel;
    UIButton *_jumpButton;
    UIButton *_operationButton;
    UIView *_divideLine;
    struct CGSize _topSize;
}

@property(retain, nonatomic) UIView *divideLine; // @synthesize divideLine=_divideLine;
@property(retain, nonatomic) UIButton *operationButton; // @synthesize operationButton=_operationButton;
@property(retain, nonatomic) UIButton *jumpButton; // @synthesize jumpButton=_jumpButton;
@property(retain, nonatomic) UILabel *fromUserLabel; // @synthesize fromUserLabel=_fromUserLabel;
@property(retain, nonatomic) MMWebImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(retain, nonatomic) WCGiftCardLetterView *letterView; // @synthesize letterView=_letterView;
@property(retain, nonatomic) UILabel *toUserLaebl; // @synthesize toUserLaebl=_toUserLaebl;
@property(retain, nonatomic) UIView *scrollBackView; // @synthesize scrollBackView=_scrollBackView;
@property(retain, nonatomic) UIView *scrollCenterBackView; // @synthesize scrollCenterBackView=_scrollCenterBackView;
@property(retain, nonatomic) UIView *scrollTopBackView; // @synthesize scrollTopBackView=_scrollTopBackView;
@property(retain, nonatomic) UIView *topBarView; // @synthesize topBarView=_topBarView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UIImageView *cardBackShadowPic; // @synthesize cardBackShadowPic=_cardBackShadowPic;
@property(retain, nonatomic) MMWebImageView *cardPic; // @synthesize cardPic=_cardPic;
@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) UILabel *cardTitleLabel; // @synthesize cardTitleLabel=_cardTitleLabel;
@property(retain, nonatomic) UILabel *desLabel; // @synthesize desLabel=_desLabel;
@property(retain, nonatomic) WCFitLayoutView *descriptView; // @synthesize descriptView=_descriptView;
@property(nonatomic) struct CGSize topSize; // @synthesize topSize=_topSize;
@property(nonatomic) __weak id <WCGiftCardDetailViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double viewWidth; // @synthesize viewWidth=_viewWidth;
@property(retain, nonatomic) WCGiftCardData *giftCardData; // @synthesize giftCardData=_giftCardData;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)arg1;
- (void)backGroundDidClikced:(id)arg1;
- (void)showTopSpringAnimation;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
