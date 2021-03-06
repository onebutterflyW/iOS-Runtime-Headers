/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
 */

@interface AUPBClientManager : NSObject <AUPBInspecting, AUPBRegistrarListening> {
    struct vector<NewServerListener, std::__1::allocator<NewServerListener> > { 
        struct NewServerListener {} *__begin_; 
        struct NewServerListener {} *__end_; 
        struct __compressed_pair<NewServerListener *, std::__1::allocator<NewServerListener> > { 
            struct NewServerListener {} *__first_; 
        } __end_cap_; 
    }  mNewServerListeners;
    struct vector<PropertyListener, std::__1::allocator<PropertyListener> > { 
        struct PropertyListener {} *__begin_; 
        struct PropertyListener {} *__end_; 
        struct __compressed_pair<PropertyListener *, std::__1::allocator<PropertyListener> > { 
            struct PropertyListener {} *__first_; 
        } __end_cap_; 
    }  mPropertyListeners;
    <AUPBRegistrarHosting> * mProxyInterface;
    NSXPCConnection * mRegistrarConnection;
    NSMutableArray * mRemoteServers;
    unsigned int  mServerRefCounter;
    NSObject<OS_dispatch_queue> * mTouchServersQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)sharedInstance;

- (id).cxx_construct;
- (void).cxx_destruct;
- (long)addNewServerListener:(int (*)arg1 withUserData:(void*)arg2;
- (long)addPropertyListener:(int (*)arg1 onServer:(struct OpaqueAUPBServer { }*)arg2 block:(struct OpaqueAUPB { }*)arg3 property:(unsigned long)arg4 withUserData:(void*)arg5;
- (unsigned int)auHandleFromRef:(struct OpaqueRemoteAudioUnit { }*)arg1;
- (struct OpaqueRemoteAudioUnit { }*)auRefFromHandle:(unsigned int)arg1;
- (struct OpaqueAUPB { }*)aupbRefFromHandle:(unsigned int)arg1;
- (id)autorelease;
- (long)copyPBProperty:(unsigned long)arg1 onServer:(struct OpaqueAUPBServer { }*)arg2 block:(struct OpaqueAUPB { }*)arg3 intoValue:(const void**)arg4;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (long)getAUParameter:(unsigned long)arg1 onServer:(struct OpaqueAUPBServer { }*)arg2 audioUnit:(struct OpaqueRemoteAudioUnit { }*)arg3 scope:(unsigned long)arg4 element:(unsigned long)arg5 copiedIntoValue:(float*)arg6;
- (long)getAUProperty:(unsigned long)arg1 onServer:(struct OpaqueAUPBServer { }*)arg2 audioUnit:(struct OpaqueRemoteAudioUnit { }*)arg3 scope:(unsigned long)arg4 element:(unsigned long)arg5 copiedIntoBufer:(void**)arg6 withSize:(unsigned int*)arg7;
- (long)getAUPropertyInfo:(unsigned long)arg1 onServer:(struct OpaqueAUPBServer { }*)arg2 audioUnit:(struct OpaqueRemoteAudioUnit { }*)arg3 scope:(unsigned long)arg4 element:(unsigned long)arg5 intoDataSize:(unsigned int*)arg6 writeable:(char *)arg7;
- (long)getSerialAUProperty:(unsigned long)arg1 onServer:(struct OpaqueAUPBServer { }*)arg2 audioUnit:(struct OpaqueRemoteAudioUnit { }*)arg3 scope:(unsigned long)arg4 element:(unsigned long)arg5 inData:(id*)arg6;
- (void)handleRegistrarCrash;
- (id)init;
- (void)newServerAdded:(id)arg1;
- (void)processingBlock:(unsigned int)arg1 propertiesChanged:(id)arg2 withQualifierData:(id)arg3;
- (void)processingBlock:(unsigned int)arg1 propertyChanged:(unsigned long)arg2;
- (oneway void)release;
- (long)removePropertyListener:(int (*)arg1 onServer:(struct OpaqueAUPBServer { }*)arg2 block:(struct OpaqueAUPB { }*)arg3 property:(unsigned long)arg4 withUserData:(void*)arg5;
- (long)removePropertyListenersForServer:(struct OpaqueAUPBServer { }*)arg1;
- (long)removeServerListener:(int (*)arg1 withUserData:(void*)arg2;
- (id)retain;
- (unsigned int)retainCount;
- (id)serverFromRef:(struct OpaqueAUPBServer { }*)arg1;
- (long)setAUParameter:(unsigned long)arg1 onServer:(struct OpaqueAUPBServer { }*)arg2 audioUnit:(struct OpaqueRemoteAudioUnit { }*)arg3 scope:(unsigned long)arg4 element:(unsigned long)arg5 value:(float)arg6;
- (long)setAUProperty:(unsigned long)arg1 onServer:(struct OpaqueAUPBServer { }*)arg2 audioUnit:(struct OpaqueRemoteAudioUnit { }*)arg3 scope:(unsigned long)arg4 element:(unsigned long)arg5 withValue:(const void*)arg6 size:(unsigned long)arg7;
- (long)setPBProperty:(unsigned long)arg1 onServer:(struct OpaqueAUPBServer { }*)arg2 block:(struct OpaqueAUPB { }*)arg3 value:(void*)arg4;
- (long)setSerialAUProperty:(unsigned long)arg1 onServer:(struct OpaqueAUPBServer { }*)arg2 audioUnit:(struct OpaqueRemoteAudioUnit { }*)arg3 scope:(unsigned long)arg4 element:(unsigned long)arg5 toData:(id)arg6;
- (void)startRegistarConnection;

@end
