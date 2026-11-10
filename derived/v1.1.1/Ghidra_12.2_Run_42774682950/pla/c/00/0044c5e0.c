/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0044c5e0; name: FUN_0044c5e0
 */


undefined8 FUN_0044c5e0(undefined8 *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = FUN_0044c210(param_1,param_1[2]);
  if (lVar1 == 0) {
    FUN_00402170(6,"section:",*param_1,",name:",param_1[1],",value:",param_1[2]);
    return 0;
  }
  *param_2 = lVar1;
  return 1;
}


