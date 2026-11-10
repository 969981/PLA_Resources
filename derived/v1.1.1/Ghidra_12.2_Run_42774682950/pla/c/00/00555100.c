/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00555100; name: FUN_00555100
 */


void FUN_00555100(long param_1,uint param_2,uint *param_3,uint *param_4,long *param_5,uint *param_6,
                 long *param_7)

{
  undefined4 *puVar1;
  uint *puVar2;
  undefined4 uVar3;
  uint uVar4;
  void *pvVar5;
  size_t sVar6;
  uint uVar7;
  uint *puVar8;
  long lVar9;
  undefined4 *puVar10;
  uint *puVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  uint *puVar15;
  uint uVar16;
  ulong uVar17;
  uint local_64;
  
  *param_6 = 0;
  puVar8 = (uint *)*param_7;
  param_7[1] = (long)puVar8;
  if ((uint *)param_7[2] == puVar8) {
    puVar8 = (uint *)FUN_002e2e80(PTR_FUN_04373078,4);
    puVar11 = puVar8 + 1;
    pvVar5 = (void *)*param_7;
    sVar6 = param_7[1] - (long)pvVar5;
    puVar15 = (uint *)((long)puVar8 - sVar6);
    *puVar8 = param_2;
    if (0 < (long)sVar6) {
      memcpy(puVar15,pvVar5,sVar6);
      pvVar5 = (void *)*param_7;
    }
    *param_7 = (long)puVar15;
    param_7[2] = (long)(puVar8 + 1);
    param_7[1] = (long)puVar11;
    if (pvVar5 == (void *)0x0) {
      if (puVar15 != puVar11) goto LAB_005551e0;
    }
    else {
      FUN_002e2ea0(PTR_LAB_04373088);
      puVar11 = (uint *)param_7[1];
      if ((uint *)*param_7 != puVar11) goto LAB_005551e0;
    }
LAB_005553e0:
    if (*param_6 == 0) {
      return;
    }
    puVar8 = *(uint **)(param_6 + 6);
    uVar16 = *puVar8;
    puVar11 = puVar8;
    do {
      if ((int)uVar16 < 0) {
LAB_00555628:
                    /* WARNING: Subroutine does not return */
        __assert_fail("i >= 0","external/com_github_google_re2\\re2/sparse_array.h",0x15e,
                      "has_index");
      }
      lVar9 = *(long *)(param_4 + 6);
      if (lVar9 == 0) {
        if (uVar16 < 0x80000000) goto LAB_00555580;
      }
      else if ((int)param_4[8] <= (int)uVar16) goto LAB_00555580;
      if (((lVar9 != 0) && (uVar16 < param_4[8])) &&
         ((uVar7 = *(uint *)(*(long *)(param_4 + 2) + (long)(int)uVar16 * 4), uVar7 < *param_4 &&
          (*(uint *)(lVar9 + (long)(int)uVar7 * 8) == uVar16)))) {
        if ((int)param_4[8] <= (int)uVar16) {
LAB_00555580:
                    /* WARNING: Subroutine does not return */
          __assert_fail("i < max_size()","external/com_github_google_re2\\re2/sparse_array.h",0x15f,
                        "has_index");
        }
        plVar14 = (long *)(*param_5 + (long)*(int *)(lVar9 + (long)(int)uVar7 * 8 + 4) * 0x18);
        puVar15 = (uint *)*plVar14;
        puVar2 = (uint *)plVar14[1];
        if (puVar15 != puVar2) {
          do {
            uVar7 = *puVar15;
            if ((int)uVar7 < 0) goto LAB_005555e0;
            lVar9 = *(long *)(param_6 + 6);
            if (lVar9 == 0) {
              if (uVar7 < 0x80000000) goto LAB_005555c0;
            }
            else if ((int)param_6[8] <= (int)uVar7) goto LAB_005555c0;
            if ((((lVar9 == 0) || (param_6[8] <= uVar7)) ||
                (uVar4 = *(uint *)(*(long *)(param_6 + 2) + (long)(int)uVar7 * 4), *param_6 <= uVar4
                )) || (*(uint *)(lVar9 + (long)(int)uVar4 * 4) != uVar7)) {
              lVar9 = *(long *)(param_3 + 6);
              if (lVar9 == 0) {
                if (uVar16 < 0x80000000) goto LAB_00555580;
              }
              else if ((int)param_3[8] <= (int)uVar16) goto LAB_00555580;
              if (((lVar9 == 0) || (param_3[8] <= uVar16)) ||
                 ((uVar7 = *(uint *)(*(long *)(param_3 + 2) + (long)(int)uVar16 * 4),
                  *param_3 <= uVar7 || (*(uint *)(lVar9 + (long)(int)uVar7 * 8) != uVar16)))) {
                local_64 = *param_3;
                FUN_005570c0(param_3,0,uVar16,&local_64);
              }
            }
            puVar15 = puVar15 + 1;
          } while (puVar2 != puVar15);
          puVar11 = *(uint **)(param_6 + 6);
        }
      }
      puVar8 = puVar8 + 1;
      if (puVar8 == puVar11 + (int)*param_6) {
        return;
      }
      uVar16 = *puVar8;
    } while( true );
  }
  puVar11 = puVar8 + 1;
  *puVar8 = param_2;
  param_7[1] = (long)puVar11;
LAB_005551e0:
  uVar16 = puVar11[-1];
  param_7[1] = (long)(puVar11 + -1);
joined_r0x005551f0:
  if (-1 < (int)uVar16) {
    lVar9 = *(long *)(param_6 + 6);
    if (lVar9 == 0) goto LAB_005552f0;
LAB_005551fc:
    if ((int)uVar16 < (int)param_6[8]) {
      do {
        if ((((lVar9 != 0) && (uVar16 < param_6[8])) &&
            (uVar7 = *(uint *)(*(long *)(param_6 + 2) + (long)(int)uVar16 * 4), uVar7 < *param_6))
           && (*(uint *)(lVar9 + (long)(int)uVar7 * 4) == uVar16)) {
LAB_005553c4:
          if (*param_7 == param_7[1]) goto LAB_005553e0;
          puVar8 = (uint *)(param_7[1] + -4);
          uVar16 = *puVar8;
          param_7[1] = (long)puVar8;
          goto joined_r0x005551f0;
        }
        FUN_005527e0(param_6,0,uVar16);
        if (uVar16 != param_2) {
          lVar9 = *(long *)(param_3 + 6);
          if (lVar9 == 0) {
            if (uVar16 < 0x80000000) goto LAB_00555580;
          }
          else if ((int)param_3[8] <= (int)uVar16) goto LAB_00555580;
          if (((lVar9 != 0) && (uVar16 < param_3[8])) &&
             ((uVar7 = *(uint *)(*(long *)(param_3 + 2) + (long)(int)uVar16 * 4), uVar7 < *param_3
              && (*(uint *)(lVar9 + (long)(int)uVar7 * 8) == uVar16)))) goto LAB_005553c4;
        }
        puVar8 = (uint *)(*(long *)(param_1 + 0x60) + (long)(int)uVar16 * 8);
        uVar7 = *puVar8;
        if (7 < (uVar7 & 7)) goto LAB_00555628;
        uVar4 = 1 << (ulong)(uVar7 & 7);
        if ((uVar4 & 0xbc) != 0) goto LAB_005553c4;
        if ((uVar4 & 3) != 0) {
          if ((uVar7 & 6) != 0) {
                    /* WARNING: Subroutine does not return */
            __assert_fail("opcode() == kInstAlt || opcode() == kInstAltMatch",
                          "external/com_github_google_re2\\re2/prog.h",0x55,"out1");
          }
          uVar3 = *(undefined4 *)(*(long *)(param_1 + 0x60) + (long)(int)uVar16 * 8 + 4);
          puVar10 = (undefined4 *)param_7[1];
          if (puVar10 < (undefined4 *)param_7[2]) {
            *puVar10 = uVar3;
            param_7[1] = (long)(puVar10 + 1);
          }
          else {
            pvVar5 = (void *)*param_7;
            lVar9 = (long)puVar10 - (long)pvVar5 >> 2;
            uVar17 = lVar9 + 1;
            if (uVar17 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
              std::__vector_base_common<true>::__throw_length_error();
            }
            lVar12 = param_7[2] - (long)pvVar5;
            if ((ulong)(lVar12 >> 2) < 0x1fffffffffffffff) {
              uVar13 = lVar12 >> 1;
              if (uVar17 <= uVar13) {
                uVar17 = uVar13;
              }
              if (uVar17 != 0) goto LAB_00555354;
              lVar12 = 0;
            }
            else {
              uVar17 = 0x3fffffffffffffff;
LAB_00555354:
              lVar12 = FUN_002e2e80(PTR_FUN_04373078,uVar17 << 2);
              pvVar5 = (void *)*param_7;
              puVar10 = (undefined4 *)param_7[1];
            }
            puVar1 = (undefined4 *)(lVar12 + lVar9 * 4);
            sVar6 = (long)puVar10 - (long)pvVar5;
            *puVar1 = uVar3;
            if (0 < (long)sVar6) {
              memcpy((void *)((long)puVar1 - sVar6),pvVar5,sVar6);
              pvVar5 = (void *)*param_7;
            }
            *param_7 = (long)((long)puVar1 - sVar6);
            param_7[1] = (long)(puVar1 + 1);
            param_7[2] = lVar12 + uVar17 * 4;
            if (pvVar5 != (void *)0x0) {
              FUN_002e2ea0(PTR_LAB_04373088);
            }
          }
          uVar7 = *puVar8;
        }
        uVar16 = uVar7 >> 4;
        lVar9 = *(long *)(param_6 + 6);
        if (lVar9 != 0) goto LAB_005551fc;
LAB_005552f0:
        if (uVar16 < 0x80000000) break;
      } while( true );
    }
LAB_005555c0:
                    /* WARNING: Subroutine does not return */
    __assert_fail("i < max_size()","external/com_github_google_re2\\re2/sparse_set.h",0xde,
                  "contains");
  }
LAB_005555e0:
                    /* WARNING: Subroutine does not return */
  __assert_fail("i >= 0","external/com_github_google_re2\\re2/sparse_set.h",0xdd,"contains");
}


