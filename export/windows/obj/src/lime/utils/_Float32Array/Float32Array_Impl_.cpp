#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_TAError
#include <lime/utils/TAError.h>
#endif
#ifndef INCLUDED_lime_utils__Float32Array_Float32Array_Impl_
#include <lime/utils/_Float32Array/Float32Array_Impl_.h>
#endif
#ifndef INCLUDED_openfl__Vector_FloatVector
#include <openfl/_Vector/FloatVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IntVector
#include <openfl/_Vector/IntVector.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_da58397c804069e7_102__new,"lime.utils._Float32Array.Float32Array_Impl_","_new",0x58553b4a,"lime.utils._Float32Array.Float32Array_Impl_._new","lime/utils/Float32Array.hx",102,0x8d160228)
HX_LOCAL_STACK_FRAME(_hx_pos_da58397c804069e7_135_subarray,"lime.utils._Float32Array.Float32Array_Impl_","subarray",0xef8b2282,"lime.utils._Float32Array.Float32Array_Impl_.subarray","lime/utils/Float32Array.hx",135,0x8d160228)
HX_LOCAL_STACK_FRAME(_hx_pos_da58397c804069e7_140_fromBytes,"lime.utils._Float32Array.Float32Array_Impl_","fromBytes",0x92abc018,"lime.utils._Float32Array.Float32Array_Impl_.fromBytes","lime/utils/Float32Array.hx",140,0x8d160228)
HX_LOCAL_STACK_FRAME(_hx_pos_da58397c804069e7_145_toBytes,"lime.utils._Float32Array.Float32Array_Impl_","toBytes",0xa58e06a7,"lime.utils._Float32Array.Float32Array_Impl_.toBytes","lime/utils/Float32Array.hx",145,0x8d160228)
HX_LOCAL_STACK_FRAME(_hx_pos_da58397c804069e7_150_toString,"lime.utils._Float32Array.Float32Array_Impl_","toString",0x20789f15,"lime.utils._Float32Array.Float32Array_Impl_.toString","lime/utils/Float32Array.hx",150,0x8d160228)
HX_LOCAL_STACK_FRAME(_hx_pos_da58397c804069e7_95_boot,"lime.utils._Float32Array.Float32Array_Impl_","boot",0x5a51aa1b,"lime.utils._Float32Array.Float32Array_Impl_.boot","lime/utils/Float32Array.hx",95,0x8d160228)
namespace lime{
namespace utils{
namespace _Float32Array{

void Float32Array_Impl__obj::__construct() { }

Dynamic Float32Array_Impl__obj::__CreateEmpty() { return new Float32Array_Impl__obj; }

void *Float32Array_Impl__obj::_hx_vtable = 0;

Dynamic Float32Array_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Float32Array_Impl__obj > _hx_result = new Float32Array_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Float32Array_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x00edcebf;
}

int Float32Array_Impl__obj::BYTES_PER_ELEMENT;

 ::lime::utils::ArrayBufferView Float32Array_Impl__obj::_new( ::Dynamic elements, ::haxe::io::Bytes buffer,::cpp::VirtualArray array, ::openfl::_Vector::FloatVector vector, ::lime::utils::ArrayBufferView view, ::Dynamic __o_byteoffset, ::Dynamic len){
            		 ::Dynamic byteoffset = __o_byteoffset;
            		if (::hx::IsNull(__o_byteoffset)) byteoffset = 0;
            	HX_GC_STACKFRAME(&_hx_pos_da58397c804069e7_102__new)
HXDLIN( 102)		 ::lime::utils::ArrayBufferView this1;
HXLINE( 105)		if (::hx::IsNotNull( elements )) {
HXLINE( 107)			this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,8);
            		}
            		else {
HXLINE( 109)			if (::hx::IsNotNull( array )) {
HXLINE( 111)				 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 111)				_this->byteOffset = 0;
HXDLIN( 111)				_this->length = array->get_length();
HXDLIN( 111)				_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 111)				 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 111)				_this->buffer = this2;
HXDLIN( 111)				_this->copyFromArray(array,null());
HXDLIN( 111)				this1 = _this;
            			}
            			else {
HXLINE( 114)				if (::hx::IsNotNull( vector )) {
HXLINE( 116)					 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 116)					::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 116)					_this->byteOffset = 0;
HXDLIN( 116)					_this->length = array->get_length();
HXDLIN( 116)					_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 116)					 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 116)					_this->buffer = this2;
HXDLIN( 116)					_this->copyFromArray(array,null());
HXDLIN( 116)					this1 = _this;
            				}
            				else {
HXLINE( 119)					if (::hx::IsNotNull( view )) {
HXLINE( 121)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 121)						 ::haxe::io::Bytes srcData = view->buffer;
HXDLIN( 121)						int srcLength = view->length;
HXDLIN( 121)						int srcByteOffset = view->byteOffset;
HXDLIN( 121)						int srcElementSize = view->bytesPerElement;
HXDLIN( 121)						int elementSize = _this->bytesPerElement;
HXDLIN( 121)						if ((view->type == _this->type)) {
HXLINE( 121)							int srcLength = srcData->length;
HXDLIN( 121)							int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 121)							 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 121)							_this->buffer = this1;
HXDLIN( 121)							_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            						}
            						else {
HXLINE( 121)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            						}
HXDLIN( 121)						_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 121)						_this->byteOffset = 0;
HXDLIN( 121)						_this->length = srcLength;
HXDLIN( 121)						this1 = _this;
            					}
            					else {
HXLINE( 123)						if (::hx::IsNotNull( buffer )) {
HXLINE( 125)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 125)							int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 125)							if ((in_byteOffset < 0)) {
HXLINE( 125)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            							}
HXDLIN( 125)							if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 125)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            							}
HXDLIN( 125)							int bufferByteLength = buffer->length;
HXDLIN( 125)							int elementSize = _this->bytesPerElement;
HXDLIN( 125)							int newByteLength = bufferByteLength;
HXDLIN( 125)							if (::hx::IsNull( len )) {
HXLINE( 125)								newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 125)								if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 125)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
HXDLIN( 125)								if ((newByteLength < 0)) {
HXLINE( 125)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
            							}
            							else {
HXLINE( 125)								newByteLength = (( (int)(len) ) * _this->bytesPerElement);
HXDLIN( 125)								int newRange = (in_byteOffset + newByteLength);
HXDLIN( 125)								if ((newRange > bufferByteLength)) {
HXLINE( 125)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
            							}
HXDLIN( 125)							_this->buffer = buffer;
HXDLIN( 125)							_this->byteOffset = in_byteOffset;
HXDLIN( 125)							_this->byteLength = newByteLength;
HXDLIN( 125)							_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 125)							this1 = _this;
            						}
            						else {
HXLINE( 129)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for Float32Array",8e,c1,f4,d4)));
            						}
            					}
            				}
            			}
            		}
