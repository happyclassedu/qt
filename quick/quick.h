#ifdef __cplusplus
extern "C" {
#endif

void QQuickFramebufferObject_SetTextureFollowsItemSize(void* ptr, int follows);
int QQuickFramebufferObject_TextureFollowsItemSize(void* ptr);
int QQuickFramebufferObject_IsTextureProvider(void* ptr);
void QQuickFramebufferObject_ReleaseResources(void* ptr);
void QQuickFramebufferObject_ConnectTextureFollowsItemSizeChanged(void* ptr);
void QQuickFramebufferObject_DisconnectTextureFollowsItemSizeChanged(void* ptr);
void* QQuickFramebufferObject_TextureProvider(void* ptr);
void* QQuickImageProvider_NewQQuickImageProvider(int ty, int flags);
int QQuickImageProvider_Flags(void* ptr);
int QQuickImageProvider_ImageType(void* ptr);
void QQuickImageProvider_DestroyQQuickImageProvider(void* ptr);
char* QQuickImageProvider_ObjectNameAbs(void* ptr);
void QQuickImageProvider_SetObjectNameAbs(void* ptr, char* name);
void* QQuickItem_NewQQuickItem(void* parent);
int QQuickItem_ActiveFocusOnTab(void* ptr);
int QQuickItem_Antialiasing(void* ptr);
double QQuickItem_BaselineOffset(void* ptr);
int QQuickItem_Clip(void* ptr);
int QQuickItem_HasActiveFocus(void* ptr);
int QQuickItem_HasFocus(void* ptr);
double QQuickItem_Height(void* ptr);
double QQuickItem_ImplicitHeight(void* ptr);
int QQuickItem_IsEnabled(void* ptr);
int QQuickItem_IsTextureProvider(void* ptr);
int QQuickItem_IsVisible(void* ptr);
double QQuickItem_Opacity(void* ptr);
void* QQuickItem_ParentItem(void* ptr);
void QQuickItem_ResetAntialiasing(void* ptr);
void QQuickItem_ResetHeight(void* ptr);
void QQuickItem_ResetWidth(void* ptr);
double QQuickItem_Rotation(void* ptr);
double QQuickItem_Scale(void* ptr);
void QQuickItem_SetActiveFocusOnTab(void* ptr, int v);
void QQuickItem_SetAntialiasing(void* ptr, int v);
void QQuickItem_SetBaselineOffset(void* ptr, double v);
void QQuickItem_SetClip(void* ptr, int v);
void QQuickItem_SetEnabled(void* ptr, int v);
void QQuickItem_SetFocus(void* ptr, int v);
void QQuickItem_SetFocus2(void* ptr, int focus, int reason);
void QQuickItem_SetHeight(void* ptr, double v);
void QQuickItem_SetImplicitHeight(void* ptr, double v);
void QQuickItem_SetImplicitWidth(void* ptr, double v);
void QQuickItem_SetOpacity(void* ptr, double v);
void QQuickItem_SetParentItem(void* ptr, void* parent);
void QQuickItem_SetRotation(void* ptr, double v);
void QQuickItem_SetScale(void* ptr, double v);
void QQuickItem_SetSmooth(void* ptr, int v);
void QQuickItem_SetState(void* ptr, char* v);
void QQuickItem_SetTransformOrigin(void* ptr, int v);
void QQuickItem_SetVisible(void* ptr, int v);
void QQuickItem_SetWidth(void* ptr, double v);
void QQuickItem_SetX(void* ptr, double v);
void QQuickItem_SetY(void* ptr, double v);
void QQuickItem_SetZ(void* ptr, double v);
int QQuickItem_Smooth(void* ptr);
char* QQuickItem_State(void* ptr);
void* QQuickItem_TextureProvider(void* ptr);
int QQuickItem_TransformOrigin(void* ptr);
double QQuickItem_Width(void* ptr);
double QQuickItem_X(void* ptr);
double QQuickItem_Y(void* ptr);
double QQuickItem_Z(void* ptr);
int QQuickItem_AcceptHoverEvents(void* ptr);
int QQuickItem_AcceptedMouseButtons(void* ptr);
void* QQuickItem_ChildAt(void* ptr, double x, double y);
int QQuickItem_Contains(void* ptr, void* point);
int QQuickItem_FiltersChildMouseEvents(void* ptr);
int QQuickItem_Flags(void* ptr);
void QQuickItem_ForceActiveFocus(void* ptr);
void QQuickItem_ForceActiveFocus2(void* ptr, int reason);
void QQuickItem_GrabMouse(void* ptr);
double QQuickItem_ImplicitWidth(void* ptr);
void* QQuickItem_InputMethodQuery(void* ptr, int query);
int QQuickItem_IsFocusScope(void* ptr);
int QQuickItem_KeepMouseGrab(void* ptr);
int QQuickItem_KeepTouchGrab(void* ptr);
void* QQuickItem_NextItemInFocusChain(void* ptr, int forward);
void QQuickItem_Polish(void* ptr);
void* QQuickItem_ScopedFocusItem(void* ptr);
void QQuickItem_SetAcceptHoverEvents(void* ptr, int enabled);
void QQuickItem_SetAcceptedMouseButtons(void* ptr, int buttons);
void QQuickItem_SetCursor(void* ptr, void* cursor);
void QQuickItem_SetFiltersChildMouseEvents(void* ptr, int filter);
void QQuickItem_SetFlag(void* ptr, int flag, int enabled);
void QQuickItem_SetFlags(void* ptr, int flags);
void QQuickItem_SetKeepMouseGrab(void* ptr, int keep);
void QQuickItem_SetKeepTouchGrab(void* ptr, int keep);
void QQuickItem_StackAfter(void* ptr, void* sibling);
void QQuickItem_StackBefore(void* ptr, void* sibling);
void QQuickItem_UngrabMouse(void* ptr);
void QQuickItem_UngrabTouchPoints(void* ptr);
void QQuickItem_UnsetCursor(void* ptr);
void QQuickItem_Update(void* ptr);
void* QQuickItem_Window(void* ptr);
void QQuickItem_ConnectWindowChanged(void* ptr);
void QQuickItem_DisconnectWindowChanged(void* ptr);
void QQuickItem_DestroyQQuickItem(void* ptr);
void* QQuickItemGrabResult_Url(void* ptr);
void QQuickItemGrabResult_ConnectReady(void* ptr);
void QQuickItemGrabResult_DisconnectReady(void* ptr);
int QQuickItemGrabResult_SaveToFile(void* ptr, char* fileName);
double QQuickPaintedItem_ContentsScale(void* ptr);
void* QQuickPaintedItem_ContentsSize(void* ptr);
void* QQuickPaintedItem_FillColor(void* ptr);
int QQuickPaintedItem_RenderTarget(void* ptr);
void QQuickPaintedItem_SetContentsScale(void* ptr, double v);
void QQuickPaintedItem_SetContentsSize(void* ptr, void* v);
void QQuickPaintedItem_SetFillColor(void* ptr, void* v);
void QQuickPaintedItem_SetRenderTarget(void* ptr, int target);
int QQuickPaintedItem_Antialiasing(void* ptr);
void QQuickPaintedItem_ConnectContentsScaleChanged(void* ptr);
void QQuickPaintedItem_DisconnectContentsScaleChanged(void* ptr);
void QQuickPaintedItem_ConnectContentsSizeChanged(void* ptr);
void QQuickPaintedItem_DisconnectContentsSizeChanged(void* ptr);
void QQuickPaintedItem_ConnectFillColorChanged(void* ptr);
void QQuickPaintedItem_DisconnectFillColorChanged(void* ptr);
int QQuickPaintedItem_IsTextureProvider(void* ptr);
int QQuickPaintedItem_Mipmap(void* ptr);
int QQuickPaintedItem_OpaquePainting(void* ptr);
void QQuickPaintedItem_Paint(void* ptr, void* painter);
int QQuickPaintedItem_PerformanceHints(void* ptr);
void QQuickPaintedItem_ConnectRenderTargetChanged(void* ptr);
void QQuickPaintedItem_DisconnectRenderTargetChanged(void* ptr);
void QQuickPaintedItem_ResetContentsSize(void* ptr);
void QQuickPaintedItem_SetAntialiasing(void* ptr, int enable);
void QQuickPaintedItem_SetMipmap(void* ptr, int enable);
void QQuickPaintedItem_SetOpaquePainting(void* ptr, int opaque);
void QQuickPaintedItem_SetPerformanceHint(void* ptr, int hint, int enabled);
void QQuickPaintedItem_SetPerformanceHints(void* ptr, int hints);
void* QQuickPaintedItem_TextureProvider(void* ptr);
void QQuickPaintedItem_Update(void* ptr, void* rect);
void QQuickPaintedItem_DestroyQQuickPaintedItem(void* ptr);
void* QQuickRenderControl_NewQQuickRenderControl(void* parent);
void QQuickRenderControl_Initialize(void* ptr, void* gl);
void QQuickRenderControl_Invalidate(void* ptr);
void QQuickRenderControl_PolishItems(void* ptr);
void QQuickRenderControl_PrepareThread(void* ptr, void* targetThread);
void QQuickRenderControl_Render(void* ptr);
void QQuickRenderControl_ConnectRenderRequested(void* ptr);
void QQuickRenderControl_DisconnectRenderRequested(void* ptr);
void* QQuickRenderControl_RenderWindow(void* ptr, void* offset);
void* QQuickRenderControl_QQuickRenderControl_RenderWindowFor(void* win, void* offset);
void QQuickRenderControl_ConnectSceneChanged(void* ptr);
void QQuickRenderControl_DisconnectSceneChanged(void* ptr);
int QQuickRenderControl_Sync(void* ptr);
void QQuickRenderControl_DestroyQQuickRenderControl(void* ptr);
void* QQuickTextDocument_NewQQuickTextDocument(void* parent);
void* QQuickTextDocument_TextDocument(void* ptr);
void* QQuickTextureFactory_CreateTexture(void* ptr, void* window);
int QQuickTextureFactory_TextureByteCount(void* ptr);
void* QQuickTextureFactory_TextureSize(void* ptr);
void QQuickTextureFactory_DestroyQQuickTextureFactory(void* ptr);
int QQuickView_ResizeMode(void* ptr);
void QQuickView_SetResizeMode(void* ptr, int v);
int QQuickView_Status(void* ptr);
void* QQuickView_NewQQuickView2(void* engine, void* parent);
void* QQuickView_NewQQuickView(void* parent);
void* QQuickView_NewQQuickView3(void* source, void* parent);
void* QQuickView_Engine(void* ptr);
void* QQuickView_InitialSize(void* ptr);
void* QQuickView_RootContext(void* ptr);
void* QQuickView_RootObject(void* ptr);
void QQuickView_SetSource(void* ptr, void* url);
void* QQuickView_Source(void* ptr);
void QQuickView_ConnectStatusChanged(void* ptr);
void QQuickView_DisconnectStatusChanged(void* ptr);
void QQuickView_DestroyQQuickView(void* ptr);
int QQuickWidget_ResizeMode(void* ptr);
void QQuickWidget_SetResizeMode(void* ptr, int v);
int QQuickWidget_Status(void* ptr);
void* QQuickWidget_NewQQuickWidget2(void* engine, void* parent);
void* QQuickWidget_NewQQuickWidget(void* parent);
void* QQuickWidget_NewQQuickWidget3(void* source, void* parent);
void* QQuickWidget_Engine(void* ptr);
void* QQuickWidget_InitialSize(void* ptr);
void* QQuickWidget_QuickWindow(void* ptr);
void* QQuickWidget_RootContext(void* ptr);
void* QQuickWidget_RootObject(void* ptr);
void QQuickWidget_ConnectSceneGraphError(void* ptr);
void QQuickWidget_DisconnectSceneGraphError(void* ptr);
void QQuickWidget_SetClearColor(void* ptr, void* color);
void QQuickWidget_SetFormat(void* ptr, void* format);
void QQuickWidget_SetSource(void* ptr, void* url);
void QQuickWidget_ConnectStatusChanged(void* ptr);
void QQuickWidget_DisconnectStatusChanged(void* ptr);
void* QQuickWidget_Source(void* ptr);
void QQuickWidget_DestroyQQuickWidget(void* ptr);
void* QQuickWindow_ActiveFocusItem(void* ptr);
void* QQuickWindow_Color(void* ptr);
void* QQuickWindow_ContentItem(void* ptr);
void QQuickWindow_SetColor(void* ptr, void* color);
void* QQuickWindow_NewQQuickWindow(void* parent);
void* QQuickWindow_AccessibleRoot(void* ptr);
void QQuickWindow_ConnectActiveFocusItemChanged(void* ptr);
void QQuickWindow_DisconnectActiveFocusItemChanged(void* ptr);
void QQuickWindow_ConnectAfterAnimating(void* ptr);
void QQuickWindow_DisconnectAfterAnimating(void* ptr);
void QQuickWindow_ConnectAfterRendering(void* ptr);
void QQuickWindow_DisconnectAfterRendering(void* ptr);
void QQuickWindow_ConnectAfterSynchronizing(void* ptr);
void QQuickWindow_DisconnectAfterSynchronizing(void* ptr);
void QQuickWindow_ConnectBeforeRendering(void* ptr);
void QQuickWindow_DisconnectBeforeRendering(void* ptr);
void QQuickWindow_ConnectBeforeSynchronizing(void* ptr);
void QQuickWindow_DisconnectBeforeSynchronizing(void* ptr);
int QQuickWindow_ClearBeforeRendering(void* ptr);
void QQuickWindow_ConnectColorChanged(void* ptr);
void QQuickWindow_DisconnectColorChanged(void* ptr);
void* QQuickWindow_CreateTextureFromImage2(void* ptr, void* image);
void* QQuickWindow_CreateTextureFromImage(void* ptr, void* image, int options);
double QQuickWindow_EffectiveDevicePixelRatio(void* ptr);
void QQuickWindow_ConnectFrameSwapped(void* ptr);
void QQuickWindow_DisconnectFrameSwapped(void* ptr);
int QQuickWindow_QQuickWindow_HasDefaultAlphaBuffer();
void* QQuickWindow_IncubationController(void* ptr);
int QQuickWindow_IsPersistentOpenGLContext(void* ptr);
int QQuickWindow_IsPersistentSceneGraph(void* ptr);
int QQuickWindow_IsSceneGraphInitialized(void* ptr);
void* QQuickWindow_MouseGrabberItem(void* ptr);
void* QQuickWindow_OpenglContext(void* ptr);
void QQuickWindow_ConnectOpenglContextCreated(void* ptr);
void QQuickWindow_DisconnectOpenglContextCreated(void* ptr);
void QQuickWindow_ReleaseResources(void* ptr);
void* QQuickWindow_RenderTarget(void* ptr);
void* QQuickWindow_RenderTargetSize(void* ptr);
void QQuickWindow_ResetOpenGLState(void* ptr);
void QQuickWindow_ConnectSceneGraphAboutToStop(void* ptr);
void QQuickWindow_DisconnectSceneGraphAboutToStop(void* ptr);
void QQuickWindow_ConnectSceneGraphError(void* ptr);
void QQuickWindow_DisconnectSceneGraphError(void* ptr);
void QQuickWindow_ConnectSceneGraphInitialized(void* ptr);
void QQuickWindow_DisconnectSceneGraphInitialized(void* ptr);
void QQuickWindow_ConnectSceneGraphInvalidated(void* ptr);
void QQuickWindow_DisconnectSceneGraphInvalidated(void* ptr);
void QQuickWindow_ScheduleRenderJob(void* ptr, void* job, int stage);
int QQuickWindow_SendEvent(void* ptr, void* item, void* e);
void QQuickWindow_SetClearBeforeRendering(void* ptr, int enabled);
void QQuickWindow_QQuickWindow_SetDefaultAlphaBuffer(int useAlpha);
void QQuickWindow_SetPersistentOpenGLContext(void* ptr, int persistent);
void QQuickWindow_SetPersistentSceneGraph(void* ptr, int persistent);
void QQuickWindow_SetRenderTarget(void* ptr, void* fbo);
void QQuickWindow_Update(void* ptr);
void QQuickWindow_DestroyQQuickWindow(void* ptr);
void* QSGAbstractRenderer_ClearColor(void* ptr);
int QSGAbstractRenderer_ClearMode(void* ptr);
void* QSGAbstractRenderer_DeviceRect(void* ptr);
void QSGAbstractRenderer_ConnectSceneGraphChanged(void* ptr);
void QSGAbstractRenderer_DisconnectSceneGraphChanged(void* ptr);
void QSGAbstractRenderer_SetClearColor(void* ptr, void* color);
void QSGAbstractRenderer_SetClearMode(void* ptr, int mode);
void QSGAbstractRenderer_SetDeviceRect(void* ptr, void* rect);
void QSGAbstractRenderer_SetDeviceRect2(void* ptr, void* size);
void QSGAbstractRenderer_SetProjectionMatrix(void* ptr, void* matrix);
void QSGAbstractRenderer_SetProjectionMatrixToRect(void* ptr, void* rect);
void QSGAbstractRenderer_SetViewportRect(void* ptr, void* rect);
void QSGAbstractRenderer_SetViewportRect2(void* ptr, void* size);
void* QSGAbstractRenderer_ViewportRect(void* ptr);
void* QSGBasicGeometryNode_Geometry2(void* ptr);
void* QSGBasicGeometryNode_Geometry(void* ptr);
void QSGBasicGeometryNode_SetGeometry(void* ptr, void* geometry);
void QSGBasicGeometryNode_DestroyQSGBasicGeometryNode(void* ptr);
void* QSGClipNode_NewQSGClipNode();
int QSGClipNode_IsRectangular(void* ptr);
void QSGClipNode_SetClipRect(void* ptr, void* rect);
void QSGClipNode_SetIsRectangular(void* ptr, int rectHint);
void QSGClipNode_DestroyQSGClipNode(void* ptr);
int QSGDynamicTexture_UpdateTexture(void* ptr);
void* QSGEngine_NewQSGEngine(void* parent);
void* QSGEngine_CreateRenderer(void* ptr);
void* QSGEngine_CreateTextureFromImage(void* ptr, void* image, int options);
void QSGEngine_Initialize(void* ptr, void* context);
void QSGEngine_Invalidate(void* ptr);
void QSGEngine_DestroyQSGEngine(void* ptr);
void* QSGFlatColorMaterial_Color(void* ptr);
void QSGFlatColorMaterial_SetColor(void* ptr, void* color);
void QSGGeometry_Allocate(void* ptr, int vertexCount, int indexCount);
int QSGGeometry_AttributeCount(void* ptr);
int QSGGeometry_IndexCount(void* ptr);
void* QSGGeometry_IndexData(void* ptr);
void* QSGGeometry_IndexData2(void* ptr);
int QSGGeometry_IndexDataPattern(void* ptr);
int QSGGeometry_IndexType(void* ptr);
void QSGGeometry_MarkIndexDataDirty(void* ptr);
void QSGGeometry_MarkVertexDataDirty(void* ptr);
void QSGGeometry_SetIndexDataPattern(void* ptr, int p);
void QSGGeometry_SetVertexDataPattern(void* ptr, int p);
int QSGGeometry_SizeOfIndex(void* ptr);
int QSGGeometry_SizeOfVertex(void* ptr);
void QSGGeometry_QSGGeometry_UpdateRectGeometry(void* g, void* rect);
void QSGGeometry_QSGGeometry_UpdateTexturedRectGeometry(void* g, void* rect, void* textureRect);
int QSGGeometry_VertexCount(void* ptr);
void* QSGGeometry_VertexData(void* ptr);
void* QSGGeometry_VertexData2(void* ptr);
int QSGGeometry_VertexDataPattern(void* ptr);
void QSGGeometry_DestroyQSGGeometry(void* ptr);
char* QSGGeometry_ObjectNameAbs(void* ptr);
void QSGGeometry_SetObjectNameAbs(void* ptr, char* name);
void* QSGGeometryNode_NewQSGGeometryNode();
void* QSGGeometryNode_Material(void* ptr);
void* QSGGeometryNode_OpaqueMaterial(void* ptr);
void QSGGeometryNode_SetMaterial(void* ptr, void* material);
void QSGGeometryNode_SetOpaqueMaterial(void* ptr, void* material);
void QSGGeometryNode_DestroyQSGGeometryNode(void* ptr);
int QSGMaterial_Compare(void* ptr, void* other);
void* QSGMaterial_CreateShader(void* ptr);
int QSGMaterial_Flags(void* ptr);
void QSGMaterial_SetFlag(void* ptr, int flags, int on);
void* QSGMaterial_Type(void* ptr);
char* QSGMaterial_ObjectNameAbs(void* ptr);
void QSGMaterial_SetObjectNameAbs(void* ptr, char* name);
void QSGMaterialShader_Activate(void* ptr);
void QSGMaterialShader_Deactivate(void* ptr);
void* QSGMaterialShader_Program(void* ptr);
char* QSGMaterialShader_ObjectNameAbs(void* ptr);
void QSGMaterialShader_SetObjectNameAbs(void* ptr, char* name);
void* QSGNode_ChildAtIndex(void* ptr, int i);
int QSGNode_ChildCount(void* ptr);
void* QSGNode_NewQSGNode();
void QSGNode_AppendChildNode(void* ptr, void* node);
void* QSGNode_FirstChild(void* ptr);
int QSGNode_Flags(void* ptr);
void QSGNode_InsertChildNodeAfter(void* ptr, void* node, void* after);
void QSGNode_InsertChildNodeBefore(void* ptr, void* node, void* before);
int QSGNode_IsSubtreeBlocked(void* ptr);
void* QSGNode_LastChild(void* ptr);
void QSGNode_MarkDirty(void* ptr, int bits);
void* QSGNode_NextSibling(void* ptr);
void* QSGNode_Parent(void* ptr);
void QSGNode_PrependChildNode(void* ptr, void* node);
void QSGNode_Preprocess(void* ptr);
void* QSGNode_PreviousSibling(void* ptr);
void QSGNode_RemoveAllChildNodes(void* ptr);
void QSGNode_RemoveChildNode(void* ptr, void* node);
void QSGNode_SetFlag(void* ptr, int f, int enabled);
void QSGNode_SetFlags(void* ptr, int f, int enabled);
int QSGNode_Type(void* ptr);
void QSGNode_DestroyQSGNode(void* ptr);
char* QSGNode_ObjectNameAbs(void* ptr);
void QSGNode_SetObjectNameAbs(void* ptr, char* name);
void* QSGOpacityNode_NewQSGOpacityNode();
double QSGOpacityNode_Opacity(void* ptr);
void QSGOpacityNode_SetOpacity(void* ptr, double opacity);
void QSGOpacityNode_DestroyQSGOpacityNode(void* ptr);
int QSGOpaqueTextureMaterial_Filtering(void* ptr);
int QSGOpaqueTextureMaterial_HorizontalWrapMode(void* ptr);
int QSGOpaqueTextureMaterial_MipmapFiltering(void* ptr);
void QSGOpaqueTextureMaterial_SetFiltering(void* ptr, int filtering);
void QSGOpaqueTextureMaterial_SetHorizontalWrapMode(void* ptr, int mode);
void QSGOpaqueTextureMaterial_SetMipmapFiltering(void* ptr, int filtering);
void QSGOpaqueTextureMaterial_SetTexture(void* ptr, void* texture);
void QSGOpaqueTextureMaterial_SetVerticalWrapMode(void* ptr, int mode);
void* QSGOpaqueTextureMaterial_Texture(void* ptr);
int QSGOpaqueTextureMaterial_VerticalWrapMode(void* ptr);
void* QSGSimpleRectNode_NewQSGSimpleRectNode2();
void* QSGSimpleRectNode_NewQSGSimpleRectNode(void* rect, void* color);
void* QSGSimpleRectNode_Color(void* ptr);
void QSGSimpleRectNode_SetColor(void* ptr, void* color);
void QSGSimpleRectNode_SetRect(void* ptr, void* rect);
void QSGSimpleRectNode_SetRect2(void* ptr, double x, double y, double w, double h);
void* QSGSimpleTextureNode_NewQSGSimpleTextureNode();
int QSGSimpleTextureNode_Filtering(void* ptr);
int QSGSimpleTextureNode_OwnsTexture(void* ptr);
void QSGSimpleTextureNode_SetFiltering(void* ptr, int filtering);
void QSGSimpleTextureNode_SetOwnsTexture(void* ptr, int owns);
void QSGSimpleTextureNode_SetRect(void* ptr, void* r);
void QSGSimpleTextureNode_SetRect2(void* ptr, double x, double y, double w, double h);
void QSGSimpleTextureNode_SetSourceRect(void* ptr, void* r);
void QSGSimpleTextureNode_SetSourceRect2(void* ptr, double x, double y, double w, double h);
void QSGSimpleTextureNode_SetTexture(void* ptr, void* texture);
void QSGSimpleTextureNode_SetTextureCoordinatesTransform(void* ptr, int mode);
void* QSGSimpleTextureNode_Texture(void* ptr);
int QSGSimpleTextureNode_TextureCoordinatesTransform(void* ptr);
void QSGSimpleTextureNode_DestroyQSGSimpleTextureNode(void* ptr);
void QSGTexture_Bind(void* ptr);
int QSGTexture_Filtering(void* ptr);
int QSGTexture_HasAlphaChannel(void* ptr);
int QSGTexture_HasMipmaps(void* ptr);
int QSGTexture_HorizontalWrapMode(void* ptr);
int QSGTexture_IsAtlasTexture(void* ptr);
int QSGTexture_MipmapFiltering(void* ptr);
void* QSGTexture_RemovedFromAtlas(void* ptr);
void QSGTexture_SetFiltering(void* ptr, int filter);
void QSGTexture_SetHorizontalWrapMode(void* ptr, int hwrap);
void QSGTexture_SetMipmapFiltering(void* ptr, int filter);
void QSGTexture_SetVerticalWrapMode(void* ptr, int vwrap);
int QSGTexture_TextureId(void* ptr);
void* QSGTexture_TextureSize(void* ptr);
void QSGTexture_UpdateBindOptions(void* ptr, int force);
int QSGTexture_VerticalWrapMode(void* ptr);
void QSGTexture_DestroyQSGTexture(void* ptr);
void* QSGTextureProvider_Texture(void* ptr);
void QSGTextureProvider_ConnectTextureChanged(void* ptr);
void QSGTextureProvider_DisconnectTextureChanged(void* ptr);
void* QSGTransformNode_NewQSGTransformNode();
void QSGTransformNode_SetMatrix(void* ptr, void* matrix);
void QSGTransformNode_DestroyQSGTransformNode(void* ptr);

#ifdef __cplusplus
}
#endif