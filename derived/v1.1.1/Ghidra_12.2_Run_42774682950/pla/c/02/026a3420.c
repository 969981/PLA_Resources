/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 026a3420; name: FUN_026a3420
 */


void FUN_026a3420(long param_1,byte param_2)

{
  undefined4 uVar1;
  
  uVar1 = 1;
  if ((param_2 & 1) != 0) {
    uVar1 = 2;
  }
  FUN_0261a2c0(param_1,&DAT_03a7dcd0,uVar1);
  FUN_0261940c(param_1,&DAT_03a7dca8,1);
  *(byte *)(param_1 + 0xc70) = param_2 & 1;
  return;
}


