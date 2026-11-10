/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e25530; name: FUN_02e25530
 */


void FUN_02e25530(long *param_1,long param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  long lVar12;
  uint uVar13;
  uint uVar14;
  undefined8 *puVar15;
  long lVar16;
  uint uVar17;
  undefined8 *puVar18;
  float *pfVar19;
  float *pfVar20;
  float *pfVar21;
  float *pfVar22;
  uint uVar23;
  ulong uVar24;
  ulong __n;
  uint uVar25;
  long lVar26;
  uint uVar27;
  uint uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  undefined8 uVar48;
  undefined8 uVar49;
  undefined8 uVar50;
  undefined8 uVar51;
  undefined8 uVar52;
  undefined8 uVar53;
  undefined8 uVar54;
  undefined8 uVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  uint local_7c;
  
  if (*(int *)((long)param_1 + 0xc) != 0x11) {
    *(undefined4 *)(param_2 + 0x50) = 0xffffffff;
    uVar23 = (uint)*(ushort *)((long)param_1 + 0x12);
    goto joined_r0x02e259bc;
  }
  uVar23 = *(uint *)(param_2 + 0x50);
  uVar9 = *(uint *)(param_2 + 0xb4);
  if (uVar23 == 0xffffffff) {
LAB_02e259cc:
    *(uint *)(param_2 + 0x50) = uVar9;
    uVar23 = uVar9;
LAB_02e259d8:
    *(uint *)(param_2 + 0x54) = uVar9;
  }
  else {
    if (uVar23 == 0) {
      if (*(short *)((long)param_1 + 0x12) == 0) {
        return;
      }
      goto LAB_02e259cc;
    }
    if (*(short *)((long)param_1 + 0x12) != 0) goto LAB_02e259cc;
    if (*(uint *)(param_2 + 0x54) < uVar9) {
      uVar23 = (uVar23 + uVar9) - *(uint *)(param_2 + 0x54);
      *(uint *)(param_2 + 0x50) = uVar23;
      goto LAB_02e259d8;
    }
  }
  uVar1 = (uint)*(ushort *)(param_1 + 2) - (uint)*(ushort *)((long)param_1 + 0x12);
  uVar9 = uVar23;
  if (uVar1 <= uVar23) {
    uVar9 = uVar1;
  }
  iVar10 = uVar23 - uVar9;
  *(int *)(param_2 + 0x50) = iVar10;
  uVar24 = (ulong)*(ushort *)((long)param_1 + 0x12);
  iVar7 = (uint)*(ushort *)(param_1 + 2) - (uint)*(ushort *)((long)param_1 + 0x12);
  if (iVar7 != 0) {
    bVar4 = *(byte *)(param_1 + 1);
    if (bVar4 == 0) {
      uVar24 = (ulong)(uint)*(ushort *)(param_1 + 2);
    }
    else {
      __n = (ulong)(uint)(iVar7 * 4);
      memset((void *)(*param_1 + uVar24 * 4),0,__n);
      uVar24 = (ulong)*(ushort *)(param_1 + 2);
      if (bVar4 != 1) {
        memset((void *)(*param_1 + uVar24 * 4 + (ulong)*(ushort *)((long)param_1 + 0x12) * 4),0,__n)
        ;
        uVar24 = (ulong)*(ushort *)(param_1 + 2);
        if (bVar4 != 2) {
          memset((void *)(*param_1 + uVar24 * 8 + (ulong)*(ushort *)((long)param_1 + 0x12) * 4),0,
                 __n);
          uVar24 = (ulong)*(ushort *)(param_1 + 2);
          if (bVar4 != 3) {
            lVar12 = (ulong)bVar4 - 3;
            lVar26 = 0xc;
            do {
              memset((void *)(*param_1 + lVar26 * uVar24 +
                             (ulong)*(ushort *)((long)param_1 + 0x12) * 4),0,__n);
              uVar24 = (ulong)*(ushort *)(param_1 + 2);
              lVar26 = lVar26 + 4;
              lVar12 = lVar12 + -1;
            } while (lVar12 != 0);
          }
        }
      }
    }
    *(short *)((long)param_1 + 0x12) = (short)uVar24;
    iVar10 = *(int *)(param_2 + 0x50);
  }
  uVar23 = (uint)uVar24;
  if (iVar10 != 0) {
    *(undefined4 *)((long)param_1 + 0xc) = 0x2d;
  }
joined_r0x02e259bc:
  if (0x1f < uVar23) {
    uVar1 = *(uint *)(param_1 + 1);
    uVar9 = uVar1 & 0xff;
    if (uVar9 != 0) {
      uVar2 = *(uint *)(param_2 + 0xa8);
      iVar10 = 4 - (uVar23 & 3);
      local_7c = 0;
      uVar28 = 0;
      uVar24 = 0;
      uVar27 = 0;
      uVar25 = 0;
      uVar6 = uVar1 >> 0xc;
      uVar11 = uVar1;
      do {
        uVar5 = 1 << (ulong)(uVar27 & 0x1f);
        if ((uVar6 == 0) || ((uVar5 & uVar6) != 0)) {
          if ((uVar6 == 0) || (uVar27 != 3)) {
            uVar11 = uVar28 + 1;
            uVar9 = uVar28;
LAB_02e255fc:
            lVar26 = *param_1 + (ulong)uVar9 * (ulong)*(ushort *)(param_1 + 2) * 4;
            uVar28 = uVar11;
          }
          else {
            if ((uVar11 >> 0xf & 1) != 0) {
              uVar9 = uVar9 - 1;
              uVar11 = uVar28;
              goto LAB_02e255fc;
            }
            lVar26 = 0;
          }
          if (((*(uint *)(param_2 + 0xa8) & 0xff) == 0) ||
             ((uVar2 != uVar1 && ((uVar5 & *(uint *)(param_2 + 0xa8) >> 0xc) == 0)))) {
            bVar8 = false;
            cVar3 = *(char *)(param_2 + 0x7d);
          }
          else {
            FUN_02e25164(param_2,lVar26,param_3,uVar23,uVar24);
            uVar9 = (uint)uVar24;
            if (*(int *)(param_2 + 0x58) != 0) {
              uVar11 = uVar23;
              if ((uVar23 & 3) != 0) {
                memset((void *)((long)param_3 + (ulong)uVar23 * 4),0,(ulong)(uint)(iVar10 * 4));
                uVar11 = iVar10 + uVar23;
              }
              uVar13 = *(uint *)(param_2 + 0x3c);
              uVar17 = uVar13 - 1;
              iVar7 = (int)(uVar24 >> 2);
              uVar5 = uVar9 & 3;
              uVar24 = (ulong)uVar5;
              uVar14 = uVar13 & 1;
              if ((uVar17 == uVar9) && (uVar14 != 0)) {
                pfVar19 = (float *)(*(long *)(param_2 + 0x20) +
                                   (ulong)((iVar7 + (uint)(1 < uVar5 && uVar13 != 1)) * 0x10) * 4);
                pfVar20 = pfVar19 + 1;
                pfVar21 = pfVar19 + 2;
                pfVar22 = pfVar19 + 3;
              }
              else {
                pfVar19 = (float *)(*(long *)(param_2 + 0x20) + (ulong)(uint)(iVar7 << 4) * 4 +
                                   uVar24 * 4);
                pfVar20 = pfVar19 + 4;
                pfVar21 = pfVar19 + 8;
                pfVar22 = pfVar19 + 0xc;
              }
              fVar38 = *pfVar19;
              fVar39 = *pfVar20;
              fVar63 = *pfVar21;
              fVar61 = *pfVar22;
              if (uVar11 != 0) {
                puVar18 = *(undefined8 **)(param_2 + 0x30);
                uVar41 = puVar18[1];
                uVar40 = *puVar18;
                uVar43 = puVar18[3];
                uVar42 = puVar18[2];
                uVar45 = puVar18[5];
                uVar44 = puVar18[4];
                uVar47 = puVar18[7];
                uVar46 = puVar18[6];
                uVar49 = puVar18[9];
                uVar48 = puVar18[8];
                uVar51 = puVar18[0xb];
                uVar50 = puVar18[10];
                uVar53 = puVar18[0xd];
                uVar52 = puVar18[0xc];
                uVar55 = puVar18[0xf];
                uVar54 = puVar18[0xe];
                puVar18 = param_3;
                do {
                  fVar58 = fVar38 * (float)uVar48;
                  fVar59 = fVar38 * (float)((ulong)uVar48 >> 0x20);
                  fVar60 = fVar38 * (float)uVar49;
                  fVar62 = fVar38 * (float)((ulong)uVar49 >> 0x20);
                  fVar29 = (float)uVar50 * fVar39;
                  fVar32 = (float)((ulong)uVar50 >> 0x20) * fVar39;
                  fVar35 = (float)uVar51 * fVar39;
                  fVar36 = (float)((ulong)uVar51 >> 0x20) * fVar39;
                  puVar15 = puVar18 + 2;
                  fVar38 = (float)((ulong)puVar18[1] >> 0x20);
                  fVar39 = (float)puVar18[1];
                  fVar30 = (float)uVar52 * fVar63;
                  fVar33 = (float)((ulong)uVar52 >> 0x20) * fVar63;
                  fVar31 = (float)uVar54 * fVar61;
                  fVar34 = (float)((ulong)uVar54 >> 0x20) * fVar61;
                  fVar37 = (float)((ulong)uVar55 >> 0x20) * fVar61;
                  fVar56 = (float)*puVar18;
                  fVar57 = (float)((ulong)*puVar18 >> 0x20);
                  fVar61 = fVar60 + fVar35 + (float)uVar53 * fVar63 + (float)uVar55 * fVar61 +
                           (float)uVar41 * fVar39 + (float)uVar43 * fVar39 + (float)uVar45 * fVar57
                           + (float)uVar47 * fVar56;
                  fVar63 = fVar62 + fVar36 + (float)((ulong)uVar53 >> 0x20) * fVar63 + fVar37 +
                           (float)((ulong)uVar41 >> 0x20) * fVar38 +
                           (float)((ulong)uVar43 >> 0x20) * fVar39 +
                           (float)((ulong)uVar45 >> 0x20) * fVar57 +
                           (float)((ulong)uVar47 >> 0x20) * fVar56;
                  puVar18[1] = CONCAT44(fVar63,fVar61);
                  *puVar18 = CONCAT44(fVar59 + fVar32 + fVar33 + fVar34 +
                                      (float)((ulong)uVar40 >> 0x20) * fVar57 +
                                      (float)((ulong)uVar42 >> 0x20) * fVar39 +
                                      (float)((ulong)uVar44 >> 0x20) * fVar57 +
                                      (float)((ulong)uVar46 >> 0x20) * fVar56,
                                      fVar58 + fVar29 + fVar30 + fVar31 + (float)uVar40 * fVar56 +
                                      (float)uVar42 * fVar39 + (float)uVar44 * fVar57 +
                                      (float)uVar46 * fVar56);
                  puVar18 = puVar15;
                } while (puVar15 < (undefined8 *)((long)param_3 + (ulong)uVar11 * 4));
                uVar13 = *(uint *)(param_2 + 0x3c);
                uVar14 = uVar13 & 1;
                uVar17 = uVar13 - 1;
              }
              if ((uVar17 == uVar9) && (uVar14 != 0)) {
                uVar24 = (ulong)((iVar7 + (uint)(1 < uVar5 && uVar13 != 1)) * 0x10);
                lVar12 = uVar24 * 4;
                *(float *)(*(long *)(param_2 + 0x20) + lVar12) = fVar38;
                *(float *)(*(long *)(param_2 + 0x20) + lVar12 + 4) = fVar39;
                *(float *)(*(long *)(param_2 + 0x20) + lVar12 + 8) = fVar63;
                lVar12 = *(long *)(param_2 + 0x20) + 0xc;
              }
              else {
                lVar12 = (ulong)(uint)(iVar7 << 4) * 4;
                lVar16 = uVar24 * 4;
                *(float *)(*(long *)(param_2 + 0x20) + lVar12 + lVar16) = fVar38;
                *(float *)(*(long *)(param_2 + 0x20) + lVar12 + lVar16 + 0x10) = fVar39;
                *(float *)(*(long *)(param_2 + 0x20) + lVar12 + lVar16 + 0x20) = fVar63;
                lVar12 = *(long *)(param_2 + 0x20) + lVar12 + 0x30;
              }
              *(float *)(lVar12 + uVar24 * 4) = fVar61;
            }
            uVar24 = (ulong)(uVar9 + 1);
            bVar8 = true;
            cVar3 = *(char *)(param_2 + 0x7d);
          }
          if (cVar3 != '\0') {
            FUN_02e253a0(*(long *)(param_2 + 0x48) + (ulong)local_7c * 0x18,lVar26,uVar23);
            local_7c = local_7c + 1;
          }
          if (bVar8) {
            FUN_02e0add0(*(undefined4 *)(param_2 + 0x98),*(undefined4 *)(param_2 + 0x70),
                         *(undefined4 *)(param_2 + 0x9c),*(undefined4 *)(param_2 + 0x74),lVar26,
                         param_3,uVar23);
          }
          else {
            FUN_02e25a70(*(undefined4 *)(param_2 + 0x98),*(undefined4 *)(param_2 + 0x70),lVar26,
                         uVar23);
          }
          uVar11 = *(uint *)(param_1 + 1);
          uVar25 = uVar25 + 1;
        }
        uVar9 = uVar11 & 0xff;
        uVar27 = uVar27 + 1;
      } while (uVar25 < uVar9);
    }
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(param_2 + 0x58);
    *(undefined8 *)(param_2 + 0x98) = *(undefined8 *)(param_2 + 0x70);
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(param_2 + 0x60);
    *(undefined8 *)(param_2 + 0x90) = *(undefined8 *)(param_2 + 0x68);
    *(undefined8 *)(param_2 + 0x9e) = *(undefined8 *)(param_2 + 0x76);
  }
  return;
}


