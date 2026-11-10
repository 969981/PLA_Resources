/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e571e8; name: FUN_02e571e8
 */


void FUN_02e571e8(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  undefined1 auStack_24 [4];
  
  lVar1 = FUN_02e57b24(param_1,param_2,auStack_24);
  if (lVar1 == 0) {
    return;
  }
  FUN_02e56a6c(lVar1,param_3,param_4,param_5);
  return;
}


