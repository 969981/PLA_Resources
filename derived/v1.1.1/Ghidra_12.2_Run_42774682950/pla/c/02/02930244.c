/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02930244; name: FUN_02930244
 */


void FUN_02930244(long *param_1,ulong *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  ulong unaff_x25;
  long lVar13;
  
  uVar11 = *param_2;
  uVar12 = param_1[1];
  if (uVar12 != 0) {
    uVar7 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
    uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
    uVar7 = (uVar7 + (uVar7 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar7 < 2) {
      unaff_x25 = uVar12 - 1 & uVar11;
    }
    else {
      unaff_x25 = uVar11;
      if (uVar12 <= uVar11) {
        uVar6 = 0;
        if (uVar12 != 0) {
          uVar6 = uVar11 / uVar12;
        }
        unaff_x25 = uVar11 - uVar6 * uVar12;
      }
    }
    plVar8 = *(long **)(*param_1 + unaff_x25 * 8);
    if (plVar8 != (long *)0x0) {
      if (uVar7 < 2) {
        while ((plVar8 = (long *)*plVar8, plVar8 != (long *)0x0 &&
               (plVar8[1] == uVar11 || (plVar8[1] & uVar12 - 1) == unaff_x25))) {
          if (plVar8[2] == uVar11) {
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
            if (uVar7 != unaff_x25) break;
          }
          if (plVar8[2] == uVar11) {
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
  if (lVar5 == 0) {
    plVar8[2] = *param_2;
    lVar13 = *param_3;
    lVar5 = param_3[1];
    lVar1 = param_3[3];
    plVar8[5] = param_3[2];
    plVar8[6] = lVar1;
    plVar8[3] = lVar13;
    plVar8[4] = lVar5;
  }
  else {
    if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = lVar13;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
    plVar8[2] = *param_2;
    lVar13 = *param_3;
    lVar1 = param_3[1];
    lVar2 = param_3[3];
    plVar8[5] = param_3[2];
    plVar8[6] = lVar2;
    plVar8[3] = lVar13;
    plVar8[4] = lVar1;
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
LAB_02930478:
      FUN_02930640(param_1,uVar6);
    }
    else if (uVar7 < uVar12) {
      uVar6 = (ulong)((float)(ulong)param_1[0xb] / *(float *)(param_1 + 0xc));
      if ((uVar12 < 3) ||
         (uVar9 = uVar12 - (uVar12 >> 1 & 0x5555555555555555),
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
      if (uVar6 < uVar12) goto LAB_02930478;
    }
    uVar12 = param_1[1];
    if ((uVar12 & uVar12 - 1) == 0) {
      unaff_x25 = uVar12 - 1 & uVar11;
    }
    else if (uVar11 < uVar12) {
      unaff_x25 = uVar11;
    }
    else {
      uVar7 = 0;
      if (uVar12 != 0) {
        uVar7 = uVar11 / uVar12;
      }
      unaff_x25 = uVar11 - uVar7 * uVar12;
    }
  }
  plVar10 = *(long **)(*param_1 + unaff_x25 * 8);
  if (plVar10 == (long *)0x0) {
    plVar10 = param_1 + 6;
    *plVar8 = *plVar10;
    *plVar10 = (long)plVar8;
    *(long **)(*param_1 + unaff_x25 * 8) = plVar10;
    if (*plVar8 == 0) goto LAB_029305b0;
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
    plVar10 = (long *)(*param_1 + uVar11 * 8);
  }
  else {
    *plVar8 = *plVar10;
  }
  *plVar10 = (long)plVar8;
LAB_029305b0:
  param_1[0xb] = param_1[0xb] + 1;
  return;
}


