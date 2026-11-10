/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031e9a84; name: FUN_031e9a84
 */


void FUN_031e9a84(long param_1,ulong param_2,long param_3)

{
  undefined1 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auVar22 [16];
  float fVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined8 uVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  long local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_68;
  
  lVar8 = tpidr_el0;
  if (*(long *)(lVar8 + 0x38d490) == 0) {
    lVar10 = FUN_0333d16c(0,1);
    *(long *)(lVar8 + 0x38d490) = lVar10;
    lVar8 = *(long *)(lVar10 + 0x10);
  }
  else {
    lVar8 = *(long *)(*(long *)(lVar8 + 0x38d490) + 0x10);
  }
  if (lVar8 != 0) {
    puVar7 = *(undefined8 **)(lVar8 + 8);
    uVar5 = (long)puVar7 + 0x17U & 0xfffffffffffffff8;
    if ((uVar5 <= *(ulong *)(lVar8 + 0x10)) &&
       (*(ulong *)(lVar8 + 8) = uVar5, puVar7 != (undefined8 *)0x0)) {
      *puVar7 = "TtupdateSections";
      uVar3 = nn::os::GetSystemTick();
      puVar7[1] = uVar3;
    }
  }
  if ((param_2 & 1) == 0) {
    uVar3 = CONCAT44(*(undefined4 *)(param_1 + 0x184),*(undefined4 *)(param_1 + 0x184));
  }
  else {
    uVar3 = NEON_fmov(0xbf800000,4);
  }
  local_90 = lVar8;
  if (0 < *(int *)(param_1 + 0x98)) {
    uVar31 = NEON_fmov(0x3f800000,4);
    lVar9 = 0;
    lVar10 = 0;
    lVar11 = 0xc9;
    do {
      puVar1 = (undefined1 *)(*(long *)(param_1 + 0x90) + lVar11);
      iVar2 = *(int *)(puVar1 + -0xc9);
      puVar7 = (undefined8 *)(param_3 + (long)iVar2 * 0x60);
      FUN_032cb060(&local_b0,puVar7);
      uStack_98 = puVar7[7];
      local_a0 = puVar7[6];
      fVar13 = (float)((ulong)local_a0 >> 0x20);
      fVar14 = (float)local_b0;
      fVar16 = (float)((ulong)local_b0 >> 0x20);
      fVar20 = (float)uStack_a8;
      fVar15 = (float)((ulong)uStack_a8 >> 0x20);
      fVar17 = (float)uVar3;
      fVar18 = (float)((ulong)uVar3 >> 0x20);
      if ((fVar17 < ABS((float)uStack_98 - (float)*(undefined8 *)(puVar1 + -0x31)) ||
          (fVar17 < ABS((float)local_a0 - (float)*(undefined8 *)(puVar1 + -0x39)) ||
          fVar18 < ABS(fVar13 - (float)((ulong)*(undefined8 *)(puVar1 + -0x39) >> 0x20)))) ||
          (((fVar17 < ABS(fVar14 - (float)*(undefined8 *)(puVar1 + -0x49)) ||
            fVar18 < ABS(fVar16 - (float)((ulong)*(undefined8 *)(puVar1 + -0x49) >> 0x20))) ||
           fVar17 < ABS(fVar20 - (float)*(undefined8 *)(puVar1 + -0x41))) ||
          fVar18 < ABS(fVar15 - (float)((ulong)*(undefined8 *)(puVar1 + -0x41) >> 0x20)))) {
        uVar12 = *puVar7;
        lVar6 = param_3 + (long)iVar2 * 0x60;
        *(undefined8 *)(puVar1 + -0xa1) = puVar7[1];
        *(undefined8 *)(puVar1 + -0xa9) = uVar12;
        uVar12 = *(undefined8 *)(lVar6 + 0x10);
        *(undefined8 *)(puVar1 + -0x91) = *(undefined8 *)(lVar6 + 0x18);
        *(undefined8 *)(puVar1 + -0x99) = uVar12;
        uVar12 = *(undefined8 *)(lVar6 + 0x20);
        *(undefined8 *)(puVar1 + -0x81) = *(undefined8 *)(lVar6 + 0x28);
        *(undefined8 *)(puVar1 + -0x89) = uVar12;
        uVar12 = puVar7[6];
        *(undefined8 *)(puVar1 + -0x71) = puVar7[7];
        *(undefined8 *)(puVar1 + -0x79) = uVar12;
        uVar12 = *(undefined8 *)(lVar6 + 0x40);
        *(undefined8 *)(puVar1 + -0x61) = *(undefined8 *)(lVar6 + 0x48);
        *(undefined8 *)(puVar1 + -0x69) = uVar12;
        uVar12 = *(undefined8 *)(lVar6 + 0x50);
        *(undefined8 *)(puVar1 + -0x51) = *(undefined8 *)(lVar6 + 0x58);
        *(undefined8 *)(puVar1 + -0x59) = uVar12;
        auVar22._8_8_ = uStack_a8;
        auVar22._0_8_ = local_b0;
        *(undefined8 *)(puVar1 + -0x41) = uStack_a8;
        *(undefined8 *)(puVar1 + -0x49) = local_b0;
        lVar6 = *(long *)(puVar1 + -0xc1);
        *(undefined8 *)(puVar1 + -0x31) = uStack_98;
        *(undefined8 *)(puVar1 + -0x39) = local_a0;
        uStack_c8 = *(undefined8 *)(lVar6 + 0x98);
        local_d0 = *(undefined8 *)(lVar6 + 0x90);
        uStack_b8 = *(undefined8 *)(lVar6 + 0xa8);
        local_c0 = *(undefined8 *)(lVar6 + 0xa0);
        fVar17 = (float)local_d0;
        fVar27 = (float)local_c0;
        fVar18 = (float)((ulong)local_d0 >> 0x20);
        fVar28 = (float)((ulong)local_c0 >> 0x20);
        fVar19 = (float)uStack_c8;
        fVar29 = (float)uStack_b8;
        if ((fVar17 <= fVar27 && fVar18 <= fVar28) && fVar19 <= fVar29) {
          auVar24._0_4_ = fVar14 + fVar14;
          auVar24._4_4_ = fVar16 + fVar16;
          auVar24._8_4_ = fVar20 + fVar20;
          auVar24._12_4_ = fVar15 + fVar15;
          auVar22 = NEON_ext(auVar22,auVar22,8,1);
          auVar25 = NEON_ext(auVar24,auVar24,8,1);
          fVar20 = auVar22._0_4_ * auVar25._0_4_;
          fVar35 = auVar24._4_4_ * fVar14 + auVar24._8_4_ * fVar15;
          fVar32 = auVar24._4_4_ * fVar14 - auVar24._8_4_ * fVar15;
          fVar36 = auVar24._8_4_ * fVar14 - auVar24._4_4_ * fVar15;
          fVar34 = auVar24._8_4_ * fVar16 + auVar24._0_4_ * fVar15;
          fVar30 = auVar24._8_4_ * fVar16 - auVar24._0_4_ * fVar15;
          fVar23 = (float)uVar31;
          fVar21 = fVar23 - (auVar24._0_4_ * fVar14 + fVar20);
          fVar26 = fVar23 - (auVar24._0_4_ * fVar14 + auVar24._4_4_ * fVar16);
          fVar33 = auVar24._8_4_ * fVar14 + auVar24._4_4_ * fVar15;
          fVar23 = fVar23 - (auVar24._4_4_ * fVar16 + fVar20);
          fVar14 = ABS((fVar27 - fVar17) * 0.5);
          fVar16 = ABS((fVar28 - fVar18) * 0.5);
          fVar20 = ABS((fVar29 - fVar19) * 0.5);
          fVar27 = (fVar17 + fVar27) * 0.5;
          fVar28 = (fVar18 + fVar28) * 0.5;
          fVar29 = (fVar19 + fVar29) * 0.5;
          fVar15 = ABS(fVar33 * fVar20) + ABS(fVar23 * fVar14) + ABS(fVar32 * fVar16);
          fVar17 = ABS(fVar30 * fVar20) + ABS(fVar35 * fVar14) + ABS(fVar21 * fVar16);
          fVar18 = ABS(fVar26 * fVar20) + ABS(fVar36 * fVar14) + ABS(fVar34 * fVar16);
          fVar19 = ABS(fVar20 * 0.0) + ABS(fVar14 * 0.0) + ABS(fVar16 * 0.0);
          fVar14 = (float)local_a0 + fVar33 * fVar29 + fVar23 * fVar27 + fVar32 * fVar28;
          fVar13 = fVar13 + fVar30 * fVar29 + fVar35 * fVar27 + fVar21 * fVar28;
          fVar16 = (float)uStack_98 + fVar26 * fVar29 + fVar36 * fVar27 + fVar34 * fVar28;
          fVar20 = (float)((ulong)uStack_98 >> 0x20) + fVar29 * 0.0 + fVar27 * 0.0 + fVar28 * 0.0;
          local_c0 = CONCAT44(fVar13 + fVar17,fVar14 + fVar15);
          uStack_b8 = CONCAT44(fVar20 + fVar19,fVar16 + fVar18);
          local_d0 = CONCAT44(fVar13 - fVar17,fVar14 - fVar15);
          uStack_c8 = CONCAT44(fVar20 - fVar19,fVar16 - fVar18);
        }
        local_80 = CONCAT44(-(float)((ulong)*(undefined8 *)(param_1 + 0x150) >> 0x20),
                            -(float)*(undefined8 *)(param_1 + 0x150));
        uStack_78 = CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 0x158) >> 0x20),
                             -(float)*(undefined8 *)(param_1 + 0x158));
        uVar4 = *(undefined4 *)(*(long *)(puVar1 + -0xc1) + 0xb0);
        local_88 = CONCAT44(uVar4,uVar4);
        uVar4 = *(undefined4 *)(param_1 + (long)*(int *)(puVar1 + -0x29) * 4 + 200);
        local_68 = CONCAT44(uVar4,uVar4);
        uVar4 = 3;
        if ((*(byte *)(*(long *)(puVar1 + -0xc1) + 0x80) & 1) != 0) {
          uVar4 = 4;
        }
        FUN_031f1660(&local_d0,&local_80,&local_68,&local_88,uVar4);
        lVar6 = *(long *)(param_1 + 0x30) + lVar9;
        *(undefined8 *)(lVar6 + 0x28) = uStack_c8;
        *(undefined8 *)(lVar6 + 0x20) = local_d0;
        *(undefined1 *)(lVar6 + 0x40) = 1;
        *(undefined8 *)(lVar6 + 0x38) = uStack_b8;
        *(undefined8 *)(lVar6 + 0x30) = local_c0;
        *puVar1 = 1;
        *(undefined1 *)(param_1 + 0xc4) = 1;
      }
      lVar10 = lVar10 + 1;
      lVar11 = lVar11 + 0xd0;
      lVar9 = lVar9 + 0x50;
    } while (lVar10 < *(int *)(param_1 + 0x98));
  }
  if (lVar8 != 0) {
    puVar7 = *(undefined8 **)(lVar8 + 8);
    uVar5 = (long)puVar7 + 0x17U & 0xfffffffffffffff8;
    if ((uVar5 <= *(ulong *)(lVar8 + 0x10)) &&
       (*(ulong *)(lVar8 + 8) = uVar5, puVar7 != (undefined8 *)0x0)) {
      *puVar7 = &DAT_0390f40e;
      uVar3 = nn::os::GetSystemTick();
      puVar7[1] = uVar3;
    }
  }
  return;
}


