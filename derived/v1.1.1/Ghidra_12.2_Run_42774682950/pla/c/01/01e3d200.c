/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e3d200; name: FUN_01e3d200
 */


void FUN_01e3d200(long *param_1)

{
  long lVar1;
  
  FUN_01e3d240(param_1,param_1[6]);
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 == 0) {
    return;
  }
  FUN_01e3d384(param_1 + 1);
  return;
}


