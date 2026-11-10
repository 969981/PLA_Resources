/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03195c88; name: FUN_03195c88
 */


uint FUN_03195c88(long param_1,float *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 *param_5,float *param_6,long *param_7,undefined4 param_8,
                 undefined8 param_9)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  float fVar6;
  undefined8 uVar7;
  float fVar8;
  undefined8 local_c0;
  undefined8 local_a0;
  float local_90;
  undefined4 uStack_8c;
  float local_88 [2];
  int local_80 [2];
  float local_78 [2];
  float local_70 [2];
  float local_68 [2];
  
  lVar4 = *(long *)(param_1 + 0x20);
  local_90 = *param_2;
  if ((*(int *)(lVar4 + 0x108) == 0) ||
     ((*(byte *)(*(long *)(lVar4 + 0x100) + (long)(int)local_90) & 1) == 0)) {
    if (param_7 != (long *)0x0) {
      local_68[0] = local_90;
      iVar2 = (**(code **)(*param_7 + 0x28))(param_7,param_1,local_68,param_8);
      uVar3 = 0;
      if (iVar2 == 0) goto LAB_03195d28;
      local_90 = *param_2;
    }
    *param_6 = local_90;
    local_70[0] = *param_2;
    uVar3 = FUN_031958c4(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x68),local_70,param_3,param_4,
                         param_5);
  }
  else {
    cVar1 = FUN_0318fe6c(lVar4,&local_90,local_78,local_80);
    if (cVar1 == '\0') {
      uVar3 = 0;
      fVar8 = -NAN;
      uVar7 = 0x3f8000003f800000;
    }
    else if ((int)local_78[0] < local_80[0]) {
      local_c0 = NEON_fmov(0x3f800000,4);
      uVar3 = 0;
      uVar7 = 0x3f8000003f800000;
      if (param_7 == (long *)0x0) {
        fVar8 = -NAN;
        fVar6 = local_78[0];
        local_a0 = local_c0;
        do {
          uVar5 = FUN_03195a20(*(undefined8 *)(param_1 + 0x20),fVar6,param_3,param_4,&local_90);
          if ((uVar5 & 1) != 0) {
            if (local_90 < (float)local_a0) {
              uVar3 = 1;
              uVar7 = CONCAT44(uStack_8c,local_90);
              fVar8 = fVar6;
              local_a0 = CONCAT44(uStack_8c,local_90);
            }
          }
          fVar6 = (float)((int)fVar6 + 1);
        } while ((int)fVar6 < local_80[0]);
      }
      else {
        fVar8 = -NAN;
        fVar6 = local_78[0];
        do {
          local_88[0] = fVar6;
          iVar2 = (**(code **)(*param_7 + 0x28))(param_7,param_1,local_88,param_8,param_9);
          if (iVar2 != 0) {
            uVar5 = FUN_03195a20(*(undefined8 *)(param_1 + 0x20),fVar6,param_3,param_4,&local_90);
            if ((uVar5 & 1) != 0) {
              if (local_90 < (float)local_c0) {
                uVar3 = 1;
                uVar7 = CONCAT44(uStack_8c,local_90);
                fVar8 = fVar6;
                local_c0 = CONCAT44(uStack_8c,local_90);
              }
            }
          }
          fVar6 = (float)((int)fVar6 + 1);
        } while ((int)fVar6 < local_80[0]);
      }
    }
    else {
      uVar3 = 0;
      fVar8 = -NAN;
      uVar7 = 0x3f8000003f800000;
    }
    *param_5 = uVar7;
    *param_6 = fVar8;
  }
LAB_03195d28:
  return uVar3 & 1;
}


