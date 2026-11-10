/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01836bfc; name: FUN_01836bfc
 */


void FUN_01836bfc(long param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar8;
  undefined *puVar9;
  int iVar10;
  long *plVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  int iVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  
  puVar9 = PTR_DAT_04379e80;
  fVar8 = DAT_042284a0;
  uVar5 = *(int *)(param_1 + 0x220) - 9;
  if (uVar5 < 2) {
    if ((((*(int *)(param_1 + 0x360) == 0) && (*(char *)(param_1 + 0x366) != '\0')) &&
        (lVar15 = *(long *)(param_1 + 0x268), lVar15 != 0)) && (*(int *)(lVar15 + 0xc) != 0)) {
      piVar1 = (int *)(lVar15 + 0xc);
      iVar18 = *(int *)(lVar15 + 0xc);
      do {
        puVar14 = *(undefined8 **)(lVar15 + 0x10);
        if (((*PTR_DAT_04379e78 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_04379e78), iVar10 != 0)) {
          uVar12 = FUN_0095a420();
          *(undefined8 *)puVar9 = uVar12;
          __cxa_guard_release(PTR_DAT_04379e78);
        }
        if (puVar14 == (undefined8 *)0x0) goto LAB_01836cb8;
        while (puVar14 != (undefined8 *)puVar9) {
          puVar14 = (undefined8 *)*puVar14;
          bVar4 = true;
          if (puVar14 == (undefined8 *)0x0) goto LAB_01836c40;
        }
        iVar10 = *piVar1;
        if (iVar10 == iVar18) {
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar18 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            lVar15 = *(long *)(lVar15 + 0x18);
            if (lVar15 == 0) goto LAB_01836cb8;
            lVar16 = *(long *)(lVar15 + 0x1a0);
            if ((lVar16 == 0) || (*(int *)(lVar16 + 0xc) == 0)) goto LAB_01836dd4;
            piVar1 = (int *)(lVar16 + 0xc);
            iVar18 = *(int *)(lVar16 + 0xc);
            goto LAB_01836e6c;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        bVar4 = true;
        iVar18 = iVar10;
      } while (iVar10 != 0);
      goto LAB_01836c40;
    }
LAB_01836cb8:
    bVar4 = true;
    cVar2 = *(char *)(param_2 + 0x141);
  }
  else {
    bVar4 = false;
LAB_01836c40:
    cVar2 = *(char *)(param_2 + 0x141);
  }
  goto joined_r0x01836c44;
LAB_01836dd4:
  bVar4 = true;
  goto LAB_01836dd8;
LAB_01836e6c:
  do {
    plVar17 = *(long **)(lVar16 + 0x10);
    plVar11 = (long *)FUN_00a3edb8();
    if (plVar17 == (long *)0x0) goto LAB_01836dd4;
    while (plVar17 != plVar11) {
      plVar17 = (long *)*plVar17;
      bVar4 = true;
      if (plVar17 == (long *)0x0) goto LAB_01836dd8;
    }
    iVar10 = *piVar1;
    if (iVar10 == iVar18) {
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar18 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 != '\0') goto LAB_01836e60;
      lVar16 = *(long *)(lVar16 + 0x18);
      if (lVar16 != 0) {
        fVar21 = (float)*(undefined8 *)(lVar16 + 0x248);
        fVar22 = (float)((ulong)*(undefined8 *)(lVar16 + 0x248) >> 0x20);
        fVar19 = (float)*(undefined8 *)(lVar16 + 0x240);
        fVar20 = (float)((ulong)*(undefined8 *)(lVar16 + 0x240) >> 0x20);
        auVar40._0_4_ = fVar19 * *(float *)(param_2 + 0x20);
        auVar40._4_4_ = fVar20 * *(float *)(param_2 + 0x24);
        auVar40._8_4_ = fVar21 * *(float *)(param_2 + 0x28);
        auVar40._12_4_ = *(float *)(param_2 + 0x2c) * 1.0;
        auVar39 = NEON_ext(auVar40,auVar40,8,1);
        if ((((fVar22 + auVar39._0_4_ + auVar40._0_4_ + auVar39._4_4_ + auVar40._4_4_ <= 0.0) ||
             (auVar39._0_4_ = fVar19 * *(float *)(param_2 + 0x30),
             auVar39._4_4_ = fVar20 * *(float *)(param_2 + 0x34),
             auVar39._8_4_ = fVar21 * *(float *)(param_2 + 0x38),
             auVar39._12_4_ = *(float *)(param_2 + 0x3c) * 1.0,
             auVar40 = NEON_ext(auVar39,auVar39,8,1),
             fVar22 + auVar40._0_4_ + auVar39._0_4_ + auVar40._4_4_ + auVar39._4_4_ <= 0.0)) ||
            (auVar24._0_4_ = fVar19 * *(float *)(param_2 + 0x40),
            auVar24._4_4_ = fVar20 * *(float *)(param_2 + 0x44),
            auVar24._8_4_ = fVar21 * *(float *)(param_2 + 0x48),
            auVar24._12_4_ = *(float *)(param_2 + 0x4c) * 1.0,
            auVar40 = NEON_ext(auVar24,auVar24,8,1),
            fVar22 + auVar40._0_4_ + auVar24._0_4_ + auVar40._4_4_ + auVar24._4_4_ <= 0.0)) ||
           (((auVar25._0_4_ = fVar19 * *(float *)(param_2 + 0x50),
             auVar25._4_4_ = fVar20 * *(float *)(param_2 + 0x54),
             auVar25._8_4_ = fVar21 * *(float *)(param_2 + 0x58),
             auVar25._12_4_ = *(float *)(param_2 + 0x5c) * 1.0,
             auVar40 = NEON_ext(auVar25,auVar25,8,1),
             fVar22 + auVar40._0_4_ + auVar25._0_4_ + auVar40._4_4_ + auVar25._4_4_ <= 0.0 ||
             (auVar26._0_4_ = fVar19 * *(float *)(param_2 + 0x60),
             auVar26._4_4_ = fVar20 * *(float *)(param_2 + 100),
             auVar26._8_4_ = fVar21 * *(float *)(param_2 + 0x68),
             auVar26._12_4_ = *(float *)(param_2 + 0x6c) * 1.0,
             auVar40 = NEON_ext(auVar26,auVar26,8,1),
             fVar22 + auVar40._0_4_ + auVar26._0_4_ + auVar40._4_4_ + auVar26._4_4_ <= 0.0)) ||
            (auVar27._0_4_ = fVar19 * *(float *)(param_2 + 0x70),
            auVar27._4_4_ = fVar20 * *(float *)(param_2 + 0x74),
            auVar27._8_4_ = fVar21 * *(float *)(param_2 + 0x78),
            auVar27._12_4_ = *(float *)(param_2 + 0x7c) * 1.0,
            auVar40 = NEON_ext(auVar27,auVar27,8,1),
            fVar22 + auVar40._0_4_ + auVar27._0_4_ + auVar40._4_4_ + auVar27._4_4_ <= 0.0)))) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (*(char *)(param_2 + 0x140) == '\0') {
          if (!bVar4) goto LAB_01837130;
LAB_01837124:
          bVar4 = true;
        }
        else {
          if ((bVar4) ||
             (((auVar28._0_4_ = fVar19 * *(float *)(param_2 + 0x80),
               auVar28._4_4_ = fVar20 * *(float *)(param_2 + 0x84),
               auVar28._8_4_ = fVar21 * *(float *)(param_2 + 0x88),
               auVar28._12_4_ = *(float *)(param_2 + 0x8c) * 1.0,
               auVar40 = NEON_ext(auVar28,auVar28,8,1),
               0.0 < fVar22 + auVar40._0_4_ + auVar28._0_4_ + auVar40._4_4_ + auVar28._4_4_ &&
               (auVar29._0_4_ = fVar19 * *(float *)(param_2 + 0x90),
               auVar29._4_4_ = fVar20 * *(float *)(param_2 + 0x94),
               auVar29._8_4_ = fVar21 * *(float *)(param_2 + 0x98),
               auVar29._12_4_ = *(float *)(param_2 + 0x9c) * 1.0,
               auVar40 = NEON_ext(auVar29,auVar29,8,1),
               0.0 < fVar22 + auVar40._0_4_ + auVar29._0_4_ + auVar40._4_4_ + auVar29._4_4_)) &&
              ((auVar30._0_4_ = fVar19 * *(float *)(param_2 + 0xa0),
               auVar30._4_4_ = fVar20 * *(float *)(param_2 + 0xa4),
               auVar30._8_4_ = fVar21 * *(float *)(param_2 + 0xa8),
               auVar30._12_4_ = *(float *)(param_2 + 0xac) * 1.0,
               auVar40 = NEON_ext(auVar30,auVar30,8,1),
               0.0 < fVar22 + auVar40._0_4_ + auVar30._0_4_ + auVar40._4_4_ + auVar30._4_4_ &&
               (((auVar31._0_4_ = fVar19 * *(float *)(param_2 + 0xb0),
                 auVar31._4_4_ = fVar20 * *(float *)(param_2 + 0xb4),
                 auVar31._8_4_ = fVar21 * *(float *)(param_2 + 0xb8),
                 auVar31._12_4_ = *(float *)(param_2 + 0xbc) * 1.0,
                 auVar40 = NEON_ext(auVar31,auVar31,8,1),
                 0.0 < fVar22 + auVar40._0_4_ + auVar31._0_4_ + auVar40._4_4_ + auVar31._4_4_ &&
                 (auVar32._0_4_ = fVar19 * *(float *)(param_2 + 0xc0),
                 auVar32._4_4_ = fVar20 * *(float *)(param_2 + 0xc4),
                 auVar32._8_4_ = fVar21 * *(float *)(param_2 + 200),
                 auVar32._12_4_ = *(float *)(param_2 + 0xcc) * 1.0,
                 auVar40 = NEON_ext(auVar32,auVar32,8,1),
                 0.0 < fVar22 + auVar40._0_4_ + auVar32._0_4_ + auVar40._4_4_ + auVar32._4_4_)) &&
                (auVar33._0_4_ = fVar19 * *(float *)(param_2 + 0xd0),
                auVar33._4_4_ = fVar20 * *(float *)(param_2 + 0xd4),
                auVar33._8_4_ = fVar21 * *(float *)(param_2 + 0xd8),
                auVar33._12_4_ = *(float *)(param_2 + 0xdc) * 1.0,
                auVar40 = NEON_ext(auVar33,auVar33,8,1),
                0.0 < fVar22 + auVar40._0_4_ + auVar33._0_4_ + auVar40._4_4_ + auVar33._4_4_))))))))
          goto LAB_01837124;
          auVar34._0_4_ = fVar19 * *(float *)(param_2 + 0xe0);
          auVar34._4_4_ = fVar20 * *(float *)(param_2 + 0xe4);
          auVar34._8_4_ = fVar21 * *(float *)(param_2 + 0xe8);
          auVar34._12_4_ = *(float *)(param_2 + 0xec) * 1.0;
          auVar40 = NEON_ext(auVar34,auVar34,8,1);
          if (((0.0 < fVar22 + auVar40._0_4_ + auVar34._0_4_ + auVar40._4_4_ + auVar34._4_4_) &&
              (auVar35._0_4_ = fVar19 * *(float *)(param_2 + 0xf0),
              auVar35._4_4_ = fVar20 * *(float *)(param_2 + 0xf4),
              auVar35._8_4_ = fVar21 * *(float *)(param_2 + 0xf8),
              auVar35._12_4_ = *(float *)(param_2 + 0xfc) * 1.0,
              auVar40 = NEON_ext(auVar35,auVar35,8,1),
              0.0 < fVar22 + auVar40._0_4_ + auVar35._0_4_ + auVar40._4_4_ + auVar35._4_4_)) &&
             ((auVar36._0_4_ = fVar19 * *(float *)(param_2 + 0x100),
              auVar36._4_4_ = fVar20 * *(float *)(param_2 + 0x104),
              auVar36._8_4_ = fVar21 * *(float *)(param_2 + 0x108),
              auVar36._12_4_ = *(float *)(param_2 + 0x10c) * 1.0,
              auVar40 = NEON_ext(auVar36,auVar36,8,1),
              0.0 < fVar22 + auVar40._0_4_ + auVar36._0_4_ + auVar40._4_4_ + auVar36._4_4_ &&
              ((auVar37._0_4_ = fVar19 * *(float *)(param_2 + 0x110),
               auVar37._4_4_ = fVar20 * *(float *)(param_2 + 0x114),
               auVar37._8_4_ = fVar21 * *(float *)(param_2 + 0x118),
               auVar37._12_4_ = *(float *)(param_2 + 0x11c) * 1.0,
               auVar40 = NEON_ext(auVar37,auVar37,8,1),
               0.0 < fVar22 + auVar40._0_4_ + auVar37._0_4_ + auVar40._4_4_ + auVar37._4_4_ &&
               (auVar38._0_4_ = fVar19 * *(float *)(param_2 + 0x120),
               auVar38._4_4_ = fVar20 * *(float *)(param_2 + 0x124),
               auVar38._8_4_ = fVar21 * *(float *)(param_2 + 0x128),
               auVar38._12_4_ = *(float *)(param_2 + 300) * 1.0,
               auVar40 = NEON_ext(auVar38,auVar38,8,1),
               0.0 < fVar22 + auVar40._0_4_ + auVar38._0_4_ + auVar40._4_4_ + auVar38._4_4_)))))) {
            fVar19 = fVar19 * *(float *)(param_2 + 0x130);
            fVar20 = fVar20 * *(float *)(param_2 + 0x134);
            fVar21 = fVar21 * *(float *)(param_2 + 0x138);
            fVar23 = *(float *)(param_2 + 0x13c) * 1.0;
            auVar6._4_4_ = fVar20;
            auVar6._0_4_ = fVar19;
            auVar6._8_4_ = fVar21;
            auVar6._12_4_ = fVar23;
            auVar7._4_4_ = fVar20;
            auVar7._0_4_ = fVar19;
            auVar7._8_4_ = fVar21;
            auVar7._12_4_ = fVar23;
            auVar40 = NEON_ext(auVar6,auVar7,8,1);
            if (0.0 < fVar22 + auVar40._0_4_ + fVar19 + auVar40._4_4_ + fVar20) goto LAB_01837124;
          }
LAB_01837130:
          bVar4 = false;
        }
        lVar13 = *(long *)(lVar16 + 8);
        piVar1 = (int *)(lVar13 + 0xc);
        do {
          iVar18 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar18 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar18 + -1 == 0) {
          *(undefined8 *)(lVar13 + 0x18) = 0;
          (**(code **)(*(long *)(lVar16 + -0x50) + 0x20))();
        }
        break;
      }
      goto LAB_01836dd4;
    }
    ClearExclusiveLocal();
LAB_01836e60:
    bVar4 = true;
    iVar18 = iVar10;
  } while (iVar10 != 0);
LAB_01836dd8:
  lVar16 = *(long *)(lVar15 + 8);
  piVar1 = (int *)(lVar16 + 0xc);
  do {
    iVar18 = *piVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = iVar18 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar18 + -1 == 0) {
    *(undefined8 *)(lVar16 + 0x18) = 0;
    (**(code **)(*(long *)(lVar15 + -0x50) + 0x20))((long *)(lVar15 + -0x50));
  }
  cVar2 = *(char *)(param_2 + 0x141);
joined_r0x01836c44:
  if (cVar2 == '\0') {
    FUN_015916d0(param_1,0,1,0);
  }
  if (*(char *)(param_1 + 0x27c) == '\0') {
    *(undefined1 *)(param_1 + 0x27c) = 1;
    FUN_01837174(*(undefined8 *)(param_1 + 0x210),param_1);
  }
  if (uVar5 < 2) {
    if (bVar4) {
      if (*(char *)(param_2 + 0x141) != '\0') goto LAB_01836c6c;
      uVar12 = 0;
    }
    else {
      if (*(char *)(param_2 + 0x141) != '\0') goto LAB_01836c6c;
      uVar12 = 1;
    }
    FUN_015916d0(param_1,uVar12,0x80,(int)fVar8);
  }
LAB_01836c6c:
  if (((*(uint *)(param_1 + 0x358) | *(uint *)(param_1 + 0x354)) & 0xffffefff) == 0) {
    return;
  }
  FUN_015916d0(param_1,0,0x1000,(int)DAT_042284a0);
  return;
}


