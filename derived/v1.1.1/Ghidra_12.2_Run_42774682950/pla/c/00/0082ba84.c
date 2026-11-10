/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0082ba84; name: FUN_0082ba84
 */


undefined8 FUN_0082ba84(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  char *pcVar4;
  int local_38 [4];
  int local_28 [4];
  undefined4 local_18 [2];
  
  uVar1 = FUN_0082b3b0();
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  (**(code **)(**(long **)(*(long *)PTR_DAT_04377550 + 0x18) + 0x78))
            (local_28,*(long **)(*(long *)PTR_DAT_04377550 + 0x18),param_1 + 0x60);
  if (local_28[0] == 0) {
    uVar2 = 5;
    pcVar4 = "JoinSessionJob::WaitDisconnectNetwork";
    puVar3 = PTR_LAB_04377d20;
  }
  else {
    local_38[0] = 0x4c11;
    local_18[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_18);
    if (local_28[0] == local_38[0]) {
      return 0x640004;
    }
    uVar2 = 0;
    pcVar4 = "JoinSessionJob::CompleteFailure";
    puVar3 = PTR_FUN_04377cf8;
  }
  *(undefined **)(param_1 + 0x30) = puVar3;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = pcVar4;
  return uVar2;
}


