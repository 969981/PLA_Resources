/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e26db0; name: FUN_01e26db0
 */


void FUN_01e26db0(long param_1,uint param_2,undefined4 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong unaff_x25;
  undefined8 uVar12;
  float fVar13;
  
  uVar11 = *(ulong *)(param_1 + 0x88);
  uVar10 = (ulong)param_2;
  if (uVar11 != 0) {
    uVar4 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
    uVar4 = (uVar4 + (uVar4 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar4 < 2) {
      uVar7 = (ulong)((int)uVar11 - 1U & param_2);
    }
    else {
      uVar7 = uVar10;
      if (uVar11 <= uVar10) {
        uVar7 = 0;
        if (uVar11 != 0) {
          uVar7 = uVar10 / uVar11;
        }
        uVar7 = uVar10 - uVar7 * uVar11;
      }
    }
    lVar6 = *(long *)(param_1 + 0x80);
    plVar8 = *(long **)(lVar6 + uVar7 * 8);
    if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
      if (uVar4 < 2) {
        do {
          if (plVar8[1] == uVar10) {
            if (*(uint *)(plVar8 + 2) == param_2) {
              return;
            }
          }
          else if ((plVar8[1] & uVar11 - 1) != uVar7) break;
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
      else {
        do {
          uVar9 = plVar8[1];
          if (uVar9 == uVar10) {
            if (*(uint *)(plVar8 + 2) == param_2) {
              return;
            }
          }
          else {
            if (uVar11 <= uVar9) {
              uVar1 = 0;
              if (uVar11 != 0) {
                uVar1 = uVar9 / uVar11;
              }
              uVar9 = uVar9 - uVar1 * uVar11;
            }
            if (uVar9 != uVar7) break;
          }
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
    }
    if (uVar4 < 2) {
      unaff_x25 = (ulong)((int)uVar11 - 1U & param_2);
      plVar8 = *(long **)(lVar6 + unaff_x25 * 8);
    }
    else {
      unaff_x25 = uVar10;
      if (uVar11 <= uVar10) {
        uVar7 = 0;
        if (uVar11 != 0) {
          uVar7 = uVar10 / uVar11;
        }
        unaff_x25 = uVar10 - uVar7 * uVar11;
      }
      plVar8 = *(long **)(lVar6 + unaff_x25 * 8);
    }
    if (plVar8 != (long *)0x0) {
      if (uVar4 < 2) {
        while ((plVar8 = (long *)*plVar8, plVar8 != (long *)0x0 &&
               (plVar8[1] == uVar10 || (plVar8[1] & uVar11 - 1) == unaff_x25))) {
          if (*(uint *)(plVar8 + 2) == param_2) {
            return;
          }
        }
      }
      else {
        while (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0) {
          uVar4 = plVar8[1];
          if (uVar4 != uVar10) {
            if (uVar11 <= uVar4) {
              uVar7 = 0;
              if (uVar11 != 0) {
                uVar7 = uVar4 / uVar11;
              }
              uVar4 = uVar4 - uVar7 * uVar11;
            }
            if (uVar4 != unaff_x25) break;
          }
          if (*(uint *)(plVar8 + 2) == param_2) {
            return;
          }
        }
      }
    }
  }
  plVar8 = (long *)(**(code **)(**(long **)(param_1 + 0xb8) + 0x10))
                             (*(long **)(param_1 + 0xb8),0x18,4);
  if (plVar8 == (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0xb8) + 0xb8))();
  }
  uVar12 = *(undefined8 *)(param_1 + 0xb8);
  if ((*PTR_DAT_04379520 & 1) == 0) {
    iVar3 = __cxa_guard_acquire(PTR_DAT_04379520);
    puVar2 = PTR_DAT_04379528;
    if (iVar3 != 0) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar2,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
  }
  lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (lVar6 == 0) {
    *(uint *)(plVar8 + 2) = param_2;
    *(undefined4 *)((long)plVar8 + 0x14) = param_3;
  }
  else {
    if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = uVar12;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    *(uint *)(plVar8 + 2) = param_2;
    *(undefined4 *)((long)plVar8 + 0x14) = param_3;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
  }
  *plVar8 = 0;
  plVar8[1] = uVar10;
  fVar13 = (float)(*(long *)(param_1 + 0xd8) + 1);
  if ((uVar11 == 0) || (*(float *)(param_1 + 0xe0) * (float)uVar11 < fVar13)) {
    uVar11 = (ulong)(uVar11 < 3 || (uVar11 & uVar11 - 1) != 0) | uVar11 << 1;
    uVar4 = (ulong)(fVar13 / *(float *)(param_1 + 0xe0));
    if (uVar4 <= uVar11) {
      uVar4 = uVar11;
    }
    if (uVar4 - 1 == 0) {
      uVar4 = 2;
    }
    else if ((uVar4 & uVar4 - 1) != 0) {
      uVar4 = std::__next_prime(uVar4);
    }
    uVar11 = *(ulong *)(param_1 + 0x88);
    if (uVar11 < uVar4) {
      uVar7 = uVar4;
LAB_01e27080:
      FUN_01e2725c(param_1 + 0x80,uVar7);
    }
    else if (uVar4 < uVar11) {
      uVar7 = (ulong)((float)*(ulong *)(param_1 + 0xd8) / *(float *)(param_1 + 0xe0));
      if ((uVar11 < 3) ||
         (uVar9 = uVar11 - (uVar11 >> 1 & 0x5555555555555555),
         uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333),
         1 < (uVar9 + (uVar9 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
        uVar7 = std::__next_prime(uVar7);
      }
      else if (1 < uVar7) {
        uVar7 = 1L << ((ulong)(uint)-(int)LZCOUNT(uVar7 - 1) & 0x3f);
      }
      if (uVar7 <= uVar4) {
        uVar7 = uVar4;
      }
      if (uVar7 < uVar11) goto LAB_01e27080;
    }
    uVar11 = *(ulong *)(param_1 + 0x88);
    if ((uVar11 & uVar11 - 1) == 0) {
      unaff_x25 = (ulong)((int)uVar11 - 1U & param_2);
    }
    else if (uVar10 < uVar11) {
      unaff_x25 = uVar10;
    }
    else {
      uVar4 = 0;
      if (uVar11 != 0) {
        uVar4 = uVar10 / uVar11;
      }
      unaff_x25 = uVar10 - uVar4 * uVar11;
    }
  }
  plVar5 = *(long **)(*(long *)(param_1 + 0x80) + unaff_x25 * 8);
  if (plVar5 == (long *)0x0) {
    plVar5 = (long *)(param_1 + 0xb0);
    *plVar8 = *plVar5;
    *plVar5 = (long)plVar8;
    *(long **)(*(long *)(param_1 + 0x80) + unaff_x25 * 8) = plVar5;
    if (*plVar8 == 0) goto LAB_01e26ffc;
    uVar10 = *(ulong *)(*plVar8 + 8);
    if ((uVar11 & uVar11 - 1) == 0) {
      uVar10 = uVar10 & uVar11 - 1;
    }
    else if (uVar11 <= uVar10) {
      uVar4 = 0;
      if (uVar11 != 0) {
        uVar4 = uVar10 / uVar11;
      }
      uVar10 = uVar10 - uVar4 * uVar11;
    }
    plVar5 = (long *)(*(long *)(param_1 + 0x80) + uVar10 * 8);
  }
  else {
    *plVar8 = *plVar5;
  }
  *plVar5 = (long)plVar8;
LAB_01e26ffc:
  *(long *)(param_1 + 0xd8) = *(long *)(param_1 + 0xd8) + 1;
  return;
}


