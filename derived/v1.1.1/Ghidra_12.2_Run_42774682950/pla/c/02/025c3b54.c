/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 025c3b54; name: FUN_025c3b54
 */


void FUN_025c3b54(long param_1,ulong param_2,long param_3)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined *puVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  ulong unaff_x24;
  ulong uVar14;
  undefined8 uVar15;
  float fVar16;
  long *local_58;
  
  if (*(long *)(param_3 + 0x18) == 0) {
    return;
  }
  FUN_025c6018(&local_58);
  if (local_58 == (long *)0x0) {
    return;
  }
  uVar14 = *(ulong *)(param_1 + 0x1338);
  plVar2 = (long *)(param_1 + 0x1330);
  if (uVar14 != 0) {
    uVar8 = uVar14 - (uVar14 >> 1 & 0x5555555555555555);
    uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
    uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar8 < 2) {
      uVar11 = uVar14 - 1 & param_2;
    }
    else {
      uVar11 = param_2;
      if (uVar14 <= param_2) {
        uVar11 = 0;
        if (uVar14 != 0) {
          uVar11 = param_2 / uVar14;
        }
        uVar11 = param_2 - uVar11 * uVar14;
      }
    }
    lVar10 = *plVar2;
    plVar12 = *(long **)(lVar10 + uVar11 * 8);
    if ((plVar12 != (long *)0x0) && (plVar12 = (long *)*plVar12, plVar12 != (long *)0x0)) {
      if (uVar8 < 2) {
        do {
          if (plVar12[1] == param_2) {
            if (plVar12[2] == param_2) goto LAB_025c3e44;
          }
          else if ((plVar12[1] & uVar14 - 1) != uVar11) break;
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar12[1];
          if (uVar13 == param_2) {
            if (plVar12[2] == param_2) goto LAB_025c3e44;
          }
          else {
            if (uVar14 <= uVar13) {
              uVar5 = 0;
              if (uVar14 != 0) {
                uVar5 = uVar13 / uVar14;
              }
              uVar13 = uVar13 - uVar5 * uVar14;
            }
            if (uVar13 != uVar11) break;
          }
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
    }
    if (uVar8 < 2) {
      unaff_x24 = uVar14 - 1 & param_2;
LAB_025c3c4c:
      plVar12 = *(long **)(lVar10 + unaff_x24 * 8);
    }
    else {
      unaff_x24 = param_2;
      if (param_2 < uVar14) goto LAB_025c3c4c;
      uVar11 = 0;
      if (uVar14 != 0) {
        uVar11 = param_2 / uVar14;
      }
      unaff_x24 = param_2 - uVar11 * uVar14;
      plVar12 = *(long **)(lVar10 + unaff_x24 * 8);
    }
    if (plVar12 != (long *)0x0) {
      if (uVar8 < 2) {
        do {
          plVar12 = (long *)*plVar12;
          if ((plVar12 == (long *)0x0) ||
             (plVar12[1] != param_2 && (plVar12[1] & uVar14 - 1) != unaff_x24)) goto LAB_025c3cac;
        } while (plVar12[2] != param_2);
      }
      else {
        do {
          plVar12 = (long *)*plVar12;
          if (plVar12 == (long *)0x0) goto LAB_025c3cac;
          uVar8 = plVar12[1];
          if (uVar8 != param_2) {
            if (uVar14 <= uVar8) {
              uVar11 = 0;
              if (uVar14 != 0) {
                uVar11 = uVar8 / uVar14;
              }
              uVar8 = uVar8 - uVar11 * uVar14;
            }
            if (uVar8 != unaff_x24) goto LAB_025c3cac;
          }
        } while (plVar12[2] != param_2);
      }
      goto LAB_025c3e50;
    }
  }
LAB_025c3cac:
  plVar12 = (long *)(**(code **)(**(long **)(param_1 + 0x1368) + 0x10))
                              (*(long **)(param_1 + 0x1368),0x20,8);
  if (plVar12 == (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x1368) + 0xb8))();
  }
  uVar15 = *(undefined8 *)(param_1 + 0x1368);
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar7 = __cxa_guard_acquire(PTR_DAT_04379520), puVar6 = PTR_DAT_04379528, iVar7 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar10 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (lVar10 == 0) {
    plVar12[2] = param_2;
    *(undefined4 *)(plVar12 + 3) = 1;
  }
  else {
    if (0xf < *(ulong *)(lVar10 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = uVar15;
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
    plVar12[2] = param_2;
    *(undefined4 *)(plVar12 + 3) = 1;
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
  }
  *plVar12 = 0;
  plVar12[1] = param_2;
  fVar16 = (float)(*(long *)(param_1 + 5000) + 1);
  if ((uVar14 == 0) || (*(float *)(param_1 + 0x1390) * (float)uVar14 < fVar16)) {
    uVar14 = (ulong)(uVar14 < 3 || (uVar14 & uVar14 - 1) != 0) | uVar14 << 1;
    uVar8 = (ulong)(fVar16 / *(float *)(param_1 + 0x1390));
    if (uVar8 <= uVar14) {
      uVar8 = uVar14;
    }
    FUN_0159ce04(plVar2,uVar8);
    uVar14 = *(ulong *)(param_1 + 0x1338);
    if ((uVar14 & uVar14 - 1) == 0) {
      unaff_x24 = uVar14 - 1 & param_2;
    }
    else if (param_2 < uVar14) {
      unaff_x24 = param_2;
    }
    else {
      uVar8 = 0;
      if (uVar14 != 0) {
        uVar8 = param_2 / uVar14;
      }
      unaff_x24 = param_2 - uVar8 * uVar14;
    }
  }
  plVar9 = *(long **)(*plVar2 + unaff_x24 * 8);
  if (plVar9 == (long *)0x0) {
    *plVar12 = *(long *)(param_1 + 0x1360);
    *(long **)(param_1 + 0x1360) = plVar12;
    *(long *)(*(long *)(param_1 + 0x1330) + unaff_x24 * 8) = param_1 + 0x1360;
    if (*plVar12 != 0) {
      uVar8 = *(ulong *)(*plVar12 + 8);
      if ((uVar14 & uVar14 - 1) == 0) {
        uVar8 = uVar8 & uVar14 - 1;
      }
      else if (uVar14 <= uVar8) {
        uVar11 = 0;
        if (uVar14 != 0) {
          uVar11 = uVar8 / uVar14;
        }
        uVar8 = uVar8 - uVar11 * uVar14;
      }
      plVar9 = (long *)(*plVar2 + uVar8 * 8);
      goto LAB_025c3df0;
    }
  }
  else {
    *plVar12 = *plVar9;
LAB_025c3df0:
    *plVar9 = (long)plVar12;
  }
  *(long *)(param_1 + 5000) = *(long *)(param_1 + 5000) + 1;
LAB_025c3e50:
  FUN_025c4970(param_1);
  lVar10 = local_58[0xb];
  piVar1 = (int *)(lVar10 + 0xc);
  do {
    iVar7 = *piVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = iVar7 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar7 + -1 == 0) {
    *(undefined8 *)(lVar10 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x025c3ec0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*local_58 + 0x20))(local_58);
    return;
  }
  return;
LAB_025c3e44:
  *(int *)(plVar12 + 3) = (int)plVar12[3] + 1;
  goto LAB_025c3e50;
}


