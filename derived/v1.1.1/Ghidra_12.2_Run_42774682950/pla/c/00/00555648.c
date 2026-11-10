/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00555648; name: FUN_00555648
 */


void FUN_00555648(long param_1,uint param_2,uint *param_3,long *param_4,uint *param_5,long *param_6)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  void *pvVar4;
  size_t sVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  long lVar9;
  long lVar10;
  undefined4 *puVar11;
  long lVar12;
  ulong uVar13;
  undefined *puVar14;
  uint *__dest;
  undefined8 *puVar15;
  undefined8 *puVar16;
  uint uVar17;
  ulong uVar18;
  
  *param_5 = 0;
  puVar7 = (uint *)*param_6;
  param_6[1] = (long)puVar7;
  if ((uint *)param_6[2] == puVar7) {
    puVar7 = (uint *)FUN_002e2e80(PTR_FUN_04373078,4);
    puVar8 = puVar7 + 1;
    pvVar4 = (void *)*param_6;
    sVar5 = param_6[1] - (long)pvVar4;
    __dest = (uint *)((long)puVar7 - sVar5);
    *puVar7 = param_2;
    if (0 < (long)sVar5) {
      memcpy(__dest,pvVar4,sVar5);
      pvVar4 = (void *)*param_6;
    }
    *param_6 = (long)__dest;
    param_6[2] = (long)(puVar7 + 1);
    param_6[1] = (long)puVar8;
    if (pvVar4 == (void *)0x0) {
      if (__dest == puVar8) {
        return;
      }
    }
    else {
      FUN_002e2ea0(PTR_LAB_04373088);
      puVar8 = (uint *)param_6[1];
      if ((uint *)*param_6 == puVar8) {
        return;
      }
    }
  }
  else {
    puVar8 = puVar7 + 1;
    *puVar7 = param_2;
    param_6[1] = (long)puVar8;
  }
  puVar14 = PTR_FUN_04373078;
  uVar17 = puVar8[-1];
  param_6[1] = (long)(puVar8 + -1);
joined_r0x00555734:
  if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("i >= 0","external/com_github_google_re2\\re2/sparse_set.h",0xdd,"contains");
  }
  lVar9 = *(long *)(param_5 + 6);
  if (lVar9 == 0) goto LAB_00555858;
LAB_00555774:
  if ((int)param_5[8] <= (int)uVar17) {
LAB_00555db8:
                    /* WARNING: Subroutine does not return */
    __assert_fail("i < max_size()","external/com_github_google_re2\\re2/sparse_set.h",0xde,
                  "contains");
  }
