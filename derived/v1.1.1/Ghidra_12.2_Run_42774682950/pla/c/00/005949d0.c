/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005949d0; name: FUN_005949d0
 */


undefined8 FUN_005949d0(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  long *local_80;
  ulong uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  void *local_58;
  long *local_50;
  undefined8 uStack_48;
  long local_40;
  undefined8 uStack_38;
  
  if (((param_1 == 0) || (param_2 == 0)) || (param_3 == 0)) {
    uVar10 = 2;
    FUN_002ebea0("external/com_google_grpc_base/src/core/tsi/alts/zero_copy_frame_protector/alts_grpc_privacy_integrity_record_protocol.cc"
                 ,0x2d,2,"Invalid nullptr arguments to alts_grpc_record_protocol protect.");
  }
  else {
    lVar7 = *(long *)(param_2 + 0x20);
    lVar8 = *(long *)(param_1 + 0x140);
    lVar5 = FUN_005931c0(*(undefined8 *)(param_1 + 8));
    FUN_002f27f0(&local_50,lVar8 + lVar7 + lVar5);
    local_58 = (void *)0x0;
    uVar1 = uStack_48;
    lVar5 = local_40;
    if (local_50 == (long *)0x0) {
      uVar1 = uStack_48 & 0xff;
      lVar5 = (long)&uStack_48 + 1;
    }
    FUN_00592c80(param_1,param_2);
    iVar4 = FUN_005939f0(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x150),
                         *(undefined8 *)(param_2 + 0x10),lVar5,uVar1,&local_58);
    if (iVar4 == 0) {
      uStack_78 = uStack_48;
      local_80 = local_50;
      uStack_68 = uStack_38;
      lStack_70 = local_40;
      FUN_003052c0(param_3,&local_80);
      FUN_00305050(param_2);
      uVar10 = 0;
    }
    else {
      FUN_002ebea0("external/com_google_grpc_base/src/core/tsi/alts/zero_copy_frame_protector/alts_grpc_privacy_integrity_record_protocol.cc"
                   ,0x42,2,"Failed to protect, %s",local_58);
      free(local_58);
      if ((local_50 != (long *)0x0) && (plVar6 = (long *)*local_50, plVar6 != (long *)0x0)) {
        plVar9 = plVar6 + 1;
        lVar5 = *plVar6;
        do {
          lVar7 = *plVar9;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = lVar7 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((lVar5 != 0) && (*(char *)(lVar5 + 0x10) != '\0')) {
          FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                       "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar5 + 8),plVar6,lVar7);
        }
        if (lVar7 < 1) {
          FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                       "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
          abort();
        }
        if (lVar7 == 1) {
          (*(code *)local_50[3])(local_50[4]);
        }
      }
      uVar10 = 7;
    }
  }
  return uVar10;
}


