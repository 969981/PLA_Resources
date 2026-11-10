/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03194148; name: FUN_03194148
 */


void FUN_03194148(float *param_1,long param_2,undefined8 *param_3,float *param_4,undefined8 *param_5
                 ,long *param_6,undefined4 param_7,undefined8 param_8)

{
  float fVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 local_a0;
  undefined8 uStack_98;
  float local_88 [2];
  float local_80;
  float fStack_7c;
  undefined8 uStack_78;
  float local_68 [2];
  int local_60 [2];
  float local_58 [2];
  float local_50 [2];
  float local_48 [2];
  
  lVar4 = *(long *)(param_2 + 0x20);
  local_80 = *param_4;
  if ((*(int *)(lVar4 + 0x108) != 0) &&
     ((*(byte *)(*(long *)(lVar4 + 0x100) + (long)(int)local_80) & 1) != 0)) {
    *param_1 = -NAN;
    uStack_98 = param_5[1];
    local_a0 = *param_5;
    cVar2 = FUN_0318fe6c(lVar4,&local_80,local_58,local_60);
    if ((cVar2 != '\0') && ((int)local_58[0] < local_60[0])) {
      if (param_6 == (long *)0x0) {
        fVar1 = 3.40282e+38;
        fVar5 = local_58[0];
        do {
          local_88[0] = fVar5;
          FUN_03193d34(*(undefined8 *)(param_2 + 0x20),param_3,local_88,&local_80);
          fVar6 = local_80 - (float)*param_3;
          fVar7 = fStack_7c - (float)((ulong)*param_3 >> 0x20);
          fVar8 = (float)uStack_78 - (float)param_3[1];
          fVar6 = fVar6 * fVar6 + fVar7 * fVar7 + fVar8 * fVar8;
          if (fVar6 < fVar1) {
            *param_1 = fVar5;
            uStack_98 = uStack_78;
            local_a0 = CONCAT44(fStack_7c,local_80);
            fVar1 = fVar6;
          }
          fVar5 = (float)((int)fVar5 + 1);
        } while ((int)fVar5 < local_60[0]);
      }
      else {
        fVar1 = 3.40282e+38;
        fVar5 = local_58[0];
        do {
          local_68[0] = fVar5;
          iVar3 = (**(code **)(*param_6 + 0x28))(param_6,param_2,local_68,param_7,param_8);
          if (iVar3 != 0) {
            local_88[0] = fVar5;
            FUN_03193d34(*(undefined8 *)(param_2 + 0x20),param_3,local_88,&local_80);
            fVar6 = local_80 - (float)*param_3;
            fVar7 = fStack_7c - (float)((ulong)*param_3 >> 0x20);
            fVar8 = (float)uStack_78 - (float)param_3[1];
            fVar6 = fVar6 * fVar6 + fVar7 * fVar7 + fVar8 * fVar8;
            if (fVar6 < fVar1) {
              *param_1 = fVar5;
              uStack_98 = uStack_78;
              local_a0 = CONCAT44(fStack_7c,local_80);
              fVar1 = fVar6;
            }
          }
          fVar5 = (float)((int)fVar5 + 1);
        } while ((int)fVar5 < local_60[0]);
      }
    }
    param_5[1] = uStack_98;
    *param_5 = local_a0;
    return;
  }
  local_50[0] = local_80;
  if (param_6 != (long *)0x0) {
    local_48[0] = local_80;
    iVar3 = (**(code **)(*param_6 + 0x28))(param_6,param_2,local_48,param_7,param_8);
    if (iVar3 == 0) {
      fVar5 = -NAN;
      goto LAB_031941a4;
    }
    lVar4 = *(long *)(param_2 + 0x20);
    local_50[0] = *param_4;
  }
  FUN_03193a34(*(undefined8 *)(lVar4 + 0x68),param_3,local_50,param_5);
  fVar5 = *param_4;
LAB_031941a4:
  *param_1 = fVar5;
  return;
}


