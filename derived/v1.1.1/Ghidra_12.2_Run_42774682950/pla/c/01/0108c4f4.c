/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0108c4f4; name: FUN_0108c4f4
 */


undefined4 FUN_0108c4f4(char *param_1)

{
  ushort uVar1;
  int *piVar2;
  
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
  return *(undefined4 *)
          ((long)((long)piVar2 + (ulong)uVar1) + (ulong)*(uint *)((long)piVar2 + (ulong)uVar1));
}


