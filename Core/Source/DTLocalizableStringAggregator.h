//
//  DTLocalizableStringAggregator.h
//  genstrings2
//
//  Created by Oliver Drobnik on 02.01.12.
//  Copyright (c) 2012 Drobnik KG. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DTLocalizableStringAggregator : NSObject

- (id)initWithFileURLs:(NSArray *)fileURLs;

- (void)processFiles;

@property (nonatomic, assign) BOOL wantsPositionalParameters;
@property (nonatomic, retain) NSSet *tablesToSkip;
@property (nonatomic, retain) NSURL *outputFolderURL;
@property (nonatomic, retain) NSString *customMacroPrefix;
@property (nonatomic, assign) NSStringEncoding outputStringEncoding;

@end
