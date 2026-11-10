/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 018ab83c; name: FUN_018ab83c
 */


void FUN_018ab83c(long *param_1,uint *param_2,long *param_3)

{
  int *piVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  ulong unaff_x26;
  long lVar15;
  
  uVar2 = *param_2;
  uVar14 = (ulong)uVar2;
  uVar13 = param_1[1];
  if (uVar13 != 0) {
    uVar10 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
    uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
    uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar10 < 2) {
      unaff_x26 = (ulong)((int)uVar13 - 1U & uVar2);
    }
    else {
      unaff_x26 = uVar14;
      if (uVar13 <= uVar14) {
        uVar5 = 0;
        if (uVar13 != 0) {
          uVar5 = uVar14 / uVar13;
        }
        unaff_x26 = uVar14 - uVar5 * uVar13;
      }
    }
    plVar11 = *(long **)(*param_1 + unaff_x26 * 8);
    if (plVar11 != (long *)0x0) {
      if (uVar10 < 2) {
        while ((plVar11 = (long *)*plVar11, plVar11 != (long *)0x0 &&
               (plVar11[1] == uVar14 || (plVar11[1] & uVar13 - 1) == unaff_x26))) {
          if (*(uint *)(plVar11 + 2) == uVar2) {
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
            if (uVar10 != unaff_x26) break;
          }
          if (*(uint *)(plVar11 + 2) == uVar2) {
            return;
          }
        }
      }
    }
  }
  plVar11 = (long *)(**(code **)(*(long *)param_1[7] + 0x10))((long *)param_1[7],0x20,8);
  if (plVar11 == (long *)0x0) {
    (**(code **)(*(long *)param_1[7] + 0xb8))();
  }
  lVar15 = param_1[7];
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
    *(long *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = lVar15;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
  }
  *(uint *)(plVar11 + 2) = *param_2;
  lVar15 = *param_3;
  plVar11[3] = lVar15;
  if (lVar15 != 0) {
    lVar15 = *(long *)(lVar15 + 0x58);
    if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar15 + 0x10) == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
      *(undefined8 *)(lVar15 + 0x10) = uVar9;
    }
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (lVar8 != 0) {
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
  }
  *plVar11 = 0;
  plVar11[1] = uVar14;
  if ((uVar13 == 0) || (*(float *)(param_1 + 0xc) * (float)uVar13 < (float)(param_1[0xb] + 1))) {
    uVar13 = (ulong)(uVar13 < 3 || (uVar13 & uVar13 - 1) != 0) | uVar13 << 1;
    uVar10 = (ulong)((float)(param_1[0xb] + 1) / *(float *)(param_1 + 0xc));
    if (uVar10 <= uVar13) {
      uVar10 = uVar13;
    }
    FUN_01870648(param_1,uVar10);
    uVar13 = param_1[1];
    if ((uVar13 & uVar13 - 1) == 0) {
      unaff_x26 = (ulong)((int)uVar13 - 1U & uVar2);
    }
    else if (uVar14 < uVar13) {
      unaff_x26 = uVar14;
    }
    else {
      uVar10 = 0;
      if (uVar13 != 0) {
        uVar10 = uVar14 / uVar13;
      }
      unaff_x26 = uVar14 - uVar10 * uVar13;
    }
  }
  plVar12 = *(long **)(*param_1 + unaff_x26 * 8);
  if (plVar12 == (long *)0x0) {
    plVar12 = param_1 + 6;
    *plVar11 = *plVar12;
    *plVar12 = (long)plVar11;
    *(long **)(*param_1 + unaff_x26 * 8) = plVar12;
    if (*plVar11 == 0) goto LAB_018aba0c;
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
    plVar12 = (long *)(*param_1 + uVar14 * 8);
  }
  else {
    *plVar11 = *plVar12;
  }
  *plVar12 = (long)plVar11;
LAB_018aba0c:
  param_1[0xb] = param_1[0xb] + 1;
  return;
}


