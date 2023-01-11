//
//  MattFFTEntrance.h
//  MattFFTSDK
//
//  Created by Matt Kuhn on 1/6/23.
//

#ifndef MattFFTEntrance_h
#define MattFFTEntrance_h

#import <Foundation/Foundation.h>

@interface MattFFTEntrance : NSObject {
}

- (void)initIt;

- (NSMutableArray *)calcFrequenciesReal: (NSMutableDictionary *) samples;
- (NSMutableArray *)getFrequenciesImaginary;

- (void)cleanIt;

@end

#endif /* MattFFTEntrance_h */
