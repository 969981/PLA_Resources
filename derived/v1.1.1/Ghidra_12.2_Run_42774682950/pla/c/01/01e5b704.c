/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e5b704; name: FUN_01e5b704
 */


void FUN_01e5b704(long param_1,long *param_2)

{
  long *plVar1;
  int *piVar2;
  ulong *puVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ulong unaff_x26;
  undefined8 uVar17;
  float fVar18;
  
  lVar14 = *(long *)(param_1 + 0xd0);
  plVar1 = (long *)(lVar14 + 0x158);
  lVar9 = *(long *)(*(long *)(param_2[3] + 0x70) + 0x218);
  uVar15 = *(ulong *)(lVar14 + 0x160);
  puVar3 = (ulong *)PTR_DAT_04379c88;
  if (lVar9 != 0) {
    puVar3 = (ulong *)(lVar9 + 0x58);
  }
  uVar16 = *puVar3;
  if (uVar15 != 0) {
    uVar10 = uVar15 - (uVar15 >> 1 & 0x5555555555555555);
    uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
    uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar10 < 2) {
      unaff_x26 = uVar15 - 1 & uVar16;
    }
    else {
      unaff_x26 = uVar16;
      if (uVar15 <= uVar16) {
        uVar6 = 0;
        if (uVar15 != 0) {
          uVar6 = uVar16 / uVar15;
        }
        unaff_x26 = uVar16 - uVar6 * uVar15;
      }
    }
    plVar11 = *(long **)(*plVar1 + unaff_x26 * 8);
    if (plVar11 != (long *)0x0) {
      if (uVar10 < 2) {
        while ((plVar11 = (long *)*plVar11, plVar11 != (long *)0x0 &&
               (plVar11[1] == uVar16 || (plVar11[1] & uVar15 - 1) == unaff_x26))) {
          if (plVar11[2] == uVar16) {
            return;
          }
        }
      }
      else {
        while (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0) {
          uVar10 = plVar11[1];
          if (uVar10 != uVar16) {
            if (uVar15 <= uVar10) {
              uVar6 = 0;
              if (uVar15 != 0) {
                uVar6 = uVar10 / uVar15;
              }
              uVar10 = uVar10 - uVar6 * uVar15;
            }
            if (uVar10 != unaff_x26) break;
          }
          if (plVar11[2] == uVar16) {
            return;
          }
        }
      }
    }
  }
  plVar11 = (long *)(**(code **)(**(long **)(lVar14 + 400) + 0x10))(*(long **)(lVar14 + 400),0x38,8)
  ;
  if (plVar11 == (long *)0x0) {
    (**(code **)(**(long **)(lVar14 + 400) + 0xb8))();
  }
  uVar17 = *(undefined8 *)(lVar14 + 400);
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar8 = __cxa_guard_acquire(PTR_DAT_04379520), puVar7 = PTR_DAT_04379528, iVar8 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar7,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar9 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (lVar9 != 0) {
    if (0xf < *(ulong *)(lVar9 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = uVar17;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
  }
  plVar11[2] = *puVar3;
  lVar12 = param_2[1];
  plVar11[3] = *param_2;
  plVar11[4] = lVar12;
  lVar12 = param_2[2];
  plVar11[5] = lVar12;
  if (lVar12 != 0) {
    lVar12 = *(long *)(lVar12 + 0x58);
    if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_01e5bac8;
    if (*(long *)(lVar12 + 0x10) == 0) {
      uVar17 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
      *(undefined8 *)(lVar12 + 0x10) = uVar17;
    }
    piVar2 = (int *)(lVar12 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = *piVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  lVar12 = param_2[3];
  plVar11[6] = lVar12;
  if (lVar12 != 0) {
    lVar12 = *(long *)(lVar12 + 0x58);
    if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) {
LAB_01e5bac8:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar12 + 0x10) == 0) {
      uVar17 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
      *(undefined8 *)(lVar12 + 0x10) = uVar17;
    }
    piVar2 = (int *)(lVar12 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = *piVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  if (lVar9 != 0) {
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
  }
  *plVar11 = 0;
  plVar11[1] = uVar16;
  fVar18 = (float)(*(long *)(lVar14 + 0x1b0) + 1);
  if ((uVar15 == 0) || (*(float *)(lVar14 + 0x1b8) * (float)uVar15 < fVar18)) {
    uVar15 = (ulong)(uVar15 < 3 || (uVar15 & uVar15 - 1) != 0) | uVar15 << 1;
    uVar10 = (ulong)(fVar18 / *(float *)(lVar14 + 0x1b8));
    if (uVar10 <= uVar15) {
      uVar10 = uVar15;
    }
    FUN_01e617cc(plVar1,uVar10);
    uVar15 = *(ulong *)(lVar14 + 0x160);
    if ((uVar15 & uVar15 - 1) == 0) {
      unaff_x26 = uVar15 - 1 & uVar16;
    }
    else if (uVar16 < uVar15) {
      unaff_x26 = uVar16;
    }
    else {
      uVar10 = 0;
      if (uVar15 != 0) {
        uVar10 = uVar16 / uVar15;
      }
      unaff_x26 = uVar16 - uVar10 * uVar15;
    }
  }
  plVar13 = *(long **)(*plVar1 + unaff_x26 * 8);
  if (plVar13 == (long *)0x0) {
    *plVar11 = *(long *)(lVar14 + 0x188);
    *(long **)(lVar14 + 0x188) = plVar11;
    *(long *)(*(long *)(lVar14 + 0x158) + unaff_x26 * 8) = lVar14 + 0x188;
    if (*plVar11 == 0) goto LAB_01e5b908;
    uVar16 = *(ulong *)(*plVar11 + 8);
    if ((uVar15 & uVar15 - 1) == 0) {
      uVar16 = uVar16 & uVar15 - 1;
    }
    else if (uVar15 <= uVar16) {
      uVar10 = 0;
      if (uVar15 != 0) {
        uVar10 = uVar16 / uVar15;
      }
      uVar16 = uVar16 - uVar10 * uVar15;
    }
    plVar13 = (long *)(*plVar1 + uVar16 * 8);
  }
  else {
    *plVar11 = *plVar13;
  }
  *plVar13 = (long)plVar11;
LAB_01e5b908:
  *(long *)(lVar14 + 0x1b0) = *(long *)(lVar14 + 0x1b0) + 1;
  return;
}


