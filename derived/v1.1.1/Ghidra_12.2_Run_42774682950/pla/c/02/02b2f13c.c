/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b2f13c; name: FUN_02b2f13c
 */


void FUN_02b2f13c(long param_1,ulong *param_2,char *param_3)

{
  long *plVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong unaff_x27;
  undefined8 uVar12;
  float fVar13;
  
  uVar10 = *param_2;
  uVar11 = *(ulong *)(param_1 + 0x68);
  plVar1 = (long *)(param_1 + 0x60);
  if (uVar11 != 0) {
    uVar7 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
    uVar7 = (uVar7 + (uVar7 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar7 < 2) {
      unaff_x27 = uVar11 - 1 & uVar10;
    }
    else {
      unaff_x27 = uVar10;
      if (uVar11 <= uVar10) {
        uVar6 = 0;
        if (uVar11 != 0) {
          uVar6 = uVar10 / uVar11;
        }
        unaff_x27 = uVar10 - uVar6 * uVar11;
      }
    }
    plVar8 = *(long **)(*plVar1 + unaff_x27 * 8);
    if (plVar8 != (long *)0x0) {
      if (uVar7 < 2) {
        while ((plVar8 = (long *)*plVar8, plVar8 != (long *)0x0 &&
               (plVar8[1] == uVar10 || (plVar8[1] & uVar11 - 1) == unaff_x27))) {
          if (plVar8[2] == uVar10) {
            return;
          }
        }
      }
      else {
        while (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0) {
          uVar7 = plVar8[1];
          if (uVar7 != uVar10) {
            if (uVar11 <= uVar7) {
              uVar6 = 0;
              if (uVar11 != 0) {
                uVar6 = uVar7 / uVar11;
              }
              uVar7 = uVar7 - uVar6 * uVar11;
            }
            if (uVar7 != unaff_x27) break;
          }
          if (plVar8[2] == uVar10) {
            return;
          }
        }
      }
    }
  }
  plVar8 = (long *)(**(code **)(**(long **)(param_1 + 0x98) + 0x10))
                             (*(long **)(param_1 + 0x98),0x58,8);
  if (plVar8 == (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x98) + 0xb8))();
  }
  uVar12 = *(undefined8 *)(param_1 + 0x98);
  if ((*PTR_DAT_04379520 & 1) == 0) {
    iVar3 = __cxa_guard_acquire(PTR_DAT_04379520);
    puVar2 = PTR_DAT_04379528;
    if (iVar3 != 0) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar2,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
  }
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (lVar4 != 0) {
    if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = uVar12;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
  }
  plVar8[2] = *param_2;
  plVar8[3] = param_2[1];
  plVar8[4] = param_2[2];
  plVar5 = (long *)param_2[3];
  plVar8[5] = (long)plVar5;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x18))();
  }
  *(undefined1 *)(plVar8 + 6) = 0;
  if (*param_3 != '\0') {
    plVar8[7] = *(long *)(param_3 + 8);
    plVar8[8] = *(long *)(param_3 + 0x10);
    plVar8[9] = *(long *)(param_3 + 0x18);
    plVar5 = *(long **)(param_3 + 0x20);
    plVar8[10] = (long)plVar5;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x18))();
    }
    *(undefined1 *)(plVar8 + 6) = 1;
  }
  if (lVar4 != 0) {
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  }
  *plVar8 = 0;
  plVar8[1] = uVar10;
  fVar13 = (float)(*(long *)(param_1 + 0xb8) + 1);
  if ((uVar11 == 0) || (*(float *)(param_1 + 0xc0) * (float)uVar11 < fVar13)) {
    uVar11 = (ulong)(uVar11 < 3 || (uVar11 & uVar11 - 1) != 0) | uVar11 << 1;
    uVar7 = (ulong)(fVar13 / *(float *)(param_1 + 0xc0));
    if (uVar7 <= uVar11) {
      uVar7 = uVar11;
    }
    if (uVar7 - 1 == 0) {
      uVar7 = 2;
    }
    else if ((uVar7 & uVar7 - 1) != 0) {
      uVar7 = std::__next_prime(uVar7);
    }
    uVar11 = *(ulong *)(param_1 + 0x68);
    if (uVar11 < uVar7) {
      uVar6 = uVar7;
LAB_02b2f3c0:
      FUN_02b34408(plVar1,uVar6);
    }
    else if (uVar7 < uVar11) {
      uVar6 = (ulong)((float)*(ulong *)(param_1 + 0xb8) / *(float *)(param_1 + 0xc0));
      if ((uVar11 < 3) ||
         (uVar9 = uVar11 - (uVar11 >> 1 & 0x5555555555555555),
         uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333),
         1 < (uVar9 + (uVar9 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
        uVar6 = std::__next_prime(uVar6);
      }
      else if (1 < uVar6) {
        uVar6 = 1L << ((ulong)(uint)-(int)LZCOUNT(uVar6 - 1) & 0x3f);
      }
      if (uVar6 <= uVar7) {
        uVar6 = uVar7;
      }
      if (uVar6 < uVar11) goto LAB_02b2f3c0;
    }
    uVar11 = *(ulong *)(param_1 + 0x68);
    if ((uVar11 & uVar11 - 1) == 0) {
      unaff_x27 = uVar11 - 1 & uVar10;
    }
    else if (uVar10 < uVar11) {
      unaff_x27 = uVar10;
    }
    else {
      uVar7 = 0;
      if (uVar11 != 0) {
        uVar7 = uVar10 / uVar11;
      }
      unaff_x27 = uVar10 - uVar7 * uVar11;
    }
  }
  plVar5 = *(long **)(*plVar1 + unaff_x27 * 8);
  if (plVar5 == (long *)0x0) {
    plVar5 = (long *)(param_1 + 0x90);
    *plVar8 = *plVar5;
    *plVar5 = (long)plVar8;
    *(long **)(*(long *)(param_1 + 0x60) + unaff_x27 * 8) = plVar5;
    if (*plVar8 == 0) goto LAB_02b2f4f8;
    uVar10 = *(ulong *)(*plVar8 + 8);
    if ((uVar11 & uVar11 - 1) == 0) {
      uVar10 = uVar10 & uVar11 - 1;
    }
    else if (uVar11 <= uVar10) {
      uVar7 = 0;
      if (uVar11 != 0) {
        uVar7 = uVar10 / uVar11;
      }
      uVar10 = uVar10 - uVar7 * uVar11;
    }
    plVar5 = (long *)(*plVar1 + uVar10 * 8);
  }
  else {
    *plVar8 = *plVar5;
  }
  *plVar5 = (long)plVar8;
LAB_02b2f4f8:
  *(long *)(param_1 + 0xb8) = *(long *)(param_1 + 0xb8) + 1;
  return;
}


