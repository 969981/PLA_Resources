/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0060b654; name: FUN_0060b654
 */


undefined8 FUN_0060b654(long param_1,void *param_2,ulong param_3)

{
  if ((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) < param_3) {
    return 0;
  }
  memcpy(param_2,(void *)(*(long *)(param_1 + 8) + *(long *)(param_1 + 0x18)),param_3);
  *(ulong *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + param_3;
  return 1;
}