HXLINE( 102)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(Float32Array_Impl__obj,_new,return )

 ::lime::utils::ArrayBufferView Float32Array_Impl__obj::subarray( ::lime::utils::ArrayBufferView this1,int begin, ::Dynamic end){
            	HX_GC_STACKFRAME(&_hx_pos_da58397c804069e7_135_subarray)
HXDLIN( 135)		 ::Dynamic end1 = end;
HXDLIN( 135)		if (::hx::IsNull( end1 )) {
HXDLIN( 135)			end1 = this1->length;
            		}
HXDLIN( 135)		int len = (( (int)(end1) ) - begin);
HXDLIN( 135)		int byte_offset = ((begin * this1->bytesPerElement) + this1->byteOffset);
HXDLIN( 135)		 ::lime::utils::ArrayBufferView view;
HXDLIN( 135)		switch((int)(this1->type)){
            			case (int)0: {
HXDLIN( 135)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("subarray on a blank ArrayBufferView",39,87,fd,19)));
            			}
            			break;
            			case (int)1: {
HXDLIN( 135)				 ::Dynamic elements = null();
HXDLIN( 135)				 ::haxe::io::Bytes buffer = this1->buffer;
HXDLIN( 135)				::cpp::VirtualArray array = null();
HXDLIN( 135)				 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 135)				 ::lime::utils::ArrayBufferView view1 = null();
HXDLIN( 135)				 ::Dynamic byteoffset = byte_offset;
HXDLIN( 135)				if (::hx::IsNull( byteoffset )) {
HXDLIN( 135)					byteoffset = 0;
            				}
HXDLIN( 135)				 ::lime::utils::ArrayBufferView this2;
HXDLIN( 135)				if (::hx::IsNotNull( elements )) {
HXDLIN( 135)					this2 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,1);
            				}
            				else {
HXDLIN( 135)					if (::hx::IsNotNull( array )) {
HXDLIN( 135)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,1);
HXDLIN( 135)						_this->byteOffset = 0;
HXDLIN( 135)						_this->length = array->get_length();
HXDLIN( 135)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 135)						 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 135)						_this->buffer = this1;
HXDLIN( 135)						_this->copyFromArray(array,null());
HXDLIN( 135)						this2 = _this;
            					}
            					else {
HXDLIN( 135)						if (::hx::IsNotNull( vector )) {
HXDLIN( 135)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,1);
HXDLIN( 135)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 135)							_this->byteOffset = 0;
HXDLIN( 135)							_this->length = array->get_length();
HXDLIN( 135)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 135)							 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 135)							_this->buffer = this1;
HXDLIN( 135)							_this->copyFromArray(array,null());
HXDLIN( 135)							this2 = _this;
            						}
            						else {
HXDLIN( 135)							if (::hx::IsNotNull( view1 )) {
HXDLIN( 135)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,1);
HXDLIN( 135)								 ::haxe::io::Bytes srcData = view1->buffer;
HXDLIN( 135)								int srcLength = view1->length;
HXDLIN( 135)								int srcByteOffset = view1->byteOffset;
HXDLIN( 135)								int srcElementSize = view1->bytesPerElement;
HXDLIN( 135)								int elementSize = _this->bytesPerElement;
HXDLIN( 135)								if ((view1->type == _this->type)) {
HXDLIN( 135)									int srcLength = srcData->length;
HXDLIN( 135)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 135)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 135)									_this->buffer = this1;
HXDLIN( 135)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXDLIN( 135)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 135)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 135)								_this->byteOffset = 0;
HXDLIN( 135)								_this->length = srcLength;
HXDLIN( 135)								this2 = _this;
            							}
            							else {
HXDLIN( 135)								if (::hx::IsNotNull( buffer )) {
HXDLIN( 135)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,1);
HXDLIN( 135)									int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 135)									if ((in_byteOffset < 0)) {
HXDLIN( 135)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 135)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXDLIN( 135)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 135)									int bufferByteLength = buffer->length;
HXDLIN( 135)									int elementSize = _this->bytesPerElement;
HXDLIN( 135)									int newByteLength = bufferByteLength;
HXDLIN( 135)									if (::hx::IsNull( len )) {
HXDLIN( 135)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 135)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXDLIN( 135)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 135)										if ((newByteLength < 0)) {
HXDLIN( 135)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXDLIN( 135)										newByteLength = (len * _this->bytesPerElement);
HXDLIN( 135)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 135)										if ((newRange > bufferByteLength)) {
HXDLIN( 135)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 135)									_this->buffer = buffer;
HXDLIN( 135)									_this->byteOffset = in_byteOffset;
HXDLIN( 135)									_this->byteLength = newByteLength;
HXDLIN( 135)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 135)									this2 = _this;
            								}
            								else {
HXDLIN( 135)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for Int8Array",40,53,da,77)));
            								}
            							}
            						}
            					}
            				}
HXDLIN( 135)				view = this2;
            			}
            			break;
            			case (int)2: {
HXDLIN( 135)				 ::Dynamic elements = null();
HXDLIN( 135)				 ::haxe::io::Bytes buffer = this1->buffer;
HXDLIN( 135)				::cpp::VirtualArray array = null();
HXDLIN( 135)				 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 135)				 ::lime::utils::ArrayBufferView view1 = null();
HXDLIN( 135)				 ::Dynamic byteoffset = byte_offset;
HXDLIN( 135)				if (::hx::IsNull( byteoffset )) {
HXDLIN( 135)					byteoffset = 0;
            				}
