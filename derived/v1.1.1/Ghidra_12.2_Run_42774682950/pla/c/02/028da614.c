/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028da614; name: FUN_028da614
 */


void FUN_028da614(long *param_1,ulong *param_2)

{
  ulong uVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong unaff_x24;
  
  uVar12 = *param_2;
  uVar11 = param_1[1];
  if (uVar11 != 0) {
    uVar5 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
    uVar5 = (uVar5 + (uVar5 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar5 < 2) {
      uVar8 = uVar11 - 1 & uVar12;
    }
    else {
      uVar8 = uVar12;
      if (uVar11 <= uVar12) {
        uVar8 = 0;
        if (uVar11 != 0) {
          uVar8 = uVar12 / uVar11;
        }
        uVar8 = uVar12 - uVar8 * uVar11;
      }
    }
    lVar7 = *param_1;
    plVar9 = *(long **)(lVar7 + uVar8 * 8);
    if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
      if (uVar5 < 2) {
        do {
          if (plVar9[1] == uVar12) {
            if (plVar9[2] == uVar12) {
              return;
            }
          }
          else if ((plVar9[1] & uVar11 - 1) != uVar8) break;
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
      }
      else {
        do {
          uVar10 = plVar9[1];
          if (uVar10 == uVar12) {
            if (plVar9[2] == uVar12) {
              return;
            }
          }
          else {
            if (uVar11 <= uVar10) {
              uVar1 = 0;
              if (uVar11 != 0) {
                uVar1 = uVar10 / uVar11;
              }
              uVar10 = uVar10 - uVar1 * uVar11;
            }
            if (uVar10 != uVar8) break;
          }
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
      }
    }
    if (uVar5 < 2) {
      unaff_x24 = uVar11 - 1 & uVar12;
      plVar9 = *(long **)(lVar7 + unaff_x24 * 8);
    }
    else {
      unaff_x24 = uVar12;
      if (uVar11 <= uVar12) {
        uVar8 = 0;
        if (uVar11 != 0) {
          uVar8 = uVar12 / uVar11;
        }
        unaff_x24 = uVar12 - uVar8 * uVar11;
      }
      plVar9 = *(long **)(lVar7 + unaff_x24 * 8);
    }
    if (plVar9 != (long *)0x0) {
      if (uVar5 < 2) {
        while ((plVar9 = (long *)*plVar9, plVar9 != (long *)0x0 &&
               (plVar9[1] == uVar12 || (plVar9[1] & uVar11 - 1) == unaff_x24))) {
          if (plVar9[2] == uVar12) {
            return;
          }
        }
      }
      else {
        while (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0) {
          uVar5 = plVar9[1];
          if (uVar5 != uVar12) {
            if (uVar11 <= uVar5) {
              uVar8 = 0;
              if (uVar11 != 0) {
                uVar8 = uVar5 / uVar11;
              }
              uVar5 = uVar5 - uVar8 * uVar11;
            }
            if (uVar5 != unaff_x24) break;
          }
          if (plVar9[2] == uVar12) {
            return;
          }
        }
      }
    }
  }
  plVar9 = (long *)(**(code **)(*(long *)param_1[7] + 0x10))((long *)param_1[7],0x28,8);
  if (plVar9 == (long *)0x0) {
    (**(code **)(*(long *)param_1[7] + 0xb8))();
  }
  lVar7 = param_1[7];
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_DAT_04379520), puVar2 = PTR_DAT_04379528, iVar3 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar2,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (lVar4 == 0) {
    plVar9[2] = *param_2;
    *(undefined4 *)(plVar9 + 4) = 0;
    plVar9[3] = 0;
  }
  else {
    if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar7;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
    plVar9[2] = *param_2;
    *(undefined4 *)(plVar9 + 4) = 0;
    plVar9[3] = 0;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  }
  *plVar9 = 0;
  plVar9[1] = uVar12;
  if ((uVar11 == 0) || (*(float *)(param_1 + 0xc) * (float)uVar11 < (float)(param_1[0xb] + 1))) {
    uVar11 = (ulong)(uVar11 < 3 || (uVar11 & uVar11 - 1) != 0) | uVar11 << 1;
    uVar5 = (ulong)((float)(param_1[0xb] + 1) / *(float *)(param_1 + 0xc));
    if (uVar5 <= uVar11) {
      uVar5 = uVar11;
    }
    FUN_028db108(param_1,uVar5);
    uVar11 = param_1[1];
    if ((uVar11 & uVar11 - 1) == 0) {
      unaff_x24 = uVar11 - 1 & uVar12;
    }
    else if (uVar12 < uVar11) {
      unaff_x24 = uVar12;
    }
    else {
      uVar5 = 0;
      if (uVar11 != 0) {
        uVar5 = uVar12 / uVar11;
      }
      unaff_x24 = uVar12 - uVar5 * uVar11;
    }
  }
  plVar6 = *(long **)(*param_1 + unaff_x24 * 8);
  if (plVar6 == (long *)0x0) {
    plVar6 = param_1 + 6;
    *plVar9 = *plVar6;
    *plVar6 = (long)plVar9;
    *(long **)(*param_1 + unaff_x24 * 8) = plVar6;
    if (*plVar9 == 0) goto LAB_028da974;
    uVar12 = *(ulong *)(*plVar9 + 8);
    if ((uVar11 & uVar11 - 1) == 0) {
      uVar12 = uVar12 & uVar11 - 1;
    }
    else if (uVar11 <= uVar12) {
      uVar5 = 0;
      if (uVar11 != 0) {
        uVar5 = uVar12 / uVar11;
      }
      uVar12 = uVar12 - uVar5 * uVar11;
    }
    plVar6 = (long *)(*param_1 + uVar12 * 8);
  }
  else {
    *plVar9 = *plVar6;
  }
  *plVar6 = (long)plVar9;
LAB_028da974:
  param_1[0xb] = param_1[0xb] + 1;
  return;
}


