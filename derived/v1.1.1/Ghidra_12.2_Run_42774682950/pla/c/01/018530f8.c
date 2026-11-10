/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 018530f8; name: FUN_018530f8
 */


void FUN_018530f8(undefined8 *param_1,uint *param_2)

{
  undefined8 *puVar1;
  uint *puVar2;
  int *piVar3;
  uint *puVar4;
  byte bVar5;
  ushort uVar6;
  undefined1 auVar7 [16];
  undefined *puVar8;
  bool bVar9;
  int iVar10;
  long lVar11;
  long *plVar12;
  size_t sVar13;
  ushort *puVar14;
  undefined1 *puVar15;
  int *piVar16;
  ulong uVar17;
  ulong uVar18;
  byte *pbVar19;
  undefined8 uVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  long lVar24;
  long lVar25;
  undefined1 *puVar26;
  long lVar27;
  long lVar28;
  byte *pbVar29;
  long *plVar30;
  long *plVar31;
  ulong uVar32;
  uint *puVar33;
  undefined4 uVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined4 uVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  uint uVar41;
  undefined1 auVar42 [16];
  float fVar43;
  undefined1 auVar44 [16];
  float fVar45;
  undefined4 uVar46;
  float fVar47;
  undefined4 uVar48;
  float fVar49;
  
  *param_1 = &PTR_LAB_04228f28;
  plVar31 = param_1 + 1;
  *plVar31 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if ((*PTR_DAT_04379520 & 1) == 0) {
    iVar10 = __cxa_guard_acquire(PTR_DAT_04379520);
    puVar8 = PTR_DAT_04379528;
    if (iVar10 != 0) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
  }
  lVar11 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  plVar30 = DAT_043f1798;
  lVar28 = tpidr_el0;
  if ((((lVar11 == 0) || (*(long *)(lVar11 + 0x80) == 0)) ||
      (plVar12 = *(long **)(lVar11 + *(long *)(lVar11 + 0x80) * 8 + -8), plVar12 == (long *)0x0)) &&
     (plVar12 = *(long **)(lVar28 + 0x20), *(long **)(lVar28 + 0x20) == (long *)0x0)) {
    *(long **)(lVar28 + 0x20) = DAT_043f1798;
    plVar12 = plVar30;
  }
  param_1[6] = 0;
  param_1[4] = plVar12;
  param_1[5] = 0xf0f0f0f0f0f0f0;
  lVar22 = param_1[1];
  lVar11 = param_1[2];
  lVar21 = lVar11 - lVar22 >> 4;
  *(undefined4 *)(param_1 + 7) = 0;
  uVar32 = (ulong)*param_2;
  lVar24 = lVar21 * -0xf0f0f0f0f0f0f0f - uVar32;
  if (uVar32 <= (ulong)(lVar21 * -0xf0f0f0f0f0f0f0f)) {
    if (lVar24 != 0) {
      lVar28 = lVar22 + uVar32 * 0x110;
      if (lVar28 != lVar11) {
        if (*(long **)(lVar11 + -0x18) != (long *)0x0) {
          (**(code **)(**(long **)(lVar11 + -0x18) + 0x20))();
        }
        if (*(long **)(lVar11 + -0x38) != (long *)0x0) {
          (**(code **)(**(long **)(lVar11 + -0x38) + 0x20))();
        }
        if (*(long **)(lVar11 + -0x58) != (long *)0x0) {
          (**(code **)(**(long **)(lVar11 + -0x58) + 0x20))();
        }
        if (*(long **)(lVar11 + -0x78) != (long *)0x0) {
          (**(code **)(**(long **)(lVar11 + -0x78) + 0x20))();
        }
        if (*(long **)(lVar11 + -0x98) != (long *)0x0) {
          (**(code **)(**(long **)(lVar11 + -0x98) + 0x20))();
        }
        if (lVar11 + -0x110 != lVar28) {
          if (*(long **)(lVar11 + -0x128) != (long *)0x0) {
            (**(code **)(**(long **)(lVar11 + -0x128) + 0x20))();
          }
          if (*(long **)(lVar11 + -0x148) != (long *)0x0) {
            (**(code **)(**(long **)(lVar11 + -0x148) + 0x20))();
          }
          if (*(long **)(lVar11 + -0x168) != (long *)0x0) {
            (**(code **)(**(long **)(lVar11 + -0x168) + 0x20))();
          }
          if (*(long **)(lVar11 + -0x188) != (long *)0x0) {
            (**(code **)(**(long **)(lVar11 + -0x188) + 0x20))();
          }
          if (*(long **)(lVar11 + -0x1a8) != (long *)0x0) {
            (**(code **)(**(long **)(lVar11 + -0x1a8) + 0x20))();
          }
          if (lVar11 + -0x220 != lVar28) {
            do {
              if (*(long **)(lVar11 + -0x238) != (long *)0x0) {
                (**(code **)(**(long **)(lVar11 + -0x238) + 0x20))();
              }
              if (*(long **)(lVar11 + -600) != (long *)0x0) {
                (**(code **)(**(long **)(lVar11 + -600) + 0x20))();
              }
              if (*(long **)(lVar11 + -0x278) != (long *)0x0) {
                (**(code **)(**(long **)(lVar11 + -0x278) + 0x20))();
              }
              if (*(long **)(lVar11 + -0x298) != (long *)0x0) {
                (**(code **)(**(long **)(lVar11 + -0x298) + 0x20))();
              }
              if (*(long **)(lVar11 + -0x2b8) != (long *)0x0) {
                (**(code **)(**(long **)(lVar11 + -0x2b8) + 0x20))();
              }
              lVar11 = lVar11 + -0x110;
            } while (lVar22 + uVar32 * 0x110 + 0x220 != lVar11);
          }
        }
      }
      param_1[2] = lVar28;
    }
    goto LAB_018532b8;
  }
  uVar23 = uVar32 + lVar21 * 0xf0f0f0f0f0f0f0f;
  puVar1 = param_1 + 4;
  if (uVar23 <= (ulong)((param_1[3] - lVar11 >> 4) * -0xf0f0f0f0f0f0f0f)) {
    do {
      FUN_01854c48(puVar1,lVar11);
      lVar11 = param_1[2] + 0x110;
      bVar9 = lVar24 != -1;
      lVar24 = lVar24 + 1;
      param_1[2] = lVar11;
    } while (bVar9);
    goto LAB_018532b8;
  }
  lVar22 = param_1[3] - lVar22;
  lVar11 = lVar22 >> 4;
  if ((ulong)(lVar11 * -0xf0f0f0f0f0f0f0f) < 0x78787878787878) {
    uVar17 = lVar11 * -0x1e1e1e1e1e1e1e1e;
    if ((uVar17 < uVar32) || (uVar32 = uVar17, lVar22 != 0)) goto LAB_01853228;
    uVar32 = 0;
    lVar11 = 0;
  }
  else {
    uVar32 = 0xf0f0f0f0f0f0f0;
LAB_01853228:
    lVar11 = (**(code **)(*plVar12 + 0x10))(plVar12,uVar32 * 0x110,0x10);
    if (lVar11 == 0) {
      (**(code **)(*(long *)*puVar1 + 0xb8))();
    }
  }
  lVar21 = lVar11 + lVar21 * 0x10;
  FUN_01854c48(puVar1,lVar21);
  lVar22 = lVar21 + 0x110;
  if (uVar23 != 1) {
    do {
      lVar24 = lVar24 + 1;
      FUN_01854c48(puVar1,lVar22);
      lVar22 = lVar22 + 0x110;
    } while (lVar24 != -1);
  }
  lVar24 = param_1[1];
  lVar27 = param_1[2];
  if (lVar27 == lVar24) {
    lVar27 = lVar24;
  }
  else {
    do {
      lVar21 = lVar21 + -0x110;
      lVar27 = lVar27 + -0x110;
      FUN_01854d90(puVar1,lVar21,lVar27);
    } while (lVar24 != lVar27);
    lVar24 = param_1[1];
    lVar27 = param_1[2];
  }
  lVar25 = param_1[3];
  param_1[3] = lVar11 + uVar32 * 0x110;
  param_1[1] = lVar21;
  param_1[2] = lVar22;
  while (lVar27 != lVar24) {
    if (*(long **)(lVar27 + -0x18) != (long *)0x0) {
      (**(code **)(**(long **)(lVar27 + -0x18) + 0x20))();
    }
    if (*(long **)(lVar27 + -0x38) != (long *)0x0) {
      (**(code **)(**(long **)(lVar27 + -0x38) + 0x20))();
    }
    if (*(long **)(lVar27 + -0x58) != (long *)0x0) {
      (**(code **)(**(long **)(lVar27 + -0x58) + 0x20))();
    }
    if (*(long **)(lVar27 + -0x78) != (long *)0x0) {
      (**(code **)(**(long **)(lVar27 + -0x78) + 0x20))();
    }
    plVar30 = (long *)(lVar27 + -0x98);
    lVar27 = lVar27 + -0x110;
    if ((long *)*plVar30 != (long *)0x0) {
      (**(code **)(*(long *)*plVar30 + 0x20))();
    }
  }
  if (lVar24 != 0) {
    plVar30 = (long *)*puVar1;
    uVar32 = (**(code **)(*plVar30 + 0xc0))(plVar30);
    if ((uVar32 & 1) != 0) {
      if (*(char *)(lVar28 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar28 + 0x38d488) = 1;
        *(undefined8 *)(lVar28 + 0x38d478) = 0;
        *(undefined8 *)(lVar28 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar28 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar28 + 0x38d480)) {
        FUN_02bcc824(plVar30,lVar24,lVar25 - lVar24,0x10);
        goto LAB_018532b8;
      }
    }
    (**(code **)(*plVar30 + 0x18))(plVar30,lVar24,lVar25 - lVar24,0x10);
  }
LAB_018532b8:
  puVar8 = PTR_DAT_0437a0d8;
  puVar33 = param_2 + 1;
  if (*param_2 != 0) {
    puVar2 = puVar33 + *param_2;
    fVar49 = *(float *)PTR_FloatPi_04372cf0 / *(float *)PTR_FloatDegree180_04372ce0;
    uVar32 = 0;
    lVar28 = (long)param_2 + 9;
    do {
      uVar23 = (ulong)*puVar33;
      piVar3 = (int *)((long)puVar33 + uVar23);
      puVar14 = (ushort *)((long)piVar3 - (long)*piVar3);
      uVar6 = *puVar14;
      if (uVar6 < 0x13) {
        piVar16 = (int *)0x0;
      }
      else {
        piVar16 = (int *)0x0;
        if ((ulong)puVar14[9] != 0) {
          puVar4 = (uint *)((long)piVar3 + (ulong)puVar14[9]);
          piVar16 = (int *)((long)puVar4 + (ulong)*puVar4);
        }
      }
      uVar34 = 0;
      if (4 < *(ushort *)((long)piVar16 - (long)*piVar16)) {
        uVar17 = (ulong)((ushort *)((long)piVar16 - (long)*piVar16))[2];
        uVar34 = 0;
        if (uVar17 != 0) {
          uVar34 = *(undefined4 *)((long)piVar16 + uVar17);
        }
      }
      if (uVar6 < 0x13) {
        piVar16 = (int *)0x0;
      }
      else {
        piVar16 = (int *)0x0;
        if ((ulong)puVar14[9] != 0) {
          puVar4 = (uint *)((long)piVar3 + (ulong)puVar14[9]);
          piVar16 = (int *)((long)puVar4 + (ulong)*puVar4);
        }
      }
      uVar38 = 0;
      if (6 < *(ushort *)((long)piVar16 - (long)*piVar16)) {
        uVar17 = (ulong)((ushort *)((long)piVar16 - (long)*piVar16))[3];
        uVar38 = 0;
        if (uVar17 != 0) {
          uVar38 = *(undefined4 *)((long)piVar16 + uVar17);
        }
      }
      if (uVar6 < 0x13) {
        piVar16 = (int *)0x0;
      }
      else {
        piVar16 = (int *)0x0;
        if ((ulong)puVar14[9] != 0) {
          puVar4 = (uint *)((long)piVar3 + (ulong)puVar14[9]);
          piVar16 = (int *)((long)puVar4 + (ulong)*puVar4);
        }
      }
      uVar41 = 0;
      if (8 < *(ushort *)((long)piVar16 - (long)*piVar16)) {
        uVar17 = (ulong)((ushort *)((long)piVar16 - (long)*piVar16))[4];
        uVar41 = 0;
        if (uVar17 != 0) {
          uVar41 = *(uint *)((long)piVar16 + uVar17);
        }
      }
      if (uVar6 < 0x15) {
        piVar16 = (int *)0x0;
      }
      else {
        piVar16 = (int *)0x0;
        if ((ulong)puVar14[10] != 0) {
          puVar4 = (uint *)((long)piVar3 + (ulong)puVar14[10]);
          piVar16 = (int *)((long)puVar4 + (ulong)*puVar4);
        }
      }
      fVar43 = 0.0;
      if (4 < *(ushort *)((long)piVar16 - (long)*piVar16)) {
        uVar17 = (ulong)((ushort *)((long)piVar16 - (long)*piVar16))[2];
        fVar43 = 0.0;
        if (uVar17 != 0) {
          fVar43 = *(float *)((long)piVar16 + uVar17);
        }
      }
      if (uVar6 < 0x15) {
        piVar16 = (int *)0x0;
      }
      else {
        piVar16 = (int *)0x0;
        if ((ulong)puVar14[10] != 0) {
          puVar4 = (uint *)((long)piVar3 + (ulong)puVar14[10]);
          piVar16 = (int *)((long)puVar4 + (ulong)*puVar4);
        }
      }
      fVar45 = 0.0;
      if (6 < *(ushort *)((long)piVar16 - (long)*piVar16)) {
        uVar17 = (ulong)((ushort *)((long)piVar16 - (long)*piVar16))[3];
        fVar45 = 0.0;
        if (uVar17 != 0) {
          fVar45 = *(float *)((long)piVar16 + uVar17);
        }
      }
      if (uVar6 < 0x15) {
        piVar16 = (int *)0x0;
      }
      else {
        piVar16 = (int *)0x0;
        if ((ulong)puVar14[10] != 0) {
          puVar4 = (uint *)((long)piVar3 + (ulong)puVar14[10]);
          piVar16 = (int *)((long)puVar4 + (ulong)*puVar4);
        }
      }
      fVar47 = 0.0;
      if (8 < *(ushort *)((long)piVar16 - (long)*piVar16)) {
        uVar17 = (ulong)((ushort *)((long)piVar16 - (long)*piVar16))[4];
        fVar47 = 0.0;
        if (uVar17 != 0) {
          fVar47 = *(float *)((long)piVar16 + uVar17);
        }
      }
      if (uVar6 < 0x17) {
        piVar16 = (int *)0x0;
      }
      else {
        piVar16 = (int *)0x0;
        if ((ulong)puVar14[0xb] != 0) {
          puVar4 = (uint *)((long)piVar3 + (ulong)puVar14[0xb]);
          piVar16 = (int *)((long)puVar4 + (ulong)*puVar4);
        }
      }
      uVar46 = 0;
      if (4 < *(ushort *)((long)piVar16 - (long)*piVar16)) {
        uVar17 = (ulong)((ushort *)((long)piVar16 - (long)*piVar16))[2];
        uVar46 = 0;
        if (uVar17 != 0) {
          uVar46 = *(undefined4 *)((long)piVar16 + uVar17);
        }
      }
      if (uVar6 < 0x17) {
        piVar16 = (int *)0x0;
      }
      else {
        piVar16 = (int *)0x0;
        if ((ulong)puVar14[0xb] != 0) {
          puVar4 = (uint *)((long)piVar3 + (ulong)puVar14[0xb]);
          piVar16 = (int *)((long)puVar4 + (ulong)*puVar4);
        }
      }
      uVar48 = 0;
      if (6 < *(ushort *)((long)piVar16 - (long)*piVar16)) {
        uVar17 = (ulong)((ushort *)((long)piVar16 - (long)*piVar16))[3];
        uVar48 = 0;
        if (uVar17 != 0) {
          uVar48 = *(undefined4 *)((long)piVar16 + uVar17);
        }
      }
      if (uVar6 < 0x17) {
        piVar16 = (int *)0x0;
      }
      else {
        piVar16 = (int *)0x0;
        if ((ulong)puVar14[0xb] != 0) {
          puVar4 = (uint *)((long)piVar3 + (ulong)puVar14[0xb]);
          piVar16 = (int *)((long)puVar4 + (ulong)*puVar4);
        }
      }
      uVar17 = 0;
      if (8 < *(ushort *)((long)piVar16 - (long)*piVar16)) {
        uVar18 = (ulong)((ushort *)((long)piVar16 - (long)*piVar16))[4];
        uVar17 = 0;
        if (uVar18 != 0) {
          uVar17 = (ulong)*(uint *)((long)piVar16 + uVar18);
        }
      }
      lVar24 = *plVar31;
      lVar11 = uVar32 * 0x110;
      *(ulong *)(lVar24 + lVar11 + 0x18) = (ulong)uVar41;
      *(ulong *)(lVar24 + lVar11 + 0x10) = CONCAT44(uVar38,uVar34);
      lVar24 = *plVar31;
      *(ulong *)(lVar24 + lVar11 + 0x28) = (ulong)(uint)(fVar49 * fVar47);
      *(ulong *)(lVar24 + lVar11 + 0x20) = CONCAT44(fVar49 * fVar45,fVar49 * fVar43);
      lVar24 = *plVar31;
      *(ulong *)(lVar24 + lVar11 + 0x38) = uVar17;
      *(ulong *)(lVar24 + lVar11 + 0x30) = CONCAT44(uVar48,uVar46);
      lVar11 = *plVar31 + lVar11;
      fVar45 = (float)*(undefined8 *)(lVar11 + 0x18);
      fVar36 = (float)((ulong)*(undefined8 *)(lVar11 + 0x18) >> 0x20);
      fVar43 = (float)*(undefined8 *)(lVar11 + 0x10);
      fVar47 = (float)((ulong)*(undefined8 *)(lVar11 + 0x10) >> 0x20);
      fVar43 = fVar43 * fVar43;
      fVar47 = fVar47 * fVar47;
      fVar45 = fVar45 * fVar45;
      fVar36 = fVar36 * fVar36;
      auVar39._4_4_ = fVar47;
      auVar39._0_4_ = fVar43;
      auVar39._8_4_ = fVar45;
      auVar39._12_4_ = fVar36;
      auVar42._4_4_ = fVar47;
      auVar42._0_4_ = fVar43;
      auVar42._8_4_ = fVar45;
      auVar42._12_4_ = fVar36;
      auVar42 = NEON_ext(auVar39,auVar42,8,1);
      fVar45 = *(float *)(lVar11 + 0x20) * *(float *)(lVar11 + 0x20);
      fVar36 = *(float *)(lVar11 + 0x24) * *(float *)(lVar11 + 0x24);
      fVar35 = *(float *)(lVar11 + 0x28) * *(float *)(lVar11 + 0x28);
      fVar37 = *(float *)(lVar11 + 0x2c) * *(float *)(lVar11 + 0x2c);
      auVar44._4_4_ = fVar36;
      auVar44._0_4_ = fVar45;
      auVar44._8_4_ = fVar35;
      auVar44._12_4_ = fVar37;
      auVar7._4_4_ = fVar36;
      auVar7._0_4_ = fVar45;
      auVar7._8_4_ = fVar35;
      auVar7._12_4_ = fVar37;
      auVar39 = NEON_ext(auVar44,auVar7,8,1);
      auVar40._0_4_ = *(float *)(lVar11 + 0x30) * *(float *)(lVar11 + 0x30);
      auVar40._4_4_ = *(float *)(lVar11 + 0x34) * *(float *)(lVar11 + 0x34);
      auVar40._8_4_ = *(float *)(lVar11 + 0x38) * *(float *)(lVar11 + 0x38);
      auVar40._12_4_ = *(float *)(lVar11 + 0x3c) * *(float *)(lVar11 + 0x3c);
      auVar44 = NEON_ext(auVar40,auVar40,8,1);
      bVar9 = auVar44._0_4_ + auVar40._0_4_ + auVar44._4_4_ + auVar40._4_4_ < 1.1920929e-07;
      *(bool *)(lVar11 + 0x100) =
           (auVar42._0_4_ + fVar43 + auVar42._4_4_ + fVar47 < 1.1920929e-07 &&
           auVar39._0_4_ + fVar45 + auVar39._4_4_ + fVar36 < 1.1920929e-07) && bVar9;
      if (bVar9) {
        lVar11 = *plVar31 + uVar32 * 0x110;
        uVar20 = *(undefined8 *)(PTR_DAT_0437a120 + 8);
        *(undefined8 *)(lVar11 + 0x30) = *(undefined8 *)PTR_DAT_0437a120;
        *(undefined8 *)(lVar11 + 0x38) = uVar20;
      }
      *(int *)(*plVar31 + uVar32 * 0x110 + 0x40) = (int)uVar32;
      if (*(ushort *)((long)piVar3 - (long)*piVar3) < 5) {
        puVar26 = (undefined1 *)0x0;
      }
      else {
        uVar17 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[2];
        puVar26 = (undefined1 *)0x0;
        if (uVar17 != 0) {
          puVar15 = *(undefined1 **)((long)piVar3 + uVar17);
          puVar26 = (undefined1 *)0x344570c1301a7584;
          if (puVar15 != &DAT_cbf29ce484222645) {
            puVar26 = puVar15;
          }
        }
      }
      *(undefined1 **)(*plVar31 + uVar32 * 0x110 + 0x50) = puVar26;
      if (*(ushort *)((long)piVar3 - (long)*piVar3) < 7) {
        uVar20 = 0;
      }
      else {
        uVar17 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[3];
        uVar20 = 0;
        if (uVar17 != 0) {
          uVar20 = *(undefined8 *)((long)piVar3 + uVar17);
        }
      }
      *(undefined8 *)(*plVar31 + uVar32 * 0x110 + 0x58) = uVar20;
      if ((*(ushort *)((long)piVar3 - (long)*piVar3) < 9) ||
         (uVar17 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[4], uVar17 == 0)) {
LAB_01853748:
        if (((*PTR_DAT_0437a0d0 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar10 != 0)) {
          FUN_00100250(PTR_FUN_0437a0e0,puVar8,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_0437a0d0);
        }
        puVar26 = *(undefined1 **)puVar8;
        pbVar29 = *(byte **)(puVar8 + 8);
        sVar13 = *(size_t *)(puVar8 + 0x10);
        plVar30 = *(long **)(puVar8 + 0x18);
        if (plVar30 != (long *)0x0) {
          (**(code **)(*plVar30 + 0x18))(plVar30);
        }
      }
      else {
        uVar18 = (ulong)*(uint *)((long)piVar3 + uVar17);
        lVar11 = (long)((long)piVar3 + uVar17) + uVar18;
        pbVar29 = (byte *)(lVar11 + 4);
        if (lVar11 == 0) goto LAB_01853748;
        sVar13 = strlen((char *)pbVar29);
        bVar5 = *pbVar29;
        if (bVar5 == 0) {
          plVar30 = (long *)0x0;
          puVar26 = &DAT_cbf29ce484222645;
        }
        else {
          puVar26 = &DAT_cbf29ce484222645;
          pbVar19 = (byte *)(lVar28 + uVar18 + uVar17 + uVar23);
          do {
            puVar26 = (undefined1 *)(((ulong)puVar26 ^ (ulong)bVar5) * 0x100000001b3);
            bVar5 = *pbVar19;
            pbVar19 = pbVar19 + 1;
          } while (bVar5 != 0);
          plVar30 = (long *)0x0;
        }
      }
      lVar11 = *plVar31 + uVar32 * 0x110;
      plVar12 = *(long **)(lVar11 + 0x78);
      *(undefined1 **)(lVar11 + 0x60) = puVar26;
      *(byte **)(lVar11 + 0x68) = pbVar29;
      *(size_t *)(lVar11 + 0x70) = sVar13;
      *(undefined8 *)(lVar11 + 0x78) = 0;
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x20))();
      }
      *(long **)(lVar11 + 0x78) = plVar30;
      if ((*(ushort *)((long)piVar3 - (long)*piVar3) < 0xb) ||
         (uVar17 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[5], uVar17 == 0)) {
LAB_018537c4:
        if (((*PTR_DAT_0437a0d0 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar10 != 0)) {
          FUN_00100250(PTR_FUN_0437a0e0,puVar8,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_0437a0d0);
        }
        puVar26 = *(undefined1 **)puVar8;
        pbVar29 = *(byte **)(puVar8 + 8);
        sVar13 = *(size_t *)(puVar8 + 0x10);
        plVar30 = *(long **)(puVar8 + 0x18);
        if (plVar30 != (long *)0x0) {
          (**(code **)(*plVar30 + 0x18))(plVar30);
        }
      }
      else {
        uVar18 = (ulong)*(uint *)((long)piVar3 + uVar17);
        lVar11 = (long)((long)piVar3 + uVar17) + uVar18;
        pbVar29 = (byte *)(lVar11 + 4);
        if (lVar11 == 0) goto LAB_018537c4;
        sVar13 = strlen((char *)pbVar29);
        bVar5 = *pbVar29;
        if (bVar5 == 0) {
          plVar30 = (long *)0x0;
          puVar26 = &DAT_cbf29ce484222645;
        }
        else {
          lVar11 = uVar23 + uVar17 + uVar18;
          puVar26 = &DAT_cbf29ce484222645;
          do {
            puVar26 = (undefined1 *)(((ulong)puVar26 ^ (ulong)bVar5) * 0x100000001b3);
            bVar5 = *(byte *)(lVar28 + lVar11);
            lVar11 = lVar11 + 1;
          } while (bVar5 != 0);
          plVar30 = (long *)0x0;
        }
      }
      lVar11 = *plVar31 + uVar32 * 0x110;
      plVar12 = *(long **)(lVar11 + 0x98);
      *(undefined1 **)(lVar11 + 0x80) = puVar26;
      *(byte **)(lVar11 + 0x88) = pbVar29;
      *(size_t *)(lVar11 + 0x90) = sVar13;
      *(undefined8 *)(lVar11 + 0x98) = 0;
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x20))();
      }
      *(long **)(lVar11 + 0x98) = plVar30;
      if ((*(ushort *)((long)piVar3 - (long)*piVar3) < 0xd) ||
         (uVar17 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[6], uVar17 == 0)) {
LAB_01853840:
        if (((*PTR_DAT_0437a0d0 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar10 != 0)) {
          FUN_00100250(PTR_FUN_0437a0e0,puVar8,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_0437a0d0);
        }
        puVar26 = *(undefined1 **)puVar8;
        pbVar29 = *(byte **)(puVar8 + 8);
        sVar13 = *(size_t *)(puVar8 + 0x10);
        plVar30 = *(long **)(puVar8 + 0x18);
        if (plVar30 != (long *)0x0) {
          (**(code **)(*plVar30 + 0x18))(plVar30);
        }
      }
      else {
        uVar18 = (ulong)*(uint *)((long)piVar3 + uVar17);
        lVar11 = (long)((long)piVar3 + uVar17) + uVar18;
        pbVar29 = (byte *)(lVar11 + 4);
        if (lVar11 == 0) goto LAB_01853840;
        sVar13 = strlen((char *)pbVar29);
        bVar5 = *pbVar29;
        if (bVar5 == 0) {
          plVar30 = (long *)0x0;
          puVar26 = &DAT_cbf29ce484222645;
        }
        else {
          lVar11 = uVar23 + uVar17 + uVar18;
          puVar26 = &DAT_cbf29ce484222645;
          do {
            puVar26 = (undefined1 *)(((ulong)puVar26 ^ (ulong)bVar5) * 0x100000001b3);
            bVar5 = *(byte *)(lVar28 + lVar11);
            lVar11 = lVar11 + 1;
          } while (bVar5 != 0);
          plVar30 = (long *)0x0;
        }
      }
      lVar11 = *plVar31 + uVar32 * 0x110;
      plVar12 = *(long **)(lVar11 + 0xb8);
      *(undefined1 **)(lVar11 + 0xa0) = puVar26;
      *(byte **)(lVar11 + 0xa8) = pbVar29;
      *(size_t *)(lVar11 + 0xb0) = sVar13;
      *(undefined8 *)(lVar11 + 0xb8) = 0;
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x20))();
      }
      *(long **)(lVar11 + 0xb8) = plVar30;
      if ((*(ushort *)((long)piVar3 - (long)*piVar3) < 0xf) ||
         (uVar17 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[7], uVar17 == 0)) {
LAB_018538bc:
        if (((*PTR_DAT_0437a0d0 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar10 != 0)) {
          FUN_00100250(PTR_FUN_0437a0e0,puVar8,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_0437a0d0);
        }
        puVar26 = *(undefined1 **)puVar8;
        pbVar29 = *(byte **)(puVar8 + 8);
        sVar13 = *(size_t *)(puVar8 + 0x10);
        plVar30 = *(long **)(puVar8 + 0x18);
        if (plVar30 != (long *)0x0) {
          (**(code **)(*plVar30 + 0x18))(plVar30);
        }
      }
      else {
        uVar18 = (ulong)*(uint *)((long)piVar3 + uVar17);
        lVar11 = (long)((long)piVar3 + uVar17) + uVar18;
        pbVar29 = (byte *)(lVar11 + 4);
        if (lVar11 == 0) goto LAB_018538bc;
        sVar13 = strlen((char *)pbVar29);
        bVar5 = *pbVar29;
        if (bVar5 == 0) {
          plVar30 = (long *)0x0;
          puVar26 = &DAT_cbf29ce484222645;
        }
        else {
          lVar11 = uVar23 + uVar17 + uVar18;
          puVar26 = &DAT_cbf29ce484222645;
          do {
            puVar26 = (undefined1 *)(((ulong)puVar26 ^ (ulong)bVar5) * 0x100000001b3);
            bVar5 = *(byte *)(lVar28 + lVar11);
            lVar11 = lVar11 + 1;
          } while (bVar5 != 0);
          plVar30 = (long *)0x0;
        }
      }
      lVar11 = *plVar31 + uVar32 * 0x110;
      plVar12 = *(long **)(lVar11 + 0xd8);
      *(undefined1 **)(lVar11 + 0xc0) = puVar26;
      *(byte **)(lVar11 + 200) = pbVar29;
      *(size_t *)(lVar11 + 0xd0) = sVar13;
      *(undefined8 *)(lVar11 + 0xd8) = 0;
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x20))();
      }
      *(long **)(lVar11 + 0xd8) = plVar30;
      if ((*(ushort *)((long)piVar3 - (long)*piVar3) < 0x11) ||
         (uVar17 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[8], uVar17 == 0)) {
LAB_01853938:
        if (((*PTR_DAT_0437a0d0 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar10 != 0)) {
          FUN_00100250(PTR_FUN_0437a0e0,puVar8,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_0437a0d0);
        }
        puVar26 = *(undefined1 **)puVar8;
        pbVar29 = *(byte **)(puVar8 + 8);
        sVar13 = *(size_t *)(puVar8 + 0x10);
        plVar30 = *(long **)(puVar8 + 0x18);
        if (plVar30 != (long *)0x0) {
          (**(code **)(*plVar30 + 0x18))(plVar30);
        }
      }
      else {
        uVar18 = (ulong)*(uint *)((long)piVar3 + uVar17);
        lVar11 = (long)((long)piVar3 + uVar17) + uVar18;
        pbVar29 = (byte *)(lVar11 + 4);
        if (lVar11 == 0) goto LAB_01853938;
        sVar13 = strlen((char *)pbVar29);
        bVar5 = *pbVar29;
        if (bVar5 == 0) {
          plVar30 = (long *)0x0;
          puVar26 = &DAT_cbf29ce484222645;
        }
        else {
          lVar11 = uVar23 + uVar17 + uVar18;
          puVar26 = &DAT_cbf29ce484222645;
          do {
            puVar26 = (undefined1 *)(((ulong)puVar26 ^ (ulong)bVar5) * 0x100000001b3);
            bVar5 = *(byte *)(lVar28 + lVar11);
            lVar11 = lVar11 + 1;
          } while (bVar5 != 0);
          plVar30 = (long *)0x0;
        }
      }
      lVar11 = *plVar31 + uVar32 * 0x110;
      plVar12 = *(long **)(lVar11 + 0xf8);
      *(undefined1 **)(lVar11 + 0xe0) = puVar26;
      *(byte **)(lVar11 + 0xe8) = pbVar29;
      *(size_t *)(lVar11 + 0xf0) = sVar13;
      *(undefined8 *)(lVar11 + 0xf8) = 0;
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x20))();
      }
      puVar33 = puVar33 + 1;
      uVar32 = (ulong)((int)uVar32 + 1);
      lVar28 = lVar28 + 4;
      *(long **)(lVar11 + 0xf8) = plVar30;
    } while (puVar33 != puVar2);
  }
  return;
}


