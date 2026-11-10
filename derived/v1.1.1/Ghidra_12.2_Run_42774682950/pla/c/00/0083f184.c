/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0083f184; name: FUN_0083f184
 */


undefined8 FUN_0083f184(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  char *pcVar6;
  ulong local_58 [4];
  int local_38 [4];
  undefined4 local_28 [2];
  
  if (*(int *)(*(long *)(param_1 + 0x58) + 0x784) == 0) {
    lVar4 = param_1 + 0x68;
    (**(code **)(**(long **)(*(long *)PTR_DAT_04377550 + 0x18) + 0x110))
              (local_38,*(long **)(*(long *)PTR_DAT_04377550 + 0x18),lVar4);
    if (local_38[0] == 0) {
      FUN_0083fd74(local_58,lVar4);
      uVar2 = FUN_007f0ee4(local_58);
      if ((uVar2 & 1) != 0) {
        uVar3 = FUN_00855004(*(undefined8 *)PTR_DAT_043773c0);
        lVar4 = FUN_008280b4(uVar3,lVar4);
        *(long *)(param_1 + 0xa8) = lVar4;
        puVar1 = PTR_LAB_04377f48;
        if (lVar4 != 0) {
          if ((*(char *)(lVar4 + 0x90) == -3) || (*(char *)(lVar4 + 0x91) == -3)) {
            *(char **)(param_1 + 0x40) = "LeaveMeshWithHostMigrationJob::WaitNextHost";
            *(undefined **)(param_1 + 0x30) = puVar1;
            *(undefined8 *)(param_1 + 0x38) = 0;
            return 5;
          }
          FUN_0083a498(*(undefined8 *)(param_1 + 0x58));
          plVar5 = (long *)FUN_007ecfa4();
          lVar4 = *plVar5;
          local_58[0] = 0;
          FUN_007ecf14(local_58);
          *(undefined **)(param_1 + 0x30) = PTR_LAB_04377f50;
          *(undefined8 *)(param_1 + 0x38) = 0;
          *(ulong *)(param_1 + 200) = local_58[0] + lVar4 * 5000;
          pcVar6 = "LeaveMeshWithHostMigrationJob::SendStartHostMigrationMessage";
          goto LAB_0083f1b8;
        }
        goto LAB_0083f228;
      }
    }
    else {
      local_58[0] = CONCAT44(local_58[0]._4_4_,0x4c11);
      local_28[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_58 | 4),(Result *)local_28);
      if (local_38[0] == (int)local_58[0]) {
LAB_0083f228:
        local_58[0] = 0;
        FUN_007ecf14(local_58);
        if (local_58[0] < *(ulong *)(param_1 + 0xd8)) {
          return 5;
        }
      }
    }
  }
  *(undefined **)(param_1 + 0x30) = PTR_FUN_04377f38;
  *(undefined8 *)(param_1 + 0x38) = 0;
  pcVar6 = "LeaveMeshWithHostMigrationJob::CompleteProcess";
LAB_0083f1b8:
  *(char **)(param_1 + 0x40) = pcVar6;
  return 0;
}


