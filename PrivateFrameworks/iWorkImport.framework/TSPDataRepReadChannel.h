/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class <SFUInputStream>, NSObject<OS_dispatch_queue>, SFUDataRepresentation;

@interface TSPDataRepReadChannel : NSObject <TSUStreamReadChannel> {
    <SFUInputStream> *_inputStream;
    NSObject<OS_dispatch_queue> *_readQueue;
    SFUDataRepresentation *_representation;
}

- (void).cxx_destruct;
- (void)close;
- (void)dealloc;
- (id)initWithRepresentation:(id)arg1;
- (void)readWithQueue:(id)arg1 handler:(id)arg2;

@end