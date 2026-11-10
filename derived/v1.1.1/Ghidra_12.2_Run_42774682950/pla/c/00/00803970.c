/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00803970; name: FUN_00803970
 */


undefined8 FUN_00803970(long param_1)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  long local_40 [2];
  undefined4 local_28 [2];
  
  if (*(char *)(*(long *)(param_1 + 0xf0) + 0x284) == '\0') {
    FUN_007fc610(local_40);
    if ((int)local_40[0] == 0) {
      *(undefined4 *)(param_1 + 0xa0) = 5;
      FUN_007fc194(*(undefined8 *)(param_1 + 0xf0));
      puVar1 = PTR_LAB_04377750;
      *(undefined4 *)(param_1 + 0xa0) = 6;
      *(char **)(param_1 + 0x40) = "NetHostMigrationJob::WaitEmulateDisconnected";
      *(undefined **)(param_1 + 0x30) = puVar1;
      *(undefined8 *)(param_1 + 0x38) = 0;
      iVar2 = (**(code **)(**(long **)(param_1 + 0xf0) + 0x1a8))();
      plVar3 = (long *)FUN_007ecfa4();
      lVar4 = *plVar3;
      local_40[0] = 0;
      FUN_007ecf14(local_40);
      *(long *)(param_1 + 0xe0) = local_40[0] + lVar4 * iVar2;
      return 5;
    }
    FUN_007fc610(local_40,*(undefined8 *)(param_1 + 0xf0));
  }
  else {
    local_40[0] = CONCAT44(local_40[0]._4_4_,0x6c05);
    local_28[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_28);
  }
  FUN_007ee660(param_1 + 0x90,local_40);
  *(undefined **)(param_1 + 0x30) = PTR_FUN_04377740;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = "NetHostMigrationJob::FailureProcess";
  return 0;
}


