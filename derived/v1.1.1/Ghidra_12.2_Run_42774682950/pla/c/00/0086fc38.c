/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0086fc38; name: FUN_0086fc38
 */


void FUN_0086fc38(long param_1,long param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0x10);
  FUN_007e3400(param_1);
  FUN_007e34ac(param_1,uVar1);
  *(short *)(param_1 + 0x18) = (short)*(undefined4 *)(param_2 + 0xc);
  return;
}


