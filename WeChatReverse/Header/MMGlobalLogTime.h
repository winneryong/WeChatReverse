//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface MMGlobalLogTime : NSObject
{
    NSMutableDictionary *m_dic;
    NSMutableDictionary *m_dicProc;
}

+ (id)sharedMMGlobalLogTime;
- (void).cxx_destruct;
- (void)end:(id)arg1;
- (void)needreport:(id)arg1 withEventId:(unsigned int)arg2;
- (void)start:(id)arg1 withStep:(const char *)arg2;
- (void)dealloc;
- (id)init;

@end
