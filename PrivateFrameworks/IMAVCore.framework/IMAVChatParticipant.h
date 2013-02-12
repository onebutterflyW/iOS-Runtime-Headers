/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
 */

@class IMAVChat, IMHandle, NSData, NSDictionary, NSOperationQueue, NSString, NSTimer;

@interface IMAVChatParticipant : NSObject {
    unsigned int _inviteDelivered : 1;
    unsigned int _sendingAudio : 1;
    unsigned int _sendingVideo : 1;
    unsigned int _sendingAuxVideo : 1;
    unsigned int _audioMuted : 1;
    unsigned int _videoPaused : 1;
    unsigned int _networkStalled : 1;
    unsigned int _isInitiator : 1;
    unsigned int _isAOLInterop : 1;
    unsigned int _isRecording : 1;
    unsigned int _vcSecurityVerified : 1;
    unsigned int _usingICE : 1;
    NSInteger _ardRole;
    IMAVChat *_avChat;
    NSInteger _avRelayStatus;
    NSUInteger _chatEndedReason;
    NSInteger _chatError;
    NSString *_conferenceID;
    NSTimer *_connectTimeoutTimer;
    NSString *_errorString;
    IMHandle *_imHandle;
    IMHandle *_inviter;
    NSData *_localICEData;
    NSOperationQueue *_messagingQueue;
    NSDictionary *_preemptiveRelayRequest;
    NSDictionary *_properties;
    NSString *_rawErrorString;
    NSData *_remoteICEData;
    struct __SecCertificate { } *_savedCertificate;
    NSUInteger _state;
    NSString *_vcPartyID;
}

- (void)_cancelMessagesQueue;
- (void)_connectTimeout:(id)arg1;
- (void)_enqueueOperation:(id)arg1;
- (void)_flushMessagesQueue;
- (void)_generateErrorStrings;
- (void)_getErrorString:(id*)arg1 rawString:(id*)arg2 forError:(NSInteger)arg3;
- (void)_handleIMAVResponse:(NSUInteger)arg1;
- (id)_initAs:(id)arg1 invitedBy:(id)arg2 sendingAudio:(BOOL)arg3 sendingVideo:(BOOL)arg4 usingICE:(BOOL)arg5 toChat:(id)arg6 inState:(NSUInteger)arg7 withError:(NSInteger)arg8 andReason:(NSUInteger)arg9 andVCPartyID:(id)arg10 account:(id)arg11;
- (void)_noteInviteDelivered;
- (id)_preemptiveRelayInitate;
- (void)_setAudioSendingState:(BOOL)arg1;
- (void)_setConferenceID:(id)arg1;
- (void)_setError:(NSInteger)arg1;
- (void)_setPreemptiveRelayInitate:(id)arg1;
- (void)_setState:(NSUInteger)arg1 withReason:(NSUInteger)arg2 andError:(NSInteger)arg3;
- (void)_setVideoSendingState:(BOOL)arg1;
- (void)_switchToUseNewIMHandle:(id)arg1;
- (NSInteger)ardRole;
- (id)avChat;
- (NSInteger)avRelayStatus;
- (void)cancelInvitation;
- (struct __SecCertificate { }*)certificate;
- (void)dealloc;
- (id)description;
- (void)disconnectFromAVChat;
- (NSInteger)error;
- (id)errorString;
- (id)errorStringFor:(NSInteger)arg1;
- (id)getLocalICEData;
- (id)imHandle;
- (id)init;
- (id)initAs:(id)arg1 invitedBy:(id)arg2 ARDRole:(NSInteger)arg3 toChat:(id)arg4 account:(id)arg5;
- (id)initAs:(id)arg1 invitedBy:(id)arg2 toChat:(id)arg3 account:(id)arg4;
- (id)initWithStatusNugget:(id)arg1 andChat:(id)arg2 account:(id)arg3;
- (id)invitedBy;
- (BOOL)isAOLInterop;
- (BOOL)isAudioMuted;
- (BOOL)isInitiator;
- (BOOL)isLocalParticipant;
- (BOOL)isNetworkStalled;
- (BOOL)isRecording;
- (BOOL)isSendingAudio;
- (BOOL)isSendingAuxVideo;
- (BOOL)isSendingVideo;
- (BOOL)isUsingICE;
- (BOOL)isVideoPaused;
- (id)name;
- (id)properties;
- (id)rawErrorString;
- (NSUInteger)reasonChatEnded;
- (id)rebuildLocalICEData;
- (void)receivedRelayProposalAcceptWithConnectionData:(id)arg1;
- (void)receivedRelayProposalRequestWithConnectionData:(id)arg1;
- (id)remoteErrorParticipant;
- (id)remoteICEData;
- (void)requestIconIfNecessary;
- (void)resetWaitingToConnectTimer;
- (void)sendCounterProposal;
- (void)sendInvitation;
- (void)sendRelayProposal;
- (void)sendResponse:(NSUInteger)arg1;
- (void)sendVCUpdate;
- (void)setAOLInterop:(BOOL)arg1;
- (void)setARDRole:(NSInteger)arg1;
- (void)setAVRelayStatus:(NSInteger)arg1;
- (void)setAudioMuted:(BOOL)arg1;
- (void)setNetworkStalled:(BOOL)arg1;
- (void)setProperties:(id)arg1;
- (void)setRecording:(BOOL)arg1;
- (void)setRemoteICEData:(id)arg1;
- (void)setSavedCertificate:(struct __SecCertificate { }*)arg1;
- (void)setSendingAudioToOtherParticipants:(BOOL)arg1;
- (void)setSendingAuxVideo:(BOOL)arg1;
- (void)setSendingVideoToOtherParticipants:(BOOL)arg1;
- (void)setState:(NSUInteger)arg1;
- (void)setStateToEndedWithReason:(NSUInteger)arg1 andError:(NSInteger)arg2;
- (void)setVCPartyID:(id)arg1;
- (void)setVCSecurityVerified:(BOOL)arg1;
- (void)setVideoPaused:(BOOL)arg1;
- (void)setWaitingToConnect:(BOOL)arg1;
- (NSUInteger)state;
- (id)statusNugget;
- (id)vcPartyID;
- (BOOL)vcSecurityVerified;

@end