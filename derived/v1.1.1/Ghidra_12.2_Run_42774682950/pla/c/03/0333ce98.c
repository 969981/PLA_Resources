/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0333ce98; name: FUN_0333ce98
 */


void FUN_0333ce98(long *param_1,long *param_2,int *param_3)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined **local_70;
  long *plStack_68;
  undefined4 *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_40 [8];
  
  if (0 < *param_3) {
    local_40[0] = 0;
    local_70 = &PTR_LAB_04350f38;
    uVar1 = *(undefined8 *)param_3;
    uStack_50 = *(undefined8 *)(param_3 + 2);
    local_58._4_4_ = (int)((ulong)uVar1 >> 0x20);
    local_60 = local_40;
    local_58._0_4_ = (int)uVar1;
    iVar3 = (int)local_58;
    iVar4 = local_58._4_4_;
    if (local_58._4_4_ < 1) {
      iVar4 = (int)local_58;
      if (1 < *(int *)(DAT_0444b130 + 0x18)) {
        iVar2 = *(int *)(DAT_0444b130 + 0x18) << 1;
        iVar4 = 0;
        if (iVar2 != 0) {
          iVar4 = (int)local_58 / iVar2;
        }
        if (iVar4 < 2) {
          iVar4 = 1;
        }
      }
      local_58 = CONCAT44(iVar4,(int)local_58);
      uVar1 = local_58;
    }
    local_58 = uVar1;
    iVar2 = 0;
    if (iVar4 != 0) {
      iVar2 = iVar3 / iVar4;
    }
    if (iVar3 != iVar2 * iVar4) {
      iVar2 = iVar2 + 1;
    }
    plStack_68 = param_2;
    (**(code **)(*param_2 + 0x18))(param_2,&local_58,iVar2);
    if (iVar2 < 2) {
      local_78 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_90 = param_1;
      FUN_0333cdd8(&local_70,&local_90);
    }
    else {
      (**(code **)(*param_1 + 0x18))(param_1,&local_90,1,8);
      (**(code **)(*param_1 + 0x28))(param_1,local_90,&local_70,0x40);
      (**(code **)(*param_1 + 0x38))(param_1,local_90,iVar2,1);
      (**(code **)(*param_1 + 0x50))(param_1,&local_90,1,0,8);
      (**(code **)(*param_1 + 0x60))(param_1,local_90);
      (**(code **)(*param_1 + 0x20))(param_1,&local_90,1,8);
    }
  }
  return;
}