HXDLIN( 135)				 ::lime::utils::ArrayBufferView this2;
HXDLIN( 135)				if (::hx::IsNotNull( elements )) {
HXDLIN( 135)					this2 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,2);
            				}
            				else {
HXDLIN( 135)					if (::hx::IsNotNull( array )) {
HXDLIN( 135)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,2);
HXDLIN( 135)						_this->byteOffset = 0;
HXDLIN( 135)						_this->length = array->get_length();
HXDLIN( 135)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 135)						 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 135)						_this->buffer = this1;
HXDLIN( 135)						_this->copyFromArray(array,null());
HXDLIN( 135)						this2 = _this;
            					}
            					else {
HXDLIN( 135)						if (::hx::IsNotNull( vector )) {
HXDLIN( 135)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,2);
HXDLIN( 135)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 135)							_this->byteOffset = 0;
HXDLIN( 135)							_this->length = array->get_length();
HXDLIN( 135)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 135)							 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 135)							_this->buffer = this1;
HXDLIN( 135)							_this->copyFromArray(array,null());
HXDLIN( 135)							this2 = _this;
            						}
            						else {
HXDLIN( 135)							if (::hx::IsNotNull( view1 )) {
HXDLIN( 135)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,2);
HXDLIN( 135)								 ::haxe::io::Bytes srcData = view1->buffer;
HXDLIN( 135)								int srcLength = view1->length;
HXDLIN( 135)								int srcByteOffset = view1->byteOffset;
HXDLIN( 135)								int srcElementSize = view1->bytesPerElement;
HXDLIN( 135)								int elementSize = _this->bytesPerElement;
HXDLIN( 135)								if ((view1->type == _this->type)) {
HXDLIN( 135)									int srcLength = srcData->length;
HXDLIN( 135)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 135)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 135)									_this->buffer = this1;
HXDLIN( 135)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXDLIN( 135)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 135)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 135)								_this->byteOffset = 0;
HXDLIN( 135)								_this->length = srcLength;
HXDLIN( 135)								this2 = _this;
            							}
            							else {
HXDLIN( 135)								if (::hx::IsNotNull( buffer )) {
HXDLIN( 135)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,2);
HXDLIN( 135)									int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 135)									if ((in_byteOffset < 0)) {
HXDLIN( 135)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 135)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXDLIN( 135)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 135)									int bufferByteLength = buffer->length;
HXDLIN( 135)									int elementSize = _this->bytesPerElement;
HXDLIN( 135)									int newByteLength = bufferByteLength;
HXDLIN( 135)									if (::hx::IsNull( len )) {
HXDLIN( 135)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 135)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXDLIN( 135)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 135)										if ((newByteLength < 0)) {
HXDLIN( 135)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXDLIN( 135)										newByteLength = (len * _this->bytesPerElement);
HXDLIN( 135)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 135)										if ((newRange > bufferByteLength)) {
HXDLIN( 135)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 135)									_this->buffer = buffer;
HXDLIN( 135)									_this->byteOffset = in_byteOffset;
HXDLIN( 135)									_this->byteLength = newByteLength;
HXDLIN( 135)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 135)									this2 = _this;
            								}
            								else {
HXDLIN( 135)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for Int16Array",95,b2,95,a7)));
            								}
            							}
            						}
            					}
            				}
HXDLIN( 135)				view = this2;
            			}
            			break;
            			case (int)3: {
HXDLIN( 135)				 ::Dynamic elements = null();
HXDLIN( 135)				 ::haxe::io::Bytes buffer = this1->buffer;
HXDLIN( 135)				::cpp::VirtualArray array = null();
HXDLIN( 135)				 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 135)				 ::lime::utils::ArrayBufferView view1 = null();
HXDLIN( 135)				 ::Dynamic byteoffset = byte_offset;
HXDLIN( 135)				if (::hx::IsNull( byteoffset )) {
HXDLIN( 135)					byteoffset = 0;
            				}
HXDLIN( 135)				 ::lime::utils::ArrayBufferView this2;
HXDLIN( 135)				if (::hx::IsNotNull( elements )) {
HXDLIN( 135)					this2 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,3);
            				}
            				else {
HXDLIN( 135)					if (::hx::IsNotNull( array )) {
HXDLIN( 135)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,3);
HXDLIN( 135)						_this->byteOffset = 0;
HXDLIN( 135)						_this->length = array->get_length();
HXDLIN( 135)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 135)						 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 135)						_this->buffer = this1;
HXDLIN( 135)						_this->copyFromArray(array,null());
HXDLIN( 135)						this2 = _this;
            					}
            					else {
HXDLIN( 135)						if (::hx::IsNotNull( vector )) {
HXDLIN( 135)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,3);
HXDLIN( 135)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 135)							_this->byteOffset = 0;
HXDLIN( 135)							_this->length = array->get_length();
HXDLIN( 135)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 135)							 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 135)							_this->buffer = this1;
HXDLIN( 135)							_this->copyFromArray(array,null());
HXDLIN( 135)							this2 = _this;
            						}
            						else {
HXDLIN( 135)							if (::hx::IsNotNull( view1 )) {
HXDLIN( 135)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,3);
HXDLIN( 135)								 ::haxe::io::Bytes srcData = view1->buffer;
HXDLIN( 135)								int srcLength = view1->length;
HXDLIN( 135)								int srcByteOffset = view1->byteOffset;
HXDLIN( 135)								int srcElementSize = view1->bytesPerElement;
HXDLIN( 135)								int elementSize = _this->bytesPerElement;
HXDLIN( 135)								if ((view1->type == _this->type)) {
HXDLIN( 135)									int srcLength = srcData->length;
HXDLIN( 135)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 135)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 135)									_this->buffer = this1;
HXDLIN( 135)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXDLIN( 135)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 135)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 135)								_this->byteOffset = 0;
HXDLIN( 135)								_this->length = srcLength;
HXDLIN( 135)								this2 = _this;
            							}
            							else {
HXDLIN( 135)								if (::hx::IsNotNull( buffer )) {
HXDLIN( 135)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,3);
HXDLIN( 135)									int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 135)									if ((in_byteOffset < 0)) {
HXDLIN( 135)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 135)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXDLIN( 135)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 135)									int bufferByteLength = buffer->length;
HXDLIN( 135)									int elementSize = _this->bytesPerElement;
HXDLIN( 135)									int newByteLength = bufferByteLength;
HXDLIN( 135)									if (::hx::IsNull( len )) {
HXDLIN( 135)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 135)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXDLIN( 135)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 135)										if ((newByteLength < 0)) {
HXDLIN( 135)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXDLIN( 135)										newByteLength = (len * _this->bytesPerElement);
HXDLIN( 135)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 135)										if ((newRange > bufferByteLength)) {
HXDLIN( 135)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 135)									_this->buffer = buffer;
HXDLIN( 135)									_this->byteOffset = in_byteOffset;
HXDLIN( 135)									_this->byteLength = newByteLength;
HXDLIN( 135)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 135)									this2 = _this;
            								}
            								else {
HXDLIN( 135)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for Int32Array",9b,2e,53,61)));
            								}
            							}
            						}
            					}
            				}
