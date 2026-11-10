/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0123a480; name: FUN_0123a480
 */


int FUN_0123a480(uint *param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5)

{
  int iVar1;
  
  iVar1 = FUN_0123a3d0();
  if (*param_5 < *param_4) {
    FUN_0123a160(param_4,param_5);
    if (*param_4 < *param_3) {
      FUN_0123a160(param_3,param_4);
      if (*param_3 < *param_2) {
        FUN_0123a160(param_2,param_3);
        if (*param_2 < *param_1) {
          FUN_0123a160(param_1,param_2);
          iVar1 = iVar1 + 4;
        }
        else {
          iVar1 = iVar1 + 3;
        }
      }
      else {
        iVar1 = iVar1 + 2;
      }
    }
    else {
      iVar1 = iVar1 + 1;
    }
  }
  return iVar1;
}


