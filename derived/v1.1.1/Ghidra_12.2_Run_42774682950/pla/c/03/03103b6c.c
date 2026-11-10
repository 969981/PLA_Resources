/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03103b6c; name: FUN_03103b6c
 */


void FUN_03103b6c(long param_1,ulong param_2,int param_3)

{
  FUN_030fd1b8(*(undefined8 *)(*(long *)(param_1 + 8) + (param_2 & 0xffffff) * 0x10),param_3);
  *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + param_3;
  return;
}


