/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00833914; name: FUN_00833914
 */


long * FUN_00833914(long param_1)

{
  long *plVar1;
  
  if ((*(ushort *)(param_1 + 10) == 0) || (*(ushort *)(param_1 + 10) <= *(ushort *)(param_1 + 8))) {
    return (long *)0x0;
  }
  plVar1 = *(long **)(*(long *)(param_1 + 0x10) + (ulong)*(ushort *)(param_1 + 8) * 8);
  (**(code **)(*plVar1 + 0x60))(plVar1);
  *(short *)(param_1 + 8) = *(short *)(param_1 + 8) + 1;
  return plVar1;
}


