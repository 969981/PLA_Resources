/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e04f70; name: FUN_02e04f70
 */


/* WARNING: Removing unreachable block (ram,0x02e05244) */
/* WARNING: Removing unreachable block (ram,0x02e05248) */
/* WARNING: Removing unreachable block (ram,0x02e05254) */
/* WARNING: Removing unreachable block (ram,0x02e05298) */

void FUN_02e04f70(float *param_1,undefined8 *param_2,ulong param_3,uint *param_4,int *param_5)

{
  float *pfVar1;
  uint *puVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  bool bVar11;
  float *pfVar12;
  uint uVar13;
  float *pfVar14;
  long lVar15;
  undefined8 *puVar16;
  uint uVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  undefined8 uVar22;
  ulong *puVar23;
  long lVar24;
  int iVar25;
  ulong uVar26;
  ulong uVar27;
  float fVar28;
  float fVar29;
  ulong uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  ulong local_160;
  float local_158 [2];
  undefined8 local_150 [30];
  
  uVar9 = *param_4;
  uVar13 = param_4[1];
  uVar21 = (ulong)uVar13;
  uVar27 = (ulong)uVar9;
  iVar10 = uVar13 * uVar9;
  lVar24 = (long)(int)uVar13;
  if (uVar13 == 1) {
    uVar18 = (long)iVar10 * 8 - 8;
    uVar19 = param_3 & 0xffffffff;
    uVar17 = ((uint)(uVar18 >> 3) & 0x1fffffff) + 1;
    pfVar12 = param_1;
    if ((uVar17 & 3) != 0) {
      lVar20 = -((ulong)uVar17 & 3);
      pfVar14 = param_1;
      do {
        uVar22 = *param_2;
        param_2 = param_2 + uVar19;
        bVar11 = lVar20 != -1;
        lVar20 = lVar20 + 1;
        pfVar12 = pfVar14 + 2;
        *(undefined8 *)pfVar14 = uVar22;
        pfVar14 = pfVar12;
      } while (bVar11);
    }
    if (0x17 < uVar18) {
      do {
        *(undefined8 *)pfVar12 = *param_2;
        param_2 = param_2 + uVar19;
        *(undefined8 *)(pfVar12 + 2) = *param_2;
        param_2 = param_2 + uVar19;
        *(undefined8 *)(pfVar12 + 4) = *param_2;
        *(undefined8 *)(pfVar12 + 6) = param_2[uVar19];
        pfVar12 = pfVar12 + 8;
        param_2 = param_2 + uVar19 + uVar19;
      } while (pfVar12 != param_1 + (long)iVar10 * 2);
    }
LAB_02e0515c:
    switch(uVar9) {
    case 2:
      if (uVar13 == 1) {
        fVar28 = param_1[3];
        fVar29 = *param_1;
        *param_1 = fVar29 + param_1[2];
        param_1[2] = fVar29 - param_1[2];
        param_1[3] = param_1[1] - fVar28;
        param_1[1] = param_1[1] + fVar28;
      }
      else {
        pfVar12 = (float *)(*(long *)(param_5 + 0x12) + 4);
        do {
          pfVar14 = param_1 + lVar24 * 2;
          fVar28 = pfVar12[-1] * *pfVar14 - *pfVar12 * pfVar14[1];
          fVar29 = pfVar14[1] * pfVar12[-1] + *pfVar14 * *pfVar12;
          *pfVar14 = *param_1 - fVar28;
          pfVar14[1] = param_1[1] - fVar29;
          param_1[1] = param_1[1] + fVar29;
          *param_1 = *param_1 + fVar28;
          param_1 = param_1 + 2;
          uVar9 = (int)uVar21 - 1;
          uVar21 = (ulong)uVar9;
          pfVar12 = pfVar12 + param_3 * 2;
        } while (uVar9 != 0);
      }
      break;
    case 3:
      pfVar12 = (float *)(*(long *)(param_5 + 0x12) + 4);
      fVar28 = *(float *)(*(long *)(param_5 + 0x12) + lVar24 * param_3 * 8 + 4);
      param_1 = param_1 + 1;
      pfVar14 = pfVar12;
      lVar20 = lVar24;
      do {
        pfVar3 = param_1 + lVar24 * 2;
        pfVar1 = param_1 + lVar24 * 4;
        fVar29 = *pfVar3 * pfVar12[-1] + pfVar3[-1] * *pfVar12;
        fVar31 = pfVar12[-1] * pfVar3[-1] - *pfVar12 * *pfVar3;
        fVar33 = pfVar14[-1] * pfVar1[-1] - *pfVar14 * *pfVar1;
        fVar32 = *pfVar1 * pfVar14[-1] + pfVar1[-1] * *pfVar14;
        fVar34 = fVar33 + fVar31;
        fVar35 = fVar32 + fVar29;
        fVar36 = *param_1;
        pfVar3[-1] = param_1[-1] - fVar34 * 0.5;
        *pfVar3 = fVar36 - fVar35 * 0.5;
        param_1[-1] = param_1[-1] + fVar34;
        *param_1 = *param_1 + fVar35;
        fVar29 = (fVar29 - fVar32) * fVar28;
        param_1 = param_1 + 2;
        pfVar1[-1] = pfVar3[-1] + fVar29;
        fVar31 = (fVar31 - fVar33) * fVar28;
        *pfVar1 = *pfVar3 - fVar31;
        lVar20 = lVar20 + -1;
        pfVar14 = pfVar14 + param_3 * 4;
        pfVar12 = pfVar12 + param_3 * 2;
        pfVar3[-1] = pfVar3[-1] - fVar29;
        *pfVar3 = *pfVar3 + fVar31;
      } while (lVar20 != 0);
      break;
    case 4:
      if ((param_3 == 0x100) && (uVar13 == 1)) {
        fVar28 = *param_1;
        fVar29 = param_1[1];
        fVar31 = param_1[2];
        fVar33 = param_1[3];
        fVar36 = param_1[4];
        fVar34 = param_1[5];
        fVar35 = param_1[6];
        fVar37 = param_1[7];
        fVar38 = *(float *)(*(long *)(param_5 + 0x12) + 0x804);
        fVar32 = *(float *)(*(long *)(param_5 + 0x12) + 0x1804);
        param_1[1] = fVar33 + fVar29 + fVar34 + fVar37;
        *param_1 = fVar31 + fVar28 + fVar36 + fVar35;
        param_1[4] = ((fVar28 - fVar31) + fVar36) - fVar35;
        param_1[2] = (fVar28 - fVar36) - (fVar33 * fVar38 + fVar32 * fVar37);
        param_1[5] = ((fVar29 - fVar33) + fVar34) - fVar37;
        param_1[6] = (fVar28 - fVar36) - (fVar33 * fVar32 + fVar38 * fVar37);
        param_1[3] = ((fVar29 + fVar38 * fVar31) - fVar34) + fVar32 * fVar35;
        param_1[7] = ((fVar29 + fVar32 * fVar31) - fVar34) + fVar38 * fVar35;
        return;
      }
      goto LAB_02e050dc;
    case 5:
      if (0 < (int)uVar13) {
        lVar20 = *(long *)(param_5 + 0x12);
        pfVar12 = (float *)(lVar20 + 4);
        pfVar14 = (float *)(lVar20 + lVar24 * param_3 * 8);
        pfVar3 = (float *)(lVar20 + lVar24 * param_3 * 0x10);
        fVar28 = *pfVar14;
        fVar29 = pfVar14[1];
        uVar18 = 0;
        fVar31 = *pfVar3;
        fVar33 = pfVar3[1];
        uVar27 = 0;
        param_1 = param_1 + 1;
        pfVar14 = pfVar12;
        do {
          pfVar1 = param_1 + lVar24 * 2;
          pfVar4 = param_1 + lVar24 * 4;
          pfVar3 = pfVar14 + -1;
          fVar36 = *pfVar14;
          pfVar14 = pfVar14 + param_3 * 4;
          pfVar5 = (float *)(lVar20 + (uVar27 & 0xfffffffc) * param_3 * 8);
          pfVar6 = (float *)(lVar20 + (uVar18 & 0xffffffff) * param_3 * 8);
          pfVar7 = param_1 + lVar24 * 8;
          uVar21 = uVar21 - 1;
          fVar34 = *pfVar6;
          fVar37 = pfVar6[1];
          pfVar6 = (float *)((long)param_1 +
                            (-(ulong)(uVar13 * 3 >> 0x1f) & 0xfffffff800000000 |
                            (ulong)(uVar13 * 3) << 3));
          fVar39 = *pfVar1 * pfVar12[-1] + pfVar1[-1] * *pfVar12;
          fVar38 = pfVar12[-1] * pfVar1[-1] - *pfVar12 * *pfVar1;
          fVar41 = *pfVar5;
          fVar44 = pfVar5[1];
          fVar40 = *pfVar3 * pfVar4[-1] - fVar36 * *pfVar4;
          fVar32 = *pfVar4 * *pfVar3 + pfVar4[-1] * fVar36;
          fVar35 = fVar34 * pfVar6[-1] - fVar37 * *pfVar6;
          fVar34 = *pfVar6 * fVar34 + pfVar6[-1] * fVar37;
          fVar36 = fVar41 * pfVar7[-1] - fVar44 * *pfVar7;
          fVar37 = *pfVar7 * fVar41 + pfVar7[-1] * fVar44;
          fVar46 = fVar35 - fVar40;
          fVar35 = fVar35 + fVar40;
          fVar43 = fVar36 + fVar38;
          fVar45 = fVar37 + fVar39;
          fVar38 = fVar38 - fVar36;
          fVar41 = fVar32 - fVar34;
          fVar39 = fVar39 - fVar37;
          fVar44 = param_1[-1];
          fVar36 = *param_1;
          fVar34 = fVar34 + fVar32;
          fVar47 = fVar44 + fVar31 * fVar35 + fVar28 * fVar43;
          fVar48 = fVar36 + fVar31 * fVar34 + fVar28 * fVar45;
          fVar32 = fVar36 + fVar28 * fVar34 + fVar31 * fVar45;
          fVar40 = fVar41 * fVar33 + fVar29 * fVar39;
          fVar42 = fVar46 * fVar33 - fVar29 * fVar38;
          fVar37 = fVar44 + fVar28 * fVar35 + fVar31 * fVar43;
          param_1[-1] = fVar35 + fVar44 + fVar43;
          *param_1 = fVar34 + fVar36 + fVar45;
          param_1 = param_1 + 2;
          fVar36 = fVar41 * fVar29 - fVar39 * fVar33;
          pfVar12 = pfVar12 + param_3 * 2;
          pfVar1[-1] = fVar47 - fVar40;
          *pfVar1 = fVar48 - fVar42;
          fVar34 = fVar46 * fVar29 + fVar33 * fVar38;
          uVar27 = uVar27 + 4;
          uVar18 = uVar18 + 3;
          pfVar7[-1] = fVar47 + fVar40;
          *pfVar7 = fVar48 + fVar42;
          pfVar4[-1] = fVar37 + fVar36;
          *pfVar4 = fVar32 + fVar34;
          pfVar6[-1] = fVar37 - fVar36;
          *pfVar6 = fVar32 - fVar34;
        } while (uVar21 != 0);
      }
      break;
    default:
      if ((0 < (int)uVar13) && (0 < (int)uVar9)) {
        if (uVar9 == 1) {
          uVar27 = 0;
          do {
            pfVar12 = param_1 + uVar27 * 2;
            lVar20 = 1;
            puVar23 = &local_160;
            do {
              uVar18 = *(ulong *)pfVar12;
              lVar20 = lVar20 + -1;
              pfVar12 = pfVar12 + lVar24 * 2;
              *puVar23 = uVar18;
              puVar23 = puVar23 + 1;
            } while (lVar20 != 0);
            *(ulong *)(param_1 + uVar27 * 2) = local_160;
            uVar27 = uVar27 + 1;
          } while (uVar27 != uVar21);
        }
        else {
          iVar10 = *param_5;
          lVar20 = *(long *)(param_5 + 0x12);
          uVar18 = 0;
          do {
            if (uVar27 - 1 < 3) {
              lVar15 = 0;
              uVar26 = uVar18;
            }
            else {
              lVar15 = 0;
              uVar19 = uVar18;
              puVar16 = local_150;
              do {
                uVar26 = uVar19 + lVar24 * 4;
                puVar16[-2] = *(undefined8 *)(param_1 + uVar19 * 2);
                puVar16[-1] = *(undefined8 *)(param_1 + lVar24 * 2 + uVar19 * 2);
                *puVar16 = *(undefined8 *)(param_1 + lVar24 * 4 + uVar19 * 2);
                lVar15 = lVar15 + 4;
                puVar16[1] = *(undefined8 *)(param_1 + lVar24 * 6 + uVar19 * 2);
                puVar16 = puVar16 + 4;
                uVar19 = uVar26;
              } while (uVar27 - (uVar27 & 3) != lVar15);
            }
            if ((uVar9 & 3) != 0) {
              pfVar12 = param_1 + uVar26 * 2;
              pfVar14 = local_158 + lVar15 * 2 + -2;
              uVar19 = uVar27 & 3;
              do {
                uVar22 = *(undefined8 *)pfVar12;
                uVar19 = uVar19 - 1;
                pfVar12 = pfVar12 + lVar24 * 2;
                *(undefined8 *)pfVar14 = uVar22;
                pfVar14 = pfVar14 + 2;
              } while (uVar19 != 0);
            }
            uVar13 = 0;
            uVar19 = uVar18;
            do {
              pfVar14 = param_1 + uVar19 * 2;
              *(ulong *)pfVar14 = local_160;
              fVar28 = pfVar14[1];
              uVar26 = local_160 & 0xffffffff;
              iVar25 = 0;
              pfVar12 = local_158 + 1;
              lVar15 = uVar27 - 1;
              do {
                iVar25 = iVar25 + (int)uVar19 * (int)param_3;
                iVar8 = 0;
                if (iVar10 <= iVar25) {
                  iVar8 = iVar10;
                }
                pfVar3 = pfVar12 + -1;
                fVar31 = *pfVar12;
                lVar15 = lVar15 + -1;
                pfVar12 = pfVar12 + 2;
                iVar25 = iVar25 - iVar8;
                pfVar1 = (float *)(lVar20 + (long)iVar25 * 8);
                fVar33 = *pfVar1;
                fVar36 = pfVar1[1];
                fVar29 = ((float)uVar26 + *pfVar3 * fVar33) - fVar31 * fVar36;
                uVar26 = (ulong)(uint)fVar29;
                fVar28 = fVar28 + fVar33 * fVar31 + *pfVar3 * fVar36;
                *pfVar14 = fVar29;
                pfVar14[1] = fVar28;
              } while (lVar15 != 0);
              uVar13 = uVar13 + 1;
              uVar19 = uVar19 + lVar24;
            } while (uVar13 != uVar9);
            uVar18 = uVar18 + 1;
          } while (uVar18 != uVar21);
        }
      }
    }
  }
  else {
    puVar2 = param_4 + 2;
    if (*param_5 != 0x400) {
      if (param_4[3] == 1) {
        uVar17 = *puVar2;
        goto LAB_02e050bc;
      }
LAB_02e05110:
      lVar20 = 0;
      do {
        FUN_02e04f70((long)param_1 + lVar20,param_2,(long)(int)uVar9 * param_3,puVar2,param_5);
        lVar20 = lVar20 + lVar24 * 8;
        param_2 = param_2 + param_3;
      } while ((long)iVar10 * 8 != lVar20);
      goto LAB_02e0515c;
    }
    if (param_4[3] != 1) goto LAB_02e05110;
    uVar17 = *puVar2;
    if ((param_3 == 0x40) && (uVar17 == 4)) {
      FUN_02e05bf0(param_1,param_2,param_5);
      return;
    }
LAB_02e050bc:
    if ((uVar9 != 4) || (uVar17 != 2)) goto LAB_02e05110;
    FUN_02e05e70(param_1,param_2,param_3);
LAB_02e050dc:
    if ((uVar13 & 1) == 0) {
      FUN_02e05f20(param_1,param_3,param_5,lVar24);
      return;
    }
    if (0 < (int)uVar13) {
      iVar10 = *param_5;
      lVar20 = *(long *)(param_5 + 0x12);
      uVar18 = 0;
      do {
        if (uVar27 - 1 < 3) {
          lVar15 = 0;
          uVar26 = uVar18;
        }
        else {
          lVar15 = 0;
          uVar19 = uVar18;
          puVar16 = local_150;
          do {
            uVar26 = uVar19 + lVar24 * 4;
            puVar16[-2] = *(undefined8 *)(param_1 + uVar19 * 2);
            puVar16[-1] = *(undefined8 *)(param_1 + lVar24 * 2 + uVar19 * 2);
            *puVar16 = *(undefined8 *)(param_1 + lVar24 * 4 + uVar19 * 2);
            lVar15 = lVar15 + 4;
            puVar16[1] = *(undefined8 *)(param_1 + lVar24 * 6 + uVar19 * 2);
            puVar16 = puVar16 + 4;
            uVar19 = uVar26;
          } while (uVar27 - (uVar27 & 3) != lVar15);
        }
        if ((uVar9 & 3) != 0) {
          pfVar12 = param_1 + uVar26 * 2;
          pfVar14 = local_158 + lVar15 * 2 + -2;
          uVar19 = uVar27 & 3;
          do {
            uVar22 = *(undefined8 *)pfVar12;
            uVar19 = uVar19 - 1;
            pfVar12 = pfVar12 + lVar24 * 2;
            *(undefined8 *)pfVar14 = uVar22;
            pfVar14 = pfVar14 + 2;
          } while (uVar19 != 0);
        }
        uVar13 = 0;
        uVar19 = uVar18;
        do {
          pfVar14 = param_1 + uVar19 * 2;
          *(ulong *)pfVar14 = local_160;
          fVar28 = pfVar14[1];
          uVar30 = local_160 & 0xffffffff;
          iVar25 = 0;
          pfVar12 = local_158 + 1;
          uVar26 = uVar27 - 1;
          do {
            iVar25 = iVar25 + (int)uVar19 * (int)param_3;
            iVar8 = 0;
            if (iVar10 <= iVar25) {
              iVar8 = iVar10;
            }
            pfVar3 = pfVar12 + -1;
            fVar31 = *pfVar12;
            uVar26 = uVar26 - 1;
            pfVar12 = pfVar12 + 2;
            iVar25 = iVar25 - iVar8;
            pfVar1 = (float *)(lVar20 + (long)iVar25 * 8);
            fVar33 = *pfVar1;
            fVar36 = pfVar1[1];
            fVar29 = ((float)uVar30 + *pfVar3 * fVar33) - fVar31 * fVar36;
            uVar30 = (ulong)(uint)fVar29;
            fVar28 = fVar28 + fVar33 * fVar31 + *pfVar3 * fVar36;
            *pfVar14 = fVar29;
            pfVar14[1] = fVar28;
          } while (uVar26 != 0);
          uVar13 = uVar13 + 1;
          uVar19 = uVar19 + lVar24;
        } while (uVar13 != uVar9);
        uVar18 = uVar18 + 1;
      } while (uVar18 != uVar21);
    }
  }
  return;
}


