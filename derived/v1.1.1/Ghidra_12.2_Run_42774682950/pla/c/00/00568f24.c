/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00568f24; name: FUN_00568f24
 */


void FUN_00568f24(long *param_1)

{
  uint uVar1;
  size_t sVar2;
  bool bVar3;
  undefined8 *puVar4;
  void *pvVar5;
  void *pvVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  void *local_58;
  
  if ((ulong)param_1[4] < 0x55) {
    puVar21 = (undefined8 *)param_1[1];
    puVar17 = (undefined8 *)param_1[2];
    uVar10 = (long)puVar17 - (long)puVar21 >> 3;
    lVar8 = param_1[3] - *param_1;
    if ((ulong)(lVar8 >> 3) <= uVar10) {
      uVar9 = lVar8 >> 2;
      if (lVar8 == 0) {
        uVar9 = 1;
      }
      if (uVar9 >> 0x3d != 0) {
LAB_00569668:
                    /* WARNING: Subroutine does not return */
        FUN_00568a40();
      }
      puVar4 = operator_new(uVar9 * 8);
                    /* try { // try from 005690a0 to 005690a7 has its CatchHandler @ 0056968c */
      pvVar5 = operator_new(0xff0);
      puVar18 = puVar4 + uVar10;
      puVar19 = puVar4 + uVar9;
      if (uVar10 == uVar9) {
        if (puVar4 <= puVar18 && (long)puVar18 - (long)puVar4 != 0) {
          lVar8 = (long)puVar18 - (long)puVar4 >> 3;
          uVar10 = lVar8 + 2;
          if (-1 < lVar8 + 1) {
            uVar10 = lVar8 + 1;
          }
          puVar18 = (undefined8 *)((long)puVar18 + (uVar10 & 0x3ffffffffffffffe) * -4);
          *puVar18 = pvVar5;
          goto joined_r0x0056911c;
        }
        uVar10 = (long)puVar19 - (long)puVar4 >> 2;
        if ((long)puVar19 - (long)puVar4 == 0) {
          uVar10 = 1;
        }
        if (uVar10 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0056966c to 0056966f has its CatchHandler @ 0056967c */
          FUN_00568a40();
        }
                    /* try { // try from 00569190 to 00569193 has its CatchHandler @ 0056967c */
        puVar7 = operator_new(uVar10 << 3);
        puVar19 = puVar7 + uVar10;
        puVar18 = (undefined8 *)((long)puVar7 + (uVar10 & 0x7ffffffffffffffc) * 2);
        operator_delete(puVar4);
        puVar21 = (undefined8 *)param_1[1];
        puVar17 = (undefined8 *)param_1[2];
        puVar13 = puVar18 + 1;
        *puVar18 = pvVar5;
        puVar4 = puVar7;
        if (puVar17 != puVar21) goto LAB_005691fc;
      }
      else {
        *puVar18 = pvVar5;
joined_r0x0056911c:
        puVar13 = puVar18 + 1;
        puVar7 = puVar4;
        if (puVar17 != puVar21) {
LAB_005691fc:
          do {
            if (puVar18 == puVar7) {
              if (puVar13 < puVar19) {
                lVar8 = (long)puVar19 - (long)puVar13 >> 3;
                uVar10 = lVar8 + 2;
                if (-1 < lVar8 + 1) {
                  uVar10 = lVar8 + 1;
                }
                sVar2 = (long)puVar13 - (long)puVar18;
                puVar13 = (undefined8 *)((long)puVar13 + (uVar10 & 0x3ffffffffffffffe) * 4);
                puVar21 = puVar13;
                if (sVar2 != 0) {
                  puVar21 = (undefined8 *)((long)puVar13 - sVar2);
                  memmove(puVar21,puVar18,sVar2);
                }
                puVar18 = puVar21;
              }
              else {
                uVar10 = (long)puVar19 - (long)puVar7 >> 2;
                if ((long)puVar19 - (long)puVar7 == 0) {
                  uVar10 = 1;
                }
                if (uVar10 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00569664 to 00569667 has its CatchHandler @ 00569670 */
                  FUN_00568a40();
                }
                    /* try { // try from 0056926c to 0056926f has its CatchHandler @ 00569694 */
                puVar7 = operator_new(uVar10 << 3);
                puVar19 = puVar7 + uVar10;
                uVar10 = uVar10 + 3 >> 2;
                puVar4 = puVar7 + uVar10;
                puVar21 = puVar4;
                if (puVar18 != puVar13) {
                  uVar15 = (long)puVar13 + (-8 - (long)puVar18);
                  uVar9 = (uVar15 >> 3) + 1;
                  puVar12 = puVar18;
                  if (7 < uVar9) {
                    uVar15 = uVar15 & 0xfffffffffffffff8;
                    if (((undefined8 *)((long)puVar18 + uVar15 + 8) <= puVar7 + uVar10) ||
                       ((undefined8 *)((long)puVar7 + uVar15 + uVar10 * 8 + 8) <= puVar18)) {
                      uVar15 = uVar9 & 0x3ffffffffffffff8;
                      uVar10 = (uVar15 - 8 >> 3) + 1;
                      uVar14 = uVar10 & 1;
                      lVar8 = 0;
                      if (uVar15 - 8 != 0) {
                        lVar16 = uVar14 - uVar10;
                        puVar21 = puVar18 + 8;
                        puVar12 = puVar4 + 8;
                        do {
                          uVar20 = puVar21[-8];
                          uVar24 = puVar21[-5];
                          uVar23 = puVar21[-6];
                          lVar8 = lVar8 + 0x10;
                          lVar16 = lVar16 + 2;
                          uVar26 = puVar21[-3];
                          uVar25 = puVar21[-4];
                          uVar28 = puVar21[-1];
                          uVar27 = puVar21[-2];
                          puVar12[-7] = puVar21[-7];
                          puVar12[-8] = uVar20;
                          puVar12[-5] = uVar24;
                          puVar12[-6] = uVar23;
                          puVar12[-3] = uVar26;
                          puVar12[-4] = uVar25;
                          puVar12[-1] = uVar28;
                          puVar12[-2] = uVar27;
                          uVar20 = *puVar21;
                          uVar24 = puVar21[3];
                          uVar23 = puVar21[2];
                          uVar26 = puVar21[5];
                          uVar25 = puVar21[4];
                          uVar28 = puVar21[7];
                          uVar27 = puVar21[6];
                          puVar12[1] = puVar21[1];
                          *puVar12 = uVar20;
                          puVar12[3] = uVar24;
                          puVar12[2] = uVar23;
                          puVar21 = puVar21 + 0x10;
                          puVar12[5] = uVar26;
                          puVar12[4] = uVar25;
                          puVar12[7] = uVar28;
                          puVar12[6] = uVar27;
                          puVar12 = puVar12 + 0x10;
                        } while (lVar16 != 0);
                      }
                      puVar21 = puVar4 + uVar15;
                      puVar12 = puVar18 + uVar15;
                      if (uVar14 != 0) {
                        puVar11 = puVar18 + lVar8;
                        puVar22 = puVar4 + lVar8;
                        uVar20 = *puVar11;
                        uVar24 = puVar11[3];
                        uVar23 = puVar11[2];
                        uVar26 = puVar11[5];
                        uVar25 = puVar11[4];
                        uVar28 = puVar11[7];
                        uVar27 = puVar11[6];
                        puVar22[1] = puVar11[1];
                        *puVar22 = uVar20;
                        puVar22[3] = uVar24;
                        puVar22[2] = uVar23;
                        puVar22[5] = uVar26;
                        puVar22[4] = uVar25;
                        puVar22[7] = uVar28;
                        puVar22[6] = uVar27;
                      }
                      if (uVar9 == uVar15) goto LAB_005693fc;
                    }
                  }
                  uVar10 = (long)puVar13 + (-8 - (long)puVar12);
                  uVar1 = ((uint)(uVar10 >> 3) & 0x1fffffff) + 1;
                  if ((uVar1 & 7) != 0) {
                    lVar8 = -((ulong)uVar1 & 7);
                    puVar11 = puVar12;
                    puVar22 = puVar21;
                    do {
                      puVar12 = puVar11 + 1;
                      bVar3 = lVar8 != -1;
                      lVar8 = lVar8 + 1;
                      puVar21 = puVar22 + 1;
                      *puVar22 = *puVar11;
                      puVar11 = puVar12;
                      puVar22 = puVar21;
                    } while (bVar3);
                  }
                  if (0x37 < uVar10) {
                    do {
                      *puVar21 = *puVar12;
                      puVar21[1] = puVar12[1];
                      puVar21[2] = puVar12[2];
                      puVar21[3] = puVar12[3];
                      puVar21[4] = puVar12[4];
                      puVar21[5] = puVar12[5];
                      puVar21[6] = puVar12[6];
                      puVar11 = puVar12 + 7;
                      puVar12 = puVar12 + 8;
                      puVar21[7] = *puVar11;
                      puVar21 = puVar21 + 8;
                    } while (puVar12 != puVar13);
                  }
                }
LAB_005693fc:
                puVar13 = puVar21;
                operator_delete(puVar18);
                puVar18 = puVar4;
              }
            }
            puVar17 = puVar17 + -1;
            puVar18 = puVar18 + -1;
            *puVar18 = *puVar17;
          } while (puVar17 != (undefined8 *)param_1[1]);
          pvVar5 = (void *)*param_1;
          *param_1 = (long)puVar7;
          param_1[1] = (long)puVar18;
          param_1[2] = (long)puVar13;
          param_1[3] = (long)puVar19;
          goto joined_r0x00569420;
        }
      }
      pvVar5 = (void *)*param_1;
      *param_1 = (long)puVar4;
      param_1[1] = (long)puVar18;
      param_1[2] = (long)puVar13;
      param_1[3] = (long)puVar19;
joined_r0x00569420:
      if (pvVar5 == (void *)0x0) {
        return;
      }
      operator_delete(pvVar5);
      return;
    }
    if ((undefined8 *)param_1[3] != puVar17) {
      local_58 = operator_new(0xff0);
      FUN_005696ac(param_1,&local_58);
      return;
    }
    local_58 = operator_new(0xff0);
    FUN_005698b4(param_1,&local_58);
    puVar18 = (undefined8 *)param_1[1];
    puVar21 = (undefined8 *)param_1[2];
    puVar17 = puVar18 + 1;
    uVar20 = *puVar18;
    param_1[1] = (long)puVar17;
    if (puVar21 != (undefined8 *)param_1[3]) goto LAB_0056954c;
    puVar19 = (undefined8 *)*param_1;
    lVar8 = (long)puVar17 - (long)puVar19;
    if (puVar19 <= puVar17 && lVar8 != 0) goto LAB_00568f78;
    lVar8 = param_1[3] - (long)puVar19;
    uVar10 = lVar8 >> 2;
    if (lVar8 == 0) {
      uVar10 = 1;
    }
    if (uVar10 >> 0x3d != 0) goto LAB_00569668;
    pvVar6 = operator_new(uVar10 * 8);
    puVar4 = (undefined8 *)((long)pvVar6 + (uVar10 >> 2) * 8);
    pvVar5 = (void *)((long)pvVar6 + uVar10 * 8);
    if (puVar17 == puVar21) goto LAB_00569440;
    uVar15 = (long)puVar21 + (-0x10 - (long)puVar18);
    uVar9 = (uVar15 >> 3) + 1;
    puVar13 = puVar4;
    if (uVar9 < 8) {
LAB_005695ec:
      uVar10 = (long)puVar21 + (-8 - (long)puVar17);
      uVar1 = ((uint)(uVar10 >> 3) & 0x1fffffff) + 1;
      if ((uVar1 & 3) != 0) {
        lVar8 = -((ulong)uVar1 & 3);
        puVar18 = puVar13;
        puVar19 = puVar17;
        do {
          puVar17 = puVar19 + 1;
          bVar3 = lVar8 != -1;
          lVar8 = lVar8 + 1;
          puVar13 = puVar18 + 1;
          *puVar18 = *puVar19;
          puVar18 = puVar13;
          puVar19 = puVar17;
        } while (bVar3);
      }
      if (0x17 < uVar10) {
        do {
          *puVar13 = *puVar17;
          puVar13[1] = puVar17[1];
          puVar13[2] = puVar17[2];
          puVar18 = puVar17 + 3;
          puVar17 = puVar17 + 4;
          puVar13[3] = *puVar18;
          puVar13 = puVar13 + 4;
        } while (puVar17 != puVar21);
      }
    }
    else {
      uVar15 = uVar15 & 0xfffffffffffffff8;
      lVar8 = (uVar10 >> 2) * 8;
      if (((void *)((long)pvVar6 + lVar8) < (void *)((long)puVar18 + uVar15 + 0x10)) &&
         (puVar17 < (undefined8 *)((long)pvVar6 + lVar8 + uVar15 + 8))) goto LAB_005695ec;
      uVar15 = uVar9 & 0x3ffffffffffffff8;
      puVar13 = puVar4 + uVar15;
      puVar17 = puVar17 + uVar15;
      puVar19 = puVar4 + 4;
      puVar18 = puVar18 + 5;
      uVar10 = uVar15;
      do {
        uVar24 = puVar18[-3];
        uVar23 = puVar18[-4];
        uVar26 = puVar18[-1];
        uVar25 = puVar18[-2];
        uVar10 = uVar10 - 8;
        uVar27 = *puVar18;
        uVar29 = puVar18[3];
        uVar28 = puVar18[2];
        puVar19[1] = puVar18[1];
        *puVar19 = uVar27;
        puVar19[3] = uVar29;
        puVar19[2] = uVar28;
        puVar19[-3] = uVar24;
        puVar19[-4] = uVar23;
        puVar19[-1] = uVar26;
        puVar19[-2] = uVar25;
        puVar19 = puVar19 + 8;
        puVar18 = puVar18 + 8;
      } while (uVar10 != 0);
      if (uVar9 != uVar15) goto LAB_005695ec;
    }
    puVar19 = (undefined8 *)*param_1;
    *param_1 = (long)pvVar6;
    param_1[1] = (long)puVar4;
    param_1[2] = (long)puVar13;
    param_1[3] = (long)pvVar5;
    puVar21 = puVar13;
  }
  else {
    puVar18 = (undefined8 *)param_1[1];
    puVar21 = (undefined8 *)param_1[2];
    param_1[4] = param_1[4] - 0x55;
    puVar17 = puVar18 + 1;
    uVar20 = *puVar18;
    param_1[1] = (long)puVar17;
    if (puVar21 != (undefined8 *)param_1[3]) goto LAB_0056954c;
    puVar19 = (undefined8 *)*param_1;
    lVar8 = (long)puVar17 - (long)puVar19;
    if (puVar19 <= puVar17 && lVar8 != 0) {
LAB_00568f78:
      lVar8 = lVar8 >> 3;
      lVar16 = lVar8 + 2;
      if (-1 < lVar8 + 1) {
        lVar16 = lVar8 + 1;
      }
      sVar2 = (long)puVar21 - (long)puVar17;
      puVar21 = puVar17 + -(lVar16 >> 1);
      if (sVar2 != 0) {
        memmove(puVar21,puVar17,sVar2);
        puVar17 = (undefined8 *)param_1[1];
      }
      puVar21 = puVar21 + ((long)sVar2 >> 3);
      param_1[1] = (long)(puVar17 + -(lVar16 >> 1));
      param_1[2] = (long)puVar21;
      goto LAB_0056954c;
    }
    lVar8 = param_1[3] - (long)puVar19;
    uVar10 = lVar8 >> 2;
    if (lVar8 == 0) {
      uVar10 = 1;
    }
    if (uVar10 >> 0x3d != 0) goto LAB_00569668;
    pvVar6 = operator_new(uVar10 * 8);
    puVar4 = (undefined8 *)((long)pvVar6 + (uVar10 >> 2) * 8);
    pvVar5 = (void *)((long)pvVar6 + uVar10 * 8);
    if (puVar17 == puVar21) {
LAB_00569440:
      *param_1 = (long)pvVar6;
      param_1[1] = (long)puVar4;
      param_1[2] = (long)puVar4;
      param_1[3] = (long)pvVar5;
      puVar21 = puVar4;
      goto joined_r0x0056965c;
    }
    uVar15 = (long)puVar21 + (-0x10 - (long)puVar18);
    uVar9 = (uVar15 >> 3) + 1;
    puVar13 = puVar4;
    if (uVar9 < 8) {
LAB_005694cc:
      uVar10 = (long)puVar21 + (-8 - (long)puVar17);
      uVar1 = ((uint)(uVar10 >> 3) & 0x1fffffff) + 1;
      if ((uVar1 & 3) != 0) {
        lVar8 = -((ulong)uVar1 & 3);
        puVar18 = puVar13;
        puVar19 = puVar17;
        do {
          puVar17 = puVar19 + 1;
          bVar3 = lVar8 != -1;
          lVar8 = lVar8 + 1;
          puVar13 = puVar18 + 1;
          *puVar18 = *puVar19;
          puVar18 = puVar13;
          puVar19 = puVar17;
        } while (bVar3);
      }
      if (0x17 < uVar10) {
        do {
          *puVar13 = *puVar17;
          puVar13[1] = puVar17[1];
          puVar13[2] = puVar17[2];
          puVar18 = puVar17 + 3;
          puVar17 = puVar17 + 4;
          puVar13[3] = *puVar18;
          puVar13 = puVar13 + 4;
        } while (puVar17 != puVar21);
      }
    }
    else {
      uVar15 = uVar15 & 0xfffffffffffffff8;
      lVar8 = (uVar10 >> 2) * 8;
      if (((void *)((long)pvVar6 + lVar8) < (void *)((long)puVar18 + uVar15 + 0x10)) &&
         (puVar17 < (undefined8 *)((long)pvVar6 + lVar8 + uVar15 + 8))) goto LAB_005694cc;
      uVar15 = uVar9 & 0x3ffffffffffffff8;
      puVar13 = puVar4 + uVar15;
      puVar17 = puVar17 + uVar15;
      puVar19 = puVar4 + 4;
      puVar18 = puVar18 + 5;
      uVar10 = uVar15;
      do {
        uVar24 = puVar18[-3];
        uVar23 = puVar18[-4];
        uVar26 = puVar18[-1];
        uVar25 = puVar18[-2];
        uVar10 = uVar10 - 8;
        uVar27 = *puVar18;
        uVar29 = puVar18[3];
        uVar28 = puVar18[2];
        puVar19[1] = puVar18[1];
        *puVar19 = uVar27;
        puVar19[3] = uVar29;
        puVar19[2] = uVar28;
        puVar19[-3] = uVar24;
        puVar19[-4] = uVar23;
        puVar19[-1] = uVar26;
        puVar19[-2] = uVar25;
        puVar19 = puVar19 + 8;
        puVar18 = puVar18 + 8;
      } while (uVar10 != 0);
      if (uVar9 != uVar15) goto LAB_005694cc;
    }
    puVar19 = (undefined8 *)*param_1;
    *param_1 = (long)pvVar6;
    param_1[1] = (long)puVar4;
    param_1[2] = (long)puVar13;
    param_1[3] = (long)pvVar5;
    puVar21 = puVar13;
  }
joined_r0x0056965c:
  if (puVar19 != (undefined8 *)0x0) {
    operator_delete(puVar19);
    puVar21 = (undefined8 *)param_1[2];
  }
LAB_0056954c:
  *puVar21 = uVar20;
  param_1[2] = param_1[2] + 8;
  return;
}


