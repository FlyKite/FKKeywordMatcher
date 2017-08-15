//
//  FKKeywordMatcher.h
//  FKKeywordMatcher
//
//  Created by 风筝 on 2017/8/14.
//  Copyright © 2017年 Doge Studio. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface KeywordMap : NSObject
@property (assign, nonatomic) UInt8 value;
@property (strong, nonatomic) NSMutableArray *subMaps;
@end

@interface FKKeywordMatcher : NSObject
- (BOOL)match:(NSString *)text withKeywordMap:(KeywordMap *)keywordMap;
- (KeywordMap *)convert:(NSArray *)keywordArray;
- (NSArray *)backToArray:(KeywordMap *)keywordMap;
@end
