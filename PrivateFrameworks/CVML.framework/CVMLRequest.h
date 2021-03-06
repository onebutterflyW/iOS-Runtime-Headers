/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CVML.framework/CVML
 */

@interface CVMLRequest : NSObject <CVMLWarningRecorder> {
    BOOL  _cancellable;
    NSObject<OS_dispatch_queue> * _cancellationQueue;
    NSObject<OS_dispatch_semaphore> * _cancellationSemaphore;
    id /* block */  _completionHandler;
    CVMLDetector * _detector;
    NSDictionary * _options;
    NSString * _requestName;
    NSArray * _results;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  _roi;
    CVMLWarningRecorder * _warningRecorder;
}

@property BOOL cancellable;
@property (retain) NSObject<OS_dispatch_semaphore> *cancellationSemaphore;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) NSDictionary *options;
@property (readonly) NSString *requestName;
@property (readonly) NSArray *results;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } roi;
@property (readonly) Class superclass;

+ (BOOL)getDoubleValue:(double*)arg1 forKey:(id)arg2 inOptions:(id)arg3 error:(id*)arg4;
+ (BOOL)getDoubleValue:(double*)arg1 forKey:(id)arg2 inOptions:(id)arg3 withDefaultValue:(double)arg4 error:(id*)arg5;
+ (BOOL)getFloatValue:(float*)arg1 forKey:(id)arg2 inOptions:(id)arg3 error:(id*)arg4;
+ (BOOL)getFloatValue:(float*)arg1 forKey:(id)arg2 inOptions:(id)arg3 withDefaultValue:(float)arg4 error:(id*)arg5;
+ (BOOL)getOptionalArray:(id*)arg1 forKey:(id)arg2 inOptions:(id)arg3 withElementsOfClass:(Class)arg4 error:(id*)arg5;
+ (BOOL)getOptionalInputFacesArray:(id*)arg1 inOptions:(id)arg2 error:(id*)arg3;
+ (BOOL)getOptionalObject:(id*)arg1 ofClass:(Class)arg2 forKey:(id)arg3 inOptions:(id)arg4 error:(id*)arg5;
+ (BOOL)getPixelFocalLength:(float*)arg1 inOptions:(id)arg2 withDefaultValue:(float)arg3 error:(id*)arg4;
+ (BOOL)getRequiredObject:(id*)arg1 ofClass:(Class)arg2 forKey:(id)arg3 inOptions:(id)arg4 error:(id*)arg5;
+ (void)initialize;
+ (void)recordDefaultOptionsInDictionary:(id)arg1;
+ (id)requestWithName:(id)arg1 options:(id)arg2;
+ (id)requestWithName:(id)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;

- (void).cxx_destruct;
- (void)cancel;
- (BOOL)cancellable;
- (id)cancellationSemaphore;
- (id /* block */)completionHandler;
- (id)imageRequestHandlerForHandler:(id)arg1 error:(id*)arg2;
- (id)initWithName:(id)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
- (BOOL)internalCancelRequestWithHandler:(id)arg1 error:(id*)arg2;
- (BOOL)internalProcessWithHandler:(id)arg1 error:(id*)arg2;
- (id)options;
- (BOOL)processWithHandler:(id)arg1 error:(id*)arg2;
- (void)recordWarning:(id)arg1 value:(id)arg2;
- (id)requestName;
- (id)results;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })roi;
- (void)setCancellable:(BOOL)arg1;
- (void)setCancellationSemaphore:(id)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setResults:(id)arg1;
- (void)setRoi:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)valueForWarning:(id)arg1;
- (id)warnings;

@end
