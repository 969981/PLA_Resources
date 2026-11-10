/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eb9f60; name: FUN_02eb9f60
 */


undefined8 FUN_02eb9f60(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    FUN_02ec71c4(param_1);
    lVar1 = *param_1;
    if (lVar1 == 0) {
      return 2;
    }
  }
  uVar2 = FUN_02ec6b0c(lVar1,param_2,param_3,param_4);
  return uVar2;
}


