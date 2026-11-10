/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00592e30; name: FUN_00592e30
 */


undefined1  [16] FUN_00592e30(long param_1)

{
  void *__src;
  long *plVar1;
  undefined8 uVar2;
  void *__dest;
  size_t __n;
  long lVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  
  if (param_1 == 0) {
    uVar2 = 0;
    __dest = (void *)0x0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x140);
    if (*(long *)(param_1 + 0x20) == 1) {
      plVar1 = *(long **)(param_1 + 0x18);
      if (*plVar1 == 0) {
        __dest = (void *)((long)plVar1 + 9);
      }
      else {
        __dest = (void *)plVar1[2];
      }
    }
    else {
      __dest = *(void **)(param_1 + 0x138);
      if (__dest == (void *)0x0) {
        FUN_002ebea0("external/com_google_grpc_base/src/core/tsi/alts/zero_copy_frame_protector/alts_grpc_record_protocol_common.cc"
                     ,0x42,2,"assertion failed: %s","src != nullptr && dst != nullptr");
                    /* WARNING: Subroutine does not return */
        abort();
      }
      if (*(long *)(param_1 + 0x20) != 0) {
        lVar3 = 0;
        uVar4 = 0;
        plVar1 = *(long **)(param_1 + 0x18);
        if (*plVar1 != 0) goto LAB_00592ed4;
        do {
          __n = (size_t)*(byte *)((long)plVar1 + lVar3 + 8);
          __src = (void *)((long)plVar1 + lVar3 + 9);
          while( true ) {
            memcpy(__dest,__src,__n);
            uVar4 = uVar4 + 1;
            __dest = (void *)((long)__dest + __n);
            lVar3 = lVar3 + 0x20;
            if (*(ulong *)(param_1 + 0x20) <= uVar4) {
              __dest = *(void **)(param_1 + 0x138);
              goto LAB_00592eec;
            }
            plVar1 = *(long **)(param_1 + 0x18);
            if (*(long *)((long)plVar1 + lVar3) == 0) break;
LAB_00592ed4:
            __n = *(size_t *)((long)plVar1 + lVar3 + 8);
            __src = *(void **)((long)plVar1 + lVar3 + 0x10);
          }
        } while( true );
      }
    }
  }
LAB_00592eec:
  auVar5._8_8_ = uVar2;
  auVar5._0_8_ = __dest;
  return auVar5;
}


