

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0555 */
/* at Wed Mar 27 16:09:48 2024
 */
/* Compiler settings for ActiveXOcx.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 7.00.0555 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__


#ifndef __ActiveXOcxidl_h__
#define __ActiveXOcxidl_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef ___DActiveXOcx_FWD_DEFINED__
#define ___DActiveXOcx_FWD_DEFINED__
typedef interface _DActiveXOcx _DActiveXOcx;
#endif 	/* ___DActiveXOcx_FWD_DEFINED__ */


#ifndef ___DActiveXOcxEvents_FWD_DEFINED__
#define ___DActiveXOcxEvents_FWD_DEFINED__
typedef interface _DActiveXOcxEvents _DActiveXOcxEvents;
#endif 	/* ___DActiveXOcxEvents_FWD_DEFINED__ */


#ifndef __ActiveXOcx_FWD_DEFINED__
#define __ActiveXOcx_FWD_DEFINED__

#ifdef __cplusplus
typedef class ActiveXOcx ActiveXOcx;
#else
typedef struct ActiveXOcx ActiveXOcx;
#endif /* __cplusplus */

#endif 	/* __ActiveXOcx_FWD_DEFINED__ */


#ifdef __cplusplus
extern "C"{
#endif 



#ifndef __ActiveXOcxLib_LIBRARY_DEFINED__
#define __ActiveXOcxLib_LIBRARY_DEFINED__

/* library ActiveXOcxLib */
/* [control][version][uuid] */ 


EXTERN_C const IID LIBID_ActiveXOcxLib;

#ifndef ___DActiveXOcx_DISPINTERFACE_DEFINED__
#define ___DActiveXOcx_DISPINTERFACE_DEFINED__

/* dispinterface _DActiveXOcx */
/* [uuid] */ 


EXTERN_C const IID DIID__DActiveXOcx;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("AE58995F-A5D5-4655-B902-6C95636049E1")
    _DActiveXOcx : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _DActiveXOcxVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _DActiveXOcx * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _DActiveXOcx * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _DActiveXOcx * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _DActiveXOcx * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _DActiveXOcx * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _DActiveXOcx * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _DActiveXOcx * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } _DActiveXOcxVtbl;

    interface _DActiveXOcx
    {
        CONST_VTBL struct _DActiveXOcxVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _DActiveXOcx_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _DActiveXOcx_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _DActiveXOcx_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _DActiveXOcx_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _DActiveXOcx_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _DActiveXOcx_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _DActiveXOcx_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___DActiveXOcx_DISPINTERFACE_DEFINED__ */


#ifndef ___DActiveXOcxEvents_DISPINTERFACE_DEFINED__
#define ___DActiveXOcxEvents_DISPINTERFACE_DEFINED__

/* dispinterface _DActiveXOcxEvents */
/* [uuid] */ 


EXTERN_C const IID DIID__DActiveXOcxEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("6594C47C-3A13-4242-80CE-DDF83C1E7F0A")
    _DActiveXOcxEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _DActiveXOcxEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _DActiveXOcxEvents * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _DActiveXOcxEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _DActiveXOcxEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _DActiveXOcxEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _DActiveXOcxEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _DActiveXOcxEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _DActiveXOcxEvents * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } _DActiveXOcxEventsVtbl;

    interface _DActiveXOcxEvents
    {
        CONST_VTBL struct _DActiveXOcxEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _DActiveXOcxEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _DActiveXOcxEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _DActiveXOcxEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _DActiveXOcxEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _DActiveXOcxEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _DActiveXOcxEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _DActiveXOcxEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___DActiveXOcxEvents_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_ActiveXOcx;

#ifdef __cplusplus

class DECLSPEC_UUID("0E01295A-4BC3-4DB3-8626-BC3C43200B21")
ActiveXOcx;
#endif
#endif /* __ActiveXOcxLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


