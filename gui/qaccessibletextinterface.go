package gui

//#include "gui.h"
import "C"
import (
	"github.com/therecipe/qt"
	"github.com/therecipe/qt/core"
	"unsafe"
)

type QAccessibleTextInterface struct {
	ptr unsafe.Pointer
}

type QAccessibleTextInterface_ITF interface {
	QAccessibleTextInterface_PTR() *QAccessibleTextInterface
}

func (p *QAccessibleTextInterface) Pointer() unsafe.Pointer {
	return p.ptr
}

func (p *QAccessibleTextInterface) SetPointer(ptr unsafe.Pointer) {
	p.ptr = ptr
}

func PointerFromQAccessibleTextInterface(ptr QAccessibleTextInterface_ITF) unsafe.Pointer {
	if ptr != nil {
		return ptr.QAccessibleTextInterface_PTR().Pointer()
	}
	return nil
}

func NewQAccessibleTextInterfaceFromPointer(ptr unsafe.Pointer) *QAccessibleTextInterface {
	var n = new(QAccessibleTextInterface)
	n.SetPointer(ptr)
	for len(n.ObjectNameAbs()) < len("QAccessibleTextInterface_") {
		n.SetObjectNameAbs("QAccessibleTextInterface_" + qt.Identifier())
	}
	return n
}

func (ptr *QAccessibleTextInterface) QAccessibleTextInterface_PTR() *QAccessibleTextInterface {
	return ptr
}

func (ptr *QAccessibleTextInterface) AddSelection(startOffset int, endOffset int) {
	defer qt.Recovering("QAccessibleTextInterface::addSelection")

	if ptr.Pointer() != nil {
		C.QAccessibleTextInterface_AddSelection(ptr.Pointer(), C.int(startOffset), C.int(endOffset))
	}
}

func (ptr *QAccessibleTextInterface) Attributes(offset int, startOffset int, endOffset int) string {
	defer qt.Recovering("QAccessibleTextInterface::attributes")

	if ptr.Pointer() != nil {
		return C.GoString(C.QAccessibleTextInterface_Attributes(ptr.Pointer(), C.int(offset), C.int(startOffset), C.int(endOffset)))
	}
	return ""
}

func (ptr *QAccessibleTextInterface) CharacterCount() int {
	defer qt.Recovering("QAccessibleTextInterface::characterCount")

	if ptr.Pointer() != nil {
		return int(C.QAccessibleTextInterface_CharacterCount(ptr.Pointer()))
	}
	return 0
}

func (ptr *QAccessibleTextInterface) CharacterRect(offset int) *core.QRect {
	defer qt.Recovering("QAccessibleTextInterface::characterRect")

	if ptr.Pointer() != nil {
		return core.NewQRectFromPointer(C.QAccessibleTextInterface_CharacterRect(ptr.Pointer(), C.int(offset)))
	}
	return nil
}

func (ptr *QAccessibleTextInterface) CursorPosition() int {
	defer qt.Recovering("QAccessibleTextInterface::cursorPosition")

	if ptr.Pointer() != nil {
		return int(C.QAccessibleTextInterface_CursorPosition(ptr.Pointer()))
	}
	return 0
}

func (ptr *QAccessibleTextInterface) OffsetAtPoint(point core.QPoint_ITF) int {
	defer qt.Recovering("QAccessibleTextInterface::offsetAtPoint")

	if ptr.Pointer() != nil {
		return int(C.QAccessibleTextInterface_OffsetAtPoint(ptr.Pointer(), core.PointerFromQPoint(point)))
	}
	return 0
}

func (ptr *QAccessibleTextInterface) RemoveSelection(selectionIndex int) {
	defer qt.Recovering("QAccessibleTextInterface::removeSelection")

	if ptr.Pointer() != nil {
		C.QAccessibleTextInterface_RemoveSelection(ptr.Pointer(), C.int(selectionIndex))
	}
}

func (ptr *QAccessibleTextInterface) ScrollToSubstring(startIndex int, endIndex int) {
	defer qt.Recovering("QAccessibleTextInterface::scrollToSubstring")

	if ptr.Pointer() != nil {
		C.QAccessibleTextInterface_ScrollToSubstring(ptr.Pointer(), C.int(startIndex), C.int(endIndex))
	}
}

