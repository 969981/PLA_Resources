/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0108d858; name: FUN_0108d858
 */


uint FUN_0108d858(char *param_1,uint param_2)

{
  uint *puVar1;
  ushort uVar2;
  int *piVar3;
  
  if (*param_1 == '\0') {
    piVar3 = *(int **)(param_1 + 0x10);
    if (piVar3 == (int *)0x0) {
      piVar3 = *(int **)(param_1 + 8);
    }
    uVar2 = *(ushort *)((long)piVar3 + (0x66 - (long)*piVar3));
  }
  else {
    piVar3 = *(int **)(param_1 + 0x18);
    uVar2 = *(ushort *)((long)piVar3 + (0x62 - (long)*piVar3));
  }
  puVar1 = (uint *)((long)((long)piVar3 + (ulong)uVar2) +
                   (ulong)*(uint *)((long)piVar3 + (ulong)uVar2));
  if (param_2 < *puVar1) {
    return puVar1[(ulong)param_2 + 1];
  }
  return 0;
}


