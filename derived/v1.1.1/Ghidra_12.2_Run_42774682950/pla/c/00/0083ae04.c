/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0083ae04; name: FUN_0083ae04
 */


undefined8 FUN_0083ae04(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  int *piVar4;
  undefined8 uVar5;
  long lVar6;
  int local_80 [4];
  int local_70 [4];
  undefined4 local_60 [4];
  int local_50 [4];
  int local_40 [4];
  ulong local_30 [2];
  
  piVar4 = local_80;
  if ((*(long *)(param_1 + 0x60) != 0) && (*(char *)(*(long *)(param_1 + 0x60) + 0x28) != '\0')) {
    FUN_007e5d18();
    *(undefined8 *)(param_1 + 0x60) = 0;
    PTR_DAT_043773b8[0x3f3] = (char)*(undefined4 *)(param_1 + 0x98);
    *(undefined4 *)(param_1 + 0x98) = 0;
    return 1;
  }
  if (*(int *)(param_1 + 0x9c) == 0) {
    if (*(int *)(*(long *)(param_1 + 0x58) + 0x784) == 0) {
      uVar2 = FUN_00835208();
      if ((uVar2 & 1) == 0) {
        local_30[0] = 0;
        FUN_007ecf14(local_30);
        if (local_30[0] < *(ulong *)(param_1 + 0x80)) {
          FUN_00836068(*(undefined8 *)(param_1 + 0x58));
          plVar3 = (long *)FUN_007ecfa4();
          lVar6 = *plVar3;
          local_30[0] = 0;
          FUN_007ecf14(local_30);
          *(undefined4 *)(param_1 + 0x98) = 3;
          *(ulong *)(param_1 + 0x88) = local_30[0] + lVar6 * 500;
          puVar1 = PTR_FUN_04377e58;
          *(char **)(param_1 + 0x40) = "JoinMeshJob::WaitJoinResponse";
          *(undefined **)(param_1 + 0x30) = puVar1;
          *(undefined8 *)(param_1 + 0x38) = 0;
          return 5;
        }
        local_60[0] = 0x6476;
        local_30[0] = local_30[0] & 0xffffffff00000000;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)local_60 | 4),(Result *)local_30);
        FUN_007ee578(local_80,local_60);
        FUN_007ee660(param_1 + 0xac,local_80);
        if (local_80[0] != 0) goto LAB_0083aff0;
        uVar5 = *(undefined8 *)(param_1 + 0x58);
      }
      else {
        local_60[0] = 0x6479;
        local_30[0] = local_30[0] & 0xffffffff00000000;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)local_60 | 4),(Result *)local_30);
        FUN_007ee578(local_70,local_60);
        FUN_007ee660(param_1 + 0xac,local_70);
        if (local_70[0] != 0) {
LAB_0083aff0:
          PTR_DAT_043773b8[0x3f3] = (char)*(undefined4 *)(param_1 + 0x98);
          goto LAB_0083b020;
        }
        uVar5 = *(undefined8 *)(param_1 + 0x58);
        piVar4 = local_70;
      }
    }
    else {
      local_60[0] = 0x8c52;
      local_30[0] = local_30[0] & 0xffffffff00000000;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_60 | 4),(Result *)local_30);
      FUN_007ee578(local_50,local_60);
      FUN_007ee660(param_1 + 0xac,local_50);
      if (local_50[0] != 0) goto LAB_0083aff0;
      uVar5 = *(undefined8 *)(param_1 + 0x58);
      piVar4 = local_50;
    }
  }
  else {
    FUN_007ee578(local_40);
    FUN_007ee660(param_1 + 0xac,local_40);
    if (local_40[0] != 0) goto LAB_0083aff0;
    uVar5 = *(undefined8 *)(param_1 + 0x58);
    piVar4 = local_40;
  }
  FUN_007ee578(local_30,piVar4);
  FUN_0083a790(uVar5,local_30);
LAB_0083b020:
  *(undefined **)(param_1 + 0x30) = PTR_LAB_04377e50;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = "JoinMeshJob::SendMonitoringData";
  return 0;
}


