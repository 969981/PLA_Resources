/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00155150; name: FUN_00155150
 */


void FUN_00155150(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined4 uVar1;
  
  if (param_3 < 0) {
    return;
  }
  uVar1 = FUN_0014feb0();
  FUN_00151e00(param_1,uVar1,0);
  FUN_001528b0(param_1,uVar1,(long)param_3);
  FUN_001514d0(param_1,(long)param_3);
  FUN_001528b0(param_1,uVar1,0);
  return;
}


