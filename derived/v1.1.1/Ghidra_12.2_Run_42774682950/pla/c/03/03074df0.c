/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03074df0; name: FUN_03074df0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03074df0(undefined8 param_1,long *param_2,long *param_3,long param_4,
                 undefined1 (*param_5) [16],uint param_6,long param_7)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  undefined2 *puVar3;
  undefined2 uVar4;
  long lVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar10;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auStack_1880 [3024];
  undefined4 local_cb0 [2];
  undefined8 local_ca8;
  undefined8 local_ca0;
  undefined8 local_c98;
  undefined8 local_c90;
  long local_c68;
  undefined8 local_c60;
  undefined8 uStack_c58;
  undefined8 local_c50;
  undefined8 uStack_c48;
  undefined8 local_c40;
  undefined8 uStack_c38;
  undefined8 local_c30;
  undefined8 uStack_c28;
  undefined8 local_c20;
  undefined8 uStack_c18;
  undefined8 local_c10;
  undefined4 local_b08;
  undefined8 local_b00;
  undefined8 local_af0;
  undefined8 uStack_ae8;
  undefined8 local_ae0;
  undefined *local_ad0;
  long *local_ac8;
  undefined1 *local_ac0;
  undefined4 local_ab8;
  undefined1 auStack_ab0 [2632];
  undefined2 local_68;
  
  local_ac0 = auStack_ab0;
  local_ac8 = (long *)0x0;
  local_ab8 = 0x800;
  uStack_c58 = _UNK_03889a88;
  local_c60 = _DAT_03889a80;
  uStack_c48 = DAT_0388a148;
  local_c50 = DAT_0388a140;
  local_ae0 = 0;
  local_c10 = 0;
  local_ad0 = PTR_DAT_043724f8 + 0x10;
  uStack_c38 = _UNK_03888d18;
  local_c40 = _DAT_03888d10;
  auVar8 = NEON_fmov(0x3f800000,4);
  local_b00 = 0xd;
  local_b08 = 0;
  uStack_c28 = _UNK_0388a138;
  local_c30 = _DAT_0388a130;
  uStack_c18 = 0;
  local_c20 = 0;
  local_68 = 0xffff;
  uStack_ae8 = auVar8._8_8_;
  local_af0 = auVar8._0_8_;
  FUN_03075140(param_1,param_2,&local_c60,&local_c68);
  local_cb0[0] = 7;
  local_ca0 = 0;
  local_ca8 = 0;
  local_c90 = 0;
  local_c98 = 0;
  (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(local_c68 + 0x18) * 0x200 + 0xa8))
            (local_c68,local_cb0,auStack_1880,local_cb0);
  auVar8 = *param_5;
  fVar15 = auVar8._12_4_ - local_ca0._4_4_;
  if (*(int *)(param_7 + 0x18) < 0xd81) {
    puVar3 = (undefined2 *)(*(long *)(param_7 + 0x10) + (long)*(int *)(param_7 + 0x18) + 0x20);
  }
  else {
    puVar3 = (undefined2 *)FUN_032bf82c(param_7);
  }
  *(long *)(puVar3 + 0x10) = param_4;
  uVar4 = 0x48c0;
  if ((param_6 & 1) == 0) {
    uVar4 = 0x8c0;
  }
  *puVar3 = uVar4;
  *(undefined2 *)((long)puVar3 + 3) = 0x16;
  *(undefined1 *)(puVar3 + 3) = 4;
  *(undefined4 *)(puVar3 + 0x14) = *(undefined4 *)(param_2[1] + 0x4c);
  *(undefined4 *)(puVar3 + 0x16) = 0;
  *(undefined4 *)(puVar3 + 4) = *(undefined4 *)(*param_2 + 0x50);
  uVar1 = *(undefined4 *)(*param_3 + 0x50);
  *(undefined1 *)(puVar3 + 1) = 0;
  *(undefined1 *)((long)puVar3 + 7) = 0;
  *(undefined8 *)(puVar3 + 0x1c) = 0;
  *(undefined1 *)((long)puVar3 + 5) = 0;
  *(undefined4 *)(puVar3 + 6) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = 0xf530800080008000;
  lVar5 = *param_2;
  fVar12 = auVar8._0_4_;
  fVar13 = auVar8._4_4_;
  fVar14 = auVar8._8_4_;
  fVar7 = (float)local_c60 * fVar12 + (float)local_c50 * fVar13 + (float)local_c40 * fVar14;
  fVar10 = local_c60._4_4_ * fVar12 + (float)((ulong)local_c50 >> 0x20) * fVar13 +
           (float)((ulong)local_c40 >> 0x20) * fVar14;
  auVar9._0_8_ = CONCAT44(fVar10,fVar7);
  auVar9._8_4_ = (float)uStack_c58 * fVar12 + (float)uStack_c48 * fVar13 +
                 (float)uStack_c38 * fVar14;
  fVar7 = fVar7 * (((float)*(undefined8 *)(lVar5 + 0x30) + *(float *)(lVar5 + 0x40)) -
                  ((float)local_c30 + (float)local_c20));
  fVar10 = fVar10 * (((float)((ulong)*(undefined8 *)(lVar5 + 0x30) >> 0x20) +
                     *(float *)(lVar5 + 0x44)) -
                    ((float)((ulong)local_c30 >> 0x20) + local_c20._4_4_));
  fVar11 = auVar9._8_4_ *
           (((float)*(undefined8 *)(lVar5 + 0x38) + *(float *)(lVar5 + 0x48)) -
           ((float)uStack_c28 + (float)uStack_c18));
  fVar12 = (uStack_c58._4_4_ * fVar12 + (float)((ulong)uStack_c48 >> 0x20) * fVar13 +
           (float)((ulong)uStack_c38 >> 0x20) * fVar14) *
           (((float)((ulong)*(undefined8 *)(lVar5 + 0x38) >> 0x20) + *(float *)(lVar5 + 0x4c)) -
           ((float)((ulong)uStack_c28 >> 0x20) + uStack_c18._4_4_));
  auVar8._4_4_ = fVar10;
  auVar8._0_4_ = fVar7;
  auVar8._8_4_ = fVar11;
  auVar8._12_4_ = fVar12;
  auVar2._4_4_ = fVar10;
  auVar2._0_4_ = fVar7;
  auVar2._8_4_ = fVar11;
  auVar2._12_4_ = fVar12;
  auVar8 = NEON_ext(auVar8,auVar2,8,1);
  auVar9._12_4_ = fVar15 + fVar7 + fVar10 + auVar8._0_4_;
  *(long *)(puVar3 + 0xc) = auVar9._8_8_;
  *(undefined8 *)(puVar3 + 8) = auVar9._0_8_;
  *(int *)(param_7 + 0x18) = *(int *)(param_7 + 0x18) + 0x160;
  *(int *)(param_7 + 0x1c) = *(int *)(param_7 + 0x1c) + 1;
  *(uint *)(param_7 + 0x28) = (*(byte *)(puVar3 + 3) & 7) * 4 + *(int *)(param_7 + 0x28) + 4;
  uVar6 = *(undefined8 *)(param_7 + 0x10);
  *(undefined8 *)(param_4 + 0x20) = uVar6;
  *(short *)(param_4 + 0x28) = (short)puVar3 - (short)uVar6;
  *(undefined8 *)(param_4 + 0x40) = 0;
  *(undefined8 *)(param_4 + 0x48) = 0;
  *(undefined8 *)(param_4 + 0x50) = 0;
  *(undefined8 *)(param_4 + 0x58) = 0;
  *(undefined8 *)(param_4 + 0x60) = 0;
  *(undefined8 *)(param_4 + 0x68) = 0;
  local_ad0 = PTR_DAT_043724f0 + 0x10;
  if (local_ac8 != (long *)0x0) {
    (**(code **)(*local_ac8 + 8))();
  }
  return;
}


