/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0082bb68; name: FUN_0082bb68
 */


undefined8 FUN_0082bb68(long param_1)

{
  ulong uVar1;
  char *pcVar2;
  undefined *puVar3;
  int local_28 [4];
  undefined4 local_18 [2];
  
  uVar1 = FUN_0082b3b0();
  if ((uVar1 & 1) != 0) {
    if ((*(long *)(param_1 + 0x58) == 0) || (*(char *)(*(long *)(param_1 + 0x58) + 0x28) == '\0')) {
      FUN_0082abe0(local_28,*(undefined8 *)PTR_DAT_04377550);
      if (local_28[0] == 0) {
        *(undefined4 *)(param_1 + 0x94) = 2;
        pcVar2 = "JoinSessionJob::JoinMesh";
        puVar3 = PTR_LAB_04377d28;
      }
      else {
        FUN_007ee660(param_1 + 0xa0,local_28);
        pcVar2 = "JoinSessionJob::DisconnectNetwork";
        puVar3 = PTR_FUN_04377d18;
      }
      *(undefined **)(param_1 + 0x30) = puVar3;
      *(undefined8 *)(param_1 + 0x38) = 0;
    }
    else {
      local_28[0] = 0x6c05;
      local_18[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_28 | 4),(Result *)local_18);
      FUN_007ee660(param_1 + 0xa0,local_28);
      *(undefined **)(param_1 + 0x30) = PTR_FUN_04377d18;
      *(undefined8 *)(param_1 + 0x38) = 0;
      pcVar2 = "JoinSessionJob::DisconnectNetwork";
    }
    *(char **)(param_1 + 0x40) = pcVar2;
  }
  return 0;
}


