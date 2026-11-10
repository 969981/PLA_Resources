/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030f7044; name: FUN_030f7044
 */


undefined8
FUN_030f7044(long param_1,long param_2,uint *param_3,uint *param_4,long *param_5,undefined8 *param_6
            ,undefined1 *param_7,undefined8 *param_8)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  int *piVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined2 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined2 local_70;
  undefined1 local_6e;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined8 local_38;
  
  if ((((char)param_5[6] == '\0') && (lVar3 = *(long *)(param_4 + 6), lVar3 != 0)) &&
     (*(int *)(lVar3 + 0x24) != 0)) {
    if (*param_5 == 0) {
      iVar4 = 0xffffff;
    }
    else {
      iVar4 = *(int *)(*param_5 + 0x50);
    }
    lVar1 = param_5[3];
    piVar5 = (int *)(param_1 + 0x24);
    if ((*piVar5 != iVar4) || (*(int *)(param_1 + 0x28) != (int)lVar1)) {
      piVar5 = (int *)(param_1 + 0x34);
      *piVar5 = iVar4;
      *(undefined1 *)(param_1 + 0x40) = 0;
      *(int *)(param_1 + 0x38) = (int)lVar1;
      lVar3 = *(long *)(param_4 + 6);
    }
    local_38 = CONCAT44(param_4[5],param_4[5]);
    local_80 = 0xffff;
    local_70 = 1;
    local_6e = 0xfb;
    local_7c = 0;
    local_78 = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_50 = 0x7f7fffee;
    uVar8 = **(undefined8 **)(param_3 + 2);
    fVar6 = (float)uVar8;
    fVar7 = (float)((ulong)uVar8 >> 0x20);
    fVar9 = *(float *)(*(undefined8 **)(param_3 + 2) + 1);
    local_60 = CONCAT44((float)((ulong)param_6[6] >> 0x20) +
                        (float)((ulong)param_6[4] >> 0x20) * fVar9 +
                        (float)((ulong)*param_6 >> 0x20) * fVar6 +
                        (float)((ulong)param_6[2] >> 0x20) * fVar7,
                        (float)param_6[6] +
                        (float)param_6[4] * fVar9 +
                        (float)*param_6 * fVar6 + (float)param_6[2] * fVar7);
    uStack_58 = CONCAT44((float)((ulong)param_6[7] >> 0x20) +
                         (float)((ulong)param_6[5] >> 0x20) * fVar9 +
                         (float)((ulong)param_6[1] >> 0x20) * fVar6 +
                         (float)((ulong)param_6[3] >> 0x20) * fVar7,
                         (float)param_6[7] +
                         (float)param_6[5] * fVar9 +
                         (float)param_6[1] * fVar6 + (float)param_6[3] * fVar7);
    uVar2 = FUN_00183e70(&local_90,lVar3,&local_38,piVar5 + 2,&local_d0);
    if ((uVar2 & 1) != 0) {
      fVar6 = (float)param_3[5];
      fVar7 = (float)local_b0 - fVar6;
      if (fVar7 < (float)param_8[4]) {
        param_8[1] = uStack_c8;
        *param_8 = local_d0;
        param_8[3] = uStack_b8;
        param_8[2] = uStack_c0;
        param_8[4] = CONCAT44((float)((ulong)local_b0 >> 0x20) - fVar6,fVar7);
        *param_7 = *(byte *)(piVar5 + 3) - 1 < 2;
        if (*(float *)(param_1 + 0x1c) <= fVar7) {
          return 1;
        }
        *(int *)(param_1 + 0x44) = *piVar5;
        *(int *)(param_1 + 0x48) = piVar5[1];
        *(undefined8 *)(param_1 + 0x4c) = *(undefined8 *)(piVar5 + 2);
        *(float *)(param_1 + 0x1c) = fVar7;
        return 1;
      }
    }
  }
  else {
    uVar2 = (**(code **)(param_2 + (ulong)*param_3 * 0x38 + (ulong)*param_4 * 8 + 0x3cb8))
                      (param_3,param_4,param_6,0,param_8);
    if ((uVar2 & 1) != 0) {
      uVar8 = param_8[4];
      *param_7 = *(undefined1 *)(param_1 + 0x20);
      if (*(float *)(param_1 + 0x1c) <= (float)uVar8) {
        return 1;
      }
      *(undefined8 *)(param_1 + 0x44) = 0xffffffff00ffffff;
      *(undefined1 *)(param_1 + 0x50) = 0;
      *(float *)(param_1 + 0x1c) = (float)uVar8;
      return 1;
    }
  }
  return 0;
}


