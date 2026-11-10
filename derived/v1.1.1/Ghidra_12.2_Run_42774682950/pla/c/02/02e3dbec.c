/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e3dbec; name: FUN_02e3dbec
 */


void FUN_02e3dbec(long *param_1,long *param_2,float *param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  uint uVar11;
  long lVar12;
  undefined8 *puVar13;
  uint uVar14;
  undefined8 *puVar15;
  uint uVar16;
  undefined8 *in_x17;
  undefined8 *extraout_x17;
  undefined8 *extraout_x17_00;
  undefined8 *extraout_x17_01;
  undefined8 *extraout_x17_02;
  ulong __n;
  long lVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar32;
  float fVar33;
  undefined1 auVar31 [16];
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
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  
  if (*(int *)((long)param_2 + 0xc) == 0x11) {
    uVar8 = *(uint *)(param_1 + 3);
    uVar14 = *(uint *)(param_1 + 8);
    if (uVar8 == 0xffffffff) {
LAB_02e3dff0:
      *(uint *)(param_1 + 3) = uVar14;
      uVar8 = uVar14;
LAB_02e3dffc:
      *(uint *)((long)param_1 + 0x1c) = uVar14;
    }
    else {
      if (uVar8 == 0) {
        if (*(short *)((long)param_2 + 0x12) == 0) {
          uVar8 = 0;
          cVar3 = *(char *)(param_3 + 3);
          goto joined_r0x02e3dfe8;
        }
        goto LAB_02e3dff0;
      }
      if (*(short *)((long)param_2 + 0x12) != 0) goto LAB_02e3dff0;
      if (*(uint *)((long)param_1 + 0x1c) < uVar14) {
        uVar8 = (uVar8 + uVar14) - *(uint *)((long)param_1 + 0x1c);
        *(uint *)(param_1 + 3) = uVar8;
        goto LAB_02e3dffc;
      }
    }
    uVar11 = (uint)*(ushort *)(param_2 + 2) - (uint)*(ushort *)((long)param_2 + 0x12);
    uVar14 = uVar8;
    if (uVar11 <= uVar8) {
      uVar14 = uVar11;
    }
    iVar9 = uVar8 - uVar14;
    *(int *)(param_1 + 3) = iVar9;
    uVar10 = (ulong)*(ushort *)((long)param_2 + 0x12);
    iVar7 = (uint)*(ushort *)(param_2 + 2) - (uint)*(ushort *)((long)param_2 + 0x12);
    if (iVar7 != 0) {
      bVar4 = *(byte *)(param_2 + 1);
      if (bVar4 == 0) {
        uVar10 = (ulong)(uint)*(ushort *)(param_2 + 2);
      }
      else {
        __n = (ulong)(uint)(iVar7 * 4);
        memset((void *)(*param_2 + uVar10 * 4),0,__n);
        uVar10 = (ulong)*(ushort *)(param_2 + 2);
        in_x17 = extraout_x17;
        if (bVar4 != 1) {
          memset((void *)(*param_2 + uVar10 * 4 + (ulong)*(ushort *)((long)param_2 + 0x12) * 4),0,
                 __n);
          uVar10 = (ulong)*(ushort *)(param_2 + 2);
          in_x17 = extraout_x17_00;
          if (bVar4 != 2) {
            memset((void *)(*param_2 + uVar10 * 8 + (ulong)*(ushort *)((long)param_2 + 0x12) * 4),0,
                   __n);
            uVar10 = (ulong)*(ushort *)(param_2 + 2);
            in_x17 = extraout_x17_01;
            if (bVar4 != 3) {
              lVar12 = (ulong)bVar4 - 3;
              lVar17 = 0xc;
              do {
                memset((void *)(*param_2 + lVar17 * uVar10 +
                               (ulong)*(ushort *)((long)param_2 + 0x12) * 4),0,__n);
                uVar10 = (ulong)*(ushort *)(param_2 + 2);
                lVar17 = lVar17 + 4;
                lVar12 = lVar12 + -1;
                in_x17 = extraout_x17_02;
              } while (lVar12 != 0);
            }
          }
        }
      }
      *(short *)((long)param_2 + 0x12) = (short)uVar10;
      iVar9 = (int)param_1[3];
    }
    uVar8 = (uint)uVar10;
    if (iVar9 != 0) {
      *(undefined4 *)((long)param_2 + 0xc) = 0x2d;
      cVar3 = *(char *)(param_3 + 3);
      goto joined_r0x02e3dfe8;
    }
  }
  else {
    *(undefined4 *)(param_1 + 3) = 0xffffffff;
    uVar8 = (uint)*(ushort *)((long)param_2 + 0x12);
  }
  cVar3 = *(char *)(param_3 + 3);
joined_r0x02e3dfe8:
  if (cVar3 == '\0') {
    *param_3 = 0.0;
    iVar9 = (int)param_1[7];
  }
  else {
    iVar9 = (int)param_1[7];
  }
  if (iVar9 == 0) {
    uVar14 = 0;
  }
  else if (uVar8 == 0) {
    uVar14 = *(uint *)((long)param_1 + 0xc);
  }
  else {
    fVar35 = 1.0 / (float)uVar8;
    auVar31 = NEON_fmov(0x3f800000,4);
    uVar10 = 0;
    do {
      uVar11 = 0;
      fVar52 = *(float *)((long)param_1 + 0x24);
      fVar39 = *(float *)(param_1 + 5);
      fVar37 = (param_3[2] - fVar39) * fVar35;
      fVar40 = fVar37 + fVar39;
      fVar42 = fVar40 + fVar37;
      fVar36 = fVar37 * 4.0;
      fVar37 = fVar42 + fVar37;
      fVar43 = *(float *)(param_1 + 4);
      puVar13 = (undefined8 *)(*param_2 + uVar10 * *(ushort *)(param_2 + 2) * 4);
      uVar2 = *(uint *)(param_1 + 1);
      uVar14 = *(uint *)((long)param_1 + 0xc);
      fVar41 = (param_3[1] - fVar52) * fVar35;
      fVar38 = (*param_3 - fVar43) * fVar35;
      fVar57 = fVar38 + fVar43;
      fVar58 = fVar57 + fVar38;
      fVar44 = fVar38 * 4.0;
      fVar38 = fVar58 + fVar38;
      fVar45 = fVar41 + fVar52;
      fVar46 = fVar45 + fVar41;
      fVar47 = fVar46 + fVar41;
      fVar41 = fVar41 * 4.0;
      fVar30 = auVar31._0_4_;
      fVar59 = fVar30 - fVar52;
      fVar32 = auVar31._4_4_;
      fVar61 = fVar32 - fVar45;
      fVar33 = auVar31._8_4_;
      fVar63 = fVar33 - fVar46;
      fVar34 = auVar31._12_4_;
      fVar65 = fVar34 - fVar47;
      fVar53 = fVar52;
      fVar54 = fVar45;
      fVar55 = fVar46;
      fVar56 = fVar47;
      fVar48 = fVar43;
      fVar49 = fVar57;
      fVar50 = fVar58;
      fVar51 = fVar38;
      fVar20 = fVar39;
      fVar23 = fVar40;
      fVar26 = fVar42;
      fVar29 = fVar37;
      do {
        uVar6 = uVar2 - uVar14;
        if (uVar8 - uVar11 <= uVar6) {
          uVar6 = uVar8 - uVar11;
        }
        uVar5 = uVar6 >> 2;
        if (uVar5 == 0) {
LAB_02e3df84:
          in_x17 = puVar13;
          fVar18 = fVar52;
          fVar19 = fVar45;
          fVar21 = fVar46;
          fVar22 = fVar47;
          fVar24 = fVar43;
          fVar25 = fVar57;
          fVar27 = fVar58;
          fVar28 = fVar38;
        }
        else {
          puVar1 = (undefined8 *)(*(long *)(*param_1 + uVar10 * 8) + (ulong)uVar14 * 4);
          if ((uVar6 >> 2 & 1) == 0) {
            puVar15 = puVar1;
            uVar16 = uVar5;
          }
          else {
            in_x17 = puVar13 + 2;
            fVar67 = (float)*puVar13;
            fVar60 = fVar67 * fVar59;
            fVar68 = (float)((ulong)*puVar13 >> 0x20);
            fVar62 = fVar68 * fVar61;
            fVar69 = (float)puVar13[1];
            fVar64 = fVar69 * fVar63;
            fVar70 = (float)((ulong)puVar13[1] >> 0x20);
            fVar66 = fVar70 * fVar65;
            puVar15 = puVar1 + 2;
            fVar19 = (float)*puVar1;
            fVar18 = fVar52 * fVar19;
            fVar22 = (float)((ulong)*puVar1 >> 0x20);
            fVar21 = fVar45 * fVar22;
            fVar25 = (float)puVar1[1];
            fVar24 = fVar46 * fVar25;
            fVar28 = (float)((ulong)puVar1[1] >> 0x20);
            fVar27 = fVar47 * fVar28;
            fVar19 = fVar43 * fVar19;
            fVar22 = fVar57 * fVar22;
            fVar25 = fVar58 * fVar25;
            fVar28 = fVar38 * fVar28;
            fVar52 = fVar53 + fVar41;
            fVar45 = fVar54 + fVar41;
            fVar46 = fVar55 + fVar41;
            fVar47 = fVar56 + fVar41;
            fVar39 = fVar39 + fVar36;
            fVar40 = fVar40 + fVar36;
            fVar42 = fVar42 + fVar36;
            fVar37 = fVar37 + fVar36;
            fVar43 = fVar48 + fVar44;
            fVar57 = fVar49 + fVar44;
            fVar58 = fVar50 + fVar44;
            fVar38 = fVar51 + fVar44;
            uVar16 = uVar5 - 1;
            fVar59 = fVar30 - fVar52;
            fVar61 = fVar32 - fVar45;
            fVar63 = fVar33 - fVar46;
            fVar65 = fVar34 - fVar47;
            puVar13[1] = CONCAT44((fVar66 + fVar27) * fVar29,(fVar64 + fVar24) * fVar26);
            *puVar13 = CONCAT44((fVar62 + fVar21) * fVar23,(fVar60 + fVar18) * fVar20);
            puVar1[1] = CONCAT44(fVar70 + fVar28,fVar69 + fVar25);
            *puVar1 = CONCAT44(fVar68 + fVar22,fVar67 + fVar19);
            puVar13 = in_x17;
            fVar53 = fVar52;
            fVar54 = fVar45;
            fVar55 = fVar46;
            fVar56 = fVar47;
            fVar48 = fVar43;
            fVar49 = fVar57;
            fVar50 = fVar58;
            fVar51 = fVar38;
            fVar20 = fVar39;
            fVar23 = fVar40;
            fVar26 = fVar42;
            fVar29 = fVar37;
          }
          fVar18 = fVar53;
          fVar19 = fVar54;
          fVar21 = fVar55;
          fVar22 = fVar56;
          fVar24 = fVar48;
          fVar25 = fVar49;
          fVar27 = fVar50;
          fVar28 = fVar51;
          fVar60 = fVar20;
          fVar62 = fVar23;
          fVar20 = fVar39;
          fVar23 = fVar40;
          fVar64 = fVar26;
          fVar66 = fVar29;
          fVar26 = fVar42;
          fVar29 = fVar37;
          if (uVar5 != 1) {
            do {
              fVar18 = (float)*puVar13;
              fVar19 = (float)((ulong)*puVar13 >> 0x20);
              fVar21 = (float)puVar13[1];
              fVar22 = (float)((ulong)puVar13[1] >> 0x20);
              fVar24 = (float)*puVar15;
              fVar25 = (float)((ulong)*puVar15 >> 0x20);
              fVar27 = (float)puVar15[1];
              fVar28 = (float)((ulong)puVar15[1] >> 0x20);
              fVar20 = fVar43 * fVar24;
              fVar23 = fVar57 * fVar25;
              fVar26 = fVar58 * fVar27;
              fVar29 = fVar38 * fVar28;
              fVar53 = fVar53 + fVar41;
              fVar54 = fVar54 + fVar41;
              fVar55 = fVar55 + fVar41;
              fVar56 = fVar56 + fVar41;
              uVar16 = uVar16 - 2;
              fVar43 = fVar48 + fVar44 + fVar44;
              fVar57 = fVar49 + fVar44 + fVar44;
              fVar58 = fVar50 + fVar44 + fVar44;
              fVar38 = fVar51 + fVar44 + fVar44;
              puVar13[1] = CONCAT44((fVar22 * fVar65 + fVar47 * fVar28) * fVar66,
                                    (fVar21 * fVar63 + fVar46 * fVar27) * fVar64);
              *puVar13 = CONCAT44((fVar19 * fVar61 + fVar45 * fVar25) * fVar62,
                                  (fVar18 * fVar59 + fVar52 * fVar24) * fVar60);
              puVar15[1] = CONCAT44(fVar22 + fVar29,fVar21 + fVar26);
              *puVar15 = CONCAT44(fVar19 + fVar23,fVar18 + fVar20);
              fVar20 = fVar39 + fVar36;
              fVar23 = fVar40 + fVar36;
              fVar26 = fVar42 + fVar36;
              fVar29 = fVar37 + fVar36;
              fVar24 = (float)puVar13[2];
              fVar25 = (float)((ulong)puVar13[2] >> 0x20);
              fVar27 = (float)puVar13[3];
              fVar28 = (float)((ulong)puVar13[3] >> 0x20);
              fVar18 = (float)puVar15[2];
              fVar19 = (float)((ulong)puVar15[2] >> 0x20);
              fVar21 = (float)puVar15[3];
              fVar22 = (float)((ulong)puVar15[3] >> 0x20);
              fVar52 = fVar53 + fVar41;
              fVar45 = fVar54 + fVar41;
              fVar46 = fVar55 + fVar41;
              fVar47 = fVar56 + fVar41;
              fVar39 = fVar20 + fVar36;
              fVar40 = fVar23 + fVar36;
              fVar42 = fVar26 + fVar36;
              fVar37 = fVar29 + fVar36;
              fVar59 = fVar30 - fVar52;
              fVar61 = fVar32 - fVar45;
              fVar63 = fVar33 - fVar46;
              fVar65 = fVar34 - fVar47;
              puVar13[3] = CONCAT44(((fVar28 - fVar56 * fVar28) + fVar56 * fVar22) * fVar29,
                                    ((fVar27 - fVar55 * fVar27) + fVar55 * fVar21) * fVar26);
              puVar13[2] = CONCAT44(((fVar25 - fVar54 * fVar25) + fVar54 * fVar19) * fVar23,
                                    ((fVar24 - fVar53 * fVar24) + fVar53 * fVar18) * fVar20);
              puVar15[3] = CONCAT44(fVar28 + (fVar51 + fVar44) * fVar22,
                                    fVar27 + (fVar50 + fVar44) * fVar21);
              puVar15[2] = CONCAT44(fVar25 + (fVar49 + fVar44) * fVar19,
                                    fVar24 + (fVar48 + fVar44) * fVar18);
              puVar13 = puVar13 + 4;
              puVar15 = puVar15 + 4;
              fVar53 = fVar52;
              fVar54 = fVar45;
              fVar55 = fVar46;
              fVar56 = fVar47;
              fVar48 = fVar43;
              fVar49 = fVar57;
              fVar50 = fVar58;
              fVar51 = fVar38;
              fVar60 = fVar39;
              fVar62 = fVar40;
              fVar64 = fVar42;
              fVar66 = fVar37;
            } while (uVar16 != 0);
            fVar20 = fVar39;
            fVar23 = fVar40;
            fVar26 = fVar42;
            fVar29 = fVar37;
            goto LAB_02e3df84;
          }
        }
        fVar38 = fVar28;
        fVar58 = fVar27;
        fVar57 = fVar25;
        fVar43 = fVar24;
        fVar47 = fVar22;
        fVar46 = fVar21;
        fVar45 = fVar19;
        fVar52 = fVar18;
        puVar13 = in_x17;
        uVar5 = uVar6 + uVar14;
        uVar11 = uVar6 + uVar11;
        uVar14 = 0;
        if (uVar5 != uVar2) {
          uVar14 = uVar5;
        }
        in_x17 = puVar13;
      } while (uVar11 < uVar8);
      uVar10 = uVar10 + 1;
    } while (uVar10 < *(uint *)(param_1 + 7));
  }
  *(uint *)((long)param_1 + 0xc) = uVar14;
  lVar17 = *(long *)param_3;
  lVar12 = *(long *)(param_3 + 4);
  param_1[5] = *(long *)(param_3 + 2);
  param_1[6] = lVar12;
  param_1[4] = lVar17;
  return;
}


