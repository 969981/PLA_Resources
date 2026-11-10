/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0064df44; name: FUN_0064df44
 */


void FUN_0064df44(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  if ((param_3 == 0) && (param_4 != 0)) {
    FUN_0064dfcc(param_4,param_2);
  }
  else if (param_4 != param_3) {
    uVar1 = FUN_0069cba0(param_4);
    FUN_0064dfe0(param_2,uVar1);
    if (param_3 == 0) {
      FUN_00690a48(param_2);
      FUN_002e2ea0(PTR_LAB_04373088,param_2);
    }
  }
  FUN_0064dff0(param_1,uVar1);
  return;
}


