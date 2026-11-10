/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00cd6258; name: FUN_00cd6258
 */


bool FUN_00cd6258(undefined8 param_1,long *param_2)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  long lVar13;
  undefined1 *puVar14;
  ulong uVar15;
  undefined1 *puVar16;
  long lVar17;
  long *plVar18;
  ulong uVar19;
  ulong uVar20;
  undefined1 *puVar21;
  long *plVar22;
  long *plVar23;
  undefined8 *puVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  
  puVar9 = PTR_DAT_0437af00;
  puVar8 = PTR_DAT_0437aef8;
  puVar7 = PTR_DAT_043794d8;
  puVar6 = PTR_DAT_043794d0;
  lVar13 = *param_2;
  if ((lVar13 == 0) || (*(int *)(lVar13 + 0xc) == 0)) {
    return false;
  }
  piVar1 = (int *)(lVar13 + 0xc);
  iVar11 = *(int *)(lVar13 + 0xc);
  do {
    puVar24 = *(undefined8 **)(lVar13 + 0x10);
    if (((*puVar8 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar8), iVar10 != 0)) {
      if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar6), iVar10 != 0)) {
        uVar12 = FUN_0087f8f0();
        *(undefined8 *)puVar7 = uVar12;
        __cxa_guard_release(puVar6);
      }
      *(undefined **)puVar9 = puVar7;
      __cxa_guard_release(puVar8);
    }
    if (puVar24 == (undefined8 *)0x0) {
      return false;
    }
    while (puVar24 != (undefined8 *)puVar9) {
      puVar24 = (undefined8 *)*puVar24;
      if (puVar24 == (undefined8 *)0x0) {
        return false;
      }
    }
    iVar10 = *piVar1;
    if (iVar10 == iVar11) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar11 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') {
        lVar13 = *(long *)(lVar13 + 0x18);
        if (lVar13 == 0) {
          return false;
        }
        plVar23 = (long *)(lVar13 + -0x50);
        if (((*PTR_DAT_04379660 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_04379660), iVar11 != 0)) {
          FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379660);
        }
        lVar17 = *(long *)PTR_DAT_04379668;
        *(long *)PTR_DAT_04379670 = lVar17;
        puVar14 = *(undefined1 **)(lVar17 + 0x60);
        fVar27 = 0.0;
        if (puVar14 == (undefined1 *)0x0) goto LAB_00cd6544;
        uVar15 = (long)puVar14 - ((ulong)puVar14 >> 1 & 0x5555555555555555);
        uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333);
        uVar15 = (uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar15 < 2) {
          puVar16 = (undefined1 *)((ulong)(puVar14 + -1) & 0x5aed9c38b7dfcc60);
        }
        else if (&DAT_5aed9c38b7dfcc60 < puVar14) {
          puVar16 = &DAT_5aed9c38b7dfcc60;
        }
        else {
          uVar19 = 0;
          if (puVar14 != (undefined1 *)0x0) {
            uVar19 = 0x5aed9c38b7dfcc60 / (ulong)puVar14;
          }
          puVar16 = &DAT_5aed9c38b7dfcc60 + -(uVar19 * (long)puVar14);
        }
        plVar18 = *(long **)(*(long *)(lVar17 + 0x58) + (long)puVar16 * 8);
        if ((plVar18 == (long *)0x0) || (plVar18 = (long *)*plVar18, plVar18 == (long *)0x0))
        goto LAB_00cd6544;
        if (1 < uVar15) break;
        goto LAB_00cd6634;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    iVar11 = iVar10;
    if (iVar10 == 0) {
      return false;
    }
  } while( true );
  do {
    puVar21 = (undefined1 *)plVar18[1];
    if (puVar21 == &DAT_5aed9c38b7dfcc60) {
      if ((undefined1 *)plVar18[2] == &DAT_5aed9c38b7dfcc60) goto LAB_00cd63e8;
    }
    else {
      if (puVar14 <= puVar21) {
        uVar15 = 0;
        if (puVar14 != (undefined1 *)0x0) {
          uVar15 = (ulong)puVar21 / (ulong)puVar14;
        }
        puVar21 = puVar21 + -(uVar15 * (long)puVar14);
      }
      if (puVar21 != puVar16) break;
    }
    plVar18 = (long *)*plVar18;
  } while (plVar18 != (long *)0x0);
  goto LAB_00cd6544;
  while (plVar18 = (long *)*plVar18, plVar18 != (long *)0x0) {
LAB_00cd6634:
    if ((undefined1 *)plVar18[1] == &DAT_5aed9c38b7dfcc60) {
      if ((undefined1 *)plVar18[2] == &DAT_5aed9c38b7dfcc60) goto LAB_00cd63e8;
    }
    else if ((undefined1 *)((ulong)plVar18[1] & (ulong)(puVar14 + -1)) != puVar16) break;
  }
  goto LAB_00cd6544;
