/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00c4fe78; name: FUN_00c4fe78
 */


undefined8 FUN_00c4fe78(long param_1,uint param_2)

{
  int *piVar1;
  ulong uVar2;
  undefined4 *puVar3;
  
  if (0 < (int)param_2) {
    uVar2 = (ulong)param_2;
    puVar3 = (undefined4 *)(param_1 + 0x20);
    do {
      piVar1 = (int *)FUN_01e4b418(*puVar3);
      if ((piVar1 != (int *)0x0) && (*piVar1 == 1)) {
        return 1;
      }
      uVar2 = uVar2 - 1;
      puVar3 = puVar3 + 0x30;
    } while (uVar2 != 0);
  }
  return 0;
}


