/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03143854; name: FUN_03143854
 */


undefined8 FUN_03143854(float param_1,long param_2,long *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  uint *puVar10;
  uint *puVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  undefined8 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 local_e0;
  undefined8 uStack_d8;
  float local_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  undefined1 local_c0 [8];
  float fStack_b8;
  undefined1 auStack_b0 [8];
  float fStack_a8;
  undefined1 local_a0 [16];
  float local_90;
  float fStack_8c;
  undefined8 uStack_88;
  
  iVar3 = (**(code **)(*param_3 + 0xf8))(param_3,*(undefined8 *)(param_2 + 0x20));
  if ((iVar3 == 0) ||
     (iVar3 = (**(code **)(*param_3 + 0xf8))(param_3,*(undefined8 *)(param_2 + 0x28)), iVar3 == 0))
  {
    uVar4 = 1;
  }
  else {
    uVar5 = *(ulong *)(param_2 + 0x20);
    if ((long)uVar5 < 0) {
      uVar5 = uVar5 & 0xffffffff;
    }
    else {
      uVar6 = FUN_032c0fa4(param_3 + 0x129,uVar5,&local_90);
      uVar5 = (ulong)(uint)local_90;
      if ((uVar6 & 1) == 0) {
        uVar5 = 0xffffff;
      }
    }
    lVar8 = param_3[7];
    uVar5 = uVar5 & 0xffffff;
    uVar6 = *(ulong *)(param_2 + 0x28);
    if ((long)uVar6 < 0) {
      uVar6 = uVar6 & 0xffffffff;
      lVar9 = lVar8;
    }
    else {
      uVar6 = FUN_032c0fa4(param_3 + 0x129,uVar6,&local_90);
      if ((uVar6 & 1) == 0) {
        uVar6 = 0xffffff;
      }
      else {
        uVar6 = (ulong)(uint)local_90;
      }
      lVar9 = param_3[7];
    }
    if (((*(byte *)(lVar8 + uVar5 * 0xc0 + 0x88) & 1) != 0) &&
       (uVar6 = uVar6 & 0xffffff, (*(byte *)(lVar9 + uVar6 * 0xc0 + 0x88) & 1) != 0)) {
      puVar11 = (uint *)(lVar8 + uVar5 * 0xc0 + 0x54);
      uVar1 = *puVar11 & 8;
      puVar10 = (uint *)(lVar9 + uVar6 * 0xc0 + 0x54);
      uVar2 = *puVar10 & 8;
      if (uVar2 != 0 || uVar1 != 0) {
        FUN_032cc3fc(&local_90,lVar8 + uVar5 * 0xc0,param_2 + 0x40);
        FUN_032cc3fc(local_a0,lVar9 + uVar6 * 0xc0,param_2 + 0x50);
        fVar22 = local_a0._0_4_ - local_90;
        fVar23 = local_a0._4_4_ - fStack_8c;
        fVar24 = local_a0._8_4_ - (float)uStack_88;
        fVar12 = fVar22 * fVar22 + fVar23 * fVar23 + fVar24 * fVar24;
        fVar14 = fVar22 * fVar22 + fVar23 * fVar23 + fVar24 * fVar24;
        uVar4 = CONCAT44(fVar14,fVar12);
        uVar20 = NEON_frsqrte(uVar4,4);
        fVar18 = (float)uVar20;
        fVar21 = (float)((ulong)uVar20 >> 0x20);
        uVar20 = NEON_frsqrts(uVar4,CONCAT44(fVar21 * fVar21,fVar18 * fVar18),4);
        fVar18 = fVar18 * (float)uVar20;
        fVar21 = fVar21 * (float)((ulong)uVar20 >> 0x20);
        uVar4 = NEON_frsqrts(uVar4,CONCAT44(fVar21 * fVar21,fVar18 * fVar18),4);
        iVar3 = -(uint)(fVar12 <= 0.0);
        iVar17 = -(uint)(fVar14 <= 0.0);
        fVar18 = (float)uVar4 * fVar18;
        fVar21 = (float)((ulong)uVar4 >> 0x20) * fVar21;
        fVar18 = (float)CONCAT13((byte)((uint)fVar18 >> 0x18) & ~(byte)((uint)iVar3 >> 0x18),
                                 CONCAT12((byte)((uint)fVar18 >> 0x10) &
                                          ~(byte)((uint)iVar3 >> 0x10),
                                          CONCAT11((byte)((uint)fVar18 >> 8) &
                                                   ~(byte)((uint)iVar3 >> 8),
                                                   SUB41(fVar18,0) & ~(byte)iVar3)));
        fVar19 = *(float *)(param_2 + 0x60);
        fVar12 = fVar12 * fVar18;
        fVar21 = (float)(CONCAT17((byte)((uint)fVar21 >> 0x18) & ~(byte)((uint)iVar17 >> 0x18),
                                  CONCAT16((byte)((uint)fVar21 >> 0x10) &
                                           ~(byte)((uint)iVar17 >> 0x10),
                                           CONCAT15((byte)((uint)fVar21 >> 8) &
                                                    ~(byte)((uint)iVar17 >> 8),
                                                    CONCAT14(SUB41(fVar21,0) & ~(byte)iVar17,fVar18)
                                                   ))) >> 0x20);
        if (((*(char *)(param_2 + 0x6c) != '\0') || (fVar19 <= fVar12)) &&
           (fVar12 <= fVar19 || *(char *)(param_2 + 0x6d) != '\0')) {
          if ((uVar1 == 0) && ((*(byte *)puVar11 & 1) == 0)) {
            (**(code **)(*param_3 + 0x348))(param_3,*(undefined8 *)(param_2 + 0x20),0);
          }
          if ((uVar2 == 0) && ((*(byte *)puVar10 & 1) == 0)) {
            (**(code **)(*param_3 + 0x348))(param_3,*(undefined8 *)(param_2 + 0x28),0);
          }
          lVar7 = param_3[0x2a];
          uVar1 = *(uint *)(lVar9 + uVar6 * 0xc0 + 0x80);
          FUN_0301658c(lVar7 + (ulong)*(uint *)(lVar8 + uVar5 * 0xc0 + 0x80) * 0x80,&local_90,
                       auStack_b0);
          FUN_0301658c(lVar7 + (ulong)uVar1 * 0x80,local_a0,local_c0);
          fVar13 = fVar22 * fVar18 * (local_c0._0_4_ - auStack_b0._0_4_);
          fVar15 = fVar23 * fVar21 * (local_c0._4_4_ - auStack_b0._4_4_);
          fVar16 = fVar24 * fVar18 * (fStack_b8 - fStack_a8);
          fStack_c8 = (fVar12 - fVar19) * *(float *)(param_2 + 100) +
                      (fVar13 + fVar15 + fVar16) * *(float *)(param_2 + 0x68);
          fStack_c4 = (fVar14 * fVar21 - fVar19) * *(float *)(param_2 + 100) +
                      (fVar13 + fVar15 + fVar16) * *(float *)(param_2 + 0x68);
          local_d0 = fVar22 * fVar18 * fStack_c8;
          fStack_cc = fVar23 * fVar21 * fStack_c4;
          fStack_c8 = fVar24 * fVar18 * fStack_c8;
          fStack_c4 = (local_a0._12_4_ - (float)((ulong)uStack_88 >> 0x20)) * fVar21 * fStack_c4;
          *(ulong *)(param_2 + 0x38) = CONCAT44(fStack_c4,fStack_c8);
          *(ulong *)(param_2 + 0x30) = CONCAT44(fStack_cc,local_d0);
          local_d0 = local_d0 * param_1;
          fStack_cc = fStack_cc * param_1;
          fStack_c8 = fStack_c8 * param_1;
          fStack_c4 = fStack_c4 * param_1;
          (**(code **)(*param_3 + 0x1c0))
                    (param_3,*(undefined8 *)(param_2 + 0x20),&local_d0,&local_90,0);
          local_e0 = CONCAT44(0.0 - fStack_cc,0.0 - local_d0);
          uStack_d8 = CONCAT44(0.0 - fStack_c4,0.0 - fStack_c8);
          (**(code **)(*param_3 + 0x1c0))
                    (param_3,*(undefined8 *)(param_2 + 0x28),&local_e0,local_a0,0);
        }
      }
    }
    uVar4 = 0;
  }
  return uVar4;
}