HXDLIN( 135)				view = this2;
            			}
            			break;
            			case (int)4: {
HXDLIN( 135)				 ::Dynamic elements = null();
HXDLIN( 135)				 ::haxe::io::Bytes buffer = this1->buffer;
HXDLIN( 135)				::cpp::VirtualArray array = null();
HXDLIN( 135)				 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 135)				 ::lime::utils::ArrayBufferView view1 = null();
HXDLIN( 135)				 ::Dynamic byteoffset = byte_offset;
HXDLIN( 135)				if (::hx::IsNull( byteoffset )) {
HXDLIN( 135)					byteoffset = 0;
            				}
HXDLIN( 135)				 ::lime::utils::ArrayBufferView this2;
HXDLIN( 135)				if (::hx::IsNotNull( elements )) {
HXDLIN( 135)					this2 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,4);
            				}
            				else {
HXDLIN( 135)					if (::hx::IsNotNull( array )) {
HXDLIN( 135)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 135)						_this->byteOffset = 0;
HXDLIN( 135)						_this->length = array->get_length();
HXDLIN( 135)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 135)						 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 135)						_this->buffer = this1;
HXDLIN( 135)						_this->copyFromArray(array,null());
HXDLIN( 135)						this2 = _this;
            					}
            					else {
HXDLIN( 135)						if (::hx::IsNotNull( vector )) {
HXDLIN( 135)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 135)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 135)							_this->byteOffset = 0;
HXDLIN( 135)							_this->length = array->get_length();
HXDLIN( 135)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 135)							 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 135)							_this->buffer = this1;
HXDLIN( 135)							_this->copyFromArray(array,null());
HXDLIN( 135)							this2 = _this;
            						}
            						else {
HXDLIN( 135)							if (::hx::IsNotNull( view1 )) {
HXDLIN( 135)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 135)								 ::haxe::io::Bytes srcData = view1->buffer;
HXDLIN( 135)								int srcLength = view1->length;
HXDLIN( 135)								int srcByteOffset = view1->byteOffset;
HXDLIN( 135)								int srcElementSize = view1->bytesPerElement;
HXDLIN( 135)								int elementSize = _this->bytesPerElement;
HXDLIN( 135)								if ((view1->type == _this->type)) {
HXDLIN( 135)									int srcLength = srcData->length;
HXDLIN( 135)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 135)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 135)									_this->buffer = this1;
HXDLIN( 135)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXDLIN( 135)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 135)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 135)								_this->byteOffset = 0;
HXDLIN( 135)								_this->length = srcLength;
HXDLIN( 135)								this2 = _this;
            							}
            							else {
HXDLIN( 135)								if (::hx::IsNotNull( buffer )) {
HXDLIN( 135)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 135)									int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 135)									if ((in_byteOffset < 0)) {
HXDLIN( 135)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 135)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXDLIN( 135)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 135)									int bufferByteLength = buffer->length;
HXDLIN( 135)									int elementSize = _this->bytesPerElement;
HXDLIN( 135)									int newByteLength = bufferByteLength;
HXDLIN( 135)									if (::hx::IsNull( len )) {
HXDLIN( 135)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 135)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXDLIN( 135)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 135)										if ((newByteLength < 0)) {
HXDLIN( 135)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXDLIN( 135)										newByteLength = (len * _this->bytesPerElement);
HXDLIN( 135)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 135)										if ((newRange > bufferByteLength)) {
HXDLIN( 135)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 135)									_this->buffer = buffer;
HXDLIN( 135)									_this->byteOffset = in_byteOffset;
HXDLIN( 135)									_this->byteLength = newByteLength;
HXDLIN( 135)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 135)									this2 = _this;
            								}
            								else {
HXDLIN( 135)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for UInt8Array",6b,44,d5,85)));
            								}
            							}
            						}
            					}
            				}
HXDLIN( 135)				view = this2;
            			}
            			break;
            			case (int)5: {
HXDLIN( 135)				 ::Dynamic elements = null();
HXDLIN( 135)				 ::haxe::io::Bytes buffer = this1->buffer;
HXDLIN( 135)				::cpp::VirtualArray array = null();
HXDLIN( 135)				 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 135)				 ::lime::utils::ArrayBufferView view1 = null();
HXDLIN( 135)				 ::Dynamic byteoffset = byte_offset;
HXDLIN( 135)				if (::hx::IsNull( byteoffset )) {
HXDLIN( 135)					byteoffset = 0;
            				}
