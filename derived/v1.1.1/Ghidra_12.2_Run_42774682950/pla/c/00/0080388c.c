/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0080388c; name: FUN_0080388c
 */


undefined8 FUN_0080388c(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  int local_28 [4];
  undefined4 local_18 [2];
  
  if (*(char *)(*(long *)(param_1 + 0xf0) + 0x284) == '\0') {
    FUN_007fc610(local_28);
    if (local_28[0] == 0) {
      *(undefined4 *)(param_1 + 0xa0) = 1;
      uVar2 = FUN_007f89f0(*(undefined8 *)(param_1 + 0xf0));
      if (((uVar2 & 1) == 0) &&
         (FUN_007f8a00(local_28,*(undefined8 *)(param_1 + 0xf0),0), puVar1 = PTR_FUN_04377748,
         local_28[0] == 0)) {
        *(undefined4 *)(param_1 + 0xa0) = 2;
        *(undefined **)(param_1 + 0x30) = puVar1;
        *(undefined8 *)(param_1 + 0x38) = 0;
        *(char **)(param_1 + 0x40) = "NetHostMigrationJob::WaitDisconnectNetwork";
      }
      return 5;
    }
    FUN_007fc610(local_28,*(undefined8 *)(param_1 + 0xf0));
  }
  else {
    local_28[0] = 0x6c05;
    local_18[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_28 | 4),(Result *)local_18);
  }
  FUN_007ee660(param_1 + 0x90,local_28);
  *(undefined **)(param_1 + 0x30) = PTR_FUN_04377740;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = "NetHostMigrationJob::FailureProcess";
  return 0;
}


