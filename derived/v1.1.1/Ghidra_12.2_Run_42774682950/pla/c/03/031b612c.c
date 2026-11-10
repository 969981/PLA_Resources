/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031b612c; name: FUN_031b612c
 */


undefined1  [16] FUN_031b612c(ulong param_1,long *param_2,ulong param_3)

{
  uint *puVar1;
  int iVar2;
  long *plVar3;
  undefined4 uVar4;
  byte bVar5;
  undefined8 *puVar6;
  bool bVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  uint uVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  undefined8 *puVar19;
  int *piVar20;
  long lVar21;
  bool bVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  long lVar26;
  undefined4 uVar27;
  float fVar28;
  float fVar30;
  float fVar31;
  float fVar29;
  float fVar34;
  ulong uVar32;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined1 auVar33 [16];
  int iVar39;
  int iVar40;
  int iVar41;
  float fVar42;
  undefined8 uVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  undefined8 uVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  long local_90;
  long lStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70;
  undefined8 uStack_68;
  undefined1 auStack_58 [4];
  int local_54;
  long local_50;
  long lStack_48;
  
  if ((param_3 & 0xffc00000) == 0xff800000) {
    lStack_48 = param_2[0x2d];
    local_50 = param_2[0x2c];
    puVar1 = (uint *)(param_2 + 0x2e);
    lVar17 = param_2[1];
  }
  else {
    plVar16 = (long *)*param_2;
    if ((*(byte *)(plVar16 + 0x14) >> 4 & 1) == 0) {
      lStack_48 = plVar16[0x1b];
      local_50 = plVar16[0x1a];
    }
    else {
      uVar32 = (ulong)*(uint *)(plVar16 + 0x13) & 0x3fffff;
      lVar17 = *(long *)(*(long *)(*plVar16 + 0x38) +
                        (ulong)(*(uint *)(plVar16 + 0x13) >> 0x16) * 0xf0);
      lVar26 = *(long *)(lVar17 + 0x20);
      iVar39 = (int)uVar32;
      iVar41 = iVar39 - *(int *)(lVar26 + 0x30);
      if (iVar39 < *(int *)(lVar26 + 0x30)) {
        iVar41 = iVar39;
        if ((*(int *)(lVar26 + 0x78) == 0) ||
           (iVar41 = *(int *)(*(long *)(lVar26 + 0x70) + uVar32 * 4), iVar41 != -1)) {
          lVar21 = *(long *)(lVar26 + 0xc0);
          goto LAB_031b6338;
        }
        piVar20 = (int *)(*(long *)(lVar26 + 0x28) + uVar32 * 0x14);
      }
      else {
        lVar21 = *(long *)(lVar26 + 0xe0);
LAB_031b6338:
        piVar20 = (int *)(lVar21 + (long)iVar41 * 0x14);
      }
      iVar40 = *(int *)(lVar26 + 0x40);
      iVar41 = *piVar20;
      iVar39 = piVar20[1];
      plVar3 = (long *)(lVar26 + 0x38);
      if (iVar40 <= iVar41) {
        plVar3 = (long *)(lVar26 + 0xf0);
      }
      iVar2 = 0;
      if (iVar40 <= iVar41) {
        iVar2 = iVar40;
      }
      puVar19 = (undefined8 *)(*plVar3 + (long)(iVar41 - iVar2) * 0x10);
      uVar48 = *puVar19;
      plVar3 = (long *)(lVar26 + 0x38);
      if (iVar40 <= iVar39) {
        plVar3 = (long *)(lVar26 + 0xf0);
      }
      iVar41 = 0;
      if (iVar40 <= iVar39) {
        iVar41 = iVar40;
      }
      puVar6 = (undefined8 *)(*plVar3 + (long)(iVar39 - iVar41) * 0x10);
      uVar43 = *puVar6;
      fVar30 = (float)uVar48;
      fVar42 = (float)*(undefined8 *)(lVar17 + 0x60);
      fVar44 = (float)((ulong)*(undefined8 *)(lVar17 + 0x60) >> 0x20);
      fVar45 = (float)*(undefined8 *)(lVar17 + 0x68);
      fVar46 = (float)((ulong)*(undefined8 *)(lVar17 + 0x68) >> 0x20);
      fVar31 = (float)((ulong)uVar48 >> 0x20);
      fVar47 = (float)*(undefined8 *)(lVar17 + 0x70);
      fVar49 = (float)((ulong)*(undefined8 *)(lVar17 + 0x70) >> 0x20);
      fVar50 = (float)*(undefined8 *)(lVar17 + 0x78);
      fVar51 = (float)((ulong)*(undefined8 *)(lVar17 + 0x78) >> 0x20);
      fVar37 = (float)uVar43;
      fVar35 = (float)((ulong)uVar43 >> 0x20);
      fVar29 = (float)puVar19[1];
      fVar52 = (float)*(undefined8 *)(lVar17 + 0x80);
      fVar53 = (float)((ulong)*(undefined8 *)(lVar17 + 0x80) >> 0x20);
      fVar54 = (float)*(undefined8 *)(lVar17 + 0x88);
      fVar55 = (float)((ulong)*(undefined8 *)(lVar17 + 0x88) >> 0x20);
      fVar38 = (float)puVar6[1];
      fVar56 = (float)*(undefined8 *)(lVar17 + 0x90);
      fVar36 = fVar56 + fVar52 * fVar29 + fVar42 * fVar30 + fVar47 * fVar31;
      fVar57 = (float)((ulong)*(undefined8 *)(lVar17 + 0x90) >> 0x20);
      fVar28 = fVar57 + fVar53 * fVar29 + fVar44 * fVar30 + fVar49 * fVar31;
      param_1 = CONCAT44(fVar28,fVar36);
      fVar58 = (float)*(undefined8 *)(lVar17 + 0x98);
      fVar34 = fVar58 + fVar54 * fVar29 + fVar45 * fVar30 + fVar50 * fVar31;
      fVar59 = (float)((ulong)*(undefined8 *)(lVar17 + 0x98) >> 0x20);
      fVar30 = fVar59 + fVar55 * fVar29 + fVar46 * fVar30 + fVar51 * fVar31;
      local_50 = CONCAT44(fVar28 + ((fVar57 + fVar53 * fVar38 + fVar44 * fVar37 + fVar49 * fVar35) -
                                   fVar28) * 0.5,
                          fVar36 + ((fVar56 + fVar52 * fVar38 + fVar42 * fVar37 + fVar47 * fVar35) -
                                   fVar36) * 0.5);
      lStack_48 = CONCAT44(fVar30 + ((fVar59 + fVar55 * fVar38 + fVar46 * fVar37 + fVar51 * fVar35)
                                    - fVar30) * 0.5,
                           fVar34 + ((fVar58 + fVar54 * fVar38 + fVar45 * fVar37 + fVar50 * fVar35)
                                    - fVar34) * 0.5);
    }
    puVar1 = (uint *)((long)plVar16 + 0x9c);
    lVar17 = param_2[1];
  }
  fVar30 = (float)local_50;
  fVar36 = (float)((ulong)local_50 >> 0x20);
  fVar31 = (float)lStack_48;
  if (((lVar17 == 0) || ((int)param_2[3] == -1)) || (*(char *)((long)param_2 + 0x14) == '\0')) {
    iVar41 = (int)param_2[2];
    if (0 < iVar41) {
      puVar19 = (undefined8 *)param_2[0x46];
      fVar28 = fVar30 - (float)*puVar19;
      fVar34 = fVar36 - (float)((ulong)*puVar19 >> 0x20);
      fVar37 = fVar31 - (float)puVar19[1];
      fVar28 = fVar28 * fVar28;
      fVar34 = fVar34 * fVar34;
      fVar37 = fVar37 * fVar37;
      fVar29 = fVar28 + fVar34 + fVar37;
      fVar37 = fVar28 + fVar34 + fVar37;
      uVar48 = CONCAT44(fVar37,fVar29);
      uVar43 = NEON_frsqrte(uVar48,4);
      fVar28 = (float)uVar43;
      fVar34 = (float)((ulong)uVar43 >> 0x20);
      uVar43 = NEON_frsqrts(uVar48,CONCAT44(fVar34 * fVar34,fVar28 * fVar28),4);
      fVar28 = fVar28 * (float)uVar43;
      fVar34 = fVar34 * (float)((ulong)uVar43 >> 0x20);
      uVar48 = NEON_frsqrts(uVar48,CONCAT44(fVar34 * fVar34,fVar28 * fVar28),4);
      iVar39 = -(uint)(fVar29 <= 0.0);
      iVar40 = -(uint)(fVar37 <= 0.0);
      fVar29 = fVar29 * (float)uVar48 * fVar28;
      fVar37 = fVar37 * (float)((ulong)uVar48 >> 0x20) * fVar34;
      uVar32 = NEON_fmin(CONCAT17((byte)((uint)fVar37 >> 0x18) & ~(byte)((uint)iVar40 >> 0x18),
                                  CONCAT16((byte)((uint)fVar37 >> 0x10) &
                                           ~(byte)((uint)iVar40 >> 0x10),
                                           CONCAT15((byte)((uint)fVar37 >> 8) &
                                                    ~(byte)((uint)iVar40 >> 8),
                                                    CONCAT14(SUB41(fVar37,0) & ~(byte)iVar40,
                                                             CONCAT13((byte)((uint)fVar29 >> 0x18) &
                                                                      ~(byte)((uint)iVar39 >> 0x18),
                                                                      CONCAT12((byte)((uint)fVar29
                                                                                     >> 0x10) &
                                                                               ~(byte)((uint)iVar39
                                                                                      >> 0x10),
                                                                               CONCAT11((byte)((uint
                                                  )fVar29 >> 8) & ~(byte)((uint)iVar39 >> 8),
                                                  SUB41(fVar29,0) & ~(byte)iVar39))))))),
                         0x7f7fffee7f7fffee,4);
      auVar8._8_8_ = 0;
      auVar8._0_8_ = uVar32;
      if (iVar41 == 1) {
        return auVar8;
      }
      lVar17 = (long)iVar41 + -1;
      do {
        uVar48 = puVar19[2];
        lVar17 = lVar17 + -1;
        fVar28 = fVar30 - (float)uVar48;
        fVar34 = fVar36 - (float)((ulong)uVar48 >> 0x20);
        fVar37 = fVar31 - (float)puVar19[3];
        fVar28 = fVar28 * fVar28;
        fVar34 = fVar34 * fVar34;
        fVar37 = fVar37 * fVar37;
        fVar29 = fVar28 + fVar34 + fVar37;
        fVar37 = fVar28 + fVar34 + fVar37;
        uVar48 = CONCAT44(fVar37,fVar29);
        uVar43 = NEON_frsqrte(uVar48,4);
        fVar28 = (float)uVar43;
        fVar34 = (float)((ulong)uVar43 >> 0x20);
        uVar43 = NEON_frsqrts(uVar48,CONCAT44(fVar34 * fVar34,fVar28 * fVar28),4);
        fVar28 = fVar28 * (float)uVar43;
        fVar34 = fVar34 * (float)((ulong)uVar43 >> 0x20);
        uVar48 = NEON_frsqrts(uVar48,CONCAT44(fVar34 * fVar34,fVar28 * fVar28),4);
        iVar41 = -(uint)(fVar29 <= 0.0);
        iVar39 = -(uint)(fVar37 <= 0.0);
        fVar29 = fVar29 * (float)uVar48 * fVar28;
        fVar37 = fVar37 * (float)((ulong)uVar48 >> 0x20) * fVar34;
        uVar32 = NEON_fmin(uVar32,CONCAT17((byte)((uint)fVar37 >> 0x18) &
                                           ~(byte)((uint)iVar39 >> 0x18),
                                           CONCAT16((byte)((uint)fVar37 >> 0x10) &
                                                    ~(byte)((uint)iVar39 >> 0x10),
                                                    CONCAT15((byte)((uint)fVar37 >> 8) &
                                                             ~(byte)((uint)iVar39 >> 8),
                                                             CONCAT14(SUB41(fVar37,0) &
                                                                      ~(byte)iVar39,
                                                                      CONCAT13((byte)((uint)fVar29
                                                                                     >> 0x18) &
                                                                               ~(byte)((uint)iVar41
                                                                                      >> 0x18),
                                                                               CONCAT12((byte)((uint
                                                  )fVar29 >> 0x10) & ~(byte)((uint)iVar41 >> 0x10),
                                                  CONCAT11((byte)((uint)fVar29 >> 8) &
                                                           ~(byte)((uint)iVar41 >> 8),
                                                           SUB41(fVar29,0) & ~(byte)iVar41))))))),4)
        ;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = uVar32;
        puVar19 = puVar19 + 2;
      } while (lVar17 != 0);
      return auVar9;
    }
    goto LAB_031b67c0;
  }
  uVar25 = *puVar1;
  uVar15 = (uint)*(short *)(*param_2 + 0x24);
  uVar24 = uVar15 | *(int *)(*param_2 + 0x278) << 0x16;
  if (uVar15 == 0xffffffff) {
    uVar24 = 0xffffffff;
  }
  if (uVar25 == 0xffffffff) {
    uVar25 = 0xffffffff;
  }
  else {
    uVar15 = uVar25 & 0x3fffff;
    lVar17 = *(long *)(*(long *)(*(long *)(param_2[0x44] + 0x38) + (ulong)(uVar25 >> 0x16) * 0xf0) +
                      0x20);
    uVar23 = uVar15 - *(int *)(lVar17 + 0x20);
    if ((int)uVar15 < *(int *)(lVar17 + 0x20)) {
      if (*(int *)(lVar17 + 0x98) == 0) {
        uVar23 = uVar15;
LAB_031b62d8:
        lVar17 = *(long *)(lVar17 + 0xb0);
        goto LAB_031b63e8;
      }
      uVar23 = *(uint *)(*(long *)(lVar17 + 0x90) + (ulong)uVar15 * 4);
      if (uVar23 != 0xffffffff) goto LAB_031b62d8;
      lVar17 = *(long *)(lVar17 + 0x18) + (ulong)uVar15 * 0x10;
    }
    else {
      lVar17 = *(long *)(lVar17 + 0xd0);
LAB_031b63e8:
      lVar17 = lVar17 + (long)(int)uVar23 * 0x10;
    }
    uVar25 = uVar25 & 0xffc00000 | (int)*(short *)(lVar17 + 0xc);
    if ((int)*(short *)(lVar17 + 0xc) == 0xffffffff) {
      uVar25 = 0xffffffff;
    }
  }
  iVar41 = (int)param_2[2];
  if (0 < iVar41) {
    lVar17 = 0;
    param_1 = 0x7f7fffee7f7fffee;
    bVar22 = false;
    do {
      uVar15 = *(uint *)((long)param_2 + lVar17 * 4 + 0x1c);
      if (uVar15 == uVar25 || uVar15 == uVar24) {
        puVar19 = (undefined8 *)(param_2[0x46] + lVar17 * 0x10);
        uVar48 = *puVar19;
        bVar22 = true;
        fVar28 = fVar30 - (float)uVar48;
        fVar34 = fVar36 - (float)((ulong)uVar48 >> 0x20);
        fVar37 = fVar31 - (float)puVar19[1];
        fVar28 = fVar28 * fVar28;
        fVar34 = fVar34 * fVar34;
        fVar37 = fVar37 * fVar37;
        fVar29 = fVar28 + fVar34 + fVar37;
        fVar37 = fVar28 + fVar34 + fVar37;
        uVar48 = CONCAT44(fVar37,fVar29);
        uVar43 = NEON_frsqrte(uVar48,4);
        fVar28 = (float)uVar43;
        fVar34 = (float)((ulong)uVar43 >> 0x20);
        uVar43 = NEON_frsqrts(uVar48,CONCAT44(fVar34 * fVar34,fVar28 * fVar28),4);
        fVar28 = fVar28 * (float)uVar43;
        fVar34 = fVar34 * (float)((ulong)uVar43 >> 0x20);
        uVar48 = NEON_frsqrts(uVar48,CONCAT44(fVar34 * fVar34,fVar28 * fVar28),4);
        iVar39 = -(uint)(fVar29 <= 0.0);
        iVar40 = -(uint)(fVar37 <= 0.0);
        fVar29 = fVar29 * (float)uVar48 * fVar28;
        fVar37 = fVar37 * (float)((ulong)uVar48 >> 0x20) * fVar34;
        param_1 = NEON_fmin(param_1,CONCAT17((byte)((uint)fVar37 >> 0x18) &
                                             ~(byte)((uint)iVar40 >> 0x18),
                                             CONCAT16((byte)((uint)fVar37 >> 0x10) &
                                                      ~(byte)((uint)iVar40 >> 0x10),
                                                      CONCAT15((byte)((uint)fVar37 >> 8) &
                                                               ~(byte)((uint)iVar40 >> 8),
                                                               CONCAT14(SUB41(fVar37,0) &
                                                                        ~(byte)iVar40,
                                                                        CONCAT13((byte)((uint)fVar29
                                                                                       >> 0x18) &
                                                                                 ~(byte)((uint)
                                                  iVar39 >> 0x18),
                                                  CONCAT12((byte)((uint)fVar29 >> 0x10) &
                                                           ~(byte)((uint)iVar39 >> 0x10),
                                                           CONCAT11((byte)((uint)fVar29 >> 8) &
                                                                    ~(byte)((uint)iVar39 >> 8),
                                                                    SUB41(fVar29,0) & ~(byte)iVar39)
                                                          )))))),4);
      }
      auVar33._8_8_ = 0;
      auVar33._0_8_ = param_1;
      lVar17 = lVar17 + 1;
    } while (iVar41 != lVar17);
    if (bVar22) {
      return auVar33;
    }
  }
  if ((uVar24 == 0xffffffff) || (uVar25 == 0xffffffff)) {
    if (iVar41 < 1) {
      return ZEXT816(0x7f7fffee7f7fffee);
    }
    puVar19 = (undefined8 *)param_2[0x46];
    fVar28 = fVar30 - (float)*puVar19;
    fVar34 = fVar36 - (float)((ulong)*puVar19 >> 0x20);
    fVar37 = fVar31 - (float)puVar19[1];
    fVar28 = fVar28 * fVar28;
    fVar34 = fVar34 * fVar34;
    fVar37 = fVar37 * fVar37;
    fVar29 = fVar28 + fVar34 + fVar37;
    fVar37 = fVar28 + fVar34 + fVar37;
    uVar48 = CONCAT44(fVar37,fVar29);
    uVar43 = NEON_frsqrte(uVar48,4);
    fVar28 = (float)uVar43;
    fVar34 = (float)((ulong)uVar43 >> 0x20);
    uVar43 = NEON_frsqrts(uVar48,CONCAT44(fVar34 * fVar34,fVar28 * fVar28),4);
    fVar28 = fVar28 * (float)uVar43;
    fVar34 = fVar34 * (float)((ulong)uVar43 >> 0x20);
    uVar48 = NEON_frsqrts(uVar48,CONCAT44(fVar34 * fVar34,fVar28 * fVar28),4);
    iVar39 = -(uint)(fVar29 <= 0.0);
    iVar40 = -(uint)(fVar37 <= 0.0);
    fVar29 = fVar29 * (float)uVar48 * fVar28;
    fVar37 = fVar37 * (float)((ulong)uVar48 >> 0x20) * fVar34;
    uVar32 = NEON_fmin(CONCAT17((byte)((uint)fVar37 >> 0x18) & ~(byte)((uint)iVar40 >> 0x18),
                                CONCAT16((byte)((uint)fVar37 >> 0x10) &
                                         ~(byte)((uint)iVar40 >> 0x10),
                                         CONCAT15((byte)((uint)fVar37 >> 8) &
                                                  ~(byte)((uint)iVar40 >> 8),
                                                  CONCAT14(SUB41(fVar37,0) & ~(byte)iVar40,
                                                           CONCAT13((byte)((uint)fVar29 >> 0x18) &
                                                                    ~(byte)((uint)iVar39 >> 0x18),
                                                                    CONCAT12((byte)((uint)fVar29 >>
                                                                                   0x10) &
                                                                             ~(byte)((uint)iVar39 >>
                                                                                    0x10),
                                                                             CONCAT11((byte)((uint)
                                                  fVar29 >> 8) & ~(byte)((uint)iVar39 >> 8),
                                                  SUB41(fVar29,0) & ~(byte)iVar39))))))),
                       0x7f7fffee7f7fffee,4);
    auVar13._8_8_ = 0;
    auVar13._0_8_ = uVar32;
    if (iVar41 == 1) {
      return auVar13;
    }
    lVar17 = (long)iVar41 + -1;
    do {
      uVar48 = puVar19[2];
      lVar17 = lVar17 + -1;
      fVar28 = fVar30 - (float)uVar48;
      fVar34 = fVar36 - (float)((ulong)uVar48 >> 0x20);
      fVar37 = fVar31 - (float)puVar19[3];
      fVar28 = fVar28 * fVar28;
      fVar34 = fVar34 * fVar34;
      fVar37 = fVar37 * fVar37;
      fVar29 = fVar28 + fVar34 + fVar37;
      fVar37 = fVar28 + fVar34 + fVar37;
      uVar48 = CONCAT44(fVar37,fVar29);
      uVar43 = NEON_frsqrte(uVar48,4);
      fVar28 = (float)uVar43;
      fVar34 = (float)((ulong)uVar43 >> 0x20);
      uVar43 = NEON_frsqrts(uVar48,CONCAT44(fVar34 * fVar34,fVar28 * fVar28),4);
      fVar28 = fVar28 * (float)uVar43;
      fVar34 = fVar34 * (float)((ulong)uVar43 >> 0x20);
      uVar48 = NEON_frsqrts(uVar48,CONCAT44(fVar34 * fVar34,fVar28 * fVar28),4);
      iVar41 = -(uint)(fVar29 <= 0.0);
      iVar39 = -(uint)(fVar37 <= 0.0);
      fVar29 = fVar29 * (float)uVar48 * fVar28;
      fVar37 = fVar37 * (float)((ulong)uVar48 >> 0x20) * fVar34;
      uVar32 = NEON_fmin(uVar32,CONCAT17((byte)((uint)fVar37 >> 0x18) &
                                         ~(byte)((uint)iVar39 >> 0x18),
                                         CONCAT16((byte)((uint)fVar37 >> 0x10) &
                                                  ~(byte)((uint)iVar39 >> 0x10),
                                                  CONCAT15((byte)((uint)fVar37 >> 8) &
                                                           ~(byte)((uint)iVar39 >> 8),
                                                           CONCAT14(SUB41(fVar37,0) & ~(byte)iVar39,
                                                                    CONCAT13((byte)((uint)fVar29 >>
                                                                                   0x18) &
                                                                             ~(byte)((uint)iVar41 >>
                                                                                    0x18),
                                                                             CONCAT12((byte)((uint)
                                                  fVar29 >> 0x10) & ~(byte)((uint)iVar41 >> 0x10),
                                                  CONCAT11((byte)((uint)fVar29 >> 8) &
                                                           ~(byte)((uint)iVar41 >> 8),
                                                           SUB41(fVar29,0) & ~(byte)iVar41))))))),4)
      ;
      auVar14._8_8_ = 0;
      auVar14._0_8_ = uVar32;
      puVar19 = puVar19 + 2;
    } while (lVar17 != 0);
    return auVar14;
  }
  local_54 = -1;
  uVar32 = FUN_031b6ab8(param_1,param_2,uVar25,&local_54,auStack_58);
  if ((uVar32 & 1) == 0) {
    if ((uVar25 == uVar24) ||
       (uVar32 = FUN_031b6ab8(param_2,uVar24,&local_54,auStack_58), (uVar32 & 1) == 0)) {
      if (*(int *)((long)param_2 + 0x1ac) < (int)param_2[0x35]) {
        plVar16 = param_2 + 0x30;
        lVar17 = FUN_031b3624(param_2 + 0x32,uVar25);
        if ((*(byte *)(lVar17 + 0xe) >> 1 & 1) != 0) {
LAB_031b67fc:
          lVar26 = param_2[0x32];
          lVar17 = lVar26 + (long)*(short *)(lVar17 + 0xc) * 0x10;
          iVar41 = (int)param_2[2];
          uVar4 = *(undefined4 *)(lVar17 + 8);
          if (iVar41 == 1) {
            fVar34 = (float)FUN_031b71a4(plVar16,uVar4);
            uVar32 = 0;
            uVar27 = *(undefined4 *)((long)param_2 + 0x1c);
            fVar28 = fVar34;
          }
          else {
            lVar21 = (long)*(short *)(lVar17 + 0xc);
            if ((lVar21 == -1) || (lVar18 = lVar26 + lVar21 * 0x10, lVar18 == 0)) {
              piVar20 = (int *)(lVar17 + 8);
              fVar28 = 0.0;
              fVar29 = 0.0;
            }
            else {
              if ((*(byte *)(lVar26 + lVar21 * 0x10 + 0xe) >> 2 & 1) == 0) {
                fVar28 = 0.0;
                fVar29 = 0.0;
                uVar27 = uVar4;
                do {
                  lVar17 = lVar18;
                  FUN_031b60b8(param_2,uVar27,&local_70);
                  FUN_031b60b8(param_2,*(undefined4 *)(lVar17 + 8),&local_80);
                  fVar34 = (float)local_70 - (float)local_80;
                  fVar35 = (float)((ulong)local_70 >> 0x20) - (float)((ulong)local_80 >> 0x20);
                  lVar26 = (long)*(short *)(lVar17 + 0xc);
                  fVar34 = fVar34 * fVar34;
                  fVar35 = fVar35 * fVar35;
                  fVar38 = ((float)uStack_68 - (float)uStack_78) *
                           ((float)uStack_68 - (float)uStack_78);
                  fVar37 = fVar34 + fVar35 + fVar38;
                  fVar38 = fVar34 + fVar35 + fVar38;
                  uVar48 = CONCAT44(fVar38,fVar37);
                  uVar43 = NEON_frsqrte(uVar48,4);
                  fVar34 = (float)uVar43;
                  fVar35 = (float)((ulong)uVar43 >> 0x20);
                  uVar43 = NEON_frsqrts(uVar48,CONCAT44(fVar35 * fVar35,fVar34 * fVar34),4);
                  fVar34 = fVar34 * (float)uVar43;
                  fVar35 = fVar35 * (float)((ulong)uVar43 >> 0x20);
                  uVar48 = NEON_frsqrts(uVar48,CONCAT44(fVar35 * fVar35,fVar34 * fVar34),4);
                  iVar41 = -(uint)(fVar37 <= 0.0);
                  iVar39 = -(uint)(fVar38 <= 0.0);
                  fVar37 = fVar37 * (float)uVar48 * fVar34;
                  fVar38 = fVar38 * (float)((ulong)uVar48 >> 0x20) * fVar35;
                  fVar34 = (float)CONCAT13((byte)((uint)fVar37 >> 0x18) &
                                           ~(byte)((uint)iVar41 >> 0x18),
                                           CONCAT12((byte)((uint)fVar37 >> 0x10) &
                                                    ~(byte)((uint)iVar41 >> 0x10),
                                                    CONCAT11((byte)((uint)fVar37 >> 8) &
                                                             ~(byte)((uint)iVar41 >> 8),
                                                             SUB41(fVar37,0) & ~(byte)iVar41)));
                  fVar28 = fVar28 + fVar34;
                  fVar29 = fVar29 + (float)(CONCAT17((byte)((uint)fVar38 >> 0x18) &
                                                     ~(byte)((uint)iVar39 >> 0x18),
                                                     CONCAT16((byte)((uint)fVar38 >> 0x10) &
                                                              ~(byte)((uint)iVar39 >> 0x10),
                                                              CONCAT15((byte)((uint)fVar38 >> 8) &
                                                                       ~(byte)((uint)iVar39 >> 8),
                                                                       CONCAT14(SUB41(fVar38,0) &
                                                                                ~(byte)iVar39,fVar34
                                                                               )))) >> 0x20);
                  if (lVar26 == -1) {
LAB_031b6a78:
                    piVar20 = (int *)(lVar17 + 8);
                    iVar41 = (int)param_2[2];
                    goto LAB_031b6920;
                  }
                  lVar18 = param_2[0x32] + lVar26 * 0x10;
                  if (lVar18 == 0) goto LAB_031b6a78;
                  uVar27 = *(undefined4 *)(lVar17 + 8);
                } while ((*(byte *)(param_2[0x32] + lVar26 * 0x10 + 0xe) >> 2 & 1) == 0);
                iVar41 = (int)param_2[2];
              }
              else {
                fVar28 = 0.0;
                fVar29 = 0.0;
              }
              piVar20 = (int *)(lVar18 + 8);
            }
LAB_031b6920:
            uVar27 = *(undefined4 *)(lVar17 + 8);
            if (iVar41 < 1) {
              uVar32 = 0xffffffffffffffff;
            }
            else {
              uVar32 = 0;
              do {
                if (*(int *)((long)param_2 + uVar32 * 4 + 0x1c) == *piVar20) goto LAB_031b6978;
                uVar32 = uVar32 + 1;
              } while ((long)iVar41 != uVar32);
              uVar32 = 0xffffffffffffffff;
            }
LAB_031b6978:
            fVar37 = (float)FUN_031b71a4(plVar16,uVar4);
            uVar48 = NEON_fmov(0x40400000,4);
            fVar37 = fVar37 * (float)uVar48;
            uVar48 = NEON_fmov(0x3e800000,4);
            fVar34 = (fVar28 + fVar37) * (float)uVar48;
            fVar28 = (fVar29 + fVar37) * (float)((ulong)uVar48 >> 0x20);
          }
          FUN_031b60b8(param_2,uVar4,&local_70);
          FUN_031b60b8(param_2,uVar27,&local_80);
          fVar30 = fVar30 - (float)local_70;
          fVar36 = fVar36 - (float)((ulong)local_70 >> 0x20);
          fVar30 = fVar30 * fVar30;
          fVar36 = fVar36 * fVar36;
          fVar29 = (fVar31 - (float)uStack_68) * (fVar31 - (float)uStack_68);
          fVar31 = fVar30 + fVar36 + fVar29;
          fVar29 = fVar30 + fVar36 + fVar29;
          uVar48 = CONCAT44(fVar29,fVar31);
          uVar43 = NEON_frsqrte(uVar48,4);
          fVar30 = (float)uVar43;
          fVar36 = (float)((ulong)uVar43 >> 0x20);
          uVar43 = NEON_frsqrts(uVar48,CONCAT44(fVar36 * fVar36,fVar30 * fVar30),4);
          fVar30 = fVar30 * (float)uVar43;
          fVar36 = fVar36 * (float)((ulong)uVar43 >> 0x20);
          uVar48 = NEON_frsqrts(uVar48,CONCAT44(fVar36 * fVar36,fVar30 * fVar30),4);
          iVar41 = -(uint)(fVar31 <= 0.0);
          iVar39 = -(uint)(fVar29 <= 0.0);
          fVar31 = fVar31 * (float)uVar48 * fVar30;
          fVar29 = fVar29 * (float)((ulong)uVar48 >> 0x20) * fVar36;
          puVar19 = (undefined8 *)
                    (param_2[0x46] +
                    (-(uVar32 >> 0x1f & 1) & 0xfffffff000000000 | (uVar32 & 0xffffffff) << 4));
          uVar48 = *puVar19;
          fVar30 = (float)CONCAT13((byte)((uint)fVar31 >> 0x18) & ~(byte)((uint)iVar41 >> 0x18),
                                   CONCAT12((byte)((uint)fVar31 >> 0x10) &
                                            ~(byte)((uint)iVar41 >> 0x10),
                                            CONCAT11((byte)((uint)fVar31 >> 8) &
                                                     ~(byte)((uint)iVar41 >> 8),
                                                     SUB41(fVar31,0) & ~(byte)iVar41)));
          fVar36 = (float)local_80 - (float)uVar48;
          fVar37 = (float)((ulong)local_80 >> 0x20) - (float)((ulong)uVar48 >> 0x20);
          uStack_78._0_4_ = (float)uStack_78 - (float)puVar19[1];
          fVar36 = fVar36 * fVar36;
          fVar37 = fVar37 * fVar37;
          uStack_78._0_4_ = (float)uStack_78 * (float)uStack_78;
          fVar31 = fVar36 + fVar37 + (float)uStack_78;
          uStack_78._0_4_ = fVar36 + fVar37 + (float)uStack_78;
          uVar48 = CONCAT44((float)uStack_78,fVar31);
          uVar43 = NEON_frsqrte(uVar48,4);
          fVar36 = (float)uVar43;
          fVar37 = (float)((ulong)uVar43 >> 0x20);
          uVar43 = NEON_frsqrts(uVar48,CONCAT44(fVar37 * fVar37,fVar36 * fVar36),4);
          fVar36 = fVar36 * (float)uVar43;
          fVar37 = fVar37 * (float)((ulong)uVar43 >> 0x20);
          uVar48 = NEON_frsqrts(uVar48,CONCAT44(fVar37 * fVar37,fVar36 * fVar36),4);
          iVar41 = -(uint)(fVar31 <= 0.0);
          iVar40 = -(uint)((float)uStack_78 <= 0.0);
          fVar31 = fVar31 * (float)uVar48 * fVar36;
          uStack_78._0_4_ = (float)uStack_78 * (float)((ulong)uVar48 >> 0x20) * fVar37;
          fVar36 = (float)CONCAT13((byte)((uint)fVar31 >> 0x18) & ~(byte)((uint)iVar41 >> 0x18),
                                   CONCAT12((byte)((uint)fVar31 >> 0x10) &
                                            ~(byte)((uint)iVar41 >> 0x10),
                                            CONCAT11((byte)((uint)fVar31 >> 8) &
                                                     ~(byte)((uint)iVar41 >> 8),
                                                     SUB41(fVar31,0) & ~(byte)iVar41)));
          auVar12._4_4_ =
               fVar28 + (float)(CONCAT17((byte)((uint)fVar29 >> 0x18) &
                                         ~(byte)((uint)iVar39 >> 0x18),
                                         CONCAT16((byte)((uint)fVar29 >> 0x10) &
                                                  ~(byte)((uint)iVar39 >> 0x10),
                                                  CONCAT15((byte)((uint)fVar29 >> 8) &
                                                           ~(byte)((uint)iVar39 >> 8),
                                                           CONCAT14(SUB41(fVar29,0) & ~(byte)iVar39,
                                                                    fVar30)))) >> 0x20) +
               (float)(CONCAT17((byte)((uint)(float)uStack_78 >> 0x18) &
                                ~(byte)((uint)iVar40 >> 0x18),
                                CONCAT16((byte)((uint)(float)uStack_78 >> 0x10) &
                                         ~(byte)((uint)iVar40 >> 0x10),
                                         CONCAT15((byte)((uint)(float)uStack_78 >> 8) &
                                                  ~(byte)((uint)iVar40 >> 8),
                                                  CONCAT14(SUB41((float)uStack_78,0) & ~(byte)iVar40
                                                           ,fVar36)))) >> 0x20);
          auVar12._0_4_ = fVar34 + fVar30 + fVar36;
          auVar12._8_8_ = 0;
          return auVar12;
        }
        lVar26 = tpidr_el0;
        if (*(long *)(lVar26 + 0x38d490) == 0) {
          lVar21 = FUN_0333d16c(0,1);
          *(long *)(lVar26 + 0x38d490) = lVar21;
          lVar26 = *(long *)(lVar21 + 0x10);
        }
        else {
          lVar26 = *(long *)(*(long *)(lVar26 + 0x38d490) + 0x10);
        }
        if (lVar26 != 0) {
          FUN_032d5af0(lVar26,"TtAbstractSearch",0x10);
        }
        bVar5 = *(byte *)(lVar17 + 0xe);
        local_70 = lVar26;
        while ((bVar5 >> 1 & 1) == 0) {
          if ((int)param_2[0x3f] == 0) {
            bVar22 = false;
            goto joined_r0x031b6a64;
          }
          if ((*(int *)((long)param_2 + 0x1fc) <= (int)param_2[0x3f]) ||
             ((int)param_2[0x35] <= *(int *)((long)param_2 + 0x1ac))) {
            bVar7 = true;
            bVar22 = true;
            goto joined_r0x031b696c;
          }
          FUN_031b7794(plVar16);
          bVar5 = *(byte *)(lVar17 + 0xe);
        }
        bVar22 = true;
joined_r0x031b6a64:
        bVar7 = false;
joined_r0x031b696c:
        if (lVar26 != 0) {
          FUN_032d5b34(lVar26,&DAT_0390f40e);
        }
        if (!bVar22) {
          return ZEXT816(0x7f7fffee);
        }
        if (!bVar7) goto LAB_031b67fc;
      }
      iVar41 = (int)param_2[2];
      if (0 < iVar41) {
        puVar19 = (undefined8 *)param_2[0x46];
        fVar28 = fVar30 - (float)*puVar19;
        fVar34 = fVar36 - (float)((ulong)*puVar19 >> 0x20);
        fVar37 = fVar31 - (float)puVar19[1];
        fVar28 = fVar28 * fVar28;
        fVar34 = fVar34 * fVar34;
        fVar37 = fVar37 * fVar37;
        fVar29 = fVar28 + fVar34 + fVar37;
        fVar37 = fVar28 + fVar34 + fVar37;
        uVar48 = CONCAT44(fVar37,fVar29);
        uVar43 = NEON_frsqrte(uVar48,4);
        fVar28 = (float)uVar43;
        fVar34 = (float)((ulong)uVar43 >> 0x20);
        uVar43 = NEON_frsqrts(uVar48,CONCAT44(fVar34 * fVar34,fVar28 * fVar28),4);
        fVar28 = fVar28 * (float)uVar43;
        fVar34 = fVar34 * (float)((ulong)uVar43 >> 0x20);
        uVar48 = NEON_frsqrts(uVar48,CONCAT44(fVar34 * fVar34,fVar28 * fVar28),4);
        iVar39 = -(uint)(fVar29 <= 0.0);
        iVar40 = -(uint)(fVar37 <= 0.0);
        fVar29 = fVar29 * (float)uVar48 * fVar28;
        fVar37 = fVar37 * (float)((ulong)uVar48 >> 0x20) * fVar34;
        uVar32 = NEON_fmin(CONCAT17((byte)((uint)fVar37 >> 0x18) & ~(byte)((uint)iVar40 >> 0x18),
                                    CONCAT16((byte)((uint)fVar37 >> 0x10) &
                                             ~(byte)((uint)iVar40 >> 0x10),
                                             CONCAT15((byte)((uint)fVar37 >> 8) &
                                                      ~(byte)((uint)iVar40 >> 8),
                                                      CONCAT14(SUB41(fVar37,0) & ~(byte)iVar40,
                                                               CONCAT13((byte)((uint)fVar29 >> 0x18)
                                                                        & ~(byte)((uint)iVar39 >>
                                                                                 0x18),
                                                                        CONCAT12((byte)((uint)fVar29
                                                                                       >> 0x10) &
                                                                                 ~(byte)((uint)
                                                  iVar39 >> 0x10),
                                                  CONCAT11((byte)((uint)fVar29 >> 8) &
                                                           ~(byte)((uint)iVar39 >> 8),
                                                           SUB41(fVar29,0) & ~(byte)iVar39))))))),
                           0x7f7fffee7f7fffee,4);
        auVar10._8_8_ = 0;
        auVar10._0_8_ = uVar32;
        if (iVar41 == 1) {
          return auVar10;
        }
        lVar17 = (long)iVar41 + -1;
        do {
          uVar48 = puVar19[2];
          lVar17 = lVar17 + -1;
          fVar28 = fVar30 - (float)uVar48;
          fVar34 = fVar36 - (float)((ulong)uVar48 >> 0x20);
          fVar37 = fVar31 - (float)puVar19[3];
          fVar28 = fVar28 * fVar28;
          fVar34 = fVar34 * fVar34;
          fVar37 = fVar37 * fVar37;
          fVar29 = fVar28 + fVar34 + fVar37;
          fVar37 = fVar28 + fVar34 + fVar37;
          uVar48 = CONCAT44(fVar37,fVar29);
          uVar43 = NEON_frsqrte(uVar48,4);
          fVar28 = (float)uVar43;
          fVar34 = (float)((ulong)uVar43 >> 0x20);
          uVar43 = NEON_frsqrts(uVar48,CONCAT44(fVar34 * fVar34,fVar28 * fVar28),4);
          fVar28 = fVar28 * (float)uVar43;
          fVar34 = fVar34 * (float)((ulong)uVar43 >> 0x20);
          uVar48 = NEON_frsqrts(uVar48,CONCAT44(fVar34 * fVar34,fVar28 * fVar28),4);
          iVar41 = -(uint)(fVar29 <= 0.0);
          iVar39 = -(uint)(fVar37 <= 0.0);
          fVar29 = fVar29 * (float)uVar48 * fVar28;
          fVar37 = fVar37 * (float)((ulong)uVar48 >> 0x20) * fVar34;
          uVar32 = NEON_fmin(uVar32,CONCAT17((byte)((uint)fVar37 >> 0x18) &
                                             ~(byte)((uint)iVar39 >> 0x18),
                                             CONCAT16((byte)((uint)fVar37 >> 0x10) &
                                                      ~(byte)((uint)iVar39 >> 0x10),
                                                      CONCAT15((byte)((uint)fVar37 >> 8) &
                                                               ~(byte)((uint)iVar39 >> 8),
                                                               CONCAT14(SUB41(fVar37,0) &
                                                                        ~(byte)iVar39,
                                                                        CONCAT13((byte)((uint)fVar29
                                                                                       >> 0x18) &
                                                                                 ~(byte)((uint)
                                                  iVar41 >> 0x18),
                                                  CONCAT12((byte)((uint)fVar29 >> 0x10) &
                                                           ~(byte)((uint)iVar41 >> 0x10),
                                                           CONCAT11((byte)((uint)fVar29 >> 8) &
                                                                    ~(byte)((uint)iVar41 >> 8),
                                                                    SUB41(fVar29,0) & ~(byte)iVar41)
                                                          )))))),4);
          auVar11._8_8_ = 0;
          auVar11._0_8_ = uVar32;
          puVar19 = puVar19 + 2;
        } while (lVar17 != 0);
        return auVar11;
      }
LAB_031b67c0:
      return ZEXT816(0x7f7fffee7f7fffee);
    }
  }
  else {
    uVar24 = uVar25;
  }
  FUN_031b60b8(param_2,uVar24,&local_70);
  lVar17 = (long)local_54;
  puVar19 = (undefined8 *)(param_2[0x46] + lVar17 * 0x10);
  local_80 = *puVar19;
  uStack_78 = puVar19[1];
  local_90 = param_2[lVar17 * 2 + 0xc];
  lStack_88 = param_2[lVar17 * 2 + 0xd];
  auVar33 = FUN_031b70d0(&local_50,&local_80,&local_90);
  return auVar33;
}


