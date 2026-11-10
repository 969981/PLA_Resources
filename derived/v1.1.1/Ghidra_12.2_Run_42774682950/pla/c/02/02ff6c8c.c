/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ff6c8c; name: FUN_02ff6c8c
 */


void FUN_02ff6c8c(long param_1,undefined1 (*param_2) [12],float *param_3,int *param_4)

{
  long lVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  int iVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  long *plVar23;
  long *plVar24;
  long *plVar25;
  long *plVar26;
  float fVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float local_88 [2];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70 [16];
  
  auVar29._8_4_ = 0x7f7fffee;
  auVar29._0_8_ = 0x7f7fffee7f7fffee;
  auVar29._12_4_ = 0x7f7fffee;
  *(long *)(*param_2 + 8) = auVar29._8_8_;
  *(undefined8 *)*param_2 = 0x7f7fffee7f7fffee;
  *(undefined8 *)param_2[2] = 0xff7fffeeff7fffee;
  *(undefined8 *)(param_2[1] + 4) = 0xff7fffeeff7fffee;
  *param_4 = 0;
  plVar19 = (long *)(param_1 + 0x48);
  if ((*plVar19 != 0) && (lVar1 = *plVar19 + (long)plVar19, lVar1 != 0)) {
    (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(lVar1 + 0x18) * 0x200 + 0x18))
              (lVar1,&DAT_03aae430,&local_80);
    auVar29 = *(undefined1 (*) [16])(param_2[1] + 4);
    auVar10._8_8_ = uStack_78;
    auVar10._0_8_ = local_80;
    auVar28._12_4_ = (int)((ulong)*(undefined8 *)(*param_2 + 8) >> 0x20);
    auVar28._0_12_ = *param_2;
    auVar28 = NEON_fmin(auVar28,auVar10,4);
    *(long *)(*param_2 + 8) = auVar28._8_8_;
    *(long *)*param_2 = auVar28._0_8_;
    auVar29 = NEON_fmax(auVar29,local_70,4);
    *(long *)param_2[2] = auVar29._8_8_;
    *(long *)(param_2[1] + 4) = auVar29._0_8_;
    iVar2 = *param_4;
    iVar18 = (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(lVar1 + 0x18) * 0x200 + 0xc0))(lVar1);
    if (iVar2 <= iVar18) {
      iVar2 = iVar18;
    }
    *param_4 = iVar2;
  }
  plVar20 = (long *)(param_1 + 0x50);
  if ((*plVar20 != 0) && (lVar1 = *plVar20 + (long)plVar20, lVar1 != 0)) {
    (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(lVar1 + 0x18) * 0x200 + 0x18))
              (lVar1,&DAT_03aae430,&local_80);
    auVar29 = *(undefined1 (*) [16])(param_2[1] + 4);
    auVar11._8_8_ = uStack_78;
    auVar11._0_8_ = local_80;
    auVar3._12_4_ = (int)((ulong)*(undefined8 *)(*param_2 + 8) >> 0x20);
    auVar3._0_12_ = *param_2;
    auVar28 = NEON_fmin(auVar3,auVar11,4);
    *(long *)(*param_2 + 8) = auVar28._8_8_;
    *(long *)*param_2 = auVar28._0_8_;
    auVar29 = NEON_fmax(auVar29,local_70,4);
    *(long *)param_2[2] = auVar29._8_8_;
    *(long *)(param_2[1] + 4) = auVar29._0_8_;
    iVar2 = *param_4;
    iVar18 = (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(lVar1 + 0x18) * 0x200 + 0xc0))(lVar1);
    if (iVar2 <= iVar18) {
      iVar2 = iVar18;
    }
    *param_4 = iVar2;
  }
  plVar21 = (long *)(param_1 + 0x58);
  if ((*plVar21 != 0) && (lVar1 = *plVar21 + (long)plVar21, lVar1 != 0)) {
    (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(lVar1 + 0x18) * 0x200 + 0x18))
              (lVar1,&DAT_03aae430,&local_80);
    auVar29 = *(undefined1 (*) [16])(param_2[1] + 4);
    auVar12._8_8_ = uStack_78;
    auVar12._0_8_ = local_80;
    auVar4._12_4_ = (int)((ulong)*(undefined8 *)(*param_2 + 8) >> 0x20);
    auVar4._0_12_ = *param_2;
    auVar28 = NEON_fmin(auVar4,auVar12,4);
    *(long *)(*param_2 + 8) = auVar28._8_8_;
    *(long *)*param_2 = auVar28._0_8_;
    auVar29 = NEON_fmax(auVar29,local_70,4);
    *(long *)param_2[2] = auVar29._8_8_;
    *(long *)(param_2[1] + 4) = auVar29._0_8_;
    iVar2 = *param_4;
    iVar18 = (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(lVar1 + 0x18) * 0x200 + 0xc0))(lVar1);
    if (iVar2 <= iVar18) {
      iVar2 = iVar18;
    }
    *param_4 = iVar2;
  }
  plVar22 = (long *)(param_1 + 0x60);
  if ((*plVar22 != 0) && (lVar1 = *plVar22 + (long)plVar22, lVar1 != 0)) {
    (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(lVar1 + 0x18) * 0x200 + 0x18))
              (lVar1,&DAT_03aae430,&local_80);
    auVar29 = *(undefined1 (*) [16])(param_2[1] + 4);
    auVar13._8_8_ = uStack_78;
    auVar13._0_8_ = local_80;
    auVar5._12_4_ = (int)((ulong)*(undefined8 *)(*param_2 + 8) >> 0x20);
    auVar5._0_12_ = *param_2;
    auVar28 = NEON_fmin(auVar5,auVar13,4);
    *(long *)(*param_2 + 8) = auVar28._8_8_;
    *(long *)*param_2 = auVar28._0_8_;
    auVar29 = NEON_fmax(auVar29,local_70,4);
    *(long *)param_2[2] = auVar29._8_8_;
    *(long *)(param_2[1] + 4) = auVar29._0_8_;
    iVar2 = *param_4;
    iVar18 = (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(lVar1 + 0x18) * 0x200 + 0xc0))(lVar1);
    if (iVar2 <= iVar18) {
      iVar2 = iVar18;
    }
    *param_4 = iVar2;
  }
  plVar26 = (long *)(param_1 + 0x68);
  if ((*plVar26 != 0) && (lVar1 = *plVar26 + (long)plVar26, lVar1 != 0)) {
    (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(lVar1 + 0x18) * 0x200 + 0x18))
              (lVar1,&DAT_03aae430,&local_80);
    auVar29 = *(undefined1 (*) [16])(param_2[1] + 4);
    auVar14._8_8_ = uStack_78;
    auVar14._0_8_ = local_80;
    auVar6._12_4_ = (int)((ulong)*(undefined8 *)(*param_2 + 8) >> 0x20);
    auVar6._0_12_ = *param_2;
    auVar28 = NEON_fmin(auVar6,auVar14,4);
    *(long *)(*param_2 + 8) = auVar28._8_8_;
    *(long *)*param_2 = auVar28._0_8_;
    auVar29 = NEON_fmax(auVar29,local_70,4);
    *(long *)param_2[2] = auVar29._8_8_;
    *(long *)(param_2[1] + 4) = auVar29._0_8_;
    iVar2 = *param_4;
    iVar18 = (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(lVar1 + 0x18) * 0x200 + 0xc0))(lVar1);
    if (iVar2 <= iVar18) {
      iVar2 = iVar18;
    }
    *param_4 = iVar2;
  }
  plVar24 = (long *)(param_1 + 0x70);
  if ((*plVar24 != 0) && (lVar1 = *plVar24 + (long)plVar24, lVar1 != 0)) {
    (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(lVar1 + 0x18) * 0x200 + 0x18))
              (lVar1,&DAT_03aae430,&local_80);
    auVar29 = *(undefined1 (*) [16])(param_2[1] + 4);
    auVar15._8_8_ = uStack_78;
    auVar15._0_8_ = local_80;
    auVar7._12_4_ = (int)((ulong)*(undefined8 *)(*param_2 + 8) >> 0x20);
    auVar7._0_12_ = *param_2;
    auVar28 = NEON_fmin(auVar7,auVar15,4);
    *(long *)(*param_2 + 8) = auVar28._8_8_;
    *(long *)*param_2 = auVar28._0_8_;
    auVar29 = NEON_fmax(auVar29,local_70,4);
    *(long *)param_2[2] = auVar29._8_8_;
    *(long *)(param_2[1] + 4) = auVar29._0_8_;
    iVar2 = *param_4;
    iVar18 = (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(lVar1 + 0x18) * 0x200 + 0xc0))(lVar1);
    if (iVar2 <= iVar18) {
      iVar2 = iVar18;
    }
    *param_4 = iVar2;
  }
  plVar25 = (long *)(param_1 + 0x78);
  if ((*plVar25 != 0) && (lVar1 = *plVar25 + (long)plVar25, lVar1 != 0)) {
    (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(lVar1 + 0x18) * 0x200 + 0x18))
              (lVar1,&DAT_03aae430,&local_80);
    auVar29 = *(undefined1 (*) [16])(param_2[1] + 4);
    auVar16._8_8_ = uStack_78;
    auVar16._0_8_ = local_80;
    auVar8._12_4_ = (int)((ulong)*(undefined8 *)(*param_2 + 8) >> 0x20);
    auVar8._0_12_ = *param_2;
    auVar28 = NEON_fmin(auVar8,auVar16,4);
    *(long *)(*param_2 + 8) = auVar28._8_8_;
    *(long *)*param_2 = auVar28._0_8_;
    auVar29 = NEON_fmax(auVar29,local_70,4);
    *(long *)param_2[2] = auVar29._8_8_;
    *(long *)(param_2[1] + 4) = auVar29._0_8_;
    iVar2 = *param_4;
    iVar18 = (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(lVar1 + 0x18) * 0x200 + 0xc0))(lVar1);
    if (iVar2 <= iVar18) {
      iVar2 = iVar18;
    }
    *param_4 = iVar2;
  }
  plVar23 = (long *)(param_1 + 0x80);
  if ((*plVar23 != 0) && (lVar1 = *plVar23 + (long)plVar23, lVar1 != 0)) {
    (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(lVar1 + 0x18) * 0x200 + 0x18))
              (lVar1,&DAT_03aae430,&local_80);
    auVar29 = *(undefined1 (*) [16])(param_2[1] + 4);
    auVar17._8_8_ = uStack_78;
    auVar17._0_8_ = local_80;
    auVar9._12_4_ = (int)((ulong)*(undefined8 *)(*param_2 + 8) >> 0x20);
    auVar9._0_12_ = *param_2;
    auVar28 = NEON_fmin(auVar9,auVar17,4);
    *(long *)(*param_2 + 8) = auVar28._8_8_;
    *(long *)*param_2 = auVar28._0_8_;
    auVar29 = NEON_fmax(auVar29,local_70,4);
    *(long *)param_2[2] = auVar29._8_8_;
    *(long *)(param_2[1] + 4) = auVar29._0_8_;
    iVar2 = *param_4;
    iVar18 = (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(lVar1 + 0x18) * 0x200 + 0xc0))(lVar1);
    if (iVar2 <= iVar18) {
      iVar2 = iVar18;
    }
    *param_4 = iVar2;
  }
  *param_3 = 0.0;
  auVar30._0_8_ =
       CONCAT44((*(float *)(*param_2 + 4) + (float)((ulong)*(undefined8 *)(param_2[1] + 4) >> 0x20))
                * 0.5,(*(float *)*param_2 + (float)*(undefined8 *)(param_2[1] + 4)) * 0.5);
  auVar30._8_4_ = (*(float *)(*param_2 + 8) + (float)*(undefined8 *)param_2[2]) * 0.5;
  auVar30._12_4_ = (*(float *)param_2[1] + (float)((ulong)*(undefined8 *)param_2[2] >> 0x20)) * 0.5;
  uStack_78 = auVar30._8_8_;
  local_80 = auVar30._0_8_;
  if ((*plVar19 != 0) && (lVar1 = *plVar19 + (long)plVar19, lVar1 != 0)) {
    (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(lVar1 + 0x18) * 0x200 + 0x28))
              (lVar1,&local_80,local_88);
    fVar27 = *param_3;
    if (*param_3 <= local_88[0]) {
      fVar27 = local_88[0];
    }
    *param_3 = fVar27;
  }
  if ((*plVar20 != 0) && (lVar1 = *plVar20 + (long)plVar20, lVar1 != 0)) {
    (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(lVar1 + 0x18) * 0x200 + 0x28))
              (lVar1,&local_80,local_88);
    fVar27 = *param_3;
    if (*param_3 <= local_88[0]) {
      fVar27 = local_88[0];
    }
    *param_3 = fVar27;
  }
  if ((*plVar21 != 0) && (lVar1 = *plVar21 + (long)plVar21, lVar1 != 0)) {
    (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(lVar1 + 0x18) * 0x200 + 0x28))
              (lVar1,&local_80,local_88);
    fVar27 = *param_3;
    if (*param_3 <= local_88[0]) {
      fVar27 = local_88[0];
    }
    *param_3 = fVar27;
  }
  if ((*plVar22 != 0) && (lVar1 = *plVar22 + (long)plVar22, lVar1 != 0)) {
    (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(lVar1 + 0x18) * 0x200 + 0x28))
              (lVar1,&local_80,local_88);
    fVar27 = *param_3;
    if (*param_3 <= local_88[0]) {
      fVar27 = local_88[0];
    }
    *param_3 = fVar27;
  }
  if ((*plVar26 != 0) && (lVar1 = *plVar26 + (long)plVar26, lVar1 != 0)) {
    (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(lVar1 + 0x18) * 0x200 + 0x28))
              (lVar1,&local_80,local_88);
    fVar27 = *param_3;
    if (*param_3 <= local_88[0]) {
      fVar27 = local_88[0];
    }
    *param_3 = fVar27;
  }
  if ((*plVar24 != 0) && (lVar1 = *plVar24 + (long)plVar24, lVar1 != 0)) {
    (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(lVar1 + 0x18) * 0x200 + 0x28))
              (lVar1,&local_80,local_88);
    fVar27 = *param_3;
    if (*param_3 <= local_88[0]) {
      fVar27 = local_88[0];
    }
    *param_3 = fVar27;
  }
  if ((*plVar25 != 0) && (lVar1 = *plVar25 + (long)plVar25, lVar1 != 0)) {
    (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(lVar1 + 0x18) * 0x200 + 0x28))
              (lVar1,&local_80,local_88);
    fVar27 = *param_3;
    if (*param_3 <= local_88[0]) {
      fVar27 = local_88[0];
    }
    *param_3 = fVar27;
  }
  if ((*plVar23 != 0) && (lVar1 = *plVar23 + (long)plVar23, lVar1 != 0)) {
    (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(lVar1 + 0x18) * 0x200 + 0x28))
              (lVar1,&local_80,local_88);
    fVar27 = *param_3;
    if (*param_3 <= local_88[0]) {
      fVar27 = local_88[0];
    }
    *param_3 = fVar27;
  }
  return;
}


