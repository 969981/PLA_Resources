/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00594420; name: FUN_00594420
 */


undefined8 FUN_00594420(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  int iVar3;
  void *__src;
  undefined8 uVar4;
  size_t __n;
  long *plVar5;
  ulong uVar6;
  void *__dest;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long local_d0;
  ulong uStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  long local_b0;
  ulong uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  long local_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  long local_70;
  undefined8 uStack_68;
  long local_60;
  undefined8 uStack_58;
  void *local_48;
  
  if (((param_1 == 0) || (param_2 == 0)) || (param_3 == 0)) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/tsi/alts/zero_copy_frame_protector/alts_grpc_integrity_only_record_protocol.cc"
                 ,0x58,2,"Invalid nullptr arguments to alts_grpc_record_protocol protect.");
    return 2;
  }
  if (*(char *)(param_1 + 0x160) == '\0') {
    FUN_002f27f0(&local_70,*(undefined8 *)(param_1 + 0x140));
    FUN_002f27f0(&local_90,*(undefined8 *)(param_1 + 0x148));
    lVar7 = local_60;
    if (local_70 == 0) {
      lVar7 = (long)&uStack_68 + 1;
    }
    uVar9 = uStack_68;
    if (local_70 == 0) {
      uVar9 = uStack_68 & 0xff;
    }
    lVar8 = lStack_80;
    if (local_90 == 0) {
      lVar8 = (long)&uStack_88 + 1;
    }
    local_48 = (void *)0x0;
    uVar6 = uStack_88;
    if (local_90 == 0) {
      uVar6 = uStack_88 & 0xff;
    }
    FUN_00592c80(param_1,param_2);
    iVar3 = FUN_005931f0(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x150),
                         *(undefined8 *)(param_2 + 0x10),lVar7,uVar9,lVar8,uVar6,&local_48);
    if (iVar3 == 0) {
      uStack_a8 = uStack_68;
      local_b0 = local_70;
      uStack_98 = uStack_58;
      lStack_a0 = local_60;
      FUN_003052c0(param_3,&local_b0);
      FUN_00305640(param_2,param_3);
      uStack_c8 = uStack_88;
      local_d0 = local_90;
      uStack_b8 = uStack_78;
      lStack_c0 = lStack_80;
      FUN_003052c0(param_3,&local_d0);
      return 0;
    }
    uVar4 = 0x71;
  }
  else {
    lVar7 = *(long *)(param_2 + 0x20);
    FUN_002f27f0(&local_70,*(long *)(param_1 + 0x140) + lVar7 + *(long *)(param_1 + 0x148));
    if (*(long *)(param_2 + 0x10) != 0) {
      lVar8 = (long)&uStack_68 + 1;
      if (local_70 != 0) {
        lVar8 = local_60;
      }
      __dest = (void *)(lVar8 + *(long *)(param_1 + 0x140));
      plVar5 = *(long **)(param_2 + 8);
      lVar8 = 0;
      uVar9 = 0;
      if (*plVar5 != 0) goto LAB_005944d8;
      do {
        __n = (size_t)*(byte *)((long)plVar5 + lVar8 + 8);
        __src = (void *)((long)plVar5 + lVar8 + 9);
        while( true ) {
          memcpy(__dest,__src,__n);
          plVar5 = *(long **)(param_2 + 8);
          if (*(long *)((long)plVar5 + lVar8) == 0) {
            uVar6 = (ulong)*(byte *)((long)plVar5 + lVar8 + 8);
          }
          else {
            uVar6 = *(ulong *)((long)plVar5 + lVar8 + 8);
          }
          __dest = (void *)((long)__dest + uVar6);
          uVar9 = uVar9 + 1;
          lVar8 = lVar8 + 0x20;
          if (*(ulong *)(param_2 + 0x10) <= uVar9) goto LAB_00594534;
          if (*(long *)((long)plVar5 + lVar8) == 0) break;
LAB_005944d8:
          __n = *(size_t *)((long)plVar5 + lVar8 + 8);
          __src = *(void **)((long)plVar5 + lVar8 + 0x10);
        }
      } while( true );
    }
LAB_00594534:
    local_48 = (void *)0x0;
    lVar2 = *(long *)(param_1 + 0x140);
    uVar4 = *(undefined8 *)(param_1 + 0x148);
    plVar5 = *(long **)(param_1 + 0x150);
    lVar8 = (long)&uStack_68 + 1;
    if (local_70 != 0) {
      lVar8 = local_60;
    }
    lVar1 = lVar8 + lVar2;
    *plVar5 = lVar1;
    plVar5[1] = lVar7;
    iVar3 = FUN_005931f0(*(undefined8 *)(param_1 + 8),plVar5,1,lVar8,lVar2,lVar1 + lVar7,uVar4,
                         &local_48);
    if (iVar3 == 0) {
      uStack_88 = uStack_68;
      local_90 = local_70;
      uStack_78 = uStack_58;
      lStack_80 = local_60;
      FUN_003052c0(param_3,&local_90);
      FUN_00305050(param_2);
      return 0;
    }
    uVar4 = 0x49;
  }
  FUN_002ebea0("external/com_google_grpc_base/src/core/tsi/alts/zero_copy_frame_protector/alts_grpc_integrity_only_record_protocol.cc"
               ,uVar4,2,"Failed to protect, %s",local_48);
  free(local_48);
  return 7;
}


