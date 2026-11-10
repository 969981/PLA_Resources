/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0325f884; name: FUN_0325f884
 */


undefined8
FUN_0325f884(undefined8 param_1,long param_2,undefined4 *param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
            undefined8 param_9)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  float *pfVar3;
  undefined1 *__src;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  void *__dest;
  uint uVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  undefined1 (*pauVar12) [16];
  int iVar13;
  int iVar14;
  long lVar15;
  uint uVar16;
  uint *puVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined8 uVar22;
  float fVar23;
  float fVar24;
  undefined8 uVar25;
  float fVar26;
  float fVar27;
  undefined8 uVar28;
  float fVar29;
  float fVar30;
  undefined8 uVar31;
  float fVar32;
  float fVar33;
  undefined8 uVar34;
  float fVar35;
  float fVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  float fVar39;
  undefined1 auVar40 [16];
  long local_1e8;
  undefined8 local_1e0;
  long local_1d8;
  int local_1d0;
  undefined *local_1c8;
  undefined1 *local_1c0;
  undefined8 local_1b8;
  undefined1 auStack_1b0 [256];
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  long local_98;
  long lStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  
  lVar6 = tpidr_el0;
  if (*(long *)(lVar6 + 0x38d490) == 0) {
    lVar15 = FUN_0333d16c(0,1);
    *(long *)(lVar6 + 0x38d490) = lVar15;
    lVar15 = *(long *)(lVar15 + 0x10);
  }
  else {
    lVar15 = *(long *)(*(long *)(lVar6 + 0x38d490) + 0x10);
  }
  if (lVar15 != 0) {
    FUN_032d5af0(lVar15,"TtcomputeCxDecompOfCutFace",0x1a);
  }
  nn::util::ReferSymbol("SDK MW+Microsoft+Havok_AI-2020_2");
  *param_3 = *(undefined4 *)(param_2 + 0x140);
  local_98 = *(long *)(param_2 + 0x148);
  local_1c8 = &DAT_043252b0;
  local_1c0 = auStack_1b0;
  local_1b8 = 0x8000004000000000;
  lStack_90 = local_98 + (long)*(int *)(param_2 + 0x150) * 8;
  local_b0 = 0;
  *(undefined ***)(param_2 + 200) = &local_1c8;
  local_a8 = param_7;
  uStack_a0 = param_8;
  local_88 = param_4;
  uStack_80 = param_9;
  FUN_03260e80(param_2 + 0x90);
  puVar4 = PTR_PTR_0434a080;
  puVar17 = (uint *)(param_2 + 0xb4);
  uVar8 = *puVar17;
  uVar16 = *(uint *)(param_2 + 0x108);
  if ((int)(uVar8 & 0x3fffffff) < (int)uVar16) {
    uVar18 = *(undefined8 *)(param_2 + 0xa8);
    uVar1 = *(undefined4 *)(param_2 + 0xb0);
    if (0x3fffffff < (int)uVar16) {
      FUN_032bd0a8(uVar16);
      uVar8 = *puVar17;
    }
    uVar8 = (uVar8 & 0x3fffffff) * 2;
    if (uVar8 < 0x3fffffff) {
      if ((int)uVar16 <= (int)uVar8) {
LAB_0325fee4:
        uVar16 = uVar8;
      }
    }
    else {
      uVar8 = 0x3fffffff;
      if ((int)uVar16 < 0x40000000) goto LAB_0325fee4;
    }
    uVar18 = FUN_032bd1d4(puVar4,uVar16,2,uVar18,uVar1,puVar17);
    uVar16 = *(uint *)(param_2 + 0x108);
    *(undefined8 *)(param_2 + 0xa8) = uVar18;
  }
  puVar17 = (uint *)(param_2 + 0xc4);
  uVar8 = *puVar17;
  if ((int)(uVar8 & 0x3fffffff) < (int)uVar16) {
    uVar18 = *(undefined8 *)(param_2 + 0xb8);
    uVar1 = *(undefined4 *)(param_2 + 0xc0);
    if (0x3fffffff < (int)uVar16) {
      FUN_032bd0a8(uVar16);
      uVar8 = *puVar17;
    }
    uVar8 = (uVar8 & 0x3fffffff) * 2;
    if (uVar8 < 0x3fffffff) {
      if ((int)uVar16 <= (int)uVar8) {
LAB_0325ff08:
        uVar16 = uVar8;
      }
    }
    else {
      uVar8 = 0x3fffffff;
      if ((int)uVar16 < 0x40000000) goto LAB_0325ff08;
    }
    uVar18 = FUN_032bd1d4(puVar4,uVar16,2,uVar18,uVar1,puVar17);
    *(undefined8 *)(param_2 + 0xb8) = uVar18;
  }
  iVar5 = *(int *)(param_2 + 0x98);
  while (iVar5 != 1) {
    FUN_032671c0(param_2);
    FUN_033299e0(0xe4a9f7dc);
    iVar5 = *(int *)(param_2 + 0x98);
  }
  FUN_03263ad0(param_2);
  FUN_033299e0(0xb56f9afd);
  FUN_03260bd0(param_2);
  FUN_033299e0(0x79fc6040);
  uVar8 = *(uint *)(param_2 + 0x118);
  uVar16 = *(uint *)(param_2 + 0x138);
  iVar5 = *(int *)(param_2 + 0x128);
  local_1e8 = 0;
  local_1e0 = 0x8000000000000000;
  local_1d0 = iVar5;
  if (iVar5 == 0) {
    local_1d8 = 0;
  }
  else {
    lVar10 = *(long *)(lVar6 + 0x38d490);
    if (lVar10 == 0) {
      lVar10 = FUN_0333d16c(0,1);
      *(long *)(lVar6 + 0x38d490) = lVar10;
    }
    lVar10 = *(long *)(lVar10 + 8);
    uVar7 = (ulong)(int)(iVar5 * 4 + 0x7fU & 0xffffff80);
    if (uVar7 <= *(ulong *)(lVar10 + 0x10)) {
      local_1d8 = *(long *)(lVar10 + 0x18);
      uVar7 = local_1d8 + uVar7;
      if (uVar7 <= *(ulong *)(lVar10 + 0x20)) {
        *(ulong *)(lVar10 + 0x18) = uVar7;
        goto LAB_0325faf0;
      }
    }
    local_1d8 = FUN_032ce670(lVar10);
  }
