/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0038efb0; name: FUN_0038efb0
 */


void FUN_0038efb0(char *param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  
  if (*param_1 != '\0') {
    return;
  }
  *param_1 = '\x01';
  if (0 < *(int *)(param_1 + 0x38)) {
    lVar3 = 0;
    do {
      while (**(int **)(*(long *)(param_1 + 0x28) + lVar3 * 8) != 0) {
        FUN_0032d2b0();
        lVar3 = lVar3 + 1;
        if (*(int *)(param_1 + 0x38) <= lVar3) goto LAB_0038f020;
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < *(int *)(param_1 + 0x38));
  }
LAB_0038f020:
  uVar1 = *(uint *)(param_1 + 0x3c);
  if (0 < (int)uVar1) {
    lVar3 = 0;
    lVar2 = **(long **)(param_1 + 0x30);
    while( true ) {
      if (lVar2 != 0) {
        FUN_0038efb0();
      }
      if ((ulong)uVar1 == lVar3 + 1U) break;
      lVar3 = lVar3 + 1;
      lVar2 = *(long *)(*(long *)(param_1 + 0x30) + lVar3 * 8);
    }
  }
  FUN_003420f8(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x18));
  FUN_00391c80(param_1);
  return;
}


