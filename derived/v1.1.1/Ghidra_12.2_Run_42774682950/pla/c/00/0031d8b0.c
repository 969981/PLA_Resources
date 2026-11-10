/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0031d8b0; name: FUN_0031d8b0
 */


void FUN_0031d8b0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
                 long param_5,long param_6,undefined8 *param_7,long param_8)

{
  uint uVar1;
  size_t sVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 *puVar20;
  long lVar21;
  undefined8 *puVar22;
  ulong uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined1 auStack_e0 [128];
  
  if (param_6 == 0) {
    return;
  }
  while ((param_8 < param_6 && (param_8 < param_5))) {
    if (param_5 == 0) {
      return;
    }
    lVar21 = -param_5;
    while (uVar4 = FUN_0031cd5c(param_4,*param_2,*param_1), (uVar4 & 1) == 0) {
      param_1 = param_1 + 1;
      bVar3 = lVar21 == -1;
      lVar21 = lVar21 + 1;
      if (bVar3) {
        return;
      }
    }
    lVar6 = -lVar21;
    if (lVar6 < param_6) {
      lVar13 = param_6;
      if (param_6 < 0) {
        lVar13 = param_6 + 1;
      }
      lVar13 = lVar13 >> 1;
      puVar22 = param_2 + lVar13;
      puVar12 = param_1;
      if ((long)param_2 - (long)param_1 != 0) {
        uVar4 = (long)param_2 - (long)param_1 >> 3;
        do {
          uVar23 = uVar4 >> 1;
          uVar5 = FUN_0031cd5c(param_4,*puVar22,puVar12[uVar23]);
          uVar8 = uVar4 + ~uVar23;
          uVar4 = uVar23;
          if ((uVar5 & 1) == 0) {
            puVar12 = puVar12 + uVar23 + 1;
            uVar4 = uVar8;
          }
        } while (uVar4 != 0);
      }
      lVar6 = (long)puVar12 - (long)param_1 >> 3;
    }
    else {
      if (lVar21 == -1) {
        uVar19 = *param_1;
        *param_1 = *param_2;
        *param_2 = uVar19;
        return;
      }
      if (lVar6 < 0) {
        lVar6 = lVar6 + 1;
      }
      lVar6 = lVar6 >> 1;
      puVar12 = param_1 + lVar6;
      if ((long)param_3 - (long)param_2 == 0) {
        puVar22 = param_2;
      }
      else {
        uVar4 = (long)param_3 - (long)param_2 >> 3;
        puVar11 = param_2;
        do {
          uVar5 = uVar4 >> 1;
          uVar8 = FUN_0031cd5c(param_4,puVar11[uVar5],*puVar12);
          puVar22 = puVar11 + uVar5 + 1;
          uVar4 = uVar4 + ~uVar5;
          if ((uVar8 & 1) == 0) {
            puVar22 = puVar11;
            uVar4 = uVar5;
          }
          puVar11 = puVar22;
        } while (uVar4 != 0);
      }
      lVar13 = (long)puVar22 - (long)param_2 >> 3;
    }
    param_5 = -(lVar6 + lVar21);
    if (puVar12 == param_2) {
      param_2 = puVar22;
    }
    else if (param_2 == puVar22) {
      param_2 = puVar12;
    }
    else if (puVar12 + 1 == param_2) {
      uVar19 = *puVar12;
      sVar2 = (long)puVar22 - (long)param_2;
      if (sVar2 != 0) {
        memmove(puVar12,param_2,sVar2);
      }
      puVar12[(long)sVar2 >> 3] = uVar19;
      param_2 = puVar12 + ((long)sVar2 >> 3);
    }
    else if (param_2 + 1 == puVar22) {
      uVar19 = puVar22[-1];
      sVar2 = (long)(puVar22 + -1) - (long)puVar12;
      if (sVar2 == 0) {
        *puVar12 = uVar19;
        param_2 = puVar22;
      }
      else {
        memmove((undefined8 *)((long)puVar22 - sVar2),puVar12,sVar2);
        *puVar12 = uVar19;
        param_2 = (undefined8 *)((long)puVar22 - sVar2);
      }
    }
    else {
      lVar7 = (long)param_2 - (long)puVar12 >> 3;
      lVar14 = (long)puVar22 - (long)param_2 >> 3;
      if (lVar7 == lVar14) {
        uVar8 = ((long)param_2 - (long)puVar12) - 8;
        uVar4 = (uVar8 >> 3) + 1;
        if ((uVar4 < 8) ||
           ((uVar8 = uVar8 & 0xfffffffffffffff8, puVar12 < (undefined8 *)((long)param_2 + uVar8 + 8)
            && (param_2 < (undefined8 *)((long)puVar12 + uVar8 + 8))))) {
          puVar10 = param_2;
          puVar11 = puVar12;
        }
        else {
          uVar5 = uVar4 & 0x3ffffffffffffff8;
          lVar7 = 0;
          puVar10 = param_2 + uVar5;
          puVar11 = puVar12 + uVar5;
          uVar8 = uVar5;
          do {
            puVar9 = (undefined8 *)((long)param_2 + lVar7);
            puVar15 = (undefined8 *)((long)puVar12 + lVar7 + 0x20);
            uVar8 = uVar8 - 8;
            uVar27 = *puVar9;
            uVar29 = puVar9[3];
            uVar28 = puVar9[2];
            uVar24 = puVar15[-3];
            uVar19 = puVar15[-4];
            uVar26 = puVar15[-1];
            uVar25 = puVar15[-2];
            lVar7 = lVar7 + 0x40;
            uVar32 = puVar9[5];
            uVar31 = puVar9[4];
            uVar34 = puVar9[7];
            uVar33 = puVar9[6];
            puVar15[-3] = puVar9[1];
            puVar15[-4] = uVar27;
            puVar15[-1] = uVar29;
            puVar15[-2] = uVar28;
            uVar28 = puVar15[1];
            uVar27 = *puVar15;
            uVar30 = puVar15[3];
            uVar29 = puVar15[2];
            puVar15[1] = uVar32;
            *puVar15 = uVar31;
            puVar15[3] = uVar34;
            puVar15[2] = uVar33;
            puVar9[1] = uVar24;
            *puVar9 = uVar19;
            puVar9[3] = uVar26;
            puVar9[2] = uVar25;
            puVar9[5] = uVar28;
            puVar9[4] = uVar27;
            puVar9[7] = uVar30;
            puVar9[6] = uVar29;
          } while (uVar8 != 0);
          if (uVar4 == uVar5) goto LAB_0031dd40;
        }
        uVar4 = (long)param_2 + (-8 - (long)puVar11);
        uVar1 = ((uint)(uVar4 >> 3) & 0x1fffffff) + 1;
        if ((uVar1 & 3) != 0) {
          lVar7 = -((ulong)uVar1 & 3);
          puVar9 = puVar10;
          puVar15 = puVar11;
          do {
            uVar19 = *puVar15;
            bVar3 = lVar7 != -1;
            lVar7 = lVar7 + 1;
            puVar11 = puVar15 + 1;
            *puVar15 = *puVar9;
            puVar10 = puVar9 + 1;
            *puVar9 = uVar19;
            puVar9 = puVar10;
            puVar15 = puVar11;
          } while (bVar3);
        }
        if (0x17 < uVar4) {
          do {
            uVar19 = *puVar11;
            *puVar11 = *puVar10;
            *puVar10 = uVar19;
            uVar19 = puVar11[1];
            puVar11[1] = puVar10[1];
            puVar10[1] = uVar19;
            uVar19 = puVar11[2];
            puVar11[2] = puVar10[2];
            puVar10[2] = uVar19;
            uVar19 = puVar11[3];
            puVar11[3] = puVar10[3];
            puVar11 = puVar11 + 4;
            puVar10[3] = uVar19;
            puVar10 = puVar10 + 4;
          } while (puVar11 != param_2);
        }
      }
      else {
        lVar18 = lVar7;
        lVar17 = lVar14;
        do {
          lVar16 = lVar17;
          lVar17 = 0;
          if (lVar16 != 0) {
            lVar17 = lVar18 / lVar16;
          }
          lVar17 = lVar18 - lVar17 * lVar16;
          lVar18 = lVar16;
        } while (lVar17 != 0);
        if (lVar16 != 0) {
          puVar11 = puVar12 + lVar16;
          lVar18 = lVar16 * 8 + -8;
          if (((uint)lVar18 >> 3 & 1) == 0) {
            puVar11 = puVar11 + -1;
            uVar19 = *puVar11;
            puVar10 = puVar11 + lVar7;
            puVar9 = puVar11;
            do {
              puVar15 = puVar10;
              *puVar9 = *puVar15;
              lVar17 = (long)puVar22 - (long)puVar15 >> 3;
              puVar10 = puVar15 + lVar7;
              if (lVar17 <= lVar7) {
                puVar10 = puVar12 + (lVar7 - lVar17);
              }
              puVar9 = puVar15;
            } while (puVar10 != puVar11);
            *puVar15 = uVar19;
          }
          if (lVar18 != 0) {
            do {
              puVar15 = puVar11 + -1;
              uVar19 = *puVar15;
              puVar10 = puVar15 + lVar7;
              puVar9 = puVar15;
              do {
                puVar20 = puVar10;
                *puVar9 = *puVar20;
                lVar18 = (long)puVar22 - (long)puVar20 >> 3;
                puVar10 = puVar20 + lVar7;
                if (lVar18 <= lVar7) {
                  puVar10 = puVar12 + (lVar7 - lVar18);
                }
                puVar9 = puVar20;
              } while (puVar10 != puVar15);
              *puVar20 = uVar19;
              puVar11 = puVar11 + -2;
              uVar19 = *puVar11;
              puVar10 = puVar11 + lVar7;
              puVar9 = puVar11;
              do {
                puVar15 = puVar10;
                *puVar9 = *puVar15;
                lVar18 = (long)puVar22 - (long)puVar15 >> 3;
                puVar10 = puVar15 + lVar7;
                if (lVar18 <= lVar7) {
                  puVar10 = puVar12 + (lVar7 - lVar18);
                }
                puVar9 = puVar15;
              } while (puVar10 != puVar11);
              *puVar15 = uVar19;
            } while (puVar11 != puVar12);
          }
        }
        param_2 = puVar12 + lVar14;
      }
    }
LAB_0031dd40:
    if (lVar6 + lVar13 < (param_6 - (lVar6 + lVar13)) - lVar21) {
      FUN_0031d8b0(param_1,puVar12,param_2,param_4,lVar6,lVar13,param_7,param_8);
      param_6 = param_6 - lVar13;
      param_1 = param_2;
    }
    else {
      FUN_0031d8b0(param_2,puVar22,param_3,param_4,param_5,param_6 - lVar13,param_7,param_8);
      param_5 = lVar6;
      param_6 = lVar13;
      puVar22 = puVar12;
      param_3 = param_2;
    }
    param_2 = puVar22;
    if (param_6 == 0) {
      return;
    }
  }
  if (param_5 <= param_6) {
    if (param_1 == param_2) {
      return;
    }
    uVar8 = (long)param_2 + (-8 - (long)param_1);
    uVar4 = (uVar8 >> 3) + 1;
    puVar12 = param_1;
    puVar22 = param_7;
    if ((7 < uVar4) &&
       ((lVar21 = (uVar8 & 0xfffffffffffffff8) + 8,
        (undefined8 *)((long)param_1 + lVar21) <= param_7 ||
        ((undefined8 *)((long)param_7 + lVar21) <= param_1)))) {
      uVar5 = uVar4 & 0x3ffffffffffffff8;
      puVar22 = param_7 + uVar5;
      puVar12 = param_1 + uVar5;
      puVar11 = param_7 + 4;
      puVar10 = param_1 + 4;
      uVar8 = uVar5;
      do {
        uVar19 = puVar10[-4];
        uVar25 = puVar10[-1];
        uVar24 = puVar10[-2];
        uVar8 = uVar8 - 8;
        uVar27 = puVar10[1];
        uVar26 = *puVar10;
        uVar29 = puVar10[3];
        uVar28 = puVar10[2];
        puVar11[-3] = puVar10[-3];
        puVar11[-4] = uVar19;
        puVar11[-1] = uVar25;
        puVar11[-2] = uVar24;
        puVar11[1] = uVar27;
        *puVar11 = uVar26;
        puVar11[3] = uVar29;
        puVar11[2] = uVar28;
        puVar11 = puVar11 + 8;
        puVar10 = puVar10 + 8;
      } while (uVar8 != 0);
      if (uVar4 == uVar5) goto joined_r0x0031e0cc;
    }
    uVar4 = (long)param_2 + (-8 - (long)puVar12);
    uVar1 = ((uint)(uVar4 >> 3) & 0x1fffffff) + 1;
    if ((uVar1 & 3) != 0) {
      lVar21 = -((ulong)uVar1 & 3);
      puVar11 = puVar12;
      puVar10 = puVar22;
      do {
        puVar12 = puVar11 + 1;
        bVar3 = lVar21 != -1;
        lVar21 = lVar21 + 1;
        puVar22 = puVar10 + 1;
        *puVar10 = *puVar11;
        puVar11 = puVar12;
        puVar10 = puVar22;
      } while (bVar3);
    }
    if (0x17 < uVar4) {
      do {
        *puVar22 = *puVar12;
        puVar22[1] = puVar12[1];
        puVar22[2] = puVar12[2];
        puVar11 = puVar12 + 3;
        puVar12 = puVar12 + 4;
        puVar22[3] = *puVar11;
        puVar22 = puVar22 + 4;
      } while (puVar12 != param_2);
    }
joined_r0x0031e0cc:
    do {
      puVar12 = param_1;
      if (puVar22 == param_7) {
        return;
      }
      while( true ) {
        if (param_2 == param_3) {
          if ((long)puVar22 - (long)param_7 == 0) {
            return;
          }
          memmove(puVar12,param_7,(long)puVar22 - (long)param_7);
          return;
        }
        uVar4 = FUN_0031cd5c(auStack_e0 + 0x98,*param_2,*param_7);
        if ((uVar4 & 1) == 0) break;
        *puVar12 = *param_2;
        puVar12 = puVar12 + 1;
        param_2 = param_2 + 1;
        if (param_7 == puVar22) {
          return;
        }
      }
      param_1 = puVar12 + 1;
      *puVar12 = *param_7;
      param_7 = param_7 + 1;
    } while( true );
  }
  if (param_2 == param_3) {
    return;
  }
  uVar8 = (long)param_3 + (-8 - (long)param_2);
  uVar4 = (uVar8 >> 3) + 1;
  puVar12 = param_2;
  puVar22 = param_7;
  if ((7 < uVar4) &&
     ((lVar21 = (uVar8 & 0xfffffffffffffff8) + 8, (undefined8 *)((long)param_2 + lVar21) <= param_7
      || ((undefined8 *)((long)param_7 + lVar21) <= param_2)))) {
    uVar5 = uVar4 & 0x3ffffffffffffff8;
    puVar22 = param_7 + uVar5;
    puVar12 = param_2 + uVar5;
    puVar11 = param_7 + 4;
    puVar10 = param_2 + 4;
    uVar8 = uVar5;
    do {
      uVar19 = puVar10[-4];
      uVar25 = puVar10[-1];
      uVar24 = puVar10[-2];
      uVar8 = uVar8 - 8;
      uVar27 = puVar10[1];
      uVar26 = *puVar10;
      uVar29 = puVar10[3];
      uVar28 = puVar10[2];
      puVar11[-3] = puVar10[-3];
      puVar11[-4] = uVar19;
      puVar11[-1] = uVar25;
      puVar11[-2] = uVar24;
      puVar11[1] = uVar27;
      *puVar11 = uVar26;
      puVar11[3] = uVar29;
      puVar11[2] = uVar28;
      puVar11 = puVar11 + 8;
      puVar10 = puVar10 + 8;
    } while (uVar8 != 0);
    if (uVar4 == uVar5) goto LAB_0031df60;
  }
  uVar4 = (long)param_3 + (-8 - (long)puVar12);
  uVar1 = ((uint)(uVar4 >> 3) & 0x1fffffff) + 1;
  if ((uVar1 & 3) != 0) {
    lVar21 = -((ulong)uVar1 & 3);
    puVar11 = puVar12;
    puVar10 = puVar22;
    do {
      puVar12 = puVar11 + 1;
      bVar3 = lVar21 != -1;
      lVar21 = lVar21 + 1;
      puVar22 = puVar10 + 1;
      *puVar10 = *puVar11;
      puVar11 = puVar12;
      puVar10 = puVar22;
    } while (bVar3);
  }
  if (0x17 < uVar4) {
    do {
      *puVar22 = *puVar12;
      puVar22[1] = puVar12[1];
      puVar22[2] = puVar12[2];
      puVar11 = puVar12 + 3;
      puVar12 = puVar12 + 4;
      puVar22[3] = *puVar11;
      puVar22 = puVar22 + 4;
    } while (puVar12 != param_3);
  }
LAB_0031df60:
  if (puVar22 != param_7) {
    while (param_2 != param_1) {
      puVar11 = param_2 + -1;
      puVar12 = puVar22 + -1;
      uVar4 = FUN_0031cd5c(param_4,*puVar12,*puVar11);
      if ((uVar4 & 1) == 0) {
        param_3[-1] = *puVar12;
        puVar22 = puVar12;
      }
      else {
        param_3[-1] = *puVar11;
        param_2 = puVar11;
      }
      if (puVar22 == param_7) {
        return;
      }
      param_3 = param_3 + -1;
    }
    uVar4 = (long)puVar22 + (-8 - (long)param_7);
    uVar1 = ((uint)(uVar4 >> 3) & 0x1fffffff) + 1;
    if ((uVar1 & 3) != 0) {
      lVar21 = -((ulong)uVar1 & 3);
      do {
        puVar22 = puVar22 + -1;
        bVar3 = lVar21 != -1;
        lVar21 = lVar21 + 1;
        param_3 = param_3 + -1;
        *param_3 = *puVar22;
      } while (bVar3);
    }
    if (0x17 < uVar4) {
      param_3 = param_3 + -2;
      do {
        param_3[1] = puVar22[-1];
        *param_3 = puVar22[-2];
        param_3[-1] = puVar22[-3];
        puVar22 = puVar22 + -4;
        param_3[-2] = *puVar22;
        param_3 = param_3 + -4;
      } while (param_7 != puVar22);
    }
  }
  return;
}


