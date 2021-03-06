//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
@class DeallocHelper;

typedef void(^DeallocHelperCallbackBlock)(DeallocHelper *helper);

@interface DeallocHelper : NSObject
{
    id _target;
    DeallocHelperCallbackBlock _callback;
}

+ (void)DettachObject:(id)arg1 key:(const void *)arg2;
+ (void)attachToObject:(id)arg1 key:(const void *)arg2 whenDeallocDoThis:(DeallocHelperCallbackBlock)arg3;
@property(copy, nonatomic) DeallocHelperCallbackBlock callback; // @synthesize callback=_callback;
@property(nonatomic) id target; // @synthesize target=_target;

- (void)dealloc;

@end

