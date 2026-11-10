/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0043c270; name: FUN_0043c270
 */


undefined8 FUN_0043c270(long *param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((param_2 != 0) && (param_3 != 0)) {
    FUN_0040c140(*param_1);
    FUN_0040c140(param_1[1]);
    uVar1 = 1;
    *param_1 = param_2;
    param_1[1] = param_3;
  }
  return uVar1;
}


