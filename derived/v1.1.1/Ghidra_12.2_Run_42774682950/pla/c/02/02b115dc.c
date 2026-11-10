/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b115dc; name: FUN_02b115dc
 */


void FUN_02b115dc(long param_1,ulong *param_2,long *param_3)

{
  long *plVar1;
  ulong uVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  ulong unaff_x27;
  undefined8 uVar13;
  float fVar14;
  
  uVar11 = *param_2;
  uVar12 = *(ulong *)(param_1 + 0x140);
  plVar1 = (long *)(param_1 + 0x138);
  if (uVar12 != 0) {
    uVar6 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
    uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
    uVar6 = (uVar6 + (uVar6 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar6 < 2) {
      uVar9 = uVar12 - 1 & uVar11;
    }
    else {
      uVar9 = uVar11;
      if (uVar12 <= uVar11) {
        uVar9 = 0;
        if (uVar12 != 0) {
          uVar9 = uVar11 / uVar12;
        }
        uVar9 = uVar11 - uVar9 * uVar12;
      }
    }
    lVar8 = *plVar1;
    plVar10 = *(long **)(lVar8 + uVar9 * 8);
    if ((plVar10 != (long *)0x0) && (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0)) {
      if (uVar6 < 2) {
        do {
          if (plVar10[1] == uVar11) {
            if (plVar10[2] == uVar11) {
              return;
            }
          }
          else if ((plVar10[1] & uVar12 - 1) != uVar9) break;
          plVar10 = (long *)*plVar10;
        } while (plVar10 != (long *)0x0);
      }
      else {
        do {
          uVar7 = plVar10[1];
          if (uVar7 == uVar11) {
            if (plVar10[2] == uVar11) {
              return;
            }
          }
          else {
            if (uVar12 <= uVar7) {
              uVar2 = 0;
              if (uVar12 != 0) {
                uVar2 = uVar7 / uVar12;
              }
              uVar7 = uVar7 - uVar2 * uVar12;
            }
            if (uVar7 != uVar9) break;
          }
          plVar10 = (long *)*plVar10;
        } while (plVar10 != (long *)0x0);
      }
    }
    if (uVar6 < 2) {
      unaff_x27 = uVar12 - 1 & uVar11;
      plVar10 = *(long **)(lVar8 + unaff_x27 * 8);
    }
    else {
      unaff_x27 = uVar11;
      if (uVar12 <= uVar11) {
        uVar9 = 0;
        if (uVar12 != 0) {
          uVar9 = uVar11 / uVar12;
        }
        unaff_x27 = uVar11 - uVar9 * uVar12;
      }
      plVar10 = *(long **)(lVar8 + unaff_x27 * 8);
    }
    if (plVar10 != (long *)0x0) {
      if (uVar6 < 2) {
        while ((plVar10 = (long *)*plVar10, plVar10 != (long *)0x0 &&
               (plVar10[1] == uVar11 || (plVar10[1] & uVar12 - 1) == unaff_x27))) {
          if (plVar10[2] == uVar11) {
            return;
          }
        }
      }
      else {
        while (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0) {
          uVar6 = plVar10[1];
          if (uVar6 != uVar11) {
            if (uVar12 <= uVar6) {
              uVar9 = 0;
              if (uVar12 != 0) {
                uVar9 = uVar6 / uVar12;
              }
              uVar6 = uVar6 - uVar9 * uVar12;
            }
            if (uVar6 != unaff_x27) break;
          }
          if (plVar10[2] == uVar11) {
            return;
          }
        }
      }
    }
  }
  plVar10 = (long *)(**(code **)(**(long **)(param_1 + 0x170) + 0x10))
                              (*(long **)(param_1 + 0x170),0x50,8);
  if (plVar10 == (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x170) + 0xb8))();
  }
  uVar13 = *(undefined8 *)(param_1 + 0x170);
  if ((*PTR_DAT_04379520 & 1) == 0) {
    iVar4 = __cxa_guard_acquire(PTR_DAT_04379520);
    puVar3 = PTR_DAT_04379528;
    if (iVar4 != 0) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar3,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
  }
  lVar8 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (lVar8 != 0) {
    if (0xf < *(ulong *)(lVar8 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = uVar13;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
  }
  plVar10[2] = *param_2;
  plVar10[3] = param_2[1];
  plVar10[4] = param_2[2];
  plVar5 = (long *)param_2[3];
  plVar10[5] = (long)plVar5;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x18))();
  }
  plVar10[6] = *param_3;
  plVar10[7] = param_3[1];
  plVar10[8] = param_3[2];
  plVar5 = (long *)param_3[3];
  plVar10[9] = (long)plVar5;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x18))();
  }
  if (lVar8 != 0) {
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
  }
  *plVar10 = 0;
  plVar10[1] = uVar11;
  fVar14 = (float)(*(long *)(param_1 + 400) + 1);
  if ((uVar12 == 0) || (*(float *)(param_1 + 0x198) * (float)uVar12 < fVar14)) {
    uVar12 = (ulong)(uVar12 < 3 || (uVar12 & uVar12 - 1) != 0) | uVar12 << 1;
    uVar6 = (ulong)(fVar14 / *(float *)(param_1 + 0x198));
    if (uVar6 <= uVar12) {
      uVar6 = uVar12;
    }
    if (uVar6 - 1 == 0) {
      uVar6 = 2;
    }
    else if ((uVar6 & uVar6 - 1) != 0) {
      uVar6 = std::__next_prime(uVar6);
    }
    uVar12 = *(ulong *)(param_1 + 0x140);
    if (uVar12 < uVar6) {
      uVar9 = uVar6;
LAB_02b11900:
      FUN_02b12af4(plVar1,uVar9);
    }
    else if (uVar6 < uVar12) {
      uVar9 = (ulong)((float)*(ulong *)(param_1 + 400) / *(float *)(param_1 + 0x198));
      if ((uVar12 < 3) ||
         (uVar7 = uVar12 - (uVar12 >> 1 & 0x5555555555555555),
         uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333),
         1 < (uVar7 + (uVar7 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
        uVar9 = std::__next_prime(uVar9);
      }
      else if (1 < uVar9) {
        uVar9 = 1L << ((ulong)(uint)-(int)LZCOUNT(uVar9 - 1) & 0x3f);
      }
      if (uVar9 <= uVar6) {
        uVar9 = uVar6;
      }
      if (uVar9 < uVar12) goto LAB_02b11900;
    }
    uVar12 = *(ulong *)(param_1 + 0x140);
    if ((uVar12 & uVar12 - 1) == 0) {
      unaff_x27 = uVar12 - 1 & uVar11;
    }
    else if (uVar11 < uVar12) {
      unaff_x27 = uVar11;
    }
    else {
      uVar6 = 0;
      if (uVar12 != 0) {
        uVar6 = uVar11 / uVar12;
      }
      unaff_x27 = uVar11 - uVar6 * uVar12;
    }
  }
  plVar5 = *(long **)(*plVar1 + unaff_x27 * 8);
  if (plVar5 == (long *)0x0) {
    *plVar10 = *(long *)(param_1 + 0x168);
    *(long **)(param_1 + 0x168) = plVar10;
    *(long *)(*(long *)(param_1 + 0x138) + unaff_x27 * 8) = param_1 + 0x168;
    if (*plVar10 == 0) goto LAB_02b11a38;
    uVar11 = *(ulong *)(*plVar10 + 8);
    if ((uVar12 & uVar12 - 1) == 0) {
      uVar11 = uVar11 & uVar12 - 1;
    }
    else if (uVar12 <= uVar11) {
      uVar6 = 0;
      if (uVar12 != 0) {
        uVar6 = uVar11 / uVar12;
      }
      uVar11 = uVar11 - uVar6 * uVar12;
    }
    plVar5 = (long *)(*plVar1 + uVar11 * 8);
  }
  else {
    *plVar10 = *plVar5;
  }
  *plVar5 = (long)plVar10;
LAB_02b11a38:
  *(long *)(param_1 + 400) = *(long *)(param_1 + 400) + 1;
  return;
}