LAB_00555780:
  if ((((lVar9 == 0) || (param_5[8] <= uVar17)) ||
      (uVar6 = *(uint *)(*(long *)(param_5 + 2) + (long)(int)uVar17 * 4), *param_5 <= uVar6)) ||
     (*(uint *)(lVar9 + (long)(int)uVar6 * 4) != uVar17)) {
    FUN_005527e0(param_5,0,uVar17);
    if (uVar17 != param_2) {
      lVar9 = *(long *)(param_3 + 6);
      if (lVar9 == 0) {
        if (uVar17 < 0x80000000) goto LAB_00555d70;
      }
      else if ((int)param_3[8] <= (int)uVar17) goto LAB_00555d70;
      if (((lVar9 == 0) || (param_3[8] <= uVar17)) ||
         ((uVar6 = *(uint *)(*(long *)(param_3 + 2) + (long)(int)uVar17 * 4), *param_3 <= uVar6 ||
          (*(uint *)(lVar9 + (long)(int)uVar6 * 8) != uVar17)))) goto LAB_00555810;
      puVar16 = (undefined8 *)param_4[1];
      if (puVar16 < (undefined8 *)param_4[2]) {
        *puVar16 = 0;
        puVar16 = (undefined8 *)(param_4[1] + 8);
        param_4[1] = (long)puVar16;
      }
      else {
        lVar9 = (long)puVar16 - *param_4 >> 3;
        uVar18 = lVar9 + 1;
        if (uVar18 >> 0x3d != 0) goto LAB_00555db0;
        lVar12 = param_4[2] - *param_4;
        if ((ulong)(lVar12 >> 3) < 0xfffffffffffffff) {
          uVar13 = lVar12 >> 2;
          if (uVar18 <= uVar13) {
            uVar18 = uVar13;
          }
          if (uVar18 != 0) goto LAB_00555c84;
          lVar12 = 0;
        }
        else {
          uVar18 = 0x1fffffffffffffff;
LAB_00555c84:
          lVar12 = FUN_002e2e80(puVar14,uVar18 << 3);
        }
        puVar15 = (undefined8 *)(lVar12 + lVar9 * 8);
        puVar16 = puVar15 + 1;
        *puVar15 = 0;
        pvVar4 = (void *)*param_4;
        sVar5 = param_4[1] - (long)pvVar4;
        if (0 < (long)sVar5) {
          memcpy((void *)((long)puVar15 - sVar5),pvVar4,sVar5);
          pvVar4 = (void *)*param_4;
        }
        *param_4 = (long)((long)puVar15 - sVar5);
        param_4[1] = (long)puVar16;
        param_4[2] = lVar12 + uVar18 * 8;
        if (pvVar4 != (void *)0x0) {
          FUN_002e2ea0(PTR_LAB_04373088);
          puVar16 = (undefined8 *)param_4[1];
        }
      }
      uVar6 = *(uint *)(puVar16 + -1);
      *(uint *)(puVar16 + -1) = uVar6 & 0xfffffff8 | 6;
      lVar9 = *(long *)(param_3 + 6);
      if (lVar9 == 0) {
        if (uVar17 < 0x80000000) goto LAB_00555d70;
      }
      else if ((int)param_3[8] <= (int)uVar17) goto LAB_00555d70;
      if (((lVar9 == 0) || (param_3[8] <= uVar17)) ||
         ((uVar3 = *(uint *)(*(long *)(param_3 + 2) + (long)(int)uVar17 * 4), *param_3 <= uVar3 ||
          (*(uint *)(lVar9 + (long)(int)uVar3 * 8) != uVar17)))) goto LAB_00555dd8;
      *(uint *)(puVar16 + -1) = uVar6 & 8 | *(int *)(lVar9 + (long)(int)uVar3 * 8 + 4) << 4 | 6;
      lVar9 = param_6[1];
      if (*param_6 == lVar9) {
        return;
      }
      goto LAB_00555760;
    }
LAB_00555810:
    lVar9 = *(long *)(param_1 + 0x60);
    puVar7 = (uint *)(lVar9 + (long)(int)uVar17 * 8);
    uVar6 = *puVar7;
    switch(uVar6 & 7) {
    case 0:
      goto switchD_00555834_caseD_0;
    case 1:
      goto switchD_00555834_caseD_1;
    default:
      puVar16 = (undefined8 *)param_4[1];
      if (puVar16 < (undefined8 *)param_4[2]) {
        *puVar16 = 0;
        puVar16 = (undefined8 *)param_4[1];
        param_4[1] = (long)(puVar16 + 1);
        *puVar16 = *(undefined8 *)puVar7;
        lVar9 = *(long *)(param_3 + 6);
      }
      else {
        lVar9 = (long)puVar16 - *param_4 >> 3;
        uVar18 = lVar9 + 1;
        if (uVar18 >> 0x3d != 0) goto LAB_00555db0;
        lVar12 = param_4[2] - *param_4;
        if ((ulong)(lVar12 >> 3) < 0xfffffffffffffff) {
          uVar13 = lVar12 >> 2;
          if (uVar18 <= uVar13) {
            uVar18 = uVar13;
          }
          if (uVar18 != 0) goto LAB_00555aec;
          lVar12 = 0;
        }
        else {
          uVar18 = 0x1fffffffffffffff;
LAB_00555aec:
          lVar12 = FUN_002e2e80(puVar14,uVar18 << 3);
        }
        puVar16 = (undefined8 *)(lVar12 + lVar9 * 8);
        puVar15 = puVar16 + 1;
        *puVar16 = 0;
        pvVar4 = (void *)*param_4;
        sVar5 = param_4[1] - (long)pvVar4;
        if (0 < (long)sVar5) {
          memcpy((void *)((long)puVar16 - sVar5),pvVar4,sVar5);
          pvVar4 = (void *)*param_4;
        }
        *param_4 = (long)((long)puVar16 - sVar5);
        param_4[1] = (long)puVar15;
        param_4[2] = lVar12 + uVar18 * 8;
        if (pvVar4 != (void *)0x0) {
          FUN_002e2ea0(PTR_LAB_04373088);
          puVar15 = (undefined8 *)param_4[1];
        }
        puVar15[-1] = *(undefined8 *)puVar7;
        lVar9 = *(long *)(param_3 + 6);
      }
      if (lVar9 == 0) {
LAB_00555d70:
                    /* WARNING: Subroutine does not return */
        __assert_fail("i < max_size()","external/com_github_google_re2\\re2/sparse_array.h",0x15f,
                      "has_index");
      }
      uVar17 = *puVar7 >> 4;
      if ((int)param_3[8] <= (int)uVar17) goto LAB_00555d70;
      if (((param_3[8] <= uVar17) ||
          (uVar6 = *(uint *)(*(long *)(param_3 + 2) + (ulong)uVar17 * 4), *param_3 <= uVar6)) ||
         (*(uint *)(lVar9 + (long)(int)uVar6 * 8) != uVar17)) {
LAB_00555dd8:
                    /* WARNING: Subroutine does not return */
        __assert_fail("has_index(i)","external/com_github_google_re2\\re2/sparse_array.h",0xc9,
                      "get_existing");
      }
      uVar17 = *(uint *)(param_4[1] + -8);
      *(uint *)(param_4[1] + -8) =
           uVar17 & 8 | *(int *)(lVar9 + (long)(int)uVar6 * 8 + 4) << 4 | uVar17 & 7;
      lVar9 = param_6[1];
      if (*param_6 == lVar9) {
        return;
      }
      goto LAB_00555760;
    case 5:
    case 7:
      puVar16 = (undefined8 *)param_4[1];
      if (puVar16 < (undefined8 *)param_4[2]) {
        *puVar16 = 0;
        puVar16 = (undefined8 *)(param_4[1] + 8);
        param_4[1] = (long)puVar16;
      }
      else {
        lVar9 = (long)puVar16 - *param_4 >> 3;
        uVar18 = lVar9 + 1;
        if (uVar18 >> 0x3d != 0) goto LAB_00555db0;
        lVar12 = param_4[2] - *param_4;
        if ((ulong)(lVar12 >> 3) < 0xfffffffffffffff) {
          uVar13 = lVar12 >> 2;
          if (uVar18 <= uVar13) {
            uVar18 = uVar13;
          }
          if (uVar18 != 0) goto LAB_00555bc4;
          lVar12 = 0;
        }
        else {
          uVar18 = 0x1fffffffffffffff;
LAB_00555bc4:
          lVar12 = FUN_002e2e80(puVar14,uVar18 << 3);
        }
        puVar15 = (undefined8 *)(lVar12 + lVar9 * 8);
        puVar16 = puVar15 + 1;
        *puVar15 = 0;
        pvVar4 = (void *)*param_4;
        sVar5 = param_4[1] - (long)pvVar4;
        if (0 < (long)sVar5) {
          memcpy((void *)((long)puVar15 - sVar5),pvVar4,sVar5);
          pvVar4 = (void *)*param_4;
        }
        *param_4 = (long)((long)puVar15 - sVar5);
        param_4[1] = (long)puVar16;
        param_4[2] = lVar12 + uVar18 * 8;
        if (pvVar4 != (void *)0x0) {
          FUN_002e2ea0(PTR_LAB_04373088);
          puVar16 = (undefined8 *)param_4[1];
        }
      }
      puVar16[-1] = *(undefined8 *)puVar7;
      break;
    case 6:
      goto switchD_00555834_caseD_6;
    }
  }
  lVar9 = param_6[1];
  if (*param_6 == lVar9) {
    return;
  }