LAB_0325faf0:
  local_1e0 = CONCAT44(iVar5,(undefined4)local_1e0) | 0x8000000000000000;
  local_1e8 = local_1d8;
  iVar5 = FUN_03263870(param_2,&local_1e8);
  if ((int)(param_3[5] & 0x3fffffff) < (int)uVar8) {
    uVar18 = FUN_0326089c(puVar4,uVar8,*(undefined8 *)(param_3 + 2),param_3[4]);
    *(undefined8 *)(param_3 + 2) = uVar18;
  }
  if ((int)(param_3[0xd] & 0x3fffffff) < iVar5) {
    uVar18 = FUN_03260924(puVar4,iVar5,*(undefined8 *)(param_3 + 10),param_3[0xc]);
    *(undefined8 *)(param_3 + 10) = uVar18;
  }
  puVar17 = param_3 + 0x15;
  uVar9 = *puVar17;
  __src = local_1c0;
  if ((int)(uVar9 & 0x3fffffff) < (int)uVar16) {
    uVar18 = *(undefined8 *)(param_3 + 0x12);
    uVar1 = param_3[0x14];
    if (0x3fffffff < (int)uVar16) {
      FUN_032bd0a8(uVar16);
      uVar9 = *puVar17;
    }
    uVar9 = (uVar9 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar9) {
      uVar9 = 0x3fffffff;
    }
    if ((int)uVar16 <= (int)uVar9) {
      uVar16 = uVar9;
    }
    uVar18 = FUN_032bd1d4(puVar4,uVar16,0x10,uVar18,uVar1,puVar17);
    *(undefined8 *)(param_3 + 0x12) = uVar18;
    __src = local_1c0;
  }
  local_1c0 = __src;
  if (uVar8 != 0) {
    if (&local_1c0 != (undefined1 **)(param_3 + 6)) {
      iVar5 = (int)local_1b8;
      lVar10 = (long)(int)local_1b8;
      __dest = *(void **)(param_3 + 6);
      if ((int)(param_3[9] & 0x3fffffff) < (int)local_1b8) {
        __dest = (void *)FUN_032bd1d4(puVar4,local_1b8 & 0xffffffff,4,__dest,param_3[8]);
        *(void **)(param_3 + 6) = __dest;
      }
      memcpy(__dest,__src,lVar10 << 2);
      param_3[8] = iVar5;
    }
    if (0 < (int)uVar8) {
      uVar16 = 0;
      do {
        FUN_03263670(param_2,*(long *)(param_2 + 0x110) + (ulong)(uVar16 & 0xffff) * 8,&local_1e8,
                     param_3);
        uVar16 = uVar16 + 1;
      } while (uVar8 != uVar16);
    }
    iVar5 = *(int *)(param_2 + 0x138);
    if (0 < iVar5) {
      uVar22 = *(undefined8 *)(param_2 + 0x58);
      uVar18 = *(undefined8 *)(param_2 + 0x50);
      uVar28 = *(undefined8 *)(param_2 + 0x68);
      uVar25 = *(undefined8 *)(param_2 + 0x60);
      lVar10 = 0;
      uVar34 = *(undefined8 *)(param_2 + 0x88);
      uVar31 = *(undefined8 *)(param_2 + 0x80);
      pauVar12 = *(undefined1 (**) [16])(param_2 + 0x130);
      iVar14 = param_3[0x14];
      do {
        auVar38 = *pauVar12;
        auVar40._0_4_ = auVar38._0_4_ >> 0x10;
        auVar40._4_4_ = auVar38._4_4_ >> 0x10;
        auVar40._8_4_ = auVar38._8_4_ >> 0x10;
        auVar40._12_4_ = auVar38._12_4_ >> 0x10;
        auVar37._2_2_ = 0;
        auVar37._0_2_ = auVar38._0_2_;
        auVar37[4] = auVar38[4];
        auVar37[5] = auVar38[5];
        auVar37._6_2_ = 0;
        auVar37[8] = auVar38[8];
        auVar37[9] = auVar38[9];
        auVar37._10_2_ = 0;
        auVar37[0xc] = auVar38[0xc];
        auVar37[0xd] = auVar38[0xd];
        auVar37._14_2_ = 0;
        auVar40 = NEON_ucvtf(auVar40,4);
        auVar38 = NEON_ucvtf(auVar37,4);
        fVar39 = auVar40._0_4_;
        fVar19 = (float)uVar18;
        fVar20 = (float)((ulong)uVar18 >> 0x20);
        fVar21 = (float)uVar22;
        fVar23 = (float)((ulong)uVar22 >> 0x20);
        fVar36 = auVar38._0_4_;
        fVar24 = (float)uVar25;
        fVar26 = (float)((ulong)uVar25 >> 0x20);
        fVar27 = (float)uVar28;
        fVar29 = (float)((ulong)uVar28 >> 0x20);
        fVar30 = (float)uVar31;
        fVar32 = (float)((ulong)uVar31 >> 0x20);
        fVar33 = (float)uVar34;
        fVar35 = (float)((ulong)uVar34 >> 0x20);
        puVar2 = (undefined8 *)(*(long *)(param_3 + 0x12) + (long)iVar14 * 0x10);
        puVar2[1] = CONCAT44(fVar29 * fVar36 + fVar35 + fVar23 * fVar39,
                             fVar27 * fVar36 + fVar33 + fVar21 * fVar39);
        *puVar2 = CONCAT44(fVar26 * fVar36 + fVar32 + fVar20 * fVar39,
                           fVar24 * fVar36 + fVar30 + fVar19 * fVar39);
        uVar7 = (long)iVar14 + 1;
        iVar13 = (int)uVar7;
        param_3[0x14] = iVar13;
        if (iVar13 < iVar5) {
          fVar39 = auVar40._4_4_;
          fVar36 = auVar38._4_4_;
          puVar2 = (undefined8 *)(*(long *)(param_3 + 0x12) + uVar7 * 0x10);
          puVar2[1] = CONCAT44(fVar29 * fVar36 + fVar35 + fVar23 * fVar39,
                               fVar27 * fVar36 + fVar33 + fVar21 * fVar39);
          *puVar2 = CONCAT44(fVar26 * fVar36 + fVar32 + fVar20 * fVar39,
                             fVar24 * fVar36 + fVar30 + fVar19 * fVar39);
          uVar16 = iVar14 + 2;
          uVar7 = (ulong)uVar16;
          param_3[0x14] = uVar16;
          if (iVar5 <= (int)uVar16) goto LAB_0325fc84;
LAB_0325fcb8:
          fVar39 = auVar40._8_4_;
          fVar36 = auVar38._8_4_;
          puVar2 = (undefined8 *)(*(long *)(param_3 + 0x12) + (long)(int)uVar7 * 0x10);
          puVar2[1] = CONCAT44(fVar29 * fVar36 + fVar35 + fVar23 * fVar39,
                               fVar27 * fVar36 + fVar33 + fVar21 * fVar39);
          *puVar2 = CONCAT44(fVar26 * fVar36 + fVar32 + fVar20 * fVar39,
                             fVar24 * fVar36 + fVar30 + fVar19 * fVar39);
          iVar14 = (int)uVar7 + 1;
          param_3[0x14] = iVar14;
        }
        else {
          if (iVar13 < iVar5) goto LAB_0325fcb8;
LAB_0325fc84:
          iVar14 = (int)uVar7;
        }
        if (iVar14 < iVar5) {
          fVar39 = auVar40._12_4_;
          fVar36 = auVar38._12_4_;
          pfVar3 = (float *)(*(long *)(param_3 + 0x12) + (long)iVar14 * 0x10);
          pfVar3[2] = fVar27 * fVar36 + fVar33 + fVar21 * fVar39;
          pfVar3[3] = fVar29 * fVar36 + fVar35 + fVar23 * fVar39;
          *pfVar3 = fVar24 * fVar36 + fVar30 + fVar19 * fVar39;
          pfVar3[1] = fVar26 * fVar36 + fVar32 + fVar20 * fVar39;
          iVar14 = iVar14 + 1;
          param_3[0x14] = iVar14;
        }
        lVar10 = lVar10 + 4;
        pauVar12 = pauVar12 + 1;
      } while (lVar10 < iVar5);
    }
    FUN_03263b60(param_5,param_6,param_2,param_3);
    if (*(int *)(param_2 + 0x160) != 0) {
      FUN_0325ffa8(param_1,param_2,param_3);
    }
  }
  iVar5 = local_1d0;
  lVar10 = local_1d8;
  if (local_1d8 == local_1e8) {
    local_1e0 = local_1e0 & 0xffffffff00000000;
  }
  lVar11 = *(long *)(lVar6 + 0x38d490);
  if (lVar11 == 0) {
    lVar11 = FUN_0333d16c(0,1);
    *(long *)(lVar6 + 0x38d490) = lVar11;
  }
  lVar6 = *(long *)(lVar11 + 8);
  uVar7 = (ulong)(int)(iVar5 * 4 + 0x7fU & 0xffffff80);
  if (((*(ulong *)(lVar6 + 0x10) < uVar7) || (*(long *)(lVar6 + 0x18) != uVar7 + lVar10)) ||
     (*(long *)(lVar6 + 0x28) == lVar10)) {
    FUN_032cedf0(lVar6,lVar10);
  }
  else {
    *(long *)(lVar6 + 0x18) = lVar10;
  }
  uVar7 = local_1e0;
  uVar16 = local_1e0._4_4_;
  local_1e0 = (ulong)local_1e0._4_4_ << 0x20;
  if ((-1 < (long)uVar7) && (local_1e8 != 0)) {
    FUN_032cf244(puVar4,local_1e8,4,uVar16 & 0x3fffffff);
  }
  uVar7 = local_1b8;
  uVar16 = local_1b8._4_4_;
  local_1c8 = &DAT_043252b0;
  local_1b8 = (ulong)local_1b8._4_4_ << 0x20;
  if ((-1 < (long)uVar7) && (local_1c0 != (undefined1 *)0x0)) {
    FUN_032cf244(PTR_PTR_0434a090,local_1c0,4,uVar16 & 0x3fffffff);
  }
  if (lVar15 != 0) {
    FUN_032d5b34(lVar15,&DAT_0390f40e);
  }
  return 1;
}


