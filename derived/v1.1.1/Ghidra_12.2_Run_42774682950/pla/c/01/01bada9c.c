/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01bada9c; name: FUN_01bada9c
 */


bool FUN_01bada9c(float param_1,undefined1 param_2 [16],undefined1 param_3 [16],
                 undefined1 param_4 [16],long *param_5,undefined8 *param_6)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  undefined1 auVar4 [16];
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  bool bVar12;
  int iVar13;
  undefined8 uVar14;
  long *plVar15;
  long lVar16;
  undefined8 *puVar17;
  long lVar18;
  int iVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auVar24 [16];
  
  puVar11 = PTR_DAT_043795e0;
  puVar10 = PTR_DAT_043795d8;
  puVar9 = PTR_DAT_043795d0;
  puVar8 = PTR_DAT_043795c8;
  puVar7 = PTR_DAT_043794d0;
  fVar23 = param_4._12_4_;
  fVar22 = param_4._8_4_;
  fVar21 = param_4._4_4_;
  fVar20 = param_4._0_4_;
  lVar16 = *param_5;
  if ((lVar16 == 0) || (*(int *)(lVar16 + 0xc) == 0)) {
    return false;
  }
  piVar1 = (int *)(lVar16 + 0xc);
  iVar19 = *(int *)(lVar16 + 0xc);
  do {
    puVar17 = *(undefined8 **)(lVar16 + 0x10);
    if (((*puVar8 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar8), iVar13 != 0)) {
      if (((*puVar10 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar10), iVar13 != 0)) {
        if (((*puVar7 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar7), iVar13 != 0)) {
          uVar14 = FUN_0087f8f0();
          *(undefined8 *)PTR_DAT_043794d8 = uVar14;
          __cxa_guard_release(puVar7);
        }
        *(undefined **)puVar11 = PTR_DAT_043794d8;
        __cxa_guard_release(puVar10);
      }
      *(undefined **)puVar9 = puVar11;
      __cxa_guard_release(puVar8);
    }
    if (puVar17 == (undefined8 *)0x0) {
      return false;
    }
    while (puVar17 != (undefined8 *)puVar9) {
      puVar17 = (undefined8 *)*puVar17;
      if (puVar17 == (undefined8 *)0x0) {
        return false;
      }
    }
    iVar13 = *piVar1;
    if (iVar13 == iVar19) {
      cVar3 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar12) {
        *piVar1 = iVar19 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      puVar6 = PTR_DAT_043794b8;
      puVar5 = PTR_DAT_043794b0;
      if (cVar3 == '\0') {
        lVar16 = *(long *)(lVar16 + 0x18);
        if (lVar16 == 0) {
          return false;
        }
        lVar18 = *(long *)(lVar16 + 0x158);
        if ((lVar18 == 0) || (*(int *)(lVar18 + 0xc) == 0)) goto LAB_01badb98;
        piVar1 = (int *)(lVar18 + 0xc);
        iVar19 = *(int *)(lVar18 + 0xc);
        break;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    iVar19 = iVar13;
    if (iVar13 == 0) {
      return false;
    }
  } while( true );
LAB_01badc30:
  puVar17 = *(undefined8 **)(lVar18 + 0x10);
  if (((*puVar5 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar5), iVar13 != 0)) {
    if (((*PTR_DAT_043794c0 & 1) == 0) &&
       (iVar13 = __cxa_guard_acquire(PTR_DAT_043794c0), iVar13 != 0)) {
      if (((*puVar7 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar7), iVar13 != 0)) {
        uVar14 = FUN_0087f8f0();
        *(undefined8 *)PTR_DAT_043794d8 = uVar14;
        __cxa_guard_release(puVar7);
      }
      *(undefined **)PTR_DAT_043794c8 = PTR_DAT_043794d8;
      __cxa_guard_release(PTR_DAT_043794c0);
    }
    *(undefined **)puVar6 = PTR_DAT_043794c8;
    __cxa_guard_release(puVar5);
  }
  if (puVar17 == (undefined8 *)0x0) goto LAB_01badb98;
  while (puVar17 != (undefined8 *)puVar6) {
    puVar17 = (undefined8 *)*puVar17;
    bVar12 = false;
    if (puVar17 == (undefined8 *)0x0) goto LAB_01badb9c;
  }
  iVar13 = *piVar1;
  if (iVar13 == iVar19) {
    cVar3 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar12) {
      *piVar1 = iVar19 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') {
      lVar18 = *(long *)(lVar18 + 0x18);
      if (lVar18 != 0) {
        plVar15 = (long *)(lVar18 + -0x50);
        (**(code **)(*(long *)(lVar18 + -0x50) + 0x40))(plVar15);
        fVar20 = fVar20 - (float)*param_6;
        fVar21 = fVar21 - (float)((ulong)*param_6 >> 0x20);
        fVar22 = fVar22 - (float)param_6[1];
        fVar23 = fVar23 - (float)((ulong)param_6[1] >> 0x20);
        fVar20 = fVar20 * fVar20;
        fVar21 = fVar21 * fVar21;
        fVar22 = fVar22 * fVar22;
        fVar23 = fVar23 * fVar23;
        auVar24._4_4_ = fVar21;
        auVar24._0_4_ = fVar20;
        auVar24._8_4_ = fVar22;
        auVar24._12_4_ = fVar23;
        auVar4._4_4_ = fVar21;
        auVar4._0_4_ = fVar20;
        auVar4._8_4_ = fVar22;
        auVar4._12_4_ = fVar23;
        auVar24 = NEON_ext(auVar24,auVar4,8,1);
        lVar18 = *(long *)(lVar18 + 8);
        piVar1 = (int *)(lVar18 + 0xc);
        bVar12 = auVar24._0_4_ + fVar20 + auVar24._4_4_ + fVar21 < param_1 * param_1;
        do {
          iVar19 = *piVar1;
          cVar3 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar2) {
            *piVar1 = iVar19 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar19 + -1 == 0) {
          *(undefined8 *)(lVar18 + 0x18) = 0;
          (**(code **)(*plVar15 + 0x20))(plVar15);
        }
        goto LAB_01badb9c;
      }
LAB_01badb98:
      bVar12 = false;
LAB_01badb9c:
      lVar18 = *(long *)(lVar16 + 8);
      piVar1 = (int *)(lVar18 + 0xc);
      do {
        iVar19 = *piVar1;
        cVar3 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar2) {
          *piVar1 = iVar19 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar19 + -1 == 0) {
        *(undefined8 *)(lVar18 + 0x18) = 0;
        (**(code **)(*(long *)(lVar16 + -0x50) + 0x20))((long *)(lVar16 + -0x50));
      }
      return bVar12;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  bVar12 = false;
  iVar19 = iVar13;
  if (iVar13 == 0) goto LAB_01badb9c;
  goto LAB_01badc30;
}


