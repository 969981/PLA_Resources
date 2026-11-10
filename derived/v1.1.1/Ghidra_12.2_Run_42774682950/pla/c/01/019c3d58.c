/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 019c3d58; name: FUN_019c3d58
 */


void FUN_019c3d58(long *param_1,ulong *param_2,long *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  ulong local_88;
  
  uVar17 = *param_2;
  uVar18 = param_1[1];
  if (uVar18 != 0) {
    uVar12 = uVar18 - (uVar18 >> 1 & 0x5555555555555555);
    uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
    uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar12 < 2) {
      local_88 = uVar18 - 1 & uVar17;
    }
    else {
      local_88 = uVar17;
      if (uVar18 <= uVar17) {
        uVar11 = 0;
        if (uVar18 != 0) {
          uVar11 = uVar17 / uVar18;
        }
        local_88 = uVar17 - uVar11 * uVar18;
      }
    }
    plVar13 = *(long **)(*param_1 + local_88 * 8);
    if (plVar13 != (long *)0x0) {
      if (uVar12 < 2) {
        while ((plVar13 = (long *)*plVar13, plVar13 != (long *)0x0 &&
               (plVar13[1] == uVar17 || (plVar13[1] & uVar18 - 1) == local_88))) {
          if (plVar13[2] == uVar17) {
            return;
          }
        }
      }
      else {
        while (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0) {
          uVar12 = plVar13[1];
          if (uVar12 != uVar17) {
            if (uVar18 <= uVar12) {
              uVar11 = 0;
              if (uVar18 != 0) {
                uVar11 = uVar12 / uVar18;
              }
              uVar12 = uVar12 - uVar11 * uVar18;
            }
            if (uVar12 != local_88) break;
          }
          if (plVar13[2] == uVar17) {
            return;
          }
        }
      }
    }
  }
  plVar13 = (long *)(**(code **)(*(long *)param_1[7] + 0x10))((long *)param_1[7],0x50,8);
  if (plVar13 == (long *)0x0) {
    (**(code **)(*(long *)param_1[7] + 0xb8))();
  }
  lVar16 = param_1[7];
  if ((*PTR_DAT_04379520 & 1) == 0) {
    iVar7 = __cxa_guard_acquire(PTR_DAT_04379520);
    puVar6 = PTR_DAT_04379528;
    if (iVar7 != 0) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
  }
  lVar8 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (lVar8 != 0) {
    if (0xf < *(ulong *)(lVar8 + 0x80)) {
LAB_019c42a4:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = lVar16;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
  }
  plVar13[2] = *param_2;
  lVar16 = param_3[3];
  lVar2 = param_3[4];
  lVar10 = param_3[5];
  lVar3 = param_3[6];
  plVar13[3] = 0;
  plVar13[4] = 0;
  plVar13[5] = 0;
  plVar14 = plVar13 + 6;
  *plVar14 = lVar16;
  plVar13[8] = lVar10;
  plVar13[9] = lVar3;
  plVar13[7] = lVar2;
  lVar16 = param_3[1] - *param_3;
  if (lVar16 != 0) {
    uVar12 = plVar13[7];
    if (0x7ffffffffffffffe < uVar12) {
      uVar12 = 0x7fffffffffffffff;
    }
    if (uVar12 < (ulong)(lVar16 >> 4)) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    puVar9 = (undefined8 *)(**(code **)(*(long *)*plVar14 + 0x10))((long *)*plVar14,lVar16,8);
    if (puVar9 == (undefined8 *)0x0) {
      (**(code **)(*(long *)*plVar14 + 0xb8))();
    }
    plVar13[3] = (long)puVar9;
    plVar13[4] = (long)puVar9;
    plVar13[5] = (long)(puVar9 + (lVar16 >> 4) * 2);
    puVar4 = (undefined8 *)param_3[1];
    for (puVar1 = (undefined8 *)*param_3; puVar1 != puVar4; puVar1 = puVar1 + 2) {
      lVar16 = *plVar14;
      if (((*PTR_DAT_04379520 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379520), iVar7 != 0)) {
        FUN_008a62a4(PTR_DAT_04379528);
        FUN_00100250(PTR_LAB_04379530,PTR_DAT_04379528,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379520);
      }
      lVar10 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
      if (lVar10 == 0) {
        uVar5 = puVar1[1];
        *puVar9 = *puVar1;
        puVar9[1] = uVar5;
      }
      else {
        if (0xf < *(ulong *)(lVar10 + 0x80)) goto LAB_019c42a4;
        *(long *)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = lVar16;
        *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
        uVar5 = puVar1[1];
        *puVar9 = *puVar1;
        puVar9[1] = uVar5;
        *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
      }
      puVar9 = (undefined8 *)(plVar13[4] + 0x10);
      plVar13[4] = (long)puVar9;
    }
  }
  if (lVar8 != 0) {
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
  }
  *plVar13 = 0;
  plVar13[1] = uVar17;
  if ((uVar18 == 0) || (*(float *)(param_1 + 0xc) * (float)uVar18 < (float)(param_1[0xb] + 1))) {
    uVar18 = (ulong)(uVar18 < 3 || (uVar18 & uVar18 - 1) != 0) | uVar18 << 1;
    uVar12 = (ulong)((float)(param_1[0xb] + 1) / *(float *)(param_1 + 0xc));
    if (uVar12 <= uVar18) {
      uVar12 = uVar18;
    }
    if (uVar12 - 1 == 0) {
      uVar12 = 2;
    }
    else if ((uVar12 & uVar12 - 1) != 0) {
      uVar12 = std::__next_prime(uVar12);
    }
    uVar18 = param_1[1];
    if (uVar18 < uVar12) {
      uVar11 = uVar12;
LAB_019c407c:
      FUN_019c8d24(param_1,uVar11);
    }
    else if (uVar12 < uVar18) {
      uVar11 = (ulong)((float)(ulong)param_1[0xb] / *(float *)(param_1 + 0xc));
      if ((uVar18 < 3) ||
         (uVar15 = uVar18 - (uVar18 >> 1 & 0x5555555555555555),
         uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333),
         1 < (uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
        uVar11 = std::__next_prime(uVar11);
      }
      else if (1 < uVar11) {
        uVar11 = 1L << ((ulong)(uint)-(int)LZCOUNT(uVar11 - 1) & 0x3f);
      }
      if (uVar11 <= uVar12) {
        uVar11 = uVar12;
      }
      if (uVar11 < uVar18) goto LAB_019c407c;
    }
    uVar18 = param_1[1];
    if ((uVar18 & uVar18 - 1) == 0) {
      local_88 = uVar18 - 1 & uVar17;
    }
    else if (uVar17 < uVar18) {
      local_88 = uVar17;
    }
    else {
      uVar12 = 0;
      if (uVar18 != 0) {
        uVar12 = uVar17 / uVar18;
      }
      local_88 = uVar17 - uVar12 * uVar18;
    }
  }
  plVar14 = *(long **)(*param_1 + local_88 * 8);
  if (plVar14 == (long *)0x0) {
    plVar14 = param_1 + 6;
    *plVar13 = *plVar14;
    *plVar14 = (long)plVar13;
    *(long **)(*param_1 + local_88 * 8) = plVar14;
    if (*plVar13 == 0) goto LAB_019c3ff4;
    uVar17 = *(ulong *)(*plVar13 + 8);
    if ((uVar18 & uVar18 - 1) == 0) {
      uVar17 = uVar17 & uVar18 - 1;
    }
    else if (uVar18 <= uVar17) {
      uVar12 = 0;
      if (uVar18 != 0) {
        uVar12 = uVar17 / uVar18;
      }
      uVar17 = uVar17 - uVar12 * uVar18;
    }
    plVar14 = (long *)(*param_1 + uVar17 * 8);
  }
  else {
    *plVar13 = *plVar14;
  }
  *plVar14 = (long)plVar13;
LAB_019c3ff4:
  param_1[0xb] = param_1[0xb] + 1;
  return;
}


