/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0020cc8c; name: FUN_0020cc8c
 */


void FUN_0020cc8c(undefined8 param_1,byte *param_2)

{
  uint uVar1;
  
  uVar1 = FUN_00205748(param_2);
  FUN_00205be8(param_1,uVar1 & 0x7fffffff,param_2[4] + 1,*param_2 >> 7);
  return;
}


