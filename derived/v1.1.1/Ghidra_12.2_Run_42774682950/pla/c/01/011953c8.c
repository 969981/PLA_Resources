/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011953c8; name: FUN_011953c8
 */


undefined8 FUN_011953c8(long param_1)

{
  FUN_00d42438(*(undefined8 *)(param_1 + 0x1a8),1,1);
  FUN_00d4ba88(*(undefined8 *)(param_1 + 0x1a8),2,1);
  FUN_00d469b4(*(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x68),*(long *)(param_1 + 0x1a8),0);
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  return 0;
}


