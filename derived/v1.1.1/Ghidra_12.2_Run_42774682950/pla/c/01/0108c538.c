/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0108c538; name: FUN_0108c538
 */


long FUN_0108c538(char *param_1,uint param_2)

{
  ushort uVar1;
  int *piVar2;
  uint *puVar3;
  
  if (*param_1 == '\0') {
    piVar2 = *(int **)(param_1 + 0x10);
    if (piVar2 == (int *)0x0) {
      piVar2 = *(int **)(param_1 + 8);
    }
    uVar1 = *(ushort *)((long)piVar2 + (0xc - (long)*piVar2));
  }
  else {
    piVar2 = *(int **)(param_1 + 0x18);
    uVar1 = *(ushort *)((long)piVar2 + (10 - (long)*piVar2));
  }
  puVar3 = (uint *)((long)((long)piVar2 + (ulong)uVar1) +
                   (ulong)*(uint *)((long)piVar2 + (ulong)uVar1));
  if (param_2 < *puVar3) {
    puVar3 = puVar3 + (ulong)param_2 + 1;
    return (long)puVar3 + (ulong)*puVar3;
  }
  return 0;
}


