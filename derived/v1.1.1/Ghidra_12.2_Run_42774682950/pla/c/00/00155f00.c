/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00155f00; name: FUN_00155f00
 */


void FUN_00155f00(double param_1,undefined8 param_2,long param_3)

{
  double *pdVar1;
  double *pdVar2;
  
  pdVar1 = (double *)FUN_0014fe90();
  if (param_3 != 0x88) {
    FUN_00154110(param_2,"core and library have incompatible numeric types");
  }
  pdVar2 = (double *)FUN_0014fe90(0);
  if (pdVar1 != pdVar2) {
    FUN_00154110(param_2,"multiple Lua VMs detected");
    return;
  }
  if (*pdVar1 == param_1) {
    return;
  }
  FUN_00154110(param_1,param_2,"version mismatch: app. needs %f, Lua core provides %f");
  return;
}


