/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031e83c4; name: FUN_031e83c4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_031e83c4(long param_1,int *param_2,long param_3,long param_4,undefined8 *param_5,
                 int param_6)

{
  int iVar1;
  char cVar2;
  undefined *puVar3;
  bool bVar4;
  undefined4 uVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  int iVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  undefined8 *puVar15;
  long lVar16;
  int *piVar17;
  long lVar18;
  long lVar19;
  int *piVar20;
  float fVar21;
  float fVar22;
  int iVar23;
  uint uVar24;
  float fVar25;
  int iVar26;
  float fVar27;
  float fVar28;
  int iVar29;
  float fVar31;
  undefined8 uVar30;
  int iVar32;
  int iVar34;
  undefined8 uVar33;
  int iVar35;
  undefined8 uVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar41;
  undefined1 auVar40 [16];
  float fVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  undefined8 uVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  int *local_70;
  undefined8 uStack_68;
  
  iVar1 = *(int *)(param_1 + 0xc0);
  iVar9 = *(int *)(param_1 + 0x98);
  lVar16 = *(long *)(param_1 + 0x90);
  if (iVar1 <= *param_2 + 1) {
    iVar1 = *param_2 + 1;
  }
  iVar23 = iVar9 + 1;
  *(int *)(param_1 + 0xc0) = iVar1;
  if ((int)(*(uint *)(param_1 + 0x9c) & 0x3fffffff) <= iVar9) {
    lVar16 = FUN_031ee8d4(PTR_PTR_0434a080,iVar23,lVar16);
    iVar9 = *(int *)(param_1 + 0x98);
    *(long *)(param_1 + 0x90) = lVar16;
  }
  *(int *)(param_1 + 0x98) = iVar23;
  uVar36 = DAT_0388a148;
  uVar33 = DAT_0388a140;
  uVar30 = _UNK_03889a88;
  uVar50 = _DAT_03889a80;
  piVar17 = (int *)(lVar16 + (long)iVar9 * 0xd0);
  piVar17[4] = 0;
  piVar17[5] = 0;
  plVar13 = (long *)(piVar17 + 2);
  *plVar13 = 0;
  *(undefined8 *)(piVar17 + 10) = uVar30;
  *(undefined8 *)(piVar17 + 8) = uVar50;
  *(undefined8 *)(piVar17 + 0xe) = uVar36;
  *(undefined8 *)(piVar17 + 0xc) = uVar33;
  uVar36 = _UNK_0388a138;
  uVar33 = _DAT_0388a130;
  uVar30 = _UNK_03888d18;
  uVar50 = _DAT_03888d10;
  piVar17[0x2a] = 0;
  piVar17[0x2b] = 0;
  piVar17[0x18] = 0;
  piVar17[0x19] = 0;
  piVar17[0x1a] = 0;
  piVar17[0x1b] = 0;
  piVar17[0x1c] = 0;
  piVar17[0x1d] = 0;
  piVar17[0x1e] = 0;
  piVar17[0x1f] = 0;
  *(undefined8 *)(piVar17 + 0x12) = uVar30;
  *(undefined8 *)(piVar17 + 0x10) = uVar50;
  *(undefined8 *)(piVar17 + 0x16) = uVar36;
  *(undefined8 *)(piVar17 + 0x14) = uVar33;
  piVar20 = piVar17 + 0x2c;
  piVar20[0] = 0;
  piVar20[1] = -0x80000000;
  *(undefined2 *)(piVar17 + 0x32) = 0;
  piVar17[0x2e] = 0;
  piVar17[0x2f] = 0;
  piVar17[0x30] = 0;
  piVar17[0x31] = -0x80000000;
  *(undefined1 *)((long)piVar17 + 0xca) = 0;
  *piVar17 = *param_2;
  if ((param_3 != 0) && (*(long *)(param_3 + 8) != 0)) {
    plVar6 = (long *)(param_3 + 0x10);
    do {
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar6 = (long *)*plVar13;
  *plVar13 = param_3;
  if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
    plVar7 = plVar6 + 2;
    do {
      lVar11 = *plVar7;
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = lVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar11 + -1 == 0) {
      (**(code **)(*plVar6 + 0x18))();
    }
  }
  plVar6 = (long *)(lVar16 + (long)iVar9 * 0xd0 + 0x10);
  if ((param_4 != 0) && (*(long *)(param_4 + 8) != 0)) {
    plVar7 = (long *)(param_4 + 0x10);
    do {
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = *plVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar7 = (long *)*plVar6;
  *plVar6 = param_4;
  if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
    plVar6 = plVar7 + 2;
    do {
      lVar11 = *plVar6;
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = lVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar11 + -1 == 0) {
      (**(code **)(*plVar7 + 0x18))();
    }
  }
  uVar50 = *param_5;
  lVar16 = lVar16 + (long)iVar9 * 0xd0;
  *(undefined8 *)(lVar16 + 0x88) = param_5[1];
  *(undefined8 *)*(undefined1 (*) [16])(lVar16 + 0x80) = uVar50;
  uVar50 = param_5[2];
  plVar6 = (long *)(lVar16 + 0xa8);
  *(undefined8 *)(lVar16 + 0x98) = param_5[3];
  *(undefined8 *)(lVar16 + 0x90) = uVar50;
  *(int *)(lVar16 + 0xa0) = param_6;
  puVar3 = PTR_PTR_0434a080;
  iVar1 = *(int *)(param_3 + 0x20);
  if ((int)(piVar17[0x2d] & 0x3fffffffU) < iVar1) {
    lVar11 = FUN_031ef340(PTR_PTR_0434a080,iVar1,*plVar6,*piVar20,piVar17 + 0x2d);
    *plVar6 = lVar11;
  }
  iVar9 = *piVar20;
  lVar19 = (long)iVar9;
  lVar11 = (long)iVar1;
  if (iVar9 < iVar1) {
    lVar12 = *plVar6;
    *piVar20 = iVar1;
    puVar15 = (undefined8 *)(lVar12 + lVar19 * 0x10);
    uVar14 = (lVar11 * 0x10 + lVar19 * -0x10) - 0x10;
    uVar24 = ((uint)(uVar14 >> 4) & 0xfffffff) + 1;
    if ((uVar24 & 3) != 0) {
      lVar19 = -((ulong)uVar24 & 3);
      puVar10 = puVar15;
      do {
        puVar15 = puVar10 + 2;
        *puVar10 = 0;
        puVar10[1] = 0x8000000000000000;
        bVar4 = lVar19 != -1;
        lVar19 = lVar19 + 1;
        puVar10 = puVar15;
      } while (bVar4);
    }
    if (0x2f < uVar14) {
      do {
        *puVar15 = 0;
        puVar15[1] = 0x8000000000000000;
        puVar15[2] = 0;
        puVar15[3] = 0x8000000000000000;
        puVar15[4] = 0;
        puVar15[5] = 0x8000000000000000;
        puVar15[6] = 0;
        puVar15[7] = 0x8000000000000000;
        puVar15 = puVar15 + 8;
      } while (puVar15 != (undefined8 *)(lVar12 + lVar11 * 0x10));
    }
  }
  else if (iVar1 < iVar9) {
    lVar18 = *plVar6;
    *piVar20 = iVar1;
    lVar12 = lVar18 + lVar19 * 0x10;
    *(undefined4 *)(lVar12 + -8) = 0;
    if ((-1 < *(int *)(lVar12 + -4)) && (lVar8 = *(long *)(lVar12 + -0x10), lVar8 != 0)) {
      (**(code **)(*(long *)puVar3 + 0x18))(puVar3,lVar8,*(int *)(lVar12 + -4) << 2);
    }
    *(undefined8 *)(lVar12 + -0x10) = 0;
    *(undefined4 *)(lVar12 + -4) = 0x80000000;
    if ((long *)(lVar12 + -0x10) != (long *)(lVar18 + lVar11 * 0x10)) {
      plVar6 = (long *)(lVar19 * 0x10 + lVar18 + -0x20);
      lVar11 = lVar11 * 0x10 + lVar19 * -0x10 + 0x10;
      do {
        *(undefined4 *)(plVar6 + 1) = 0;
        if ((-1 < *(int *)((long)plVar6 + 0xc)) && (*plVar6 != 0)) {
          (**(code **)(*(long *)puVar3 + 0x18))(puVar3,*plVar6,*(int *)((long)plVar6 + 0xc) << 2);
        }
        *plVar6 = 0;
        lVar11 = lVar11 + 0x10;
        *(undefined4 *)((long)plVar6 + 0xc) = 0x80000000;
        plVar6 = plVar6 + -2;
      } while (lVar11 != 0);
    }
  }
  *(undefined1 *)((long)piVar17 + 0xca) = 1;
  lVar11 = *plVar13;
  uStack_98 = *(undefined8 *)(lVar11 + 0x98);
  local_a0 = *(undefined8 *)(lVar11 + 0x90);
  uStack_88 = *(undefined8 *)(lVar11 + 0xa8);
  local_90 = *(undefined8 *)(lVar11 + 0xa0);
  fVar22 = (float)local_a0;
  fVar31 = (float)local_90;
  fVar25 = (float)((ulong)local_a0 >> 0x20);
  fVar39 = (float)((ulong)local_90 >> 0x20);
  fVar28 = (float)uStack_98;
  fVar41 = (float)uStack_88;
  if ((fVar22 <= fVar31 && fVar25 <= fVar39) && fVar28 <= fVar41) {
    auVar40 = *(undefined1 (*) [16])(lVar16 + 0x80);
    fVar21 = auVar40._0_4_;
    auVar43._0_4_ = fVar21 + fVar21;
    fVar27 = auVar40._4_4_;
    auVar43._4_4_ = fVar27 + fVar27;
    auVar43._8_4_ = auVar40._8_4_ + auVar40._8_4_;
    fVar46 = auVar40._12_4_;
    auVar43._12_4_ = fVar46 + fVar46;
    auVar40 = NEON_ext(auVar40,auVar40,8,1);
    auVar44 = NEON_ext(auVar43,auVar43,8,1);
    fVar37 = auVar40._0_4_ * auVar44._0_4_;
    fVar54 = auVar43._4_4_ * fVar21 + auVar43._8_4_ * fVar46;
    fVar51 = auVar43._4_4_ * fVar21 - auVar43._8_4_ * fVar46;
    fVar55 = auVar43._8_4_ * fVar21 - auVar43._4_4_ * fVar46;
    fVar53 = auVar43._8_4_ * fVar27 + auVar43._0_4_ * fVar46;
    fVar49 = auVar43._8_4_ * fVar27 - auVar43._0_4_ * fVar46;
    uVar50 = NEON_fmov(0x3f800000,4);
    fVar42 = (float)uVar50;
    fVar38 = fVar42 - (auVar43._0_4_ * fVar21 + fVar37);
    fVar45 = fVar42 - (auVar43._0_4_ * fVar21 + auVar43._4_4_ * fVar27);
    fVar52 = auVar43._8_4_ * fVar21 + auVar43._4_4_ * fVar46;
    fVar42 = fVar42 - (auVar43._4_4_ * fVar27 + fVar37);
    fVar21 = ABS((fVar31 - fVar22) * 0.5);
    fVar37 = ABS((fVar39 - fVar25) * 0.5);
    fVar27 = ABS((fVar41 - fVar28) * 0.5);
    fVar46 = (fVar22 + fVar31) * 0.5;
    fVar47 = (fVar25 + fVar39) * 0.5;
    fVar48 = (fVar28 + fVar41) * 0.5;
    fVar22 = ABS(fVar52 * fVar27) + ABS(fVar42 * fVar21) + ABS(fVar51 * fVar37);
    fVar25 = ABS(fVar49 * fVar27) + ABS(fVar54 * fVar21) + ABS(fVar38 * fVar37);
    fVar28 = ABS(fVar45 * fVar27) + ABS(fVar55 * fVar21) + ABS(fVar53 * fVar37);
    fVar31 = ABS(fVar27 * 0.0) + ABS(fVar21 * 0.0) + ABS(fVar37 * 0.0);
    fVar39 = *(float *)(lVar16 + 0x90) + fVar52 * fVar48 + fVar42 * fVar46 + fVar51 * fVar47;
    fVar41 = *(float *)(lVar16 + 0x94) + fVar49 * fVar48 + fVar54 * fVar46 + fVar38 * fVar47;
    fVar21 = *(float *)(lVar16 + 0x98) + fVar45 * fVar48 + fVar55 * fVar46 + fVar53 * fVar47;
    fVar37 = *(float *)(lVar16 + 0x9c) + fVar48 * 0.0 + fVar46 * 0.0 + fVar47 * 0.0;
    local_90 = CONCAT44(fVar41 + fVar25,fVar39 + fVar22);
    uStack_88 = CONCAT44(fVar37 + fVar31,fVar21 + fVar28);
    local_a0 = CONCAT44(fVar41 - fVar25,fVar39 - fVar22);
    uStack_98 = CONCAT44(fVar37 - fVar31,fVar21 - fVar28);
  }
  local_70 = (int *)CONCAT44(-(float)((ulong)*(undefined8 *)(param_1 + 0x150) >> 0x20),
                             -(float)*(undefined8 *)(param_1 + 0x150));
  uStack_68 = CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 0x158) >> 0x20),
                       -(float)*(undefined8 *)(param_1 + 0x158));
  uVar5 = *(undefined4 *)(*plVar13 + 0xb0);
  local_80 = CONCAT44(uVar5,uVar5);
  uVar5 = *(undefined4 *)(param_1 + (long)*(int *)(lVar16 + 0xa0) * 4 + 200);
  uStack_78 = CONCAT44(uVar5,uVar5);
  uVar5 = 3;
  if ((*(byte *)(*plVar13 + 0x80) & 1) != 0) {
    uVar5 = 4;
  }
  FUN_031f1660(&local_a0,&local_70,&uStack_78,&local_80,uVar5);
  iVar1 = *(int *)(param_1 + 0x38);
  lVar16 = *(long *)(param_1 + 0x30);
  iVar9 = iVar1;
  if ((int)(*(uint *)(param_1 + 0x3c) & 0x3fffffff) <= iVar1) {
    lVar16 = FUN_031ef6b4(puVar3,iVar1 + 1,lVar16,iVar1);
    *(long *)(param_1 + 0x30) = lVar16;
    iVar9 = *(int *)(param_1 + 0x38);
  }
  *(int *)(param_1 + 0x38) = iVar1 + 1;
  puVar15 = (undefined8 *)(lVar16 + (long)iVar9 * 0x50);
  puVar15[1] = uStack_98;
  *puVar15 = local_a0;
  *(undefined1 *)(puVar15 + 8) = 0;
  puVar15[3] = uStack_88;
  puVar15[2] = local_90;
  uVar5 = FUN_001d4c1c(param_1 + 0x60,&local_a0,iVar1);
  *(undefined4 *)((long)puVar15 + 0x44) = uVar5;
  local_70 = (int *)0x0;
  uStack_68 = -0x8000000000000000;
  FUN_001d58f0(param_1 + 0x40,&local_a0,&local_70);
  if ((int)uStack_68 != 0) {
    lVar16 = (long)(int)uStack_68 << 2;
    piVar17 = local_70;
    do {
      iVar9 = *piVar17;
      puVar15 = (undefined8 *)(*(long *)(param_1 + 0x20) + (long)iVar9 * 0x50);
      iVar23 = -(uint)((float)local_a0 <= *(float *)(puVar15 + 2));
      iVar26 = -(uint)((float)((ulong)local_a0 >> 0x20) <= *(float *)((long)puVar15 + 0x14));
      iVar29 = -(uint)((float)uStack_98 <= *(float *)(puVar15 + 3));
      iVar32 = -(uint)((float)*puVar15 <= (float)local_90);
      iVar34 = -(uint)((float)((ulong)*puVar15 >> 0x20) <= (float)((ulong)local_90 >> 0x20));
      iVar35 = -(uint)((float)puVar15[1] <= (float)uStack_88);
      uVar24 = CONCAT13((byte)((uint)iVar32 >> 0x18) & (byte)((uint)iVar23 >> 0x18),
                        CONCAT12((byte)((uint)iVar32 >> 0x10) & (byte)((uint)iVar23 >> 0x10),
                                 CONCAT11((byte)((uint)iVar32 >> 8) & (byte)((uint)iVar23 >> 8),
                                          (byte)iVar32 & (byte)iVar23)));
      if ((uVar24 & (uint)(CONCAT17((byte)((uint)iVar34 >> 0x18) & (byte)((uint)iVar26 >> 0x18),
                                    CONCAT16((byte)((uint)iVar34 >> 0x10) &
                                             (byte)((uint)iVar26 >> 0x10),
                                             CONCAT15((byte)((uint)iVar34 >> 8) &
                                                      (byte)((uint)iVar26 >> 8),
                                                      CONCAT14((byte)iVar34 & (byte)iVar26,uVar24)))
                                   ) >> 0x20) &
          CONCAT13((byte)((uint)iVar35 >> 0x18) & (byte)((uint)iVar29 >> 0x18),
                   CONCAT12((byte)((uint)iVar35 >> 0x10) & (byte)((uint)iVar29 >> 0x10),
                            CONCAT11((byte)((uint)iVar35 >> 8) & (byte)((uint)iVar29 >> 8),
                                     (byte)iVar35 & (byte)iVar29)))) != 0) {
        iVar26 = *(int *)(param_1 + 0x88);
        lVar11 = *(long *)(param_1 + 0x80);
        iVar23 = iVar26 + 1;
        if ((int)(*(uint *)(param_1 + 0x8c) & 0x3fffffff) <= iVar26) {
          lVar11 = FUN_031ef8e8(puVar3,iVar23);
          iVar26 = *(int *)(param_1 + 0x88);
          *(long *)(param_1 + 0x80) = lVar11;
        }
        piVar20 = (int *)(lVar11 + (long)iVar26 * 8);
        *(int *)(param_1 + 0x88) = iVar23;
        *piVar20 = iVar9;
        piVar20[1] = iVar1;
        FUN_031ed2e8(param_1,iVar9,iVar1);
      }
      piVar17 = piVar17 + 1;
      lVar16 = lVar16 + -4;
    } while (lVar16 != 0);
  }
  lVar16 = uStack_68;
  uVar24 = uStack_68._4_4_;
  uStack_68 = (ulong)uStack_68._4_4_ << 0x20;
  if ((-1 < lVar16) && (local_70 != (int *)0x0)) {
    (**(code **)(*(long *)PTR_PTR_0434a090 + 0x18))(PTR_PTR_0434a090,local_70,uVar24 << 2);
  }
  fVar22 = *(float *)(param_1 + 0x180);
  *(undefined4 *)(param_1 + 0x180) = 0;
  *(undefined1 *)(param_1 + 0xc4) = 1;
  iVar1 = *(int *)(param_1 + 0x98);
  if (iVar1 == 0) {
    fVar25 = 0.0;
  }
  else {
    fVar25 = *(float *)(*(long *)(*(long *)(param_1 + 0x90) + 8) + 0xb0);
    if (fVar25 <= 0.0) {
      fVar25 = 0.0;
    }
    *(float *)(param_1 + 0x180) = fVar25;
    if (iVar1 != 1) {
      lVar16 = (long)iVar1 * 0xd0 + -0xd0;
      plVar13 = (long *)(*(long *)(param_1 + 0x90) + 0xd8);
      do {
        if (fVar25 <= *(float *)(*plVar13 + 0xb0)) {
          fVar25 = *(float *)(*plVar13 + 0xb0);
        }
        lVar16 = lVar16 + -0xd0;
        *(float *)(param_1 + 0x180) = fVar25;
        plVar13 = plVar13 + 0x1a;
      } while (lVar16 != 0);
    }
  }
  if (fVar25 != fVar22) {
    if (0 < *(int *)(param_1 + 0xa8)) {
      lVar19 = 0;
      lVar16 = 0;
      lVar11 = 0;
      do {
        lVar12 = *(long *)(param_1 + 0xa0) + lVar16;
        lVar16 = lVar16 + 0x60;
        uVar30 = *(undefined8 *)(lVar12 + 0x18);
        uVar50 = *(undefined8 *)(lVar12 + 0x10);
        uVar36 = *(undefined8 *)(lVar12 + 0x28);
        uVar33 = *(undefined8 *)(lVar12 + 0x20);
        fVar22 = *(float *)(lVar12 + 0x40);
        fVar25 = *(float *)(lVar12 + 0x44);
        fVar28 = *(float *)(lVar12 + 0x48);
        fVar31 = *(float *)(lVar12 + 0x4c);
        lVar18 = *(long *)(param_1 + 0x20) + lVar19;
        *(undefined1 *)(lVar18 + 0x40) = 1;
        lVar11 = lVar11 + 1;
        *(ulong *)(lVar18 + 0x28) =
             CONCAT44((float)((ulong)uVar30 >> 0x20) + fVar31,(float)uVar30 + fVar28);
        *(ulong *)(lVar18 + 0x20) =
             CONCAT44((float)((ulong)uVar50 >> 0x20) + fVar25,(float)uVar50 + fVar22);
        *(ulong *)(lVar18 + 0x38) =
             CONCAT44((float)((ulong)uVar36 >> 0x20) + fVar31,(float)uVar36 + fVar28);
        *(ulong *)(lVar18 + 0x30) =
             CONCAT44((float)((ulong)uVar33 >> 0x20) + fVar25,(float)uVar33 + fVar22);
        *(undefined1 *)(lVar12 + 0x52) = 1;
        lVar19 = lVar19 + 0x50;
      } while (lVar11 < *(int *)(param_1 + 0xa8));
    }
    *(undefined1 *)(param_1 + 0xc4) = 1;
  }
  return;
}