func (ptr *QAccessibleTextInterface) Selection(selectionIndex int, startOffset int, endOffset int) {
	defer qt.Recovering("QAccessibleTextInterface::selection")

	if ptr.Pointer() != nil {
		C.QAccessibleTextInterface_Selection(ptr.Pointer(), C.int(selectionIndex), C.int(startOffset), C.int(endOffset))
	}
}

func (ptr *QAccessibleTextInterface) SelectionCount() int {
	defer qt.Recovering("QAccessibleTextInterface::selectionCount")

	if ptr.Pointer() != nil {
		return int(C.QAccessibleTextInterface_SelectionCount(ptr.Pointer()))
	}
	return 0
}

func (ptr *QAccessibleTextInterface) SetCursorPosition(position int) {
	defer qt.Recovering("QAccessibleTextInterface::setCursorPosition")

	if ptr.Pointer() != nil {
		C.QAccessibleTextInterface_SetCursorPosition(ptr.Pointer(), C.int(position))
	}
}

func (ptr *QAccessibleTextInterface) SetSelection(selectionIndex int, startOffset int, endOffset int) {
	defer qt.Recovering("QAccessibleTextInterface::setSelection")

	if ptr.Pointer() != nil {
		C.QAccessibleTextInterface_SetSelection(ptr.Pointer(), C.int(selectionIndex), C.int(startOffset), C.int(endOffset))
	}
}

func (ptr *QAccessibleTextInterface) Text(startOffset int, endOffset int) string {
	defer qt.Recovering("QAccessibleTextInterface::text")

	if ptr.Pointer() != nil {
		return C.GoString(C.QAccessibleTextInterface_Text(ptr.Pointer(), C.int(startOffset), C.int(endOffset)))
	}
	return ""
}

func (ptr *QAccessibleTextInterface) TextAfterOffset(offset int, boundaryType QAccessible__TextBoundaryType, startOffset int, endOffset int) string {
	defer qt.Recovering("QAccessibleTextInterface::textAfterOffset")

	if ptr.Pointer() != nil {
		return C.GoString(C.QAccessibleTextInterface_TextAfterOffset(ptr.Pointer(), C.int(offset), C.int(boundaryType), C.int(startOffset), C.int(endOffset)))
	}
	return ""
}

func (ptr *QAccessibleTextInterface) TextAtOffset(offset int, boundaryType QAccessible__TextBoundaryType, startOffset int, endOffset int) string {
	defer qt.Recovering("QAccessibleTextInterface::textAtOffset")

	if ptr.Pointer() != nil {
		return C.GoString(C.QAccessibleTextInterface_TextAtOffset(ptr.Pointer(), C.int(offset), C.int(boundaryType), C.int(startOffset), C.int(endOffset)))
	}
	return ""
}

func (ptr *QAccessibleTextInterface) TextBeforeOffset(offset int, boundaryType QAccessible__TextBoundaryType, startOffset int, endOffset int) string {
	defer qt.Recovering("QAccessibleTextInterface::textBeforeOffset")

	if ptr.Pointer() != nil {
		return C.GoString(C.QAccessibleTextInterface_TextBeforeOffset(ptr.Pointer(), C.int(offset), C.int(boundaryType), C.int(startOffset), C.int(endOffset)))
	}
	return ""
}

func (ptr *QAccessibleTextInterface) DestroyQAccessibleTextInterface() {
	defer qt.Recovering("QAccessibleTextInterface::~QAccessibleTextInterface")

	if ptr.Pointer() != nil {
		C.QAccessibleTextInterface_DestroyQAccessibleTextInterface(ptr.Pointer())
	}
}

func (ptr *QAccessibleTextInterface) ObjectNameAbs() string {
	defer qt.Recovering("QAccessibleTextInterface::objectNameAbs")

	if ptr.Pointer() != nil {
		return C.GoString(C.QAccessibleTextInterface_ObjectNameAbs(ptr.Pointer()))
	}
	return ""
}

func (ptr *QAccessibleTextInterface) SetObjectNameAbs(name string) {
	defer qt.Recovering("QAccessibleTextInterface::setObjectNameAbs")

	if ptr.Pointer() != nil {
		C.QAccessibleTextInterface_SetObjectNameAbs(ptr.Pointer(), C.CString(name))
	}
}
