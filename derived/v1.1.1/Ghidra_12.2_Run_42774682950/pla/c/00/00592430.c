/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00592430; name: FUN_00592430
 */


long FUN_00592430(long param_1,long param_2)

{
  size_t __n;
  char cVar1;
  bool bVar2;
  long lVar3;
  void *__dest;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long *local_68;
  undefined8 uStack_60;
  void *local_58;
  undefined1 auStack_48 [24];
  
  if (param_1 == 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/tsi/alts/handshaker/alts_tsi_utils.cc",0x2e
                 ,2,"assertion failed: %s","resp_buffer != nullptr");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (param_2 == 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/tsi/alts/handshaker/alts_tsi_utils.cc",0x2f
                 ,2,"assertion failed: %s","arena != nullptr");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  FUN_003c86e0(auStack_48,param_1);
  FUN_003c8870(&local_68,auStack_48);
  __n = uStack_60 & 0xff;
  if (local_68 != (long *)0x0) {
    __n = uStack_60;
  }
  uVar4 = __n + 0xf & 0xfffffffffffffff0;
  __dest = *(void **)(param_2 + 8);
  if ((ulong)(*(long *)(param_2 + 0x10) - (long)__dest) < uVar4) {
    __dest = (void *)FUN_0053f330(param_2);
  }
  else {
    *(ulong *)(param_2 + 8) = (long)__dest + uVar4;
  }
  if (local_68 == (long *)0x0) {
    local_58 = (void *)((long)&uStack_60 + 1);
  }
  memcpy(__dest,local_58,__n);
  lVar3 = FUN_0053ee00(PTR_PTR_04374eb8,param_2);
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    uVar4 = FUN_005403e0(__dest,__n,lVar3,PTR_PTR_04374eb8,param_2);
    if ((uVar4 & 1) == 0) {
      lVar3 = 0;
    }
  }
  if ((local_68 != (long *)0x0) && (plVar5 = (long *)*local_68, plVar5 != (long *)0x0)) {
    plVar7 = plVar5 + 1;
    lVar6 = *plVar5;
    do {
      lVar8 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((lVar6 != 0) && (*(char *)(lVar6 + 0x10) != '\0')) {
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                   "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar6 + 8),plVar5,lVar8);
    }
    if (lVar8 < 1) {
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                   "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (lVar8 == 1) {
      (*(code *)local_68[3])(local_68[4]);
      FUN_003c8710(auStack_48);
      goto joined_r0x00592584;
    }
  }
  FUN_003c8710(auStack_48);
joined_r0x00592584:
  if (lVar3 == 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/tsi/alts/handshaker/alts_tsi_utils.cc",0x3c
                 ,2,"grpc_gcp_handshaker_resp_decode() failed");
  }
  return lVar3;
}


