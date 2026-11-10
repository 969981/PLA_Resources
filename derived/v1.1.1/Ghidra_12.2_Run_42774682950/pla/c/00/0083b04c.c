/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0083b04c; name: FUN_0083b04c
 */


undefined8 FUN_0083b04c(long param_1)

{
  ulong uVar1;
  long *plVar2;
  int *piVar3;
  undefined *puVar4;
  char *pcVar5;
  undefined8 uVar6;
  long lVar7;
  int local_80 [4];
  int local_70 [4];
  undefined4 local_60 [4];
  int local_50 [4];
  int local_40 [4];
  ulong local_30 [2];
  
  puVar4 = PTR_FUN_04377e48;
  piVar3 = local_80;
  if ((*(long *)(param_1 + 0x60) != 0) && (*(char *)(*(long *)(param_1 + 0x60) + 0x28) != '\0')) {
    FUN_007e5d18();
    *(undefined8 *)(param_1 + 0x60) = 0;
    PTR_DAT_043773b8[0x3f3] = (char)*(undefined4 *)(param_1 + 0x98);
    *(undefined4 *)(param_1 + 0x98) = 0;
    return 1;
  }
  if (*(int *)(param_1 + 0x9c) == 0) {
    if (*(int *)(*(long *)(param_1 + 0x58) + 0x784) == 0) {
      if (*(char *)(param_1 + 0x6a) != '\0') {
        *(undefined1 *)(param_1 + 0x6a) = 0;
LAB_0083b148:
        *(undefined **)(param_1 + 0x30) = puVar4;
        *(undefined8 *)(param_1 + 0x38) = 0;
        pcVar5 = "JoinMeshJob::SendJoinRequest";
        goto LAB_0083b18c;
      }
      if (*(char *)(param_1 + 0x68) == '\0') {
        uVar1 = FUN_00835208();
        if ((uVar1 & 1) == 0) {
          local_30[0] = 0;
          FUN_007ecf14(local_30);
          if (local_30[0] < *(ulong *)(param_1 + 0x88)) {
            return 5;
          }
          puVar4 = PTR_FUN_04377e48;
          goto LAB_0083b148;
        }
        local_60[0] = 0x6479;
        local_30[0] = local_30[0] & 0xffffffff00000000;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)local_60 | 4),(Result *)local_30);
        FUN_007ee578(local_80,local_60);
        FUN_007ee660(param_1 + 0xac,local_80);
        if (local_80[0] != 0) goto LAB_0083b11c;
        uVar6 = *(undefined8 *)(param_1 + 0x58);
      }
      else {
        if (*(int *)(param_1 + 0x6c) == 0) {
          *(undefined **)(param_1 + 0x30) = PTR_LAB_04377e60;
          *(undefined8 *)(param_1 + 0x38) = 0;
          *(char **)(param_1 + 0x40) = "JoinMeshJob::WaitUpdateSessionMessage";
          plVar2 = (long *)FUN_007ecfa4();
          lVar7 = *plVar2;
          local_30[0] = 0;
          FUN_007ecf14(local_30);
          *(ulong *)(param_1 + 0x80) = local_30[0] + lVar7 * 11000;
          *(undefined4 *)(param_1 + 0x98) = 4;
          return 0;
        }
        FUN_007ee578(local_70);
        FUN_007ee660(param_1 + 0xac,local_70);
        if (local_70[0] != 0) goto LAB_0083b11c;
        uVar6 = *(undefined8 *)(param_1 + 0x58);
        piVar3 = local_70;
      }
    }
    else {
      local_60[0] = 0x8c52;
      local_30[0] = local_30[0] & 0xffffffff00000000;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_60 | 4),(Result *)local_30);
      FUN_007ee578(local_50,local_60);
      FUN_007ee660(param_1 + 0xac,local_50);
      if (local_50[0] != 0) goto LAB_0083b11c;
      uVar6 = *(undefined8 *)(param_1 + 0x58);
      piVar3 = local_50;
    }
LAB_0083b164:
    FUN_007ee578(local_30,piVar3);
    FUN_0083a790(uVar6,local_30);
  }
  else {
    FUN_007ee578(local_40);
    FUN_007ee660(param_1 + 0xac,local_40);
    if (local_40[0] == 0) {
      uVar6 = *(undefined8 *)(param_1 + 0x58);
      piVar3 = local_40;
      goto LAB_0083b164;
    }
LAB_0083b11c:
    PTR_DAT_043773b8[0x3f3] = (char)*(undefined4 *)(param_1 + 0x98);
  }
  *(undefined **)(param_1 + 0x30) = PTR_LAB_04377e50;
  *(undefined8 *)(param_1 + 0x38) = 0;
  pcVar5 = "JoinMeshJob::SendMonitoringData";
LAB_0083b18c:
  *(char **)(param_1 + 0x40) = pcVar5;
  return 0;
}


