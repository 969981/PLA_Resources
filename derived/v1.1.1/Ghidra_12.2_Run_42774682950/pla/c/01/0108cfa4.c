/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0108cfa4; name: FUN_0108cfa4
 */


undefined4 FUN_0108cfa4(char *param_1)

{
  int *piVar1;
  ulong uVar2;
  
  if (*param_1 == '\0') {
    piVar1 = *(int **)(param_1 + 0x28);
    if (piVar1 == (int *)0x0) {
      piVar1 = *(int **)(param_1 + 0x20);
    }
  }
  else {
    piVar1 = *(int **)(param_1 + 0x30);
  }
  if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0x53) ||
     (uVar2 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0x29], uVar2 == 0)) {
    return 0;
  }
  return *(undefined4 *)((long)piVar1 + uVar2);
}


