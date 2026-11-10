/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010aaca0; name: FUN_010aaca0
 */


long FUN_010aaca0(long param_1)

{
  int *piVar1;
  uint *puVar2;
  ulong uVar3;
  
  puVar2 = *(uint **)(*(long *)(param_1 + 0x328) + 0x250);
  piVar1 = (int *)((long)puVar2 + (ulong)*puVar2);
  if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 5) ||
     (uVar3 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2], uVar3 == 0)) {
    return 0;
  }
  puVar2 = (uint *)((long)piVar1 + uVar3);
  return (long)puVar2 + (ulong)*puVar2;
}


