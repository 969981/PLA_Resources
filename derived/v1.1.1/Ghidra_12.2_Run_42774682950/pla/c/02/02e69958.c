/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e69958; name: FUN_02e69958
 */


void FUN_02e69958(long param_1,uint param_2,ulong param_3)

{
  uint uVar1;
  
  uVar1 = FUN_02e699a4(param_1,param_2 & 1,param_3,param_1 + 0x280);
  FUN_02e699a4(param_1,param_2 & (uVar1 ^ 0xffffffff) & 1,param_3 & 0xffffffff,param_1 + 0x278);
  return;
}


