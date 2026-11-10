/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0115410c; name: FUN_0115410c
 */


void FUN_0115410c(long *param_1,long param_2,ulong *param_3,long *param_4)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong extraout_x8;
  long *plVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  ulong extraout_x9;
  byte *pbVar19;
  ulong uVar20;
  ulong uVar21;
  ulong extraout_x11;
  long *plVar22;
  long *plVar23;
  long lVar24;
  
  lVar11 = nn::os::GetCurrentThread();
  plVar23 = (long *)(param_2 + 0x78);
  do {
    if (*plVar23 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x6c));
        while (*plVar23 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar23,0x10);
          if (bVar4) {
            *plVar23 = lVar11;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_0115418c;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar23,0x10);
    if (bVar4) {
      *plVar23 = lVar11;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_0115418c:
  uVar18 = *(ulong *)(param_2 + 0x90);
  if (uVar18 == 0) goto LAB_01154238;
  uVar20 = uVar18 - (uVar18 >> 1 & 0x5555555555555555);
  uVar20 = (uVar20 & 0x3333333333333333) + (uVar20 >> 2 & 0x3333333333333333);
  uVar13 = *param_3;
  uVar20 = (uVar20 + (uVar20 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (uVar20 < 2) goto LAB_0115423c;
  if (uVar13 < uVar18) {
    uVar21 = uVar13;
  }
  else {
    uVar21 = 0;
    if (uVar18 != 0) {
      uVar21 = uVar13 / uVar18;
    }
    uVar21 = uVar13 - uVar21 * uVar18;
  }
  do {
    puVar8 = PTR_DAT_0437e4f8;
    puVar7 = PTR_DAT_0437e4f0;
    puVar6 = PTR_DAT_043794d8;
    plVar23 = *(long **)(*(long *)(param_2 + 0x88) + uVar21 * 8);
    if ((plVar23 != (long *)0x0) && (plVar23 = (long *)*plVar23, plVar23 != (long *)0x0)) {
      if (uVar20 < 2) {
        do {
          if (plVar23[1] == uVar13) {
            if (plVar23[2] == uVar13) goto LAB_01154280;
          }
          else if ((plVar23[1] & uVar18 - 1) != uVar21) break;
          plVar23 = (long *)*plVar23;
        } while (plVar23 != (long *)0x0);
      }
      else {
        do {
          uVar20 = plVar23[1];
          if (uVar20 == uVar13) {
            if (plVar23[2] == uVar13) goto LAB_01154280;
          }
          else {
            if (uVar18 <= uVar20) {
              uVar5 = 0;
              if (uVar18 != 0) {
                uVar5 = uVar20 / uVar18;
              }
              uVar20 = uVar20 - uVar5 * uVar18;
            }
            if (uVar20 != uVar21) break;
          }
          plVar23 = (long *)*plVar23;
        } while (plVar23 != (long *)0x0);
      }
    }
LAB_01154238:
    FUN_011565c0();
    uVar13 = extraout_x8;
    uVar18 = extraout_x9;
    uVar20 = extraout_x11;
LAB_0115423c:
    uVar21 = uVar18 - 1 & uVar13;
  } while( true );
LAB_01154a58:
  plVar23 = *(long **)(lVar11 + 0x10);
  if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar7), iVar10 != 0)) {
    if (((*pbVar19 & 1) == 0) && (iVar10 = __cxa_guard_acquire(pbVar19), iVar10 != 0)) {
      uVar12 = FUN_0087f8f0();
      *(undefined8 *)puVar6 = uVar12;
      __cxa_guard_release(pbVar19);
    }
    *(undefined **)puVar8 = puVar6;
    __cxa_guard_release(puVar7);
  }
  while( true ) {
    if (plVar23 == (long *)0x0) goto LAB_01154308;
    if (plVar23 == (long *)puVar8) break;
    plVar23 = (long *)*plVar23;
  }
  iVar10 = *piVar1;
  if (iVar10 == iVar9) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = iVar9 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') {
      lVar16 = 0;
      if (*(long *)(lVar11 + 0x18) != 0) {
        lVar16 = *(long *)(lVar11 + 0x18) + -0x50;
      }
      *param_1 = lVar16;
      goto LAB_01154614;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  iVar9 = iVar10;
  if (iVar10 == 0) {
LAB_01154308:
    *param_1 = 0;
LAB_01154614:
    *(undefined8 *)(param_2 + 0x78) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x6c));
    return;
  }
  goto LAB_01154a58;
