/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031947e4; name: FUN_031947e4
 */


void FUN_031947e4(undefined4 *param_1,long param_2,undefined8 param_3,int *param_4,
                 undefined8 param_5,undefined8 *param_6,long *param_7,undefined4 param_8,
                 undefined8 param_9)

{
  float fVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  float fVar6;
  undefined8 local_d0;
  undefined8 uStack_c8;
  int local_90 [2];
  undefined4 local_88 [2];
  int local_80;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  int local_68 [2];
  int local_60 [2];
  int local_58 [2];
  int local_50 [2];
  int local_48 [2];
  
  lVar5 = *(long *)(param_2 + 0x20);
  local_80 = *param_4;
  if ((*(int *)(lVar5 + 0x108) == 0) ||
     ((*(byte *)(*(long *)(lVar5 + 0x100) + (long)local_80) & 1) == 0)) {
    if (param_7 != (long *)0x0) {
      local_48[0] = local_80;
      iVar3 = (**(code **)(*param_7 + 0x28))(param_7,param_2,local_48,param_8,param_9);
      if (iVar3 == 0) {
        *param_1 = 0xffffffff;
        return;
      }
      lVar5 = *(long *)(param_2 + 0x20);
      local_80 = *param_4;
    }
    local_50[0] = local_80;
    FUN_03194364(param_1,*(undefined8 *)(lVar5 + 0x68),param_3,local_50,param_5,param_6);
  }
  else {
    *param_1 = 0xffffffff;
    uStack_c8 = param_6[1];
    local_d0 = *param_6;
    cVar2 = FUN_0318fe6c(lVar5,&local_80,local_58,local_60);
    fVar1 = 3.40282e+38;
    if ((cVar2 != '\0') && (local_58[0] < local_60[0])) {
      if (param_7 == (long *)0x0) {
        fVar1 = 3.40282e+38;
        iVar3 = local_58[0];
        do {
          local_90[0] = iVar3;
          FUN_03194510(local_88,*(undefined8 *)(param_2 + 0x20),param_3,local_90,param_5,&local_80);
          fVar6 = (float)((ulong)uStack_78 >> 0x20);
          if (fVar6 < fVar1) {
            *param_1 = local_88[0];
            uStack_c8 = uStack_78;
            local_d0 = CONCAT44(uStack_7c,local_80);
            fVar1 = fVar6;
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < local_60[0]);
      }
      else {
        fVar1 = 3.40282e+38;
        iVar3 = local_58[0];
        do {
          local_68[0] = iVar3;
          iVar4 = (**(code **)(*param_7 + 0x28))(param_7,param_2,local_68,param_8,param_9);
          if (iVar4 != 0) {
            local_90[0] = iVar3;
            FUN_03194510(local_88,*(undefined8 *)(param_2 + 0x20),param_3,local_90,param_5,&local_80
                        );
            fVar6 = (float)((ulong)uStack_78 >> 0x20);
            if (fVar6 < fVar1) {
              *param_1 = local_88[0];
              uStack_c8 = uStack_78;
              local_d0 = CONCAT44(uStack_7c,local_80);
              fVar1 = fVar6;
            }
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < local_60[0]);
      }
    }
    param_6[1] = CONCAT44(fVar1,(undefined4)uStack_c8);
    *param_6 = local_d0;
  }
  return;
}