HXDLIN( 135)				 ::lime::utils::ArrayBufferView this2;
HXDLIN( 135)				if (::hx::IsNotNull( elements )) {
HXDLIN( 135)					this2 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,5);
            				}
            				else {
HXDLIN( 135)					if (::hx::IsNotNull( array )) {
HXDLIN( 135)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,5);
HXDLIN( 135)						_this->byteOffset = 0;
HXDLIN( 135)						_this->length = array->get_length();
HXDLIN( 135)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 135)						 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 135)						_this->buffer = this1;
HXDLIN( 135)						_this->copyFromArray(array,null());
HXDLIN( 135)						this2 = _this;
            					}
            					else {
HXDLIN( 135)						if (::hx::IsNotNull( vector )) {
HXDLIN( 135)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,5);
HXDLIN( 135)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 135)							_this->byteOffset = 0;
HXDLIN( 135)							_this->length = array->get_length();
HXDLIN( 135)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 135)							 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 135)							_this->buffer = this1;
HXDLIN( 135)							_this->copyFromArray(array,null());
HXDLIN( 135)							this2 = _this;
            						}
            						else {
HXDLIN( 135)							if (::hx::IsNotNull( view1 )) {
HXDLIN( 135)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,5);
HXDLIN( 135)								 ::haxe::io::Bytes srcData = view1->buffer;
HXDLIN( 135)								int srcLength = view1->length;
HXDLIN( 135)								int srcByteOffset = view1->byteOffset;
HXDLIN( 135)								int srcElementSize = view1->bytesPerElement;
HXDLIN( 135)								int elementSize = _this->bytesPerElement;
HXDLIN( 135)								if ((view1->type == _this->type)) {
HXDLIN( 135)									int srcLength = srcData->length;
HXDLIN( 135)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 135)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 135)									_this->buffer = this1;
HXDLIN( 135)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXDLIN( 135)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 135)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 135)								_this->byteOffset = 0;
HXDLIN( 135)								_this->length = srcLength;
HXDLIN( 135)								this2 = _this;
            							}
            							else {
HXDLIN( 135)								if (::hx::IsNotNull( buffer )) {
HXDLIN( 135)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,5);
HXDLIN( 135)									int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 135)									if ((in_byteOffset < 0)) {
HXDLIN( 135)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 135)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXDLIN( 135)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 135)									int bufferByteLength = buffer->length;
HXDLIN( 135)									int elementSize = _this->bytesPerElement;
HXDLIN( 135)									int newByteLength = bufferByteLength;
HXDLIN( 135)									if (::hx::IsNull( len )) {
HXDLIN( 135)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 135)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXDLIN( 135)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 135)										if ((newByteLength < 0)) {
HXDLIN( 135)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXDLIN( 135)										newByteLength = (len * _this->bytesPerElement);
HXDLIN( 135)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 135)										if ((newRange > bufferByteLength)) {
HXDLIN( 135)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 135)									_this->buffer = buffer;
HXDLIN( 135)									_this->byteOffset = in_byteOffset;
HXDLIN( 135)									_this->byteLength = newByteLength;
HXDLIN( 135)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 135)									this2 = _this;
            								}
            								else {
HXDLIN( 135)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for UInt8ClampedArray",8d,06,77,13)));
            								}
            							}
            						}
            					}
            				}
HXDLIN( 135)				view = this2;
            			}
            			break;
            			case (int)6: {
HXDLIN( 135)				 ::Dynamic elements = null();
HXDLIN( 135)				 ::haxe::io::Bytes buffer = this1->buffer;
HXDLIN( 135)				::cpp::VirtualArray array = null();
HXDLIN( 135)				 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 135)				 ::lime::utils::ArrayBufferView view1 = null();
HXDLIN( 135)				 ::Dynamic byteoffset = byte_offset;
HXDLIN( 135)				if (::hx::IsNull( byteoffset )) {
HXDLIN( 135)					byteoffset = 0;
            				}
HXDLIN( 135)				 ::lime::utils::ArrayBufferView this2;
HXDLIN( 135)				if (::hx::IsNotNull( elements )) {
HXDLIN( 135)					this2 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,6);
            				}
            				else {
HXDLIN( 135)					if (::hx::IsNotNull( array )) {
HXDLIN( 135)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,6);
HXDLIN( 135)						_this->byteOffset = 0;
HXDLIN( 135)						_this->length = array->get_length();
HXDLIN( 135)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 135)						 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 135)						_this->buffer = this1;
HXDLIN( 135)						_this->copyFromArray(array,null());
HXDLIN( 135)						this2 = _this;
            					}
            					else {
HXDLIN( 135)						if (::hx::IsNotNull( vector )) {
HXDLIN( 135)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,6);
HXDLIN( 135)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 135)							_this->byteOffset = 0;
HXDLIN( 135)							_this->length = array->get_length();
HXDLIN( 135)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 135)							 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 135)							_this->buffer = this1;
HXDLIN( 135)							_this->copyFromArray(array,null());
HXDLIN( 135)							this2 = _this;
            						}
            						else {
HXDLIN( 135)							if (::hx::IsNotNull( view1 )) {
HXDLIN( 135)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,6);
HXDLIN( 135)								 ::haxe::io::Bytes srcData = view1->buffer;
HXDLIN( 135)								int srcLength = view1->length;
HXDLIN( 135)								int srcByteOffset = view1->byteOffset;
HXDLIN( 135)								int srcElementSize = view1->bytesPerElement;
HXDLIN( 135)								int elementSize = _this->bytesPerElement;
HXDLIN( 135)								if ((view1->type == _this->type)) {
HXDLIN( 135)									int srcLength = srcData->length;
HXDLIN( 135)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 135)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 135)									_this->buffer = this1;
HXDLIN( 135)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXDLIN( 135)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 135)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 135)								_this->byteOffset = 0;
HXDLIN( 135)								_this->length = srcLength;
HXDLIN( 135)								this2 = _this;
            							}
            							else {
HXDLIN( 135)								if (::hx::IsNotNull( buffer )) {
HXDLIN( 135)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,6);
HXDLIN( 135)									int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 135)									if ((in_byteOffset < 0)) {
HXDLIN( 135)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 135)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXDLIN( 135)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 135)									int bufferByteLength = buffer->length;
HXDLIN( 135)									int elementSize = _this->bytesPerElement;
HXDLIN( 135)									int newByteLength = bufferByteLength;
HXDLIN( 135)									if (::hx::IsNull( len )) {
HXDLIN( 135)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 135)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXDLIN( 135)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 135)										if ((newByteLength < 0)) {
HXDLIN( 135)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXDLIN( 135)										newByteLength = (len * _this->bytesPerElement);
HXDLIN( 135)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 135)										if ((newRange > bufferByteLength)) {
HXDLIN( 135)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 135)									_this->buffer = buffer;
HXDLIN( 135)									_this->byteOffset = in_byteOffset;
HXDLIN( 135)									_this->byteLength = newByteLength;
HXDLIN( 135)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 135)									this2 = _this;
            								}
            								else {
HXDLIN( 135)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for UInt16Array",0a,c7,2d,d5)));
            								}
            							}
            						}
            					}
            				}
