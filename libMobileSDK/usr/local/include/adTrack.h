//
//  adTrack.h
//  adTrack
//
//  Created by Vivek Kaushal on 4/13/12.
//  Copyright (c) 2012 Click Labs Pvt Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

@interface adTrack : NSObject{
    NSString *appKey;
}

@property (nonatomic, strong) NSString *appKey;

- (void)initSDK:(NSString *)theAppKey;
- (void)handleInstallEventWithEventKey:(NSString *)eventKey userHash:(NSString *)userHash imageURL:(NSString *)imageURL textForLoading:(NSString *)text delay:(NSNumber *)delay;
- (void)logEventWithEventKey:(NSString *)eventKey userHash:(NSString *)userHash params:(NSDictionary *) params;
- (NSURL *)genEventURLWithEventKey:(NSString *)eventKey userHash:(NSString *)userHash params:(NSDictionary *) params;
- (BOOL)isInstallRegistered;
+ (NSData *)base64DataFromString: (NSString *)string;
- (BOOL) connectedToNetwork;
@end
