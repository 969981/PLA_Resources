/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0020d210; name: FUN_0020d210
 */


void FUN_0020d210(long param_1,undefined8 param_2)

{
  uint uVar1;
  
  uVar1 = FUN_00205748(param_2);
  *(uint *)(param_1 + 0x10) = uVar1 & 0x7fffffff;
  return;
}


