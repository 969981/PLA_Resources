/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0020cea8; name: FUN_0020cea8
 */


void FUN_0020cea8(uint *param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = FUN_00205740(param_2);
  *param_1 = uVar1 & 0xffff;
  uVar1 = FUN_00205748(param_2 + 2);
  param_1[1] = uVar1;
  return;
}


