/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02dec630; name: FUN_02dec630
 */


void FUN_02dec630(long *param_1,int param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  float local_50 [4];
  int local_34;
  
  iVar1 = (**(code **)(*param_1 + 0x58))(param_1,&local_34);
  *param_3 = 0;
  if (iVar1 == 2) {
    param_3[1] = 2;
  }
  else {
    (**(code **)(*param_1 + 0x28))(param_1,local_50);
    iVar3 = 0x11;
    *param_3 = (int)((float)(uint)(local_34 + param_2) / local_50[0]);
    if (iVar1 != 0x11) {
      uVar2 = (**(code **)(*param_1 + 0x60))(param_1);
      iVar3 = 0x11;
      if ((uint)(local_34 + param_2) < uVar2) {
        iVar3 = 1;
      }
    }
    param_3[1] = iVar3;
  }
  return;
}


