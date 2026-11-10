/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01099fe0; name: FUN_01099fe0
 */


void FUN_01099fe0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,long param_4,
                 long param_5,undefined8 *param_6,long param_7)

{
  uint uVar1;
  size_t sVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 *puVar19;
  long lVar20;
  long lVar21;
  
  if (param_5 != 0) {
    while ((param_7 < param_4 && (param_7 < param_5))) {
      if (param_4 == 0) {
        return;
      }
      lVar20 = -param_4;
      while (*(ushort *)((long)param_2 + 4) <= *(ushort *)((long)param_1 + 4)) {
        param_1 = param_1 + 1;
        bVar3 = lVar20 == -1;
        lVar20 = lVar20 + 1;
        if (bVar3) {
          return;
        }
      }
      param_4 = -lVar20;
      if (param_4 < param_5) {
        lVar21 = param_5;
        if (param_5 < 0) {
          lVar21 = param_5 + 1;
        }
        lVar21 = lVar21 >> 1;
        puVar9 = param_2 + lVar21;
        puVar4 = param_1;
        if ((long)param_2 - (long)param_1 != 0) {
          uVar10 = (long)param_2 - (long)param_1 >> 3;
          do {
            uVar13 = uVar10 >> 1;
            uVar14 = uVar10 + ~uVar13;
            uVar10 = uVar13;
            if (*(ushort *)((long)puVar9 + 4) <= *(ushort *)((long)puVar4 + uVar13 * 8 + 4)) {
              puVar4 = puVar4 + uVar13 + 1;
              uVar10 = uVar14;
            }
          } while (uVar10 != 0);
        }
        param_4 = (long)puVar4 - (long)param_1 >> 3;
      }
      else {
        if (lVar20 == -1) {
          uVar18 = *param_1;
          *param_1 = *param_2;
          *param_2 = uVar18;
          return;
        }
        if (param_4 < 0) {
          param_4 = param_4 + 1;
        }
        param_4 = param_4 >> 1;
        puVar4 = param_1 + param_4;
        if ((long)param_3 - (long)param_2 == 0) {
          puVar9 = param_2;
        }
        else {
          uVar10 = (long)param_3 - (long)param_2 >> 3;
          puVar8 = param_2;
          do {
            uVar14 = uVar10 >> 1;
            puVar9 = puVar8 + uVar14 + 1;
            uVar10 = uVar10 + ~uVar14;
            if (*(ushort *)((long)puVar8 + uVar14 * 8 + 4) <= *(ushort *)((long)puVar4 + 4)) {
              puVar9 = puVar8;
              uVar10 = uVar14;
            }
            puVar8 = puVar9;
          } while (uVar10 != 0);
        }
        lVar21 = (long)puVar9 - (long)param_2 >> 3;
      }
      if (puVar4 == param_2) {
        param_2 = puVar9;
      }
      else if (param_2 == puVar9) {
        param_2 = puVar4;
      }
      else if (puVar4 + 1 == param_2) {
        uVar18 = *puVar4;
        sVar2 = (long)puVar9 - (long)param_2;
        if (sVar2 != 0) {
          memmove(puVar4,param_2,sVar2);
        }
        puVar4[(long)sVar2 >> 3] = uVar18;
        param_2 = puVar4 + ((long)sVar2 >> 3);
      }
      else if (param_2 + 1 == puVar9) {
        uVar18 = puVar9[-1];
        sVar2 = (long)(puVar9 + -1) - (long)puVar4;
        if (sVar2 == 0) {
          *puVar4 = uVar18;
          param_2 = puVar9;
        }
        else {
          memmove((undefined8 *)((long)puVar9 - sVar2),puVar4,sVar2);
          *puVar4 = uVar18;
          param_2 = (undefined8 *)((long)puVar9 - sVar2);
        }
      }
      else {
        lVar5 = (long)param_2 - (long)puVar4 >> 3;
        lVar11 = (long)puVar9 - (long)param_2 >> 3;
        if (lVar5 == lVar11) {
          uVar14 = ((long)param_2 - (long)puVar4) - 8;
          uVar1 = ((uint)(uVar14 >> 3) & 0x1fffffff) + 1;
          uVar10 = (ulong)uVar1 & 3;
          if ((uVar1 & 3) == 0) {
            puVar7 = param_2;
            puVar8 = puVar4;
          }
          else {
            puVar6 = param_2;
            puVar12 = puVar4;
            do {
              uVar18 = *puVar12;
              uVar10 = uVar10 - 1;
              puVar8 = puVar12 + 1;
              *puVar12 = *puVar6;
              puVar7 = puVar6 + 1;
              *puVar6 = uVar18;
              puVar6 = puVar7;
              puVar12 = puVar8;
            } while (uVar10 != 0);
          }
          if (0x17 < uVar14) {
            do {
              uVar18 = *puVar8;
              *puVar8 = *puVar7;
              *puVar7 = uVar18;
              uVar18 = puVar8[1];
              puVar8[1] = puVar7[1];
              puVar7[1] = uVar18;
              uVar18 = puVar8[2];
              puVar8[2] = puVar7[2];
              puVar7[2] = uVar18;
              uVar18 = puVar8[3];
              puVar8[3] = puVar7[3];
              puVar8 = puVar8 + 4;
              puVar7[3] = uVar18;
              puVar7 = puVar7 + 4;
            } while (puVar8 != param_2);
          }
        }
        else {
          lVar17 = lVar5;
          lVar16 = lVar11;
          do {
            lVar15 = lVar16;
            lVar16 = 0;
            if (lVar15 != 0) {
              lVar16 = lVar17 / lVar15;
            }
            lVar16 = lVar17 - lVar16 * lVar15;
            lVar17 = lVar15;
          } while (lVar16 != 0);
          if (lVar15 != 0) {
            puVar8 = puVar4 + lVar15;
            lVar17 = lVar15 * 8 + -8;
            if (((uint)lVar17 >> 3 & 1) == 0) {
              puVar8 = puVar8 + -1;
              uVar18 = *puVar8;
              puVar7 = puVar8 + lVar5;
              puVar6 = puVar8;
              do {
                puVar12 = puVar7;
                *puVar6 = *puVar12;
                lVar16 = (long)puVar9 - (long)puVar12 >> 3;
                puVar7 = puVar12 + lVar5;
                if (lVar16 <= lVar5) {
                  puVar7 = puVar4 + (lVar5 - lVar16);
                }
                puVar6 = puVar12;
              } while (puVar7 != puVar8);
              *puVar12 = uVar18;
            }
            if (lVar17 != 0) {
              do {
                puVar12 = puVar8 + -1;
                uVar18 = *puVar12;
                puVar7 = puVar12 + lVar5;
                puVar6 = puVar12;
                do {
                  puVar19 = puVar7;
                  *puVar6 = *puVar19;
                  lVar17 = (long)puVar9 - (long)puVar19 >> 3;
                  puVar7 = puVar19 + lVar5;
                  if (lVar17 <= lVar5) {
                    puVar7 = puVar4 + (lVar5 - lVar17);
                  }
                  puVar6 = puVar19;
                } while (puVar7 != puVar12);
                *puVar19 = uVar18;
                puVar8 = puVar8 + -2;
                uVar18 = *puVar8;
                puVar7 = puVar8 + lVar5;
                puVar6 = puVar8;
                do {
                  puVar12 = puVar7;
                  *puVar6 = *puVar12;
                  lVar17 = (long)puVar9 - (long)puVar12 >> 3;
                  puVar7 = puVar12 + lVar5;
                  if (lVar17 <= lVar5) {
                    puVar7 = puVar4 + (lVar5 - lVar17);
                  }
                  puVar6 = puVar12;
                } while (puVar7 != puVar8);
                *puVar12 = uVar18;
              } while (puVar8 != puVar4);
            }
          }
          param_2 = puVar4 + lVar11;
        }
      }
      if (param_4 + lVar21 < (param_5 - (param_4 + lVar21)) - lVar20) {
        FUN_01099fe0(param_1,puVar4,param_2,param_4,lVar21,param_6,param_7);
        param_1 = param_2;
        param_2 = puVar9;
        param_5 = param_5 - lVar21;
        param_4 = -(param_4 + lVar20);
      }
      else {
        FUN_01099fe0(param_2,puVar9,param_3,-(param_4 + lVar20),param_5 - lVar21,param_6,param_7);
        param_3 = param_2;
        param_2 = puVar4;
        param_5 = lVar21;
      }
      if (param_5 == 0) {
        return;
      }
    }
    if (param_5 < param_4) {
      if ((long)param_3 - (long)param_2 == 0) {
        return;
      }
      uVar14 = ((long)param_3 - (long)param_2) - 8;
      uVar1 = ((uint)(uVar14 >> 3) & 0x1fffffff) + 1;
      uVar10 = (ulong)uVar1 & 3;
      if ((uVar1 & 3) == 0) {
        puVar9 = param_6;
        puVar4 = param_2;
      }
      else {
        puVar8 = param_6;
        puVar7 = param_2;
        do {
          puVar4 = puVar7 + 1;
          uVar10 = uVar10 - 1;
          puVar9 = puVar8 + 1;
          *puVar8 = *puVar7;
          puVar8 = puVar9;
          puVar7 = puVar4;
        } while (uVar10 != 0);
      }
      if (0x17 < uVar14) {
        do {
          *puVar9 = *puVar4;
          puVar9[1] = puVar4[1];
          puVar9[2] = puVar4[2];
          puVar8 = puVar4 + 3;
          puVar4 = puVar4 + 4;
          puVar9[3] = *puVar8;
          puVar9 = puVar9 + 4;
        } while (puVar4 != param_3);
      }
      while( true ) {
        if (puVar9 == param_6) {
          return;
        }
        if (param_2 == param_1) break;
        if (*(ushort *)((long)param_2 + -4) < *(ushort *)((long)puVar9 + -4)) {
          param_2 = param_2 + -1;
          uVar18 = *param_2;
        }
        else {
          puVar9 = puVar9 + -1;
          uVar18 = *puVar9;
        }
        param_3[-1] = uVar18;
        param_3 = param_3 + -1;
      }
      uVar10 = (long)puVar9 + (-8 - (long)param_6);
      uVar1 = ((uint)(uVar10 >> 3) & 0x1fffffff) + 1;
      if ((uVar1 & 3) != 0) {
        lVar20 = -((ulong)uVar1 & 3);
        lVar21 = 0;
        do {
          lVar5 = lVar21 + -8;
          bVar3 = lVar20 != -1;
          lVar20 = lVar20 + 1;
          *(undefined8 *)((long)param_3 + lVar21 + -8) = *(undefined8 *)((long)puVar9 + lVar21 + -8)
          ;
          lVar21 = lVar5;
        } while (bVar3);
        puVar9 = (undefined8 *)((long)puVar9 + lVar5);
        param_3 = (undefined8 *)((long)param_3 + lVar5);
      }
      if (uVar10 < 0x18) {
        return;
      }
      param_3 = param_3 + -2;
      do {
        param_3[1] = puVar9[-1];
        *param_3 = puVar9[-2];
        param_3[-1] = puVar9[-3];
        puVar9 = puVar9 + -4;
        param_3[-2] = *puVar9;
        param_3 = param_3 + -4;
      } while (param_6 != puVar9);
      return;
    }
    if (param_1 == param_2) {
      return;
    }
    uVar14 = (long)param_2 + (-8 - (long)param_1);
    uVar1 = ((uint)(uVar14 >> 3) & 0x1fffffff) + 1;
    uVar10 = (ulong)uVar1 & 3;
    if ((uVar1 & 3) == 0) {
      puVar9 = param_6;
      puVar4 = param_1;
    }
    else {
      puVar8 = param_6;
      puVar7 = param_1;
      do {
        puVar4 = puVar7 + 1;
        uVar10 = uVar10 - 1;
        puVar9 = puVar8 + 1;
        *puVar8 = *puVar7;
        puVar8 = puVar9;
        puVar7 = puVar4;
      } while (uVar10 != 0);
    }
    if (0x17 < uVar14) {
      do {
        *puVar9 = *puVar4;
        puVar9[1] = puVar4[1];
        puVar9[2] = puVar4[2];
        puVar8 = puVar4 + 3;
        puVar4 = puVar4 + 4;
        puVar9[3] = *puVar8;
        puVar9 = puVar9 + 4;
      } while (puVar4 != param_2);
    }
    while (puVar9 != param_6) {
      if (param_2 == param_3) {
        if ((long)puVar9 - (long)param_6 == 0) {
          return;
        }
        memmove(param_1,param_6,(long)puVar9 - (long)param_6);
        return;
      }
      if (*(ushort *)((long)param_6 + 4) < *(ushort *)((long)param_2 + 4)) {
        uVar18 = *param_2;
        puVar4 = param_6;
        param_2 = param_2 + 1;
      }
      else {
        puVar4 = param_6 + 1;
        uVar18 = *param_6;
      }
      *param_1 = uVar18;
      param_1 = param_1 + 1;
      param_6 = puVar4;
    }
  }
  return;
}


