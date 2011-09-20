//
//  growlTestAppDelegate.h
//  growlTest
//
//  Created by kim hongjun on 11. 9. 20..
//  Copyright 2011년 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import <Growl-WithInstaller/Growl.h>

@interface growlTestAppDelegate : NSObject <GrowlApplicationBridgeDelegate> {
	NSWindow *window;
}



@property (assign) IBOutlet NSWindow *window;

- (IBAction)showMessage:(id)sender;

@end
