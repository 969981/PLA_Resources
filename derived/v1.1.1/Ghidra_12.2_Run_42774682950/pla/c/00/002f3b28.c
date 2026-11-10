/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002f3b28; name: FUN_002f3b28
 */


bool FUN_002f3b28(long param_1,long *param_2,long *param_3)

{
  size_t sVar1;
  int iVar2;
  long lVar3;
  size_t __n;
  void *__s2;
  
  if (*param_2 == 0) {
    FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/slice/slice_internal.h",0xe3,2,
                 "assertion failed: %s","a.refcount != nullptr");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (*param_2 != param_1) {
    FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/slice/slice_internal.h",0xe4,2,
                 "assertion failed: %s","a.refcount == this");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (*(int *)(param_1 + 8) == 0) {
    lVar3 = *param_3;
    if ((lVar3 == param_1) != (*(int *)(param_1 + 0x28) == *(int *)(lVar3 + 0x28))) {
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/slice/slice_internal.h",0xe9,2,
                   "assertion failed: %s",
                   "((reinterpret_cast<grpc_core::StaticSliceRefcount*>((a).refcount) ->index) == (reinterpret_cast<grpc_core::StaticSliceRefcount*>((b).refcount) ->index)) == (a.refcount == b.refcount)"
                  );
                    /* WARNING: Subroutine does not return */
      abort();
    }
    return lVar3 == param_1;
  }
  if (*(int *)(param_1 + 8) == 1) {
    return *param_3 == param_1;
  }
  __n = param_2[1];
  sVar1 = param_3[1] & 0xff;
  if (*param_3 != 0) {
    sVar1 = param_3[1];
  }
  if (__n != sVar1) {
    return false;
  }
  if (__n == 0) {
    return true;
  }
  __s2 = (void *)param_3[2];
  if (*param_3 == 0) {
    __s2 = (void *)((long)param_3 + 9);
  }
  iVar2 = memcmp((void *)param_2[2],__s2,__n);
  return iVar2 == 0;
}


