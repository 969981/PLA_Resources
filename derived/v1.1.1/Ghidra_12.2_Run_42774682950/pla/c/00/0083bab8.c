/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0083bab8; name: FUN_0083bab8
 */


undefined8 FUN_0083bab8(long param_1)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  char *pcVar5;
  long lVar6;
  undefined8 uVar7;
  ulong local_48 [2];
  undefined1 auStack_38 [16];
  undefined4 local_28 [2];
  
  if ((*(int *)(*(long *)(param_1 + 0x58) + 0x784) == 0) && (*(char *)(param_1 + 0x68) == '\0')) {
    uVar2 = FUN_00835208();
    lVar6 = *(long *)(param_1 + 0x58);
    if ((uVar2 & 1) == 0) {
      lVar4 = FUN_008473ec(lVar6);
      if (lVar4 != 0) {
        lVar4 = FUN_008473ec(lVar6);
        lVar6 = FUN_00847388(lVar6);
        if (lVar4 == lVar6) {
          uVar7 = *(undefined8 *)(param_1 + 0x60);
          local_48[0] = CONCAT44(local_48[0]._4_4_,0x2c18);
          local_28[0] = 0;
          nn::err::ErrorResultVariant::ErrorResultVariant
                    ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_28);
          FUN_007ee578(auStack_38,local_48);
          FUN_007e5cac(uVar7,auStack_38);
          *(undefined8 *)(param_1 + 0x60) = 0;
          return 1;
        }
      }
      if (*(char *)(param_1 + 0x69) == '\0') {
        local_48[0] = 0;
        FUN_007ecf14(local_48);
        if (local_48[0] < *(ulong *)(param_1 + 0x70)) {
          return 5;
        }
        iVar1 = *(int *)(param_1 + 0x6c) + 1;
        *(int *)(param_1 + 0x6c) = iVar1;
        if (iVar1 < 4) {
          *(undefined **)(param_1 + 0x30) = PTR_FUN_04377e80;
          *(undefined8 *)(param_1 + 0x38) = 0;
          pcVar5 = "LeaveMeshJob::SendLeaveRequest";
          goto LAB_0083bba4;
        }
      }
    }
    else {
      FUN_0083c01c(*(undefined8 *)(lVar6 + 0xc0));
      plVar3 = *(long **)(*(long *)(param_1 + 0x58) + 0xc0);
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  *(undefined **)(param_1 + 0x30) = PTR_FUN_04377e88;
  *(undefined8 *)(param_1 + 0x38) = 0;
  pcVar5 = "LeaveMeshJob::CompleteProcess";
LAB_0083bba4:
  *(char **)(param_1 + 0x40) = pcVar5;
  return 0;
}


