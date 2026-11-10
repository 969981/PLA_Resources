/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 025717ac; name: FUN_025717ac
 */


undefined8 FUN_025717ac(long *param_1,int *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  int iVar15;
  long *plVar16;
  long lVar17;
  undefined8 uVar18;
  int iVar19;
  undefined8 *puVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auVar28 [16];
  float fVar29;
  
  puVar14 = PTR_DAT_04381fd8;
  puVar13 = PTR_DAT_04381fd0;
  puVar12 = PTR_DAT_043794d8;
  puVar11 = PTR_DAT_043794d0;
  lVar17 = *param_1;
  if (lVar17 == 0) {
    plVar16 = (long *)0x0;
  }
  else if (*(int *)(lVar17 + 0xc) == 0) {
LAB_02571a48:
    plVar16 = (long *)0x0;
  }
  else {
    piVar1 = (int *)(lVar17 + 0xc);
    iVar19 = *(int *)(lVar17 + 0xc);
    do {
      puVar20 = *(undefined8 **)(lVar17 + 0x10);
      if (((*puVar13 & 1) == 0) && (iVar15 = __cxa_guard_acquire(puVar13), iVar15 != 0)) {
        if (((*puVar11 & 1) == 0) && (iVar15 = __cxa_guard_acquire(puVar11), iVar15 != 0)) {
          uVar18 = FUN_0087f8f0();
          *(undefined8 *)puVar12 = uVar18;
          __cxa_guard_release(puVar11);
        }
        *(undefined **)puVar14 = puVar12;
        __cxa_guard_release(puVar13);
      }
      if (puVar20 == (undefined8 *)0x0) goto LAB_02571a48;
      while (puVar20 != (undefined8 *)puVar14) {
        puVar20 = (undefined8 *)*puVar20;
        plVar16 = (long *)0x0;
        if (puVar20 == (undefined8 *)0x0) goto LAB_025717d4;
      }
      iVar15 = *piVar1;
      if (iVar15 == iVar19) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar19 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          plVar16 = (long *)0x0;
          if (*(long *)(lVar17 + 0x18) != 0) {
            plVar16 = (long *)(*(long *)(lVar17 + 0x18) + -0x50);
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      plVar16 = (long *)0x0;
      iVar19 = iVar15;
    } while (iVar15 != 0);
  }
LAB_025717d4:
  fVar27 = 1.0 / (float)(1 << (ulong)(param_2[2] & 0x1f));
  fVar24 = ((float)*param_2 + 0.5) * fVar27;
  fVar21 = fVar27 * ((float)param_2[1] + 0.5);
  fVar29 = (float)*(undefined8 *)(param_2 + 0xe);
  fVar22 = (float)*(undefined8 *)(param_2 + 0x10) +
           (((float)*(undefined8 *)(param_2 + 4) * fVar24 +
            (float)*(undefined8 *)(param_2 + 8) * 0.0) -
           (float)*(undefined8 *)(param_2 + 0xc) * fVar21);
  fVar23 = (float)*(undefined8 *)(param_2 + 0x12) +
           (((float)*(undefined8 *)(param_2 + 6) * fVar24 +
            (float)*(undefined8 *)(param_2 + 10) * 0.0) - fVar29 * fVar21);
  fVar25 = fVar22 - (float)plVar16[0x42];
  fVar26 = fVar23 - (float)plVar16[0x43];
  fVar21 = ((float)((ulong)*(undefined8 *)(param_2 + 0x12) >> 0x20) +
           (((float)((ulong)*(undefined8 *)(param_2 + 6) >> 0x20) * fVar24 +
            (float)((ulong)*(undefined8 *)(param_2 + 10) >> 0x20) * 0.0) -
           (float)((ulong)*(undefined8 *)(param_2 + 0xe) >> 0x20) * fVar21)) - 0.0;
  fVar25 = fVar25 * fVar25;
  fVar26 = fVar26 * fVar26;
  fVar21 = fVar21 * fVar21;
  auVar28._4_4_ = 0;
  auVar28._0_4_ = fVar25;
  auVar28._8_4_ = fVar26;
  auVar28._12_4_ = fVar21;
  auVar10._4_4_ = 0;
  auVar10._0_4_ = fVar25;
  auVar10._8_4_ = fVar26;
  auVar10._12_4_ = fVar21;
  auVar28 = NEON_ext(auVar28,auVar10,8,1);
  fVar21 = fVar27 * (float)*(undefined8 *)(param_2 + 4);
  fVar27 = fVar27 * fVar29;
  fVar21 = SQRT(fVar27 * fVar27 + fVar21 * fVar21 + 0.0) * 0.5;
  if (SQRT(auVar28._0_4_ + fVar25 + auVar28._4_4_ + 0.0) - fVar21 < *(float *)(plVar16 + 0x41)) {
    uVar18 = 1;
    if (plVar16 == (long *)0x0) {
      return 1;
    }
    goto LAB_025718b8;
  }
  if ((char)plVar16[0x4c] == '\0') {
LAB_0257196c:
    uVar18 = 0;
  }
  else {
    fVar24 = fVar22 * (float)plVar16[0x7a];
    fVar25 = (float)((ulong)plVar16[0x7a] >> 0x20) * 0.0;
    fVar26 = fVar23 * (float)plVar16[0x7b];
    fVar27 = (float)((ulong)plVar16[0x7b] >> 0x20) * 1.0;
    auVar4._4_4_ = fVar25;
    auVar4._0_4_ = fVar24;
    auVar4._8_4_ = fVar26;
    auVar4._12_4_ = fVar27;
    auVar5._4_4_ = fVar25;
    auVar5._0_4_ = fVar24;
    auVar5._8_4_ = fVar26;
    auVar5._12_4_ = fVar27;
    auVar28 = NEON_ext(auVar4,auVar5,8,1);
    if (0.0 < fVar21 + auVar28._0_4_ + fVar24 + auVar28._4_4_ + fVar25) {
      fVar24 = fVar22 * (float)plVar16[0x7c];
      fVar25 = (float)((ulong)plVar16[0x7c] >> 0x20) * 0.0;
      fVar26 = fVar23 * (float)plVar16[0x7d];
      fVar27 = (float)((ulong)plVar16[0x7d] >> 0x20) * 1.0;
      auVar6._4_4_ = fVar25;
      auVar6._0_4_ = fVar24;
      auVar6._8_4_ = fVar26;
      auVar6._12_4_ = fVar27;
      auVar7._4_4_ = fVar25;
      auVar7._0_4_ = fVar24;
      auVar7._8_4_ = fVar26;
      auVar7._12_4_ = fVar27;
      auVar28 = NEON_ext(auVar6,auVar7,8,1);
      if (0.0 < fVar21 + auVar28._0_4_ + fVar24 + auVar28._4_4_ + fVar25) {
        fVar22 = fVar22 * (float)plVar16[0x82];
        fVar24 = (float)((ulong)plVar16[0x82] >> 0x20) * 0.0;
        fVar23 = fVar23 * (float)plVar16[0x83];
        fVar25 = (float)((ulong)plVar16[0x83] >> 0x20) * 1.0;
        auVar8._4_4_ = fVar24;
        auVar8._0_4_ = fVar22;
        auVar8._8_4_ = fVar23;
        auVar8._12_4_ = fVar25;
        auVar9._4_4_ = fVar24;
        auVar9._0_4_ = fVar22;
        auVar9._8_4_ = fVar23;
        auVar9._12_4_ = fVar25;
        auVar28 = NEON_ext(auVar8,auVar9,8,1);
        if (0.0 < fVar21 + auVar28._0_4_ + fVar22 + auVar28._4_4_ + fVar24) goto LAB_0257196c;
      }
    }
    uVar18 = 2;
  }
LAB_025718b8:
  lVar17 = plVar16[0xb];
  piVar1 = (int *)(lVar17 + 0xc);
  do {
    iVar19 = *piVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = iVar19 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar19 + -1 == 0) {
    *(undefined8 *)(lVar17 + 0x18) = 0;
    (**(code **)(*plVar16 + 0x20))();
  }
  return uVar18;
}


