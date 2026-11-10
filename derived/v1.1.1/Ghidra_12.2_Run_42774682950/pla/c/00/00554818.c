/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00554818; name: FUN_00554818
 */


void FUN_00554818(long param_1,uint *param_2,uint *param_3,long *param_4,uint *param_5,long *param_6
                 )

{
  undefined4 uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  void *pvVar5;
  size_t sVar6;
  uint uVar7;
  long lVar8;
  uint *puVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  uint *puVar13;
  ulong uVar14;
  uint uVar15;
  long *plVar16;
  long lVar17;
  undefined4 *puVar18;
  undefined4 *puVar19;
  uint *puVar20;
  long *plVar21;
  ulong *puVar22;
  uint *puVar23;
  ulong uVar24;
  uint uVar25;
  long *plVar26;
  undefined8 uVar27;
  int local_6c;
  uint local_68;
  uint local_64;
  
  local_68 = *param_2;
  FUN_005570c0(param_2,0,0,&local_68);
  uVar25 = *(uint *)(param_1 + 0xc);
  if (-1 < (int)uVar25) {
    lVar8 = *(long *)(param_2 + 6);
    if (lVar8 == 0) {
      if (uVar25 < 0x80000000) goto LAB_00555034;
    }
    else if ((int)param_2[8] <= (int)uVar25) goto LAB_00555034;
    if ((((lVar8 == 0) || (param_2[8] <= uVar25)) ||
        (uVar7 = *(uint *)(*(long *)(param_2 + 2) + (long)(int)uVar25 * 4), *param_2 <= uVar7)) ||
       (*(uint *)(lVar8 + (long)(int)uVar7 * 8) != uVar25)) {
      local_68 = *param_2;
      FUN_005570c0(param_2,0,(long)(int)uVar25,&local_68);
    }
    uVar25 = *(uint *)(param_1 + 8);
    if (-1 < (int)uVar25) {
      lVar8 = *(long *)(param_2 + 6);
      if (lVar8 == 0) {
        if (0x7fffffff < uVar25) goto LAB_005548f4;
      }
      else if ((int)uVar25 < (int)param_2[8]) {
LAB_005548f4:
        if (((lVar8 == 0) || (param_2[8] <= uVar25)) ||
           ((uVar7 = *(uint *)(*(long *)(param_2 + 2) + (long)(int)uVar25 * 4), *param_2 <= uVar7 ||
            (*(uint *)(lVar8 + (long)(int)uVar7 * 8) != uVar25)))) {
          local_68 = *param_2;
          FUN_005570c0(param_2,0,(long)(int)uVar25,&local_68);
        }
        *param_5 = 0;
        puVar18 = (undefined4 *)*param_6;
        param_6[1] = (long)puVar18;
        uVar1 = *(undefined4 *)(param_1 + 0xc);
        lVar8 = param_6[2] - (long)puVar18;
        if ((undefined4 *)param_6[2] < puVar18 || lVar8 == 0) {
          if ((ulong)(lVar8 >> 2) < 0x1fffffffffffffff) {
            lVar10 = lVar8 >> 1;
            if (lVar8 == 0) {
              lVar10 = 1;
            }
          }
          else {
            lVar10 = 0x3fffffffffffffff;
          }
          puVar4 = (undefined4 *)FUN_002e2e80(PTR_FUN_04373078,lVar10 * 4);
          pvVar5 = (void *)*param_6;
          lVar8 = param_6[1];
          puVar19 = puVar4 + 1;
          *puVar4 = uVar1;
          sVar6 = lVar8 - (long)pvVar5;
          puVar18 = (undefined4 *)((long)puVar4 - sVar6);
          if (0 < (long)sVar6) {
            memcpy(puVar18,pvVar5,sVar6);
            pvVar5 = (void *)*param_6;
          }
          *param_6 = (long)puVar18;
          param_6[1] = (long)puVar19;
          param_6[2] = (long)(puVar4 + lVar10);
          if (pvVar5 != (void *)0x0) {
            FUN_002e2ea0(PTR_LAB_04373088);
            puVar18 = (undefined4 *)*param_6;
            puVar19 = (undefined4 *)param_6[1];
          }
          if (puVar18 == puVar19) {
            return;
          }
        }
        else {
          puVar19 = puVar18 + 1;
          *puVar18 = uVar1;
          param_6[1] = (long)puVar19;
        }
        puVar3 = PTR_LAB_04373088;
        uVar25 = puVar19[-1];
        param_6[1] = (long)(puVar19 + -1);
joined_r0x00554a3c:
        if ((int)uVar25 < 0) {
                    /* WARNING: Subroutine does not return */
          __assert_fail("i >= 0","external/com_github_google_re2\\re2/sparse_set.h",0xdd,"contains")
          ;
        }
        lVar8 = *(long *)(param_5 + 6);
joined_r0x00554a60:
        if (lVar8 == 0) goto LAB_00554f00;
LAB_00554a64:
        if ((int)param_5[8] <= (int)uVar25) {
LAB_00555084:
                    /* WARNING: Subroutine does not return */
          __assert_fail("i < max_size()","external/com_github_google_re2\\re2/sparse_set.h",0xde,
                        "contains");
        }
LAB_00554a70:
        if (((lVar8 != 0) && (uVar25 < param_5[8])) &&
           ((uVar7 = *(uint *)(*(long *)(param_5 + 2) + (long)(int)uVar25 * 4), uVar7 < *param_5 &&
            (*(uint *)(lVar8 + (long)(int)uVar7 * 4) == uVar25)))) {
switchD_00554ad8_caseD_5:
          if (*param_6 == param_6[1]) {
            return;
          }
          puVar20 = (uint *)(param_6[1] + -4);
          uVar25 = *puVar20;
          param_6[1] = (long)puVar20;
          goto joined_r0x00554a3c;
        }
        FUN_005527e0(param_5,0,uVar25);
        puVar20 = (uint *)(*(long *)(param_1 + 0x60) + (long)(int)uVar25 * 8);
        uVar7 = *puVar20;
        switch(uVar7 & 7) {
        case 0:
        case 1:
          local_68 = uVar7 >> 4;
          if ((*puVar20 & 6) == 0) {
            puVar18 = (undefined4 *)(*(long *)(param_1 + 0x60) + (long)(int)uVar25 * 8 + 4);
            puVar23 = &local_68;
            local_64 = *puVar18;
            uVar7 = local_68;
            do {
              uVar24 = 0xaaaaaaaaaaaaaaa;
              lVar8 = *(long *)(param_3 + 6);
              if (lVar8 == 0) {
                if (uVar7 < 0x80000000) goto LAB_00555034;
              }
              else if ((int)param_3[8] <= (int)uVar7) goto LAB_00555034;
              if ((((lVar8 == 0) || (param_3[8] <= uVar7)) ||
                  (uVar15 = *(uint *)(*(long *)(param_3 + 2) + (long)(int)uVar7 * 4),
                  *param_3 <= uVar15)) || (*(uint *)(lVar8 + (long)(int)uVar15 * 8) != uVar7)) {
                local_6c = (int)((ulong)(param_4[1] - *param_4) >> 3) * -0x55555555;
                FUN_005570c0(param_3,0,uVar7,&local_6c);
                puVar12 = (undefined8 *)param_4[1];
                if ((undefined8 *)param_4[2] <= puVar12) {
                  lVar8 = (long)puVar12 - *param_4 >> 3;
                  uVar14 = lVar8 * -0x5555555555555555 + 1;
                  if (0xaaaaaaaaaaaaaaa < uVar14) {
                    /* WARNING: Subroutine does not return */
                    std::__vector_base_common<true>::__throw_length_error();
                  }
                  lVar10 = param_4[2] - *param_4 >> 3;
                  if ((ulong)(lVar10 * -0x5555555555555555) < 0x555555555555555) {
                    uVar11 = lVar10 * 0x5555555555555556;
                    uVar24 = uVar14;
                    if (uVar14 <= uVar11) {
                      uVar24 = uVar11;
                    }
                    if (uVar24 != 0) goto LAB_00554c60;
                    lVar10 = 0;
                  }
                  else {
LAB_00554c60:
                    lVar10 = FUN_002e2e80(PTR_FUN_04373078,uVar24 * 0x18);
                  }
                  puVar12 = (undefined8 *)(lVar10 + lVar8 * 8);
                  lVar10 = lVar10 + uVar24 * 0x18;
                  *puVar12 = 0;
                  puVar12[1] = 0;
                  puVar12[2] = 0;
                  plVar26 = (long *)*param_4;
                  plVar16 = (long *)param_4[1];
                  if (plVar16 == plVar26) {
                    *param_4 = (long)puVar12;
                    param_4[1] = (long)(puVar12 + 3);
                    param_4[2] = lVar10;
                  }
                  else {
                    lVar8 = 0;
                    do {
                      *(undefined8 *)((long)puVar12 + lVar8 + -8) = 0;
                      *(undefined8 *)((long)puVar12 + lVar8 + -0x18) = 0;
                      *(undefined8 *)((long)puVar12 + lVar8 + -0x10) = 0;
                      uVar27 = *(undefined8 *)((long)plVar16 + lVar8 + -0x18);
                      lVar17 = lVar8 + -0x18;
                      *(undefined8 *)((long)puVar12 + lVar8 + -0x10) =
                           *(undefined8 *)((long)plVar16 + lVar8 + -0x10);
                      *(undefined8 *)((long)puVar12 + lVar8 + -0x18) = uVar27;
                      *(undefined8 *)((long)puVar12 + lVar8 + -8) =
                           *(undefined8 *)((long)plVar16 + lVar8 + -8);
                      *(undefined8 *)((long)plVar16 + lVar8 + -0x18) = 0;
                      *(undefined8 *)((long)plVar16 + lVar8 + -0x10) = 0;
                      *(undefined8 *)((long)plVar16 + lVar8 + -8) = 0;
                      lVar8 = lVar17;
                    } while ((long)plVar26 - (long)plVar16 != lVar17);
                    plVar26 = (long *)*param_4;
                    plVar16 = (long *)param_4[1];
                    *param_4 = (long)puVar12 + lVar17;
                    param_4[1] = (long)(puVar12 + 3);
                    param_4[2] = lVar10;
                    if (plVar16 != plVar26) {
                      plVar21 = plVar16 + -3;
                      lVar8 = *plVar21;
                      if (lVar8 != 0) goto LAB_00554d0c;
                      while (plVar16 = plVar21, plVar26 != plVar21) {
                        while( true ) {
                          plVar21 = plVar16 + -3;
                          lVar8 = *plVar21;
                          if (lVar8 == 0) break;
LAB_00554d0c:
                          plVar16[-2] = lVar8;
                          FUN_002e2ea0(puVar3);
                          plVar16 = plVar21;
                          if (plVar26 == plVar21) goto LAB_00554d4c;
                        }
                      }
                    }
                  }
LAB_00554d4c:
                  if (plVar26 != (long *)0x0) {
                    FUN_002e2ea0(puVar3,plVar26);
                  }
                  goto LAB_00554d5c;
                }
                *puVar12 = 0;
                puVar12[1] = 0;
                puVar12[2] = 0;
                param_4[1] = param_4[1] + 0x18;
                lVar8 = *(long *)(param_3 + 6);
                if (lVar8 == 0) goto LAB_00554c00;
LAB_00554d64:
                if ((int)param_3[8] <= (int)uVar7) goto LAB_00555034;
              }
              else {
LAB_00554d5c:
                lVar8 = *(long *)(param_3 + 6);
                if (lVar8 != 0) goto LAB_00554d64;
LAB_00554c00:
                if (uVar7 < 0x80000000) goto LAB_00555034;
              }
              if (((lVar8 == 0) || (param_3[8] <= uVar7)) ||
                 ((uVar15 = *(uint *)(*(long *)(param_3 + 2) + (long)(int)uVar7 * 4),
                  *param_3 <= uVar15 || (*(uint *)(lVar8 + (long)(int)uVar15 * 8) != uVar7)))) {
                    /* WARNING: Subroutine does not return */
                __assert_fail("has_index(i)","external/com_github_google_re2\\re2/sparse_array.h",
                              0xc9,"get_existing");
              }
              plVar26 = (long *)(*param_4 + (long)*(int *)(lVar8 + (long)(int)uVar15 * 8 + 4) * 0x18
                                );
              puVar22 = (ulong *)(plVar26 + 1);
              puVar9 = (uint *)*puVar22;
              puVar13 = (uint *)plVar26[2];
              if (puVar9 < puVar13) {
                *puVar9 = uVar25;
                *puVar22 = (ulong)(puVar9 + 1);
              }
              else {
                pvVar5 = (void *)*plVar26;
                lVar8 = (long)puVar9 - (long)pvVar5 >> 2;
                uVar24 = lVar8 + 1;
                if (uVar24 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
                  std::__vector_base_common<true>::__throw_length_error();
                }
                lVar10 = (long)puVar13 - (long)pvVar5;
                if ((ulong)(lVar10 >> 2) < 0x1fffffffffffffff) {
                  uVar14 = lVar10 >> 1;
                  if (uVar24 <= uVar14) {
                    uVar24 = uVar14;
                  }
                  if (uVar24 != 0) goto LAB_00554e38;
                  lVar10 = 0;
                }
                else {
                  uVar24 = 0x3fffffffffffffff;
LAB_00554e38:
                  lVar10 = FUN_002e2e80(PTR_FUN_04373078,uVar24 << 2);
                  pvVar5 = (void *)*plVar26;
                  puVar9 = (uint *)*puVar22;
                }
                puVar13 = (uint *)(lVar10 + lVar8 * 4);
                sVar6 = (long)puVar9 - (long)pvVar5;
                *puVar13 = uVar25;
                if (0 < (long)sVar6) {
                  memcpy((void *)((long)puVar13 - sVar6),pvVar5,sVar6);
                  pvVar5 = (void *)*plVar26;
                }
                *plVar26 = (long)((long)puVar13 - sVar6);
                *puVar22 = (ulong)(puVar13 + 1);
                plVar26[2] = lVar10 + uVar24 * 4;
                if (pvVar5 != (void *)0x0) {
                  FUN_002e2ea0(puVar3);
                }
              }
              if (puVar23 + 1 == (uint *)((long)register0x00000008 + -0x60)) goto LAB_00554ec0;
              puVar23 = puVar23 + 1;
              uVar7 = *puVar23;
              if ((int)uVar7 < 0) goto LAB_00555054;
            } while( true );
          }
          goto LAB_005550a4;
        default:
          if (*(long *)(param_2 + 6) == 0) goto LAB_00555034;
          uVar25 = uVar7 >> 4;
          if ((int)param_2[8] <= (int)uVar25) goto LAB_00555034;
          if (uVar25 < param_2[8]) {
            uVar2 = *(uint *)(*(long *)(param_2 + 2) + (ulong)uVar25 * 4);
            uVar15 = *param_2;
            if ((uVar2 < uVar15) &&
               (*(uint *)(*(long *)(param_2 + 6) + (long)(int)uVar2 * 8) == uVar25))
            goto switchD_00554ad8_caseD_6;
          }
          else {
            uVar15 = *param_2;
          }
          local_68 = uVar15;
          FUN_005570c0(param_2,0,(ulong)uVar25,&local_68);
          uVar7 = *puVar20;
switchD_00554ad8_caseD_6:
          uVar25 = uVar7 >> 4;
          lVar8 = *(long *)(param_5 + 6);
          break;
        case 5:
        case 7:
          goto switchD_00554ad8_caseD_5;
        case 6:
          goto switchD_00554ad8_caseD_6;
        }
        goto joined_r0x00554a60;
      }
LAB_00555034:
                    /* WARNING: Subroutine does not return */
      __assert_fail("i < max_size()","external/com_github_google_re2\\re2/sparse_array.h",0x15f,
                    "has_index");
    }
  }
LAB_00555054:
                    /* WARNING: Subroutine does not return */
  __assert_fail("i >= 0","external/com_github_google_re2\\re2/sparse_array.h",0x15e,"has_index");
LAB_00554ec0:
  if ((*puVar20 & 6) != 0) {
LAB_005550a4:
                    /* WARNING: Subroutine does not return */
    __assert_fail("opcode() == kInstAlt || opcode() == kInstAltMatch",
                  "external/com_github_google_re2\\re2/prog.h",0x55,"out1");
  }
  uVar1 = *puVar18;
  puVar18 = (undefined4 *)param_6[1];
  if (puVar18 < (undefined4 *)param_6[2]) {
    *puVar18 = uVar1;
    param_6[1] = (long)(puVar18 + 1);
    uVar25 = *puVar20;
    lVar8 = *(long *)(param_5 + 6);
    goto joined_r0x00554efc;
  }
  pvVar5 = (void *)*param_6;
  lVar8 = (long)puVar18 - (long)pvVar5 >> 2;
  uVar24 = lVar8 + 1;
  if (uVar24 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar10 = param_6[2] - (long)pvVar5;
  if ((ulong)(lVar10 >> 2) < 0x1fffffffffffffff) {
    uVar14 = lVar10 >> 1;
    if (uVar24 <= uVar14) {
      uVar24 = uVar14;
    }
    if (uVar24 != 0) goto LAB_00554f84;
    lVar10 = 0;
  }
  else {
    uVar24 = 0x3fffffffffffffff;
LAB_00554f84:
    lVar10 = FUN_002e2e80(PTR_FUN_04373078,uVar24 << 2);
    pvVar5 = (void *)*param_6;
    puVar18 = (undefined4 *)param_6[1];
  }
  puVar19 = (undefined4 *)(lVar10 + lVar8 * 4);
  sVar6 = (long)puVar18 - (long)pvVar5;
  *puVar19 = uVar1;
  if (0 < (long)sVar6) {
    memcpy((void *)((long)puVar19 - sVar6),pvVar5,sVar6);
    pvVar5 = (void *)*param_6;
  }
  *param_6 = (long)((long)puVar19 - sVar6);
  param_6[1] = (long)(puVar19 + 1);
  param_6[2] = lVar10 + uVar24 * 4;
  if (pvVar5 != (void *)0x0) {
    FUN_002e2ea0(puVar3);
  }
  uVar25 = *puVar20;
  lVar8 = *(long *)(param_5 + 6);
joined_r0x00554efc:
  uVar25 = uVar25 >> 4;
  if (lVar8 != 0) goto LAB_00554a64;
LAB_00554f00:
  if (uVar25 < 0x80000000) goto LAB_00555084;
  goto LAB_00554a70;
}


