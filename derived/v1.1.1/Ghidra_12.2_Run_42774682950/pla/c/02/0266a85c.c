/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0266a85c; name: FUN_0266a85c
 */


void FUN_0266a85c(long param_1,uint param_2,undefined4 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  ulong unaff_x25;
  undefined8 uVar12;
  float fVar13;
  
  uVar11 = *(ulong *)(param_1 + 0x88);
  uVar10 = (ulong)param_2;
  if (uVar11 != 0) {
    uVar5 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
    uVar5 = (uVar5 + (uVar5 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar5 < 2) {
      uVar4 = (ulong)((int)uVar11 - 1U & param_2);
    }
    else {
      uVar4 = uVar10;
      if (uVar11 <= uVar10) {
        uVar4 = 0;
        if (uVar11 != 0) {
          uVar4 = uVar10 / uVar11;
        }
        uVar4 = uVar10 - uVar4 * uVar11;
      }
    }
    lVar8 = *(long *)(param_1 + 0x80);
    plVar9 = *(long **)(lVar8 + uVar4 * 8);
    if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
      if (uVar5 < 2) {
        do {
          if (plVar9[1] == uVar10) {
            if (*(uint *)(plVar9 + 2) == param_2) {
              return;
            }
          }
          else if ((plVar9[1] & uVar11 - 1) != uVar4) break;
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
      }
      else {
        do {
          uVar7 = plVar9[1];
          if (uVar7 == uVar10) {
            if (*(uint *)(plVar9 + 2) == param_2) {
              return;
            }
          }
          else {
            if (uVar11 <= uVar7) {
              uVar1 = 0;
              if (uVar11 != 0) {
                uVar1 = uVar7 / uVar11;
              }
              uVar7 = uVar7 - uVar1 * uVar11;
            }
            if (uVar7 != uVar4) break;
          }
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
      }
    }
    if (uVar5 < 2) {
      unaff_x25 = (ulong)((int)uVar11 - 1U & param_2);
LAB_0266a934:
      plVar9 = *(long **)(lVar8 + unaff_x25 * 8);
    }
    else {
      unaff_x25 = uVar10;
      if (uVar10 < uVar11) goto LAB_0266a934;
      uVar4 = 0;
      if (uVar11 != 0) {
        uVar4 = uVar10 / uVar11;
      }
      unaff_x25 = uVar10 - uVar4 * uVar11;
      plVar9 = *(long **)(lVar8 + unaff_x25 * 8);
    }
    if (plVar9 != (long *)0x0) {
      if (uVar5 < 2) {
        while ((plVar9 = (long *)*plVar9, plVar9 != (long *)0x0 &&
               (plVar9[1] == uVar10 || (plVar9[1] & uVar11 - 1) == unaff_x25))) {
          if (*(uint *)(plVar9 + 2) == param_2) {
            return;
          }
        }
      }
      else {
        while (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0) {
          uVar5 = plVar9[1];
          if (uVar5 != uVar10) {
            if (uVar11 <= uVar5) {
              uVar4 = 0;
              if (uVar11 != 0) {
                uVar4 = uVar5 / uVar11;
              }
              uVar5 = uVar5 - uVar4 * uVar11;
            }
            if (uVar5 != unaff_x25) break;
          }
          if (*(uint *)(plVar9 + 2) == param_2) {
            return;
          }
        }
      }
    }
  }
  plVar9 = (long *)(**(code **)(**(long **)(param_1 + 0xb8) + 0x10))
                             (*(long **)(param_1 + 0xb8),0x18,4);
  if (plVar9 == (long *)0x0) {
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
  lVar8 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (lVar8 == 0) {
    *(uint *)(plVar9 + 2) = param_2;
    *(undefined4 *)((long)plVar9 + 0x14) = param_3;
  }
  else {
    if (0xf < *(ulong *)(lVar8 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = uVar12;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
    *(uint *)(plVar9 + 2) = param_2;
    *(undefined4 *)((long)plVar9 + 0x14) = param_3;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
  }
  *plVar9 = 0;
  plVar9[1] = uVar10;
  fVar13 = (float)(*(long *)(param_1 + 0xd8) + 1);
  if ((uVar11 == 0) || (*(float *)(param_1 + 0xe0) * (float)uVar11 < fVar13)) {
    uVar11 = (ulong)(uVar11 < 3 || (uVar11 & uVar11 - 1) != 0) | uVar11 << 1;
    uVar5 = (ulong)(fVar13 / *(float *)(param_1 + 0xe0));
    if (uVar5 <= uVar11) {
      uVar5 = uVar11;
    }
    if (uVar5 - 1 == 0) {
      uVar5 = 2;
    }
    else if ((uVar5 & uVar5 - 1) != 0) {
      uVar5 = std::__next_prime(uVar5);
    }
    uVar11 = *(ulong *)(param_1 + 0x88);
    if (uVar11 < uVar5) {
      uVar4 = uVar5;
LAB_0266aa68:
      FUN_0266ad04(param_1 + 0x80,uVar4);
    }
    else if (uVar5 < uVar11) {
      uVar4 = (ulong)((float)*(ulong *)(param_1 + 0xd8) / *(float *)(param_1 + 0xe0));
      if ((uVar11 < 3) ||
         (uVar7 = uVar11 - (uVar11 >> 1 & 0x5555555555555555),
         uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333),
         1 < (uVar7 + (uVar7 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
        uVar4 = std::__next_prime(uVar4);
      }
      else if (1 < uVar4) {
        uVar4 = 1L << ((ulong)(uint)-(int)LZCOUNT(uVar4 - 1) & 0x3f);
      }
      if (uVar4 <= uVar5) {
        uVar4 = uVar5;
      }
      if (uVar4 < uVar11) goto LAB_0266aa68;
    }
    uVar11 = *(ulong *)(param_1 + 0x88);
    if ((uVar11 & uVar11 - 1) == 0) {
      unaff_x25 = (ulong)((int)uVar11 - 1U & param_2);
    }
    else if (uVar10 < uVar11) {
      unaff_x25 = uVar10;
    }
    else {
      uVar5 = 0;
      if (uVar11 != 0) {
        uVar5 = uVar10 / uVar11;
      }
      unaff_x25 = uVar10 - uVar5 * uVar11;
    }
  }
  plVar6 = *(long **)(*(long *)(param_1 + 0x80) + unaff_x25 * 8);
  if (plVar6 == (long *)0x0) {
    plVar6 = (long *)(param_1 + 0xb0);
    *plVar9 = *plVar6;
    *plVar6 = (long)plVar9;
    *(long **)(*(long *)(param_1 + 0x80) + unaff_x25 * 8) = plVar6;
    if (*plVar9 == 0) goto LAB_0266aad0;
    uVar10 = *(ulong *)(*plVar9 + 8);
    if ((uVar11 & uVar11 - 1) == 0) {
      uVar10 = uVar10 & uVar11 - 1;
    }
    else if (uVar11 <= uVar10) {
      uVar5 = 0;
      if (uVar11 != 0) {
        uVar5 = uVar10 / uVar11;
      }
      uVar10 = uVar10 - uVar5 * uVar11;
    }
    plVar6 = (long *)(*(long *)(param_1 + 0x80) + uVar10 * 8);
  }
  else {
    *plVar9 = *plVar6;
  }
  *plVar6 = (long)plVar9;
LAB_0266aad0:
  *(long *)(param_1 + 0xd8) = *(long *)(param_1 + 0xd8) + 1;
  return;
}


