/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00154450; name: FUN_00154450
 */


undefined8 FUN_00154450(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00151a70(param_1,0xfff0b9d8,param_2);
  if (iVar1 == 0) {
    FUN_0014ff10(param_1,0xfffffffe);
    FUN_00151fe0(param_1,0,2);
    FUN_00151570(param_1,param_2);
    FUN_00152550(param_1,0xfffffffe,"__name");
    FUN_00150260(param_1,0xffffffff);
    FUN_00152550(param_1,0xfff0b9d8,param_2);
    return 1;
  }
  return 0;
}


