/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 019e9e70; name: FUN_019e9e70
 */


void FUN_019e9e70(long *param_1,uint *param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong unaff_x26;
  long lVar13;
  
  uVar1 = *param_2;
  uVar11 = (ulong)uVar1;
  uVar12 = param_1[1];
  if (uVar12 != 0) {
    uVar7 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
    uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
    uVar7 = (uVar7 + (uVar7 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar7 < 2) {
      unaff_x26 = (ulong)((int)uVar12 - 1U & uVar1);
    }
    else {
      unaff_x26 = uVar11;
      if (uVar12 <= uVar11) {
        uVar6 = 0;
        if (uVar12 != 0) {
          uVar6 = uVar11 / uVar12;
        }
        unaff_x26 = uVar11 - uVar6 * uVar12;
      }
    }
    plVar8 = *(long **)(*param_1 + unaff_x26 * 8);
    if (plVar8 != (long *)0x0) {
      if (uVar7 < 2) {
        while ((plVar8 = (long *)*plVar8, plVar8 != (long *)0x0 &&
               (plVar8[1] == uVar11 || (plVar8[1] & uVar12 - 1) == unaff_x26))) {
          if (*(uint *)(plVar8 + 2) == uVar1) {
            return;
          }
        }
      }
      else {
        while (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0) {
          uVar7 = plVar8[1];
          if (uVar7 != uVar11) {
            if (uVar12 <= uVar7) {
              uVar6 = 0;
              if (uVar12 != 0) {
                uVar6 = uVar7 / uVar12;
              }
              uVar7 = uVar7 - uVar6 * uVar12;
            }
            if (uVar7 != unaff_x26) break;
          }
          if (*(uint *)(plVar8 + 2) == uVar1) {
            return;
          }
        }
      }
    }
  }
  plVar8 = (long *)(**(code **)(*(long *)param_1[7] + 0x10))((long *)param_1[7],0x38,8);
  if (plVar8 == (long *)0x0) {
    (**(code **)(*(long *)param_1[7] + 0xb8))();
  }
  lVar13 = param_1[7];
  if ((*PTR_DAT_04379520 & 1) == 0) {
    iVar4 = __cxa_guard_acquire(PTR_DAT_04379520);
    puVar3 = PTR_DAT_04379528;
    if (iVar4 != 0) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar3,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
  }
  lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (lVar5 != 0) {
    if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = lVar13;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
  }
  uVar2 = *param_2;
  plVar8[3] = 0;
  plVar8[4] = 0;
  *(uint *)(plVar8 + 2) = uVar2;
  FUN_00b5fc1c(plVar8 + 3,param_3);
  lVar13 = *(long *)(param_3 + 0x18);
  plVar8[5] = *(long *)(param_3 + 0x10);
  plVar8[6] = lVar13;
  if (lVar5 != 0) {
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
  }
  *plVar8 = 0;
  plVar8[1] = uVar11;
  if ((uVar12 == 0) || (*(float *)(param_1 + 0xc) * (float)uVar12 < (float)(param_1[0xb] + 1))) {
    uVar12 = (ulong)(uVar12 < 3 || (uVar12 & uVar12 - 1) != 0) | uVar12 << 1;
    uVar7 = (ulong)((float)(param_1[0xb] + 1) / *(float *)(param_1 + 0xc));
    if (uVar7 <= uVar12) {
      uVar7 = uVar12;
    }
    if (uVar7 - 1 == 0) {
      uVar7 = 2;
    }
    else if ((uVar7 & uVar7 - 1) != 0) {
      uVar7 = std::__next_prime(uVar7);
    }
    uVar12 = param_1[1];
    if (uVar12 < uVar7) {
      uVar6 = uVar7;
LAB_019ea094:
      FUN_019eced0(param_1,uVar6);
    }
    else if (uVar7 < uVar12) {
      uVar6 = (ulong)((float)(ulong)param_1[0xb] / *(float *)(param_1 + 0xc));
      if ((uVar12 < 3) ||
         (uVar10 = uVar12 - (uVar12 >> 1 & 0x5555555555555555),
         uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333),
         1 < (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
        uVar6 = std::__next_prime(uVar6);
      }
      else if (1 < uVar6) {
        uVar6 = 1L << ((ulong)(uint)-(int)LZCOUNT(uVar6 - 1) & 0x3f);
      }
      if (uVar6 <= uVar7) {
        uVar6 = uVar7;
      }
      if (uVar6 < uVar12) goto LAB_019ea094;
    }
    uVar12 = param_1[1];
    if ((uVar12 & uVar12 - 1) == 0) {
      unaff_x26 = (ulong)((int)uVar12 - 1U & uVar1);
    }
    else if (uVar11 < uVar12) {
      unaff_x26 = uVar11;
    }
    else {
      uVar7 = 0;
      if (uVar12 != 0) {
        uVar7 = uVar11 / uVar12;
      }
      unaff_x26 = uVar11 - uVar7 * uVar12;
    }
  }
  plVar9 = *(long **)(*param_1 + unaff_x26 * 8);
  if (plVar9 == (long *)0x0) {
    plVar9 = param_1 + 6;
    *plVar8 = *plVar9;
    *plVar9 = (long)plVar8;
    *(long **)(*param_1 + unaff_x26 * 8) = plVar9;
    if (*plVar8 == 0) goto LAB_019e9fe4;
    uVar11 = *(ulong *)(*plVar8 + 8);
    if ((uVar12 & uVar12 - 1) == 0) {
      uVar11 = uVar11 & uVar12 - 1;
    }
    else if (uVar12 <= uVar11) {
      uVar7 = 0;
      if (uVar12 != 0) {
        uVar7 = uVar11 / uVar12;
      }
      uVar11 = uVar11 - uVar7 * uVar12;
    }
    plVar9 = (long *)(*param_1 + uVar11 * 8);
  }
  else {
    *plVar8 = *plVar9;
  }
  *plVar9 = (long)plVar8;
LAB_019e9fe4:
  param_1[0xb] = param_1[0xb] + 1;
  return;
}


