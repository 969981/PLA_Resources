/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0046c1c0; name: FUN_0046c1c0
 */


void FUN_0046c1c0(undefined8 param_1,int param_2,uint param_3)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  int local_58 [10];
  
  if (param_2 == 0) {
    FUN_0046c2b0(0x38e,param_1,param_3 | 8);
    return;
  }
  uVar3 = param_2 - 1;
  if (uVar3 < 8) {
LAB_0046c1ec:
    lVar2 = (long)(int)uVar3 * 0x28 + 0x416b7e0;
LAB_0046c200:
    (**(code **)(lVar2 + 8))(lVar2,param_1,param_3);
  }
  else {
    if (DAT_0439e950 != 0) {
      local_58[0] = param_2;
      iVar1 = FUN_00407710(DAT_0439e950,local_58);
      if (-1 < iVar1) {
        uVar3 = iVar1 + 8;
        if (uVar3 != 0xffffffff) {
          if ((int)uVar3 < 0) {
            lVar2 = 0;
          }
          else {
            if ((int)uVar3 < 8) goto LAB_0046c1ec;
            lVar2 = FUN_00407970(DAT_0439e950,iVar1);
          }
          goto LAB_0046c200;
        }
      }
    }
    (*(code *)PTR_FUN_0416b7d8)(param_2,param_1,param_3);
  }
  return;
}


