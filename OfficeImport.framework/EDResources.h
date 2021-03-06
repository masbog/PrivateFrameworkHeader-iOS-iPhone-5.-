/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class EDStylesCollection, EDFontsCollection, EDTableStylesCollection, EDColorsCollection, EDLinksCollection, EDCollection, EDContentFormatsCollection;

@interface EDResources : NSObject  {
    EDCollection *mStrings;
    EDContentFormatsCollection *mContentFormats;
    EDFontsCollection *mFonts;
    EDCollection *mAlignmentInfos;
    EDStylesCollection *mStyles;
    EDColorsCollection *mColors;
    EDColorsCollection *mThemes;
    EDCollection *mNames;
    EDLinksCollection *mLinks;
    EDCollection *mBorders;
    EDCollection *mBorder;
    EDCollection *mFills;
    EDCollection *mDifferentialStyles;
    EDTableStylesCollection *mTableStyles;
}


- (void)setThemes:(id)arg1;
- (id)initWithStringOptimization:(bool)arg1;
- (id)contentFormats;
- (id)alignmentInfos;
- (id)fills;
- (id)tableStyles;
- (id)fonts;
- (id)differentialStyles;
- (id)themes;
- (id)borders;
- (id)styles;
- (id)border;
- (id)names;
- (id)colors;
- (void)setColors:(id)arg1;
- (id)strings;
- (id)links;
- (void)dealloc;

@end