LAB_01154280:
  plVar14 = *(long **)(plVar23[3] + 0x58);
  plVar23 = *(long **)(plVar23[3] + 0x60);
  if (plVar14 != plVar23) {
    pbVar19 = PTR_DAT_043794d0;
    do {
      plVar22 = *(long **)(*plVar14 + 0x58);
      plVar2 = *(long **)(*plVar14 + 0x60);
      if (plVar22 != plVar2) {
        do {
          lVar11 = *plVar22;
          if ((lVar11 != 0) && (*(int *)(lVar11 + 0xc) != 0)) {
            piVar1 = (int *)(lVar11 + 0xc);
            iVar9 = *(int *)(lVar11 + 0xc);
            do {
              plVar15 = *(long **)(lVar11 + 0x10);
              if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar7), iVar10 != 0)) {
                if (((*PTR_DAT_043794d0 & 1) == 0) &&
                   (iVar10 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar10 != 0)) {
                  uVar12 = FUN_0087f8f0();
                  *(undefined8 *)puVar6 = uVar12;
                  __cxa_guard_release(PTR_DAT_043794d0);
                }
                *(undefined **)puVar8 = puVar6;
                __cxa_guard_release(puVar7);
              }
              while( true ) {
                pbVar19 = PTR_DAT_043794d0;
                if (plVar15 == (long *)0x0) goto LAB_011542e0;
                if (plVar15 == (long *)puVar8) break;
                plVar15 = (long *)*plVar15;
              }
              iVar10 = *piVar1;
              if (iVar10 == iVar9) {
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                  *piVar1 = iVar9 + 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
                if (cVar3 != '\0') goto LAB_011548e8;
                lVar11 = *(long *)(lVar11 + 0x18);
                pbVar19 = PTR_DAT_043794d0;
                if (lVar11 != 0) {
                  lVar16 = *(long *)(lVar11 + 0x18);
                  lVar17 = *(long *)(lVar11 + 8);
                  lVar24 = *param_4;
                  piVar1 = (int *)(lVar17 + 0xc);
                  do {
                    iVar9 = *piVar1;
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar4) {
                      *piVar1 = iVar9 + -1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if (iVar9 + -1 == 0) {
                    *(undefined8 *)(lVar17 + 0x18) = 0;
                    (**(code **)(*(long *)(lVar11 + -0x50) + 0x20))();
                  }
                  pbVar19 = PTR_DAT_043794d0;
                  if (lVar16 != lVar24) break;
                  goto LAB_011542f0;
                }
                break;
              }
              ClearExclusiveLocal();
LAB_011548e8:
              pbVar19 = PTR_DAT_043794d0;
              iVar9 = iVar10;
            } while (iVar10 != 0);
          }
LAB_011542e0:
          plVar22 = plVar22 + 2;
        } while (plVar22 != plVar2);
        plVar22 = plVar2;
LAB_011542f0:
        if (plVar22 != *(long **)(*plVar14 + 0x60)) {
          lVar11 = *plVar22;
          if ((lVar11 == 0) || (*(int *)(lVar11 + 0xc) == 0)) goto LAB_01154308;
          piVar1 = (int *)(lVar11 + 0xc);
          iVar9 = *(int *)(lVar11 + 0xc);
          goto LAB_01154a58;
        }
      }
      plVar14 = plVar14 + 1;
    } while (plVar14 != plVar23);
  }
  plVar23 = *(long **)(param_2 + 8);
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar9 = __cxa_guard_acquire(PTR_DAT_04379520), puVar6 = PTR_DAT_04379528, iVar9 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar11 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (0xf < *(ulong *)(lVar11 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = plVar23;
  *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
  lVar11 = (**(code **)(*plVar23 + 0x10))(plVar23,0x90,8);
  if (lVar11 == 0) {
    (**(code **)(*plVar23 + 0xb8))(plVar23);
  }
                    /* WARNING: Subroutine does not return */
  FUN_008a93d8(lVar11);
}


