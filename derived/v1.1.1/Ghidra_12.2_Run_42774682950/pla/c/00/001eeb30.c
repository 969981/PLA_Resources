/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001eeb30; name: FUN_001eeb30
 */


int FUN_001eeb30(undefined8 param_1,undefined8 *param_2,int *param_3,int param_4)

{
  int iVar1;
  
  iVar1 = *param_3;
  if (iVar1 == 4) {
    FUN_002044d4(*param_2);
    *param_2 = 0;
    iVar1 = *param_3;
  }
  if (iVar1 != 0) {
    iVar1 = FUN_00214ef0(param_2);
    if ((param_4 == 0) && (iVar1 != 0)) {
      FUN_001ee890(param_1,param_2);
      param_4 = 0x3d;
    }
    *param_3 = 0;
  }
  return param_4;
}


