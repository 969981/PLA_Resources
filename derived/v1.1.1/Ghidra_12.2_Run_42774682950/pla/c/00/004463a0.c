/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004463a0; name: FUN_004463a0
 */


undefined8 FUN_004463a0(int *param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  
  *param_3 = 0;
  if (*param_1 == 0) {
    return 1;
  }
  iVar1 = FUN_00446200(param_1,param_2,param_1 + 2);
  if (iVar1 < 0) {
    return 0xffffffff;
  }
  *param_1 = 0;
  *param_3 = iVar1;
  return 1;
}


