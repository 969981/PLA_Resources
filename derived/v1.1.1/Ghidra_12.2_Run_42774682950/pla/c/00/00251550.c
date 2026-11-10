/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00251550; name: FUN_00251550
 */


void FUN_00251550(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  ulong uVar1;
  
  uVar1 = FUN_0022d744(param_1,param_3,param_4 & 0xff);
  if ((uVar1 & 1) != 0) {
    FUN_002300d0(param_3,param_2,param_4);
  }
  FUN_0022d72c(param_1,param_2);
  return;
}


