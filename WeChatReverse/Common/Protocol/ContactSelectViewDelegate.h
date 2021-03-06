//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewControllerDelegate.h"
@class CContact;

@protocol ContactSelectViewDelegate <MMUIViewControllerDelegate>
- (void)onSelectContact:(CContact *)contact;

@optional
- (void)onSelectBrandContact;
- (void)onSelectRadarCreateRoom;
- (void)onSelectHistoryGroup;
- (void)onContactSelectSearchSections:(NSArray *)sectionList sectionTitles:(NSDictionary *)titlesDic sectionResults:(NSDictionary *)resultsDic;
- (BOOL)onFilterContactCandidate:(CContact *)contact;
- (BOOL)onShouldSelectContact:(CContact *)contact;
@end

