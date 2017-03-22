//
//  Session.h
//  Acronym
//
//  Created by Nehemiah Horace on 3/22/17.
//  Copyright © 2017 Nehemiah Horace. All rights reserved.
//

#import "AFHTTPSessionManager.h"
#import "Acronym.h"

typedef void (^ServiceSuccessBlock)(NSURLSessionDataTask *task, Acronym *acronym);
typedef void (^ServiceFailureBlock)(NSURLSessionDataTask *task, NSError *error);

@interface Session : AFHTTPSessionManager


+(Session *) sharedManager;

- (void)getResponseForURLString: (NSString *)urlString Parameters:(NSDictionary *) parameters success:(ServiceSuccessBlock) success failure:(ServiceFailureBlock) failure;

@end
