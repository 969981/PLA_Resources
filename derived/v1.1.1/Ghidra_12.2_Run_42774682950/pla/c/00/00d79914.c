/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d79914; name: FUN_00d79914
 */


void FUN_00d79914(long *param_1,ulong *param_2,long *param_3)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong unaff_x26;
  long lVar11;
  
  uVar9 = *param_2;
  uVar10 = param_1[1];
  if (uVar10 != 0) {
    uVar6 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
    uVar6 = (uVar6 + (uVar6 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar6 < 2) {
      unaff_x26 = uVar10 - 1 & uVar9;
    }
    else {
      unaff_x26 = uVar9;
      if (uVar10 <= uVar9) {
        uVar5 = 0;
        if (uVar10 != 0) {
          uVar5 = uVar9 / uVar10;
        }
        unaff_x26 = uVar9 - uVar5 * uVar10;
      }
    }
    plVar7 = *(long **)(*param_1 + unaff_x26 * 8);
    if (plVar7 != (long *)0x0) {
      if (uVar6 < 2) {
        while ((plVar7 = (long *)*plVar7, plVar7 != (long *)0x0 &&
               (plVar7[1] == uVar9 || (plVar7[1] & uVar10 - 1) == unaff_x26))) {
          if (plVar7[2] == uVar9) {
            return;
          }
        }
      }
      else {
        while (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0) {
          uVar6 = plVar7[1];
          if (uVar6 != uVar9) {
            if (uVar10 <= uVar6) {
              uVar5 = 0;
              if (uVar10 != 0) {
                uVar5 = uVar6 / uVar10;
              }
              uVar6 = uVar6 - uVar5 * uVar10;
            }
            if (uVar6 != unaff_x26) break;
          }
          if (plVar7[2] == uVar9) {
            return;
          }
        }
      }
    }
  }
  plVar7 = (long *)(**(code **)(*(long *)param_1[7] + 0x10))((long *)param_1[7],0x38,8);
  if (plVar7 == (long *)0x0) {
    (**(code **)(*(long *)param_1[7] + 0xb8))();
  }
  lVar11 = param_1[7];
  if ((*PTR_DAT_04379520 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(PTR_DAT_04379520);
    puVar1 = PTR_DAT_04379528;
    if (iVar2 != 0) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
  }
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (lVar3 != 0) {
    if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar11;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  }
  plVar7[2] = *param_2;
  plVar7[3] = param_2[1];
  plVar7[4] = param_2[2];
  plVar4 = (long *)param_2[3];
  plVar7[5] = (long)plVar4;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x18))();
  }
  param_3 = (long *)*param_3;
  plVar7[6] = (long)param_3;
  if (param_3 != (long *)0x0) {
    (**(code **)(*param_3 + 0x18))();
  }
  if (lVar3 != 0) {
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  }
  *plVar7 = 0;
  plVar7[1] = uVar9;
  if ((uVar10 == 0) || (*(float *)(param_1 + 0xc) * (float)uVar10 < (float)(param_1[0xb] + 1))) {
    uVar10 = (ulong)(uVar10 < 3 || (uVar10 & uVar10 - 1) != 0) | uVar10 << 1;
    uVar6 = (ulong)((float)(param_1[0xb] + 1) / *(float *)(param_1 + 0xc));
    if (uVar6 <= uVar10) {
      uVar6 = uVar10;
    }
    if (uVar6 - 1 == 0) {
      uVar6 = 2;
    }
    else if ((uVar6 & uVar6 - 1) != 0) {
      uVar6 = std::__next_prime(uVar6);
    }
    uVar10 = param_1[1];
    if (uVar10 < uVar6) {
      uVar5 = uVar6;
LAB_00d79b9c:
      FUN_00d7c098(param_1,uVar5);
    }
    else if (uVar6 < uVar10) {
      uVar5 = (ulong)((float)(ulong)param_1[0xb] / *(float *)(param_1 + 0xc));
      if ((uVar10 < 3) ||
         (uVar8 = uVar10 - (uVar10 >> 1 & 0x5555555555555555),
         uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333),
         1 < (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
        uVar5 = std::__next_prime(uVar5);
      }
      else if (1 < uVar5) {
        uVar5 = 1L << ((ulong)(uint)-(int)LZCOUNT(uVar5 - 1) & 0x3f);
      }
      if (uVar5 <= uVar6) {
        uVar5 = uVar6;
      }
      if (uVar5 < uVar10) goto LAB_00d79b9c;
    }
    uVar10 = param_1[1];
    if ((uVar10 & uVar10 - 1) == 0) {
      unaff_x26 = uVar10 - 1 & uVar9;
    }
    else if (uVar9 < uVar10) {
      unaff_x26 = uVar9;
    }
    else {
      uVar6 = 0;
      if (uVar10 != 0) {
        uVar6 = uVar9 / uVar10;
      }
      unaff_x26 = uVar9 - uVar6 * uVar10;
    }
  }
  plVar4 = *(long **)(*param_1 + unaff_x26 * 8);
  if (plVar4 == (long *)0x0) {
    plVar4 = param_1 + 6;
    *plVar7 = *plVar4;
    *plVar4 = (long)plVar7;
    *(long **)(*param_1 + unaff_x26 * 8) = plVar4;
    if (*plVar7 == 0) goto LAB_00d79ac8;
    uVar9 = *(ulong *)(*plVar7 + 8);
    if ((uVar10 & uVar10 - 1) == 0) {
      uVar9 = uVar9 & uVar10 - 1;
    }
    else if (uVar10 <= uVar9) {
      uVar6 = 0;
      if (uVar10 != 0) {
        uVar6 = uVar9 / uVar10;
      }
      uVar9 = uVar9 - uVar6 * uVar10;
    }
    plVar4 = (long *)(*param_1 + uVar9 * 8);
  }
  else {
    *plVar7 = *plVar4;
  }
  *plVar4 = (long)plVar7;
LAB_00d79ac8:
  param_1[0xb] = param_1[0xb] + 1;
  return;
}


