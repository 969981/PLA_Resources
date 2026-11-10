/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0016ca50; name: FUN_0016ca50
 */


void FUN_0016ca50(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_00161510(param_1,0,0,0x48);
  *(long *)(*(long *)(param_1 + 0x20) + 0x18) = lVar1;
  *(undefined8 *)(lVar1 + 0x10) = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *(short *)(param_1 + 10) = *(short *)(param_1 + 10) + 1;
  return;
}


