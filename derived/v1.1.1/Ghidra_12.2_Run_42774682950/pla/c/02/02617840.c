/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02617840; name: FUN_02617840
 */


bool FUN_02617840(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_026178a0(*param_2,param_2[1],*(undefined8 *)*param_1);
  lVar2 = param_2[1];
  if (lVar2 != lVar1) {
    FUN_02611954(param_2,lVar1);
  }
  return lVar2 != lVar1;
}


