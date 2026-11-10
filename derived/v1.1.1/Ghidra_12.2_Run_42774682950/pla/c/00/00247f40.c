/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00247f40; name: FUN_00247f40
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00247f40(long *param_1,long param_2,int param_3,float *param_4,float *param_5,
                 float *param_6,float *param_7,float *param_8)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_100;
  float fStack_fc;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong local_e0;
  ulong uStack_d8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  float local_a8;
  float fStack_a4;
  float local_a0;
  float local_9c;
  float fStack_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_78;
  float fStack_74;
  
  lVar6 = *(long *)(*(long *)(param_2 + 200) + 0x38);
  (**(code **)(*(long *)*param_1 + 0x60))((long *)*param_1,&local_100);
  (**(code **)(*(long *)*param_1 + 0x68))((long *)*param_1,&local_c8);
  local_78 = (float)(**(code **)(*(long *)*param_1 + 0x70))();
  if ((*(byte *)(*param_1 + 0x5b) & 3) == 2) {
    local_78 = local_78 + (float)local_c8;
  }
  else {
    if ((*(byte *)(*param_1 + 0x5b) & 3) == 0) {
      local_78 = (float)local_c8;
      goto LAB_00248000;
    }
    local_78 = (float)local_c8 - local_78;
  }
  local_c8 = local_c8 & 0xffffffff00000000;
LAB_00248000:
  fVar7 = *param_6;
  fVar8 = 0.0;
  local_78 = local_78 - (fVar7 - local_100) * 0.5;
  local_c8 = CONCAT44(local_c8._4_4_,local_78);
  fVar9 = param_6[1];
  fStack_74 = local_c8._4_4_ + (fVar9 - fStack_fc) * 0.5;
  fVar12 = 0.0;
  if (0.0 < param_4[1]) {
    fVar12 = *param_4 * (*(float *)PTR_FloatPi_04372cf0 / *(float *)PTR_FloatDegree180_04372ce0);
    fVar8 = cosf(fVar12);
    fVar8 = fVar8 * param_4[1];
    fVar12 = sinf(fVar12);
    fVar12 = fVar12 * param_4[1];
    local_78 = local_78 - fVar8;
    fStack_74 = fStack_74 - fVar12;
    fVar7 = *param_6;
    fVar9 = param_6[1];
  }
  puVar1 = (ulong *)(lVar6 + param_3);
  local_a0 = (fVar8 / fVar7) * *param_7;
  local_c8 = DAT_039cfc04;
  uStack_c0 = DAT_039cfc0c;
  local_94 = (fVar12 / fVar9) * param_7[1];
  local_b8 = DAT_039cfc14;
  uStack_b0 = DAT_039cfc1c;
  local_a8 = (0.0 - *param_8) - local_a0;
  local_a0 = (*param_8 + 1.0) - local_a0;
  fStack_a4 = local_94 + (0.0 - param_8[1]);
  local_94 = local_94 + param_8[1] + 1.0;
  *(undefined2 *)(param_2 + 0x188) = 0x100;
  local_9c = fStack_a4;
  fStack_98 = local_a8;
  local_90 = local_a0;
  local_8c = local_94;
  if (((param_1[0xb] == 0) || ((*(byte *)(param_1 + 0x45) >> 2 & 1) != 0)) ||
     ((*(byte *)(param_1[0xb] + 8) >> 5 & 1) == 0)) {
    FUN_0022d1f0(param_2,puVar1,&local_78,param_6,2,&local_c8);
  }
  else {
    FUN_0022d1f0(param_2,puVar1,param_5,param_6,2,&local_c8);
    fVar8 = *param_5;
    fVar7 = param_5[1];
    fVar9 = *param_6;
    fVar10 = param_6[1];
    fVar11 = 1.0 / ((fVar8 + fVar9) - fVar8);
    fVar12 = 1.0 / ((fVar7 - fVar10) - fVar7);
    FUN_00251180(&local_100,param_2);
    puVar1[1] = (ulong)(uint)-((fVar8 + fVar8 + fVar9) * fVar11) << 0x20;
    *puVar1 = (ulong)(uint)(fVar11 + fVar11);
    uVar3 = _UNK_038899f8;
    uVar2 = _DAT_038899f0;
    puVar1[3] = (ulong)(uint)-((fVar7 + (fVar7 - fVar10)) * fVar12) << 0x20;
    puVar1[2] = (ulong)(uint)(fVar12 + fVar12) << 0x20;
    uVar5 = _UNK_0388a138;
    uVar4 = _DAT_0388a130;
    puVar1[5] = uVar3;
    puVar1[4] = uVar2;
    puVar1[7] = uVar5;
    puVar1[6] = uVar4;
    puVar1[0xd] = uStack_d8;
    puVar1[0xc] = local_e0;
    puVar1[9] = uStack_f8;
    puVar1[8] = CONCAT44(fStack_fc,local_100);
    puVar1[0xb] = uStack_e8;
    puVar1[10] = uStack_f0;
  }
  return;
}


