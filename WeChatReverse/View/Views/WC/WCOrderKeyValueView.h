//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

@class NSArray;

@interface WCOrderKeyValueView : MMUIView
{
    NSArray *_items;
    id _target;
}

@property(nonatomic) __weak id target; // @synthesize target=_target;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
- (void).cxx_destruct;
- (id)copyableTextView;
- (id)detailLabel;
- (id)nameLabel;
- (id)lineView;
- (void)setupViews;
- (id)init;
- (void)dealloc;

@end
