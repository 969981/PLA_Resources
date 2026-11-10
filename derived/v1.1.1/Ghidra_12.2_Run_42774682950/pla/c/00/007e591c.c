/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007e591c; name: FUN_007e591c
 */


undefined8 FUN_007e591c(long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined4 local_38 [4];
  undefined1 auStack_28 [16];
  undefined4 local_18 [2];
  
  iVar2 = FUN_007e4ff8(*(undefined8 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x90),0);
  if (iVar2 == 1) {
    iVar2 = FUN_007e4ff8(*(undefined8 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x90),1);
  }
  puVar1 = PTR_LAB_04377448;
  if (iVar2 == 0) {
    *(char **)(param_1 + 0x40) = "MonitoringDataSendJob::StepSendReport";
    *(undefined **)(param_1 + 0x30) = puVar1;
    *(undefined8 *)(param_1 + 0x38) = 0;
    return 6;
  }
  local_38[0] = 0x2c18;
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_18);
  FUN_007ee578(auStack_28,local_38);
  FUN_007e5cac(param_1 + 0x58,auStack_28);
  return 1;
}


