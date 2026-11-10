/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00b77a94; name: FUN_00b77a94
 */


long * FUN_00b77a94(long *param_1,ulong *param_2)

{
  ulong uVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  ulong unaff_x25;
  long lVar15;
  
  uVar14 = *param_2;
  uVar13 = param_1[1];
  if (uVar13 != 0) {
    uVar10 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
    uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
    uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar10 < 2) {
      unaff_x25 = uVar13 - 1 & uVar14;
    }
    else {
      unaff_x25 = uVar14;
      if (uVar13 <= uVar14) {
        uVar1 = 0;
        if (uVar13 != 0) {
          uVar1 = uVar14 / uVar13;
        }
        unaff_x25 = uVar14 - uVar1 * uVar13;
      }
    }
    plVar12 = *(long **)(*param_1 + unaff_x25 * 8);
    if (plVar12 != (long *)0x0) {
      if (uVar10 < 2) {
        do {
          plVar12 = (long *)*plVar12;
          if ((plVar12 == (long *)0x0) ||
             (plVar12[1] != uVar14 && (plVar12[1] & uVar13 - 1) != unaff_x25)) goto LAB_00b77b64;
        } while (plVar12[2] != uVar14);
      }
      else {
        do {
          plVar12 = (long *)*plVar12;
          if (plVar12 == (long *)0x0) goto LAB_00b77b64;
          uVar10 = plVar12[1];
          if (uVar10 != uVar14) {
            if (uVar13 <= uVar10) {
              uVar1 = 0;
              if (uVar13 != 0) {
                uVar1 = uVar10 / uVar13;
              }
              uVar10 = uVar10 - uVar1 * uVar13;
            }
            if (uVar10 != unaff_x25) goto LAB_00b77b64;
          }
        } while (plVar12[2] != uVar14);
      }
      goto LAB_00b77de4;
    }
  }
LAB_00b77b64:
  plVar12 = (long *)(**(code **)(*(long *)param_1[7] + 0x10))((long *)param_1[7],0x80,8);
  if (plVar12 == (long *)0x0) {
    (**(code **)(*(long *)param_1[7] + 0xb8))();
  }
  puVar3 = PTR_DAT_04379520;
  lVar15 = param_1[7];
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar7 = __cxa_guard_acquire(PTR_DAT_04379520), puVar4 = PTR_DAT_04379528, iVar7 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar4,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  puVar4 = PTR_DAT_04379528;
  lVar8 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (lVar8 == 0) {
    bVar2 = true;
  }
  else {
    if (0xf < *(ulong *)(lVar8 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = lVar15;
    bVar2 = false;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
  }
  plVar12[2] = *param_2;
  plVar12[3] = 0;
  plVar12[4] = 0;
  plVar12[5] = 0;
  plVar12[6] = 0;
  plVar12[7] = 0;
  plVar12[8] = 0;
  plVar12[9] = 0;
  plVar12[10] = 0;
  plVar12[0xb] = 0;
  plVar12[0xc] = 0;
  plVar12[0xd] = 0;
  plVar12[0xe] = 0;
  plVar12[0xf] = 0;
  if (((*puVar3 & 1) == 0) &&
     (iVar7 = __cxa_guard_acquire(PTR_DAT_04379520), puVar5 = PTR_DAT_04379528, iVar7 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar5,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar9 = nn::os::GetTlsValue(*(undefined4 *)puVar4);
  lVar6 = DAT_043f1798;
  lVar15 = tpidr_el0;
  if ((((lVar9 == 0) || (*(long *)(lVar9 + 0x80) == 0)) ||
      (lVar9 = *(long *)(lVar9 + *(long *)(lVar9 + 0x80) * 8 + -8), lVar9 == 0)) &&
     (lVar9 = *(long *)(lVar15 + 0x20), *(long *)(lVar15 + 0x20) == 0)) {
    *(long *)(lVar15 + 0x20) = DAT_043f1798;
    lVar9 = lVar6;
  }
  plVar12[5] = lVar9;
  plVar12[6] = 0xfffffffffffffff;
  plVar12[7] = 0;
  *(undefined4 *)(plVar12 + 8) = 0;
  plVar12[9] = 0;
  if (((*puVar3 & 1) == 0) &&
     (iVar7 = __cxa_guard_acquire(PTR_DAT_04379520), puVar3 = PTR_DAT_04379528, iVar7 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar3,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar9 = nn::os::GetTlsValue(*(undefined4 *)puVar4);
  lVar6 = DAT_043f1798;
  if ((((lVar9 == 0) || (*(long *)(lVar9 + 0x80) == 0)) ||
      (lVar9 = *(long *)(lVar9 + *(long *)(lVar9 + 0x80) * 8 + -8), lVar9 == 0)) &&
     (lVar9 = *(long *)(lVar15 + 0x20), *(long *)(lVar15 + 0x20) == 0)) {
    *(long *)(lVar15 + 0x20) = DAT_043f1798;
    lVar9 = lVar6;
  }
  plVar12[10] = lVar9;
  plVar12[0xb] = 0xfffffffffffffff;
  *(undefined4 *)(plVar12 + 0xf) = 0x3f800000;
  plVar12[0xc] = 0;
  *(undefined4 *)(plVar12 + 0xd) = 0;
  plVar12[0xe] = 0;
  if (!bVar2) {
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
  }
  *plVar12 = 0;
  plVar12[1] = uVar14;
  if ((uVar13 == 0) || (*(float *)(param_1 + 0xc) * (float)uVar13 < (float)(param_1[0xb] + 1))) {
    uVar13 = (ulong)(uVar13 < 3 || (uVar13 & uVar13 - 1) != 0) | uVar13 << 1;
    uVar10 = (ulong)((float)(param_1[0xb] + 1) / *(float *)(param_1 + 0xc));
    if (uVar10 <= uVar13) {
      uVar10 = uVar13;
    }
    FUN_00b78124(param_1,uVar10);
    uVar13 = param_1[1];
    if ((uVar13 & uVar13 - 1) == 0) {
      unaff_x25 = uVar13 - 1 & uVar14;
    }
    else if (uVar14 < uVar13) {
      unaff_x25 = uVar14;
    }
    else {
      uVar10 = 0;
      if (uVar13 != 0) {
        uVar10 = uVar14 / uVar13;
      }
      unaff_x25 = uVar14 - uVar10 * uVar13;
    }
  }
  plVar11 = *(long **)(*param_1 + unaff_x25 * 8);
  if (plVar11 == (long *)0x0) {
    plVar11 = param_1 + 6;
    *plVar12 = *plVar11;
    *plVar11 = (long)plVar12;
    *(long **)(*param_1 + unaff_x25 * 8) = plVar11;
    if (*plVar12 != 0) {
      uVar14 = *(ulong *)(*plVar12 + 8);
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
      plVar11 = (long *)(*param_1 + uVar14 * 8);
      goto LAB_00b77d98;
    }
  }
  else {
    *plVar12 = *plVar11;
LAB_00b77d98:
    *plVar11 = (long)plVar12;
  }
  param_1[0xb] = param_1[0xb] + 1;
LAB_00b77de4:
  return plVar12 + 3;
}


