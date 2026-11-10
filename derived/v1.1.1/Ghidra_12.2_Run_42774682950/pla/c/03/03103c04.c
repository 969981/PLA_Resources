/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03103c04; name: FUN_03103c04
 */


void FUN_03103c04(long param_1,ulong param_2,long *param_3)

{
  FUN_030fdc7c(*(undefined8 *)(*(long *)(param_1 + 8) + (param_2 & 0xffffff) * 0x10),param_3);
  *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + (int)((ulong)(param_3[1] - *param_3) >> 2);
  return;
}


