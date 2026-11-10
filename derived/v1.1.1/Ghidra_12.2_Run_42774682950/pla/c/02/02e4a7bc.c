/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e4a7bc; name: FUN_02e4a7bc
 */


void FUN_02e4a7bc(long param_1,void *param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  int iVar5;
  undefined1 (*pauVar6) [16];
  uint uVar7;
  ulong unaff_x21;
  uint unaff_w22;
  uint uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  
  uVar4 = *(uint *)((long)param_2 + 0x3e0);
  *(undefined4 *)((long)param_2 + 0x50) = 0;
  *(undefined8 *)((long)param_2 + 0xa0) = 0;
  *(undefined8 *)((long)param_2 + 0x48) = 4;
  *(uint *)((long)param_2 + 0x44) = uVar4;
  if (0 < (int)uVar4) {
    memset(param_2,0xff,(ulong)uVar4 << 2);
  }
  FUN_02e4aaa4(param_1,param_2);
  iVar1 = *(int *)((long)param_2 + 0x4c);
  iVar5 = *(int *)((long)param_2 + 0x50);
  uVar4 = *(uint *)((long)param_2 + 0x44);
  if (iVar5 + iVar1 < (int)uVar4) {
    uVar19 = 0;
    do {
      iVar2 = uVar4 - *(int *)((long)param_2 + 0x48);
      if (iVar2 <= iVar1 || iVar2 <= iVar5) {
        if ((int)uVar4 < 1) {
          return;
        }
        uVar3 = 0;
        do {
          if (*(int *)((long)param_2 + uVar3 * 4) == -1) {
            FUN_02e4ac28(param_1,uVar3 & 0xffffffff,iVar2 <= iVar1,param_2);
            uVar4 = *(uint *)((long)param_2 + 0x44);
          }
          uVar3 = uVar3 + 1;
        } while ((long)uVar3 < (long)(int)uVar4);
        return;
      }
      if (0 < (int)uVar4) {
        uVar9 = 0xbf800000;
        uVar3 = 0;
        pauVar6 = (undefined1 (*) [16])((long)param_2 + 0xc0);
        uVar10 = uVar19;
        uVar8 = unaff_w22;
        do {
          unaff_w22 = uVar8;
          if (*(int *)((long)param_2 + uVar3 * 4) == -1) {
            auVar14 = NEON_fmax(*pauVar6,*(undefined1 (*) [16])((long)param_2 + 0x70),4);
            auVar13 = NEON_fmin(pauVar6[-1],*(undefined1 (*) [16])((long)param_2 + 0x60),4);
            auVar15 = NEON_fmax(*pauVar6,*(undefined1 (*) [16])((long)param_2 + 0x90),4);
            auVar11 = NEON_fmin(pauVar6[-1],*(undefined1 (*) [16])((long)param_2 + 0x80),4);
            fVar16 = (auVar14._0_4_ - auVar13._0_4_) * 0.5;
            fVar17 = (auVar14._4_4_ - auVar13._4_4_) * 0.5;
            fVar18 = (auVar15._0_4_ - auVar11._0_4_) * 0.5;
            fVar12 = (auVar14._8_4_ - auVar13._8_4_) * 0.5;
            fVar16 = fVar16 * fVar16 + fVar17 * fVar17 + fVar12 * fVar12;
            fVar17 = (auVar15._4_4_ - auVar11._4_4_) * 0.5;
            fVar12 = (auVar15._8_4_ - auVar11._8_4_) * 0.5;
            fVar12 = fVar18 * fVar18 + fVar17 * fVar17 + fVar12 * fVar12;
            fVar16 = (fVar12 * *(float *)(param_1 + 0x10) * SQRT(fVar12) -
                     *(float *)((long)param_2 + 0xa4)) +
                     (*(float *)((long)param_2 + 0xa0) -
                     SQRT(fVar16) * fVar16 * *(float *)(param_1 + 0x10));
            fVar12 = ABS(fVar16);
            auVar11 = ZEXT416((uint)fVar12);
            unaff_w22 = (uint)(fVar16 < 0.0);
            if (fVar12 <= (float)uVar9) {
              unaff_w22 = uVar8;
              if (fVar12 == (float)uVar9) {
                uVar7 = (uint)uVar3;
                unaff_w22 = (uint)(fVar16 < 0.0);
                if (*(int *)((long)param_2 + (long)(int)uVar8 * 4 + 0x4c) <=
                    *(int *)((long)param_2 + (ulong)(fVar16 < 0.0) * 4 + 0x4c)) {
                  uVar7 = (uint)unaff_x21;
                  unaff_w22 = uVar8;
                }
                unaff_x21 = (ulong)uVar7;
              }
              goto LAB_02e4a894;
            }
            unaff_x21 = uVar3 & 0xffffffff;
          }
          else {
LAB_02e4a894:
            auVar11._8_8_ = uVar10;
            auVar11._0_8_ = uVar9;
          }
          uVar10 = auVar11._8_8_;
          uVar9 = auVar11._0_8_;
          uVar3 = uVar3 + 1;
          pauVar6 = pauVar6 + 3;
          uVar8 = unaff_w22;
        } while (uVar4 != uVar3);
      }
      FUN_02e4ac28(param_1,unaff_x21 & 0xffffffff,unaff_w22,param_2);
      iVar1 = *(int *)((long)param_2 + 0x4c);
      iVar5 = *(int *)((long)param_2 + 0x50);
      uVar4 = *(uint *)((long)param_2 + 0x44);
    } while (iVar5 + iVar1 < (int)uVar4);
  }
  return;
}