HXDLIN( 135)				view = this2;
            			}
            			break;
            			case (int)7: {
HXDLIN( 135)				 ::Dynamic elements = null();
HXDLIN( 135)				 ::haxe::io::Bytes buffer = this1->buffer;
HXDLIN( 135)				::cpp::VirtualArray array = null();
HXDLIN( 135)				 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 135)				 ::lime::utils::ArrayBufferView view1 = null();
HXDLIN( 135)				 ::Dynamic byteoffset = byte_offset;
HXDLIN( 135)				if (::hx::IsNull( byteoffset )) {
HXDLIN( 135)					byteoffset = 0;
            				}
HXDLIN( 135)				 ::lime::utils::ArrayBufferView this2;
HXDLIN( 135)				if (::hx::IsNotNull( elements )) {
HXDLIN( 135)					this2 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,7);
            				}
            				else {
HXDLIN( 135)					if (::hx::IsNotNull( array )) {
HXDLIN( 135)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,7);
HXDLIN( 135)						_this->byteOffset = 0;
HXDLIN( 135)						_this->length = array->get_length();
HXDLIN( 135)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 135)						 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 135)						_this->buffer = this1;
HXDLIN( 135)						_this->copyFromArray(array,null());
HXDLIN( 135)						this2 = _this;
            					}
            					else {
HXDLIN( 135)						if (::hx::IsNotNull( vector )) {
HXDLIN( 135)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,7);
HXDLIN( 135)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 135)							_this->byteOffset = 0;
HXDLIN( 135)							_this->length = array->get_length();
HXDLIN( 135)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 135)							 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 135)							_this->buffer = this1;
HXDLIN( 135)							_this->copyFromArray(array,null());
HXDLIN( 135)							this2 = _this;
            						}
            						else {
HXDLIN( 135)							if (::hx::IsNotNull( view1 )) {
HXDLIN( 135)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,7);
HXDLIN( 135)								 ::haxe::io::Bytes srcData = view1->buffer;
HXDLIN( 135)								int srcLength = view1->length;
HXDLIN( 135)								int srcByteOffset = view1->byteOffset;
HXDLIN( 135)								int srcElementSize = view1->bytesPerElement;
HXDLIN( 135)								int elementSize = _this->bytesPerElement;
HXDLIN( 135)								if ((view1->type == _this->type)) {
HXDLIN( 135)									int srcLength = srcData->length;
HXDLIN( 135)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 135)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 135)									_this->buffer = this1;
HXDLIN( 135)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXDLIN( 135)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 135)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 135)								_this->byteOffset = 0;
HXDLIN( 135)								_this->length = srcLength;
HXDLIN( 135)								this2 = _this;
            							}
            							else {
HXDLIN( 135)								if (::hx::IsNotNull( buffer )) {
HXDLIN( 135)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,7);
HXDLIN( 135)									int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 135)									if ((in_byteOffset < 0)) {
HXDLIN( 135)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 135)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXDLIN( 135)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 135)									int bufferByteLength = buffer->length;
HXDLIN( 135)									int elementSize = _this->bytesPerElement;
HXDLIN( 135)									int newByteLength = bufferByteLength;
HXDLIN( 135)									if (::hx::IsNull( len )) {
HXDLIN( 135)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 135)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXDLIN( 135)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 135)										if ((newByteLength < 0)) {
HXDLIN( 135)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXDLIN( 135)										newByteLength = (len * _this->bytesPerElement);
HXDLIN( 135)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 135)										if ((newRange > bufferByteLength)) {
HXDLIN( 135)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 135)									_this->buffer = buffer;
HXDLIN( 135)									_this->byteOffset = in_byteOffset;
HXDLIN( 135)									_this->byteLength = newByteLength;
HXDLIN( 135)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 135)									this2 = _this;
            								}
            								else {
HXDLIN( 135)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for UInt32Array",10,43,eb,8e)));
            								}
            							}
            						}
            					}
            				}
HXDLIN( 135)				view = this2;
            			}
            			break;
            			case (int)8: {
HXDLIN( 135)				 ::Dynamic elements = null();
HXDLIN( 135)				 ::haxe::io::Bytes buffer = this1->buffer;
HXDLIN( 135)				::cpp::VirtualArray array = null();
HXDLIN( 135)				 ::openfl::_Vector::FloatVector vector = null();
HXDLIN( 135)				 ::lime::utils::ArrayBufferView view1 = null();
HXDLIN( 135)				 ::Dynamic byteoffset = byte_offset;
HXDLIN( 135)				if (::hx::IsNull( byteoffset )) {
HXDLIN( 135)					byteoffset = 0;
            				}
HXDLIN( 135)				 ::lime::utils::ArrayBufferView this2;
HXDLIN( 135)				if (::hx::IsNotNull( elements )) {
HXDLIN( 135)					this2 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,8);
            				}
            				else {
HXDLIN( 135)					if (::hx::IsNotNull( array )) {
HXDLIN( 135)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 135)						_this->byteOffset = 0;
HXDLIN( 135)						_this->length = array->get_length();
HXDLIN( 135)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 135)						 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 135)						_this->buffer = this1;
HXDLIN( 135)						_this->copyFromArray(array,null());
HXDLIN( 135)						this2 = _this;
            					}
            					else {
HXDLIN( 135)						if (::hx::IsNotNull( vector )) {
HXDLIN( 135)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 135)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 135)							_this->byteOffset = 0;
HXDLIN( 135)							_this->length = array->get_length();
HXDLIN( 135)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 135)							 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 135)							_this->buffer = this1;
HXDLIN( 135)							_this->copyFromArray(array,null());
HXDLIN( 135)							this2 = _this;
            						}
            						else {
HXDLIN( 135)							if (::hx::IsNotNull( view1 )) {
HXDLIN( 135)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 135)								 ::haxe::io::Bytes srcData = view1->buffer;
HXDLIN( 135)								int srcLength = view1->length;
HXDLIN( 135)								int srcByteOffset = view1->byteOffset;
HXDLIN( 135)								int srcElementSize = view1->bytesPerElement;
HXDLIN( 135)								int elementSize = _this->bytesPerElement;
HXDLIN( 135)								if ((view1->type == _this->type)) {
HXDLIN( 135)									int srcLength = srcData->length;
HXDLIN( 135)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 135)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 135)									_this->buffer = this1;
HXDLIN( 135)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXDLIN( 135)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 135)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 135)								_this->byteOffset = 0;
HXDLIN( 135)								_this->length = srcLength;
HXDLIN( 135)								this2 = _this;
            							}
            							else {
HXDLIN( 135)								if (::hx::IsNotNull( buffer )) {
HXDLIN( 135)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 135)									int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 135)									if ((in_byteOffset < 0)) {
HXDLIN( 135)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 135)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXDLIN( 135)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 135)									int bufferByteLength = buffer->length;
HXDLIN( 135)									int elementSize = _this->bytesPerElement;
HXDLIN( 135)									int newByteLength = bufferByteLength;
HXDLIN( 135)									if (::hx::IsNull( len )) {
HXDLIN( 135)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 135)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXDLIN( 135)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 135)										if ((newByteLength < 0)) {
HXDLIN( 135)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXDLIN( 135)										newByteLength = (len * _this->bytesPerElement);
HXDLIN( 135)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 135)										if ((newRange > bufferByteLength)) {
HXDLIN( 135)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 135)									_this->buffer = buffer;
HXDLIN( 135)									_this->byteOffset = in_byteOffset;
HXDLIN( 135)									_this->byteLength = newByteLength;
HXDLIN( 135)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 135)									this2 = _this;
            								}
            								else {
HXDLIN( 135)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for Float32Array",8e,c1,f4,d4)));
            								}
            							}
            						}
            					}
            				}
