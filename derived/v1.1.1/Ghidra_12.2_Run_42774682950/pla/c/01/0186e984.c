/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0186e984; name: FUN_0186e984
 */


void FUN_0186e984(long *param_1,uint *param_2,long *param_3)

{
  int *piVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined *puVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong unaff_x26;
  long lVar15;
  
  uVar2 = *param_2;
  uVar14 = (ulong)uVar2;
  uVar13 = param_1[1];
  if (uVar13 != 0) {
    uVar12 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
    uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
    uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar12 < 2) {
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
    plVar8 = *(long **)(*param_1 + unaff_x26 * 8);
    if (plVar8 != (long *)0x0) {
      if (uVar12 < 2) {
        while ((plVar8 = (long *)*plVar8, plVar8 != (long *)0x0 &&
               (plVar8[1] == uVar14 || (plVar8[1] & uVar13 - 1) == unaff_x26))) {
          if (*(uint *)(plVar8 + 2) == uVar2) {
            return;
          }
        }
      }
      else {
        while (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0) {
          uVar12 = plVar8[1];
          if (uVar12 != uVar14) {
            if (uVar13 <= uVar12) {
              uVar5 = 0;
              if (uVar13 != 0) {
                uVar5 = uVar12 / uVar13;
              }
              uVar12 = uVar12 - uVar5 * uVar13;
            }
            if (uVar12 != unaff_x26) break;
          }
          if (*(uint *)(plVar8 + 2) == uVar2) {
            return;
          }
        }
      }
    }
  }
  plVar8 = (long *)(**(code **)(*(long *)param_1[7] + 0x10))((long *)param_1[7],0x20,8);
  if (plVar8 == (long *)0x0) {
    (**(code **)(*(long *)param_1[7] + 0xb8))();
  }
  lVar15 = param_1[7];
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar7 = __cxa_guard_acquire(PTR_DAT_04379520), puVar6 = PTR_DAT_04379528, iVar7 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar9 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (lVar9 != 0) {
    if (0xf < *(ulong *)(lVar9 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long *)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = lVar15;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
  }
  *(uint *)(plVar8 + 2) = *param_2;
  lVar15 = *param_3;
  plVar8[3] = lVar15;
  if (lVar15 != 0) {
    lVar15 = *(long *)(lVar15 + 0x58);
    if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar15 + 0x10) == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
      *(undefined8 *)(lVar15 + 0x10) = uVar10;
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
  if (lVar9 != 0) {
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
  }
  *plVar8 = 0;
  plVar8[1] = uVar14;
  if ((uVar13 == 0) || (*(float *)(param_1 + 0xc) * (float)uVar13 < (float)(param_1[0xb] + 1))) {
    uVar13 = (ulong)(uVar13 < 3 || (uVar13 & uVar13 - 1) != 0) | uVar13 << 1;
    uVar12 = (ulong)((float)(param_1[0xb] + 1) / *(float *)(param_1 + 0xc));
    if (uVar12 <= uVar13) {
      uVar12 = uVar13;
    }
    FUN_01870648(param_1,uVar12);
    uVar13 = param_1[1];
    if ((uVar13 & uVar13 - 1) == 0) {
      unaff_x26 = (ulong)((int)uVar13 - 1U & uVar2);
    }
    else if (uVar14 < uVar13) {
      unaff_x26 = uVar14;
    }
    else {
      uVar12 = 0;
      if (uVar13 != 0) {
        uVar12 = uVar14 / uVar13;
      }
      unaff_x26 = uVar14 - uVar12 * uVar13;
    }
  }
  plVar11 = *(long **)(*param_1 + unaff_x26 * 8);
  if (plVar11 == (long *)0x0) {
    plVar11 = param_1 + 6;
    *plVar8 = *plVar11;
    *plVar11 = (long)plVar8;
    *(long **)(*param_1 + unaff_x26 * 8) = plVar11;
    if (*plVar8 == 0) goto LAB_0186eb58;
    uVar14 = *(ulong *)(*plVar8 + 8);
    if ((uVar13 & uVar13 - 1) == 0) {
      uVar14 = uVar14 & uVar13 - 1;
    }
    else if (uVar13 <= uVar14) {
      uVar12 = 0;
      if (uVar13 != 0) {
        uVar12 = uVar14 / uVar13;
      }
      uVar14 = uVar14 - uVar12 * uVar13;
    }
    plVar11 = (long *)(*param_1 + uVar14 * 8);
  }
  else {
    *plVar8 = *plVar11;
  }
  *plVar11 = (long)plVar8;
LAB_0186eb58:
  param_1[0xb] = param_1[0xb] + 1;
  return;
}


