/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0286badc; name: FUN_0286badc
 */


void FUN_0286badc(long param_1,undefined8 *param_2,uint param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x50);
  *(undefined4 *)(lVar1 + 0x2df0) = 0;
  *(undefined8 *)(lVar1 + 0x2df8) = 0;
  *(undefined8 *)(lVar1 + 0x2df8) = *param_2;
  *(uint *)(lVar1 + 0x2df0) = param_3 & 1;
  return;
}


