/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e1a1e8; name: FUN_02e1a1e8
 */


void FUN_02e1a1e8(long param_1,long *param_2)

{
  float *__dest;
  float *pfVar1;
  long *plVar2;
  float *pfVar3;
  float *pfVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  float *__src;
  float *pfVar8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  float *pfVar13;
  long lVar14;
  uint *puVar15;
  ulong uVar16;
  float *pfVar17;
  uint *puVar18;
  float *pfVar19;
  float *pfVar20;
  float *pfVar21;
  float *pfVar22;
  float *pfVar23;
  ulong uVar24;
  uint uVar25;
  int iVar26;
  int iVar27;
  uint uVar28;
  float *pfVar29;
  float *pfVar30;
  float *pfVar31;
  float *pfVar32;
  ulong uVar33;
  float *pfVar34;
  undefined8 *puVar35;
  ulong *puVar36;
  float *pfVar37;
  float *pfVar38;
  float *pfVar39;
  uint uVar40;
  uint uVar41;
  long lVar42;
  long lVar43;
  byte bVar44;
  ulong uVar45;
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
  undefined8 uVar56;
  undefined8 uVar57;
  float fVar58;
  undefined8 uVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  ulong uVar64;
  undefined8 uVar65;
  ulong uVar66;
  undefined8 uVar67;
  ulong uVar68;
  undefined8 uVar69;
  ulong uVar70;
  undefined8 uVar71;
  ulong uVar72;
  undefined8 uVar73;
  ulong uVar74;
  undefined8 uVar75;
  ulong uVar76;
  undefined8 uVar77;
  ulong uVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  undefined8 uVar83;
  ulong uVar84;
  undefined8 uVar85;
  ulong uVar86;
  undefined8 uVar87;
  ulong uVar88;
  undefined8 uVar89;
  ulong uVar90;
  undefined8 uVar91;
  ulong uVar92;
  undefined8 uVar93;
  ulong uVar94;
  float fVar95;
  float fVar96;
  float fVar97;
  float fVar98;
  float fVar99;
  float fVar100;
  float *local_d8 [4];
  float *local_b8;
  float *local_b0;
  
  __src = (float *)(**(code **)(**(long **)(param_1 + 0x160) + 0x10))
                             (*(long **)(param_1 + 0x160),
                              (ulong)*(byte *)(param_1 + 0x138) * 0x800 + 0x2000);
  if (__src != (float *)0x0) {
    local_d8[0] = __src + 0x200;
    local_d8[1] = __src + 0x300;
    local_d8[2] = __src + 0x400;
    local_d8[3] = __src + 0x500;
    local_b8 = __src + 0x600;
    local_b0 = __src + 0x700;
    uVar25 = (uint)*(ushort *)((long)param_2 + 0x12);
    bVar7 = *(char *)(param_1 + 0x138) != '\0';
    pfVar3 = (float *)0x0;
    if (bVar7) {
      pfVar3 = __src + 0x900;
    }
    pfVar38 = (float *)0x0;
    if (bVar7) {
      pfVar38 = __src + 0xb00;
    }
    pfVar8 = (float *)0x0;
    if (bVar7) {
      pfVar8 = __src + 0xa00;
    }
    pfVar4 = (float *)0x0;
    if (bVar7) {
      pfVar4 = __src + 0x800;
    }
    if (*(ushort *)((long)param_2 + 0x12) != 0) {
      fVar63 = *(float *)(*(long *)(param_1 + 0x158) + 0x14);
      fVar81 = SQRT(fVar63 * 0.0027777778);
      __dest = __src + 0x100;
      pfVar1 = __src + 0x101;
      uVar16 = 0xbb80b990;
      fVar80 = fVar63 * 0.003928371;
      fVar82 = fVar81 + fVar81;
      uVar41 = 0;
      fVar79 = SQRT(*(float *)(param_1 + 0x174) * 0.0027777778);
      fVar60 = *(float *)(param_1 + 0x174) * 0.003928371;
      do {
        uVar10 = uVar25;
        if (0xff < uVar25) {
          uVar10 = 0x100;
        }
        FUN_02e1ce44(param_1,param_2,__src,uVar10,uVar41);
        uVar40 = *(uint *)(param_1 + 0xd0);
        uVar12 = (ulong)(uVar10 << 2);
        if (uVar40 == 0) {
          memcpy(__dest,__src,uVar12);
        }
        else {
          uVar33 = (ulong)*(uint *)(param_1 + 0xe0);
          pfVar31 = (float *)(*(long *)(param_1 + 0xd8) + uVar33 * 4);
          pfVar23 = __dest;
          pfVar13 = __src;
          uVar11 = uVar10;
          do {
            uVar40 = uVar40 - (int)uVar33;
            uVar28 = uVar11;
            if (uVar40 <= uVar11) {
              uVar28 = uVar40;
            }
            uVar5 = uVar28 >> 2;
            uVar40 = uVar28 & 3;
            pfVar34 = pfVar23;
            pfVar37 = pfVar13;
            pfVar29 = pfVar31;
            if (uVar5 != 0) {
              uVar6 = uVar28 >> 2 & 3;
              pfVar29 = (float *)(ulong)uVar5;
              if (2 < uVar5 - 1) {
                iVar26 = uVar5 - uVar6;
                do {
                  uVar57 = *(undefined8 *)(pfVar31 + 2);
                  uVar56 = *(undefined8 *)pfVar31;
                  iVar26 = iVar26 + -4;
                  uVar59 = *(undefined8 *)pfVar13;
                  *(undefined8 *)(pfVar31 + 2) = *(undefined8 *)(pfVar13 + 2);
                  *(undefined8 *)pfVar31 = uVar59;
                  *(undefined8 *)(pfVar23 + 2) = uVar57;
                  *(undefined8 *)pfVar23 = uVar56;
                  uVar57 = *(undefined8 *)(pfVar31 + 6);
                  uVar56 = *(undefined8 *)(pfVar31 + 4);
                  uVar59 = *(undefined8 *)(pfVar13 + 4);
                  *(undefined8 *)(pfVar31 + 6) = *(undefined8 *)(pfVar13 + 6);
                  *(undefined8 *)(pfVar31 + 4) = uVar59;
                  *(undefined8 *)(pfVar23 + 6) = uVar57;
                  *(undefined8 *)(pfVar23 + 4) = uVar56;
                  uVar57 = *(undefined8 *)(pfVar31 + 10);
                  uVar56 = *(undefined8 *)(pfVar31 + 8);
                  uVar59 = *(undefined8 *)(pfVar13 + 8);
                  *(undefined8 *)(pfVar31 + 10) = *(undefined8 *)(pfVar13 + 10);
                  *(undefined8 *)(pfVar31 + 8) = uVar59;
                  *(undefined8 *)(pfVar23 + 10) = uVar57;
                  *(undefined8 *)(pfVar23 + 8) = uVar56;
                  uVar57 = *(undefined8 *)(pfVar31 + 0xe);
                  uVar56 = *(undefined8 *)(pfVar31 + 0xc);
                  pfVar34 = pfVar13 + 0xe;
                  uVar59 = *(undefined8 *)(pfVar13 + 0xc);
                  pfVar13 = pfVar13 + 0x10;
                  *(undefined8 *)(pfVar31 + 0xe) = *(undefined8 *)pfVar34;
                  *(undefined8 *)(pfVar31 + 0xc) = uVar59;
                  *(undefined8 *)(pfVar23 + 0xe) = uVar57;
                  *(undefined8 *)(pfVar23 + 0xc) = uVar56;
                  pfVar31 = pfVar31 + 0x10;
                  pfVar23 = pfVar23 + 0x10;
                  pfVar37 = pfVar13;
                  pfVar29 = pfVar31;
                  pfVar34 = pfVar23;
                } while (iVar26 != 0);
              }
              if (uVar6 != 0) {
                iVar26 = -uVar6;
                pfVar13 = pfVar34;
                pfVar23 = pfVar37;
                do {
                  pfVar29 = pfVar31 + 4;
                  uVar57 = *(undefined8 *)(pfVar31 + 2);
                  uVar56 = *(undefined8 *)pfVar31;
                  bVar7 = iVar26 != -1;
                  iVar26 = iVar26 + 1;
                  pfVar37 = pfVar23 + 4;
                  uVar59 = *(undefined8 *)pfVar23;
                  *(undefined8 *)(pfVar31 + 2) = *(undefined8 *)(pfVar23 + 2);
                  *(undefined8 *)pfVar31 = uVar59;
                  pfVar34 = pfVar13 + 4;
                  *(undefined8 *)(pfVar13 + 2) = uVar57;
                  *(undefined8 *)pfVar13 = uVar56;
                  pfVar13 = pfVar34;
                  pfVar23 = pfVar37;
                  pfVar31 = pfVar29;
                } while (bVar7);
              }
            }
            pfVar23 = pfVar34;
            pfVar13 = pfVar37;
            pfVar31 = pfVar29;
            if (uVar40 != 0) {
              fVar55 = *pfVar29;
              pfVar13 = pfVar37 + 1;
              pfVar31 = pfVar29 + 1;
              *pfVar29 = *pfVar37;
              pfVar23 = pfVar34 + 1;
              *pfVar34 = fVar55;
              if (1 < uVar40) {
                fVar55 = pfVar29[1];
                pfVar29[1] = pfVar37[1];
                pfVar34[1] = fVar55;
                if (uVar40 == 2) {
                  pfVar13 = pfVar37 + 2;
                  pfVar31 = pfVar29 + 2;
                  pfVar23 = pfVar34 + 2;
                }
                else {
                  fVar55 = pfVar29[2];
                  pfVar13 = pfVar37 + 3;
                  pfVar29[2] = pfVar37[2];
                  pfVar31 = pfVar29 + 3;
                  pfVar34[2] = fVar55;
                  pfVar23 = pfVar34 + 3;
                }
              }
            }
            uVar5 = *(int *)(param_1 + 0xe0) + uVar28;
            uVar40 = *(uint *)(param_1 + 0xd0);
            *(uint *)(param_1 + 0xe0) = uVar5;
            if (uVar5 == uVar40) {
              pfVar31 = *(float **)(param_1 + 0xd8);
              uVar5 = 0;
              *(undefined4 *)(param_1 + 0xe0) = 0;
            }
            uVar33 = (ulong)uVar5;
            uVar11 = uVar11 - uVar28;
          } while (uVar11 != 0);
        }
        uVar40 = *(uint *)(param_1 + 0xb8);
        if ((uVar40 != 0) && (uVar10 != 0)) {
          uVar33 = (ulong)*(uint *)(param_1 + 200);
          pfVar31 = __src;
          pfVar13 = (float *)(*(long *)(param_1 + 0xc0) + uVar33 * 4);
          uVar11 = uVar10;
          do {
            uVar40 = uVar40 - (int)uVar33;
            uVar28 = uVar11;
            if (uVar40 <= uVar11) {
              uVar28 = uVar40;
            }
            uVar5 = uVar28 >> 2;
            uVar40 = uVar28 & 3;
            if (uVar5 == 0) {
              pfVar23 = pfVar13;
              pfVar34 = pfVar31;
              if (uVar40 != 0) goto LAB_02e1c058;
            }
            else {
              uVar6 = uVar28 >> 2 & 3;
              pfVar37 = (float *)(ulong)uVar5;
              pfVar23 = pfVar13;
              pfVar29 = (float *)(ulong)(uVar5 - 1);
              pfVar34 = pfVar31;
              if (2 < uVar5 - 1) {
                iVar26 = uVar5 - uVar6;
                do {
                  uVar57 = *(undefined8 *)(pfVar13 + 2);
                  uVar56 = *(undefined8 *)pfVar13;
                  iVar26 = iVar26 + -4;
                  uVar59 = *(undefined8 *)pfVar31;
                  *(undefined8 *)(pfVar13 + 2) = *(undefined8 *)(pfVar31 + 2);
                  *(undefined8 *)pfVar13 = uVar59;
                  *(undefined8 *)(pfVar31 + 2) = uVar57;
                  *(undefined8 *)pfVar31 = uVar56;
                  uVar57 = *(undefined8 *)(pfVar13 + 6);
                  uVar56 = *(undefined8 *)(pfVar13 + 4);
                  uVar59 = *(undefined8 *)(pfVar31 + 4);
                  *(undefined8 *)(pfVar13 + 6) = *(undefined8 *)(pfVar31 + 6);
                  *(undefined8 *)(pfVar13 + 4) = uVar59;
                  *(undefined8 *)(pfVar31 + 6) = uVar57;
                  *(undefined8 *)(pfVar31 + 4) = uVar56;
                  uVar57 = *(undefined8 *)(pfVar13 + 10);
                  uVar56 = *(undefined8 *)(pfVar13 + 8);
                  uVar59 = *(undefined8 *)(pfVar31 + 8);
                  *(undefined8 *)(pfVar13 + 10) = *(undefined8 *)(pfVar31 + 10);
                  *(undefined8 *)(pfVar13 + 8) = uVar59;
                  *(undefined8 *)(pfVar31 + 10) = uVar57;
                  *(undefined8 *)(pfVar31 + 8) = uVar56;
                  uVar57 = *(undefined8 *)(pfVar13 + 0xe);
                  uVar56 = *(undefined8 *)(pfVar13 + 0xc);
                  uVar59 = *(undefined8 *)(pfVar31 + 0xc);
                  *(undefined8 *)(pfVar13 + 0xe) = *(undefined8 *)(pfVar31 + 0xe);
                  *(undefined8 *)(pfVar13 + 0xc) = uVar59;
                  *(undefined8 *)(pfVar31 + 0xe) = uVar57;
                  *(undefined8 *)(pfVar31 + 0xc) = uVar56;
                  pfVar13 = pfVar13 + 0x10;
                  pfVar31 = pfVar31 + 0x10;
                  pfVar37 = pfVar13;
                  pfVar23 = pfVar13;
                  pfVar29 = pfVar31;
                  pfVar34 = pfVar31;
                } while (iVar26 != 0);
              }
              pfVar31 = pfVar29;
              pfVar13 = pfVar37;
              if (uVar6 != 0) {
                iVar26 = -uVar6;
                do {
                  pfVar13 = pfVar23 + 4;
                  uVar57 = *(undefined8 *)(pfVar23 + 2);
                  uVar56 = *(undefined8 *)pfVar23;
                  bVar7 = iVar26 != -1;
                  iVar26 = iVar26 + 1;
                  pfVar31 = pfVar34 + 4;
                  uVar59 = *(undefined8 *)pfVar34;
                  *(undefined8 *)(pfVar23 + 2) = *(undefined8 *)(pfVar34 + 2);
                  *(undefined8 *)pfVar23 = uVar59;
                  *(undefined8 *)(pfVar34 + 2) = uVar57;
                  *(undefined8 *)pfVar34 = uVar56;
                  pfVar23 = pfVar13;
                  pfVar34 = pfVar31;
                } while (bVar7);
              }
              pfVar23 = pfVar13;
              pfVar34 = pfVar31;
              if (uVar40 != 0) {
LAB_02e1c058:
                fVar55 = *pfVar13;
                pfVar23 = pfVar13 + 1;
                *pfVar13 = *pfVar34;
                pfVar31 = pfVar34 + 1;
                *pfVar34 = fVar55;
                if (1 < uVar40) {
                  fVar55 = pfVar13[1];
                  pfVar13[1] = pfVar34[1];
                  pfVar34[1] = fVar55;
                  if (uVar40 == 2) {
                    pfVar23 = pfVar13 + 2;
                    pfVar31 = pfVar34 + 2;
                  }
                  else {
                    fVar55 = pfVar13[2];
                    pfVar13[2] = pfVar34[2];
                    pfVar23 = pfVar13 + 3;
                    pfVar31 = pfVar34 + 3;
                    pfVar34[2] = fVar55;
                  }
                }
              }
            }
            uVar5 = *(int *)(param_1 + 200) + uVar28;
            uVar33 = (ulong)uVar5;
            uVar40 = *(uint *)(param_1 + 0xb8);
            *(uint *)(param_1 + 200) = uVar5;
            if (uVar5 == uVar40) {
              pfVar23 = *(float **)(param_1 + 0xc0);
              uVar33 = 0;
              *(undefined4 *)(param_1 + 200) = 0;
            }
            uVar11 = uVar11 - uVar28;
            pfVar13 = pfVar23;
          } while (uVar11 != 0);
        }
        if (*(char *)(param_1 + 0x138) != '\0') {
          FUN_02e1f368(*(undefined8 *)(param_1 + 0x150),__src,pfVar4,pfVar3,uVar10);
          if ((*(char *)(*(long *)(param_1 + 0x158) + 0x98) != '\0') &&
             (bVar9 = *(byte *)(param_1 + 0x134), bVar9 != 0)) {
            uVar11 = uVar10 & 3;
            iVar26 = 4 - uVar11;
            uVar33 = 0;
            bVar44 = 0;
            uVar45 = (ulong)uVar10;
            uVar40 = iVar26 + uVar10;
            do {
              lVar43 = *(long *)(param_1 + 0x148);
              if (*(int *)(lVar43 + uVar33 * 0xa0 + 0x90) == 1) {
                uVar16 = uVar45;
                uVar28 = uVar10;
                if (uVar11 != 0) {
                  memset(pfVar4 + uVar45,0,(ulong)(uint)(iVar26 * 4));
                  uVar16 = (ulong)uVar40;
                  uVar28 = uVar40;
                }
                puVar35 = (undefined8 *)(lVar43 + uVar33 * 0xa0);
                fVar55 = *(float *)(puVar35 + 0x10);
                fVar58 = *(float *)((long)puVar35 + 0x84);
                fVar61 = *(float *)(puVar35 + 0x11);
                fVar62 = *(float *)((long)puVar35 + 0x8c);
                if (uVar28 != 0) {
                  uVar57 = puVar35[1];
                  uVar56 = *puVar35;
                  uVar65 = puVar35[3];
                  uVar59 = puVar35[2];
                  uVar69 = puVar35[5];
                  uVar67 = puVar35[4];
                  uVar73 = puVar35[7];
                  uVar71 = puVar35[6];
                  uVar77 = puVar35[9];
                  uVar75 = puVar35[8];
                  uVar85 = puVar35[0xb];
                  uVar83 = puVar35[10];
                  uVar89 = puVar35[0xd];
                  uVar87 = puVar35[0xc];
                  uVar93 = puVar35[0xf];
                  uVar91 = puVar35[0xe];
                  pfVar13 = pfVar4;
                  do {
                    fVar97 = fVar55 * (float)uVar75;
                    fVar98 = fVar55 * (float)((ulong)uVar75 >> 0x20);
                    fVar99 = fVar55 * (float)uVar77;
                    fVar100 = fVar55 * (float)((ulong)uVar77 >> 0x20);
                    fVar46 = (float)uVar83 * fVar58;
                    fVar49 = (float)((ulong)uVar83 >> 0x20) * fVar58;
                    fVar52 = (float)uVar85 * fVar58;
                    fVar53 = (float)((ulong)uVar85 >> 0x20) * fVar58;
                    pfVar31 = pfVar13 + 4;
                    fVar55 = (float)((ulong)*(undefined8 *)(pfVar13 + 2) >> 0x20);
                    fVar47 = (float)uVar87 * fVar61;
                    fVar50 = (float)((ulong)uVar87 >> 0x20) * fVar61;
                    fVar48 = (float)uVar91 * fVar62;
                    fVar51 = (float)((ulong)uVar91 >> 0x20) * fVar62;
                    fVar54 = (float)((ulong)uVar93 >> 0x20) * fVar62;
                    fVar95 = (float)*(undefined8 *)pfVar13;
                    fVar96 = (float)((ulong)*(undefined8 *)pfVar13 >> 0x20);
                    fVar58 = (float)*(undefined8 *)(pfVar13 + 2);
                    fVar62 = fVar99 + fVar52 + (float)uVar89 * fVar61 + (float)uVar93 * fVar62 +
                             (float)uVar57 * fVar58 + (float)uVar65 * fVar58 +
                             (float)uVar69 * fVar96 + (float)uVar73 * fVar95;
                    fVar61 = fVar100 + fVar53 + (float)((ulong)uVar89 >> 0x20) * fVar61 + fVar54 +
                             (float)((ulong)uVar57 >> 0x20) * fVar55 +
                             (float)((ulong)uVar65 >> 0x20) * fVar58 +
                             (float)((ulong)uVar69 >> 0x20) * fVar96 +
                             (float)((ulong)uVar73 >> 0x20) * fVar95;
                    *(ulong *)(pfVar13 + 2) = CONCAT44(fVar61,fVar62);
                    *(ulong *)pfVar13 =
                         CONCAT44(fVar98 + fVar49 + fVar50 + fVar51 +
                                  (float)((ulong)uVar56 >> 0x20) * fVar96 +
                                  (float)((ulong)uVar59 >> 0x20) * fVar58 +
                                  (float)((ulong)uVar67 >> 0x20) * fVar96 +
                                  (float)((ulong)uVar71 >> 0x20) * fVar95,
                                  fVar97 + fVar46 + fVar47 + fVar48 + (float)uVar56 * fVar95 +
                                  (float)uVar59 * fVar58 + (float)uVar67 * fVar96 +
                                  (float)uVar71 * fVar95);
                    pfVar13 = pfVar31;
                  } while (pfVar31 < pfVar4 + uVar16);
                }
                *(float *)(puVar35 + 0x10) = fVar55;
                *(float *)((long)puVar35 + 0x84) = fVar58;
                *(float *)(puVar35 + 0x11) = fVar61;
                *(float *)((long)puVar35 + 0x8c) = fVar62;
                lVar43 = *(long *)(param_1 + 0x148);
                uVar24 = uVar45;
                uVar28 = uVar10;
                if (uVar11 != 0) {
                  memset(pfVar3 + uVar45,0,(ulong)(uint)(iVar26 * 4));
                  uVar24 = (ulong)uVar40;
                  uVar28 = uVar40;
                }
                puVar36 = (ulong *)(lVar43 + (uVar33 + 1) * 0xa0);
                fVar55 = *(float *)(puVar36 + 0x10);
                fVar61 = *(float *)((long)puVar36 + 0x84);
                fVar58 = *(float *)(puVar36 + 0x11);
                fVar62 = *(float *)((long)puVar36 + 0x8c);
                uVar16 = (ulong)(uint)fVar62;
                if (uVar28 != 0) {
                  uVar33 = puVar36[1];
                  uVar16 = *puVar36;
                  uVar66 = puVar36[3];
                  uVar64 = puVar36[2];
                  uVar70 = puVar36[5];
                  uVar68 = puVar36[4];
                  uVar74 = puVar36[7];
                  uVar72 = puVar36[6];
                  uVar78 = puVar36[9];
                  uVar76 = puVar36[8];
                  uVar86 = puVar36[0xb];
                  uVar84 = puVar36[10];
                  uVar90 = puVar36[0xd];
                  uVar88 = puVar36[0xc];
                  uVar94 = puVar36[0xf];
                  uVar92 = puVar36[0xe];
                  pfVar13 = pfVar3;
                  do {
                    fVar97 = fVar55 * (float)uVar76;
                    fVar98 = fVar55 * (float)(uVar76 >> 0x20);
                    fVar99 = fVar55 * (float)uVar78;
                    fVar100 = fVar55 * (float)(uVar78 >> 0x20);
                    fVar46 = (float)uVar84 * fVar61;
                    fVar49 = (float)(uVar84 >> 0x20) * fVar61;
                    fVar52 = (float)uVar86 * fVar61;
                    fVar53 = (float)(uVar86 >> 0x20) * fVar61;
                    pfVar31 = pfVar13 + 4;
                    fVar55 = (float)((ulong)*(undefined8 *)(pfVar13 + 2) >> 0x20);
                    fVar47 = (float)uVar88 * fVar58;
                    fVar50 = (float)(uVar88 >> 0x20) * fVar58;
                    fVar48 = (float)uVar92 * fVar62;
                    fVar51 = (float)(uVar92 >> 0x20) * fVar62;
                    fVar54 = (float)(uVar94 >> 0x20) * fVar62;
                    fVar95 = (float)*(undefined8 *)pfVar13;
                    fVar96 = (float)((ulong)*(undefined8 *)pfVar13 >> 0x20);
                    fVar61 = (float)*(undefined8 *)(pfVar13 + 2);
                    fVar62 = fVar99 + fVar52 + (float)uVar90 * fVar58 + (float)uVar94 * fVar62 +
                             (float)uVar33 * fVar61 + (float)uVar66 * fVar61 +
                             (float)uVar70 * fVar96 + (float)uVar74 * fVar95;
                    fVar58 = fVar100 + fVar53 + (float)(uVar90 >> 0x20) * fVar58 + fVar54 +
                             (float)(uVar33 >> 0x20) * fVar55 + (float)(uVar66 >> 0x20) * fVar61 +
                             (float)(uVar70 >> 0x20) * fVar96 + (float)(uVar74 >> 0x20) * fVar95;
                    *(ulong *)(pfVar13 + 2) = CONCAT44(fVar58,fVar62);
                    *(ulong *)pfVar13 =
                         CONCAT44(fVar98 + fVar49 + fVar50 + fVar51 +
                                  (float)(uVar16 >> 0x20) * fVar96 +
                                  (float)(uVar64 >> 0x20) * fVar61 +
                                  (float)(uVar68 >> 0x20) * fVar96 +
                                  (float)(uVar72 >> 0x20) * fVar95,
                                  fVar97 + fVar46 + fVar47 + fVar48 + (float)uVar16 * fVar95 +
                                  (float)uVar64 * fVar61 + (float)uVar68 * fVar96 +
                                  (float)uVar72 * fVar95);
                    pfVar13 = pfVar31;
                  } while (pfVar31 < pfVar3 + uVar24);
                }
                *(float *)(puVar36 + 0x10) = fVar55;
                bVar44 = bVar44 + 1;
                *(float *)((long)puVar36 + 0x84) = fVar61;
                *(float *)(puVar36 + 0x11) = fVar58;
                *(float *)((long)puVar36 + 0x8c) = fVar62;
                bVar9 = *(byte *)(param_1 + 0x134);
              }
              bVar44 = bVar44 + 1;
              uVar33 = (ulong)bVar44;
            } while (bVar44 < bVar9);
          }
          uVar40 = *(uint *)(param_1 + 0xe8);
          if (uVar40 == 0) {
            pfVar8 = pfVar4;
            pfVar38 = pfVar3;
          }
          else if (uVar10 != 0) {
            uVar33 = (ulong)*(uint *)(param_1 + 0xf8);
            pfVar31 = (float *)(*(long *)(param_1 + 0xf0) + uVar33 * 4);
            pfVar23 = pfVar8;
            pfVar13 = pfVar4;
            uVar11 = uVar10;
            do {
              uVar40 = uVar40 - (int)uVar33;
              uVar28 = uVar11;
              if (uVar40 <= uVar11) {
                uVar28 = uVar40;
              }
              uVar5 = uVar28 >> 2;
              uVar40 = uVar28 & 3;
              pfVar34 = pfVar23;
              pfVar37 = pfVar13;
              pfVar29 = pfVar31;
              if (uVar5 != 0) {
                uVar6 = uVar28 >> 2 & 3;
                pfVar29 = (float *)(ulong)uVar5;
                if (2 < uVar5 - 1) {
                  iVar26 = uVar5 - uVar6;
                  do {
                    uVar57 = *(undefined8 *)(pfVar31 + 2);
                    uVar56 = *(undefined8 *)pfVar31;
                    iVar26 = iVar26 + -4;
                    uVar59 = *(undefined8 *)pfVar13;
                    *(undefined8 *)(pfVar31 + 2) = *(undefined8 *)(pfVar13 + 2);
                    *(undefined8 *)pfVar31 = uVar59;
                    *(undefined8 *)(pfVar23 + 2) = uVar57;
                    *(undefined8 *)pfVar23 = uVar56;
                    uVar57 = *(undefined8 *)(pfVar31 + 6);
                    uVar56 = *(undefined8 *)(pfVar31 + 4);
                    uVar59 = *(undefined8 *)(pfVar13 + 4);
                    *(undefined8 *)(pfVar31 + 6) = *(undefined8 *)(pfVar13 + 6);
                    *(undefined8 *)(pfVar31 + 4) = uVar59;
                    *(undefined8 *)(pfVar23 + 6) = uVar57;
                    *(undefined8 *)(pfVar23 + 4) = uVar56;
                    uVar57 = *(undefined8 *)(pfVar31 + 10);
                    uVar56 = *(undefined8 *)(pfVar31 + 8);
                    uVar59 = *(undefined8 *)(pfVar13 + 8);
                    *(undefined8 *)(pfVar31 + 10) = *(undefined8 *)(pfVar13 + 10);
                    *(undefined8 *)(pfVar31 + 8) = uVar59;
                    *(undefined8 *)(pfVar23 + 10) = uVar57;
                    *(undefined8 *)(pfVar23 + 8) = uVar56;
                    uVar57 = *(undefined8 *)(pfVar31 + 0xe);
                    uVar56 = *(undefined8 *)(pfVar31 + 0xc);
                    pfVar34 = pfVar13 + 0xe;
                    uVar59 = *(undefined8 *)(pfVar13 + 0xc);
                    pfVar13 = pfVar13 + 0x10;
                    *(undefined8 *)(pfVar31 + 0xe) = *(undefined8 *)pfVar34;
                    *(undefined8 *)(pfVar31 + 0xc) = uVar59;
                    *(undefined8 *)(pfVar23 + 0xe) = uVar57;
                    *(undefined8 *)(pfVar23 + 0xc) = uVar56;
                    pfVar31 = pfVar31 + 0x10;
                    pfVar23 = pfVar23 + 0x10;
                    pfVar37 = pfVar13;
                    pfVar29 = pfVar31;
                    pfVar34 = pfVar23;
                  } while (iVar26 != 0);
                }
                if (uVar6 != 0) {
                  iVar26 = -uVar6;
                  pfVar13 = pfVar34;
                  pfVar23 = pfVar37;
                  do {
                    pfVar29 = pfVar31 + 4;
                    uVar57 = *(undefined8 *)(pfVar31 + 2);
                    uVar56 = *(undefined8 *)pfVar31;
                    bVar7 = iVar26 != -1;
                    iVar26 = iVar26 + 1;
                    pfVar37 = pfVar23 + 4;
                    uVar59 = *(undefined8 *)pfVar23;
                    *(undefined8 *)(pfVar31 + 2) = *(undefined8 *)(pfVar23 + 2);
                    *(undefined8 *)pfVar31 = uVar59;
                    pfVar34 = pfVar13 + 4;
                    *(undefined8 *)(pfVar13 + 2) = uVar57;
                    *(undefined8 *)pfVar13 = uVar56;
                    pfVar13 = pfVar34;
                    pfVar23 = pfVar37;
                    pfVar31 = pfVar29;
                  } while (bVar7);
                }
              }
              pfVar23 = pfVar34;
              pfVar13 = pfVar37;
              pfVar31 = pfVar29;
              if (uVar40 != 0) {
                fVar55 = *pfVar29;
                pfVar13 = pfVar37 + 1;
                pfVar31 = pfVar29 + 1;
                *pfVar29 = *pfVar37;
                pfVar23 = pfVar34 + 1;
                *pfVar34 = fVar55;
                if (1 < uVar40) {
                  fVar55 = pfVar29[1];
                  pfVar29[1] = pfVar37[1];
                  pfVar34[1] = fVar55;
                  if (uVar40 == 2) {
                    pfVar13 = pfVar37 + 2;
                    pfVar31 = pfVar29 + 2;
                    pfVar23 = pfVar34 + 2;
                  }
                  else {
                    fVar55 = pfVar29[2];
                    pfVar13 = pfVar37 + 3;
                    pfVar29[2] = pfVar37[2];
                    pfVar31 = pfVar29 + 3;
                    pfVar34[2] = fVar55;
                    pfVar23 = pfVar34 + 3;
                  }
                }
              }
              uVar5 = *(int *)(param_1 + 0xf8) + uVar28;
              uVar40 = *(uint *)(param_1 + 0xe8);
              *(uint *)(param_1 + 0xf8) = uVar5;
              if (uVar5 == uVar40) {
                pfVar31 = *(float **)(param_1 + 0xf0);
                uVar5 = 0;
                *(undefined4 *)(param_1 + 0xf8) = 0;
              }
              uVar33 = (ulong)uVar5;
              uVar11 = uVar11 - uVar28;
            } while (uVar11 != 0);
            uVar33 = (ulong)*(uint *)(param_1 + 0x110);
            pfVar31 = (float *)(*(long *)(param_1 + 0x108) + uVar33 * 4);
            uVar40 = *(uint *)(param_1 + 0x100);
            pfVar23 = pfVar38;
            pfVar13 = pfVar3;
            uVar11 = uVar10;
            do {
              uVar40 = uVar40 - (int)uVar33;
              uVar28 = uVar11;
              if (uVar40 <= uVar11) {
                uVar28 = uVar40;
              }
              uVar5 = uVar28 >> 2;
              uVar40 = uVar28 & 3;
              pfVar34 = pfVar23;
              pfVar37 = pfVar13;
              pfVar29 = pfVar31;
              if (uVar5 != 0) {
                uVar6 = uVar28 >> 2 & 3;
                pfVar29 = (float *)(ulong)uVar5;
                if (2 < uVar5 - 1) {
                  iVar26 = uVar5 - uVar6;
                  do {
                    uVar57 = *(undefined8 *)(pfVar31 + 2);
                    uVar56 = *(undefined8 *)pfVar31;
                    iVar26 = iVar26 + -4;
                    uVar59 = *(undefined8 *)pfVar13;
                    *(undefined8 *)(pfVar31 + 2) = *(undefined8 *)(pfVar13 + 2);
                    *(undefined8 *)pfVar31 = uVar59;
                    *(undefined8 *)(pfVar23 + 2) = uVar57;
                    *(undefined8 *)pfVar23 = uVar56;
                    uVar57 = *(undefined8 *)(pfVar31 + 6);
                    uVar56 = *(undefined8 *)(pfVar31 + 4);
                    uVar59 = *(undefined8 *)(pfVar13 + 4);
                    *(undefined8 *)(pfVar31 + 6) = *(undefined8 *)(pfVar13 + 6);
                    *(undefined8 *)(pfVar31 + 4) = uVar59;
                    *(undefined8 *)(pfVar23 + 6) = uVar57;
                    *(undefined8 *)(pfVar23 + 4) = uVar56;
                    uVar57 = *(undefined8 *)(pfVar31 + 10);
                    uVar56 = *(undefined8 *)(pfVar31 + 8);
                    uVar59 = *(undefined8 *)(pfVar13 + 8);
                    *(undefined8 *)(pfVar31 + 10) = *(undefined8 *)(pfVar13 + 10);
                    *(undefined8 *)(pfVar31 + 8) = uVar59;
                    *(undefined8 *)(pfVar23 + 10) = uVar57;
                    *(undefined8 *)(pfVar23 + 8) = uVar56;
                    uVar57 = *(undefined8 *)(pfVar31 + 0xe);
                    uVar56 = *(undefined8 *)(pfVar31 + 0xc);
                    pfVar34 = pfVar13 + 0xe;
                    uVar59 = *(undefined8 *)(pfVar13 + 0xc);
                    pfVar13 = pfVar13 + 0x10;
                    *(undefined8 *)(pfVar31 + 0xe) = *(undefined8 *)pfVar34;
                    *(undefined8 *)(pfVar31 + 0xc) = uVar59;
                    *(undefined8 *)(pfVar23 + 0xe) = uVar57;
                    *(undefined8 *)(pfVar23 + 0xc) = uVar56;
                    pfVar31 = pfVar31 + 0x10;
                    pfVar23 = pfVar23 + 0x10;
                    pfVar37 = pfVar13;
                    pfVar29 = pfVar31;
                    pfVar34 = pfVar23;
                  } while (iVar26 != 0);
                }
                if (uVar6 != 0) {
                  iVar26 = -uVar6;
                  pfVar13 = pfVar34;
                  pfVar23 = pfVar37;
                  do {
                    pfVar29 = pfVar31 + 4;
                    uVar57 = *(undefined8 *)(pfVar31 + 2);
                    uVar56 = *(undefined8 *)pfVar31;
                    bVar7 = iVar26 != -1;
                    iVar26 = iVar26 + 1;
                    pfVar37 = pfVar23 + 4;
                    uVar59 = *(undefined8 *)pfVar23;
                    *(undefined8 *)(pfVar31 + 2) = *(undefined8 *)(pfVar23 + 2);
                    *(undefined8 *)pfVar31 = uVar59;
                    pfVar34 = pfVar13 + 4;
                    *(undefined8 *)(pfVar13 + 2) = uVar57;
                    *(undefined8 *)pfVar13 = uVar56;
                    pfVar13 = pfVar34;
                    pfVar23 = pfVar37;
                    pfVar31 = pfVar29;
                  } while (bVar7);
                }
              }
              pfVar23 = pfVar34;
              pfVar13 = pfVar37;
              pfVar31 = pfVar29;
              if (uVar40 != 0) {
                fVar55 = *pfVar29;
                pfVar13 = pfVar37 + 1;
                pfVar31 = pfVar29 + 1;
                *pfVar29 = *pfVar37;
                pfVar23 = pfVar34 + 1;
                *pfVar34 = fVar55;
                if (1 < uVar40) {
                  fVar55 = pfVar29[1];
                  pfVar29[1] = pfVar37[1];
                  pfVar34[1] = fVar55;
                  if (uVar40 == 2) {
                    pfVar13 = pfVar37 + 2;
                    pfVar31 = pfVar29 + 2;
                    pfVar23 = pfVar34 + 2;
                  }
                  else {
                    fVar55 = pfVar29[2];
                    pfVar13 = pfVar37 + 3;
                    pfVar29[2] = pfVar37[2];
                    pfVar31 = pfVar29 + 3;
                    pfVar34[2] = fVar55;
                    pfVar23 = pfVar34 + 3;
                  }
                }
              }
              uVar5 = *(int *)(param_1 + 0x110) + uVar28;
              uVar40 = *(uint *)(param_1 + 0x100);
              *(uint *)(param_1 + 0x110) = uVar5;
              if (uVar5 == uVar40) {
                pfVar31 = *(float **)(param_1 + 0x108);
                uVar5 = 0;
                *(undefined4 *)(param_1 + 0x110) = 0;
              }
              uVar33 = (ulong)uVar5;
              uVar11 = uVar11 - uVar28;
            } while (uVar11 != 0);
          }
        }
        iVar26 = *(int *)(param_1 + 0x18);
        iVar27 = *(int *)(param_1 + 8);
        uVar40 = iVar27 - iVar26;
        pfVar13 = (float *)(*(long *)(param_1 + 0x10) + (ulong)(uint)(iVar26 << 1) * 4);
        if (uVar10 < uVar40) {
          if (uVar10 != 0) {
            pfVar31 = __dest;
            uVar40 = uVar10;
            if ((uVar10 & 1) != 0) {
              fVar55 = *__dest;
              fVar58 = *pfVar13;
              *pfVar13 = fVar55;
              uVar16 = (ulong)(uint)*(float *)(param_1 + 0x1c);
              fVar58 = fVar58 + (fVar55 - pfVar13[1]) * *(float *)(param_1 + 0x1c);
              pfVar13[1] = fVar58;
              pfVar13 = pfVar13 + 2;
              *__dest = fVar58;
              pfVar31 = pfVar1;
              uVar40 = uVar10 - 1;
            }
            if (uVar10 != 1) {
              do {
                fVar55 = *pfVar31;
                uVar40 = uVar40 - 2;
                fVar58 = *pfVar13;
                *pfVar13 = fVar55;
                fVar58 = fVar58 + (fVar55 - pfVar13[1]) * *(float *)(param_1 + 0x1c);
                pfVar13[1] = fVar58;
                *pfVar31 = fVar58;
                fVar55 = pfVar31[1];
                fVar58 = pfVar13[2];
                pfVar13[2] = fVar55;
                fVar58 = fVar58 + (fVar55 - pfVar13[3]) * *(float *)(param_1 + 0x1c);
                pfVar13[3] = fVar58;
                pfVar31[1] = fVar58;
                pfVar31 = pfVar31 + 2;
                pfVar13 = pfVar13 + 4;
              } while (uVar40 != 0);
            }
            iVar26 = *(int *)(param_1 + 0x18);
          }
          *(uint *)(param_1 + 0x18) = iVar26 + uVar10;
        }
        else {
          pfVar31 = __dest;
          uVar11 = uVar10;
          do {
            uVar28 = uVar11;
            if (uVar40 <= uVar11) {
              uVar28 = uVar40;
            }
            pfVar23 = pfVar31;
            if (uVar28 != 0) {
              if (uVar28 != 1) {
                iVar26 = (uVar28 & 1) - uVar28;
                pfVar23 = pfVar13;
                pfVar34 = pfVar31;
                do {
                  fVar55 = *pfVar34;
                  pfVar13 = pfVar23 + 4;
                  pfVar31 = pfVar34 + 2;
                  fVar58 = *pfVar23;
                  *pfVar23 = fVar55;
                  fVar58 = fVar58 + (fVar55 - pfVar23[1]) * *(float *)(param_1 + 0x1c);
                  pfVar23[1] = fVar58;
                  *pfVar34 = fVar58;
                  fVar55 = pfVar34[1];
                  fVar58 = pfVar23[2];
                  pfVar23[2] = fVar55;
                  fVar58 = fVar58 + (fVar55 - pfVar23[3]) * *(float *)(param_1 + 0x1c);
                  iVar26 = iVar26 + 2;
                  pfVar23[3] = fVar58;
                  pfVar34[1] = fVar58;
                  pfVar23 = pfVar13;
                  pfVar34 = pfVar31;
                } while (iVar26 != 0);
              }
              pfVar23 = pfVar31;
              if ((uVar28 & 1) != 0) {
                fVar55 = *pfVar31;
                fVar58 = *pfVar13;
                *pfVar13 = fVar55;
                fVar58 = fVar58 + (fVar55 - pfVar13[1]) * *(float *)(param_1 + 0x1c);
                pfVar13[1] = fVar58;
                pfVar13 = pfVar13 + 2;
                pfVar23 = pfVar31 + 1;
                *pfVar31 = fVar58;
              }
              iVar26 = *(int *)(param_1 + 0x18);
              iVar27 = *(int *)(param_1 + 8);
            }
            iVar26 = iVar26 + uVar28;
            *(int *)(param_1 + 0x18) = iVar26;
            if (iVar26 == iVar27) {
              pfVar13 = *(float **)(param_1 + 0x10);
              iVar26 = 0;
              *(undefined4 *)(param_1 + 0x18) = 0;
            }
            uVar11 = uVar11 - uVar28;
            uVar40 = iVar27 - iVar26;
            pfVar31 = pfVar23;
          } while (uVar11 != 0);
        }
        iVar26 = *(int *)(param_1 + 0x30);
        iVar27 = *(int *)(param_1 + 0x20);
        uVar40 = iVar27 - iVar26;
        pfVar13 = (float *)(*(long *)(param_1 + 0x28) + (ulong)(uint)(iVar26 << 1) * 4);
        if (uVar10 < uVar40) {
          if (uVar10 != 0) {
            pfVar31 = __dest;
            uVar40 = uVar10;
            if ((uVar10 & 1) != 0) {
              fVar55 = *__dest;
              fVar58 = *pfVar13;
              *pfVar13 = fVar55;
              uVar16 = (ulong)(uint)*(float *)(param_1 + 0x34);
              fVar58 = fVar58 + (fVar55 - pfVar13[1]) * *(float *)(param_1 + 0x34);
              pfVar13[1] = fVar58;
              pfVar13 = pfVar13 + 2;
              *__dest = fVar58;
              pfVar31 = pfVar1;
              uVar40 = uVar10 - 1;
            }
            if (uVar10 != 1) {
              do {
                fVar55 = *pfVar31;
                uVar40 = uVar40 - 2;
                fVar58 = *pfVar13;
                *pfVar13 = fVar55;
                fVar58 = fVar58 + (fVar55 - pfVar13[1]) * *(float *)(param_1 + 0x34);
                pfVar13[1] = fVar58;
                *pfVar31 = fVar58;
                fVar55 = pfVar31[1];
                fVar58 = pfVar13[2];
                pfVar13[2] = fVar55;
                fVar58 = fVar58 + (fVar55 - pfVar13[3]) * *(float *)(param_1 + 0x34);
                pfVar13[3] = fVar58;
                pfVar31[1] = fVar58;
                pfVar31 = pfVar31 + 2;
                pfVar13 = pfVar13 + 4;
              } while (uVar40 != 0);
            }
            iVar26 = *(int *)(param_1 + 0x30);
          }
          *(uint *)(param_1 + 0x30) = iVar26 + uVar10;
        }
        else {
          pfVar31 = __dest;
          uVar11 = uVar10;
          do {
            uVar28 = uVar11;
            if (uVar40 <= uVar11) {
              uVar28 = uVar40;
            }
            pfVar23 = pfVar31;
            if (uVar28 != 0) {
              if (uVar28 != 1) {
                iVar26 = (uVar28 & 1) - uVar28;
                pfVar23 = pfVar13;
                pfVar34 = pfVar31;
                do {
                  fVar55 = *pfVar34;
                  pfVar13 = pfVar23 + 4;
                  pfVar31 = pfVar34 + 2;
                  fVar58 = *pfVar23;
                  *pfVar23 = fVar55;
                  fVar58 = fVar58 + (fVar55 - pfVar23[1]) * *(float *)(param_1 + 0x34);
                  pfVar23[1] = fVar58;
                  *pfVar34 = fVar58;
                  fVar55 = pfVar34[1];
                  fVar58 = pfVar23[2];
                  pfVar23[2] = fVar55;
                  fVar58 = fVar58 + (fVar55 - pfVar23[3]) * *(float *)(param_1 + 0x34);
                  iVar26 = iVar26 + 2;
                  pfVar23[3] = fVar58;
                  pfVar34[1] = fVar58;
                  pfVar23 = pfVar13;
                  pfVar34 = pfVar31;
                } while (iVar26 != 0);
              }
              pfVar23 = pfVar31;
              if ((uVar28 & 1) != 0) {
                fVar55 = *pfVar31;
                fVar58 = *pfVar13;
                *pfVar13 = fVar55;
                fVar58 = fVar58 + (fVar55 - pfVar13[1]) * *(float *)(param_1 + 0x34);
                pfVar13[1] = fVar58;
                pfVar13 = pfVar13 + 2;
                pfVar23 = pfVar31 + 1;
                *pfVar31 = fVar58;
              }
              iVar26 = *(int *)(param_1 + 0x30);
              iVar27 = *(int *)(param_1 + 0x20);
            }
            iVar26 = iVar26 + uVar28;
            *(int *)(param_1 + 0x30) = iVar26;
            if (iVar26 == iVar27) {
              pfVar13 = *(float **)(param_1 + 0x28);
              iVar26 = 0;
              *(undefined4 *)(param_1 + 0x30) = 0;
            }
            uVar11 = uVar11 - uVar28;
            uVar40 = iVar27 - iVar26;
            pfVar31 = pfVar23;
          } while (uVar11 != 0);
        }
        iVar26 = *(int *)(param_1 + 0x48);
        iVar27 = *(int *)(param_1 + 0x38);
        uVar40 = iVar27 - iVar26;
        pfVar13 = (float *)(*(long *)(param_1 + 0x40) + (ulong)(uint)(iVar26 << 1) * 4);
        if (uVar10 < uVar40) {
          if (uVar10 != 0) {
            pfVar31 = __dest;
            uVar40 = uVar10;
            if ((uVar10 & 1) != 0) {
              fVar55 = *__dest;
              fVar58 = *pfVar13;
              *pfVar13 = fVar55;
              uVar16 = (ulong)(uint)*(float *)(param_1 + 0x4c);
              fVar58 = fVar58 + (fVar55 - pfVar13[1]) * *(float *)(param_1 + 0x4c);
              pfVar13[1] = fVar58;
              pfVar13 = pfVar13 + 2;
              *__dest = fVar58;
              pfVar31 = pfVar1;
              uVar40 = uVar10 - 1;
            }
            if (uVar10 != 1) {
              do {
                fVar55 = *pfVar31;
                uVar40 = uVar40 - 2;
                fVar58 = *pfVar13;
                *pfVar13 = fVar55;
                fVar58 = fVar58 + (fVar55 - pfVar13[1]) * *(float *)(param_1 + 0x4c);
                pfVar13[1] = fVar58;
                *pfVar31 = fVar58;
                fVar55 = pfVar31[1];
                fVar58 = pfVar13[2];
                pfVar13[2] = fVar55;
                fVar58 = fVar58 + (fVar55 - pfVar13[3]) * *(float *)(param_1 + 0x4c);
                pfVar13[3] = fVar58;
                pfVar31[1] = fVar58;
                pfVar31 = pfVar31 + 2;
                pfVar13 = pfVar13 + 4;
              } while (uVar40 != 0);
            }
            iVar26 = *(int *)(param_1 + 0x48);
          }
          *(uint *)(param_1 + 0x48) = iVar26 + uVar10;
        }
        else {
          pfVar31 = __dest;
          uVar11 = uVar10;
          do {
            uVar28 = uVar11;
            if (uVar40 <= uVar11) {
              uVar28 = uVar40;
            }
            pfVar23 = pfVar31;
            if (uVar28 != 0) {
              if (uVar28 != 1) {
                iVar26 = (uVar28 & 1) - uVar28;
                pfVar23 = pfVar13;
                pfVar34 = pfVar31;
                do {
                  fVar55 = *pfVar34;
                  pfVar13 = pfVar23 + 4;
                  pfVar31 = pfVar34 + 2;
                  fVar58 = *pfVar23;
                  *pfVar23 = fVar55;
                  fVar58 = fVar58 + (fVar55 - pfVar23[1]) * *(float *)(param_1 + 0x4c);
                  pfVar23[1] = fVar58;
                  *pfVar34 = fVar58;
                  fVar55 = pfVar34[1];
                  fVar58 = pfVar23[2];
                  pfVar23[2] = fVar55;
                  fVar58 = fVar58 + (fVar55 - pfVar23[3]) * *(float *)(param_1 + 0x4c);
                  iVar26 = iVar26 + 2;
                  pfVar23[3] = fVar58;
                  pfVar34[1] = fVar58;
                  pfVar23 = pfVar13;
                  pfVar34 = pfVar31;
                } while (iVar26 != 0);
              }
              pfVar23 = pfVar31;
              if ((uVar28 & 1) != 0) {
                fVar55 = *pfVar31;
                fVar58 = *pfVar13;
                *pfVar13 = fVar55;
                fVar58 = fVar58 + (fVar55 - pfVar13[1]) * *(float *)(param_1 + 0x4c);
                pfVar13[1] = fVar58;
                pfVar13 = pfVar13 + 2;
                pfVar23 = pfVar31 + 1;
                *pfVar31 = fVar58;
              }
              iVar26 = *(int *)(param_1 + 0x48);
              iVar27 = *(int *)(param_1 + 0x38);
            }
            iVar26 = iVar26 + uVar28;
            *(int *)(param_1 + 0x48) = iVar26;
            if (iVar26 == iVar27) {
              pfVar13 = *(float **)(param_1 + 0x40);
              iVar26 = 0;
              *(undefined4 *)(param_1 + 0x48) = 0;
            }
            uVar11 = uVar11 - uVar28;
            uVar40 = iVar27 - iVar26;
            pfVar31 = pfVar23;
          } while (uVar11 != 0);
        }
        iVar26 = *(int *)(param_1 + 0x60);
        iVar27 = *(int *)(param_1 + 0x50);
        uVar40 = iVar27 - iVar26;
        pfVar13 = (float *)(*(long *)(param_1 + 0x58) + (ulong)(uint)(iVar26 << 1) * 4);
        if (uVar10 < uVar40) {
          if (uVar10 != 0) {
            pfVar31 = __dest;
            uVar40 = uVar10;
            if ((uVar10 & 1) != 0) {
              fVar55 = *__dest;
              fVar58 = *pfVar13;
              *pfVar13 = fVar55;
              uVar16 = (ulong)(uint)*(float *)(param_1 + 100);
              fVar58 = fVar58 + (fVar55 - pfVar13[1]) * *(float *)(param_1 + 100);
              pfVar13[1] = fVar58;
              pfVar13 = pfVar13 + 2;
              *__dest = fVar58;
              pfVar31 = pfVar1;
              uVar40 = uVar10 - 1;
            }
            if (uVar10 != 1) {
              do {
                fVar55 = *pfVar31;
                uVar40 = uVar40 - 2;
                fVar58 = *pfVar13;
                *pfVar13 = fVar55;
                fVar58 = fVar58 + (fVar55 - pfVar13[1]) * *(float *)(param_1 + 100);
                pfVar13[1] = fVar58;
                *pfVar31 = fVar58;
                fVar55 = pfVar31[1];
                fVar58 = pfVar13[2];
                pfVar13[2] = fVar55;
                fVar58 = fVar58 + (fVar55 - pfVar13[3]) * *(float *)(param_1 + 100);
                pfVar13[3] = fVar58;
                pfVar31[1] = fVar58;
                pfVar31 = pfVar31 + 2;
                pfVar13 = pfVar13 + 4;
              } while (uVar40 != 0);
            }
            iVar26 = *(int *)(param_1 + 0x60);
          }
          *(uint *)(param_1 + 0x60) = iVar26 + uVar10;
        }
        else {
          pfVar31 = __dest;
          uVar11 = uVar10;
          do {
            uVar28 = uVar11;
            if (uVar40 <= uVar11) {
              uVar28 = uVar40;
            }
            pfVar23 = pfVar31;
            if (uVar28 != 0) {
              if (uVar28 != 1) {
                iVar26 = (uVar28 & 1) - uVar28;
                pfVar23 = pfVar13;
                pfVar34 = pfVar31;
                do {
                  fVar55 = *pfVar34;
                  pfVar13 = pfVar23 + 4;
                  pfVar31 = pfVar34 + 2;
                  fVar58 = *pfVar23;
                  *pfVar23 = fVar55;
                  fVar58 = fVar58 + (fVar55 - pfVar23[1]) * *(float *)(param_1 + 100);
                  pfVar23[1] = fVar58;
                  *pfVar34 = fVar58;
                  fVar55 = pfVar34[1];
                  fVar58 = pfVar23[2];
                  pfVar23[2] = fVar55;
                  fVar58 = fVar58 + (fVar55 - pfVar23[3]) * *(float *)(param_1 + 100);
                  iVar26 = iVar26 + 2;
                  pfVar23[3] = fVar58;
                  pfVar34[1] = fVar58;
                  pfVar23 = pfVar13;
                  pfVar34 = pfVar31;
                } while (iVar26 != 0);
              }
              pfVar23 = pfVar31;
              if ((uVar28 & 1) != 0) {
                fVar55 = *pfVar31;
                fVar58 = *pfVar13;
                *pfVar13 = fVar55;
                fVar58 = fVar58 + (fVar55 - pfVar13[1]) * *(float *)(param_1 + 100);
                pfVar13[1] = fVar58;
                pfVar13 = pfVar13 + 2;
                pfVar23 = pfVar31 + 1;
                *pfVar31 = fVar58;
              }
              iVar26 = *(int *)(param_1 + 0x60);
              iVar27 = *(int *)(param_1 + 0x50);
            }
            iVar26 = iVar26 + uVar28;
            *(int *)(param_1 + 0x60) = iVar26;
            if (iVar26 == iVar27) {
              pfVar13 = *(float **)(param_1 + 0x58);
              iVar26 = 0;
              *(undefined4 *)(param_1 + 0x60) = 0;
            }
            uVar11 = uVar11 - uVar28;
            uVar40 = iVar27 - iVar26;
            pfVar31 = pfVar23;
          } while (uVar11 != 0);
        }
        FUN_02e1d0ac(param_1,__dest,uVar10);
        pfVar13 = local_d8[0];
        memset(local_d8[0],0,0x1800);
        fVar55 = (float)uVar16;
        if (*(int *)(param_1 + 0x128) != 0) {
          uVar33 = 0;
          lVar43 = *(long *)(param_1 + 0x140);
          do {
            if (uVar10 != 0) {
              lVar14 = lVar43 + uVar33 * 0xa8;
              plVar2 = (long *)(lVar14 + 0x98);
              puVar15 = (uint *)(lVar14 + 0xa0);
              uVar45 = (ulong)*puVar15;
              puVar18 = (uint *)(lVar43 + uVar33 * 0xa8 + 0x90);
              uVar40 = *puVar18;
              pfVar23 = __dest;
              pfVar31 = (float *)(*plVar2 + uVar45 * 4);
              uVar11 = uVar10;
              do {
                uVar40 = uVar40 - (int)uVar45;
                uVar28 = uVar11;
                if (uVar40 <= uVar11) {
                  uVar28 = uVar40;
                }
                uVar5 = uVar28 >> 2;
                uVar40 = uVar28 & 3;
                if (uVar5 == 0) {
                  pfVar34 = pfVar31;
                  pfVar37 = pfVar23;
                  if (uVar40 != 0) goto LAB_02e1ab40;
                }
                else {
                  uVar6 = uVar28 >> 2 & 3;
                  pfVar29 = (float *)(ulong)uVar5;
                  pfVar34 = pfVar31;
                  pfVar30 = (float *)(ulong)(uVar5 - 1);
                  pfVar37 = pfVar23;
                  if (2 < uVar5 - 1) {
                    iVar26 = uVar5 - uVar6;
                    do {
                      uVar57 = *(undefined8 *)(pfVar31 + 2);
                      uVar56 = *(undefined8 *)pfVar31;
                      iVar26 = iVar26 + -4;
                      uVar59 = *(undefined8 *)pfVar23;
                      *(undefined8 *)(pfVar31 + 2) = *(undefined8 *)(pfVar23 + 2);
                      *(undefined8 *)pfVar31 = uVar59;
                      *(undefined8 *)(pfVar23 + 2) = uVar57;
                      *(undefined8 *)pfVar23 = uVar56;
                      uVar57 = *(undefined8 *)(pfVar31 + 6);
                      uVar56 = *(undefined8 *)(pfVar31 + 4);
                      uVar59 = *(undefined8 *)(pfVar23 + 4);
                      *(undefined8 *)(pfVar31 + 6) = *(undefined8 *)(pfVar23 + 6);
                      *(undefined8 *)(pfVar31 + 4) = uVar59;
                      *(undefined8 *)(pfVar23 + 6) = uVar57;
                      *(undefined8 *)(pfVar23 + 4) = uVar56;
                      uVar57 = *(undefined8 *)(pfVar31 + 10);
                      uVar56 = *(undefined8 *)(pfVar31 + 8);
                      uVar59 = *(undefined8 *)(pfVar23 + 8);
                      *(undefined8 *)(pfVar31 + 10) = *(undefined8 *)(pfVar23 + 10);
                      *(undefined8 *)(pfVar31 + 8) = uVar59;
                      *(undefined8 *)(pfVar23 + 10) = uVar57;
                      *(undefined8 *)(pfVar23 + 8) = uVar56;
                      uVar57 = *(undefined8 *)(pfVar31 + 0xe);
                      uVar56 = *(undefined8 *)(pfVar31 + 0xc);
                      uVar59 = *(undefined8 *)(pfVar23 + 0xc);
                      *(undefined8 *)(pfVar31 + 0xe) = *(undefined8 *)(pfVar23 + 0xe);
                      *(undefined8 *)(pfVar31 + 0xc) = uVar59;
                      *(undefined8 *)(pfVar23 + 0xe) = uVar57;
                      *(undefined8 *)(pfVar23 + 0xc) = uVar56;
                      pfVar31 = pfVar31 + 0x10;
                      pfVar23 = pfVar23 + 0x10;
                      pfVar29 = pfVar31;
                      pfVar34 = pfVar31;
                      pfVar30 = pfVar23;
                      pfVar37 = pfVar23;
                    } while (iVar26 != 0);
                  }
                  pfVar23 = pfVar30;
                  pfVar31 = pfVar29;
                  if (uVar6 != 0) {
                    iVar26 = -uVar6;
                    do {
                      pfVar31 = pfVar34 + 4;
                      uVar57 = *(undefined8 *)(pfVar34 + 2);
                      uVar56 = *(undefined8 *)pfVar34;
                      bVar7 = iVar26 != -1;
                      iVar26 = iVar26 + 1;
                      pfVar23 = pfVar37 + 4;
                      uVar59 = *(undefined8 *)pfVar37;
                      *(undefined8 *)(pfVar34 + 2) = *(undefined8 *)(pfVar37 + 2);
                      *(undefined8 *)pfVar34 = uVar59;
                      *(undefined8 *)(pfVar37 + 2) = uVar57;
                      *(undefined8 *)pfVar37 = uVar56;
                      pfVar34 = pfVar31;
                      pfVar37 = pfVar23;
                    } while (bVar7);
                  }
                  pfVar34 = pfVar31;
                  pfVar37 = pfVar23;
                  if (uVar40 != 0) {
LAB_02e1ab40:
                    fVar55 = *pfVar31;
                    pfVar34 = pfVar31 + 1;
                    *pfVar31 = *pfVar37;
                    pfVar23 = pfVar37 + 1;
                    *pfVar37 = fVar55;
                    if (1 < uVar40) {
                      fVar55 = pfVar31[1];
                      pfVar31[1] = pfVar37[1];
                      pfVar37[1] = fVar55;
                      if (uVar40 == 2) {
                        pfVar34 = pfVar31 + 2;
                        pfVar23 = pfVar37 + 2;
                      }
                      else {
                        fVar55 = pfVar31[2];
                        pfVar31[2] = pfVar37[2];
                        pfVar34 = pfVar31 + 3;
                        pfVar23 = pfVar37 + 3;
                        pfVar37[2] = fVar55;
                      }
                    }
                  }
                }
                uVar5 = *puVar15 + uVar28;
                uVar45 = (ulong)uVar5;
                *puVar15 = uVar5;
                uVar40 = *puVar18;
                if (uVar5 == uVar40) {
                  pfVar34 = (float *)*plVar2;
                  uVar45 = 0;
                  *puVar15 = 0;
                }
                uVar11 = uVar11 - uVar28;
                pfVar31 = pfVar34;
              } while (uVar11 != 0);
              lVar43 = *(long *)(param_1 + 0x140);
            }
            uVar40 = (uint)uVar33;
            FUN_02e1ead4(lVar43 + uVar33 * 0xa8,__dest,local_d8[uVar40 & 1],local_d8[uVar40 & 1 | 2]
                         ,local_d8[uVar40 & 1 | 4],uVar10);
            fVar55 = (float)uVar16;
            uVar33 = uVar33 + 1;
            if (*(uint *)(param_1 + 0x128) <= uVar33) break;
            lVar43 = *(long *)(param_1 + 0x140);
          } while( true );
        }
        pfVar29 = local_b0;
        pfVar37 = local_b8;
        pfVar34 = local_d8[3];
        pfVar23 = local_d8[2];
        pfVar31 = local_d8[1];
        fVar62 = *(float *)(param_1 + 0x124) * 1.4142135;
        fVar61 = *(float *)(param_1 + 0x70);
        fVar58 = *(float *)(param_1 + 0x74);
        if (uVar10 == 0) {
          fVar55 = fVar58;
        }
        else {
          fVar46 = *(float *)(param_1 + 0x78);
          pfVar30 = (float *)((long)pfVar13 + uVar12);
          if ((float *)((long)pfVar13 + uVar12) <= pfVar13 + 1) {
            pfVar30 = pfVar13 + 1;
          }
          if (((uint)(~(ulong)pfVar13 + (long)pfVar30) >> 2 & 1) == 0) {
            fVar55 = *pfVar13;
            fVar58 = (fVar55 * fVar62 - fVar61) + fVar58 * fVar46;
            *pfVar13 = fVar58;
            pfVar17 = pfVar13 + 1;
            fVar61 = fVar55 * fVar62;
            fVar55 = fVar58;
          }
          else {
            pfVar17 = pfVar13;
          }
          if (3 < ~(ulong)pfVar13 + (long)pfVar30) {
            do {
              fVar55 = (*pfVar17 * fVar62 - fVar61) + fVar58 * fVar46;
              fVar61 = pfVar17[1] * fVar62;
              fVar58 = (fVar61 - *pfVar17 * fVar62) + fVar55 * fVar46;
              pfVar30 = pfVar17 + 2;
              *pfVar17 = fVar55;
              pfVar17[1] = fVar58;
              pfVar17 = pfVar30;
              fVar55 = fVar58;
            } while (pfVar30 < pfVar13 + uVar10);
          }
        }
        *(float *)(param_1 + 0x70) = fVar61;
        *(float *)(param_1 + 0x74) = fVar55;
        fVar61 = *(float *)(param_1 + 0x7c);
        fVar58 = *(float *)(param_1 + 0x80);
        if (uVar10 != 0) {
          pfVar30 = local_d8[1] + uVar10;
          fVar46 = *(float *)(param_1 + 0x84);
          pfVar17 = pfVar30;
          if (pfVar30 <= local_d8[1] + 1) {
            pfVar17 = local_d8[1] + 1;
          }
          fVar47 = fVar58;
          pfVar20 = local_d8[1];
          if (((uint)(~(ulong)local_d8[1] + (long)pfVar17) >> 2 & 1) == 0) {
            fVar55 = *local_d8[1];
            fVar47 = (fVar55 * fVar62 - fVar61) + fVar58 * fVar46;
            *local_d8[1] = fVar47;
            fVar61 = fVar55 * fVar62;
            fVar55 = fVar47;
            pfVar20 = local_d8[1] + 1;
          }
          fVar58 = fVar55;
          if (3 < ~(ulong)local_d8[1] + (long)pfVar17) {
            do {
              fVar55 = (*pfVar20 * fVar62 - fVar61) + fVar47 * fVar46;
              fVar61 = pfVar20[1] * fVar62;
              fVar47 = (fVar61 - *pfVar20 * fVar62) + fVar55 * fVar46;
              pfVar17 = pfVar20 + 2;
              *pfVar20 = fVar55;
              pfVar20[1] = fVar47;
              pfVar20 = pfVar17;
              fVar58 = fVar47;
            } while (pfVar17 < pfVar30);
          }
        }
        *(float *)(param_1 + 0x7c) = fVar61;
        *(float *)(param_1 + 0x80) = fVar58;
        fVar61 = *(float *)(param_1 + 0x88);
        fVar55 = *(float *)(param_1 + 0x8c);
        if (uVar10 != 0) {
          pfVar30 = local_d8[2] + uVar10;
          fVar46 = *(float *)(param_1 + 0x90);
          pfVar17 = pfVar30;
          if (pfVar30 <= local_d8[2] + 1) {
            pfVar17 = local_d8[2] + 1;
          }
          fVar47 = fVar55;
          pfVar20 = local_d8[2];
          if (((uint)(~(ulong)local_d8[2] + (long)pfVar17) >> 2 & 1) == 0) {
            fVar58 = *local_d8[2];
            fVar47 = (fVar58 * fVar62 - fVar61) + fVar55 * fVar46;
            *local_d8[2] = fVar47;
            fVar61 = fVar58 * fVar62;
            fVar58 = fVar47;
            pfVar20 = local_d8[2] + 1;
          }
          fVar55 = fVar58;
          if (3 < ~(ulong)local_d8[2] + (long)pfVar17) {
            do {
              fVar55 = (*pfVar20 * fVar62 - fVar61) + fVar47 * fVar46;
              fVar61 = pfVar20[1] * fVar62;
              fVar47 = (fVar61 - *pfVar20 * fVar62) + fVar55 * fVar46;
              pfVar17 = pfVar20 + 2;
              *pfVar20 = fVar55;
              pfVar20[1] = fVar47;
              pfVar20 = pfVar17;
              fVar55 = fVar47;
            } while (pfVar17 < pfVar30);
          }
        }
        *(float *)(param_1 + 0x88) = fVar61;
        *(float *)(param_1 + 0x8c) = fVar55;
        fVar61 = *(float *)(param_1 + 0x94);
        fVar58 = *(float *)(param_1 + 0x98);
        if (uVar10 != 0) {
          pfVar30 = local_d8[3] + uVar10;
          fVar46 = *(float *)(param_1 + 0x9c);
          pfVar17 = pfVar30;
          if (pfVar30 <= local_d8[3] + 1) {
            pfVar17 = local_d8[3] + 1;
          }
          fVar47 = fVar58;
          pfVar20 = local_d8[3];
          if (((uint)(~(ulong)local_d8[3] + (long)pfVar17) >> 2 & 1) == 0) {
            fVar55 = *local_d8[3];
            fVar47 = (fVar55 * fVar62 - fVar61) + fVar58 * fVar46;
            *local_d8[3] = fVar47;
            fVar61 = fVar55 * fVar62;
            fVar55 = fVar47;
            pfVar20 = local_d8[3] + 1;
          }
          fVar58 = fVar55;
          if (3 < ~(ulong)local_d8[3] + (long)pfVar17) {
            do {
              fVar55 = (*pfVar20 * fVar62 - fVar61) + fVar47 * fVar46;
              fVar61 = pfVar20[1] * fVar62;
              fVar47 = (fVar61 - *pfVar20 * fVar62) + fVar55 * fVar46;
              pfVar17 = pfVar20 + 2;
              *pfVar20 = fVar55;
              pfVar20[1] = fVar47;
              pfVar20 = pfVar17;
              fVar58 = fVar47;
            } while (pfVar17 < pfVar30);
          }
        }
        *(float *)(param_1 + 0x94) = fVar61;
        *(float *)(param_1 + 0x98) = fVar58;
        fVar61 = *(float *)(param_1 + 0xa0);
        fVar55 = *(float *)(param_1 + 0xa4);
        if (uVar10 != 0) {
          pfVar30 = local_b8 + uVar10;
          fVar46 = *(float *)(param_1 + 0xa8);
          pfVar17 = pfVar30;
          if (pfVar30 <= local_b8 + 1) {
            pfVar17 = local_b8 + 1;
          }
          fVar47 = fVar55;
          pfVar20 = local_b8;
          if (((uint)(~(ulong)local_b8 + (long)pfVar17) >> 2 & 1) == 0) {
            fVar58 = *local_b8;
            fVar47 = (fVar58 * fVar62 - fVar61) + fVar55 * fVar46;
            *local_b8 = fVar47;
            fVar61 = fVar58 * fVar62;
            fVar58 = fVar47;
            pfVar20 = local_b8 + 1;
          }
          fVar55 = fVar58;
          if (3 < ~(ulong)local_b8 + (long)pfVar17) {
            do {
              fVar55 = (*pfVar20 * fVar62 - fVar61) + fVar47 * fVar46;
              fVar61 = pfVar20[1] * fVar62;
              fVar47 = (fVar61 - *pfVar20 * fVar62) + fVar55 * fVar46;
              pfVar17 = pfVar20 + 2;
              *pfVar20 = fVar55;
              pfVar20[1] = fVar47;
              pfVar20 = pfVar17;
              fVar55 = fVar47;
            } while (pfVar17 < pfVar30);
          }
        }
        *(float *)(param_1 + 0xa0) = fVar61;
        *(float *)(param_1 + 0xa4) = fVar55;
        fVar61 = *(float *)(param_1 + 0xac);
        fVar58 = *(float *)(param_1 + 0xb0);
        if (uVar10 != 0) {
          pfVar30 = local_b0 + uVar10;
          fVar46 = *(float *)(param_1 + 0xb4);
          pfVar17 = pfVar30;
          if (pfVar30 <= local_b0 + 1) {
            pfVar17 = local_b0 + 1;
          }
          fVar47 = fVar58;
          pfVar20 = local_b0;
          if (((uint)(~(ulong)local_b0 + (long)pfVar17) >> 2 & 1) == 0) {
            fVar55 = *local_b0;
            fVar47 = (fVar55 * fVar62 - fVar61) + fVar58 * fVar46;
            *local_b0 = fVar47;
            fVar61 = fVar55 * fVar62;
            fVar55 = fVar47;
            pfVar20 = local_b0 + 1;
          }
          fVar58 = fVar55;
          if (3 < ~(ulong)local_b0 + (long)pfVar17) {
            do {
              fVar55 = (*pfVar20 * fVar62 - fVar61) + fVar47 * fVar46;
              fVar61 = pfVar20[1] * fVar62;
              fVar47 = (fVar61 - *pfVar20 * fVar62) + fVar55 * fVar46;
              pfVar17 = pfVar20 + 2;
              *pfVar20 = fVar55;
              pfVar20[1] = fVar47;
              pfVar20 = pfVar17;
              fVar58 = fVar47;
            } while (pfVar17 < pfVar30);
          }
        }
        *(float *)(param_1 + 0xac) = fVar61;
        *(float *)(param_1 + 0xb0) = fVar58;
        uVar16 = (ulong)uVar41;
        fVar58 = *(float *)(param_1 + 0x1ac);
        fVar61 = *(float *)(*(long *)(param_1 + 0x158) + 0x4c);
        fVar55 = *(float *)(param_1 + 0x1b4);
        fVar62 = *(float *)(*(long *)(param_1 + 0x158) + 0x54);
        lVar43 = *param_2;
        pfVar30 = (float *)(lVar43 + (ulong)uVar41 * 4);
        bVar7 = false;
        if ((fVar61 == fVar58) && (bVar7 = false, !NAN(fVar62) && !NAN(fVar55))) {
          bVar7 = fVar62 == fVar55;
        }
        if (bVar7) {
          if (uVar10 != 0) {
            uVar33 = lVar43 + uVar16 * 4;
            pfVar17 = (float *)(uVar33 + 0x10);
            pfVar20 = pfVar30 + uVar10;
            pfVar21 = pfVar20;
            if (pfVar20 <= pfVar17) {
              pfVar21 = pfVar17;
            }
            uVar33 = ~uVar33 + (long)pfVar21;
            pfVar21 = pfVar30;
            pfVar17 = pfVar13;
            pfVar19 = local_d8[1];
            if (((uint)uVar33 >> 4 & 1) == 0) {
              pfVar21 = pfVar30 + 4;
              pfVar17 = pfVar13 + 4;
              uVar56 = *(undefined8 *)pfVar13;
              pfVar19 = local_d8[1] + 4;
              uVar57 = *(undefined8 *)local_d8[1];
              *(ulong *)(pfVar30 + 2) =
                   CONCAT44((float)((ulong)*(undefined8 *)(pfVar30 + 2) >> 0x20) * fVar58 +
                            fVar55 * ((float)((ulong)*(undefined8 *)(local_d8[1] + 2) >> 0x20) +
                                     (float)((ulong)*(undefined8 *)(pfVar13 + 2) >> 0x20)),
                            (float)*(undefined8 *)(pfVar30 + 2) * fVar58 +
                            fVar55 * ((float)*(undefined8 *)(local_d8[1] + 2) +
                                     (float)*(undefined8 *)(pfVar13 + 2)));
              *(ulong *)pfVar30 =
                   CONCAT44((float)((ulong)*(undefined8 *)pfVar30 >> 0x20) * fVar58 +
                            fVar55 * ((float)((ulong)uVar57 >> 0x20) +
                                     (float)((ulong)uVar56 >> 0x20)),
                            (float)*(undefined8 *)pfVar30 * fVar58 +
                            fVar55 * ((float)uVar57 + (float)uVar56));
            }
            if (0xf < uVar33) {
              do {
                uVar56 = *(undefined8 *)pfVar17;
                uVar57 = *(undefined8 *)pfVar19;
                *(ulong *)(pfVar21 + 2) =
                     CONCAT44((float)((ulong)*(undefined8 *)(pfVar21 + 2) >> 0x20) * fVar58 +
                              fVar55 * ((float)((ulong)*(undefined8 *)(pfVar19 + 2) >> 0x20) +
                                       (float)((ulong)*(undefined8 *)(pfVar17 + 2) >> 0x20)),
                              (float)*(undefined8 *)(pfVar21 + 2) * fVar58 +
                              fVar55 * ((float)*(undefined8 *)(pfVar19 + 2) +
                                       (float)*(undefined8 *)(pfVar17 + 2)));
                *(ulong *)pfVar21 =
                     CONCAT44((float)((ulong)*(undefined8 *)pfVar21 >> 0x20) * fVar58 +
                              fVar55 * ((float)((ulong)uVar57 >> 0x20) +
                                       (float)((ulong)uVar56 >> 0x20)),
                              (float)*(undefined8 *)pfVar21 * fVar58 +
                              fVar55 * ((float)uVar57 + (float)uVar56));
                pfVar22 = pfVar17 + 6;
                uVar56 = *(undefined8 *)(pfVar17 + 4);
                uVar57 = *(undefined8 *)(pfVar19 + 4);
                pfVar17 = pfVar17 + 8;
                *(ulong *)(pfVar21 + 6) =
                     CONCAT44((float)((ulong)*(undefined8 *)(pfVar21 + 6) >> 0x20) * fVar58 +
                              fVar55 * ((float)((ulong)*(undefined8 *)(pfVar19 + 6) >> 0x20) +
                                       (float)((ulong)*(undefined8 *)pfVar22 >> 0x20)),
                              (float)*(undefined8 *)(pfVar21 + 6) * fVar58 +
                              fVar55 * ((float)*(undefined8 *)(pfVar19 + 6) +
                                       (float)*(undefined8 *)pfVar22));
                *(ulong *)(pfVar21 + 4) =
                     CONCAT44((float)((ulong)*(undefined8 *)(pfVar21 + 4) >> 0x20) * fVar58 +
                              fVar55 * ((float)((ulong)uVar57 >> 0x20) +
                                       (float)((ulong)uVar56 >> 0x20)),
                              (float)*(undefined8 *)(pfVar21 + 4) * fVar58 +
                              fVar55 * ((float)uVar57 + (float)uVar56));
                pfVar21 = pfVar21 + 8;
                pfVar19 = pfVar19 + 8;
              } while (pfVar21 < pfVar20);
            }
          }
        }
        else if (uVar10 != 0) {
          fVar61 = fVar61 - fVar58;
          fVar46 = (fVar62 - fVar55) / (float)uVar10;
          pfVar17 = pfVar30;
          pfVar20 = pfVar13;
          pfVar21 = local_d8[1];
          fVar62 = fVar55;
          do {
            fVar49 = *pfVar17 * fVar58;
            fVar58 = fVar58 + fVar61 / (float)uVar10;
            fVar47 = fVar55 * *pfVar20;
            fVar48 = fVar62 * *pfVar21;
            fVar55 = fVar55 + fVar46;
            fVar62 = fVar62 + fVar46;
            pfVar19 = pfVar17 + 1;
            *pfVar17 = fVar49 + fVar47 + fVar48;
            pfVar17 = pfVar19;
            pfVar20 = pfVar20 + 1;
            pfVar21 = pfVar21 + 1;
          } while (pfVar19 < pfVar30 + uVar10);
        }
        fVar55 = *(float *)(param_1 + 0x1b4);
        fVar58 = *(float *)(*(long *)(param_1 + 0x158) + 0x54);
        if (fVar58 == fVar55) {
          if (uVar10 != 0) {
            uVar33 = lVar43 + uVar16 * 4;
            pfVar17 = (float *)(uVar33 + 0x10);
            pfVar20 = pfVar30 + uVar10;
            pfVar21 = pfVar20;
            if (pfVar20 <= pfVar17) {
              pfVar21 = pfVar17;
            }
            uVar33 = ~uVar33 + (long)pfVar21;
            uVar40 = ((uint)(uVar33 >> 4) & 0xfffffff) + 1;
            uVar45 = (ulong)uVar40 & 3;
            pfVar17 = local_d8[2];
            pfVar21 = pfVar30;
            pfVar19 = local_d8[3];
            if ((uVar40 & 3) != 0) {
              pfVar22 = local_d8[2];
              pfVar32 = local_d8[3];
              pfVar39 = pfVar30;
              do {
                pfVar21 = pfVar39 + 4;
                uVar45 = uVar45 - 1;
                pfVar17 = pfVar22 + 4;
                uVar56 = *(undefined8 *)pfVar22;
                pfVar19 = pfVar32 + 4;
                uVar57 = *(undefined8 *)pfVar32;
                *(ulong *)(pfVar39 + 2) =
                     CONCAT44((float)((ulong)*(undefined8 *)(pfVar39 + 2) >> 0x20) +
                              fVar55 * ((float)((ulong)*(undefined8 *)(pfVar32 + 2) >> 0x20) +
                                       (float)((ulong)*(undefined8 *)(pfVar22 + 2) >> 0x20)),
                              (float)*(undefined8 *)(pfVar39 + 2) +
                              fVar55 * ((float)*(undefined8 *)(pfVar32 + 2) +
                                       (float)*(undefined8 *)(pfVar22 + 2)));
                *(ulong *)pfVar39 =
                     CONCAT44((float)((ulong)*(undefined8 *)pfVar39 >> 0x20) +
                              fVar55 * ((float)((ulong)uVar57 >> 0x20) +
                                       (float)((ulong)uVar56 >> 0x20)),
                              (float)*(undefined8 *)pfVar39 +
                              fVar55 * ((float)uVar57 + (float)uVar56));
                pfVar22 = pfVar17;
                pfVar32 = pfVar19;
                pfVar39 = pfVar21;
              } while (uVar45 != 0);
            }
            if (0x2f < uVar33) {
              do {
                uVar56 = *(undefined8 *)pfVar17;
                uVar57 = *(undefined8 *)pfVar19;
                *(ulong *)(pfVar21 + 2) =
                     CONCAT44((float)((ulong)*(undefined8 *)(pfVar21 + 2) >> 0x20) +
                              fVar55 * ((float)((ulong)*(undefined8 *)(pfVar19 + 2) >> 0x20) +
                                       (float)((ulong)*(undefined8 *)(pfVar17 + 2) >> 0x20)),
                              (float)*(undefined8 *)(pfVar21 + 2) +
                              fVar55 * ((float)*(undefined8 *)(pfVar19 + 2) +
                                       (float)*(undefined8 *)(pfVar17 + 2)));
                *(ulong *)pfVar21 =
                     CONCAT44((float)((ulong)*(undefined8 *)pfVar21 >> 0x20) +
                              fVar55 * ((float)((ulong)uVar57 >> 0x20) +
                                       (float)((ulong)uVar56 >> 0x20)),
                              (float)*(undefined8 *)pfVar21 +
                              fVar55 * ((float)uVar57 + (float)uVar56));
                uVar56 = *(undefined8 *)(pfVar17 + 4);
                uVar57 = *(undefined8 *)(pfVar19 + 4);
                *(ulong *)(pfVar21 + 6) =
                     CONCAT44((float)((ulong)*(undefined8 *)(pfVar21 + 6) >> 0x20) +
                              fVar55 * ((float)((ulong)*(undefined8 *)(pfVar19 + 6) >> 0x20) +
                                       (float)((ulong)*(undefined8 *)(pfVar17 + 6) >> 0x20)),
                              (float)*(undefined8 *)(pfVar21 + 6) +
                              fVar55 * ((float)*(undefined8 *)(pfVar19 + 6) +
                                       (float)*(undefined8 *)(pfVar17 + 6)));
                *(ulong *)(pfVar21 + 4) =
                     CONCAT44((float)((ulong)*(undefined8 *)(pfVar21 + 4) >> 0x20) +
                              fVar55 * ((float)((ulong)uVar57 >> 0x20) +
                                       (float)((ulong)uVar56 >> 0x20)),
                              (float)*(undefined8 *)(pfVar21 + 4) +
                              fVar55 * ((float)uVar57 + (float)uVar56));
                uVar56 = *(undefined8 *)(pfVar17 + 8);
                uVar57 = *(undefined8 *)(pfVar19 + 8);
                *(ulong *)(pfVar21 + 10) =
                     CONCAT44((float)((ulong)*(undefined8 *)(pfVar21 + 10) >> 0x20) +
                              fVar55 * ((float)((ulong)*(undefined8 *)(pfVar19 + 10) >> 0x20) +
                                       (float)((ulong)*(undefined8 *)(pfVar17 + 10) >> 0x20)),
                              (float)*(undefined8 *)(pfVar21 + 10) +
                              fVar55 * ((float)*(undefined8 *)(pfVar19 + 10) +
                                       (float)*(undefined8 *)(pfVar17 + 10)));
                *(ulong *)(pfVar21 + 8) =
                     CONCAT44((float)((ulong)*(undefined8 *)(pfVar21 + 8) >> 0x20) +
                              fVar55 * ((float)((ulong)uVar57 >> 0x20) +
                                       (float)((ulong)uVar56 >> 0x20)),
                              (float)*(undefined8 *)(pfVar21 + 8) +
                              fVar55 * ((float)uVar57 + (float)uVar56));
                pfVar22 = pfVar17 + 0xe;
                uVar56 = *(undefined8 *)(pfVar17 + 0xc);
                uVar57 = *(undefined8 *)(pfVar19 + 0xc);
                pfVar17 = pfVar17 + 0x10;
                *(ulong *)(pfVar21 + 0xe) =
                     CONCAT44((float)((ulong)*(undefined8 *)(pfVar21 + 0xe) >> 0x20) +
                              fVar55 * ((float)((ulong)*(undefined8 *)(pfVar19 + 0xe) >> 0x20) +
                                       (float)((ulong)*(undefined8 *)pfVar22 >> 0x20)),
                              (float)*(undefined8 *)(pfVar21 + 0xe) +
                              fVar55 * ((float)*(undefined8 *)(pfVar19 + 0xe) +
                                       (float)*(undefined8 *)pfVar22));
                *(ulong *)(pfVar21 + 0xc) =
                     CONCAT44((float)((ulong)*(undefined8 *)(pfVar21 + 0xc) >> 0x20) +
                              fVar55 * ((float)((ulong)uVar57 >> 0x20) +
                                       (float)((ulong)uVar56 >> 0x20)),
                              (float)*(undefined8 *)(pfVar21 + 0xc) +
                              fVar55 * ((float)uVar57 + (float)uVar56));
                pfVar21 = pfVar21 + 0x10;
                pfVar19 = pfVar19 + 0x10;
              } while (pfVar21 < pfVar20);
            }
          }
        }
        else if (uVar10 != 0) {
          fVar61 = (fVar58 - fVar55) / (float)uVar10;
          pfVar17 = pfVar30;
          pfVar20 = local_d8[2];
          pfVar21 = local_d8[3];
          fVar58 = fVar55;
          do {
            fVar62 = fVar55 * *pfVar20;
            fVar46 = fVar58 * *pfVar21;
            fVar55 = fVar55 + fVar61;
            fVar58 = fVar58 + fVar61;
            pfVar19 = pfVar17 + 1;
            *pfVar17 = *pfVar17 + fVar62 + fVar46;
            pfVar17 = pfVar19;
            pfVar20 = pfVar20 + 1;
            pfVar21 = pfVar21 + 1;
          } while (pfVar19 < pfVar30 + uVar10);
        }
        if (*(char *)(param_1 + 0x138) != '\0') {
          fVar55 = *(float *)(param_1 + 0x1b0) * *(float *)(param_1 + 0x19c);
          fVar58 = *(float *)(*(long *)(param_1 + 0x158) + 0x50) *
                   *(float *)(*(long *)(param_1 + 0x158) + 0x3c);
          if (fVar58 == fVar55) {
            if (uVar10 != 0) {
              uVar33 = lVar43 + uVar16 * 4;
              pfVar17 = (float *)(uVar33 + 0x10);
              pfVar20 = pfVar30 + uVar10;
              pfVar21 = pfVar20;
              if (pfVar20 <= pfVar17) {
                pfVar21 = pfVar17;
              }
              uVar33 = ~uVar33 + (long)pfVar21;
              uVar40 = ((uint)(uVar33 >> 4) & 0xfffffff) + 1;
              uVar45 = (ulong)uVar40 & 3;
              pfVar17 = pfVar4;
              pfVar21 = pfVar30;
              pfVar19 = pfVar3;
              if ((uVar40 & 3) != 0) {
                pfVar22 = pfVar4;
                pfVar32 = pfVar3;
                pfVar39 = pfVar30;
                do {
                  pfVar21 = pfVar39 + 4;
                  uVar45 = uVar45 - 1;
                  pfVar17 = pfVar22 + 4;
                  uVar56 = *(undefined8 *)pfVar22;
                  pfVar19 = pfVar32 + 4;
                  uVar57 = *(undefined8 *)pfVar32;
                  *(ulong *)(pfVar39 + 2) =
                       CONCAT44((float)((ulong)*(undefined8 *)(pfVar39 + 2) >> 0x20) +
                                fVar55 * ((float)((ulong)*(undefined8 *)(pfVar32 + 2) >> 0x20) +
                                         (float)((ulong)*(undefined8 *)(pfVar22 + 2) >> 0x20)),
                                (float)*(undefined8 *)(pfVar39 + 2) +
                                fVar55 * ((float)*(undefined8 *)(pfVar32 + 2) +
                                         (float)*(undefined8 *)(pfVar22 + 2)));
                  *(ulong *)pfVar39 =
                       CONCAT44((float)((ulong)*(undefined8 *)pfVar39 >> 0x20) +
                                fVar55 * ((float)((ulong)uVar57 >> 0x20) +
                                         (float)((ulong)uVar56 >> 0x20)),
                                (float)*(undefined8 *)pfVar39 +
                                fVar55 * ((float)uVar57 + (float)uVar56));
                  pfVar22 = pfVar17;
                  pfVar32 = pfVar19;
                  pfVar39 = pfVar21;
                } while (uVar45 != 0);
              }
              if (0x2f < uVar33) {
                do {
                  uVar56 = *(undefined8 *)pfVar17;
                  uVar57 = *(undefined8 *)pfVar19;
                  *(ulong *)(pfVar21 + 2) =
                       CONCAT44((float)((ulong)*(undefined8 *)(pfVar21 + 2) >> 0x20) +
                                fVar55 * ((float)((ulong)*(undefined8 *)(pfVar19 + 2) >> 0x20) +
                                         (float)((ulong)*(undefined8 *)(pfVar17 + 2) >> 0x20)),
                                (float)*(undefined8 *)(pfVar21 + 2) +
                                fVar55 * ((float)*(undefined8 *)(pfVar19 + 2) +
                                         (float)*(undefined8 *)(pfVar17 + 2)));
                  *(ulong *)pfVar21 =
                       CONCAT44((float)((ulong)*(undefined8 *)pfVar21 >> 0x20) +
                                fVar55 * ((float)((ulong)uVar57 >> 0x20) +
                                         (float)((ulong)uVar56 >> 0x20)),
                                (float)*(undefined8 *)pfVar21 +
                                fVar55 * ((float)uVar57 + (float)uVar56));
                  uVar56 = *(undefined8 *)(pfVar17 + 4);
                  uVar57 = *(undefined8 *)(pfVar19 + 4);
                  *(ulong *)(pfVar21 + 6) =
                       CONCAT44((float)((ulong)*(undefined8 *)(pfVar21 + 6) >> 0x20) +
                                fVar55 * ((float)((ulong)*(undefined8 *)(pfVar19 + 6) >> 0x20) +
                                         (float)((ulong)*(undefined8 *)(pfVar17 + 6) >> 0x20)),
                                (float)*(undefined8 *)(pfVar21 + 6) +
                                fVar55 * ((float)*(undefined8 *)(pfVar19 + 6) +
                                         (float)*(undefined8 *)(pfVar17 + 6)));
                  *(ulong *)(pfVar21 + 4) =
                       CONCAT44((float)((ulong)*(undefined8 *)(pfVar21 + 4) >> 0x20) +
                                fVar55 * ((float)((ulong)uVar57 >> 0x20) +
                                         (float)((ulong)uVar56 >> 0x20)),
                                (float)*(undefined8 *)(pfVar21 + 4) +
                                fVar55 * ((float)uVar57 + (float)uVar56));
                  uVar56 = *(undefined8 *)(pfVar17 + 8);
                  uVar57 = *(undefined8 *)(pfVar19 + 8);
                  *(ulong *)(pfVar21 + 10) =
                       CONCAT44((float)((ulong)*(undefined8 *)(pfVar21 + 10) >> 0x20) +
                                fVar55 * ((float)((ulong)*(undefined8 *)(pfVar19 + 10) >> 0x20) +
                                         (float)((ulong)*(undefined8 *)(pfVar17 + 10) >> 0x20)),
                                (float)*(undefined8 *)(pfVar21 + 10) +
                                fVar55 * ((float)*(undefined8 *)(pfVar19 + 10) +
                                         (float)*(undefined8 *)(pfVar17 + 10)));
                  *(ulong *)(pfVar21 + 8) =
                       CONCAT44((float)((ulong)*(undefined8 *)(pfVar21 + 8) >> 0x20) +
                                fVar55 * ((float)((ulong)uVar57 >> 0x20) +
                                         (float)((ulong)uVar56 >> 0x20)),
                                (float)*(undefined8 *)(pfVar21 + 8) +
                                fVar55 * ((float)uVar57 + (float)uVar56));
                  pfVar22 = pfVar17 + 0xe;
                  uVar56 = *(undefined8 *)(pfVar17 + 0xc);
                  uVar57 = *(undefined8 *)(pfVar19 + 0xc);
                  pfVar17 = pfVar17 + 0x10;
                  *(ulong *)(pfVar21 + 0xe) =
                       CONCAT44((float)((ulong)*(undefined8 *)(pfVar21 + 0xe) >> 0x20) +
                                fVar55 * ((float)((ulong)*(undefined8 *)(pfVar19 + 0xe) >> 0x20) +
                                         (float)((ulong)*(undefined8 *)pfVar22 >> 0x20)),
                                (float)*(undefined8 *)(pfVar21 + 0xe) +
                                fVar55 * ((float)*(undefined8 *)(pfVar19 + 0xe) +
                                         (float)*(undefined8 *)pfVar22));
                  *(ulong *)(pfVar21 + 0xc) =
                       CONCAT44((float)((ulong)*(undefined8 *)(pfVar21 + 0xc) >> 0x20) +
                                fVar55 * ((float)((ulong)uVar57 >> 0x20) +
                                         (float)((ulong)uVar56 >> 0x20)),
                                (float)*(undefined8 *)(pfVar21 + 0xc) +
                                fVar55 * ((float)uVar57 + (float)uVar56));
                  pfVar21 = pfVar21 + 0x10;
                  pfVar19 = pfVar19 + 0x10;
                } while (pfVar21 < pfVar20);
              }
            }
          }
          else if (uVar10 != 0) {
            fVar61 = (fVar58 - fVar55) / (float)uVar10;
            pfVar17 = pfVar30;
            pfVar20 = pfVar4;
            pfVar21 = pfVar3;
            fVar58 = fVar55;
            do {
              fVar62 = fVar55 * *pfVar20;
              fVar46 = fVar58 * *pfVar21;
              fVar55 = fVar55 + fVar61;
              fVar58 = fVar58 + fVar61;
              pfVar19 = pfVar17 + 1;
              *pfVar17 = *pfVar17 + fVar62 + fVar46;
              pfVar17 = pfVar19;
              pfVar20 = pfVar20 + 1;
              pfVar21 = pfVar21 + 1;
            } while (pfVar19 < pfVar30 + uVar10);
          }
          fVar55 = *(float *)(param_1 + 0x1b0) * *(float *)(param_1 + 0x1a0);
          fVar58 = *(float *)(*(long *)(param_1 + 0x158) + 0x50) *
                   *(float *)(*(long *)(param_1 + 0x158) + 0x40);
          if (fVar58 == fVar55) {
            if (uVar10 != 0) {
              uVar33 = lVar43 + uVar16 * 4;
              pfVar17 = (float *)(uVar33 + 0x10);
              pfVar20 = pfVar30 + uVar10;
              pfVar21 = pfVar20;
              if (pfVar20 <= pfVar17) {
                pfVar21 = pfVar17;
              }
              uVar33 = ~uVar33 + (long)pfVar21;
              uVar40 = ((uint)(uVar33 >> 4) & 0xfffffff) + 1;
              uVar45 = (ulong)uVar40 & 3;
              pfVar17 = pfVar8;
              pfVar21 = pfVar38;
              if ((uVar40 & 3) != 0) {
                pfVar19 = pfVar8;
                pfVar22 = pfVar30;
                pfVar32 = pfVar38;
                do {
                  pfVar30 = pfVar22 + 4;
                  uVar45 = uVar45 - 1;
                  pfVar17 = pfVar19 + 4;
                  uVar56 = *(undefined8 *)pfVar19;
                  pfVar21 = pfVar32 + 4;
                  uVar57 = *(undefined8 *)pfVar32;
                  *(ulong *)(pfVar22 + 2) =
                       CONCAT44((float)((ulong)*(undefined8 *)(pfVar22 + 2) >> 0x20) +
                                fVar55 * ((float)((ulong)*(undefined8 *)(pfVar32 + 2) >> 0x20) +
                                         (float)((ulong)*(undefined8 *)(pfVar19 + 2) >> 0x20)),
                                (float)*(undefined8 *)(pfVar22 + 2) +
                                fVar55 * ((float)*(undefined8 *)(pfVar32 + 2) +
                                         (float)*(undefined8 *)(pfVar19 + 2)));
                  *(ulong *)pfVar22 =
                       CONCAT44((float)((ulong)*(undefined8 *)pfVar22 >> 0x20) +
                                fVar55 * ((float)((ulong)uVar57 >> 0x20) +
                                         (float)((ulong)uVar56 >> 0x20)),
                                (float)*(undefined8 *)pfVar22 +
                                fVar55 * ((float)uVar57 + (float)uVar56));
                  pfVar19 = pfVar17;
                  pfVar22 = pfVar30;
                  pfVar32 = pfVar21;
                } while (uVar45 != 0);
              }
              if (0x2f < uVar33) {
                do {
                  uVar56 = *(undefined8 *)pfVar17;
                  uVar57 = *(undefined8 *)pfVar21;
                  *(ulong *)(pfVar30 + 2) =
                       CONCAT44((float)((ulong)*(undefined8 *)(pfVar30 + 2) >> 0x20) +
                                fVar55 * ((float)((ulong)*(undefined8 *)(pfVar21 + 2) >> 0x20) +
                                         (float)((ulong)*(undefined8 *)(pfVar17 + 2) >> 0x20)),
                                (float)*(undefined8 *)(pfVar30 + 2) +
                                fVar55 * ((float)*(undefined8 *)(pfVar21 + 2) +
                                         (float)*(undefined8 *)(pfVar17 + 2)));
                  *(ulong *)pfVar30 =
                       CONCAT44((float)((ulong)*(undefined8 *)pfVar30 >> 0x20) +
                                fVar55 * ((float)((ulong)uVar57 >> 0x20) +
                                         (float)((ulong)uVar56 >> 0x20)),
                                (float)*(undefined8 *)pfVar30 +
                                fVar55 * ((float)uVar57 + (float)uVar56));
                  uVar56 = *(undefined8 *)(pfVar17 + 4);
                  uVar57 = *(undefined8 *)(pfVar21 + 4);
                  *(ulong *)(pfVar30 + 6) =
                       CONCAT44((float)((ulong)*(undefined8 *)(pfVar30 + 6) >> 0x20) +
                                fVar55 * ((float)((ulong)*(undefined8 *)(pfVar21 + 6) >> 0x20) +
                                         (float)((ulong)*(undefined8 *)(pfVar17 + 6) >> 0x20)),
                                (float)*(undefined8 *)(pfVar30 + 6) +
                                fVar55 * ((float)*(undefined8 *)(pfVar21 + 6) +
                                         (float)*(undefined8 *)(pfVar17 + 6)));
                  *(ulong *)(pfVar30 + 4) =
                       CONCAT44((float)((ulong)*(undefined8 *)(pfVar30 + 4) >> 0x20) +
                                fVar55 * ((float)((ulong)uVar57 >> 0x20) +
                                         (float)((ulong)uVar56 >> 0x20)),
                                (float)*(undefined8 *)(pfVar30 + 4) +
                                fVar55 * ((float)uVar57 + (float)uVar56));
                  uVar56 = *(undefined8 *)(pfVar17 + 8);
                  uVar57 = *(undefined8 *)(pfVar21 + 8);
                  *(ulong *)(pfVar30 + 10) =
                       CONCAT44((float)((ulong)*(undefined8 *)(pfVar30 + 10) >> 0x20) +
                                fVar55 * ((float)((ulong)*(undefined8 *)(pfVar21 + 10) >> 0x20) +
                                         (float)((ulong)*(undefined8 *)(pfVar17 + 10) >> 0x20)),
                                (float)*(undefined8 *)(pfVar30 + 10) +
                                fVar55 * ((float)*(undefined8 *)(pfVar21 + 10) +
                                         (float)*(undefined8 *)(pfVar17 + 10)));
                  *(ulong *)(pfVar30 + 8) =
                       CONCAT44((float)((ulong)*(undefined8 *)(pfVar30 + 8) >> 0x20) +
                                fVar55 * ((float)((ulong)uVar57 >> 0x20) +
                                         (float)((ulong)uVar56 >> 0x20)),
                                (float)*(undefined8 *)(pfVar30 + 8) +
                                fVar55 * ((float)uVar57 + (float)uVar56));
                  pfVar19 = pfVar17 + 0xe;
                  uVar56 = *(undefined8 *)(pfVar17 + 0xc);
                  uVar57 = *(undefined8 *)(pfVar21 + 0xc);
                  pfVar17 = pfVar17 + 0x10;
                  *(ulong *)(pfVar30 + 0xe) =
                       CONCAT44((float)((ulong)*(undefined8 *)(pfVar30 + 0xe) >> 0x20) +
                                fVar55 * ((float)((ulong)*(undefined8 *)(pfVar21 + 0xe) >> 0x20) +
                                         (float)((ulong)*(undefined8 *)pfVar19 >> 0x20)),
                                (float)*(undefined8 *)(pfVar30 + 0xe) +
                                fVar55 * ((float)*(undefined8 *)(pfVar21 + 0xe) +
                                         (float)*(undefined8 *)pfVar19));
                  *(ulong *)(pfVar30 + 0xc) =
                       CONCAT44((float)((ulong)*(undefined8 *)(pfVar30 + 0xc) >> 0x20) +
                                fVar55 * ((float)((ulong)uVar57 >> 0x20) +
                                         (float)((ulong)uVar56 >> 0x20)),
                                (float)*(undefined8 *)(pfVar30 + 0xc) +
                                fVar55 * ((float)uVar57 + (float)uVar56));
                  pfVar30 = pfVar30 + 0x10;
                  pfVar21 = pfVar21 + 0x10;
                } while (pfVar30 < pfVar20);
              }
            }
          }
          else if (uVar10 != 0) {
            fVar61 = (fVar58 - fVar55) / (float)uVar10;
            pfVar17 = pfVar30;
            pfVar20 = pfVar8;
            pfVar21 = pfVar38;
            fVar58 = fVar55;
            do {
              fVar62 = fVar55 * *pfVar20;
              fVar46 = fVar58 * *pfVar21;
              fVar55 = fVar55 + fVar61;
              fVar58 = fVar58 + fVar61;
              pfVar19 = pfVar17 + 1;
              *pfVar17 = *pfVar17 + fVar62 + fVar46;
              pfVar17 = pfVar19;
              pfVar20 = pfVar20 + 1;
              pfVar21 = pfVar21 + 1;
            } while (pfVar19 < pfVar30 + uVar10);
          }
        }
        lVar42 = uVar16 * 4;
        fVar58 = *(float *)(param_1 + 0x1b4) * fVar79;
        fVar55 = *(float *)(param_1 + 0x1ac);
        fVar62 = *(float *)(*(long *)(param_1 + 0x158) + 0x4c);
        fVar61 = -(*(float *)(param_1 + 0x1b4) * fVar79);
        lVar14 = (ulong)*(ushort *)(param_2 + 2) * 4;
        fVar46 = *(float *)(*(long *)(param_1 + 0x158) + 0x54) * fVar81;
        lVar43 = *param_2;
        pfVar30 = (float *)(lVar43 + lVar14 + uVar16 * 4);
        bVar7 = false;
        if ((fVar62 == fVar55) && (bVar7 = false, !NAN(fVar46) && !NAN(fVar58))) {
          bVar7 = fVar46 == fVar58;
        }
        if (bVar7) {
          if (uVar10 != 0) {
            uVar45 = lVar43 + lVar42 + lVar14 + uVar12;
            uVar33 = lVar43 + lVar42 + lVar14 + 0x10;
            if (uVar45 <= uVar33) {
              uVar45 = uVar33;
            }
            uVar45 = ~(lVar43 + lVar42 + lVar14) + uVar45;
            pfVar21 = pfVar30;
            pfVar20 = pfVar13;
            pfVar17 = local_d8[1];
            if (((uint)uVar45 >> 4 & 1) == 0) {
              pfVar21 = pfVar30 + 4;
              pfVar20 = pfVar13 + 4;
              uVar56 = *(undefined8 *)pfVar13;
              pfVar17 = local_d8[1] + 4;
              uVar57 = *(undefined8 *)local_d8[1];
              *(ulong *)(pfVar30 + 2) =
                   CONCAT44((float)((ulong)*(undefined8 *)(pfVar30 + 2) >> 0x20) * fVar55 +
                            fVar58 * (float)((ulong)*(undefined8 *)(pfVar13 + 2) >> 0x20) +
                            fVar61 * (float)((ulong)*(undefined8 *)(local_d8[1] + 2) >> 0x20),
                            (float)*(undefined8 *)(pfVar30 + 2) * fVar55 +
                            fVar58 * (float)*(undefined8 *)(pfVar13 + 2) +
                            fVar61 * (float)*(undefined8 *)(local_d8[1] + 2));
              *(ulong *)pfVar30 =
                   CONCAT44((float)((ulong)*(undefined8 *)pfVar30 >> 0x20) * fVar55 +
                            fVar58 * (float)((ulong)uVar56 >> 0x20) +
                            fVar61 * (float)((ulong)uVar57 >> 0x20),
                            (float)*(undefined8 *)pfVar30 * fVar55 + fVar58 * (float)uVar56 +
                            fVar61 * (float)uVar57);
            }
            if (0xf < uVar45) {
              do {
                uVar56 = *(undefined8 *)pfVar20;
                uVar57 = *(undefined8 *)pfVar17;
                *(ulong *)(pfVar21 + 2) =
                     CONCAT44((float)((ulong)*(undefined8 *)(pfVar21 + 2) >> 0x20) * fVar55 +
                              fVar58 * (float)((ulong)*(undefined8 *)(pfVar20 + 2) >> 0x20) +
                              fVar61 * (float)((ulong)*(undefined8 *)(pfVar17 + 2) >> 0x20),
                              (float)*(undefined8 *)(pfVar21 + 2) * fVar55 +
                              fVar58 * (float)*(undefined8 *)(pfVar20 + 2) +
                              fVar61 * (float)*(undefined8 *)(pfVar17 + 2));
                *(ulong *)pfVar21 =
                     CONCAT44((float)((ulong)*(undefined8 *)pfVar21 >> 0x20) * fVar55 +
                              fVar58 * (float)((ulong)uVar56 >> 0x20) +
                              fVar61 * (float)((ulong)uVar57 >> 0x20),
                              (float)*(undefined8 *)pfVar21 * fVar55 + fVar58 * (float)uVar56 +
                              fVar61 * (float)uVar57);
                pfVar19 = pfVar20 + 6;
                uVar56 = *(undefined8 *)(pfVar20 + 4);
                pfVar22 = pfVar17 + 6;
                uVar57 = *(undefined8 *)(pfVar17 + 4);
                pfVar17 = pfVar17 + 8;
                pfVar20 = pfVar20 + 8;
                *(ulong *)(pfVar21 + 6) =
                     CONCAT44((float)((ulong)*(undefined8 *)(pfVar21 + 6) >> 0x20) * fVar55 +
                              fVar58 * (float)((ulong)*(undefined8 *)pfVar19 >> 0x20) +
                              fVar61 * (float)((ulong)*(undefined8 *)pfVar22 >> 0x20),
                              (float)*(undefined8 *)(pfVar21 + 6) * fVar55 +
                              fVar58 * (float)*(undefined8 *)pfVar19 +
                              fVar61 * (float)*(undefined8 *)pfVar22);
                *(ulong *)(pfVar21 + 4) =
                     CONCAT44((float)((ulong)*(undefined8 *)(pfVar21 + 4) >> 0x20) * fVar55 +
                              fVar58 * (float)((ulong)uVar56 >> 0x20) +
                              fVar61 * (float)((ulong)uVar57 >> 0x20),
                              (float)*(undefined8 *)(pfVar21 + 4) * fVar55 + fVar58 * (float)uVar56
                              + fVar61 * (float)uVar57);
                pfVar21 = pfVar21 + 8;
              } while (pfVar21 < pfVar30 + uVar10);
            }
          }
        }
        else if (uVar10 != 0) {
          fVar48 = 1.0 / (float)uVar10;
          fVar62 = fVar62 - fVar55;
          fVar47 = fVar46 - fVar58;
          fVar46 = fVar58 - fVar46;
          pfVar17 = pfVar30;
          pfVar20 = pfVar13;
          pfVar21 = local_d8[1];
          do {
            fVar51 = *pfVar17 * fVar55;
            fVar55 = fVar55 + fVar62 * fVar48;
            fVar49 = fVar58 * *pfVar20;
            fVar50 = fVar61 * *pfVar21;
            fVar58 = fVar58 + fVar47 * fVar48;
            fVar61 = fVar61 + fVar46 * fVar48;
            pfVar19 = pfVar17 + 1;
            *pfVar17 = fVar51 + fVar49 + fVar50;
            pfVar17 = pfVar19;
            pfVar20 = pfVar20 + 1;
            pfVar21 = pfVar21 + 1;
          } while (pfVar19 < pfVar30 + uVar10);
        }
        if (*(char *)(param_1 + 0x138) != '\0') {
          fVar58 = *(float *)(param_1 + 0x19c) * fVar60;
          fVar55 = fVar58 * *(float *)(param_1 + 0x1b0);
          fVar58 = -(fVar58 * *(float *)(param_1 + 0x1b0));
          fVar61 = *(float *)(*(long *)(param_1 + 0x158) + 0x3c) * fVar80 *
                   *(float *)(*(long *)(param_1 + 0x158) + 0x50);
          if (fVar61 == fVar55) {
            if (uVar10 != 0) {
              uVar45 = lVar43 + lVar42 + lVar14 + uVar12;
              uVar33 = lVar43 + lVar42 + lVar14 + 0x10;
              if (uVar45 <= uVar33) {
                uVar45 = uVar33;
              }
              uVar45 = ~(lVar43 + lVar42 + lVar14) + uVar45;
              pfVar21 = pfVar30;
              pfVar20 = pfVar4;
              pfVar17 = pfVar3;
              if (((uint)uVar45 >> 4 & 1) == 0) {
                pfVar21 = pfVar30 + 4;
                uVar56 = *(undefined8 *)pfVar4;
                uVar57 = *(undefined8 *)pfVar3;
                *(ulong *)(pfVar30 + 2) =
                     CONCAT44((float)((ulong)*(undefined8 *)(pfVar30 + 2) >> 0x20) +
                              fVar55 * (float)((ulong)*(undefined8 *)(pfVar4 + 2) >> 0x20) +
                              fVar58 * (float)((ulong)*(undefined8 *)(pfVar3 + 2) >> 0x20),
                              (float)*(undefined8 *)(pfVar30 + 2) +
                              fVar55 * (float)*(undefined8 *)(pfVar4 + 2) +
                              fVar58 * (float)*(undefined8 *)(pfVar3 + 2));
                *(ulong *)pfVar30 =
                     CONCAT44((float)((ulong)*(undefined8 *)pfVar30 >> 0x20) +
                              fVar55 * (float)((ulong)uVar56 >> 0x20) +
                              fVar58 * (float)((ulong)uVar57 >> 0x20),
                              (float)*(undefined8 *)pfVar30 + fVar55 * (float)uVar56 +
                              fVar58 * (float)uVar57);
                pfVar20 = pfVar4 + 4;
                pfVar17 = pfVar3 + 4;
              }
              if (0xf < uVar45) {
                do {
                  uVar56 = *(undefined8 *)pfVar20;
                  uVar57 = *(undefined8 *)pfVar17;
                  *(ulong *)(pfVar21 + 2) =
                       CONCAT44((float)((ulong)*(undefined8 *)(pfVar21 + 2) >> 0x20) +
                                fVar55 * (float)((ulong)*(undefined8 *)(pfVar20 + 2) >> 0x20) +
                                fVar58 * (float)((ulong)*(undefined8 *)(pfVar17 + 2) >> 0x20),
                                (float)*(undefined8 *)(pfVar21 + 2) +
                                fVar55 * (float)*(undefined8 *)(pfVar20 + 2) +
                                fVar58 * (float)*(undefined8 *)(pfVar17 + 2));
                  *(ulong *)pfVar21 =
                       CONCAT44((float)((ulong)*(undefined8 *)pfVar21 >> 0x20) +
                                fVar55 * (float)((ulong)uVar56 >> 0x20) +
                                fVar58 * (float)((ulong)uVar57 >> 0x20),
                                (float)*(undefined8 *)pfVar21 + fVar55 * (float)uVar56 +
                                fVar58 * (float)uVar57);
                  pfVar19 = pfVar20 + 6;
                  uVar56 = *(undefined8 *)(pfVar20 + 4);
                  pfVar22 = pfVar17 + 6;
                  uVar57 = *(undefined8 *)(pfVar17 + 4);
                  pfVar17 = pfVar17 + 8;
                  pfVar20 = pfVar20 + 8;
                  *(ulong *)(pfVar21 + 6) =
                       CONCAT44((float)((ulong)*(undefined8 *)(pfVar21 + 6) >> 0x20) +
                                fVar55 * (float)((ulong)*(undefined8 *)pfVar19 >> 0x20) +
                                fVar58 * (float)((ulong)*(undefined8 *)pfVar22 >> 0x20),
                                (float)*(undefined8 *)(pfVar21 + 6) +
                                fVar55 * (float)*(undefined8 *)pfVar19 +
                                fVar58 * (float)*(undefined8 *)pfVar22);
                  *(ulong *)(pfVar21 + 4) =
                       CONCAT44((float)((ulong)*(undefined8 *)(pfVar21 + 4) >> 0x20) +
                                fVar55 * (float)((ulong)uVar56 >> 0x20) +
                                fVar58 * (float)((ulong)uVar57 >> 0x20),
                                (float)*(undefined8 *)(pfVar21 + 4) + fVar55 * (float)uVar56 +
                                fVar58 * (float)uVar57);
                  pfVar21 = pfVar21 + 8;
                } while (pfVar21 < pfVar30 + uVar10);
              }
            }
          }
          else if (uVar10 != 0) {
            fVar62 = fVar61 - fVar55;
            fVar61 = fVar55 - fVar61;
            pfVar17 = pfVar30;
            pfVar20 = pfVar4;
            pfVar21 = pfVar3;
            do {
              fVar46 = fVar55 * *pfVar20;
              fVar47 = fVar58 * *pfVar21;
              fVar55 = fVar55 + fVar62 / (float)uVar10;
              fVar58 = fVar58 + fVar61 / (float)uVar10;
              pfVar19 = pfVar17 + 1;
              *pfVar17 = *pfVar17 + fVar46 + fVar47;
              pfVar17 = pfVar19;
              pfVar20 = pfVar20 + 1;
              pfVar21 = pfVar21 + 1;
            } while (pfVar19 < pfVar30 + uVar10);
          }
          fVar58 = *(float *)(param_1 + 0x1a0) * fVar60;
          fVar55 = fVar58 * *(float *)(param_1 + 0x1b0);
          fVar58 = -(fVar58 * *(float *)(param_1 + 0x1b0));
          fVar61 = *(float *)(*(long *)(param_1 + 0x158) + 0x40) * fVar80 *
                   *(float *)(*(long *)(param_1 + 0x158) + 0x50);
          if (fVar61 == fVar55) {
            if (uVar10 != 0) {
              uVar45 = lVar43 + lVar42 + lVar14 + uVar12;
              uVar33 = lVar43 + lVar42 + lVar14 + 0x10;
              if (uVar45 <= uVar33) {
                uVar45 = uVar33;
              }
              uVar45 = ~(lVar43 + lVar42 + lVar14) + uVar45;
              pfVar21 = pfVar30;
              pfVar20 = pfVar8;
              pfVar17 = pfVar38;
              if (((uint)uVar45 >> 4 & 1) == 0) {
                uVar56 = *(undefined8 *)pfVar8;
                uVar57 = *(undefined8 *)pfVar38;
                *(ulong *)(pfVar30 + 2) =
                     CONCAT44((float)((ulong)*(undefined8 *)(pfVar30 + 2) >> 0x20) +
                              fVar55 * (float)((ulong)*(undefined8 *)(pfVar8 + 2) >> 0x20) +
                              fVar58 * (float)((ulong)*(undefined8 *)(pfVar38 + 2) >> 0x20),
                              (float)*(undefined8 *)(pfVar30 + 2) +
                              fVar55 * (float)*(undefined8 *)(pfVar8 + 2) +
                              fVar58 * (float)*(undefined8 *)(pfVar38 + 2));
                *(ulong *)pfVar30 =
                     CONCAT44((float)((ulong)*(undefined8 *)pfVar30 >> 0x20) +
                              fVar55 * (float)((ulong)uVar56 >> 0x20) +
                              fVar58 * (float)((ulong)uVar57 >> 0x20),
                              (float)*(undefined8 *)pfVar30 + fVar55 * (float)uVar56 +
                              fVar58 * (float)uVar57);
                pfVar21 = pfVar30 + 4;
                pfVar20 = pfVar8 + 4;
                pfVar17 = pfVar38 + 4;
              }
              if (0xf < uVar45) {
                do {
                  uVar56 = *(undefined8 *)pfVar20;
                  uVar57 = *(undefined8 *)pfVar17;
                  *(ulong *)(pfVar21 + 2) =
                       CONCAT44((float)((ulong)*(undefined8 *)(pfVar21 + 2) >> 0x20) +
                                fVar55 * (float)((ulong)*(undefined8 *)(pfVar20 + 2) >> 0x20) +
                                fVar58 * (float)((ulong)*(undefined8 *)(pfVar17 + 2) >> 0x20),
                                (float)*(undefined8 *)(pfVar21 + 2) +
                                fVar55 * (float)*(undefined8 *)(pfVar20 + 2) +
                                fVar58 * (float)*(undefined8 *)(pfVar17 + 2));
                  *(ulong *)pfVar21 =
                       CONCAT44((float)((ulong)*(undefined8 *)pfVar21 >> 0x20) +
                                fVar55 * (float)((ulong)uVar56 >> 0x20) +
                                fVar58 * (float)((ulong)uVar57 >> 0x20),
                                (float)*(undefined8 *)pfVar21 + fVar55 * (float)uVar56 +
                                fVar58 * (float)uVar57);
                  pfVar19 = pfVar20 + 6;
                  uVar56 = *(undefined8 *)(pfVar20 + 4);
                  pfVar22 = pfVar17 + 6;
                  uVar57 = *(undefined8 *)(pfVar17 + 4);
                  pfVar17 = pfVar17 + 8;
                  pfVar20 = pfVar20 + 8;
                  *(ulong *)(pfVar21 + 6) =
                       CONCAT44((float)((ulong)*(undefined8 *)(pfVar21 + 6) >> 0x20) +
                                fVar55 * (float)((ulong)*(undefined8 *)pfVar19 >> 0x20) +
                                fVar58 * (float)((ulong)*(undefined8 *)pfVar22 >> 0x20),
                                (float)*(undefined8 *)(pfVar21 + 6) +
                                fVar55 * (float)*(undefined8 *)pfVar19 +
                                fVar58 * (float)*(undefined8 *)pfVar22);
                  *(ulong *)(pfVar21 + 4) =
                       CONCAT44((float)((ulong)*(undefined8 *)(pfVar21 + 4) >> 0x20) +
                                fVar55 * (float)((ulong)uVar56 >> 0x20) +
                                fVar58 * (float)((ulong)uVar57 >> 0x20),
                                (float)*(undefined8 *)(pfVar21 + 4) + fVar55 * (float)uVar56 +
                                fVar58 * (float)uVar57);
                  pfVar21 = pfVar21 + 8;
                } while (pfVar21 < pfVar30 + uVar10);
              }
            }
          }
          else if (uVar10 != 0) {
            fVar62 = fVar61 - fVar55;
            fVar61 = fVar55 - fVar61;
            pfVar17 = pfVar30;
            pfVar20 = pfVar8;
            pfVar21 = pfVar38;
            do {
              fVar46 = fVar55 * *pfVar20;
              fVar47 = fVar58 * *pfVar21;
              fVar55 = fVar55 + fVar62 / (float)uVar10;
              fVar58 = fVar58 + fVar61 / (float)uVar10;
              pfVar19 = pfVar17 + 1;
              *pfVar17 = *pfVar17 + fVar46 + fVar47;
              pfVar17 = pfVar19;
              pfVar20 = pfVar20 + 1;
              pfVar21 = pfVar21 + 1;
            } while (pfVar19 < pfVar30 + uVar10);
          }
        }
        fVar58 = *(float *)(param_1 + 0x1b4) * fVar79;
        fVar55 = *(float *)(param_1 + 0x1ac);
        fVar62 = *(float *)(*(long *)(param_1 + 0x158) + 0x4c);
        fVar61 = -(*(float *)(param_1 + 0x1b4) * fVar79);
        lVar14 = (ulong)*(ushort *)(param_2 + 2) * 8;
        fVar46 = *(float *)(*(long *)(param_1 + 0x158) + 0x54) * fVar81;
        lVar43 = *param_2;
        pfVar30 = (float *)(lVar43 + lVar14 + uVar16 * 4);
        bVar7 = false;
        if ((fVar62 == fVar55) && (bVar7 = false, !NAN(fVar46) && !NAN(fVar58))) {
          bVar7 = fVar46 == fVar58;
        }
        if (bVar7) {
          if (uVar10 != 0) {
            uVar45 = lVar43 + lVar14 + lVar42 + uVar12;
            uVar33 = lVar43 + lVar14 + lVar42 + 0x10;
            if (uVar45 <= uVar33) {
              uVar45 = uVar33;
            }
            uVar45 = ~(lVar43 + lVar42 + lVar14) + uVar45;
            pfVar21 = pfVar30;
            pfVar20 = local_d8[2];
            pfVar17 = local_d8[3];
            if (((uint)uVar45 >> 4 & 1) == 0) {
              uVar56 = *(undefined8 *)local_d8[2];
              uVar57 = *(undefined8 *)local_d8[3];
              *(ulong *)(pfVar30 + 2) =
                   CONCAT44((float)((ulong)*(undefined8 *)(pfVar30 + 2) >> 0x20) * fVar55 +
                            fVar58 * (float)((ulong)*(undefined8 *)(local_d8[2] + 2) >> 0x20) +
                            fVar61 * (float)((ulong)*(undefined8 *)(local_d8[3] + 2) >> 0x20),
                            (float)*(undefined8 *)(pfVar30 + 2) * fVar55 +
                            fVar58 * (float)*(undefined8 *)(local_d8[2] + 2) +
                            fVar61 * (float)*(undefined8 *)(local_d8[3] + 2));
              *(ulong *)pfVar30 =
                   CONCAT44((float)((ulong)*(undefined8 *)pfVar30 >> 0x20) * fVar55 +
                            fVar58 * (float)((ulong)uVar56 >> 0x20) +
                            fVar61 * (float)((ulong)uVar57 >> 0x20),
                            (float)*(undefined8 *)pfVar30 * fVar55 + fVar58 * (float)uVar56 +
                            fVar61 * (float)uVar57);
              pfVar21 = pfVar30 + 4;
              pfVar20 = local_d8[2] + 4;
              pfVar17 = local_d8[3] + 4;
            }
            if (0xf < uVar45) {
              do {
                uVar56 = *(undefined8 *)pfVar20;
                uVar57 = *(undefined8 *)pfVar17;
                *(ulong *)(pfVar21 + 2) =
                     CONCAT44((float)((ulong)*(undefined8 *)(pfVar21 + 2) >> 0x20) * fVar55 +
                              fVar58 * (float)((ulong)*(undefined8 *)(pfVar20 + 2) >> 0x20) +
                              fVar61 * (float)((ulong)*(undefined8 *)(pfVar17 + 2) >> 0x20),
                              (float)*(undefined8 *)(pfVar21 + 2) * fVar55 +
                              fVar58 * (float)*(undefined8 *)(pfVar20 + 2) +
                              fVar61 * (float)*(undefined8 *)(pfVar17 + 2));
                *(ulong *)pfVar21 =
                     CONCAT44((float)((ulong)*(undefined8 *)pfVar21 >> 0x20) * fVar55 +
                              fVar58 * (float)((ulong)uVar56 >> 0x20) +
                              fVar61 * (float)((ulong)uVar57 >> 0x20),
                              (float)*(undefined8 *)pfVar21 * fVar55 + fVar58 * (float)uVar56 +
                              fVar61 * (float)uVar57);
                pfVar19 = pfVar20 + 6;
                uVar56 = *(undefined8 *)(pfVar20 + 4);
                pfVar22 = pfVar17 + 6;
                uVar57 = *(undefined8 *)(pfVar17 + 4);
                pfVar17 = pfVar17 + 8;
                pfVar20 = pfVar20 + 8;
                *(ulong *)(pfVar21 + 6) =
                     CONCAT44((float)((ulong)*(undefined8 *)(pfVar21 + 6) >> 0x20) * fVar55 +
                              fVar58 * (float)((ulong)*(undefined8 *)pfVar19 >> 0x20) +
                              fVar61 * (float)((ulong)*(undefined8 *)pfVar22 >> 0x20),
                              (float)*(undefined8 *)(pfVar21 + 6) * fVar55 +
                              fVar58 * (float)*(undefined8 *)pfVar19 +
                              fVar61 * (float)*(undefined8 *)pfVar22);
                *(ulong *)(pfVar21 + 4) =
                     CONCAT44((float)((ulong)*(undefined8 *)(pfVar21 + 4) >> 0x20) * fVar55 +
                              fVar58 * (float)((ulong)uVar56 >> 0x20) +
                              fVar61 * (float)((ulong)uVar57 >> 0x20),
                              (float)*(undefined8 *)(pfVar21 + 4) * fVar55 + fVar58 * (float)uVar56
                              + fVar61 * (float)uVar57);
                pfVar21 = pfVar21 + 8;
              } while (pfVar21 < pfVar30 + uVar10);
            }
          }
        }
        else if (uVar10 != 0) {
          fVar48 = 1.0 / (float)uVar10;
          fVar62 = fVar62 - fVar55;
          fVar47 = fVar46 - fVar58;
          fVar46 = fVar58 - fVar46;
          pfVar17 = pfVar30;
          pfVar20 = local_d8[2];
          pfVar21 = local_d8[3];
          do {
            fVar51 = *pfVar17 * fVar55;
            fVar55 = fVar55 + fVar62 * fVar48;
            fVar49 = fVar58 * *pfVar20;
            fVar50 = fVar61 * *pfVar21;
            fVar58 = fVar58 + fVar47 * fVar48;
            fVar61 = fVar61 + fVar46 * fVar48;
            pfVar19 = pfVar17 + 1;
            *pfVar17 = fVar51 + fVar49 + fVar50;
            pfVar17 = pfVar19;
            pfVar20 = pfVar20 + 1;
            pfVar21 = pfVar21 + 1;
          } while (pfVar19 < pfVar30 + uVar10);
        }
        lVar43 = *param_2;
        fVar55 = fVar79 * fVar79;
        fVar58 = *(float *)(param_1 + 0x1ac);
        fVar61 = *(float *)(param_1 + 0x1b4) * fVar55;
        lVar14 = (ulong)*(ushort *)(param_2 + 2) * 0xc;
        pfVar30 = (float *)(lVar43 + lVar14 + uVar16 * 4);
        fVar62 = *(float *)(*(long *)(param_1 + 0x158) + 0x4c);
        fVar46 = *(float *)(*(long *)(param_1 + 0x158) + 0x54) * fVar63 * 0.0027777778;
        bVar7 = false;
        if ((fVar62 == fVar58) && (bVar7 = false, !NAN(fVar46) && !NAN(fVar61))) {
          bVar7 = fVar46 == fVar61;
        }
        if (bVar7) {
          if (uVar10 != 0) {
            uVar33 = lVar43 + lVar14 + lVar42 + uVar12;
            uVar16 = lVar43 + lVar14 + lVar42 + 0x10;
            if (uVar33 <= uVar16) {
              uVar33 = uVar16;
            }
            uVar33 = ~(lVar43 + lVar42 + lVar14) + uVar33;
            pfVar20 = pfVar30;
            pfVar17 = pfVar13;
            pfVar21 = local_d8[1];
            if (((uint)uVar33 >> 4 & 1) == 0) {
              pfVar20 = pfVar30 + 4;
              pfVar17 = pfVar13 + 4;
              uVar56 = *(undefined8 *)pfVar13;
              pfVar21 = local_d8[1] + 4;
              uVar57 = *(undefined8 *)local_d8[1];
              *(ulong *)(pfVar30 + 2) =
                   CONCAT44((float)((ulong)*(undefined8 *)(pfVar30 + 2) >> 0x20) * fVar58 +
                            fVar61 * ((float)((ulong)*(undefined8 *)(local_d8[1] + 2) >> 0x20) +
                                     (float)((ulong)*(undefined8 *)(pfVar13 + 2) >> 0x20)),
                            (float)*(undefined8 *)(pfVar30 + 2) * fVar58 +
                            fVar61 * ((float)*(undefined8 *)(local_d8[1] + 2) +
                                     (float)*(undefined8 *)(pfVar13 + 2)));
              *(ulong *)pfVar30 =
                   CONCAT44((float)((ulong)*(undefined8 *)pfVar30 >> 0x20) * fVar58 +
                            fVar61 * ((float)((ulong)uVar57 >> 0x20) +
                                     (float)((ulong)uVar56 >> 0x20)),
                            (float)*(undefined8 *)pfVar30 * fVar58 +
                            fVar61 * ((float)uVar57 + (float)uVar56));
            }
            if (0xf < uVar33) {
              do {
                uVar56 = *(undefined8 *)pfVar17;
                uVar57 = *(undefined8 *)pfVar21;
                *(ulong *)(pfVar20 + 2) =
                     CONCAT44((float)((ulong)*(undefined8 *)(pfVar20 + 2) >> 0x20) * fVar58 +
                              fVar61 * ((float)((ulong)*(undefined8 *)(pfVar21 + 2) >> 0x20) +
                                       (float)((ulong)*(undefined8 *)(pfVar17 + 2) >> 0x20)),
                              (float)*(undefined8 *)(pfVar20 + 2) * fVar58 +
                              fVar61 * ((float)*(undefined8 *)(pfVar21 + 2) +
                                       (float)*(undefined8 *)(pfVar17 + 2)));
                *(ulong *)pfVar20 =
                     CONCAT44((float)((ulong)*(undefined8 *)pfVar20 >> 0x20) * fVar58 +
                              fVar61 * ((float)((ulong)uVar57 >> 0x20) +
                                       (float)((ulong)uVar56 >> 0x20)),
                              (float)*(undefined8 *)pfVar20 * fVar58 +
                              fVar61 * ((float)uVar57 + (float)uVar56));
                pfVar19 = pfVar17 + 6;
                uVar56 = *(undefined8 *)(pfVar17 + 4);
                uVar57 = *(undefined8 *)(pfVar21 + 4);
                pfVar17 = pfVar17 + 8;
                *(ulong *)(pfVar20 + 6) =
                     CONCAT44((float)((ulong)*(undefined8 *)(pfVar20 + 6) >> 0x20) * fVar58 +
                              fVar61 * ((float)((ulong)*(undefined8 *)(pfVar21 + 6) >> 0x20) +
                                       (float)((ulong)*(undefined8 *)pfVar19 >> 0x20)),
                              (float)*(undefined8 *)(pfVar20 + 6) * fVar58 +
                              fVar61 * ((float)*(undefined8 *)(pfVar21 + 6) +
                                       (float)*(undefined8 *)pfVar19));
                *(ulong *)(pfVar20 + 4) =
                     CONCAT44((float)((ulong)*(undefined8 *)(pfVar20 + 4) >> 0x20) * fVar58 +
                              fVar61 * ((float)((ulong)uVar57 >> 0x20) +
                                       (float)((ulong)uVar56 >> 0x20)),
                              (float)*(undefined8 *)(pfVar20 + 4) * fVar58 +
                              fVar61 * ((float)uVar57 + (float)uVar56));
                pfVar20 = pfVar20 + 8;
                pfVar21 = pfVar21 + 8;
              } while (pfVar20 < pfVar30 + uVar10);
            }
          }
        }
        else if (uVar10 != 0) {
          fVar62 = fVar62 - fVar58;
          fVar47 = (fVar46 - fVar61) / (float)uVar10;
          pfVar17 = pfVar30;
          pfVar20 = pfVar13;
          pfVar21 = local_d8[1];
          fVar46 = fVar61;
          do {
            fVar50 = *pfVar17 * fVar58;
            fVar58 = fVar58 + fVar62 / (float)uVar10;
            fVar48 = fVar61 * *pfVar20;
            fVar49 = fVar46 * *pfVar21;
            fVar61 = fVar61 + fVar47;
            fVar46 = fVar46 + fVar47;
            pfVar19 = pfVar17 + 1;
            *pfVar17 = fVar50 + fVar48 + fVar49;
            pfVar17 = pfVar19;
            pfVar20 = pfVar20 + 1;
            pfVar21 = pfVar21 + 1;
          } while (pfVar19 < pfVar30 + uVar10);
        }
        fVar62 = -(*(float *)(param_1 + 0x1b4) * fVar55);
        fVar61 = *(float *)(param_1 + 0x1ac);
        fVar58 = *(float *)(*(long *)(param_1 + 0x158) + 0x4c);
        fVar46 = fVar63 * -0.0027777778 * *(float *)(*(long *)(param_1 + 0x158) + 0x54);
        bVar7 = false;
        if ((fVar58 == fVar61) && (bVar7 = false, !NAN(fVar46) && !NAN(fVar62))) {
          bVar7 = fVar46 == fVar62;
        }
        if (bVar7) {
          if (uVar10 != 0) {
            uVar33 = lVar43 + lVar14 + lVar42 + uVar12;
            uVar16 = lVar43 + lVar14 + lVar42 + 0x10;
            if (uVar33 <= uVar16) {
              uVar33 = uVar16;
            }
            uVar33 = ~(lVar43 + lVar42 + lVar14) + uVar33;
            pfVar20 = pfVar30;
            pfVar17 = local_d8[2];
            pfVar21 = local_d8[3];
            if (((uint)uVar33 >> 4 & 1) == 0) {
              pfVar20 = pfVar30 + 4;
              pfVar17 = local_d8[2] + 4;
              uVar56 = *(undefined8 *)local_d8[2];
              pfVar21 = local_d8[3] + 4;
              uVar57 = *(undefined8 *)local_d8[3];
              *(ulong *)(pfVar30 + 2) =
                   CONCAT44((float)((ulong)*(undefined8 *)(pfVar30 + 2) >> 0x20) * fVar61 +
                            fVar62 * ((float)((ulong)*(undefined8 *)(local_d8[3] + 2) >> 0x20) +
                                     (float)((ulong)*(undefined8 *)(local_d8[2] + 2) >> 0x20)),
                            (float)*(undefined8 *)(pfVar30 + 2) * fVar61 +
                            fVar62 * ((float)*(undefined8 *)(local_d8[3] + 2) +
                                     (float)*(undefined8 *)(local_d8[2] + 2)));
              *(ulong *)pfVar30 =
                   CONCAT44((float)((ulong)*(undefined8 *)pfVar30 >> 0x20) * fVar61 +
                            fVar62 * ((float)((ulong)uVar57 >> 0x20) +
                                     (float)((ulong)uVar56 >> 0x20)),
                            (float)*(undefined8 *)pfVar30 * fVar61 +
                            fVar62 * ((float)uVar57 + (float)uVar56));
            }
            if (0xf < uVar33) {
              do {
                uVar56 = *(undefined8 *)pfVar17;
                uVar57 = *(undefined8 *)pfVar21;
                *(ulong *)(pfVar20 + 2) =
                     CONCAT44((float)((ulong)*(undefined8 *)(pfVar20 + 2) >> 0x20) * fVar61 +
                              fVar62 * ((float)((ulong)*(undefined8 *)(pfVar21 + 2) >> 0x20) +
                                       (float)((ulong)*(undefined8 *)(pfVar17 + 2) >> 0x20)),
                              (float)*(undefined8 *)(pfVar20 + 2) * fVar61 +
                              fVar62 * ((float)*(undefined8 *)(pfVar21 + 2) +
                                       (float)*(undefined8 *)(pfVar17 + 2)));
                *(ulong *)pfVar20 =
                     CONCAT44((float)((ulong)*(undefined8 *)pfVar20 >> 0x20) * fVar61 +
                              fVar62 * ((float)((ulong)uVar57 >> 0x20) +
                                       (float)((ulong)uVar56 >> 0x20)),
                              (float)*(undefined8 *)pfVar20 * fVar61 +
                              fVar62 * ((float)uVar57 + (float)uVar56));
                pfVar19 = pfVar17 + 6;
                uVar56 = *(undefined8 *)(pfVar17 + 4);
                uVar57 = *(undefined8 *)(pfVar21 + 4);
                pfVar17 = pfVar17 + 8;
                *(ulong *)(pfVar20 + 6) =
                     CONCAT44((float)((ulong)*(undefined8 *)(pfVar20 + 6) >> 0x20) * fVar61 +
                              fVar62 * ((float)((ulong)*(undefined8 *)(pfVar21 + 6) >> 0x20) +
                                       (float)((ulong)*(undefined8 *)pfVar19 >> 0x20)),
                              (float)*(undefined8 *)(pfVar20 + 6) * fVar61 +
                              fVar62 * ((float)*(undefined8 *)(pfVar21 + 6) +
                                       (float)*(undefined8 *)pfVar19));
                *(ulong *)(pfVar20 + 4) =
                     CONCAT44((float)((ulong)*(undefined8 *)(pfVar20 + 4) >> 0x20) * fVar61 +
                              fVar62 * ((float)((ulong)uVar57 >> 0x20) +
                                       (float)((ulong)uVar56 >> 0x20)),
                              (float)*(undefined8 *)(pfVar20 + 4) * fVar61 +
                              fVar62 * ((float)uVar57 + (float)uVar56));
                pfVar20 = pfVar20 + 8;
                pfVar21 = pfVar21 + 8;
              } while (pfVar20 < pfVar30 + uVar10);
            }
          }
        }
        else if (uVar10 != 0) {
          fVar58 = fVar58 - fVar61;
          fVar46 = (fVar46 + *(float *)(param_1 + 0x1b4) * fVar55) / (float)uVar10;
          pfVar17 = pfVar30;
          pfVar20 = local_d8[2];
          pfVar21 = local_d8[3];
          fVar55 = fVar62;
          do {
            fVar49 = *pfVar17 * fVar61;
            fVar61 = fVar61 + fVar58 / (float)uVar10;
            fVar47 = fVar62 * *pfVar20;
            fVar48 = fVar55 * *pfVar21;
            fVar62 = fVar62 + fVar46;
            fVar55 = fVar55 + fVar46;
            pfVar19 = pfVar17 + 1;
            *pfVar17 = fVar49 + fVar47 + fVar48;
            pfVar17 = pfVar19;
            pfVar20 = pfVar20 + 1;
            pfVar21 = pfVar21 + 1;
          } while (pfVar19 < pfVar30 + uVar10);
        }
        if (*(char *)(param_1 + 0x138) != '\0') {
          fVar55 = *(float *)(param_1 + 0x19c) * fVar60 * *(float *)(param_1 + 0x1b0);
          fVar58 = *(float *)(*(long *)(param_1 + 0x158) + 0x3c) * fVar80 *
                   *(float *)(*(long *)(param_1 + 0x158) + 0x50);
          if (fVar58 == fVar55) {
            if (uVar10 != 0) {
              uVar33 = lVar43 + lVar14 + lVar42 + uVar12;
              uVar16 = lVar43 + lVar14 + lVar42 + 0x10;
              if (uVar33 <= uVar16) {
                uVar33 = uVar16;
              }
              uVar33 = ~(lVar43 + lVar42 + lVar14) + uVar33;
              uVar40 = ((uint)(uVar33 >> 4) & 0xfffffff) + 1;
              uVar16 = (ulong)uVar40 & 3;
              pfVar17 = pfVar4;
              pfVar20 = pfVar30;
              pfVar21 = pfVar3;
              if ((uVar40 & 3) != 0) {
                pfVar19 = pfVar4;
                pfVar22 = pfVar3;
                pfVar32 = pfVar30;
                do {
                  pfVar20 = pfVar32 + 4;
                  uVar16 = uVar16 - 1;
                  pfVar17 = pfVar19 + 4;
                  uVar56 = *(undefined8 *)pfVar19;
                  pfVar21 = pfVar22 + 4;
                  uVar57 = *(undefined8 *)pfVar22;
                  *(ulong *)(pfVar32 + 2) =
                       CONCAT44((float)((ulong)*(undefined8 *)(pfVar32 + 2) >> 0x20) +
                                fVar55 * ((float)((ulong)*(undefined8 *)(pfVar22 + 2) >> 0x20) +
                                         (float)((ulong)*(undefined8 *)(pfVar19 + 2) >> 0x20)),
                                (float)*(undefined8 *)(pfVar32 + 2) +
                                fVar55 * ((float)*(undefined8 *)(pfVar22 + 2) +
                                         (float)*(undefined8 *)(pfVar19 + 2)));
                  *(ulong *)pfVar32 =
                       CONCAT44((float)((ulong)*(undefined8 *)pfVar32 >> 0x20) +
                                fVar55 * ((float)((ulong)uVar57 >> 0x20) +
                                         (float)((ulong)uVar56 >> 0x20)),
                                (float)*(undefined8 *)pfVar32 +
                                fVar55 * ((float)uVar57 + (float)uVar56));
                  pfVar19 = pfVar17;
                  pfVar22 = pfVar21;
                  pfVar32 = pfVar20;
                } while (uVar16 != 0);
              }
              if (0x2f < uVar33) {
                do {
                  uVar56 = *(undefined8 *)pfVar17;
                  uVar57 = *(undefined8 *)pfVar21;
                  *(ulong *)(pfVar20 + 2) =
                       CONCAT44((float)((ulong)*(undefined8 *)(pfVar20 + 2) >> 0x20) +
                                fVar55 * ((float)((ulong)*(undefined8 *)(pfVar21 + 2) >> 0x20) +
                                         (float)((ulong)*(undefined8 *)(pfVar17 + 2) >> 0x20)),
                                (float)*(undefined8 *)(pfVar20 + 2) +
                                fVar55 * ((float)*(undefined8 *)(pfVar21 + 2) +
                                         (float)*(undefined8 *)(pfVar17 + 2)));
                  *(ulong *)pfVar20 =
                       CONCAT44((float)((ulong)*(undefined8 *)pfVar20 >> 0x20) +
                                fVar55 * ((float)((ulong)uVar57 >> 0x20) +
                                         (float)((ulong)uVar56 >> 0x20)),
                                (float)*(undefined8 *)pfVar20 +
                                fVar55 * ((float)uVar57 + (float)uVar56));
                  uVar56 = *(undefined8 *)(pfVar17 + 4);
                  uVar57 = *(undefined8 *)(pfVar21 + 4);
                  *(ulong *)(pfVar20 + 6) =
                       CONCAT44((float)((ulong)*(undefined8 *)(pfVar20 + 6) >> 0x20) +
                                fVar55 * ((float)((ulong)*(undefined8 *)(pfVar21 + 6) >> 0x20) +
                                         (float)((ulong)*(undefined8 *)(pfVar17 + 6) >> 0x20)),
                                (float)*(undefined8 *)(pfVar20 + 6) +
                                fVar55 * ((float)*(undefined8 *)(pfVar21 + 6) +
                                         (float)*(undefined8 *)(pfVar17 + 6)));
                  *(ulong *)(pfVar20 + 4) =
                       CONCAT44((float)((ulong)*(undefined8 *)(pfVar20 + 4) >> 0x20) +
                                fVar55 * ((float)((ulong)uVar57 >> 0x20) +
                                         (float)((ulong)uVar56 >> 0x20)),
                                (float)*(undefined8 *)(pfVar20 + 4) +
                                fVar55 * ((float)uVar57 + (float)uVar56));
                  uVar56 = *(undefined8 *)(pfVar17 + 8);
                  uVar57 = *(undefined8 *)(pfVar21 + 8);
                  *(ulong *)(pfVar20 + 10) =
                       CONCAT44((float)((ulong)*(undefined8 *)(pfVar20 + 10) >> 0x20) +
                                fVar55 * ((float)((ulong)*(undefined8 *)(pfVar21 + 10) >> 0x20) +
                                         (float)((ulong)*(undefined8 *)(pfVar17 + 10) >> 0x20)),
                                (float)*(undefined8 *)(pfVar20 + 10) +
                                fVar55 * ((float)*(undefined8 *)(pfVar21 + 10) +
                                         (float)*(undefined8 *)(pfVar17 + 10)));
                  *(ulong *)(pfVar20 + 8) =
                       CONCAT44((float)((ulong)*(undefined8 *)(pfVar20 + 8) >> 0x20) +
                                fVar55 * ((float)((ulong)uVar57 >> 0x20) +
                                         (float)((ulong)uVar56 >> 0x20)),
                                (float)*(undefined8 *)(pfVar20 + 8) +
                                fVar55 * ((float)uVar57 + (float)uVar56));
                  pfVar19 = pfVar17 + 0xe;
                  uVar56 = *(undefined8 *)(pfVar17 + 0xc);
                  uVar57 = *(undefined8 *)(pfVar21 + 0xc);
                  pfVar17 = pfVar17 + 0x10;
                  *(ulong *)(pfVar20 + 0xe) =
                       CONCAT44((float)((ulong)*(undefined8 *)(pfVar20 + 0xe) >> 0x20) +
                                fVar55 * ((float)((ulong)*(undefined8 *)(pfVar21 + 0xe) >> 0x20) +
                                         (float)((ulong)*(undefined8 *)pfVar19 >> 0x20)),
                                (float)*(undefined8 *)(pfVar20 + 0xe) +
                                fVar55 * ((float)*(undefined8 *)(pfVar21 + 0xe) +
                                         (float)*(undefined8 *)pfVar19));
                  *(ulong *)(pfVar20 + 0xc) =
                       CONCAT44((float)((ulong)*(undefined8 *)(pfVar20 + 0xc) >> 0x20) +
                                fVar55 * ((float)((ulong)uVar57 >> 0x20) +
                                         (float)((ulong)uVar56 >> 0x20)),
                                (float)*(undefined8 *)(pfVar20 + 0xc) +
                                fVar55 * ((float)uVar57 + (float)uVar56));
                  pfVar20 = pfVar20 + 0x10;
                  pfVar21 = pfVar21 + 0x10;
                } while (pfVar20 < pfVar30 + uVar10);
              }
            }
          }
          else if (uVar10 != 0) {
            fVar61 = (fVar58 - fVar55) / (float)uVar10;
            pfVar17 = pfVar30;
            pfVar20 = pfVar4;
            pfVar21 = pfVar3;
            fVar58 = fVar55;
            do {
              fVar62 = fVar55 * *pfVar20;
              fVar46 = fVar58 * *pfVar21;
              fVar55 = fVar55 + fVar61;
              fVar58 = fVar58 + fVar61;
              pfVar19 = pfVar17 + 1;
              *pfVar17 = *pfVar17 + fVar62 + fVar46;
              pfVar17 = pfVar19;
              pfVar20 = pfVar20 + 1;
              pfVar21 = pfVar21 + 1;
            } while (pfVar19 < pfVar30 + uVar10);
          }
          fVar60 = *(float *)(param_1 + 0x1a0) * fVar60;
          fVar55 = -(fVar60 * *(float *)(param_1 + 0x1b0));
          fVar58 = fVar63 * -0.003928371 * *(float *)(*(long *)(param_1 + 0x158) + 0x40) *
                   *(float *)(*(long *)(param_1 + 0x158) + 0x50);
          if (fVar58 == fVar55) {
            if (uVar10 != 0) {
              uVar12 = lVar43 + lVar14 + lVar42 + uVar12;
              uVar16 = lVar43 + lVar14 + lVar42 + 0x10;
              if (uVar12 <= uVar16) {
                uVar12 = uVar16;
              }
              uVar12 = ~(lVar43 + lVar42 + lVar14) + uVar12;
              uVar40 = ((uint)(uVar12 >> 4) & 0xfffffff) + 1;
              uVar16 = (ulong)uVar40 & 3;
              pfVar20 = pfVar30;
              pfVar17 = pfVar8;
              pfVar21 = pfVar38;
              if ((uVar40 & 3) != 0) {
                pfVar19 = pfVar8;
                pfVar22 = pfVar38;
                pfVar32 = pfVar30;
                do {
                  pfVar20 = pfVar32 + 4;
                  uVar16 = uVar16 - 1;
                  pfVar17 = pfVar19 + 4;
                  uVar56 = *(undefined8 *)pfVar19;
                  pfVar21 = pfVar22 + 4;
                  uVar57 = *(undefined8 *)pfVar22;
                  *(ulong *)(pfVar32 + 2) =
                       CONCAT44((float)((ulong)*(undefined8 *)(pfVar32 + 2) >> 0x20) +
                                fVar55 * ((float)((ulong)*(undefined8 *)(pfVar22 + 2) >> 0x20) +
                                         (float)((ulong)*(undefined8 *)(pfVar19 + 2) >> 0x20)),
                                (float)*(undefined8 *)(pfVar32 + 2) +
                                fVar55 * ((float)*(undefined8 *)(pfVar22 + 2) +
                                         (float)*(undefined8 *)(pfVar19 + 2)));
                  *(ulong *)pfVar32 =
                       CONCAT44((float)((ulong)*(undefined8 *)pfVar32 >> 0x20) +
                                fVar55 * ((float)((ulong)uVar57 >> 0x20) +
                                         (float)((ulong)uVar56 >> 0x20)),
                                (float)*(undefined8 *)pfVar32 +
                                fVar55 * ((float)uVar57 + (float)uVar56));
                  pfVar19 = pfVar17;
                  pfVar22 = pfVar21;
                  pfVar32 = pfVar20;
                } while (uVar16 != 0);
              }
              if (0x2f < uVar12) {
                do {
                  uVar56 = *(undefined8 *)pfVar17;
                  uVar57 = *(undefined8 *)pfVar21;
                  *(ulong *)(pfVar20 + 2) =
                       CONCAT44((float)((ulong)*(undefined8 *)(pfVar20 + 2) >> 0x20) +
                                fVar55 * ((float)((ulong)*(undefined8 *)(pfVar21 + 2) >> 0x20) +
                                         (float)((ulong)*(undefined8 *)(pfVar17 + 2) >> 0x20)),
                                (float)*(undefined8 *)(pfVar20 + 2) +
                                fVar55 * ((float)*(undefined8 *)(pfVar21 + 2) +
                                         (float)*(undefined8 *)(pfVar17 + 2)));
                  *(ulong *)pfVar20 =
                       CONCAT44((float)((ulong)*(undefined8 *)pfVar20 >> 0x20) +
                                fVar55 * ((float)((ulong)uVar57 >> 0x20) +
                                         (float)((ulong)uVar56 >> 0x20)),
                                (float)*(undefined8 *)pfVar20 +
                                fVar55 * ((float)uVar57 + (float)uVar56));
                  uVar56 = *(undefined8 *)(pfVar17 + 4);
                  uVar57 = *(undefined8 *)(pfVar21 + 4);
                  *(ulong *)(pfVar20 + 6) =
                       CONCAT44((float)((ulong)*(undefined8 *)(pfVar20 + 6) >> 0x20) +
                                fVar55 * ((float)((ulong)*(undefined8 *)(pfVar21 + 6) >> 0x20) +
                                         (float)((ulong)*(undefined8 *)(pfVar17 + 6) >> 0x20)),
                                (float)*(undefined8 *)(pfVar20 + 6) +
                                fVar55 * ((float)*(undefined8 *)(pfVar21 + 6) +
                                         (float)*(undefined8 *)(pfVar17 + 6)));
                  *(ulong *)(pfVar20 + 4) =
                       CONCAT44((float)((ulong)*(undefined8 *)(pfVar20 + 4) >> 0x20) +
                                fVar55 * ((float)((ulong)uVar57 >> 0x20) +
                                         (float)((ulong)uVar56 >> 0x20)),
                                (float)*(undefined8 *)(pfVar20 + 4) +
                                fVar55 * ((float)uVar57 + (float)uVar56));
                  uVar56 = *(undefined8 *)(pfVar17 + 8);
                  uVar57 = *(undefined8 *)(pfVar21 + 8);
                  *(ulong *)(pfVar20 + 10) =
                       CONCAT44((float)((ulong)*(undefined8 *)(pfVar20 + 10) >> 0x20) +
                                fVar55 * ((float)((ulong)*(undefined8 *)(pfVar21 + 10) >> 0x20) +
                                         (float)((ulong)*(undefined8 *)(pfVar17 + 10) >> 0x20)),
                                (float)*(undefined8 *)(pfVar20 + 10) +
                                fVar55 * ((float)*(undefined8 *)(pfVar21 + 10) +
                                         (float)*(undefined8 *)(pfVar17 + 10)));
                  *(ulong *)(pfVar20 + 8) =
                       CONCAT44((float)((ulong)*(undefined8 *)(pfVar20 + 8) >> 0x20) +
                                fVar55 * ((float)((ulong)uVar57 >> 0x20) +
                                         (float)((ulong)uVar56 >> 0x20)),
                                (float)*(undefined8 *)(pfVar20 + 8) +
                                fVar55 * ((float)uVar57 + (float)uVar56));
                  pfVar19 = pfVar17 + 0xe;
                  uVar56 = *(undefined8 *)(pfVar17 + 0xc);
                  uVar57 = *(undefined8 *)(pfVar21 + 0xc);
                  pfVar17 = pfVar17 + 0x10;
                  *(ulong *)(pfVar20 + 0xe) =
                       CONCAT44((float)((ulong)*(undefined8 *)(pfVar20 + 0xe) >> 0x20) +
                                fVar55 * ((float)((ulong)*(undefined8 *)(pfVar21 + 0xe) >> 0x20) +
                                         (float)((ulong)*(undefined8 *)pfVar19 >> 0x20)),
                                (float)*(undefined8 *)(pfVar20 + 0xe) +
                                fVar55 * ((float)*(undefined8 *)(pfVar21 + 0xe) +
                                         (float)*(undefined8 *)pfVar19));
                  *(ulong *)(pfVar20 + 0xc) =
                       CONCAT44((float)((ulong)*(undefined8 *)(pfVar20 + 0xc) >> 0x20) +
                                fVar55 * ((float)((ulong)uVar57 >> 0x20) +
                                         (float)((ulong)uVar56 >> 0x20)),
                                (float)*(undefined8 *)(pfVar20 + 0xc) +
                                fVar55 * ((float)uVar57 + (float)uVar56));
                  pfVar20 = pfVar20 + 0x10;
                  pfVar21 = pfVar21 + 0x10;
                } while (pfVar20 < pfVar30 + uVar10);
              }
            }
          }
          else if (uVar10 != 0) {
            fVar58 = (fVar58 + fVar60 * *(float *)(param_1 + 0x1b0)) / (float)uVar10;
            pfVar17 = pfVar30;
            pfVar20 = pfVar8;
            pfVar21 = pfVar38;
            fVar60 = fVar55;
            do {
              fVar61 = fVar55 * *pfVar20;
              fVar62 = fVar60 * *pfVar21;
              fVar55 = fVar55 + fVar58;
              fVar60 = fVar60 + fVar58;
              pfVar19 = pfVar17 + 1;
              *pfVar17 = *pfVar17 + fVar61 + fVar62;
              pfVar17 = pfVar19;
              pfVar20 = pfVar20 + 1;
              pfVar21 = pfVar21 + 1;
            } while (pfVar19 < pfVar30 + uVar10);
          }
        }
        fVar79 = fVar79 + fVar79;
        FUN_02e0add0(*(undefined4 *)(param_1 + 0x1ac),
                     *(undefined4 *)(*(long *)(param_1 + 0x158) + 0x4c),
                     *(float *)(param_1 + 0x1b4) * fVar79,
                     *(float *)(*(long *)(param_1 + 0x158) + 0x54) * fVar82,
                     *param_2 + (ulong)*(ushort *)(param_2 + 2) * 0x10 + lVar42,local_b8,uVar10);
        FUN_02e0add0(*(undefined4 *)(param_1 + 0x1ac),
                     *(undefined4 *)(*(long *)(param_1 + 0x158) + 0x4c),
                     *(float *)(param_1 + 0x1b4) * fVar79,
                     *(float *)(*(long *)(param_1 + 0x158) + 0x54) * fVar82,
                     *param_2 + (ulong)*(ushort *)(param_2 + 2) * 0x14 + lVar42,pfVar29,uVar10);
        FUN_02e0add0(*(undefined4 *)(param_1 + 0x1ac),
                     *(undefined4 *)(*(long *)(param_1 + 0x158) + 0x4c),
                     *(float *)(param_1 + 0x1b4) * fVar79,
                     *(float *)(*(long *)(param_1 + 0x158) + 0x54) * fVar82,
                     *param_2 + (ulong)*(ushort *)(param_2 + 2) * 0x18 + lVar42,pfVar13,uVar10);
        FUN_02e0add0(*(undefined4 *)(param_1 + 0x1ac),
                     *(undefined4 *)(*(long *)(param_1 + 0x158) + 0x4c),
                     *(float *)(param_1 + 0x1b4) * fVar79,
                     *(float *)(*(long *)(param_1 + 0x158) + 0x54) * fVar82,
                     *param_2 + (ulong)*(ushort *)(param_2 + 2) * 0x1c + lVar42,pfVar31,uVar10);
        uVar16 = (ulong)(uint)(*(float *)(*(long *)(param_1 + 0x158) + 0x54) * fVar82);
        FUN_02e0add0(*(undefined4 *)(param_1 + 0x1ac),
                     *(undefined4 *)(*(long *)(param_1 + 0x158) + 0x4c),
                     *(float *)(param_1 + 0x1b4) * fVar79,
                     *param_2 + (ulong)*(ushort *)(param_2 + 2) * 0x20 + lVar42,pfVar23,uVar10);
        if (9 < (*(uint *)(param_2 + 1) & 0xfe)) {
          FUN_02e0add0(*(undefined4 *)(param_1 + 0x1ac),
                       *(undefined4 *)(*(long *)(param_1 + 0x158) + 0x4c),
                       *(float *)(param_1 + 0x1b4) * fVar79,
                       *(float *)(*(long *)(param_1 + 0x158) + 0x54) * fVar82,
                       *param_2 + (ulong)*(ushort *)(param_2 + 2) * 0x24 + lVar42,pfVar34,uVar10);
          FUN_02e0add0(*(undefined4 *)(param_1 + 0x1ac),
                       *(undefined4 *)(*(long *)(param_1 + 0x158) + 0x4c),
                       *(float *)(param_1 + 0x1b4) * fVar79,
                       *(float *)(*(long *)(param_1 + 0x158) + 0x54) * fVar82,
                       *param_2 + (ulong)*(ushort *)(param_2 + 2) * 0x28 + lVar42,pfVar37,uVar10);
          FUN_02e0add0(*(undefined4 *)(param_1 + 0x1ac),
                       *(undefined4 *)(*(long *)(param_1 + 0x158) + 0x4c),
                       *(float *)(param_1 + 0x1b4) * fVar79,
                       *(float *)(*(long *)(param_1 + 0x158) + 0x54) * fVar82,
                       *param_2 + (ulong)*(ushort *)(param_2 + 2) * 0x2c + lVar42,pfVar29,uVar10);
          FUN_02e0add0(*(undefined4 *)(param_1 + 0x1ac),
                       *(undefined4 *)(*(long *)(param_1 + 0x158) + 0x4c),
                       *(float *)(param_1 + 0x1b4) * fVar79,
                       *(float *)(*(long *)(param_1 + 0x158) + 0x54) * fVar82,
                       *param_2 + (ulong)*(ushort *)(param_2 + 2) * 0x30 + lVar42,pfVar13,uVar10);
          FUN_02e0add0(*(undefined4 *)(param_1 + 0x1ac),
                       *(undefined4 *)(*(long *)(param_1 + 0x158) + 0x4c),
                       *(float *)(param_1 + 0x1b4) * fVar79,
                       *(float *)(*(long *)(param_1 + 0x158) + 0x54) * fVar82,
                       *param_2 + (ulong)*(ushort *)(param_2 + 2) * 0x34 + lVar42,pfVar31,uVar10);
          FUN_02e0add0(*(undefined4 *)(param_1 + 0x1ac),
                       *(undefined4 *)(*(long *)(param_1 + 0x158) + 0x4c),
                       *(float *)(param_1 + 0x1b4) * fVar79,
                       *(float *)(*(long *)(param_1 + 0x158) + 0x54) * fVar82,
                       *param_2 + (ulong)*(ushort *)(param_2 + 2) * 0x38 + lVar42,pfVar23,uVar10);
          uVar16 = (ulong)(uint)(*(float *)(*(long *)(param_1 + 0x158) + 0x54) * fVar82);
          FUN_02e0add0(*(undefined4 *)(param_1 + 0x1ac),
                       *(undefined4 *)(*(long *)(param_1 + 0x158) + 0x4c),
                       *(float *)(param_1 + 0x1b4) * fVar79,
                       *param_2 + (ulong)*(ushort *)(param_2 + 2) * 0x3c + lVar42,pfVar34,uVar10);
        }
        lVar43 = *(long *)(param_1 + 0x158);
        uVar41 = uVar10 + uVar41;
        *(undefined4 *)(param_1 + 0x1ac) = *(undefined4 *)(lVar43 + 0x4c);
        *(undefined4 *)(param_1 + 0x1b0) = *(undefined4 *)(lVar43 + 0x50);
        *(undefined4 *)(param_1 + 0x1b4) = *(undefined4 *)(lVar43 + 0x54);
        *(undefined4 *)(param_1 + 0x19c) = *(undefined4 *)(lVar43 + 0x3c);
        *(undefined4 *)(param_1 + 0x1a4) = *(undefined4 *)(lVar43 + 0x44);
        *(undefined4 *)(param_1 + 0x1a0) = *(undefined4 *)(lVar43 + 0x40);
        *(undefined4 *)(param_1 + 0x1a8) = *(undefined4 *)(lVar43 + 0x48);
        uVar25 = uVar25 - uVar10;
        fVar79 = fVar81;
        fVar60 = fVar80;
      } while (uVar25 != 0);
    }
    (**(code **)(**(long **)(param_1 + 0x160) + 0x18))(*(long **)(param_1 + 0x160),__src);
  }
  return;
}


