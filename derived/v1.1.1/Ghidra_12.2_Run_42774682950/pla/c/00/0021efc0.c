/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0021efc0; name: FUN_0021efc0
 */


int * FUN_0021efc0(long param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  
  if (*(ushort *)(param_1 + 0x10) != 0) {
    uVar1 = 0;
    piVar2 = (int *)(param_1 + (ulong)*(ushort *)(param_1 + 6));
    do {
      if (*piVar2 == param_2) {
        return piVar2 + 2;
      }
      uVar1 = uVar1 + 1;
      piVar2 = (int *)((long)piVar2 + (ulong)(uint)piVar2[1]);
    } while (uVar1 < *(ushort *)(param_1 + 0x10));
  }
  return (int *)0x0;
}