LAB_00cd63e8:
  plVar18 = (long *)plVar18[3];
  if (plVar18 == (long *)0x0) goto LAB_00cd6544;
  plVar2 = plVar18 + 10;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar4) {
      *(int *)plVar2 = (int)*plVar2 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  uVar15 = plVar18[0x21];
  fVar27 = 0.0;
  if (uVar15 != 0) {
    uVar19 = uVar15 - (uVar15 >> 1 & 0x5555555555555555);
    uVar19 = (uVar19 & 0x3333333333333333) + (uVar19 >> 2 & 0x3333333333333333);
    uVar19 = (uVar19 + (uVar19 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar19 < 2) {
      uVar20 = uVar15 - 1 & 0xb12d862d29a1f9d2;
    }
    else if (uVar15 < 0xb12d862d29a1f9d3) {
      uVar20 = 0;
      if (uVar15 != 0) {
        uVar20 = 0xb12d862d29a1f9d2 / uVar15;
      }
      uVar20 = 0xb12d862d29a1f9d2 - uVar20 * uVar15;
    }
    else {
      uVar20 = 0xb12d862d29a1f9d2;
    }
    plVar22 = *(long **)(plVar18[0x20] + uVar20 * 8);
    if ((plVar22 != (long *)0x0) && (plVar22 = (long *)*plVar22, plVar22 != (long *)0x0)) {
      if (uVar19 < 2) {
        do {
          if (plVar22[1] == 0xb12d862d29a1f9d2) {
            if (plVar22[2] == -0x4ed279d2d65e062e) goto LAB_00cd652c;
          }
          else if ((plVar22[1] & uVar15 - 1) != uVar20) break;
          plVar22 = (long *)*plVar22;
        } while (plVar22 != (long *)0x0);
      }
      else {
        do {
          uVar19 = plVar22[1];
          if (uVar19 == 0xb12d862d29a1f9d2) {
            if (plVar22[2] == -0x4ed279d2d65e062e) goto LAB_00cd652c;
          }
          else {
            if (uVar15 <= uVar19) {
              uVar5 = 0;
              if (uVar15 != 0) {
                uVar5 = uVar19 / uVar15;
              }
              uVar19 = uVar19 - uVar5 * uVar15;
            }
            if (uVar19 != uVar20) break;
          }
          plVar22 = (long *)*plVar22;
        } while (plVar22 != (long *)0x0);
      }
    }
  }
  goto LAB_00cd6530;
LAB_00cd652c:
  fVar27 = *(float *)(plVar22 + 6);
LAB_00cd6530:
  do {
    iVar11 = (int)*plVar2 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar4) {
      *(int *)plVar2 = iVar11;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar11 == 0) {
    (**(code **)(*plVar18 + 0x10))();
  }
LAB_00cd6544:
  fVar25 = (float)FUN_0185f0d0(plVar23);
  fVar26 = (float)FUN_0108d55c(param_1);
  lVar13 = *(long *)(lVar13 + 8);
  piVar1 = (int *)(lVar13 + 0xc);
  do {
    iVar11 = *piVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = iVar11 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar11 + -1 == 0) {
    *(undefined8 *)(lVar13 + 0x18) = 0;
    (**(code **)(*plVar23 + 0x20))(plVar23);
  }
  return fVar25 + fVar26 < fVar27;
}