HXDLIN( 135)				view = this2;
            			}
            			break;
            			case (int)9: {
HXDLIN( 135)				 ::Dynamic elements = null();
HXDLIN( 135)				 ::haxe::io::Bytes buffer = this1->buffer;
HXDLIN( 135)				::cpp::VirtualArray array = null();
HXDLIN( 135)				 ::openfl::_Vector::FloatVector vector = null();
HXDLIN( 135)				 ::lime::utils::ArrayBufferView view1 = null();
HXDLIN( 135)				 ::Dynamic byteoffset = byte_offset;
HXDLIN( 135)				if (::hx::IsNull( byteoffset )) {
HXDLIN( 135)					byteoffset = 0;
            				}
HXDLIN( 135)				 ::lime::utils::ArrayBufferView this2;
HXDLIN( 135)				if (::hx::IsNotNull( elements )) {
HXDLIN( 135)					this2 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,9);
            				}
            				else {
HXDLIN( 135)					if (::hx::IsNotNull( array )) {
HXDLIN( 135)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,9);
HXDLIN( 135)						_this->byteOffset = 0;
HXDLIN( 135)						_this->length = array->get_length();
HXDLIN( 135)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 135)						 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 135)						_this->buffer = this1;
HXDLIN( 135)						_this->copyFromArray(array,null());
HXDLIN( 135)						this2 = _this;
            					}
            					else {
HXDLIN( 135)						if (::hx::IsNotNull( vector )) {
HXDLIN( 135)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,9);
HXDLIN( 135)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 135)							_this->byteOffset = 0;
HXDLIN( 135)							_this->length = array->get_length();
HXDLIN( 135)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 135)							 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 135)							_this->buffer = this1;
HXDLIN( 135)							_this->copyFromArray(array,null());
HXDLIN( 135)							this2 = _this;
            						}
            						else {
HXDLIN( 135)							if (::hx::IsNotNull( view1 )) {
HXDLIN( 135)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,9);
HXDLIN( 135)								 ::haxe::io::Bytes srcData = view1->buffer;
HXDLIN( 135)								int srcLength = view1->length;
HXDLIN( 135)								int srcByteOffset = view1->byteOffset;
HXDLIN( 135)								int srcElementSize = view1->bytesPerElement;
HXDLIN( 135)								int elementSize = _this->bytesPerElement;
HXDLIN( 135)								if ((view1->type == _this->type)) {
HXDLIN( 135)									int srcLength = srcData->length;
HXDLIN( 135)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 135)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 135)									_this->buffer = this1;
HXDLIN( 135)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXDLIN( 135)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 135)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 135)								_this->byteOffset = 0;
HXDLIN( 135)								_this->length = srcLength;
HXDLIN( 135)								this2 = _this;
            							}
            							else {
HXDLIN( 135)								if (::hx::IsNotNull( buffer )) {
HXDLIN( 135)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,9);
HXDLIN( 135)									int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 135)									if ((in_byteOffset < 0)) {
HXDLIN( 135)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 135)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXDLIN( 135)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 135)									int bufferByteLength = buffer->length;
HXDLIN( 135)									int elementSize = _this->bytesPerElement;
HXDLIN( 135)									int newByteLength = bufferByteLength;
HXDLIN( 135)									if (::hx::IsNull( len )) {
HXDLIN( 135)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 135)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXDLIN( 135)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 135)										if ((newByteLength < 0)) {
HXDLIN( 135)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXDLIN( 135)										newByteLength = (len * _this->bytesPerElement);
HXDLIN( 135)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 135)										if ((newRange > bufferByteLength)) {
HXDLIN( 135)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 135)									_this->buffer = buffer;
HXDLIN( 135)									_this->byteOffset = in_byteOffset;
HXDLIN( 135)									_this->byteLength = newByteLength;
HXDLIN( 135)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 135)									this2 = _this;
            								}
            								else {
HXDLIN( 135)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for Float64Array",8f,de,6b,1e)));
            								}
            							}
            						}
            					}
            				}
HXDLIN( 135)				view = this2;
            			}
            			break;
            		}
