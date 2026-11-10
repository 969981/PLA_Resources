/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0082d448; name: FUN_0082d448
 */


undefined8 FUN_0082d448(long param_1)

{
  undefined *puVar1;
  char *pcVar2;
  undefined8 uVar3;
  long *plVar4;
  bool bVar5;
  ulong uVar6;
  int local_20 [4];
  
  uVar6 = FUN_0082ce64();
  if ((uVar6 & 1) == 0) {
    return 0;
  }
  plVar4 = *(long **)(*(long *)PTR_DAT_04377550 + 0x18);
  (**(code **)(*plVar4 + 0x58))
            (local_20,plVar4,param_1 + 0x60,*(undefined8 *)(*(long *)PTR_DAT_04377550 + 0x20));
  bVar5 = local_20[0] != 0;
  puVar1 = PTR_LAB_04377dd8;
  if (bVar5) {
    puVar1 = PTR_FUN_04377db0;
  }
  pcVar2 = "CreateSessionJob::WaitDestroyNetwork";
  if (bVar5) {
    pcVar2 = "CreateSessionJob::CompleteFailure";
  }
  *(undefined **)(param_1 + 0x30) = puVar1;
  *(undefined8 *)(param_1 + 0x38) = 0;
  uVar3 = 5;
  if (bVar5) {
    uVar3 = 0;
  }
  *(char **)(param_1 + 0x40) = pcVar2;
  return uVar3;
}