LAB_00555760:
  uVar17 = *(uint *)(lVar9 + -4);
  param_6[1] = lVar9 + -4;
  goto joined_r0x00555734;
switchD_00555834_caseD_1:
  puVar16 = (undefined8 *)param_4[1];
  if (puVar16 < (undefined8 *)param_4[2]) {
    *puVar16 = 0;
    puVar16 = (undefined8 *)(param_4[1] + 8);
    param_4[1] = (long)puVar16;
  }
  else {
    lVar12 = (long)puVar16 - *param_4 >> 3;
    uVar18 = lVar12 + 1;
    if (uVar18 >> 0x3d != 0) {
LAB_00555db0:
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar10 = param_4[2] - *param_4;
    if ((ulong)(lVar10 >> 3) < 0xfffffffffffffff) {
      uVar13 = lVar10 >> 2;
      if (uVar18 <= uVar13) {
        uVar18 = uVar13;
      }
      if (uVar18 != 0) goto LAB_005558bc;
      lVar10 = 0;
    }
    else {
      uVar18 = 0x1fffffffffffffff;
LAB_005558bc:
      lVar10 = FUN_002e2e80(puVar14,uVar18 << 3);
    }
    puVar15 = (undefined8 *)(lVar10 + lVar12 * 8);
    puVar16 = puVar15 + 1;
    *puVar15 = 0;
    pvVar4 = (void *)*param_4;
    sVar5 = param_4[1] - (long)pvVar4;
    if (0 < (long)sVar5) {
      memcpy((void *)((long)puVar15 - sVar5),pvVar4,sVar5);
      pvVar4 = (void *)*param_4;
    }
    *param_4 = (long)((long)puVar15 - sVar5);
    param_4[1] = (long)puVar16;
    param_4[2] = lVar10 + uVar18 * 8;
    if (pvVar4 != (void *)0x0) {
      FUN_002e2ea0(PTR_LAB_04373088);
      puVar16 = (undefined8 *)param_4[1];
    }
    puVar14 = PTR_FUN_04373078;
  }
  lVar12 = *param_4;
  *(uint *)(puVar16 + -1) = *(uint *)(puVar16 + -1) & 8 | (int)((long)puVar16 - lVar12) << 1 | 1;
  *(int *)((long)puVar16 + -4) = (int)((ulong)((long)puVar16 - lVar12) >> 3) + 1;
  uVar6 = *puVar7;
switchD_00555834_caseD_0:
  if ((uVar6 & 6) != 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("opcode() == kInstAlt || opcode() == kInstAltMatch",
                  "external/com_github_google_re2\\re2/prog.h",0x55,"out1");
  }
  uVar2 = *(undefined4 *)(lVar9 + (long)(int)uVar17 * 8 + 4);
  puVar11 = (undefined4 *)param_6[1];
  if (puVar11 < (undefined4 *)param_6[2]) {
    *puVar11 = uVar2;
    param_6[1] = (long)(puVar11 + 1);
  }
  else {
    pvVar4 = (void *)*param_6;
    lVar9 = (long)puVar11 - (long)pvVar4 >> 2;
    uVar18 = lVar9 + 1;
    if (uVar18 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar12 = param_6[2] - (long)pvVar4;
    if ((ulong)(lVar12 >> 2) < 0x1fffffffffffffff) {
      uVar13 = lVar12 >> 1;
      if (uVar18 <= uVar13) {
        uVar18 = uVar13;
      }
      if (uVar18 != 0) goto LAB_005559b8;
      lVar12 = 0;
    }
    else {
      uVar18 = 0x3fffffffffffffff;
LAB_005559b8:
      lVar12 = FUN_002e2e80(puVar14,uVar18 << 2);
      pvVar4 = (void *)*param_6;
      puVar11 = (undefined4 *)param_6[1];
    }
    puVar1 = (undefined4 *)(lVar12 + lVar9 * 4);
    sVar5 = (long)puVar11 - (long)pvVar4;
    *puVar1 = uVar2;
    if (0 < (long)sVar5) {
      memcpy((void *)((long)puVar1 - sVar5),pvVar4,sVar5);
      pvVar4 = (void *)*param_6;
    }
    *param_6 = (long)((long)puVar1 - sVar5);
    param_6[1] = (long)(puVar1 + 1);
    param_6[2] = lVar12 + uVar18 * 4;
    puVar14 = PTR_FUN_04373078;
    if (pvVar4 != (void *)0x0) {
      FUN_002e2ea0(PTR_LAB_04373088);
    }
  }
  uVar6 = *puVar7;
switchD_00555834_caseD_6:
  uVar17 = uVar6 >> 4;
  lVar9 = *(long *)(param_5 + 6);
  if (lVar9 != 0) goto LAB_00555774;
LAB_00555858:
  if (uVar17 < 0x80000000) goto LAB_00555db8;
  goto LAB_00555780;
}


