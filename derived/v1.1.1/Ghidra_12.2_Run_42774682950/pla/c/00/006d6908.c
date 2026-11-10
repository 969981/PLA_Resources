/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006d6908; name: FUN_006d6908
 */


void FUN_006d6908(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  if ((param_3 == 0) && (param_4 != 0)) {
    FUN_006d6990(param_4,param_2);
  }
  else if (param_4 != param_3) {
    uVar1 = FUN_002e17cc(param_4);
    FUN_002e2650(param_2,uVar1);
    if (param_3 == 0) {
      FUN_002ded3c(param_2);
      FUN_002e2ea0(PTR_LAB_04373088,param_2);
    }
  }
  FUN_006d69a4(param_1,uVar1);
  return;
}