HXDLIN( 135)		return view;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Float32Array_Impl__obj,subarray,return )

 ::lime::utils::ArrayBufferView Float32Array_Impl__obj::fromBytes( ::haxe::io::Bytes bytes, ::Dynamic __o_byteOffset, ::Dynamic len){
            		 ::Dynamic byteOffset = __o_byteOffset;
            		if (::hx::IsNull(__o_byteOffset)) byteOffset = 0;
            	HX_GC_STACKFRAME(&_hx_pos_da58397c804069e7_140_fromBytes)
HXDLIN( 140)		 ::Dynamic elements = null();
HXDLIN( 140)		::cpp::VirtualArray array = null();
HXDLIN( 140)		 ::openfl::_Vector::FloatVector vector = null();
HXDLIN( 140)		 ::lime::utils::ArrayBufferView view = null();
HXDLIN( 140)		 ::Dynamic byteoffset = byteOffset;
HXDLIN( 140)		if (::hx::IsNull( byteoffset )) {
HXDLIN( 140)			byteoffset = 0;
            		}
HXDLIN( 140)		 ::lime::utils::ArrayBufferView this1;
HXDLIN( 140)		if (::hx::IsNotNull( elements )) {
HXDLIN( 140)			this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,8);
            		}
            		else {
HXDLIN( 140)			if (::hx::IsNotNull( array )) {
HXDLIN( 140)				 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 140)				_this->byteOffset = 0;
HXDLIN( 140)				_this->length = array->get_length();
HXDLIN( 140)				_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 140)				 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 140)				_this->buffer = this2;
HXDLIN( 140)				_this->copyFromArray(array,null());
HXDLIN( 140)				this1 = _this;
            			}
            			else {
HXDLIN( 140)				if (::hx::IsNotNull( vector )) {
HXDLIN( 140)					 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 140)					::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 140)					_this->byteOffset = 0;
HXDLIN( 140)					_this->length = array->get_length();
HXDLIN( 140)					_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 140)					 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 140)					_this->buffer = this2;
HXDLIN( 140)					_this->copyFromArray(array,null());
HXDLIN( 140)					this1 = _this;
            				}
            				else {
HXDLIN( 140)					if (::hx::IsNotNull( view )) {
HXDLIN( 140)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 140)						 ::haxe::io::Bytes srcData = view->buffer;
HXDLIN( 140)						int srcLength = view->length;
HXDLIN( 140)						int srcByteOffset = view->byteOffset;
HXDLIN( 140)						int srcElementSize = view->bytesPerElement;
HXDLIN( 140)						int elementSize = _this->bytesPerElement;
HXDLIN( 140)						if ((view->type == _this->type)) {
HXDLIN( 140)							int srcLength = srcData->length;
HXDLIN( 140)							int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 140)							 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 140)							_this->buffer = this1;
HXDLIN( 140)							_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            						}
            						else {
HXDLIN( 140)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            						}
HXDLIN( 140)						_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 140)						_this->byteOffset = 0;
HXDLIN( 140)						_this->length = srcLength;
HXDLIN( 140)						this1 = _this;
            					}
            					else {
HXDLIN( 140)						if (::hx::IsNotNull( bytes )) {
HXDLIN( 140)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 140)							int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 140)							if ((in_byteOffset < 0)) {
HXDLIN( 140)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            							}
HXDLIN( 140)							if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXDLIN( 140)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            							}
HXDLIN( 140)							int bufferByteLength = bytes->length;
HXDLIN( 140)							int elementSize = _this->bytesPerElement;
HXDLIN( 140)							int newByteLength = bufferByteLength;
HXDLIN( 140)							if (::hx::IsNull( len )) {
HXDLIN( 140)								newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 140)								if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXDLIN( 140)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
HXDLIN( 140)								if ((newByteLength < 0)) {
HXDLIN( 140)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
            							}
            							else {
HXDLIN( 140)								newByteLength = (( (int)(len) ) * _this->bytesPerElement);
HXDLIN( 140)								int newRange = (in_byteOffset + newByteLength);
HXDLIN( 140)								if ((newRange > bufferByteLength)) {
HXDLIN( 140)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
            							}
HXDLIN( 140)							_this->buffer = bytes;
HXDLIN( 140)							_this->byteOffset = in_byteOffset;
HXDLIN( 140)							_this->byteLength = newByteLength;
HXDLIN( 140)							_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 140)							this1 = _this;
            						}
            						else {
HXDLIN( 140)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for Float32Array",8e,c1,f4,d4)));
            						}
            					}
            				}
            			}
            		}
HXDLIN( 140)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Float32Array_Impl__obj,fromBytes,return )

 ::haxe::io::Bytes Float32Array_Impl__obj::toBytes( ::lime::utils::ArrayBufferView this1){
            	HX_STACKFRAME(&_hx_pos_da58397c804069e7_145_toBytes)
HXDLIN( 145)		return this1->buffer;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Float32Array_Impl__obj,toBytes,return )

::String Float32Array_Impl__obj::toString( ::lime::utils::ArrayBufferView this1){
            	HX_STACKFRAME(&_hx_pos_da58397c804069e7_150_toString)
HXDLIN( 150)		if (::hx::IsNotNull( this1 )) {
HXDLIN( 150)			return ((((HX_("Float32Array [byteLength:",d3,5c,f0,6e) + this1->byteLength) + HX_(", length:",a0,04,67,ef)) + this1->length) + HX_("]",5d,00,00,00));
            		}
            		else {
HXDLIN( 150)			return null();
            		}
HXDLIN( 150)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Float32Array_Impl__obj,toString,return )


Float32Array_Impl__obj::Float32Array_Impl__obj()
{
}

bool Float32Array_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"toBytes") ) { outValue = toBytes_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"subarray") ) { outValue = subarray_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromBytes") ) { outValue = fromBytes_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Float32Array_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Float32Array_Impl__obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &Float32Array_Impl__obj::BYTES_PER_ELEMENT,HX_("BYTES_PER_ELEMENT",a6,04,1d,cc)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void Float32Array_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Float32Array_Impl__obj::BYTES_PER_ELEMENT,"BYTES_PER_ELEMENT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Float32Array_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Float32Array_Impl__obj::BYTES_PER_ELEMENT,"BYTES_PER_ELEMENT");
};

#endif

::hx::Class Float32Array_Impl__obj::__mClass;

static ::String Float32Array_Impl__obj_sStaticFields[] = {
	HX_("BYTES_PER_ELEMENT",a6,04,1d,cc),
	HX_("_new",61,15,1f,3f),
	HX_("subarray",19,54,81,07),
	HX_("fromBytes",a1,f2,20,72),
	HX_("toBytes",f0,54,1c,8a),
	HX_("toString",ac,d0,6e,38),
	::String(null())
};

void Float32Array_Impl__obj::__register()
{
	Float32Array_Impl__obj _hx_dummy;
	Float32Array_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.utils._Float32Array.Float32Array_Impl_",25,03,42,71);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Float32Array_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Float32Array_Impl__obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Float32Array_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Float32Array_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Float32Array_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Float32Array_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Float32Array_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Float32Array_Impl__obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_da58397c804069e7_95_boot)
HXDLIN(  95)		BYTES_PER_ELEMENT = 4;
            	}
}

} // end namespace lime
} // end namespace utils
} // end namespace _Float32Array
