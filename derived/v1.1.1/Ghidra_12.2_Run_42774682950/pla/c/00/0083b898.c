/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0083b898; name: FUN_0083b898
 */


undefined8 FUN_0083b898(long param_1)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long local_48 [2];
  undefined1 auStack_38 [16];
  undefined4 local_28 [2];
  
  if ((*(int *)(*(long *)(param_1 + 0x58) + 0x784) == 0) && (*(char *)(param_1 + 0x68) == '\0')) {
    uVar1 = FUN_00835208();
    lVar4 = *(long *)(param_1 + 0x58);
    if ((uVar1 & 1) == 0) {
      lVar3 = FUN_008473ec(lVar4);
      if (lVar3 != 0) {
        lVar3 = FUN_008473ec(lVar4);
        lVar4 = FUN_00847388(lVar4);
        if (lVar3 == lVar4) {
          uVar5 = *(undefined8 *)(param_1 + 0x60);
          local_48[0] = CONCAT44(local_48[0]._4_4_,0x2c18);
          local_28[0] = 0;
          nn::err::ErrorResultVariant::ErrorResultVariant
                    ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_28);
          FUN_007ee578(auStack_38,local_48);
          FUN_007e5cac(uVar5,auStack_38);
          *(undefined8 *)(param_1 + 0x60) = 0;
          return 1;
        }
      }
      FUN_00837ee8(*(undefined8 *)(param_1 + 0x58));
      local_48[0] = 0;
      FUN_007ecf14(local_48);
      plVar2 = (long *)FUN_007ecfa4();
      *(long *)(param_1 + 0x70) = local_48[0] + *plVar2 * 500;
      *(undefined **)(param_1 + 0x30) = PTR_FUN_04377e90;
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(char **)(param_1 + 0x40) = "LeaveMeshJob::WaitLeaveResponse";
      return 5;
    }
    FUN_0083c01c(*(undefined8 *)(lVar4 + 0xc0));
    plVar2 = *(long **)(*(long *)(param_1 + 0x58) + 0xc0);
    (**(code **)(*plVar2 + 0x10))(plVar2,0);
  }
  *(undefined **)(param_1 + 0x30) = PTR_FUN_04377e88;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = "LeaveMeshJob::CompleteProcess";
  return 0;
}


