/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01cde724; name: FUN_01cde724
 */


void FUN_01cde724(long param_1,ulong param_2,long *param_3)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  ulong unaff_x26;
  undefined8 uVar14;
  float fVar15;
  
  uVar13 = *(ulong *)(param_1 + 0x70);
  plVar1 = (long *)(param_1 + 0x68);
  if (uVar13 != 0) {
    uVar9 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
    uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
    uVar9 = (uVar9 + (uVar9 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar9 < 2) {
      unaff_x26 = uVar13 - 1 & param_2;
    }
    else {
      unaff_x26 = param_2;
      if (uVar13 <= param_2) {
        uVar5 = 0;
        if (uVar13 != 0) {
          uVar5 = param_2 / uVar13;
        }
        unaff_x26 = param_2 - uVar5 * uVar13;
      }
    }
    plVar10 = *(long **)(*plVar1 + unaff_x26 * 8);
    if (plVar10 != (long *)0x0) {
      if (uVar9 < 2) {
        while ((plVar10 = (long *)*plVar10, plVar10 != (long *)0x0 &&
               (plVar10[1] == param_2 || (plVar10[1] & uVar13 - 1) == unaff_x26))) {
          if (plVar10[2] == param_2) {
            return;
          }
        }
      }
      else {
        while (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0) {
          uVar9 = plVar10[1];
          if (uVar9 != param_2) {
            if (uVar13 <= uVar9) {
              uVar5 = 0;
              if (uVar13 != 0) {
                uVar5 = uVar9 / uVar13;
              }
              uVar9 = uVar9 - uVar5 * uVar13;
            }
            if (uVar9 != unaff_x26) break;
          }
          if (plVar10[2] == param_2) {
            return;
          }
        }
      }
    }
  }
  plVar10 = (long *)(**(code **)(**(long **)(param_1 + 0xa0) + 0x10))
                              (*(long **)(param_1 + 0xa0),0x20,8);
  if (plVar10 == (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0xa0) + 0xb8))();
  }
  uVar14 = *(undefined8 *)(param_1 + 0xa0);
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
    *(undefined8 *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = uVar14;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
  }
  plVar10[2] = param_2;
  lVar11 = *param_3;
  plVar10[3] = lVar11;
  if (lVar11 != 0) {
    lVar11 = *(long *)(lVar11 + 0x58);
    if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar11 + 0x10) == 0) {
      uVar14 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
      *(undefined8 *)(lVar11 + 0x10) = uVar14;
    }
    piVar2 = (int *)(lVar11 + 0xc);
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
  *plVar10 = 0;
  plVar10[1] = param_2;
  fVar15 = (float)(*(long *)(param_1 + 0xc0) + 1);
  if ((uVar13 == 0) || (*(float *)(param_1 + 200) * (float)uVar13 < fVar15)) {
    uVar13 = (ulong)(uVar13 < 3 || (uVar13 & uVar13 - 1) != 0) | uVar13 << 1;
    uVar9 = (ulong)(fVar15 / *(float *)(param_1 + 200));
    if (uVar9 <= uVar13) {
      uVar9 = uVar13;
    }
    FUN_01cdfa50(plVar1,uVar9);
    uVar13 = *(ulong *)(param_1 + 0x70);
    if ((uVar13 & uVar13 - 1) == 0) {
      unaff_x26 = uVar13 - 1 & param_2;
    }
    else if (param_2 < uVar13) {
      unaff_x26 = param_2;
    }
    else {
      uVar9 = 0;
      if (uVar13 != 0) {
        uVar9 = param_2 / uVar13;
      }
      unaff_x26 = param_2 - uVar9 * uVar13;
    }
  }
  plVar12 = *(long **)(*plVar1 + unaff_x26 * 8);
  if (plVar12 == (long *)0x0) {
    plVar12 = (long *)(param_1 + 0x98);
    *plVar10 = *plVar12;
    *plVar12 = (long)plVar10;
    *(long **)(*(long *)(param_1 + 0x68) + unaff_x26 * 8) = plVar12;
    if (*plVar10 == 0) goto LAB_01cde8f0;
    uVar9 = *(ulong *)(*plVar10 + 8);
    if ((uVar13 & uVar13 - 1) == 0) {
      uVar9 = uVar9 & uVar13 - 1;
    }
    else if (uVar13 <= uVar9) {
      uVar5 = 0;
      if (uVar13 != 0) {
        uVar5 = uVar9 / uVar13;
      }
      uVar9 = uVar9 - uVar5 * uVar13;
    }
    plVar12 = (long *)(*plVar1 + uVar9 * 8);
  }
  else {
    *plVar10 = *plVar12;
  }
  *plVar12 = (long)plVar10;
LAB_01cde8f0:
  *(long *)(param_1 + 0xc0) = *(long *)(param_1 + 0xc0) + 1;
  return;
}


