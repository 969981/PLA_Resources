/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030f6bd0; name: FUN_030f6bd0
 */


void FUN_030f6bd0(long param_1)

{
  int *piVar1;
  long *plVar2;
  long lVar3;
  
  if (*(int *)(param_1 + 0x20) != 0) {
    lVar3 = (long)*(int *)(param_1 + 0x20) << 3;
    plVar2 = *(long **)(param_1 + 0x18);
    do {
      FUN_030fb734(*plVar2 + 0x20);
      lVar3 = lVar3 + -8;
      plVar2 = plVar2 + 1;
    } while (lVar3 != 0);
  }
  piVar1 = *(int **)(param_1 + 0x530);
  if (*piVar1 < 0) {
    FUN_032c4b00(*(undefined8 *)(piVar1 + 6),0xff,piVar1[8] << 6);
    *piVar1 = 1;
  }
  return;
}


