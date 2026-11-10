/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00592d70; name: FUN_00592d70
 */


void FUN_00592d70(long param_1,void *param_2)

{
  void *__src;
  long *plVar1;
  size_t __n;
  long lVar2;
  ulong uVar3;
  
  if ((param_1 == 0) || (param_2 == (void *)0x0)) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/tsi/alts/zero_copy_frame_protector/alts_grpc_record_protocol_common.cc"
                 ,0x42,2,"assertion failed: %s","src != nullptr && dst != nullptr");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (*(long *)(param_1 + 0x10) == 0) {
    return;
  }
  lVar2 = 0;
  uVar3 = 0;
  plVar1 = *(long **)(param_1 + 8);
  if (*plVar1 != 0) goto LAB_00592de4;
  do {
    __n = (size_t)*(byte *)((long)plVar1 + lVar2 + 8);
    __src = (void *)((long)plVar1 + lVar2 + 9);
    while( true ) {
      memcpy(param_2,__src,__n);
      uVar3 = uVar3 + 1;
      param_2 = (void *)((long)param_2 + __n);
      lVar2 = lVar2 + 0x20;
      if (*(ulong *)(param_1 + 0x10) <= uVar3) {
        return;
      }
      plVar1 = *(long **)(param_1 + 8);
      if (*(long *)((long)plVar1 + lVar2) == 0) break;
LAB_00592de4:
      __n = *(size_t *)((long)plVar1 + lVar2 + 8);
      __src = *(void **)((long)plVar1 + lVar2 + 0x10);
    }
  } while( true );
}


