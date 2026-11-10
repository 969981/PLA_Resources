/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029201c0; name: FUN_029201c0
 */


void FUN_029201c0(long *param_1,ulong *param_2,long *param_3)

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
  ulong uVar10;
  ulong uVar11;
  ulong unaff_x25;
  long *plVar12;
  long lVar13;
  long *local_78;
  long *plStack_70;
  undefined1 local_68;
  
  uVar10 = *param_2;
  uVar11 = param_1[1];
  if (uVar11 != 0) {
    uVar7 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
    uVar7 = (uVar7 + (uVar7 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar7 < 2) {
      unaff_x25 = uVar11 - 1 & uVar10;
    }
    else {
      unaff_x25 = uVar10;
      if (uVar11 <= uVar10) {
        uVar6 = 0;
        if (uVar11 != 0) {
          uVar6 = uVar10 / uVar11;
        }
        unaff_x25 = uVar10 - uVar6 * uVar11;
      }
    }
    plVar8 = *(long **)(*param_1 + unaff_x25 * 8);
    if (plVar8 != (long *)0x0) {
      if (uVar7 < 2) {
        while ((plVar8 = (long *)*plVar8, plVar8 != (long *)0x0 &&
               (plVar8[1] == uVar10 || (plVar8[1] & uVar11 - 1) == unaff_x25))) {
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
            if (uVar7 != unaff_x25) break;
          }
          if (plVar8[2] == uVar10) {
            return;
          }
        }
      }
    }
  }
  plVar12 = param_1 + 7;
  plVar8 = (long *)(**(code **)(*(long *)*plVar12 + 0x10))((long *)*plVar12,0x50,8);
  if (plVar8 == (long *)0x0) {
    (**(code **)(*(long *)*plVar12 + 0xb8))();
  }
  local_68 = 0;
  lVar13 = *plVar12;
  local_78 = plVar8;
  plStack_70 = plVar12;
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
  plVar12 = local_78;
  if (lVar5 != 0) {
    if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = lVar13;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
  }
  uVar7 = *param_2;
  plVar8[4] = 0;
  plVar8[5] = 0;
  plVar8[2] = uVar7;
  plVar8[3] = 0;
  lVar13 = param_3[3];
  lVar1 = param_3[4];
  lVar2 = param_3[6];
  plVar8[8] = param_3[5];
  plVar8[9] = lVar2;
  plVar8[6] = lVar13;
  plVar8[7] = lVar1;
  plVar8[3] = *param_3;
  plVar8[4] = param_3[1];
  plVar8[5] = param_3[2];
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  if (lVar5 != 0) {
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
  }
  local_68 = 1;
  *local_78 = 0;
  local_78[1] = uVar10;
  if ((uVar11 != 0) && ((float)(param_1[0xb] + 1) <= *(float *)(param_1 + 0xc) * (float)uVar11))
  goto LAB_02920504;
  uVar11 = (ulong)(uVar11 < 3 || (uVar11 & uVar11 - 1) != 0) | uVar11 << 1;
  uVar7 = (ulong)((float)(param_1[0xb] + 1) / *(float *)(param_1 + 0xc));
  if (uVar7 <= uVar11) {
    uVar7 = uVar11;
  }
  if (uVar7 - 1 == 0) {
    uVar7 = 2;
  }
  else if ((uVar7 & uVar7 - 1) != 0) {
    uVar7 = std::__next_prime(uVar7);
  }
  uVar11 = param_1[1];
  if (uVar11 < uVar7) {
    uVar6 = uVar7;
LAB_02920438:
    FUN_029248ac(param_1,uVar6);
  }
  else if (uVar7 < uVar11) {
    uVar6 = (ulong)((float)(ulong)param_1[0xb] / *(float *)(param_1 + 0xc));
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
    if (uVar6 < uVar11) goto LAB_02920438;
  }
  uVar11 = param_1[1];
  if ((uVar11 & uVar11 - 1) == 0) {
    unaff_x25 = uVar11 - 1 & uVar10;
  }
  else if (uVar10 < uVar11) {
    unaff_x25 = uVar10;
  }
  else {
    uVar7 = 0;
    if (uVar11 != 0) {
      uVar7 = uVar10 / uVar11;
    }
    unaff_x25 = uVar10 - uVar7 * uVar11;
  }
LAB_02920504:
  plVar8 = *(long **)(*param_1 + unaff_x25 * 8);
  if (plVar8 == (long *)0x0) {
    plVar8 = param_1 + 6;
    *plVar12 = *plVar8;
    *plVar8 = (long)plVar12;
    *(long **)(*param_1 + unaff_x25 * 8) = plVar8;
    if (*plVar12 != 0) {
      uVar10 = *(ulong *)(*plVar12 + 8);
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
      *(long **)(*param_1 + uVar10 * 8) = plVar12;
    }
  }
  else {
    *plVar12 = *plVar8;
    *plVar8 = (long)plVar12;
  }
  local_78 = (long *)0x0;
  param_1[0xb] = param_1[0xb] + 1;
  FUN_0292466c(&local_78);
  return;
}


