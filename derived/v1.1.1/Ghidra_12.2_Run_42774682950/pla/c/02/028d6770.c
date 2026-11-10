/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028d6770; name: FUN_028d6770
 */


void FUN_028d6770(undefined8 param_1,long *param_2,ulong *param_3)

{
  long *plVar1;
  ulong uVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong unaff_x26;
  undefined8 uVar14;
  float fVar15;
  
  lVar11 = *param_2;
  plVar1 = (long *)(lVar11 + 0x20);
  uVar13 = *param_3;
  uVar12 = *(ulong *)(lVar11 + 0x28);
  if (uVar12 != 0) {
    uVar6 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
    uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
    uVar6 = (uVar6 + (uVar6 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar6 < 2) {
      uVar8 = uVar12 - 1 & uVar13;
    }
    else {
      uVar8 = uVar13;
      if (uVar12 <= uVar13) {
        uVar8 = 0;
        if (uVar12 != 0) {
          uVar8 = uVar13 / uVar12;
        }
        uVar8 = uVar13 - uVar8 * uVar12;
      }
    }
    lVar7 = *plVar1;
    plVar9 = *(long **)(lVar7 + uVar8 * 8);
    if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
      if (uVar6 < 2) {
        do {
          if (plVar9[1] == uVar13) {
            if (plVar9[2] == uVar13) {
              return;
            }
          }
          else if ((plVar9[1] & uVar12 - 1) != uVar8) break;
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
      }
      else {
        do {
          uVar10 = plVar9[1];
          if (uVar10 == uVar13) {
            if (plVar9[2] == uVar13) {
              return;
            }
          }
          else {
            if (uVar12 <= uVar10) {
              uVar2 = 0;
              if (uVar12 != 0) {
                uVar2 = uVar10 / uVar12;
              }
              uVar10 = uVar10 - uVar2 * uVar12;
            }
            if (uVar10 != uVar8) break;
          }
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
      }
    }
    if (uVar6 < 2) {
      unaff_x26 = uVar12 - 1 & uVar13;
      plVar9 = *(long **)(lVar7 + unaff_x26 * 8);
    }
    else {
      unaff_x26 = uVar13;
      if (uVar12 <= uVar13) {
        uVar8 = 0;
        if (uVar12 != 0) {
          uVar8 = uVar13 / uVar12;
        }
        unaff_x26 = uVar13 - uVar8 * uVar12;
      }
      plVar9 = *(long **)(lVar7 + unaff_x26 * 8);
    }
    if (plVar9 != (long *)0x0) {
      if (uVar6 < 2) {
        while ((plVar9 = (long *)*plVar9, plVar9 != (long *)0x0 &&
               (plVar9[1] == uVar13 || (plVar9[1] & uVar12 - 1) == unaff_x26))) {
          if (plVar9[2] == uVar13) {
            return;
          }
        }
      }
      else {
        while (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0) {
          uVar6 = plVar9[1];
          if (uVar6 != uVar13) {
            if (uVar12 <= uVar6) {
              uVar8 = 0;
              if (uVar12 != 0) {
                uVar8 = uVar6 / uVar12;
              }
              uVar6 = uVar6 - uVar8 * uVar12;
            }
            if (uVar6 != unaff_x26) break;
          }
          if (plVar9[2] == uVar13) {
            return;
          }
        }
      }
    }
  }
  plVar9 = (long *)(**(code **)(**(long **)(lVar11 + 0x58) + 0x10))
                             (*(long **)(lVar11 + 0x58),0x40,8);
  if (plVar9 == (long *)0x0) {
    (**(code **)(**(long **)(lVar11 + 0x58) + 0xb8))();
  }
  uVar14 = *(undefined8 *)(lVar11 + 0x58);
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_DAT_04379520), puVar3 = PTR_DAT_04379528, iVar4 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar3,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar7 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (lVar7 != 0) {
    if (0xf < *(ulong *)(lVar7 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = uVar14;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
  }
  plVar9[2] = *param_3;
  plVar9[3] = param_3[1];
  plVar9[4] = param_3[2];
  plVar5 = (long *)param_3[3];
  plVar9[5] = (long)plVar5;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x18))();
  }
  *(undefined4 *)(plVar9 + 7) = 0;
  plVar9[6] = 0;
  if (lVar7 != 0) {
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
  }
  *plVar9 = 0;
  plVar9[1] = uVar13;
  fVar15 = (float)(*(long *)(lVar11 + 0x78) + 1);
  if ((uVar12 == 0) || (*(float *)(lVar11 + 0x80) * (float)uVar12 < fVar15)) {
    uVar12 = (ulong)(uVar12 < 3 || (uVar12 & uVar12 - 1) != 0) | uVar12 << 1;
    uVar6 = (ulong)(fVar15 / *(float *)(lVar11 + 0x80));
    if (uVar6 <= uVar12) {
      uVar6 = uVar12;
    }
    FUN_028d6b88(plVar1,uVar6);
    uVar12 = *(ulong *)(lVar11 + 0x28);
    if ((uVar12 & uVar12 - 1) == 0) {
      unaff_x26 = uVar12 - 1 & uVar13;
    }
    else if (uVar13 < uVar12) {
      unaff_x26 = uVar13;
    }
    else {
      uVar6 = 0;
      if (uVar12 != 0) {
        uVar6 = uVar13 / uVar12;
      }
      unaff_x26 = uVar13 - uVar6 * uVar12;
    }
  }
  plVar5 = *(long **)(*plVar1 + unaff_x26 * 8);
  if (plVar5 == (long *)0x0) {
    plVar5 = (long *)(lVar11 + 0x50);
    *plVar9 = *plVar5;
    *plVar5 = (long)plVar9;
    *(long **)(*(long *)(lVar11 + 0x20) + unaff_x26 * 8) = plVar5;
    if (*plVar9 == 0) goto LAB_028d6afc;
    uVar13 = *(ulong *)(*plVar9 + 8);
    if ((uVar12 & uVar12 - 1) == 0) {
      uVar13 = uVar13 & uVar12 - 1;
    }
    else if (uVar12 <= uVar13) {
      uVar6 = 0;
      if (uVar12 != 0) {
        uVar6 = uVar13 / uVar12;
      }
      uVar13 = uVar13 - uVar6 * uVar12;
    }
    plVar5 = (long *)(*plVar1 + uVar13 * 8);
  }
  else {
    *plVar9 = *plVar5;
  }
  *plVar5 = (long)plVar9;
LAB_028d6afc:
  *(long *)(lVar11 + 0x78) = *(long *)(lVar11 + 0x78) + 1;
  return;
}


