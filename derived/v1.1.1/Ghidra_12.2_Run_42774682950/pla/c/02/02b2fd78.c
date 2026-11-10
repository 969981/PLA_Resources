/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b2fd78; name: FUN_02b2fd78
 */


void FUN_02b2fd78(long param_1,ulong *param_2,long *param_3)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong unaff_x27;
  undefined8 uVar15;
  float fVar16;
  
  uVar14 = *param_2;
  uVar13 = *(ulong *)(param_1 + 0x138);
  plVar1 = (long *)(param_1 + 0x130);
  if (uVar13 != 0) {
    uVar10 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
    uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
    uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar10 < 2) {
      unaff_x27 = uVar13 - 1 & uVar14;
    }
    else {
      unaff_x27 = uVar14;
      if (uVar13 <= uVar14) {
        uVar5 = 0;
        if (uVar13 != 0) {
          uVar5 = uVar14 / uVar13;
        }
        unaff_x27 = uVar14 - uVar5 * uVar13;
      }
    }
    plVar11 = *(long **)(*plVar1 + unaff_x27 * 8);
    if (plVar11 != (long *)0x0) {
      if (uVar10 < 2) {
        while ((plVar11 = (long *)*plVar11, plVar11 != (long *)0x0 &&
               (plVar11[1] == uVar14 || (plVar11[1] & uVar13 - 1) == unaff_x27))) {
          if (plVar11[2] == uVar14) {
            return;
          }
        }
      }
      else {
        while (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0) {
          uVar10 = plVar11[1];
          if (uVar10 != uVar14) {
            if (uVar13 <= uVar10) {
              uVar5 = 0;
              if (uVar13 != 0) {
                uVar5 = uVar10 / uVar13;
              }
              uVar10 = uVar10 - uVar5 * uVar13;
            }
            if (uVar10 != unaff_x27) break;
          }
          if (plVar11[2] == uVar14) {
            return;
          }
        }
      }
    }
  }
  plVar11 = (long *)(**(code **)(**(long **)(param_1 + 0x168) + 0x10))
                              (*(long **)(param_1 + 0x168),0x38,8);
  if (plVar11 == (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x168) + 0xb8))();
  }
  uVar15 = *(undefined8 *)(param_1 + 0x168);
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar7 = __cxa_guard_acquire(PTR_DAT_04379520), puVar6 = PTR_DAT_04379528, iVar7 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar8 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (lVar8 != 0) {
    if (0xf < *(ulong *)(lVar8 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = uVar15;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
  }
  plVar11[2] = *param_2;
  plVar11[3] = param_2[1];
  plVar11[4] = param_2[2];
  plVar9 = (long *)param_2[3];
  plVar11[5] = (long)plVar9;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x18))();
  }
  lVar12 = *param_3;
  plVar11[6] = lVar12;
  if (lVar12 != 0) {
    piVar2 = (int *)(lVar12 + 0x50);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = *piVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (lVar8 != 0) {
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
  }
  *plVar11 = 0;
  plVar11[1] = uVar14;
  fVar16 = (float)(*(long *)(param_1 + 0x188) + 1);
  if ((uVar13 == 0) || (*(float *)(param_1 + 400) * (float)uVar13 < fVar16)) {
    uVar13 = (ulong)(uVar13 < 3 || (uVar13 & uVar13 - 1) != 0) | uVar13 << 1;
    uVar10 = (ulong)(fVar16 / *(float *)(param_1 + 400));
    if (uVar10 <= uVar13) {
      uVar10 = uVar13;
    }
    FUN_02b2423c(plVar1,uVar10);
    uVar13 = *(ulong *)(param_1 + 0x138);
    if ((uVar13 & uVar13 - 1) == 0) {
      unaff_x27 = uVar13 - 1 & uVar14;
    }
    else if (uVar14 < uVar13) {
      unaff_x27 = uVar14;
    }
    else {
      uVar10 = 0;
      if (uVar13 != 0) {
        uVar10 = uVar14 / uVar13;
      }
      unaff_x27 = uVar14 - uVar10 * uVar13;
    }
  }
  plVar9 = *(long **)(*plVar1 + unaff_x27 * 8);
  if (plVar9 == (long *)0x0) {
    *plVar11 = *(long *)(param_1 + 0x160);
    *(long **)(param_1 + 0x160) = plVar11;
    *(long *)(*(long *)(param_1 + 0x130) + unaff_x27 * 8) = param_1 + 0x160;
    if (*plVar11 == 0) goto LAB_02b30050;
    uVar14 = *(ulong *)(*plVar11 + 8);
    if ((uVar13 & uVar13 - 1) == 0) {
      uVar14 = uVar14 & uVar13 - 1;
    }
    else if (uVar13 <= uVar14) {
      uVar10 = 0;
      if (uVar13 != 0) {
        uVar10 = uVar14 / uVar13;
      }
      uVar14 = uVar14 - uVar10 * uVar13;
    }
    plVar9 = (long *)(*plVar1 + uVar14 * 8);
  }
  else {
    *plVar11 = *plVar9;
  }
  *plVar9 = (long)plVar11;
LAB_02b30050:
  *(long *)(param_1 + 0x188) = *(long *)(param_1 + 0x188) + 1;
  return;
}


