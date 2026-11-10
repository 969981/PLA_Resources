/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00153fb0; name: FUN_00153fb0
 */


void FUN_00153fb0(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  
  iVar1 = FUN_0014fd20();
  if (iVar1 != 0) {
    return;
  }
  if (param_3 == 0) {
    FUN_00154110(param_1,"stack overflow");
    return;
  }
  FUN_00154110(param_1,"stack overflow (%s)",param_3);
  return;
}


