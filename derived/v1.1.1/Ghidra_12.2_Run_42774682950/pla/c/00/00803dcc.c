/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00803dcc; name: FUN_00803dcc
 */


undefined8 FUN_00803dcc(long param_1)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  char *pcVar4;
  undefined *puVar5;
  long lVar6;
  int local_38 [4];
  long local_28;
  
  uVar2 = FUN_007fb4cc(*(undefined8 *)(param_1 + 0xf0));
  if ((uVar2 & 1) == 0) {
    return 5;
  }
  FUN_007fb4f4(local_38,*(undefined8 *)(param_1 + 0xf0));
  if (local_38[0] == 0) {
    if (*(char *)(param_1 + 0xa4) == '\0') {
      *(undefined4 *)(param_1 + 0xe8) = 0;
      iVar1 = (**(code **)(**(long **)(param_1 + 0xf0) + 0x1a0))();
      plVar3 = (long *)FUN_007ecfa4();
      lVar6 = *plVar3;
      local_28 = 0;
      FUN_007ecf14(&local_28);
      pcVar4 = "NetHostMigrationJob::WaitBeforeReconnectNetwork";
      *(long *)(param_1 + 0xd0) = local_28 + lVar6 * iVar1;
      puVar5 = PTR_LAB_04377760;
    }
    else {
      pcVar4 = "NetHostMigrationJob::RecreateNetwork";
      puVar5 = PTR_LAB_04377758;
    }
    *(char **)(param_1 + 0x40) = pcVar4;
    *(undefined **)(param_1 + 0x30) = puVar5;
    *(undefined8 *)(param_1 + 0x38) = 0;
    if (*(char *)(*(long *)(param_1 + 0xf0) + 0x24a) != '\x01') {
      *(undefined1 *)(*(long *)(param_1 + 0xf0) + 0x24a) = 1;
    }
  }
  else {
    FUN_007ee660(param_1 + 0x90,local_38);
    *(undefined **)(param_1 + 0x30) = PTR_FUN_04377740;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = "NetHostMigrationJob::FailureProcess";
  }
  return 0;
}


