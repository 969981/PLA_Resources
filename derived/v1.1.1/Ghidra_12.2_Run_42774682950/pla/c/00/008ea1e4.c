/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008ea1e4; name: FUN_008ea1e4
 */


void FUN_008ea1e4(long *param_1,long *param_2)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  
  if (*(uint *)(param_1 + 1) < 0xfffffffe) {
    FUN_00155150(*param_1,0xfff0b9d8);
  }
  if ((int)param_2[1] == -2) {
    *param_1 = *param_2;
    uVar1 = 0xfffffffe;
  }
  else {
    if ((int)param_2[1] != -1) {
      lVar2 = *param_1;
      lVar3 = *param_2;
      if (((lVar2 != lVar3) && (lVar2 != 0)) && (lVar3 != 0)) {
        lVar2 = FUN_001513b0(lVar2,0xfff0b9d8);
        lVar3 = FUN_001513b0(lVar3,0xfff0b9d8);
        if (lVar2 == lVar3) {
          lVar2 = *param_1;
          if (*param_2 == 0) {
            FUN_00151490(lVar2);
          }
          else {
            FUN_00151e00(*param_2,0xfff0b9d8,(long)(int)param_2[1]);
            if (*param_2 != lVar2) {
              FUN_0014fe00(*param_2,lVar2,1);
            }
          }
          uVar1 = FUN_00155070(*param_1,0xfff0b9d8);
          *(undefined4 *)(param_1 + 1) = uVar1;
          return;
        }
        lVar3 = *param_2;
      }
      *param_1 = lVar3;
      *(int *)(param_1 + 1) = (int)param_2[1];
      *(undefined4 *)(param_2 + 1) = 0xfffffffe;
      *param_2 = 0;
      return;
    }
    *param_1 = *param_2;
    uVar1 = 0xffffffff;
  }
  *(undefined4 *)(param_1 + 1) = uVar1;
  return;
}


