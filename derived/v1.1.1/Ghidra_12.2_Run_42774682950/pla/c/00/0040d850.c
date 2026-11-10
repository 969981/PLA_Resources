/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0040d850; name: FUN_0040d850
 */


undefined4 FUN_0040d850(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  
  FUN_0040e090(param_4);
  lVar2 = FUN_0040e240(param_4);
  if ((lVar2 == 0) || (lVar3 = FUN_0040c5d0(lVar2,param_2), lVar3 == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_0040d4e0(param_1,lVar2,param_3);
  }
  FUN_0040e1b0(param_4);
  return uVar1;
}


