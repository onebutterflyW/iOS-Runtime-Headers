/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface _MFParsedHTMLNode : NSObject <MFMessageBodyConsumableInnerTextNode, MFMessageBodyTreeNode> {
    NSMutableArray * _childNodes;
    unsigned int  _endLocation;
    NSString * _htmlString;
    _MFParsedHTMLNode * _nextSibling;
    _MFParsedHTMLNode * _parentNode;
    unsigned int  _startLocation;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned int endLocation;
@property (nonatomic, readonly) _MFParsedHTMLNode *firstChild;
@property (nonatomic, readonly) BOOL hasChildNodes;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) NSString *htmlString;
@property (nonatomic, readonly) _MFParsedHTMLNode *lastChild;
@property (nonatomic) _MFParsedHTMLNode *nextSibling;
@property (nonatomic) _MFParsedHTMLNode *parentNode;
@property (nonatomic) unsigned int startLocation;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *tagName;

- (void)addRecursiveDescriptionWithLevel:(unsigned int)arg1 toString:(id)arg2;
- (void)appendChild:(id)arg1;
- (void)collectDescendanceIntoArray:(id)arg1;
- (id)copyConsumableNodesAndAppendInnerTextToStringAccumulator:(id)arg1;
- (id)copyMutableConsumableNodesAndAppendInnerTextToStringAccumulator:(id)arg1;
- (void)dealloc;
- (unsigned int)endLocation;
- (id)firstChild;
- (BOOL)hasChildNodes;
- (id)htmlString;
- (id)init;
- (id)lastChild;
- (id)nextSibling;
- (id)parentNode;
- (id)recursiveDescription;
- (void)setEndLocation:(unsigned int)arg1;
- (void)setHtmlString:(id)arg1;
- (void)setNextSibling:(id)arg1;
- (void)setParentNode:(id)arg1;
- (void)setStartLocation:(unsigned int)arg1;
- (unsigned int)startLocation;
- (id)tagName;

@end
