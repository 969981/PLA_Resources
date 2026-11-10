/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004e76f0; name: FUN_004e76f0
 */


void FUN_004e76f0(long param_1)

{
  long lVar1;
  
  FUN_00403ee0(*(undefined8 *)(*(long *)(param_1 + 0xa8) + 0xe0));
  lVar1 = *(long *)(param_1 + 0xa8);
  *(undefined8 *)(lVar1 + 0xe0) = 0;
  FUN_00444950(*(undefined8 *)(lVar1 + 0xe8));
  *(undefined8 *)(*(long *)(param_1 + 0xa8) + 0xe8) = 0;
  return;
}


