/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0115e0bc; name: FUN_0115e0bc
 */


undefined4 FUN_0115e0bc(long param_1,uint param_2)

{
  int *piVar1;
  uint *puVar2;
  ulong uVar3;
  
  piVar1 = *(int **)(param_1 + 0x58);
  puVar2 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
  puVar2 = (uint *)((long)puVar2 + (ulong)*puVar2);
  if (param_2 < *puVar2) {
    puVar2 = puVar2 + (ulong)param_2 + 1;
    piVar1 = (int *)((long)puVar2 + (ulong)*puVar2);
    if ((4 < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
       (uVar3 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2], uVar3 != 0)) {
      return *(undefined4 *)((long)piVar1 + uVar3);
    }
  }
  return 0;
}


