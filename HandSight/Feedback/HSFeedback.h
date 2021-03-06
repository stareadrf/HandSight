//
//  HSFeedback.h
//  HandSight
//
//  The feedback is designed for reading (Text-to-speech), indicator of tasks and structural (line begin, line end)
//
//  Created by Ruofei Du on 7/11/14.
//  Copyright (c) 2014 Ruofei Du. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "HSUtils.h"
#import "HSAudio.h"
#import "HSBluetooth.h"
#import "HSStat.h"
#import "HSSpeech.h"

@interface HSFeedback : NSObject {
    BOOL m_verticalOn;
    HSState* State;
    HSAudio* Audio;
    HSBluetooth* Bluetooth;
    HSLog* Log;
    HSSpeech* Speech;
    HSStat* Stat; 
}

+ (HSFeedback *) sharedInstance;
- (void) changed;
- (void) convertMode;

/**
 * Reading Feedbacks
 */
- (void) verticalFeedback: (CGFloat) y;
- (void) verticalStop;
- (void) speekCurrentWord: (NSString*) s;

/**
 * Task Feedback
 */
- (void) taskStart;
- (void) taskEnd;

/**
 * Structure Feedback
 */
- (void) lineBegin;
- (void) lineEnd;
- (void) paraEnd;

- (void) lineBeginOnly;
- (void) lineEndOnly;
- (void) paraEndOnly;


- (void) handsightPanel;
- (void) handsightText;

/**
 * Exploration Feedback
 */
- (void) overTitle;
- (void) overParagraph: (int) i;
- (void) overPicture;
- (void) overSpacing;



@end
