/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e179a8; name: FUN_02e179a8
 */


void FUN_02e179a8(long param_1,long *param_2)

{
  float *pfVar1;
  float *__s;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *__dest;
  long *plVar7;
  float *pfVar8;
  float *pfVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  float *__src;
  ulong uVar13;
  ulong uVar14;
  uint uVar15;
  byte bVar16;
  uint uVar17;
  uint uVar18;
  float *pfVar19;
  uint uVar20;
  long lVar21;
  uint *puVar22;
  float *pfVar23;
  uint *puVar24;
  float *pfVar25;
  uint uVar26;
  float *pfVar27;
  int iVar28;
  int iVar29;
  uint uVar30;
  float *pfVar31;
  ulong uVar32;
  float *pfVar33;
  long lVar34;
  float *pfVar35;
  undefined8 *puVar36;
  ulong *puVar37;
  float *pfVar38;
  float *pfVar39;
  long lVar40;
  ulong uVar41;
  byte bVar42;
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
  undefined8 uVar54;
  undefined8 uVar55;
  float fVar56;
  float fVar57;
  undefined8 uVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  ulong uVar62;
  ulong uVar63;
  undefined8 uVar64;
  ulong uVar65;
  undefined8 uVar66;
  ulong uVar67;
  undefined8 uVar68;
  ulong uVar69;
  undefined8 uVar70;
  ulong uVar71;
  undefined8 uVar72;
  ulong uVar73;
  undefined8 uVar74;
  ulong uVar75;
  undefined8 uVar76;
  ulong uVar77;
  float fVar78;
  float fVar79;
  undefined8 uVar80;
  ulong uVar81;
  undefined8 uVar82;
  ulong uVar83;
  undefined8 uVar84;
  ulong uVar85;
  undefined8 uVar86;
  ulong uVar87;
  undefined8 uVar88;
  ulong uVar89;
  undefined8 uVar90;
  ulong uVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  float fVar95;
  float fVar96;
  float fVar97;
  float *local_d0;
  float *local_c8 [5];
  
  __src = (float *)(**(code **)(**(long **)(param_1 + 0x160) + 0x10))
                             (*(long **)(param_1 + 0x160),
                              (ulong)*(byte *)(param_1 + 0x138) * 0x800 + 0x1800);
  if (__src != (float *)0x0) {
    pfVar1 = __src + 0x300;
    local_c8[2] = __src + 0x400;
    __s = __src + 0x200;
    local_c8[3] = __src + 0x500;
    uVar20 = (uint)*(ushort *)((long)param_2 + 0x12);
    bVar12 = *(char *)(param_1 + 0x138) != '\0';
    pfVar39 = (float *)0x0;
    if (bVar12) {
      pfVar39 = __src + 0x900;
    }
    local_d0 = (float *)0x0;
    if (bVar12) {
      local_d0 = __src + 0x800;
    }
    pfVar8 = (float *)0x0;
    if (bVar12) {
      pfVar8 = __src + 0x700;
    }
    pfVar9 = (float *)0x0;
    if (bVar12) {
      pfVar9 = __src + 0x600;
    }
    local_c8[0] = __s;
    local_c8[1] = pfVar1;
    if (*(ushort *)((long)param_2 + 0x12) != 0) {
      uVar15 = 0;
      fVar56 = *(float *)(*(long *)(param_1 + 0x158) + 0x14);
      fVar78 = fVar56 * 0.003928371;
      pfVar2 = __src + 0x201;
      pfVar3 = __src + 0x301;
      uVar62 = 0x3b80b990;
      fVar79 = SQRT(fVar56 * 0.0027777778);
      pfVar4 = __src + 0x101;
      pfVar5 = __src + 0x204;
      pfVar6 = __src + 0x304;
      __dest = __src + 0x100;
      fVar52 = SQRT(*(float *)(param_1 + 0x174) * 0.0027777778);
      fVar59 = *(float *)(param_1 + 0x174) * 0.003928371;
      do {
        uVar17 = uVar20;
        if (0xff < uVar20) {
          uVar17 = 0x100;
        }
        FUN_02e1ce44(param_1,param_2,__src,uVar17);
        uVar26 = *(uint *)(param_1 + 0xd0);
        uVar14 = (ulong)(uVar17 << 2);
        if (uVar26 == 0) {
          memcpy(__dest,__src,uVar14);
        }
        else {
          uVar32 = (ulong)*(uint *)(param_1 + 0xe0);
          pfVar31 = (float *)(*(long *)(param_1 + 0xd8) + uVar32 * 4);
          pfVar33 = __dest;
          pfVar19 = __src;
          uVar18 = uVar17;
          do {
            uVar26 = uVar26 - (int)uVar32;
            uVar30 = uVar18;
            if (uVar26 <= uVar18) {
              uVar30 = uVar26;
            }
            uVar10 = uVar30 >> 2;
            uVar26 = uVar30 & 3;
            pfVar25 = pfVar33;
            pfVar23 = pfVar19;
            pfVar27 = pfVar31;
            if (uVar10 != 0) {
              uVar11 = uVar30 >> 2 & 3;
              pfVar27 = (float *)(ulong)uVar10;
              if (2 < uVar10 - 1) {
                iVar28 = uVar10 - uVar11;
                do {
                  uVar55 = *(undefined8 *)(pfVar31 + 2);
                  uVar54 = *(undefined8 *)pfVar31;
                  iVar28 = iVar28 + -4;
                  uVar58 = *(undefined8 *)pfVar19;
                  *(undefined8 *)(pfVar31 + 2) = *(undefined8 *)(pfVar19 + 2);
                  *(undefined8 *)pfVar31 = uVar58;
                  *(undefined8 *)(pfVar33 + 2) = uVar55;
                  *(undefined8 *)pfVar33 = uVar54;
                  uVar55 = *(undefined8 *)(pfVar31 + 6);
                  uVar54 = *(undefined8 *)(pfVar31 + 4);
                  uVar58 = *(undefined8 *)(pfVar19 + 4);
                  *(undefined8 *)(pfVar31 + 6) = *(undefined8 *)(pfVar19 + 6);
                  *(undefined8 *)(pfVar31 + 4) = uVar58;
                  *(undefined8 *)(pfVar33 + 6) = uVar55;
                  *(undefined8 *)(pfVar33 + 4) = uVar54;
                  uVar55 = *(undefined8 *)(pfVar31 + 10);
                  uVar54 = *(undefined8 *)(pfVar31 + 8);
                  uVar58 = *(undefined8 *)(pfVar19 + 8);
                  *(undefined8 *)(pfVar31 + 10) = *(undefined8 *)(pfVar19 + 10);
                  *(undefined8 *)(pfVar31 + 8) = uVar58;
                  *(undefined8 *)(pfVar33 + 10) = uVar55;
                  *(undefined8 *)(pfVar33 + 8) = uVar54;
                  uVar55 = *(undefined8 *)(pfVar31 + 0xe);
                  uVar54 = *(undefined8 *)(pfVar31 + 0xc);
                  pfVar25 = pfVar19 + 0xe;
                  uVar58 = *(undefined8 *)(pfVar19 + 0xc);
                  pfVar19 = pfVar19 + 0x10;
                  *(undefined8 *)(pfVar31 + 0xe) = *(undefined8 *)pfVar25;
                  *(undefined8 *)(pfVar31 + 0xc) = uVar58;
                  *(undefined8 *)(pfVar33 + 0xe) = uVar55;
                  *(undefined8 *)(pfVar33 + 0xc) = uVar54;
                  pfVar31 = pfVar31 + 0x10;
                  pfVar33 = pfVar33 + 0x10;
                  pfVar23 = pfVar19;
                  pfVar27 = pfVar31;
                  pfVar25 = pfVar33;
                } while (iVar28 != 0);
              }
              if (uVar11 != 0) {
                iVar28 = -uVar11;
                pfVar19 = pfVar25;
                pfVar33 = pfVar23;
                do {
                  pfVar27 = pfVar31 + 4;
                  uVar55 = *(undefined8 *)(pfVar31 + 2);
                  uVar54 = *(undefined8 *)pfVar31;
                  bVar12 = iVar28 != -1;
                  iVar28 = iVar28 + 1;
                  pfVar23 = pfVar33 + 4;
                  uVar58 = *(undefined8 *)pfVar33;
                  *(undefined8 *)(pfVar31 + 2) = *(undefined8 *)(pfVar33 + 2);
                  *(undefined8 *)pfVar31 = uVar58;
                  pfVar25 = pfVar19 + 4;
                  *(undefined8 *)(pfVar19 + 2) = uVar55;
                  *(undefined8 *)pfVar19 = uVar54;
                  pfVar19 = pfVar25;
                  pfVar33 = pfVar23;
                  pfVar31 = pfVar27;
                } while (bVar12);
              }
            }
            pfVar33 = pfVar25;
            pfVar19 = pfVar23;
            pfVar31 = pfVar27;
            if (uVar26 != 0) {
              fVar53 = *pfVar27;
              pfVar19 = pfVar23 + 1;
              pfVar31 = pfVar27 + 1;
              *pfVar27 = *pfVar23;
              pfVar33 = pfVar25 + 1;
              *pfVar25 = fVar53;
              if (1 < uVar26) {
                fVar53 = pfVar27[1];
                pfVar27[1] = pfVar23[1];
                pfVar25[1] = fVar53;
                if (uVar26 == 2) {
                  pfVar19 = pfVar23 + 2;
                  pfVar31 = pfVar27 + 2;
                  pfVar33 = pfVar25 + 2;
                }
                else {
                  fVar53 = pfVar27[2];
                  pfVar19 = pfVar23 + 3;
                  pfVar27[2] = pfVar23[2];
                  pfVar31 = pfVar27 + 3;
                  pfVar25[2] = fVar53;
                  pfVar33 = pfVar25 + 3;
                }
              }
            }
            uVar10 = *(int *)(param_1 + 0xe0) + uVar30;
            uVar26 = *(uint *)(param_1 + 0xd0);
            *(uint *)(param_1 + 0xe0) = uVar10;
            if (uVar10 == uVar26) {
              pfVar31 = *(float **)(param_1 + 0xd8);
              uVar10 = 0;
              *(undefined4 *)(param_1 + 0xe0) = 0;
            }
            uVar32 = (ulong)uVar10;
            uVar18 = uVar18 - uVar30;
          } while (uVar18 != 0);
        }
        uVar26 = *(uint *)(param_1 + 0xb8);
        if ((uVar26 != 0) && (uVar17 != 0)) {
          uVar32 = (ulong)*(uint *)(param_1 + 200);
          pfVar31 = __src;
          pfVar19 = (float *)(*(long *)(param_1 + 0xc0) + uVar32 * 4);
          uVar18 = uVar17;
          do {
            uVar26 = uVar26 - (int)uVar32;
            uVar30 = uVar18;
            if (uVar26 <= uVar18) {
              uVar30 = uVar26;
            }
            uVar10 = uVar30 >> 2;
            uVar26 = uVar30 & 3;
            if (uVar10 == 0) {
              pfVar33 = pfVar19;
              pfVar25 = pfVar31;
              if (uVar26 != 0) goto LAB_02e18e68;
            }
            else {
              uVar11 = uVar30 >> 2 & 3;
              pfVar23 = (float *)(ulong)uVar10;
              pfVar33 = pfVar19;
              pfVar27 = (float *)(ulong)(uVar10 - 1);
              pfVar25 = pfVar31;
              if (2 < uVar10 - 1) {
                iVar28 = uVar10 - uVar11;
                do {
                  uVar55 = *(undefined8 *)(pfVar19 + 2);
                  uVar54 = *(undefined8 *)pfVar19;
                  iVar28 = iVar28 + -4;
                  uVar58 = *(undefined8 *)pfVar31;
                  *(undefined8 *)(pfVar19 + 2) = *(undefined8 *)(pfVar31 + 2);
                  *(undefined8 *)pfVar19 = uVar58;
                  *(undefined8 *)(pfVar31 + 2) = uVar55;
                  *(undefined8 *)pfVar31 = uVar54;
                  uVar55 = *(undefined8 *)(pfVar19 + 6);
                  uVar54 = *(undefined8 *)(pfVar19 + 4);
                  uVar58 = *(undefined8 *)(pfVar31 + 4);
                  *(undefined8 *)(pfVar19 + 6) = *(undefined8 *)(pfVar31 + 6);
                  *(undefined8 *)(pfVar19 + 4) = uVar58;
                  *(undefined8 *)(pfVar31 + 6) = uVar55;
                  *(undefined8 *)(pfVar31 + 4) = uVar54;
                  uVar55 = *(undefined8 *)(pfVar19 + 10);
                  uVar54 = *(undefined8 *)(pfVar19 + 8);
                  uVar58 = *(undefined8 *)(pfVar31 + 8);
                  *(undefined8 *)(pfVar19 + 10) = *(undefined8 *)(pfVar31 + 10);
                  *(undefined8 *)(pfVar19 + 8) = uVar58;
                  *(undefined8 *)(pfVar31 + 10) = uVar55;
                  *(undefined8 *)(pfVar31 + 8) = uVar54;
                  uVar55 = *(undefined8 *)(pfVar19 + 0xe);
                  uVar54 = *(undefined8 *)(pfVar19 + 0xc);
                  uVar58 = *(undefined8 *)(pfVar31 + 0xc);
                  *(undefined8 *)(pfVar19 + 0xe) = *(undefined8 *)(pfVar31 + 0xe);
                  *(undefined8 *)(pfVar19 + 0xc) = uVar58;
                  *(undefined8 *)(pfVar31 + 0xe) = uVar55;
                  *(undefined8 *)(pfVar31 + 0xc) = uVar54;
                  pfVar19 = pfVar19 + 0x10;
                  pfVar31 = pfVar31 + 0x10;
                  pfVar23 = pfVar19;
                  pfVar33 = pfVar19;
                  pfVar27 = pfVar31;
                  pfVar25 = pfVar31;
                } while (iVar28 != 0);
              }
              pfVar31 = pfVar27;
              pfVar19 = pfVar23;
              if (uVar11 != 0) {
                iVar28 = -uVar11;
                do {
                  pfVar19 = pfVar33 + 4;
                  uVar55 = *(undefined8 *)(pfVar33 + 2);
                  uVar54 = *(undefined8 *)pfVar33;
                  bVar12 = iVar28 != -1;
                  iVar28 = iVar28 + 1;
                  pfVar31 = pfVar25 + 4;
                  uVar58 = *(undefined8 *)pfVar25;
                  *(undefined8 *)(pfVar33 + 2) = *(undefined8 *)(pfVar25 + 2);
                  *(undefined8 *)pfVar33 = uVar58;
                  *(undefined8 *)(pfVar25 + 2) = uVar55;
                  *(undefined8 *)pfVar25 = uVar54;
                  pfVar33 = pfVar19;
                  pfVar25 = pfVar31;
                } while (bVar12);
              }
              pfVar33 = pfVar19;
              pfVar25 = pfVar31;
              if (uVar26 != 0) {
LAB_02e18e68:
                fVar53 = *pfVar19;
                pfVar33 = pfVar19 + 1;
                *pfVar19 = *pfVar25;
                pfVar31 = pfVar25 + 1;
                *pfVar25 = fVar53;
                if (1 < uVar26) {
                  fVar53 = pfVar19[1];
                  pfVar19[1] = pfVar25[1];
                  pfVar25[1] = fVar53;
                  if (uVar26 == 2) {
                    pfVar33 = pfVar19 + 2;
                    pfVar31 = pfVar25 + 2;
                  }
                  else {
                    fVar53 = pfVar19[2];
                    pfVar19[2] = pfVar25[2];
                    pfVar33 = pfVar19 + 3;
                    pfVar31 = pfVar25 + 3;
                    pfVar25[2] = fVar53;
                  }
                }
              }
            }
            uVar10 = *(int *)(param_1 + 200) + uVar30;
            uVar32 = (ulong)uVar10;
            uVar26 = *(uint *)(param_1 + 0xb8);
            *(uint *)(param_1 + 200) = uVar10;
            if (uVar10 == uVar26) {
              pfVar33 = *(float **)(param_1 + 0xc0);
              uVar32 = 0;
              *(undefined4 *)(param_1 + 200) = 0;
            }
            uVar18 = uVar18 - uVar30;
            pfVar19 = pfVar33;
          } while (uVar18 != 0);
        }
        if (*(char *)(param_1 + 0x138) != '\0') {
          FUN_02e1f368(*(undefined8 *)(param_1 + 0x150),__src,pfVar9,pfVar8,uVar17);
          if ((*(char *)(*(long *)(param_1 + 0x158) + 0x98) != '\0') &&
             (bVar16 = *(byte *)(param_1 + 0x134), bVar16 != 0)) {
            uVar18 = uVar17 & 3;
            iVar28 = 4 - uVar18;
            uVar32 = 0;
            bVar42 = 0;
            uVar41 = (ulong)uVar17;
            uVar26 = iVar28 + uVar17;
            do {
              lVar40 = *(long *)(param_1 + 0x148);
              if (*(int *)(lVar40 + uVar32 * 0xa0 + 0x90) == 1) {
                uVar62 = uVar41;
                uVar30 = uVar17;
                if (uVar18 != 0) {
                  memset(pfVar9 + uVar41,0,(ulong)(uint)(iVar28 * 4));
                  uVar62 = (ulong)uVar26;
                  uVar30 = uVar26;
                }
                puVar36 = (undefined8 *)(lVar40 + uVar32 * 0xa0);
                fVar53 = *(float *)(puVar36 + 0x10);
                fVar57 = *(float *)((long)puVar36 + 0x84);
                fVar60 = *(float *)(puVar36 + 0x11);
                fVar61 = *(float *)((long)puVar36 + 0x8c);
                if (uVar30 != 0) {
                  uVar55 = puVar36[1];
                  uVar54 = *puVar36;
                  uVar64 = puVar36[3];
                  uVar58 = puVar36[2];
                  uVar68 = puVar36[5];
                  uVar66 = puVar36[4];
                  uVar72 = puVar36[7];
                  uVar70 = puVar36[6];
                  uVar76 = puVar36[9];
                  uVar74 = puVar36[8];
                  uVar82 = puVar36[0xb];
                  uVar80 = puVar36[10];
                  uVar86 = puVar36[0xd];
                  uVar84 = puVar36[0xc];
                  uVar90 = puVar36[0xf];
                  uVar88 = puVar36[0xe];
                  pfVar19 = pfVar9;
                  do {
                    fVar94 = fVar53 * (float)uVar74;
                    fVar95 = fVar53 * (float)((ulong)uVar74 >> 0x20);
                    fVar96 = fVar53 * (float)uVar76;
                    fVar97 = fVar53 * (float)((ulong)uVar76 >> 0x20);
                    fVar43 = (float)uVar80 * fVar57;
                    fVar46 = (float)((ulong)uVar80 >> 0x20) * fVar57;
                    fVar49 = (float)uVar82 * fVar57;
                    fVar50 = (float)((ulong)uVar82 >> 0x20) * fVar57;
                    pfVar31 = pfVar19 + 4;
                    fVar53 = (float)((ulong)*(undefined8 *)(pfVar19 + 2) >> 0x20);
                    fVar44 = (float)uVar84 * fVar60;
                    fVar47 = (float)((ulong)uVar84 >> 0x20) * fVar60;
                    fVar45 = (float)uVar88 * fVar61;
                    fVar48 = (float)((ulong)uVar88 >> 0x20) * fVar61;
                    fVar51 = (float)((ulong)uVar90 >> 0x20) * fVar61;
                    fVar92 = (float)*(undefined8 *)pfVar19;
                    fVar93 = (float)((ulong)*(undefined8 *)pfVar19 >> 0x20);
                    fVar57 = (float)*(undefined8 *)(pfVar19 + 2);
                    fVar61 = fVar96 + fVar49 + (float)uVar86 * fVar60 + (float)uVar90 * fVar61 +
                             (float)uVar55 * fVar57 + (float)uVar64 * fVar57 +
                             (float)uVar68 * fVar93 + (float)uVar72 * fVar92;
                    fVar60 = fVar97 + fVar50 + (float)((ulong)uVar86 >> 0x20) * fVar60 + fVar51 +
                             (float)((ulong)uVar55 >> 0x20) * fVar53 +
                             (float)((ulong)uVar64 >> 0x20) * fVar57 +
                             (float)((ulong)uVar68 >> 0x20) * fVar93 +
                             (float)((ulong)uVar72 >> 0x20) * fVar92;
                    *(ulong *)(pfVar19 + 2) = CONCAT44(fVar60,fVar61);
                    *(ulong *)pfVar19 =
                         CONCAT44(fVar95 + fVar46 + fVar47 + fVar48 +
                                  (float)((ulong)uVar54 >> 0x20) * fVar93 +
                                  (float)((ulong)uVar58 >> 0x20) * fVar57 +
                                  (float)((ulong)uVar66 >> 0x20) * fVar93 +
                                  (float)((ulong)uVar70 >> 0x20) * fVar92,
                                  fVar94 + fVar43 + fVar44 + fVar45 + (float)uVar54 * fVar92 +
                                  (float)uVar58 * fVar57 + (float)uVar66 * fVar93 +
                                  (float)uVar70 * fVar92);
                    pfVar19 = pfVar31;
                  } while (pfVar31 < pfVar9 + uVar62);
                }
                *(float *)(puVar36 + 0x10) = fVar53;
                *(float *)((long)puVar36 + 0x84) = fVar57;
                *(float *)(puVar36 + 0x11) = fVar60;
                *(float *)((long)puVar36 + 0x8c) = fVar61;
                lVar40 = *(long *)(param_1 + 0x148);
                uVar13 = uVar41;
                uVar30 = uVar17;
                if (uVar18 != 0) {
                  memset(pfVar8 + uVar41,0,(ulong)(uint)(iVar28 * 4));
                  uVar13 = (ulong)uVar26;
                  uVar30 = uVar26;
                }
                puVar37 = (ulong *)(lVar40 + (uVar32 + 1) * 0xa0);
                fVar53 = *(float *)(puVar37 + 0x10);
                fVar60 = *(float *)((long)puVar37 + 0x84);
                fVar57 = *(float *)(puVar37 + 0x11);
                fVar61 = *(float *)((long)puVar37 + 0x8c);
                uVar62 = (ulong)(uint)fVar61;
                if (uVar30 != 0) {
                  uVar32 = puVar37[1];
                  uVar62 = *puVar37;
                  uVar65 = puVar37[3];
                  uVar63 = puVar37[2];
                  uVar69 = puVar37[5];
                  uVar67 = puVar37[4];
                  uVar73 = puVar37[7];
                  uVar71 = puVar37[6];
                  uVar77 = puVar37[9];
                  uVar75 = puVar37[8];
                  uVar83 = puVar37[0xb];
                  uVar81 = puVar37[10];
                  uVar87 = puVar37[0xd];
                  uVar85 = puVar37[0xc];
                  uVar91 = puVar37[0xf];
                  uVar89 = puVar37[0xe];
                  pfVar19 = pfVar8;
                  do {
                    fVar94 = fVar53 * (float)uVar75;
                    fVar95 = fVar53 * (float)(uVar75 >> 0x20);
                    fVar96 = fVar53 * (float)uVar77;
                    fVar97 = fVar53 * (float)(uVar77 >> 0x20);
                    fVar43 = (float)uVar81 * fVar60;
                    fVar46 = (float)(uVar81 >> 0x20) * fVar60;
                    fVar49 = (float)uVar83 * fVar60;
                    fVar50 = (float)(uVar83 >> 0x20) * fVar60;
                    pfVar31 = pfVar19 + 4;
                    fVar53 = (float)((ulong)*(undefined8 *)(pfVar19 + 2) >> 0x20);
                    fVar44 = (float)uVar85 * fVar57;
                    fVar47 = (float)(uVar85 >> 0x20) * fVar57;
                    fVar45 = (float)uVar89 * fVar61;
                    fVar48 = (float)(uVar89 >> 0x20) * fVar61;
                    fVar51 = (float)(uVar91 >> 0x20) * fVar61;
                    fVar92 = (float)*(undefined8 *)pfVar19;
                    fVar93 = (float)((ulong)*(undefined8 *)pfVar19 >> 0x20);
                    fVar60 = (float)*(undefined8 *)(pfVar19 + 2);
                    fVar61 = fVar96 + fVar49 + (float)uVar87 * fVar57 + (float)uVar91 * fVar61 +
                             (float)uVar32 * fVar60 + (float)uVar65 * fVar60 +
                             (float)uVar69 * fVar93 + (float)uVar73 * fVar92;
                    fVar57 = fVar97 + fVar50 + (float)(uVar87 >> 0x20) * fVar57 + fVar51 +
                             (float)(uVar32 >> 0x20) * fVar53 + (float)(uVar65 >> 0x20) * fVar60 +
                             (float)(uVar69 >> 0x20) * fVar93 + (float)(uVar73 >> 0x20) * fVar92;
                    *(ulong *)(pfVar19 + 2) = CONCAT44(fVar57,fVar61);
                    *(ulong *)pfVar19 =
                         CONCAT44(fVar95 + fVar46 + fVar47 + fVar48 +
                                  (float)(uVar62 >> 0x20) * fVar93 +
                                  (float)(uVar63 >> 0x20) * fVar60 +
                                  (float)(uVar67 >> 0x20) * fVar93 +
                                  (float)(uVar71 >> 0x20) * fVar92,
                                  fVar94 + fVar43 + fVar44 + fVar45 + (float)uVar62 * fVar92 +
                                  (float)uVar63 * fVar60 + (float)uVar67 * fVar93 +
                                  (float)uVar71 * fVar92);
                    pfVar19 = pfVar31;
                  } while (pfVar31 < pfVar8 + uVar13);
                }
                *(float *)(puVar37 + 0x10) = fVar53;
                bVar42 = bVar42 + 1;
                *(float *)((long)puVar37 + 0x84) = fVar60;
                *(float *)(puVar37 + 0x11) = fVar57;
                *(float *)((long)puVar37 + 0x8c) = fVar61;
                bVar16 = *(byte *)(param_1 + 0x134);
              }
              bVar42 = bVar42 + 1;
              uVar32 = (ulong)bVar42;
            } while (bVar42 < bVar16);
          }
          uVar26 = *(uint *)(param_1 + 0xe8);
          if (uVar26 == 0) {
            pfVar39 = pfVar8;
            local_d0 = pfVar9;
          }
          else if (uVar17 != 0) {
            uVar32 = (ulong)*(uint *)(param_1 + 0xf8);
            pfVar31 = (float *)(*(long *)(param_1 + 0xf0) + uVar32 * 4);
            pfVar33 = local_d0;
            pfVar19 = pfVar9;
            uVar18 = uVar17;
            do {
              uVar26 = uVar26 - (int)uVar32;
              uVar30 = uVar18;
              if (uVar26 <= uVar18) {
                uVar30 = uVar26;
              }
              uVar10 = uVar30 >> 2;
              uVar26 = uVar30 & 3;
              pfVar25 = pfVar33;
              pfVar23 = pfVar19;
              pfVar27 = pfVar31;
              if (uVar10 != 0) {
                uVar11 = uVar30 >> 2 & 3;
                pfVar27 = (float *)(ulong)uVar10;
                if (2 < uVar10 - 1) {
                  iVar28 = uVar10 - uVar11;
                  do {
                    uVar55 = *(undefined8 *)(pfVar31 + 2);
                    uVar54 = *(undefined8 *)pfVar31;
                    iVar28 = iVar28 + -4;
                    uVar58 = *(undefined8 *)pfVar19;
                    *(undefined8 *)(pfVar31 + 2) = *(undefined8 *)(pfVar19 + 2);
                    *(undefined8 *)pfVar31 = uVar58;
                    *(undefined8 *)(pfVar33 + 2) = uVar55;
                    *(undefined8 *)pfVar33 = uVar54;
                    uVar55 = *(undefined8 *)(pfVar31 + 6);
                    uVar54 = *(undefined8 *)(pfVar31 + 4);
                    uVar58 = *(undefined8 *)(pfVar19 + 4);
                    *(undefined8 *)(pfVar31 + 6) = *(undefined8 *)(pfVar19 + 6);
                    *(undefined8 *)(pfVar31 + 4) = uVar58;
                    *(undefined8 *)(pfVar33 + 6) = uVar55;
                    *(undefined8 *)(pfVar33 + 4) = uVar54;
                    uVar55 = *(undefined8 *)(pfVar31 + 10);
                    uVar54 = *(undefined8 *)(pfVar31 + 8);
                    uVar58 = *(undefined8 *)(pfVar19 + 8);
                    *(undefined8 *)(pfVar31 + 10) = *(undefined8 *)(pfVar19 + 10);
                    *(undefined8 *)(pfVar31 + 8) = uVar58;
                    *(undefined8 *)(pfVar33 + 10) = uVar55;
                    *(undefined8 *)(pfVar33 + 8) = uVar54;
                    uVar55 = *(undefined8 *)(pfVar31 + 0xe);
                    uVar54 = *(undefined8 *)(pfVar31 + 0xc);
                    pfVar25 = pfVar19 + 0xe;
                    uVar58 = *(undefined8 *)(pfVar19 + 0xc);
                    pfVar19 = pfVar19 + 0x10;
                    *(undefined8 *)(pfVar31 + 0xe) = *(undefined8 *)pfVar25;
                    *(undefined8 *)(pfVar31 + 0xc) = uVar58;
                    *(undefined8 *)(pfVar33 + 0xe) = uVar55;
                    *(undefined8 *)(pfVar33 + 0xc) = uVar54;
                    pfVar31 = pfVar31 + 0x10;
                    pfVar33 = pfVar33 + 0x10;
                    pfVar23 = pfVar19;
                    pfVar27 = pfVar31;
                    pfVar25 = pfVar33;
                  } while (iVar28 != 0);
                }
                if (uVar11 != 0) {
                  iVar28 = -uVar11;
                  pfVar19 = pfVar25;
                  pfVar33 = pfVar23;
                  do {
                    pfVar27 = pfVar31 + 4;
                    uVar55 = *(undefined8 *)(pfVar31 + 2);
                    uVar54 = *(undefined8 *)pfVar31;
                    bVar12 = iVar28 != -1;
                    iVar28 = iVar28 + 1;
                    pfVar23 = pfVar33 + 4;
                    uVar58 = *(undefined8 *)pfVar33;
                    *(undefined8 *)(pfVar31 + 2) = *(undefined8 *)(pfVar33 + 2);
                    *(undefined8 *)pfVar31 = uVar58;
                    pfVar25 = pfVar19 + 4;
                    *(undefined8 *)(pfVar19 + 2) = uVar55;
                    *(undefined8 *)pfVar19 = uVar54;
                    pfVar19 = pfVar25;
                    pfVar33 = pfVar23;
                    pfVar31 = pfVar27;
                  } while (bVar12);
                }
              }
              pfVar33 = pfVar25;
              pfVar19 = pfVar23;
              pfVar31 = pfVar27;
              if (uVar26 != 0) {
                fVar53 = *pfVar27;
                pfVar19 = pfVar23 + 1;
                pfVar31 = pfVar27 + 1;
                *pfVar27 = *pfVar23;
                pfVar33 = pfVar25 + 1;
                *pfVar25 = fVar53;
                if (1 < uVar26) {
                  fVar53 = pfVar27[1];
                  pfVar27[1] = pfVar23[1];
                  pfVar25[1] = fVar53;
                  if (uVar26 == 2) {
                    pfVar19 = pfVar23 + 2;
                    pfVar31 = pfVar27 + 2;
                    pfVar33 = pfVar25 + 2;
                  }
                  else {
                    fVar53 = pfVar27[2];
                    pfVar19 = pfVar23 + 3;
                    pfVar27[2] = pfVar23[2];
                    pfVar31 = pfVar27 + 3;
                    pfVar25[2] = fVar53;
                    pfVar33 = pfVar25 + 3;
                  }
                }
              }
              uVar10 = *(int *)(param_1 + 0xf8) + uVar30;
              uVar26 = *(uint *)(param_1 + 0xe8);
              *(uint *)(param_1 + 0xf8) = uVar10;
              if (uVar10 == uVar26) {
                pfVar31 = *(float **)(param_1 + 0xf0);
                uVar10 = 0;
                *(undefined4 *)(param_1 + 0xf8) = 0;
              }
              uVar32 = (ulong)uVar10;
              uVar18 = uVar18 - uVar30;
            } while (uVar18 != 0);
            uVar32 = (ulong)*(uint *)(param_1 + 0x110);
            pfVar31 = (float *)(*(long *)(param_1 + 0x108) + uVar32 * 4);
            uVar26 = *(uint *)(param_1 + 0x100);
            pfVar33 = pfVar39;
            pfVar19 = pfVar8;
            uVar18 = uVar17;
            do {
              uVar26 = uVar26 - (int)uVar32;
              uVar30 = uVar18;
              if (uVar26 <= uVar18) {
                uVar30 = uVar26;
              }
              uVar10 = uVar30 >> 2;
              uVar26 = uVar30 & 3;
              pfVar25 = pfVar33;
              pfVar23 = pfVar19;
              pfVar27 = pfVar31;
              if (uVar10 != 0) {
                uVar11 = uVar30 >> 2 & 3;
                pfVar27 = (float *)(ulong)uVar10;
                if (2 < uVar10 - 1) {
                  iVar28 = uVar10 - uVar11;
                  do {
                    uVar55 = *(undefined8 *)(pfVar31 + 2);
                    uVar54 = *(undefined8 *)pfVar31;
                    iVar28 = iVar28 + -4;
                    uVar58 = *(undefined8 *)pfVar19;
                    *(undefined8 *)(pfVar31 + 2) = *(undefined8 *)(pfVar19 + 2);
                    *(undefined8 *)pfVar31 = uVar58;
                    *(undefined8 *)(pfVar33 + 2) = uVar55;
                    *(undefined8 *)pfVar33 = uVar54;
                    uVar55 = *(undefined8 *)(pfVar31 + 6);
                    uVar54 = *(undefined8 *)(pfVar31 + 4);
                    uVar58 = *(undefined8 *)(pfVar19 + 4);
                    *(undefined8 *)(pfVar31 + 6) = *(undefined8 *)(pfVar19 + 6);
                    *(undefined8 *)(pfVar31 + 4) = uVar58;
                    *(undefined8 *)(pfVar33 + 6) = uVar55;
                    *(undefined8 *)(pfVar33 + 4) = uVar54;
                    uVar55 = *(undefined8 *)(pfVar31 + 10);
                    uVar54 = *(undefined8 *)(pfVar31 + 8);
                    uVar58 = *(undefined8 *)(pfVar19 + 8);
                    *(undefined8 *)(pfVar31 + 10) = *(undefined8 *)(pfVar19 + 10);
                    *(undefined8 *)(pfVar31 + 8) = uVar58;
                    *(undefined8 *)(pfVar33 + 10) = uVar55;
                    *(undefined8 *)(pfVar33 + 8) = uVar54;
                    uVar55 = *(undefined8 *)(pfVar31 + 0xe);
                    uVar54 = *(undefined8 *)(pfVar31 + 0xc);
                    pfVar25 = pfVar19 + 0xe;
                    uVar58 = *(undefined8 *)(pfVar19 + 0xc);
                    pfVar19 = pfVar19 + 0x10;
                    *(undefined8 *)(pfVar31 + 0xe) = *(undefined8 *)pfVar25;
                    *(undefined8 *)(pfVar31 + 0xc) = uVar58;
                    *(undefined8 *)(pfVar33 + 0xe) = uVar55;
                    *(undefined8 *)(pfVar33 + 0xc) = uVar54;
                    pfVar31 = pfVar31 + 0x10;
                    pfVar33 = pfVar33 + 0x10;
                    pfVar23 = pfVar19;
                    pfVar27 = pfVar31;
                    pfVar25 = pfVar33;
                  } while (iVar28 != 0);
                }
                if (uVar11 != 0) {
                  iVar28 = -uVar11;
                  pfVar19 = pfVar25;
                  pfVar33 = pfVar23;
                  do {
                    pfVar27 = pfVar31 + 4;
                    uVar55 = *(undefined8 *)(pfVar31 + 2);
                    uVar54 = *(undefined8 *)pfVar31;
                    bVar12 = iVar28 != -1;
                    iVar28 = iVar28 + 1;
                    pfVar23 = pfVar33 + 4;
                    uVar58 = *(undefined8 *)pfVar33;
                    *(undefined8 *)(pfVar31 + 2) = *(undefined8 *)(pfVar33 + 2);
                    *(undefined8 *)pfVar31 = uVar58;
                    pfVar25 = pfVar19 + 4;
                    *(undefined8 *)(pfVar19 + 2) = uVar55;
                    *(undefined8 *)pfVar19 = uVar54;
                    pfVar19 = pfVar25;
                    pfVar33 = pfVar23;
                    pfVar31 = pfVar27;
                  } while (bVar12);
                }
              }
              pfVar33 = pfVar25;
              pfVar19 = pfVar23;
              pfVar31 = pfVar27;
              if (uVar26 != 0) {
                fVar53 = *pfVar27;
                pfVar19 = pfVar23 + 1;
                pfVar31 = pfVar27 + 1;
                *pfVar27 = *pfVar23;
                pfVar33 = pfVar25 + 1;
                *pfVar25 = fVar53;
                if (1 < uVar26) {
                  fVar53 = pfVar27[1];
                  pfVar27[1] = pfVar23[1];
                  pfVar25[1] = fVar53;
                  if (uVar26 == 2) {
                    pfVar19 = pfVar23 + 2;
                    pfVar31 = pfVar27 + 2;
                    pfVar33 = pfVar25 + 2;
                  }
                  else {
                    fVar53 = pfVar27[2];
                    pfVar19 = pfVar23 + 3;
                    pfVar27[2] = pfVar23[2];
                    pfVar31 = pfVar27 + 3;
                    pfVar25[2] = fVar53;
                    pfVar33 = pfVar25 + 3;
                  }
                }
              }
              uVar10 = *(int *)(param_1 + 0x110) + uVar30;
              uVar26 = *(uint *)(param_1 + 0x100);
              *(uint *)(param_1 + 0x110) = uVar10;
              if (uVar10 == uVar26) {
                pfVar31 = *(float **)(param_1 + 0x108);
                uVar10 = 0;
                *(undefined4 *)(param_1 + 0x110) = 0;
              }
              uVar32 = (ulong)uVar10;
              uVar18 = uVar18 - uVar30;
            } while (uVar18 != 0);
          }
        }
        iVar28 = *(int *)(param_1 + 0x18);
        iVar29 = *(int *)(param_1 + 8);
        uVar26 = iVar29 - iVar28;
        pfVar19 = (float *)(*(long *)(param_1 + 0x10) + (ulong)(uint)(iVar28 << 1) * 4);
        if (uVar17 < uVar26) {
          if (uVar17 != 0) {
            pfVar31 = __dest;
            uVar26 = uVar17;
            if ((uVar17 & 1) != 0) {
              fVar53 = *__dest;
              fVar57 = *pfVar19;
              *pfVar19 = fVar53;
              uVar62 = (ulong)(uint)*(float *)(param_1 + 0x1c);
              fVar57 = fVar57 + (fVar53 - pfVar19[1]) * *(float *)(param_1 + 0x1c);
              pfVar19[1] = fVar57;
              pfVar19 = pfVar19 + 2;
              *__dest = fVar57;
              pfVar31 = pfVar4;
              uVar26 = uVar17 - 1;
            }
            if (uVar17 != 1) {
              do {
                fVar53 = *pfVar31;
                uVar26 = uVar26 - 2;
                fVar57 = *pfVar19;
                *pfVar19 = fVar53;
                fVar57 = fVar57 + (fVar53 - pfVar19[1]) * *(float *)(param_1 + 0x1c);
                pfVar19[1] = fVar57;
                *pfVar31 = fVar57;
                fVar53 = pfVar31[1];
                fVar57 = pfVar19[2];
                pfVar19[2] = fVar53;
                fVar57 = fVar57 + (fVar53 - pfVar19[3]) * *(float *)(param_1 + 0x1c);
                pfVar19[3] = fVar57;
                pfVar31[1] = fVar57;
                pfVar31 = pfVar31 + 2;
                pfVar19 = pfVar19 + 4;
              } while (uVar26 != 0);
            }
            iVar28 = *(int *)(param_1 + 0x18);
          }
          *(uint *)(param_1 + 0x18) = iVar28 + uVar17;
        }
        else {
          pfVar31 = __dest;
          uVar18 = uVar17;
          do {
            uVar30 = uVar18;
            if (uVar26 <= uVar18) {
              uVar30 = uVar26;
            }
            pfVar33 = pfVar31;
            if (uVar30 != 0) {
              if (uVar30 != 1) {
                iVar28 = (uVar30 & 1) - uVar30;
                pfVar33 = pfVar19;
                pfVar25 = pfVar31;
                do {
                  fVar53 = *pfVar25;
                  pfVar19 = pfVar33 + 4;
                  pfVar31 = pfVar25 + 2;
                  fVar57 = *pfVar33;
                  *pfVar33 = fVar53;
                  fVar57 = fVar57 + (fVar53 - pfVar33[1]) * *(float *)(param_1 + 0x1c);
                  pfVar33[1] = fVar57;
                  *pfVar25 = fVar57;
                  fVar53 = pfVar25[1];
                  fVar57 = pfVar33[2];
                  pfVar33[2] = fVar53;
                  fVar57 = fVar57 + (fVar53 - pfVar33[3]) * *(float *)(param_1 + 0x1c);
                  iVar28 = iVar28 + 2;
                  pfVar33[3] = fVar57;
                  pfVar25[1] = fVar57;
                  pfVar33 = pfVar19;
                  pfVar25 = pfVar31;
                } while (iVar28 != 0);
              }
              pfVar33 = pfVar31;
              if ((uVar30 & 1) != 0) {
                fVar53 = *pfVar31;
                fVar57 = *pfVar19;
                *pfVar19 = fVar53;
                fVar57 = fVar57 + (fVar53 - pfVar19[1]) * *(float *)(param_1 + 0x1c);
                pfVar19[1] = fVar57;
                pfVar19 = pfVar19 + 2;
                pfVar33 = pfVar31 + 1;
                *pfVar31 = fVar57;
              }
              iVar28 = *(int *)(param_1 + 0x18);
              iVar29 = *(int *)(param_1 + 8);
            }
            iVar28 = iVar28 + uVar30;
            *(int *)(param_1 + 0x18) = iVar28;
            if (iVar28 == iVar29) {
              pfVar19 = *(float **)(param_1 + 0x10);
              iVar28 = 0;
              *(undefined4 *)(param_1 + 0x18) = 0;
            }
            uVar18 = uVar18 - uVar30;
            uVar26 = iVar29 - iVar28;
            pfVar31 = pfVar33;
          } while (uVar18 != 0);
        }
        iVar28 = *(int *)(param_1 + 0x30);
        iVar29 = *(int *)(param_1 + 0x20);
        uVar26 = iVar29 - iVar28;
        pfVar19 = (float *)(*(long *)(param_1 + 0x28) + (ulong)(uint)(iVar28 << 1) * 4);
        if (uVar17 < uVar26) {
          if (uVar17 != 0) {
            pfVar31 = __dest;
            uVar26 = uVar17;
            if ((uVar17 & 1) != 0) {
              fVar53 = *__dest;
              fVar57 = *pfVar19;
              *pfVar19 = fVar53;
              uVar62 = (ulong)(uint)*(float *)(param_1 + 0x34);
              fVar57 = fVar57 + (fVar53 - pfVar19[1]) * *(float *)(param_1 + 0x34);
              pfVar19[1] = fVar57;
              pfVar19 = pfVar19 + 2;
              *__dest = fVar57;
              pfVar31 = pfVar4;
              uVar26 = uVar17 - 1;
            }
            if (uVar17 != 1) {
              do {
                fVar53 = *pfVar31;
                uVar26 = uVar26 - 2;
                fVar57 = *pfVar19;
                *pfVar19 = fVar53;
                fVar57 = fVar57 + (fVar53 - pfVar19[1]) * *(float *)(param_1 + 0x34);
                pfVar19[1] = fVar57;
                *pfVar31 = fVar57;
                fVar53 = pfVar31[1];
                fVar57 = pfVar19[2];
                pfVar19[2] = fVar53;
                fVar57 = fVar57 + (fVar53 - pfVar19[3]) * *(float *)(param_1 + 0x34);
                pfVar19[3] = fVar57;
                pfVar31[1] = fVar57;
                pfVar31 = pfVar31 + 2;
                pfVar19 = pfVar19 + 4;
              } while (uVar26 != 0);
            }
            iVar28 = *(int *)(param_1 + 0x30);
          }
          *(uint *)(param_1 + 0x30) = iVar28 + uVar17;
        }
        else {
          pfVar31 = __dest;
          uVar18 = uVar17;
          do {
            uVar30 = uVar18;
            if (uVar26 <= uVar18) {
              uVar30 = uVar26;
            }
            pfVar33 = pfVar31;
            if (uVar30 != 0) {
              if (uVar30 != 1) {
                iVar28 = (uVar30 & 1) - uVar30;
                pfVar33 = pfVar19;
                pfVar25 = pfVar31;
                do {
                  fVar53 = *pfVar25;
                  pfVar19 = pfVar33 + 4;
                  pfVar31 = pfVar25 + 2;
                  fVar57 = *pfVar33;
                  *pfVar33 = fVar53;
                  fVar57 = fVar57 + (fVar53 - pfVar33[1]) * *(float *)(param_1 + 0x34);
                  pfVar33[1] = fVar57;
                  *pfVar25 = fVar57;
                  fVar53 = pfVar25[1];
                  fVar57 = pfVar33[2];
                  pfVar33[2] = fVar53;
                  fVar57 = fVar57 + (fVar53 - pfVar33[3]) * *(float *)(param_1 + 0x34);
                  iVar28 = iVar28 + 2;
                  pfVar33[3] = fVar57;
                  pfVar25[1] = fVar57;
                  pfVar33 = pfVar19;
                  pfVar25 = pfVar31;
                } while (iVar28 != 0);
              }
              pfVar33 = pfVar31;
              if ((uVar30 & 1) != 0) {
                fVar53 = *pfVar31;
                fVar57 = *pfVar19;
                *pfVar19 = fVar53;
                fVar57 = fVar57 + (fVar53 - pfVar19[1]) * *(float *)(param_1 + 0x34);
                pfVar19[1] = fVar57;
                pfVar19 = pfVar19 + 2;
                pfVar33 = pfVar31 + 1;
                *pfVar31 = fVar57;
              }
              iVar28 = *(int *)(param_1 + 0x30);
              iVar29 = *(int *)(param_1 + 0x20);
            }
            iVar28 = iVar28 + uVar30;
            *(int *)(param_1 + 0x30) = iVar28;
            if (iVar28 == iVar29) {
              pfVar19 = *(float **)(param_1 + 0x28);
              iVar28 = 0;
              *(undefined4 *)(param_1 + 0x30) = 0;
            }
            uVar18 = uVar18 - uVar30;
            uVar26 = iVar29 - iVar28;
            pfVar31 = pfVar33;
          } while (uVar18 != 0);
        }
        iVar28 = *(int *)(param_1 + 0x48);
        iVar29 = *(int *)(param_1 + 0x38);
        uVar26 = iVar29 - iVar28;
        pfVar19 = (float *)(*(long *)(param_1 + 0x40) + (ulong)(uint)(iVar28 << 1) * 4);
        if (uVar17 < uVar26) {
          if (uVar17 != 0) {
            pfVar31 = __dest;
            uVar26 = uVar17;
            if ((uVar17 & 1) != 0) {
              fVar53 = *__dest;
              fVar57 = *pfVar19;
              *pfVar19 = fVar53;
              uVar62 = (ulong)(uint)*(float *)(param_1 + 0x4c);
              fVar57 = fVar57 + (fVar53 - pfVar19[1]) * *(float *)(param_1 + 0x4c);
              pfVar19[1] = fVar57;
              pfVar19 = pfVar19 + 2;
              *__dest = fVar57;
              pfVar31 = pfVar4;
              uVar26 = uVar17 - 1;
            }
            if (uVar17 != 1) {
              do {
                fVar53 = *pfVar31;
                uVar26 = uVar26 - 2;
                fVar57 = *pfVar19;
                *pfVar19 = fVar53;
                fVar57 = fVar57 + (fVar53 - pfVar19[1]) * *(float *)(param_1 + 0x4c);
                pfVar19[1] = fVar57;
                *pfVar31 = fVar57;
                fVar53 = pfVar31[1];
                fVar57 = pfVar19[2];
                pfVar19[2] = fVar53;
                fVar57 = fVar57 + (fVar53 - pfVar19[3]) * *(float *)(param_1 + 0x4c);
                pfVar19[3] = fVar57;
                pfVar31[1] = fVar57;
                pfVar31 = pfVar31 + 2;
                pfVar19 = pfVar19 + 4;
              } while (uVar26 != 0);
            }
            iVar28 = *(int *)(param_1 + 0x48);
          }
          *(uint *)(param_1 + 0x48) = iVar28 + uVar17;
        }
        else {
          pfVar31 = __dest;
          uVar18 = uVar17;
          do {
            uVar30 = uVar18;
            if (uVar26 <= uVar18) {
              uVar30 = uVar26;
            }
            pfVar33 = pfVar31;
            if (uVar30 != 0) {
              if (uVar30 != 1) {
                iVar28 = (uVar30 & 1) - uVar30;
                pfVar33 = pfVar19;
                pfVar25 = pfVar31;
                do {
                  fVar53 = *pfVar25;
                  pfVar19 = pfVar33 + 4;
                  pfVar31 = pfVar25 + 2;
                  fVar57 = *pfVar33;
                  *pfVar33 = fVar53;
                  fVar57 = fVar57 + (fVar53 - pfVar33[1]) * *(float *)(param_1 + 0x4c);
                  pfVar33[1] = fVar57;
                  *pfVar25 = fVar57;
                  fVar53 = pfVar25[1];
                  fVar57 = pfVar33[2];
                  pfVar33[2] = fVar53;
                  fVar57 = fVar57 + (fVar53 - pfVar33[3]) * *(float *)(param_1 + 0x4c);
                  iVar28 = iVar28 + 2;
                  pfVar33[3] = fVar57;
                  pfVar25[1] = fVar57;
                  pfVar33 = pfVar19;
                  pfVar25 = pfVar31;
                } while (iVar28 != 0);
              }
              pfVar33 = pfVar31;
              if ((uVar30 & 1) != 0) {
                fVar53 = *pfVar31;
                fVar57 = *pfVar19;
                *pfVar19 = fVar53;
                fVar57 = fVar57 + (fVar53 - pfVar19[1]) * *(float *)(param_1 + 0x4c);
                pfVar19[1] = fVar57;
                pfVar19 = pfVar19 + 2;
                pfVar33 = pfVar31 + 1;
                *pfVar31 = fVar57;
              }
              iVar28 = *(int *)(param_1 + 0x48);
              iVar29 = *(int *)(param_1 + 0x38);
            }
            iVar28 = iVar28 + uVar30;
            *(int *)(param_1 + 0x48) = iVar28;
            if (iVar28 == iVar29) {
              pfVar19 = *(float **)(param_1 + 0x40);
              iVar28 = 0;
              *(undefined4 *)(param_1 + 0x48) = 0;
            }
            uVar18 = uVar18 - uVar30;
            uVar26 = iVar29 - iVar28;
            pfVar31 = pfVar33;
          } while (uVar18 != 0);
        }
        iVar28 = *(int *)(param_1 + 0x60);
        iVar29 = *(int *)(param_1 + 0x50);
        uVar26 = iVar29 - iVar28;
        pfVar19 = (float *)(*(long *)(param_1 + 0x58) + (ulong)(uint)(iVar28 << 1) * 4);
        if (uVar17 < uVar26) {
          if (uVar17 != 0) {
            pfVar31 = __dest;
            uVar26 = uVar17;
            if ((uVar17 & 1) != 0) {
              fVar53 = *__dest;
              fVar57 = *pfVar19;
              *pfVar19 = fVar53;
              uVar62 = (ulong)(uint)*(float *)(param_1 + 100);
              fVar57 = fVar57 + (fVar53 - pfVar19[1]) * *(float *)(param_1 + 100);
              pfVar19[1] = fVar57;
              pfVar19 = pfVar19 + 2;
              *__dest = fVar57;
              pfVar31 = pfVar4;
              uVar26 = uVar17 - 1;
            }
            if (uVar17 != 1) {
              do {
                fVar53 = *pfVar31;
                uVar26 = uVar26 - 2;
                fVar57 = *pfVar19;
                *pfVar19 = fVar53;
                fVar57 = fVar57 + (fVar53 - pfVar19[1]) * *(float *)(param_1 + 100);
                pfVar19[1] = fVar57;
                *pfVar31 = fVar57;
                fVar53 = pfVar31[1];
                fVar57 = pfVar19[2];
                pfVar19[2] = fVar53;
                fVar57 = fVar57 + (fVar53 - pfVar19[3]) * *(float *)(param_1 + 100);
                pfVar19[3] = fVar57;
                pfVar31[1] = fVar57;
                pfVar31 = pfVar31 + 2;
                pfVar19 = pfVar19 + 4;
              } while (uVar26 != 0);
            }
            iVar28 = *(int *)(param_1 + 0x60);
          }
          *(uint *)(param_1 + 0x60) = iVar28 + uVar17;
        }
        else {
          pfVar31 = __dest;
          uVar18 = uVar17;
          do {
            uVar30 = uVar18;
            if (uVar26 <= uVar18) {
              uVar30 = uVar26;
            }
            pfVar33 = pfVar31;
            if (uVar30 != 0) {
              if (uVar30 != 1) {
                iVar28 = (uVar30 & 1) - uVar30;
                pfVar33 = pfVar19;
                pfVar25 = pfVar31;
                do {
                  fVar53 = *pfVar25;
                  pfVar19 = pfVar33 + 4;
                  pfVar31 = pfVar25 + 2;
                  fVar57 = *pfVar33;
                  *pfVar33 = fVar53;
                  fVar57 = fVar57 + (fVar53 - pfVar33[1]) * *(float *)(param_1 + 100);
                  pfVar33[1] = fVar57;
                  *pfVar25 = fVar57;
                  fVar53 = pfVar25[1];
                  fVar57 = pfVar33[2];
                  pfVar33[2] = fVar53;
                  fVar57 = fVar57 + (fVar53 - pfVar33[3]) * *(float *)(param_1 + 100);
                  iVar28 = iVar28 + 2;
                  pfVar33[3] = fVar57;
                  pfVar25[1] = fVar57;
                  pfVar33 = pfVar19;
                  pfVar25 = pfVar31;
                } while (iVar28 != 0);
              }
              pfVar33 = pfVar31;
              if ((uVar30 & 1) != 0) {
                fVar53 = *pfVar31;
                fVar57 = *pfVar19;
                *pfVar19 = fVar53;
                fVar57 = fVar57 + (fVar53 - pfVar19[1]) * *(float *)(param_1 + 100);
                pfVar19[1] = fVar57;
                pfVar19 = pfVar19 + 2;
                pfVar33 = pfVar31 + 1;
                *pfVar31 = fVar57;
              }
              iVar28 = *(int *)(param_1 + 0x60);
              iVar29 = *(int *)(param_1 + 0x50);
            }
            iVar28 = iVar28 + uVar30;
            *(int *)(param_1 + 0x60) = iVar28;
            if (iVar28 == iVar29) {
              pfVar19 = *(float **)(param_1 + 0x58);
              iVar28 = 0;
              *(undefined4 *)(param_1 + 0x60) = 0;
            }
            uVar18 = uVar18 - uVar30;
            uVar26 = iVar29 - iVar28;
            pfVar31 = pfVar33;
          } while (uVar18 != 0);
        }
        FUN_02e1d0ac(param_1,__dest,uVar17);
        memset(__s,0,0x1000);
        fVar53 = (float)uVar62;
        if (*(int *)(param_1 + 0x128) != 0) {
          uVar32 = 0;
          lVar40 = *(long *)(param_1 + 0x140);
          do {
            if (uVar17 != 0) {
              lVar21 = lVar40 + uVar32 * 0xa8;
              plVar7 = (long *)(lVar21 + 0x98);
              puVar22 = (uint *)(lVar21 + 0xa0);
              uVar41 = (ulong)*puVar22;
              puVar24 = (uint *)(lVar40 + uVar32 * 0xa8 + 0x90);
              uVar26 = *puVar24;
              pfVar31 = __dest;
              pfVar19 = (float *)(*plVar7 + uVar41 * 4);
              uVar18 = uVar17;
              do {
                uVar26 = uVar26 - (int)uVar41;
                uVar30 = uVar18;
                if (uVar26 <= uVar18) {
                  uVar30 = uVar26;
                }
                uVar10 = uVar30 >> 2;
                uVar26 = uVar30 & 3;
                if (uVar10 == 0) {
                  pfVar33 = pfVar19;
                  pfVar25 = pfVar31;
                  if (uVar26 != 0) goto LAB_02e182f4;
                }
                else {
                  uVar11 = uVar30 >> 2 & 3;
                  pfVar23 = (float *)(ulong)uVar10;
                  pfVar33 = pfVar19;
                  pfVar27 = (float *)(ulong)(uVar10 - 1);
                  pfVar25 = pfVar31;
                  if (2 < uVar10 - 1) {
                    iVar28 = uVar10 - uVar11;
                    do {
                      uVar55 = *(undefined8 *)(pfVar19 + 2);
                      uVar54 = *(undefined8 *)pfVar19;
                      iVar28 = iVar28 + -4;
                      uVar58 = *(undefined8 *)pfVar31;
                      *(undefined8 *)(pfVar19 + 2) = *(undefined8 *)(pfVar31 + 2);
                      *(undefined8 *)pfVar19 = uVar58;
                      *(undefined8 *)(pfVar31 + 2) = uVar55;
                      *(undefined8 *)pfVar31 = uVar54;
                      uVar55 = *(undefined8 *)(pfVar19 + 6);
                      uVar54 = *(undefined8 *)(pfVar19 + 4);
                      uVar58 = *(undefined8 *)(pfVar31 + 4);
                      *(undefined8 *)(pfVar19 + 6) = *(undefined8 *)(pfVar31 + 6);
                      *(undefined8 *)(pfVar19 + 4) = uVar58;
                      *(undefined8 *)(pfVar31 + 6) = uVar55;
                      *(undefined8 *)(pfVar31 + 4) = uVar54;
                      uVar55 = *(undefined8 *)(pfVar19 + 10);
                      uVar54 = *(undefined8 *)(pfVar19 + 8);
                      uVar58 = *(undefined8 *)(pfVar31 + 8);
                      *(undefined8 *)(pfVar19 + 10) = *(undefined8 *)(pfVar31 + 10);
                      *(undefined8 *)(pfVar19 + 8) = uVar58;
                      *(undefined8 *)(pfVar31 + 10) = uVar55;
                      *(undefined8 *)(pfVar31 + 8) = uVar54;
                      uVar55 = *(undefined8 *)(pfVar19 + 0xe);
                      uVar54 = *(undefined8 *)(pfVar19 + 0xc);
                      uVar58 = *(undefined8 *)(pfVar31 + 0xc);
                      *(undefined8 *)(pfVar19 + 0xe) = *(undefined8 *)(pfVar31 + 0xe);
                      *(undefined8 *)(pfVar19 + 0xc) = uVar58;
                      *(undefined8 *)(pfVar31 + 0xe) = uVar55;
                      *(undefined8 *)(pfVar31 + 0xc) = uVar54;
                      pfVar19 = pfVar19 + 0x10;
                      pfVar31 = pfVar31 + 0x10;
                      pfVar23 = pfVar19;
                      pfVar33 = pfVar19;
                      pfVar27 = pfVar31;
                      pfVar25 = pfVar31;
                    } while (iVar28 != 0);
                  }
                  pfVar31 = pfVar27;
                  pfVar19 = pfVar23;
                  if (uVar11 != 0) {
                    iVar28 = -uVar11;
                    do {
                      pfVar19 = pfVar33 + 4;
                      uVar55 = *(undefined8 *)(pfVar33 + 2);
                      uVar54 = *(undefined8 *)pfVar33;
                      bVar12 = iVar28 != -1;
                      iVar28 = iVar28 + 1;
                      pfVar31 = pfVar25 + 4;
                      uVar58 = *(undefined8 *)pfVar25;
                      *(undefined8 *)(pfVar33 + 2) = *(undefined8 *)(pfVar25 + 2);
                      *(undefined8 *)pfVar33 = uVar58;
                      *(undefined8 *)(pfVar25 + 2) = uVar55;
                      *(undefined8 *)pfVar25 = uVar54;
                      pfVar33 = pfVar19;
                      pfVar25 = pfVar31;
                    } while (bVar12);
                  }
                  pfVar33 = pfVar19;
                  pfVar25 = pfVar31;
                  if (uVar26 != 0) {
LAB_02e182f4:
                    fVar53 = *pfVar19;
                    pfVar33 = pfVar19 + 1;
                    *pfVar19 = *pfVar25;
                    pfVar31 = pfVar25 + 1;
                    *pfVar25 = fVar53;
                    if (1 < uVar26) {
                      fVar53 = pfVar19[1];
                      pfVar19[1] = pfVar25[1];
                      pfVar25[1] = fVar53;
                      if (uVar26 == 2) {
                        pfVar33 = pfVar19 + 2;
                        pfVar31 = pfVar25 + 2;
                      }
                      else {
                        fVar53 = pfVar19[2];
                        pfVar19[2] = pfVar25[2];
                        pfVar33 = pfVar19 + 3;
                        pfVar31 = pfVar25 + 3;
                        pfVar25[2] = fVar53;
                      }
                    }
                  }
                }
                uVar10 = *puVar22 + uVar30;
                uVar41 = (ulong)uVar10;
                *puVar22 = uVar10;
                uVar26 = *puVar24;
                if (uVar10 == uVar26) {
                  pfVar33 = (float *)*plVar7;
                  uVar41 = 0;
                  *puVar22 = 0;
                }
                uVar18 = uVar18 - uVar30;
                pfVar19 = pfVar33;
              } while (uVar18 != 0);
              lVar40 = *(long *)(param_1 + 0x140);
            }
            FUN_02e1e698(lVar40 + uVar32 * 0xa8,__dest,local_c8[(uint)uVar32 & 1],
                         local_c8[(uint)uVar32 & 1 | 2],uVar17);
            fVar53 = (float)uVar62;
            uVar32 = uVar32 + 1;
            if (*(uint *)(param_1 + 0x128) <= uVar32) break;
            lVar40 = *(long *)(param_1 + 0x140);
          } while( true );
        }
        fVar60 = *(float *)(param_1 + 0x70);
        fVar61 = *(float *)(param_1 + 0x124) * 1.4142135;
        fVar57 = *(float *)(param_1 + 0x74);
        if (uVar17 == 0) {
          fVar53 = fVar57;
        }
        else {
          fVar43 = *(float *)(param_1 + 0x78);
          pfVar19 = (float *)((long)__s + uVar14);
          if ((float *)((long)__s + uVar14) <= pfVar2) {
            pfVar19 = pfVar2;
          }
          uVar62 = (long)pfVar19 + (-0x801 - (long)__src);
          if (((uint)uVar62 >> 2 & 1) == 0) {
            fVar53 = *__s;
            fVar57 = (fVar53 * fVar61 - fVar60) + fVar57 * fVar43;
            *__s = fVar57;
            pfVar19 = pfVar2;
            fVar60 = fVar53 * fVar61;
            fVar53 = fVar57;
          }
          else {
            pfVar19 = __s;
          }
          if (3 < uVar62) {
            do {
              fVar53 = (*pfVar19 * fVar61 - fVar60) + fVar57 * fVar43;
              fVar60 = pfVar19[1] * fVar61;
              fVar57 = (fVar60 - *pfVar19 * fVar61) + fVar53 * fVar43;
              pfVar31 = pfVar19 + 2;
              *pfVar19 = fVar53;
              pfVar19[1] = fVar57;
              pfVar19 = pfVar31;
              fVar53 = fVar57;
            } while (pfVar31 < __s + uVar17);
          }
        }
        *(float *)(param_1 + 0x70) = fVar60;
        fVar60 = *(float *)(param_1 + 0x7c);
        fVar57 = *(float *)(param_1 + 0x80);
        *(float *)(param_1 + 0x74) = fVar53;
        if (uVar17 == 0) {
          fVar53 = fVar57;
        }
        else {
          fVar43 = *(float *)(param_1 + 0x84);
          pfVar19 = (float *)((long)pfVar1 + uVar14);
          if ((float *)((long)pfVar1 + uVar14) <= pfVar3) {
            pfVar19 = pfVar3;
          }
          uVar62 = (long)pfVar19 + (-0xc01 - (long)__src);
          if (((uint)uVar62 >> 2 & 1) == 0) {
            fVar53 = *pfVar1;
            fVar57 = (fVar53 * fVar61 - fVar60) + fVar57 * fVar43;
            *pfVar1 = fVar57;
            pfVar19 = pfVar3;
            fVar60 = fVar53 * fVar61;
            fVar53 = fVar57;
          }
          else {
            pfVar19 = pfVar1;
          }
          if (3 < uVar62) {
            do {
              fVar53 = *pfVar19;
              fVar57 = (fVar53 * fVar61 - fVar60) + fVar57 * fVar43;
              fVar60 = pfVar19[1] * fVar61;
              *pfVar19 = fVar57;
              fVar57 = (fVar60 - fVar53 * fVar61) + fVar57 * fVar43;
              pfVar19[1] = fVar57;
              pfVar19 = pfVar19 + 2;
              fVar53 = fVar57;
            } while (pfVar19 < pfVar1 + uVar17);
          }
        }
        *(float *)(param_1 + 0x7c) = fVar60;
        fVar60 = *(float *)(param_1 + 0x88);
        fVar57 = *(float *)(param_1 + 0x8c);
        *(float *)(param_1 + 0x80) = fVar53;
        if (uVar17 != 0) {
          pfVar19 = local_c8[2] + uVar17;
          fVar43 = *(float *)(param_1 + 0x90);
          pfVar31 = pfVar19;
          if (pfVar19 <= local_c8[2] + 1) {
            pfVar31 = local_c8[2] + 1;
          }
          fVar44 = fVar57;
          pfVar33 = local_c8[2];
          if (((uint)(~(ulong)local_c8[2] + (long)pfVar31) >> 2 & 1) == 0) {
            fVar53 = *local_c8[2];
            fVar44 = (fVar53 * fVar61 - fVar60) + fVar57 * fVar43;
            *local_c8[2] = fVar44;
            fVar60 = fVar53 * fVar61;
            fVar53 = fVar44;
            pfVar33 = local_c8[2] + 1;
          }
          fVar57 = fVar53;
          if (3 < ~(ulong)local_c8[2] + (long)pfVar31) {
            do {
              fVar53 = *pfVar33;
              fVar57 = (fVar53 * fVar61 - fVar60) + fVar44 * fVar43;
              fVar60 = pfVar33[1] * fVar61;
              *pfVar33 = fVar57;
              fVar44 = (fVar60 - fVar53 * fVar61) + fVar57 * fVar43;
              pfVar33[1] = fVar44;
              pfVar33 = pfVar33 + 2;
              fVar57 = fVar44;
            } while (pfVar33 < pfVar19);
          }
        }
        *(float *)(param_1 + 0x88) = fVar60;
        fVar60 = *(float *)(param_1 + 0x94);
        fVar53 = *(float *)(param_1 + 0x98);
        *(float *)(param_1 + 0x8c) = fVar57;
        if (uVar17 != 0) {
          pfVar19 = local_c8[3] + uVar17;
          fVar43 = *(float *)(param_1 + 0x9c);
          pfVar31 = pfVar19;
          if (pfVar19 <= local_c8[3] + 1) {
            pfVar31 = local_c8[3] + 1;
          }
          fVar44 = fVar53;
          pfVar33 = local_c8[3];
          if (((uint)(~(ulong)local_c8[3] + (long)pfVar31) >> 2 & 1) == 0) {
            fVar57 = *local_c8[3];
            fVar44 = (fVar57 * fVar61 - fVar60) + fVar53 * fVar43;
            *local_c8[3] = fVar44;
            fVar60 = fVar57 * fVar61;
            fVar57 = fVar44;
            pfVar33 = local_c8[3] + 1;
          }
          fVar53 = fVar57;
          if (3 < ~(ulong)local_c8[3] + (long)pfVar31) {
            do {
              fVar53 = *pfVar33;
              fVar57 = (fVar53 * fVar61 - fVar60) + fVar44 * fVar43;
              fVar60 = pfVar33[1] * fVar61;
              *pfVar33 = fVar57;
              fVar44 = (fVar60 - fVar53 * fVar61) + fVar57 * fVar43;
              pfVar33[1] = fVar44;
              pfVar33 = pfVar33 + 2;
              fVar53 = fVar44;
            } while (pfVar33 < pfVar19);
          }
        }
        *(float *)(param_1 + 0x94) = fVar60;
        *(float *)(param_1 + 0x98) = fVar53;
        fVar53 = *(float *)(param_1 + 0x1ac);
        fVar60 = *(float *)(*(long *)(param_1 + 0x158) + 0x4c);
        fVar57 = *(float *)(param_1 + 0x1b4);
        uVar41 = (ulong)(uint)fVar57;
        fVar61 = *(float *)(*(long *)(param_1 + 0x158) + 0x54);
        uVar62 = (ulong)(uint)fVar61;
        uVar32 = (ulong)uVar15;
        lVar40 = *param_2;
        pfVar19 = (float *)(lVar40 + (ulong)uVar15 * 4);
        bVar12 = false;
        if ((fVar60 == fVar53) && (bVar12 = false, !NAN(fVar61) && !NAN(fVar57))) {
          bVar12 = fVar61 == fVar57;
        }
        if (bVar12) {
          if (uVar17 != 0) {
            uVar41 = lVar40 + uVar32 * 4;
            pfVar31 = (float *)(uVar41 + 0x10);
            pfVar33 = pfVar19 + uVar17;
            pfVar25 = pfVar33;
            if (pfVar33 <= pfVar31) {
              pfVar25 = pfVar31;
            }
            uVar41 = ~uVar41 + (long)pfVar25;
            pfVar23 = pfVar1;
            pfVar31 = __s;
            pfVar25 = pfVar19;
            if (((uint)uVar41 >> 4 & 1) == 0) {
              fVar60 = (float)*(undefined8 *)pfVar1 + (float)*(undefined8 *)__s;
              fVar61 = (float)((ulong)*(undefined8 *)pfVar1 >> 0x20) +
                       (float)((ulong)*(undefined8 *)__s >> 0x20);
              uVar62 = CONCAT44(fVar61,fVar60);
              *(ulong *)(pfVar19 + 2) =
                   CONCAT44((float)((ulong)*(undefined8 *)(pfVar19 + 2) >> 0x20) * fVar53 +
                            fVar57 * ((float)((ulong)*(undefined8 *)(__src + 0x302) >> 0x20) +
                                     (float)((ulong)*(undefined8 *)(__src + 0x202) >> 0x20)),
                            (float)*(undefined8 *)(pfVar19 + 2) * fVar53 +
                            fVar57 * ((float)*(undefined8 *)(__src + 0x302) +
                                     (float)*(undefined8 *)(__src + 0x202)));
              *(ulong *)pfVar19 =
                   CONCAT44((float)((ulong)*(undefined8 *)pfVar19 >> 0x20) * fVar53 +
                            fVar57 * fVar61,(float)*(undefined8 *)pfVar19 * fVar53 + fVar57 * fVar60
                           );
              pfVar23 = pfVar6;
              pfVar31 = pfVar5;
              pfVar25 = pfVar19 + 4;
            }
            if (0xf < uVar41) {
              do {
                uVar54 = *(undefined8 *)pfVar31;
                uVar55 = *(undefined8 *)pfVar23;
                *(ulong *)(pfVar25 + 2) =
                     CONCAT44((float)((ulong)*(undefined8 *)(pfVar25 + 2) >> 0x20) * fVar53 +
                              fVar57 * ((float)((ulong)*(undefined8 *)(pfVar23 + 2) >> 0x20) +
                                       (float)((ulong)*(undefined8 *)(pfVar31 + 2) >> 0x20)),
                              (float)*(undefined8 *)(pfVar25 + 2) * fVar53 +
                              fVar57 * ((float)*(undefined8 *)(pfVar23 + 2) +
                                       (float)*(undefined8 *)(pfVar31 + 2)));
                *(ulong *)pfVar25 =
                     CONCAT44((float)((ulong)*(undefined8 *)pfVar25 >> 0x20) * fVar53 +
                              fVar57 * ((float)((ulong)uVar55 >> 0x20) +
                                       (float)((ulong)uVar54 >> 0x20)),
                              (float)*(undefined8 *)pfVar25 * fVar53 +
                              fVar57 * ((float)uVar55 + (float)uVar54));
                pfVar27 = pfVar31 + 6;
                uVar54 = *(undefined8 *)(pfVar31 + 4);
                uVar62 = *(ulong *)(pfVar23 + 4);
                pfVar31 = pfVar31 + 8;
                *(ulong *)(pfVar25 + 6) =
                     CONCAT44((float)((ulong)*(undefined8 *)(pfVar25 + 6) >> 0x20) * fVar53 +
                              fVar57 * ((float)((ulong)*(undefined8 *)(pfVar23 + 6) >> 0x20) +
                                       (float)((ulong)*(undefined8 *)pfVar27 >> 0x20)),
                              (float)*(undefined8 *)(pfVar25 + 6) * fVar53 +
                              fVar57 * ((float)*(undefined8 *)(pfVar23 + 6) +
                                       (float)*(undefined8 *)pfVar27));
                *(ulong *)(pfVar25 + 4) =
                     CONCAT44((float)((ulong)*(undefined8 *)(pfVar25 + 4) >> 0x20) * fVar53 +
                              fVar57 * ((float)(uVar62 >> 0x20) + (float)((ulong)uVar54 >> 0x20)),
                              (float)*(undefined8 *)(pfVar25 + 4) * fVar53 +
                              fVar57 * ((float)uVar62 + (float)uVar54));
                pfVar25 = pfVar25 + 8;
                pfVar23 = pfVar23 + 8;
              } while (pfVar25 < pfVar33);
            }
          }
        }
        else if (uVar17 != 0) {
          fVar60 = fVar60 - fVar53;
          fVar57 = (fVar61 - fVar57) / (float)uVar17;
          pfVar33 = pfVar19;
          pfVar31 = __s;
          uVar62 = uVar41;
          do {
            fVar44 = *pfVar33 * fVar53;
            fVar45 = *pfVar31;
            fVar61 = (float)uVar41;
            pfVar25 = pfVar31 + 0x100;
            pfVar31 = pfVar31 + 1;
            fVar43 = (float)uVar62;
            fVar53 = fVar53 + fVar60 / (float)uVar17;
            uVar41 = (ulong)(uint)(fVar61 + fVar57);
            uVar62 = (ulong)(uint)(fVar43 + fVar57);
            pfVar23 = pfVar33 + 1;
            *pfVar33 = fVar44 + fVar61 * fVar45 + fVar43 * *pfVar25;
            pfVar33 = pfVar23;
          } while (pfVar23 < pfVar19 + uVar17);
        }
        fVar53 = *(float *)(param_1 + 0x1b4);
        fVar57 = *(float *)(*(long *)(param_1 + 0x158) + 0x54);
        if (fVar57 == fVar53) {
          if (uVar17 != 0) {
            uVar41 = lVar40 + uVar32 * 4;
            pfVar31 = (float *)(uVar41 + 0x10);
            pfVar33 = pfVar19 + uVar17;
            pfVar25 = pfVar33;
            if (pfVar33 <= pfVar31) {
              pfVar25 = pfVar31;
            }
            uVar41 = ~uVar41 + (long)pfVar25;
            uVar26 = ((uint)(uVar41 >> 4) & 0xfffffff) + 1;
            uVar13 = (ulong)uVar26 & 3;
            pfVar31 = local_c8[2];
            pfVar25 = pfVar19;
            pfVar23 = local_c8[3];
            if ((uVar26 & 3) != 0) {
              pfVar27 = local_c8[2];
              pfVar35 = pfVar19;
              pfVar38 = local_c8[3];
              do {
                pfVar25 = pfVar35 + 4;
                uVar13 = uVar13 - 1;
                pfVar31 = pfVar27 + 4;
                uVar54 = *(undefined8 *)pfVar27;
                pfVar23 = pfVar38 + 4;
                uVar62 = *(ulong *)pfVar38;
                *(ulong *)(pfVar35 + 2) =
                     CONCAT44((float)((ulong)*(undefined8 *)(pfVar35 + 2) >> 0x20) +
                              fVar53 * ((float)((ulong)*(undefined8 *)(pfVar38 + 2) >> 0x20) +
                                       (float)((ulong)*(undefined8 *)(pfVar27 + 2) >> 0x20)),
                              (float)*(undefined8 *)(pfVar35 + 2) +
                              fVar53 * ((float)*(undefined8 *)(pfVar38 + 2) +
                                       (float)*(undefined8 *)(pfVar27 + 2)));
                *(ulong *)pfVar35 =
                     CONCAT44((float)((ulong)*(undefined8 *)pfVar35 >> 0x20) +
                              fVar53 * ((float)(uVar62 >> 0x20) + (float)((ulong)uVar54 >> 0x20)),
                              (float)*(undefined8 *)pfVar35 +
                              fVar53 * ((float)uVar62 + (float)uVar54));
                pfVar27 = pfVar31;
                pfVar35 = pfVar25;
                pfVar38 = pfVar23;
              } while (uVar13 != 0);
            }
            if (0x2f < uVar41) {
              do {
                uVar54 = *(undefined8 *)pfVar31;
                uVar55 = *(undefined8 *)pfVar23;
                *(ulong *)(pfVar25 + 2) =
                     CONCAT44((float)((ulong)*(undefined8 *)(pfVar25 + 2) >> 0x20) +
                              fVar53 * ((float)((ulong)*(undefined8 *)(pfVar23 + 2) >> 0x20) +
                                       (float)((ulong)*(undefined8 *)(pfVar31 + 2) >> 0x20)),
                              (float)*(undefined8 *)(pfVar25 + 2) +
                              fVar53 * ((float)*(undefined8 *)(pfVar23 + 2) +
                                       (float)*(undefined8 *)(pfVar31 + 2)));
                *(ulong *)pfVar25 =
                     CONCAT44((float)((ulong)*(undefined8 *)pfVar25 >> 0x20) +
                              fVar53 * ((float)((ulong)uVar55 >> 0x20) +
                                       (float)((ulong)uVar54 >> 0x20)),
                              (float)*(undefined8 *)pfVar25 +
                              fVar53 * ((float)uVar55 + (float)uVar54));
                uVar54 = *(undefined8 *)(pfVar31 + 4);
                uVar55 = *(undefined8 *)(pfVar23 + 4);
                *(ulong *)(pfVar25 + 6) =
                     CONCAT44((float)((ulong)*(undefined8 *)(pfVar25 + 6) >> 0x20) +
                              fVar53 * ((float)((ulong)*(undefined8 *)(pfVar23 + 6) >> 0x20) +
                                       (float)((ulong)*(undefined8 *)(pfVar31 + 6) >> 0x20)),
                              (float)*(undefined8 *)(pfVar25 + 6) +
                              fVar53 * ((float)*(undefined8 *)(pfVar23 + 6) +
                                       (float)*(undefined8 *)(pfVar31 + 6)));
                *(ulong *)(pfVar25 + 4) =
                     CONCAT44((float)((ulong)*(undefined8 *)(pfVar25 + 4) >> 0x20) +
                              fVar53 * ((float)((ulong)uVar55 >> 0x20) +
                                       (float)((ulong)uVar54 >> 0x20)),
                              (float)*(undefined8 *)(pfVar25 + 4) +
                              fVar53 * ((float)uVar55 + (float)uVar54));
                uVar54 = *(undefined8 *)(pfVar31 + 8);
                uVar55 = *(undefined8 *)(pfVar23 + 8);
                *(ulong *)(pfVar25 + 10) =
                     CONCAT44((float)((ulong)*(undefined8 *)(pfVar25 + 10) >> 0x20) +
                              fVar53 * ((float)((ulong)*(undefined8 *)(pfVar23 + 10) >> 0x20) +
                                       (float)((ulong)*(undefined8 *)(pfVar31 + 10) >> 0x20)),
                              (float)*(undefined8 *)(pfVar25 + 10) +
                              fVar53 * ((float)*(undefined8 *)(pfVar23 + 10) +
                                       (float)*(undefined8 *)(pfVar31 + 10)));
                *(ulong *)(pfVar25 + 8) =
                     CONCAT44((float)((ulong)*(undefined8 *)(pfVar25 + 8) >> 0x20) +
                              fVar53 * ((float)((ulong)uVar55 >> 0x20) +
                                       (float)((ulong)uVar54 >> 0x20)),
                              (float)*(undefined8 *)(pfVar25 + 8) +
                              fVar53 * ((float)uVar55 + (float)uVar54));
                pfVar27 = pfVar31 + 0xc;
                pfVar35 = pfVar31 + 0xe;
                pfVar31 = pfVar31 + 0x10;
                uVar62 = CONCAT44((float)((ulong)*(undefined8 *)(pfVar25 + 0xc) >> 0x20) +
                                  fVar53 * ((float)((ulong)*(undefined8 *)(pfVar23 + 0xc) >> 0x20) +
                                           (float)((ulong)*(undefined8 *)pfVar27 >> 0x20)),
                                  (float)*(undefined8 *)(pfVar25 + 0xc) +
                                  fVar53 * ((float)*(undefined8 *)(pfVar23 + 0xc) +
                                           (float)*(undefined8 *)pfVar27));
                *(ulong *)(pfVar25 + 0xe) =
                     CONCAT44((float)((ulong)*(undefined8 *)(pfVar25 + 0xe) >> 0x20) +
                              fVar53 * ((float)((ulong)*(undefined8 *)(pfVar23 + 0xe) >> 0x20) +
                                       (float)((ulong)*(undefined8 *)pfVar35 >> 0x20)),
                              (float)*(undefined8 *)(pfVar25 + 0xe) +
                              fVar53 * ((float)*(undefined8 *)(pfVar23 + 0xe) +
                                       (float)*(undefined8 *)pfVar35));
                *(ulong *)(pfVar25 + 0xc) = uVar62;
                pfVar25 = pfVar25 + 0x10;
                pfVar23 = pfVar23 + 0x10;
              } while (pfVar25 < pfVar33);
            }
          }
        }
        else if (uVar17 != 0) {
          fVar60 = (fVar57 - fVar53) / (float)uVar17;
          pfVar31 = pfVar19;
          pfVar33 = local_c8[2];
          pfVar25 = local_c8[3];
          fVar57 = fVar53;
          do {
            fVar61 = *pfVar31 + fVar53 * *pfVar33 + fVar57 * *pfVar25;
            uVar62 = (ulong)(uint)fVar61;
            fVar53 = fVar53 + fVar60;
            fVar57 = fVar57 + fVar60;
            pfVar23 = pfVar31 + 1;
            *pfVar31 = fVar61;
            pfVar31 = pfVar23;
            pfVar33 = pfVar33 + 1;
            pfVar25 = pfVar25 + 1;
          } while (pfVar23 < pfVar19 + uVar17);
        }
        if (*(char *)(param_1 + 0x138) != '\0') {
          fVar53 = *(float *)(param_1 + 0x1b0) * *(float *)(param_1 + 0x19c);
          fVar57 = *(float *)(*(long *)(param_1 + 0x158) + 0x50) *
                   *(float *)(*(long *)(param_1 + 0x158) + 0x3c);
          if (fVar57 == fVar53) {
            if (uVar17 != 0) {
              uVar41 = lVar40 + uVar32 * 4;
              pfVar31 = (float *)(uVar41 + 0x10);
              pfVar33 = pfVar19 + uVar17;
              pfVar25 = pfVar33;
              if (pfVar33 <= pfVar31) {
                pfVar25 = pfVar31;
              }
              uVar41 = ~uVar41 + (long)pfVar25;
              uVar26 = ((uint)(uVar41 >> 4) & 0xfffffff) + 1;
              uVar13 = (ulong)uVar26 & 3;
              pfVar31 = pfVar9;
              pfVar25 = pfVar19;
              pfVar23 = pfVar8;
              if ((uVar26 & 3) != 0) {
                pfVar27 = pfVar9;
                pfVar35 = pfVar19;
                pfVar38 = pfVar8;
                do {
                  pfVar25 = pfVar35 + 4;
                  uVar13 = uVar13 - 1;
                  pfVar31 = pfVar27 + 4;
                  uVar54 = *(undefined8 *)pfVar27;
                  pfVar23 = pfVar38 + 4;
                  uVar62 = *(ulong *)pfVar38;
                  *(ulong *)(pfVar35 + 2) =
                       CONCAT44((float)((ulong)*(undefined8 *)(pfVar35 + 2) >> 0x20) +
                                fVar53 * ((float)((ulong)*(undefined8 *)(pfVar38 + 2) >> 0x20) +
                                         (float)((ulong)*(undefined8 *)(pfVar27 + 2) >> 0x20)),
                                (float)*(undefined8 *)(pfVar35 + 2) +
                                fVar53 * ((float)*(undefined8 *)(pfVar38 + 2) +
                                         (float)*(undefined8 *)(pfVar27 + 2)));
                  *(ulong *)pfVar35 =
                       CONCAT44((float)((ulong)*(undefined8 *)pfVar35 >> 0x20) +
                                fVar53 * ((float)(uVar62 >> 0x20) + (float)((ulong)uVar54 >> 0x20)),
                                (float)*(undefined8 *)pfVar35 +
                                fVar53 * ((float)uVar62 + (float)uVar54));
                  pfVar27 = pfVar31;
                  pfVar35 = pfVar25;
                  pfVar38 = pfVar23;
                } while (uVar13 != 0);
              }
              if (0x2f < uVar41) {
                do {
                  uVar54 = *(undefined8 *)pfVar31;
                  uVar55 = *(undefined8 *)pfVar23;
                  *(ulong *)(pfVar25 + 2) =
                       CONCAT44((float)((ulong)*(undefined8 *)(pfVar25 + 2) >> 0x20) +
                                fVar53 * ((float)((ulong)*(undefined8 *)(pfVar23 + 2) >> 0x20) +
                                         (float)((ulong)*(undefined8 *)(pfVar31 + 2) >> 0x20)),
                                (float)*(undefined8 *)(pfVar25 + 2) +
                                fVar53 * ((float)*(undefined8 *)(pfVar23 + 2) +
                                         (float)*(undefined8 *)(pfVar31 + 2)));
                  *(ulong *)pfVar25 =
                       CONCAT44((float)((ulong)*(undefined8 *)pfVar25 >> 0x20) +
                                fVar53 * ((float)((ulong)uVar55 >> 0x20) +
                                         (float)((ulong)uVar54 >> 0x20)),
                                (float)*(undefined8 *)pfVar25 +
                                fVar53 * ((float)uVar55 + (float)uVar54));
                  uVar54 = *(undefined8 *)(pfVar31 + 4);
                  uVar55 = *(undefined8 *)(pfVar23 + 4);
                  *(ulong *)(pfVar25 + 6) =
                       CONCAT44((float)((ulong)*(undefined8 *)(pfVar25 + 6) >> 0x20) +
                                fVar53 * ((float)((ulong)*(undefined8 *)(pfVar23 + 6) >> 0x20) +
                                         (float)((ulong)*(undefined8 *)(pfVar31 + 6) >> 0x20)),
                                (float)*(undefined8 *)(pfVar25 + 6) +
                                fVar53 * ((float)*(undefined8 *)(pfVar23 + 6) +
                                         (float)*(undefined8 *)(pfVar31 + 6)));
                  *(ulong *)(pfVar25 + 4) =
                       CONCAT44((float)((ulong)*(undefined8 *)(pfVar25 + 4) >> 0x20) +
                                fVar53 * ((float)((ulong)uVar55 >> 0x20) +
                                         (float)((ulong)uVar54 >> 0x20)),
                                (float)*(undefined8 *)(pfVar25 + 4) +
                                fVar53 * ((float)uVar55 + (float)uVar54));
                  uVar54 = *(undefined8 *)(pfVar31 + 8);
                  uVar55 = *(undefined8 *)(pfVar23 + 8);
                  *(ulong *)(pfVar25 + 10) =
                       CONCAT44((float)((ulong)*(undefined8 *)(pfVar25 + 10) >> 0x20) +
                                fVar53 * ((float)((ulong)*(undefined8 *)(pfVar23 + 10) >> 0x20) +
                                         (float)((ulong)*(undefined8 *)(pfVar31 + 10) >> 0x20)),
                                (float)*(undefined8 *)(pfVar25 + 10) +
                                fVar53 * ((float)*(undefined8 *)(pfVar23 + 10) +
                                         (float)*(undefined8 *)(pfVar31 + 10)));
                  *(ulong *)(pfVar25 + 8) =
                       CONCAT44((float)((ulong)*(undefined8 *)(pfVar25 + 8) >> 0x20) +
                                fVar53 * ((float)((ulong)uVar55 >> 0x20) +
                                         (float)((ulong)uVar54 >> 0x20)),
                                (float)*(undefined8 *)(pfVar25 + 8) +
                                fVar53 * ((float)uVar55 + (float)uVar54));
                  pfVar27 = pfVar31 + 0xc;
                  pfVar35 = pfVar31 + 0xe;
                  pfVar31 = pfVar31 + 0x10;
                  uVar62 = CONCAT44((float)((ulong)*(undefined8 *)(pfVar25 + 0xc) >> 0x20) +
                                    fVar53 * ((float)((ulong)*(undefined8 *)(pfVar23 + 0xc) >> 0x20)
                                             + (float)((ulong)*(undefined8 *)pfVar27 >> 0x20)),
                                    (float)*(undefined8 *)(pfVar25 + 0xc) +
                                    fVar53 * ((float)*(undefined8 *)(pfVar23 + 0xc) +
                                             (float)*(undefined8 *)pfVar27));
                  *(ulong *)(pfVar25 + 0xe) =
                       CONCAT44((float)((ulong)*(undefined8 *)(pfVar25 + 0xe) >> 0x20) +
                                fVar53 * ((float)((ulong)*(undefined8 *)(pfVar23 + 0xe) >> 0x20) +
                                         (float)((ulong)*(undefined8 *)pfVar35 >> 0x20)),
                                (float)*(undefined8 *)(pfVar25 + 0xe) +
                                fVar53 * ((float)*(undefined8 *)(pfVar23 + 0xe) +
                                         (float)*(undefined8 *)pfVar35));
                  *(ulong *)(pfVar25 + 0xc) = uVar62;
                  pfVar25 = pfVar25 + 0x10;
                  pfVar23 = pfVar23 + 0x10;
                } while (pfVar25 < pfVar33);
              }
            }
          }
          else if (uVar17 != 0) {
            fVar60 = (fVar57 - fVar53) / (float)uVar17;
            pfVar31 = pfVar19;
            pfVar33 = pfVar9;
            pfVar25 = pfVar8;
            fVar57 = fVar53;
            do {
              fVar61 = *pfVar31 + fVar53 * *pfVar33 + fVar57 * *pfVar25;
              uVar62 = (ulong)(uint)fVar61;
              fVar53 = fVar53 + fVar60;
              fVar57 = fVar57 + fVar60;
              pfVar23 = pfVar31 + 1;
              *pfVar31 = fVar61;
              pfVar31 = pfVar23;
              pfVar33 = pfVar33 + 1;
              pfVar25 = pfVar25 + 1;
            } while (pfVar23 < pfVar19 + uVar17);
          }
          fVar53 = *(float *)(param_1 + 0x1b0) * *(float *)(param_1 + 0x1a0);
          fVar57 = *(float *)(*(long *)(param_1 + 0x158) + 0x50) *
                   *(float *)(*(long *)(param_1 + 0x158) + 0x40);
          if (fVar57 == fVar53) {
            if (uVar17 != 0) {
              uVar41 = lVar40 + uVar32 * 4;
              pfVar31 = (float *)(uVar41 + 0x10);
              pfVar33 = pfVar19 + uVar17;
              pfVar25 = pfVar33;
              if (pfVar33 <= pfVar31) {
                pfVar25 = pfVar31;
              }
              uVar41 = ~uVar41 + (long)pfVar25;
              uVar26 = ((uint)(uVar41 >> 4) & 0xfffffff) + 1;
              uVar13 = (ulong)uVar26 & 3;
              pfVar25 = pfVar39;
              pfVar31 = local_d0;
              if ((uVar26 & 3) != 0) {
                pfVar23 = local_d0;
                pfVar27 = pfVar19;
                pfVar35 = pfVar39;
                do {
                  pfVar19 = pfVar27 + 4;
                  uVar13 = uVar13 - 1;
                  pfVar31 = pfVar23 + 4;
                  uVar54 = *(undefined8 *)pfVar23;
                  pfVar25 = pfVar35 + 4;
                  uVar62 = *(ulong *)pfVar35;
                  *(ulong *)(pfVar27 + 2) =
                       CONCAT44((float)((ulong)*(undefined8 *)(pfVar27 + 2) >> 0x20) +
                                fVar53 * ((float)((ulong)*(undefined8 *)(pfVar35 + 2) >> 0x20) +
                                         (float)((ulong)*(undefined8 *)(pfVar23 + 2) >> 0x20)),
                                (float)*(undefined8 *)(pfVar27 + 2) +
                                fVar53 * ((float)*(undefined8 *)(pfVar35 + 2) +
                                         (float)*(undefined8 *)(pfVar23 + 2)));
                  *(ulong *)pfVar27 =
                       CONCAT44((float)((ulong)*(undefined8 *)pfVar27 >> 0x20) +
                                fVar53 * ((float)(uVar62 >> 0x20) + (float)((ulong)uVar54 >> 0x20)),
                                (float)*(undefined8 *)pfVar27 +
                                fVar53 * ((float)uVar62 + (float)uVar54));
                  pfVar23 = pfVar31;
                  pfVar27 = pfVar19;
                  pfVar35 = pfVar25;
                } while (uVar13 != 0);
              }
              if (0x2f < uVar41) {
                do {
                  uVar54 = *(undefined8 *)pfVar31;
                  uVar55 = *(undefined8 *)pfVar25;
                  *(ulong *)(pfVar19 + 2) =
                       CONCAT44((float)((ulong)*(undefined8 *)(pfVar19 + 2) >> 0x20) +
                                fVar53 * ((float)((ulong)*(undefined8 *)(pfVar25 + 2) >> 0x20) +
                                         (float)((ulong)*(undefined8 *)(pfVar31 + 2) >> 0x20)),
                                (float)*(undefined8 *)(pfVar19 + 2) +
                                fVar53 * ((float)*(undefined8 *)(pfVar25 + 2) +
                                         (float)*(undefined8 *)(pfVar31 + 2)));
                  *(ulong *)pfVar19 =
                       CONCAT44((float)((ulong)*(undefined8 *)pfVar19 >> 0x20) +
                                fVar53 * ((float)((ulong)uVar55 >> 0x20) +
                                         (float)((ulong)uVar54 >> 0x20)),
                                (float)*(undefined8 *)pfVar19 +
                                fVar53 * ((float)uVar55 + (float)uVar54));
                  uVar54 = *(undefined8 *)(pfVar31 + 4);
                  uVar55 = *(undefined8 *)(pfVar25 + 4);
                  *(ulong *)(pfVar19 + 6) =
                       CONCAT44((float)((ulong)*(undefined8 *)(pfVar19 + 6) >> 0x20) +
                                fVar53 * ((float)((ulong)*(undefined8 *)(pfVar25 + 6) >> 0x20) +
                                         (float)((ulong)*(undefined8 *)(pfVar31 + 6) >> 0x20)),
                                (float)*(undefined8 *)(pfVar19 + 6) +
                                fVar53 * ((float)*(undefined8 *)(pfVar25 + 6) +
                                         (float)*(undefined8 *)(pfVar31 + 6)));
                  *(ulong *)(pfVar19 + 4) =
                       CONCAT44((float)((ulong)*(undefined8 *)(pfVar19 + 4) >> 0x20) +
                                fVar53 * ((float)((ulong)uVar55 >> 0x20) +
                                         (float)((ulong)uVar54 >> 0x20)),
                                (float)*(undefined8 *)(pfVar19 + 4) +
                                fVar53 * ((float)uVar55 + (float)uVar54));
                  uVar54 = *(undefined8 *)(pfVar31 + 8);
                  uVar55 = *(undefined8 *)(pfVar25 + 8);
                  *(ulong *)(pfVar19 + 10) =
                       CONCAT44((float)((ulong)*(undefined8 *)(pfVar19 + 10) >> 0x20) +
                                fVar53 * ((float)((ulong)*(undefined8 *)(pfVar25 + 10) >> 0x20) +
                                         (float)((ulong)*(undefined8 *)(pfVar31 + 10) >> 0x20)),
                                (float)*(undefined8 *)(pfVar19 + 10) +
                                fVar53 * ((float)*(undefined8 *)(pfVar25 + 10) +
                                         (float)*(undefined8 *)(pfVar31 + 10)));
                  *(ulong *)(pfVar19 + 8) =
                       CONCAT44((float)((ulong)*(undefined8 *)(pfVar19 + 8) >> 0x20) +
                                fVar53 * ((float)((ulong)uVar55 >> 0x20) +
                                         (float)((ulong)uVar54 >> 0x20)),
                                (float)*(undefined8 *)(pfVar19 + 8) +
                                fVar53 * ((float)uVar55 + (float)uVar54));
                  pfVar23 = pfVar31 + 0xc;
                  pfVar27 = pfVar31 + 0xe;
                  pfVar31 = pfVar31 + 0x10;
                  uVar62 = CONCAT44((float)((ulong)*(undefined8 *)(pfVar19 + 0xc) >> 0x20) +
                                    fVar53 * ((float)((ulong)*(undefined8 *)(pfVar25 + 0xc) >> 0x20)
                                             + (float)((ulong)*(undefined8 *)pfVar23 >> 0x20)),
                                    (float)*(undefined8 *)(pfVar19 + 0xc) +
                                    fVar53 * ((float)*(undefined8 *)(pfVar25 + 0xc) +
                                             (float)*(undefined8 *)pfVar23));
                  *(ulong *)(pfVar19 + 0xe) =
                       CONCAT44((float)((ulong)*(undefined8 *)(pfVar19 + 0xe) >> 0x20) +
                                fVar53 * ((float)((ulong)*(undefined8 *)(pfVar25 + 0xe) >> 0x20) +
                                         (float)((ulong)*(undefined8 *)pfVar27 >> 0x20)),
                                (float)*(undefined8 *)(pfVar19 + 0xe) +
                                fVar53 * ((float)*(undefined8 *)(pfVar25 + 0xe) +
                                         (float)*(undefined8 *)pfVar27));
                  *(ulong *)(pfVar19 + 0xc) = uVar62;
                  pfVar19 = pfVar19 + 0x10;
                  pfVar25 = pfVar25 + 0x10;
                } while (pfVar19 < pfVar33);
              }
            }
          }
          else if (uVar17 != 0) {
            fVar60 = (fVar57 - fVar53) / (float)uVar17;
            pfVar31 = pfVar19;
            pfVar33 = local_d0;
            pfVar25 = pfVar39;
            fVar57 = fVar53;
            do {
              fVar61 = *pfVar31 + fVar53 * *pfVar33 + fVar57 * *pfVar25;
              uVar62 = (ulong)(uint)fVar61;
              fVar53 = fVar53 + fVar60;
              fVar57 = fVar57 + fVar60;
              pfVar23 = pfVar31 + 1;
              *pfVar31 = fVar61;
              pfVar31 = pfVar23;
              pfVar33 = pfVar33 + 1;
              pfVar25 = pfVar25 + 1;
            } while (pfVar23 < pfVar19 + uVar17);
          }
        }
        if ((*(byte *)(param_2 + 1) & 0xfe) != 0) {
          lVar34 = (ulong)*(ushort *)(param_2 + 2) * 4;
          lVar21 = *param_2;
          pfVar19 = (float *)(lVar21 + lVar34 + uVar32 * 4);
          fVar57 = *(float *)(param_1 + 0x1b4) * fVar52;
          fVar60 = -(*(float *)(param_1 + 0x1b4) * fVar52);
          fVar53 = *(float *)(param_1 + 0x1ac);
          fVar61 = *(float *)(*(long *)(param_1 + 0x158) + 0x4c);
          lVar40 = uVar32 * 4;
          fVar43 = *(float *)(*(long *)(param_1 + 0x158) + 0x54) * fVar79;
          bVar12 = false;
          if ((fVar61 == fVar53) && (bVar12 = false, !NAN(fVar43) && !NAN(fVar57))) {
            bVar12 = fVar43 == fVar57;
          }
          if (bVar12) {
            if (uVar17 != 0) {
              uVar41 = lVar21 + lVar40 + lVar34 + uVar14;
              uVar62 = lVar21 + lVar40 + lVar34 + 0x10;
              if (uVar41 <= uVar62) {
                uVar41 = uVar62;
              }
              uVar41 = ~(lVar21 + lVar40 + lVar34) + uVar41;
              pfVar31 = pfVar1;
              pfVar33 = __s;
              pfVar25 = pfVar19;
              if (((uint)uVar41 >> 4 & 1) == 0) {
                uVar54 = *(undefined8 *)__s;
                uVar55 = *(undefined8 *)pfVar1;
                *(ulong *)(pfVar19 + 2) =
                     CONCAT44((float)((ulong)*(undefined8 *)(pfVar19 + 2) >> 0x20) * fVar53 +
                              fVar57 * (float)((ulong)*(undefined8 *)(__src + 0x202) >> 0x20) +
                              fVar60 * (float)((ulong)*(undefined8 *)(__src + 0x302) >> 0x20),
                              (float)*(undefined8 *)(pfVar19 + 2) * fVar53 +
                              fVar57 * (float)*(undefined8 *)(__src + 0x202) +
                              fVar60 * (float)*(undefined8 *)(__src + 0x302));
                *(ulong *)pfVar19 =
                     CONCAT44((float)((ulong)*(undefined8 *)pfVar19 >> 0x20) * fVar53 +
                              fVar57 * (float)((ulong)uVar54 >> 0x20) +
                              fVar60 * (float)((ulong)uVar55 >> 0x20),
                              (float)*(undefined8 *)pfVar19 * fVar53 + fVar57 * (float)uVar54 +
                              fVar60 * (float)uVar55);
                pfVar31 = pfVar6;
                pfVar33 = pfVar5;
                pfVar25 = pfVar19 + 4;
              }
              if (0xf < uVar41) {
                do {
                  uVar54 = *(undefined8 *)pfVar33;
                  uVar55 = *(undefined8 *)pfVar31;
                  *(ulong *)(pfVar25 + 2) =
                       CONCAT44((float)((ulong)*(undefined8 *)(pfVar25 + 2) >> 0x20) * fVar53 +
                                fVar57 * (float)((ulong)*(undefined8 *)(pfVar33 + 2) >> 0x20) +
                                fVar60 * (float)((ulong)*(undefined8 *)(pfVar31 + 2) >> 0x20),
                                (float)*(undefined8 *)(pfVar25 + 2) * fVar53 +
                                fVar57 * (float)*(undefined8 *)(pfVar33 + 2) +
                                fVar60 * (float)*(undefined8 *)(pfVar31 + 2));
                  *(ulong *)pfVar25 =
                       CONCAT44((float)((ulong)*(undefined8 *)pfVar25 >> 0x20) * fVar53 +
                                fVar57 * (float)((ulong)uVar54 >> 0x20) +
                                fVar60 * (float)((ulong)uVar55 >> 0x20),
                                (float)*(undefined8 *)pfVar25 * fVar53 + fVar57 * (float)uVar54 +
                                fVar60 * (float)uVar55);
                  pfVar23 = pfVar33 + 6;
                  uVar54 = *(undefined8 *)(pfVar33 + 4);
                  pfVar27 = pfVar31 + 6;
                  uVar55 = *(undefined8 *)(pfVar31 + 4);
                  pfVar31 = pfVar31 + 8;
                  pfVar33 = pfVar33 + 8;
                  *(ulong *)(pfVar25 + 6) =
                       CONCAT44((float)((ulong)*(undefined8 *)(pfVar25 + 6) >> 0x20) * fVar53 +
                                fVar57 * (float)((ulong)*(undefined8 *)pfVar23 >> 0x20) +
                                fVar60 * (float)((ulong)*(undefined8 *)pfVar27 >> 0x20),
                                (float)*(undefined8 *)(pfVar25 + 6) * fVar53 +
                                fVar57 * (float)*(undefined8 *)pfVar23 +
                                fVar60 * (float)*(undefined8 *)pfVar27);
                  *(ulong *)(pfVar25 + 4) =
                       CONCAT44((float)((ulong)*(undefined8 *)(pfVar25 + 4) >> 0x20) * fVar53 +
                                fVar57 * (float)((ulong)uVar54 >> 0x20) +
                                fVar60 * (float)((ulong)uVar55 >> 0x20),
                                (float)*(undefined8 *)(pfVar25 + 4) * fVar53 +
                                fVar57 * (float)uVar54 + fVar60 * (float)uVar55);
                  pfVar25 = pfVar25 + 8;
                } while (pfVar25 < pfVar19 + uVar17);
              }
            }
          }
          else if (uVar17 != 0) {
            fVar45 = 1.0 / (float)uVar17;
            fVar61 = fVar61 - fVar53;
            fVar44 = fVar43 - fVar57;
            fVar43 = fVar57 - fVar43;
            pfVar33 = pfVar19;
            pfVar31 = __s;
            do {
              fVar48 = *pfVar33 * fVar53;
              fVar46 = fVar57 * *pfVar31;
              pfVar25 = pfVar31 + 0x100;
              pfVar31 = pfVar31 + 1;
              fVar47 = fVar60 * *pfVar25;
              fVar53 = fVar53 + fVar61 * fVar45;
              fVar57 = fVar57 + fVar44 * fVar45;
              fVar60 = fVar60 + fVar43 * fVar45;
              pfVar25 = pfVar33 + 1;
              *pfVar33 = fVar48 + fVar46 + fVar47;
              pfVar33 = pfVar25;
            } while (pfVar25 < pfVar19 + uVar17);
          }
          if (*(char *)(param_1 + 0x138) != '\0') {
            fVar57 = *(float *)(param_1 + 0x19c) * fVar59;
            fVar53 = fVar57 * *(float *)(param_1 + 0x1b0);
            fVar57 = -(fVar57 * *(float *)(param_1 + 0x1b0));
            fVar60 = *(float *)(*(long *)(param_1 + 0x158) + 0x3c) * fVar78 *
                     *(float *)(*(long *)(param_1 + 0x158) + 0x50);
            if (fVar60 == fVar53) {
              if (uVar17 != 0) {
                uVar41 = lVar21 + lVar40 + lVar34 + uVar14;
                uVar62 = lVar21 + lVar40 + lVar34 + 0x10;
                if (uVar41 <= uVar62) {
                  uVar41 = uVar62;
                }
                uVar41 = ~(lVar21 + lVar40 + lVar34) + uVar41;
                pfVar25 = pfVar19;
                pfVar33 = pfVar9;
                pfVar31 = pfVar8;
                if (((uint)uVar41 >> 4 & 1) == 0) {
                  pfVar25 = pfVar19 + 4;
                  uVar54 = *(undefined8 *)pfVar9;
                  uVar55 = *(undefined8 *)pfVar8;
                  *(ulong *)(pfVar19 + 2) =
                       CONCAT44((float)((ulong)*(undefined8 *)(pfVar19 + 2) >> 0x20) +
                                fVar53 * (float)((ulong)*(undefined8 *)(pfVar9 + 2) >> 0x20) +
                                fVar57 * (float)((ulong)*(undefined8 *)(pfVar8 + 2) >> 0x20),
                                (float)*(undefined8 *)(pfVar19 + 2) +
                                fVar53 * (float)*(undefined8 *)(pfVar9 + 2) +
                                fVar57 * (float)*(undefined8 *)(pfVar8 + 2));
                  *(ulong *)pfVar19 =
                       CONCAT44((float)((ulong)*(undefined8 *)pfVar19 >> 0x20) +
                                fVar53 * (float)((ulong)uVar54 >> 0x20) +
                                fVar57 * (float)((ulong)uVar55 >> 0x20),
                                (float)*(undefined8 *)pfVar19 + fVar53 * (float)uVar54 +
                                fVar57 * (float)uVar55);
                  pfVar33 = pfVar9 + 4;
                  pfVar31 = pfVar8 + 4;
                }
                if (0xf < uVar41) {
                  do {
                    uVar54 = *(undefined8 *)pfVar33;
                    uVar55 = *(undefined8 *)pfVar31;
                    *(ulong *)(pfVar25 + 2) =
                         CONCAT44((float)((ulong)*(undefined8 *)(pfVar25 + 2) >> 0x20) +
                                  fVar53 * (float)((ulong)*(undefined8 *)(pfVar33 + 2) >> 0x20) +
                                  fVar57 * (float)((ulong)*(undefined8 *)(pfVar31 + 2) >> 0x20),
                                  (float)*(undefined8 *)(pfVar25 + 2) +
                                  fVar53 * (float)*(undefined8 *)(pfVar33 + 2) +
                                  fVar57 * (float)*(undefined8 *)(pfVar31 + 2));
                    *(ulong *)pfVar25 =
                         CONCAT44((float)((ulong)*(undefined8 *)pfVar25 >> 0x20) +
                                  fVar53 * (float)((ulong)uVar54 >> 0x20) +
                                  fVar57 * (float)((ulong)uVar55 >> 0x20),
                                  (float)*(undefined8 *)pfVar25 + fVar53 * (float)uVar54 +
                                  fVar57 * (float)uVar55);
                    pfVar23 = pfVar33 + 6;
                    uVar54 = *(undefined8 *)(pfVar33 + 4);
                    pfVar27 = pfVar31 + 6;
                    uVar55 = *(undefined8 *)(pfVar31 + 4);
                    pfVar31 = pfVar31 + 8;
                    pfVar33 = pfVar33 + 8;
                    *(ulong *)(pfVar25 + 6) =
                         CONCAT44((float)((ulong)*(undefined8 *)(pfVar25 + 6) >> 0x20) +
                                  fVar53 * (float)((ulong)*(undefined8 *)pfVar23 >> 0x20) +
                                  fVar57 * (float)((ulong)*(undefined8 *)pfVar27 >> 0x20),
                                  (float)*(undefined8 *)(pfVar25 + 6) +
                                  fVar53 * (float)*(undefined8 *)pfVar23 +
                                  fVar57 * (float)*(undefined8 *)pfVar27);
                    *(ulong *)(pfVar25 + 4) =
                         CONCAT44((float)((ulong)*(undefined8 *)(pfVar25 + 4) >> 0x20) +
                                  fVar53 * (float)((ulong)uVar54 >> 0x20) +
                                  fVar57 * (float)((ulong)uVar55 >> 0x20),
                                  (float)*(undefined8 *)(pfVar25 + 4) + fVar53 * (float)uVar54 +
                                  fVar57 * (float)uVar55);
                    pfVar25 = pfVar25 + 8;
                  } while (pfVar25 < pfVar19 + uVar17);
                }
              }
            }
            else if (uVar17 != 0) {
              fVar61 = fVar60 - fVar53;
              fVar60 = fVar53 - fVar60;
              pfVar31 = pfVar8;
              pfVar33 = pfVar19;
              pfVar25 = pfVar9;
              do {
                fVar43 = fVar53 * *pfVar25;
                fVar44 = fVar57 * *pfVar31;
                fVar53 = fVar53 + fVar61 / (float)uVar17;
                fVar57 = fVar57 + fVar60 / (float)uVar17;
                pfVar23 = pfVar33 + 1;
                *pfVar33 = *pfVar33 + fVar43 + fVar44;
                pfVar31 = pfVar31 + 1;
                pfVar33 = pfVar23;
                pfVar25 = pfVar25 + 1;
              } while (pfVar23 < pfVar19 + uVar17);
            }
            fVar57 = *(float *)(param_1 + 0x1a0) * fVar59;
            fVar53 = fVar57 * *(float *)(param_1 + 0x1b0);
            fVar57 = -(fVar57 * *(float *)(param_1 + 0x1b0));
            fVar60 = *(float *)(*(long *)(param_1 + 0x158) + 0x40) * fVar78 *
                     *(float *)(*(long *)(param_1 + 0x158) + 0x50);
            if (fVar60 == fVar53) {
              if (uVar17 != 0) {
                uVar41 = lVar21 + lVar40 + lVar34 + uVar14;
                uVar62 = lVar21 + lVar40 + lVar34 + 0x10;
                if (uVar41 <= uVar62) {
                  uVar41 = uVar62;
                }
                uVar41 = ~(lVar21 + lVar40 + lVar34) + uVar41;
                pfVar25 = pfVar19;
                pfVar31 = pfVar39;
                pfVar33 = local_d0;
                if (((uint)uVar41 >> 4 & 1) == 0) {
                  uVar54 = *(undefined8 *)local_d0;
                  uVar55 = *(undefined8 *)pfVar39;
                  *(ulong *)(pfVar19 + 2) =
                       CONCAT44((float)((ulong)*(undefined8 *)(pfVar19 + 2) >> 0x20) +
                                fVar53 * (float)((ulong)*(undefined8 *)(local_d0 + 2) >> 0x20) +
                                fVar57 * (float)((ulong)*(undefined8 *)(pfVar39 + 2) >> 0x20),
                                (float)*(undefined8 *)(pfVar19 + 2) +
                                fVar53 * (float)*(undefined8 *)(local_d0 + 2) +
                                fVar57 * (float)*(undefined8 *)(pfVar39 + 2));
                  *(ulong *)pfVar19 =
                       CONCAT44((float)((ulong)*(undefined8 *)pfVar19 >> 0x20) +
                                fVar53 * (float)((ulong)uVar54 >> 0x20) +
                                fVar57 * (float)((ulong)uVar55 >> 0x20),
                                (float)*(undefined8 *)pfVar19 + fVar53 * (float)uVar54 +
                                fVar57 * (float)uVar55);
                  pfVar25 = pfVar19 + 4;
                  pfVar31 = pfVar39 + 4;
                  pfVar33 = local_d0 + 4;
                }
                if (0xf < uVar41) {
                  do {
                    uVar54 = *(undefined8 *)pfVar33;
                    uVar55 = *(undefined8 *)pfVar31;
                    *(ulong *)(pfVar25 + 2) =
                         CONCAT44((float)((ulong)*(undefined8 *)(pfVar25 + 2) >> 0x20) +
                                  fVar53 * (float)((ulong)*(undefined8 *)(pfVar33 + 2) >> 0x20) +
                                  fVar57 * (float)((ulong)*(undefined8 *)(pfVar31 + 2) >> 0x20),
                                  (float)*(undefined8 *)(pfVar25 + 2) +
                                  fVar53 * (float)*(undefined8 *)(pfVar33 + 2) +
                                  fVar57 * (float)*(undefined8 *)(pfVar31 + 2));
                    *(ulong *)pfVar25 =
                         CONCAT44((float)((ulong)*(undefined8 *)pfVar25 >> 0x20) +
                                  fVar53 * (float)((ulong)uVar54 >> 0x20) +
                                  fVar57 * (float)((ulong)uVar55 >> 0x20),
                                  (float)*(undefined8 *)pfVar25 + fVar53 * (float)uVar54 +
                                  fVar57 * (float)uVar55);
                    pfVar23 = pfVar33 + 6;
                    uVar54 = *(undefined8 *)(pfVar33 + 4);
                    pfVar27 = pfVar31 + 6;
                    uVar55 = *(undefined8 *)(pfVar31 + 4);
                    pfVar31 = pfVar31 + 8;
                    pfVar33 = pfVar33 + 8;
                    *(ulong *)(pfVar25 + 6) =
                         CONCAT44((float)((ulong)*(undefined8 *)(pfVar25 + 6) >> 0x20) +
                                  fVar53 * (float)((ulong)*(undefined8 *)pfVar23 >> 0x20) +
                                  fVar57 * (float)((ulong)*(undefined8 *)pfVar27 >> 0x20),
                                  (float)*(undefined8 *)(pfVar25 + 6) +
                                  fVar53 * (float)*(undefined8 *)pfVar23 +
                                  fVar57 * (float)*(undefined8 *)pfVar27);
                    *(ulong *)(pfVar25 + 4) =
                         CONCAT44((float)((ulong)*(undefined8 *)(pfVar25 + 4) >> 0x20) +
                                  fVar53 * (float)((ulong)uVar54 >> 0x20) +
                                  fVar57 * (float)((ulong)uVar55 >> 0x20),
                                  (float)*(undefined8 *)(pfVar25 + 4) + fVar53 * (float)uVar54 +
                                  fVar57 * (float)uVar55);
                    pfVar25 = pfVar25 + 8;
                  } while (pfVar25 < pfVar19 + uVar17);
                }
              }
            }
            else if (uVar17 != 0) {
              fVar61 = fVar60 - fVar53;
              fVar60 = fVar53 - fVar60;
              pfVar31 = pfVar19;
              pfVar33 = local_d0;
              pfVar25 = pfVar39;
              do {
                fVar43 = fVar53 * *pfVar33;
                fVar44 = fVar57 * *pfVar25;
                fVar53 = fVar53 + fVar61 / (float)uVar17;
                fVar57 = fVar57 + fVar60 / (float)uVar17;
                pfVar23 = pfVar31 + 1;
                *pfVar31 = *pfVar31 + fVar43 + fVar44;
                pfVar31 = pfVar23;
                pfVar33 = pfVar33 + 1;
                pfVar25 = pfVar25 + 1;
              } while (pfVar23 < pfVar19 + uVar17);
            }
          }
          fVar57 = *(float *)(param_1 + 0x1b4) * fVar52;
          fVar53 = *(float *)(param_1 + 0x1ac);
          fVar61 = *(float *)(*(long *)(param_1 + 0x158) + 0x4c);
          fVar60 = -(*(float *)(param_1 + 0x1b4) * fVar52);
          lVar34 = (ulong)*(ushort *)(param_2 + 2) * 8;
          fVar43 = *(float *)(*(long *)(param_1 + 0x158) + 0x54) * fVar79;
          lVar21 = *param_2;
          pfVar19 = (float *)(lVar21 + lVar34 + uVar32 * 4);
          bVar12 = false;
          if ((fVar61 == fVar53) && (bVar12 = false, !NAN(fVar43) && !NAN(fVar57))) {
            bVar12 = fVar43 == fVar57;
          }
          if (bVar12) {
            if (uVar17 != 0) {
              uVar41 = lVar21 + lVar34 + lVar40 + uVar14;
              uVar62 = lVar21 + lVar34 + lVar40 + 0x10;
              if (uVar41 <= uVar62) {
                uVar41 = uVar62;
              }
              uVar41 = ~(lVar21 + lVar40 + lVar34) + uVar41;
              pfVar25 = pfVar19;
              pfVar33 = local_c8[2];
              pfVar31 = local_c8[3];
              if (((uint)uVar41 >> 4 & 1) == 0) {
                uVar54 = *(undefined8 *)local_c8[2];
                uVar55 = *(undefined8 *)local_c8[3];
                *(ulong *)(pfVar19 + 2) =
                     CONCAT44((float)((ulong)*(undefined8 *)(pfVar19 + 2) >> 0x20) * fVar53 +
                              fVar57 * (float)((ulong)*(undefined8 *)(local_c8[2] + 2) >> 0x20) +
                              fVar60 * (float)((ulong)*(undefined8 *)(local_c8[3] + 2) >> 0x20),
                              (float)*(undefined8 *)(pfVar19 + 2) * fVar53 +
                              fVar57 * (float)*(undefined8 *)(local_c8[2] + 2) +
                              fVar60 * (float)*(undefined8 *)(local_c8[3] + 2));
                *(ulong *)pfVar19 =
                     CONCAT44((float)((ulong)*(undefined8 *)pfVar19 >> 0x20) * fVar53 +
                              fVar57 * (float)((ulong)uVar54 >> 0x20) +
                              fVar60 * (float)((ulong)uVar55 >> 0x20),
                              (float)*(undefined8 *)pfVar19 * fVar53 + fVar57 * (float)uVar54 +
                              fVar60 * (float)uVar55);
                pfVar25 = pfVar19 + 4;
                pfVar33 = local_c8[2] + 4;
                pfVar31 = local_c8[3] + 4;
              }
              if (0xf < uVar41) {
                do {
                  uVar54 = *(undefined8 *)pfVar33;
                  uVar55 = *(undefined8 *)pfVar31;
                  *(ulong *)(pfVar25 + 2) =
                       CONCAT44((float)((ulong)*(undefined8 *)(pfVar25 + 2) >> 0x20) * fVar53 +
                                fVar57 * (float)((ulong)*(undefined8 *)(pfVar33 + 2) >> 0x20) +
                                fVar60 * (float)((ulong)*(undefined8 *)(pfVar31 + 2) >> 0x20),
                                (float)*(undefined8 *)(pfVar25 + 2) * fVar53 +
                                fVar57 * (float)*(undefined8 *)(pfVar33 + 2) +
                                fVar60 * (float)*(undefined8 *)(pfVar31 + 2));
                  *(ulong *)pfVar25 =
                       CONCAT44((float)((ulong)*(undefined8 *)pfVar25 >> 0x20) * fVar53 +
                                fVar57 * (float)((ulong)uVar54 >> 0x20) +
                                fVar60 * (float)((ulong)uVar55 >> 0x20),
                                (float)*(undefined8 *)pfVar25 * fVar53 + fVar57 * (float)uVar54 +
                                fVar60 * (float)uVar55);
                  pfVar23 = pfVar33 + 6;
                  uVar54 = *(undefined8 *)(pfVar33 + 4);
                  pfVar27 = pfVar31 + 6;
                  uVar55 = *(undefined8 *)(pfVar31 + 4);
                  pfVar31 = pfVar31 + 8;
                  pfVar33 = pfVar33 + 8;
                  *(ulong *)(pfVar25 + 6) =
                       CONCAT44((float)((ulong)*(undefined8 *)(pfVar25 + 6) >> 0x20) * fVar53 +
                                fVar57 * (float)((ulong)*(undefined8 *)pfVar23 >> 0x20) +
                                fVar60 * (float)((ulong)*(undefined8 *)pfVar27 >> 0x20),
                                (float)*(undefined8 *)(pfVar25 + 6) * fVar53 +
                                fVar57 * (float)*(undefined8 *)pfVar23 +
                                fVar60 * (float)*(undefined8 *)pfVar27);
                  *(ulong *)(pfVar25 + 4) =
                       CONCAT44((float)((ulong)*(undefined8 *)(pfVar25 + 4) >> 0x20) * fVar53 +
                                fVar57 * (float)((ulong)uVar54 >> 0x20) +
                                fVar60 * (float)((ulong)uVar55 >> 0x20),
                                (float)*(undefined8 *)(pfVar25 + 4) * fVar53 +
                                fVar57 * (float)uVar54 + fVar60 * (float)uVar55);
                  pfVar25 = pfVar25 + 8;
                } while (pfVar25 < pfVar19 + uVar17);
              }
            }
          }
          else if (uVar17 != 0) {
            fVar45 = 1.0 / (float)uVar17;
            fVar61 = fVar61 - fVar53;
            fVar44 = fVar43 - fVar57;
            fVar43 = fVar57 - fVar43;
            pfVar31 = pfVar19;
            pfVar33 = local_c8[2];
            pfVar25 = local_c8[3];
            do {
              fVar48 = *pfVar31 * fVar53;
              fVar53 = fVar53 + fVar61 * fVar45;
              fVar46 = fVar57 * *pfVar33;
              fVar47 = fVar60 * *pfVar25;
              fVar57 = fVar57 + fVar44 * fVar45;
              fVar60 = fVar60 + fVar43 * fVar45;
              pfVar23 = pfVar31 + 1;
              *pfVar31 = fVar48 + fVar46 + fVar47;
              pfVar31 = pfVar23;
              pfVar33 = pfVar33 + 1;
              pfVar25 = pfVar25 + 1;
            } while (pfVar23 < pfVar19 + uVar17);
          }
          lVar21 = *param_2;
          fVar52 = fVar52 * fVar52;
          fVar53 = *(float *)(param_1 + 0x1ac);
          fVar57 = *(float *)(param_1 + 0x1b4) * fVar52;
          lVar34 = (ulong)*(ushort *)(param_2 + 2) * 0xc;
          pfVar19 = (float *)(lVar21 + lVar34 + uVar32 * 4);
          fVar60 = *(float *)(*(long *)(param_1 + 0x158) + 0x4c);
          fVar61 = *(float *)(*(long *)(param_1 + 0x158) + 0x54) * fVar56 * 0.0027777778;
          bVar12 = false;
          if ((fVar60 == fVar53) && (bVar12 = false, !NAN(fVar61) && !NAN(fVar57))) {
            bVar12 = fVar61 == fVar57;
          }
          if (bVar12) {
            if (uVar17 != 0) {
              uVar32 = lVar21 + lVar34 + lVar40 + uVar14;
              uVar62 = lVar21 + lVar34 + lVar40 + 0x10;
              if (uVar32 <= uVar62) {
                uVar32 = uVar62;
              }
              uVar32 = ~(lVar21 + lVar40 + lVar34) + uVar32;
              pfVar25 = pfVar1;
              pfVar31 = __s;
              pfVar33 = pfVar19;
              if (((uint)uVar32 >> 4 & 1) == 0) {
                uVar54 = *(undefined8 *)__s;
                uVar55 = *(undefined8 *)pfVar1;
                *(ulong *)(pfVar19 + 2) =
                     CONCAT44((float)((ulong)*(undefined8 *)(pfVar19 + 2) >> 0x20) * fVar53 +
                              fVar57 * ((float)((ulong)*(undefined8 *)(__src + 0x302) >> 0x20) +
                                       (float)((ulong)*(undefined8 *)(__src + 0x202) >> 0x20)),
                              (float)*(undefined8 *)(pfVar19 + 2) * fVar53 +
                              fVar57 * ((float)*(undefined8 *)(__src + 0x302) +
                                       (float)*(undefined8 *)(__src + 0x202)));
                *(ulong *)pfVar19 =
                     CONCAT44((float)((ulong)*(undefined8 *)pfVar19 >> 0x20) * fVar53 +
                              fVar57 * ((float)((ulong)uVar55 >> 0x20) +
                                       (float)((ulong)uVar54 >> 0x20)),
                              (float)*(undefined8 *)pfVar19 * fVar53 +
                              fVar57 * ((float)uVar55 + (float)uVar54));
                pfVar25 = pfVar6;
                pfVar31 = pfVar5;
                pfVar33 = pfVar19 + 4;
              }
              if (0xf < uVar32) {
                do {
                  uVar54 = *(undefined8 *)pfVar31;
                  uVar55 = *(undefined8 *)pfVar25;
                  *(ulong *)(pfVar33 + 2) =
                       CONCAT44((float)((ulong)*(undefined8 *)(pfVar33 + 2) >> 0x20) * fVar53 +
                                fVar57 * ((float)((ulong)*(undefined8 *)(pfVar25 + 2) >> 0x20) +
                                         (float)((ulong)*(undefined8 *)(pfVar31 + 2) >> 0x20)),
                                (float)*(undefined8 *)(pfVar33 + 2) * fVar53 +
                                fVar57 * ((float)*(undefined8 *)(pfVar25 + 2) +
                                         (float)*(undefined8 *)(pfVar31 + 2)));
                  *(ulong *)pfVar33 =
                       CONCAT44((float)((ulong)*(undefined8 *)pfVar33 >> 0x20) * fVar53 +
                                fVar57 * ((float)((ulong)uVar55 >> 0x20) +
                                         (float)((ulong)uVar54 >> 0x20)),
                                (float)*(undefined8 *)pfVar33 * fVar53 +
                                fVar57 * ((float)uVar55 + (float)uVar54));
                  pfVar23 = pfVar31 + 6;
                  uVar54 = *(undefined8 *)(pfVar31 + 4);
                  uVar55 = *(undefined8 *)(pfVar25 + 4);
                  pfVar31 = pfVar31 + 8;
                  *(ulong *)(pfVar33 + 6) =
                       CONCAT44((float)((ulong)*(undefined8 *)(pfVar33 + 6) >> 0x20) * fVar53 +
                                fVar57 * ((float)((ulong)*(undefined8 *)(pfVar25 + 6) >> 0x20) +
                                         (float)((ulong)*(undefined8 *)pfVar23 >> 0x20)),
                                (float)*(undefined8 *)(pfVar33 + 6) * fVar53 +
                                fVar57 * ((float)*(undefined8 *)(pfVar25 + 6) +
                                         (float)*(undefined8 *)pfVar23));
                  *(ulong *)(pfVar33 + 4) =
                       CONCAT44((float)((ulong)*(undefined8 *)(pfVar33 + 4) >> 0x20) * fVar53 +
                                fVar57 * ((float)((ulong)uVar55 >> 0x20) +
                                         (float)((ulong)uVar54 >> 0x20)),
                                (float)*(undefined8 *)(pfVar33 + 4) * fVar53 +
                                fVar57 * ((float)uVar55 + (float)uVar54));
                  pfVar33 = pfVar33 + 8;
                  pfVar25 = pfVar25 + 8;
                } while (pfVar33 < pfVar19 + uVar17);
              }
            }
          }
          else if (uVar17 != 0) {
            fVar60 = fVar60 - fVar53;
            fVar43 = (fVar61 - fVar57) / (float)uVar17;
            pfVar33 = pfVar19;
            pfVar31 = __s;
            fVar61 = fVar57;
            do {
              fVar46 = *pfVar33 * fVar53;
              fVar44 = fVar57 * *pfVar31;
              pfVar25 = pfVar31 + 0x100;
              pfVar31 = pfVar31 + 1;
              fVar45 = fVar61 * *pfVar25;
              fVar53 = fVar53 + fVar60 / (float)uVar17;
              fVar57 = fVar57 + fVar43;
              fVar61 = fVar61 + fVar43;
              pfVar25 = pfVar33 + 1;
              *pfVar33 = fVar46 + fVar44 + fVar45;
              pfVar33 = pfVar25;
            } while (pfVar25 < pfVar19 + uVar17);
          }
          fVar60 = -(*(float *)(param_1 + 0x1b4) * fVar52);
          uVar32 = (ulong)(uint)fVar60;
          fVar57 = *(float *)(param_1 + 0x1ac);
          fVar53 = *(float *)(*(long *)(param_1 + 0x158) + 0x4c);
          uVar62 = (ulong)(uint)fVar53;
          fVar61 = fVar56 * -0.0027777778 * *(float *)(*(long *)(param_1 + 0x158) + 0x54);
          bVar12 = false;
          if ((fVar53 == fVar57) && (bVar12 = false, !NAN(fVar61) && !NAN(fVar60))) {
            bVar12 = fVar61 == fVar60;
          }
          if (bVar12) {
            if (uVar17 != 0) {
              uVar41 = lVar21 + lVar34 + lVar40 + uVar14;
              uVar32 = lVar21 + lVar34 + lVar40 + 0x10;
              if (uVar41 <= uVar32) {
                uVar41 = uVar32;
              }
              uVar41 = ~(lVar21 + lVar40 + lVar34) + uVar41;
              pfVar33 = pfVar19;
              pfVar31 = local_c8[2];
              pfVar25 = local_c8[3];
              if (((uint)uVar41 >> 4 & 1) == 0) {
                fVar52 = (float)*(undefined8 *)local_c8[3] + (float)*(undefined8 *)local_c8[2];
                fVar53 = (float)((ulong)*(undefined8 *)local_c8[3] >> 0x20) +
                         (float)((ulong)*(undefined8 *)local_c8[2] >> 0x20);
                uVar62 = CONCAT44(fVar53,fVar52);
                *(ulong *)(pfVar19 + 2) =
                     CONCAT44((float)((ulong)*(undefined8 *)(pfVar19 + 2) >> 0x20) * fVar57 +
                              fVar60 * ((float)((ulong)*(undefined8 *)(local_c8[3] + 2) >> 0x20) +
                                       (float)((ulong)*(undefined8 *)(local_c8[2] + 2) >> 0x20)),
                              (float)*(undefined8 *)(pfVar19 + 2) * fVar57 +
                              fVar60 * ((float)*(undefined8 *)(local_c8[3] + 2) +
                                       (float)*(undefined8 *)(local_c8[2] + 2)));
                *(ulong *)pfVar19 =
                     CONCAT44((float)((ulong)*(undefined8 *)pfVar19 >> 0x20) * fVar57 +
                              fVar60 * fVar53,
                              (float)*(undefined8 *)pfVar19 * fVar57 + fVar60 * fVar52);
                pfVar33 = pfVar19 + 4;
                pfVar31 = local_c8[2] + 4;
                pfVar25 = local_c8[3] + 4;
              }
              if (0xf < uVar41) {
                do {
                  uVar54 = *(undefined8 *)pfVar31;
                  uVar55 = *(undefined8 *)pfVar25;
                  *(ulong *)(pfVar33 + 2) =
                       CONCAT44((float)((ulong)*(undefined8 *)(pfVar33 + 2) >> 0x20) * fVar57 +
                                fVar60 * ((float)((ulong)*(undefined8 *)(pfVar25 + 2) >> 0x20) +
                                         (float)((ulong)*(undefined8 *)(pfVar31 + 2) >> 0x20)),
                                (float)*(undefined8 *)(pfVar33 + 2) * fVar57 +
                                fVar60 * ((float)*(undefined8 *)(pfVar25 + 2) +
                                         (float)*(undefined8 *)(pfVar31 + 2)));
                  *(ulong *)pfVar33 =
                       CONCAT44((float)((ulong)*(undefined8 *)pfVar33 >> 0x20) * fVar57 +
                                fVar60 * ((float)((ulong)uVar55 >> 0x20) +
                                         (float)((ulong)uVar54 >> 0x20)),
                                (float)*(undefined8 *)pfVar33 * fVar57 +
                                fVar60 * ((float)uVar55 + (float)uVar54));
                  pfVar23 = pfVar31 + 6;
                  uVar54 = *(undefined8 *)(pfVar31 + 4);
                  uVar62 = *(ulong *)(pfVar25 + 4);
                  pfVar31 = pfVar31 + 8;
                  *(ulong *)(pfVar33 + 6) =
                       CONCAT44((float)((ulong)*(undefined8 *)(pfVar33 + 6) >> 0x20) * fVar57 +
                                fVar60 * ((float)((ulong)*(undefined8 *)(pfVar25 + 6) >> 0x20) +
                                         (float)((ulong)*(undefined8 *)pfVar23 >> 0x20)),
                                (float)*(undefined8 *)(pfVar33 + 6) * fVar57 +
                                fVar60 * ((float)*(undefined8 *)(pfVar25 + 6) +
                                         (float)*(undefined8 *)pfVar23));
                  *(ulong *)(pfVar33 + 4) =
                       CONCAT44((float)((ulong)*(undefined8 *)(pfVar33 + 4) >> 0x20) * fVar57 +
                                fVar60 * ((float)(uVar62 >> 0x20) + (float)((ulong)uVar54 >> 0x20)),
                                (float)*(undefined8 *)(pfVar33 + 4) * fVar57 +
                                fVar60 * ((float)uVar62 + (float)uVar54));
                  pfVar33 = pfVar33 + 8;
                  pfVar25 = pfVar25 + 8;
                } while (pfVar33 < pfVar19 + uVar17);
              }
            }
          }
          else if (uVar17 != 0) {
            fVar53 = fVar53 - fVar57;
            fVar52 = (fVar61 + *(float *)(param_1 + 0x1b4) * fVar52) / (float)uVar17;
            pfVar31 = local_c8[2];
            pfVar33 = local_c8[3];
            pfVar25 = pfVar19;
            uVar62 = uVar32;
            do {
              fVar43 = *pfVar25 * fVar57;
              fVar57 = fVar57 + fVar53 / (float)uVar17;
              fVar60 = (float)uVar32;
              fVar61 = (float)uVar62;
              uVar32 = (ulong)(uint)(fVar60 + fVar52);
              uVar62 = (ulong)(uint)(fVar61 + fVar52);
              pfVar23 = pfVar25 + 1;
              *pfVar25 = fVar43 + fVar60 * *pfVar31 + fVar61 * *pfVar33;
              pfVar31 = pfVar31 + 1;
              pfVar33 = pfVar33 + 1;
              pfVar25 = pfVar23;
            } while (pfVar23 < pfVar19 + uVar17);
          }
          if (*(char *)(param_1 + 0x138) != '\0') {
            fVar52 = *(float *)(param_1 + 0x19c) * fVar59 * *(float *)(param_1 + 0x1b0);
            fVar53 = *(float *)(*(long *)(param_1 + 0x158) + 0x3c) * fVar78 *
                     *(float *)(*(long *)(param_1 + 0x158) + 0x50);
            if (fVar53 == fVar52) {
              if (uVar17 != 0) {
                uVar32 = lVar21 + lVar34 + lVar40 + uVar14;
                uVar62 = lVar21 + lVar34 + lVar40 + 0x10;
                if (uVar32 <= uVar62) {
                  uVar32 = uVar62;
                }
                uVar32 = ~(lVar21 + lVar40 + lVar34) + uVar32;
                uVar26 = ((uint)(uVar32 >> 4) & 0xfffffff) + 1;
                uVar62 = (ulong)uVar26 & 3;
                pfVar31 = pfVar9;
                pfVar33 = pfVar19;
                pfVar25 = pfVar8;
                if ((uVar26 & 3) != 0) {
                  pfVar23 = pfVar9;
                  pfVar27 = pfVar8;
                  pfVar35 = pfVar19;
                  do {
                    pfVar33 = pfVar35 + 4;
                    uVar62 = uVar62 - 1;
                    pfVar31 = pfVar23 + 4;
                    uVar54 = *(undefined8 *)pfVar23;
                    pfVar25 = pfVar27 + 4;
                    uVar55 = *(undefined8 *)pfVar27;
                    *(ulong *)(pfVar35 + 2) =
                         CONCAT44((float)((ulong)*(undefined8 *)(pfVar35 + 2) >> 0x20) +
                                  fVar52 * ((float)((ulong)*(undefined8 *)(pfVar27 + 2) >> 0x20) +
                                           (float)((ulong)*(undefined8 *)(pfVar23 + 2) >> 0x20)),
                                  (float)*(undefined8 *)(pfVar35 + 2) +
                                  fVar52 * ((float)*(undefined8 *)(pfVar27 + 2) +
                                           (float)*(undefined8 *)(pfVar23 + 2)));
                    *(ulong *)pfVar35 =
                         CONCAT44((float)((ulong)*(undefined8 *)pfVar35 >> 0x20) +
                                  fVar52 * ((float)((ulong)uVar55 >> 0x20) +
                                           (float)((ulong)uVar54 >> 0x20)),
                                  (float)*(undefined8 *)pfVar35 +
                                  fVar52 * ((float)uVar55 + (float)uVar54));
                    pfVar23 = pfVar31;
                    pfVar27 = pfVar25;
                    pfVar35 = pfVar33;
                  } while (uVar62 != 0);
                }
                if (0x2f < uVar32) {
                  do {
                    uVar54 = *(undefined8 *)pfVar31;
                    uVar55 = *(undefined8 *)pfVar25;
                    *(ulong *)(pfVar33 + 2) =
                         CONCAT44((float)((ulong)*(undefined8 *)(pfVar33 + 2) >> 0x20) +
                                  fVar52 * ((float)((ulong)*(undefined8 *)(pfVar25 + 2) >> 0x20) +
                                           (float)((ulong)*(undefined8 *)(pfVar31 + 2) >> 0x20)),
                                  (float)*(undefined8 *)(pfVar33 + 2) +
                                  fVar52 * ((float)*(undefined8 *)(pfVar25 + 2) +
                                           (float)*(undefined8 *)(pfVar31 + 2)));
                    *(ulong *)pfVar33 =
                         CONCAT44((float)((ulong)*(undefined8 *)pfVar33 >> 0x20) +
                                  fVar52 * ((float)((ulong)uVar55 >> 0x20) +
                                           (float)((ulong)uVar54 >> 0x20)),
                                  (float)*(undefined8 *)pfVar33 +
                                  fVar52 * ((float)uVar55 + (float)uVar54));
                    uVar54 = *(undefined8 *)(pfVar31 + 4);
                    uVar55 = *(undefined8 *)(pfVar25 + 4);
                    *(ulong *)(pfVar33 + 6) =
                         CONCAT44((float)((ulong)*(undefined8 *)(pfVar33 + 6) >> 0x20) +
                                  fVar52 * ((float)((ulong)*(undefined8 *)(pfVar25 + 6) >> 0x20) +
                                           (float)((ulong)*(undefined8 *)(pfVar31 + 6) >> 0x20)),
                                  (float)*(undefined8 *)(pfVar33 + 6) +
                                  fVar52 * ((float)*(undefined8 *)(pfVar25 + 6) +
                                           (float)*(undefined8 *)(pfVar31 + 6)));
                    *(ulong *)(pfVar33 + 4) =
                         CONCAT44((float)((ulong)*(undefined8 *)(pfVar33 + 4) >> 0x20) +
                                  fVar52 * ((float)((ulong)uVar55 >> 0x20) +
                                           (float)((ulong)uVar54 >> 0x20)),
                                  (float)*(undefined8 *)(pfVar33 + 4) +
                                  fVar52 * ((float)uVar55 + (float)uVar54));
                    uVar54 = *(undefined8 *)(pfVar31 + 8);
                    uVar55 = *(undefined8 *)(pfVar25 + 8);
                    *(ulong *)(pfVar33 + 10) =
                         CONCAT44((float)((ulong)*(undefined8 *)(pfVar33 + 10) >> 0x20) +
                                  fVar52 * ((float)((ulong)*(undefined8 *)(pfVar25 + 10) >> 0x20) +
                                           (float)((ulong)*(undefined8 *)(pfVar31 + 10) >> 0x20)),
                                  (float)*(undefined8 *)(pfVar33 + 10) +
                                  fVar52 * ((float)*(undefined8 *)(pfVar25 + 10) +
                                           (float)*(undefined8 *)(pfVar31 + 10)));
                    *(ulong *)(pfVar33 + 8) =
                         CONCAT44((float)((ulong)*(undefined8 *)(pfVar33 + 8) >> 0x20) +
                                  fVar52 * ((float)((ulong)uVar55 >> 0x20) +
                                           (float)((ulong)uVar54 >> 0x20)),
                                  (float)*(undefined8 *)(pfVar33 + 8) +
                                  fVar52 * ((float)uVar55 + (float)uVar54));
                    pfVar23 = pfVar31 + 0xe;
                    uVar54 = *(undefined8 *)(pfVar31 + 0xc);
                    uVar55 = *(undefined8 *)(pfVar25 + 0xc);
                    pfVar31 = pfVar31 + 0x10;
                    *(ulong *)(pfVar33 + 0xe) =
                         CONCAT44((float)((ulong)*(undefined8 *)(pfVar33 + 0xe) >> 0x20) +
                                  fVar52 * ((float)((ulong)*(undefined8 *)(pfVar25 + 0xe) >> 0x20) +
                                           (float)((ulong)*(undefined8 *)pfVar23 >> 0x20)),
                                  (float)*(undefined8 *)(pfVar33 + 0xe) +
                                  fVar52 * ((float)*(undefined8 *)(pfVar25 + 0xe) +
                                           (float)*(undefined8 *)pfVar23));
                    *(ulong *)(pfVar33 + 0xc) =
                         CONCAT44((float)((ulong)*(undefined8 *)(pfVar33 + 0xc) >> 0x20) +
                                  fVar52 * ((float)((ulong)uVar55 >> 0x20) +
                                           (float)((ulong)uVar54 >> 0x20)),
                                  (float)*(undefined8 *)(pfVar33 + 0xc) +
                                  fVar52 * ((float)uVar55 + (float)uVar54));
                    pfVar33 = pfVar33 + 0x10;
                    pfVar25 = pfVar25 + 0x10;
                  } while (pfVar33 < pfVar19 + uVar17);
                }
              }
            }
            else if (uVar17 != 0) {
              fVar57 = (fVar53 - fVar52) / (float)uVar17;
              pfVar31 = pfVar19;
              pfVar33 = pfVar9;
              pfVar25 = pfVar8;
              fVar53 = fVar52;
              do {
                fVar60 = fVar52 * *pfVar33;
                fVar61 = fVar53 * *pfVar25;
                fVar52 = fVar52 + fVar57;
                fVar53 = fVar53 + fVar57;
                pfVar23 = pfVar31 + 1;
                *pfVar31 = *pfVar31 + fVar60 + fVar61;
                pfVar31 = pfVar23;
                pfVar33 = pfVar33 + 1;
                pfVar25 = pfVar25 + 1;
              } while (pfVar23 < pfVar19 + uVar17);
            }
            fVar59 = *(float *)(param_1 + 0x1a0) * fVar59;
            fVar52 = -(fVar59 * *(float *)(param_1 + 0x1b0));
            fVar53 = fVar56 * -0.003928371 * *(float *)(*(long *)(param_1 + 0x158) + 0x40) *
                     *(float *)(*(long *)(param_1 + 0x158) + 0x50);
            uVar62 = (ulong)(uint)fVar53;
            if (fVar53 == fVar52) {
              if (uVar17 != 0) {
                uVar32 = lVar21 + lVar34 + lVar40 + uVar14;
                uVar14 = lVar21 + lVar34 + lVar40 + 0x10;
                if (uVar32 <= uVar14) {
                  uVar32 = uVar14;
                }
                uVar32 = ~(lVar21 + lVar40 + lVar34) + uVar32;
                uVar26 = ((uint)(uVar32 >> 4) & 0xfffffff) + 1;
                uVar14 = (ulong)uVar26 & 3;
                pfVar33 = pfVar19;
                pfVar25 = pfVar39;
                pfVar31 = local_d0;
                if ((uVar26 & 3) != 0) {
                  pfVar23 = local_d0;
                  pfVar27 = pfVar39;
                  pfVar35 = pfVar19;
                  do {
                    pfVar33 = pfVar35 + 4;
                    uVar14 = uVar14 - 1;
                    pfVar31 = pfVar23 + 4;
                    uVar54 = *(undefined8 *)pfVar23;
                    pfVar25 = pfVar27 + 4;
                    uVar62 = *(ulong *)pfVar27;
                    *(ulong *)(pfVar35 + 2) =
                         CONCAT44((float)((ulong)*(undefined8 *)(pfVar35 + 2) >> 0x20) +
                                  fVar52 * ((float)((ulong)*(undefined8 *)(pfVar27 + 2) >> 0x20) +
                                           (float)((ulong)*(undefined8 *)(pfVar23 + 2) >> 0x20)),
                                  (float)*(undefined8 *)(pfVar35 + 2) +
                                  fVar52 * ((float)*(undefined8 *)(pfVar27 + 2) +
                                           (float)*(undefined8 *)(pfVar23 + 2)));
                    *(ulong *)pfVar35 =
                         CONCAT44((float)((ulong)*(undefined8 *)pfVar35 >> 0x20) +
                                  fVar52 * ((float)(uVar62 >> 0x20) + (float)((ulong)uVar54 >> 0x20)
                                           ),
                                  (float)*(undefined8 *)pfVar35 +
                                  fVar52 * ((float)uVar62 + (float)uVar54));
                    pfVar23 = pfVar31;
                    pfVar27 = pfVar25;
                    pfVar35 = pfVar33;
                  } while (uVar14 != 0);
                }
                if (0x2f < uVar32) {
                  do {
                    uVar54 = *(undefined8 *)pfVar31;
                    uVar55 = *(undefined8 *)pfVar25;
                    *(ulong *)(pfVar33 + 2) =
                         CONCAT44((float)((ulong)*(undefined8 *)(pfVar33 + 2) >> 0x20) +
                                  fVar52 * ((float)((ulong)*(undefined8 *)(pfVar25 + 2) >> 0x20) +
                                           (float)((ulong)*(undefined8 *)(pfVar31 + 2) >> 0x20)),
                                  (float)*(undefined8 *)(pfVar33 + 2) +
                                  fVar52 * ((float)*(undefined8 *)(pfVar25 + 2) +
                                           (float)*(undefined8 *)(pfVar31 + 2)));
                    *(ulong *)pfVar33 =
                         CONCAT44((float)((ulong)*(undefined8 *)pfVar33 >> 0x20) +
                                  fVar52 * ((float)((ulong)uVar55 >> 0x20) +
                                           (float)((ulong)uVar54 >> 0x20)),
                                  (float)*(undefined8 *)pfVar33 +
                                  fVar52 * ((float)uVar55 + (float)uVar54));
                    uVar54 = *(undefined8 *)(pfVar31 + 4);
                    uVar55 = *(undefined8 *)(pfVar25 + 4);
                    *(ulong *)(pfVar33 + 6) =
                         CONCAT44((float)((ulong)*(undefined8 *)(pfVar33 + 6) >> 0x20) +
                                  fVar52 * ((float)((ulong)*(undefined8 *)(pfVar25 + 6) >> 0x20) +
                                           (float)((ulong)*(undefined8 *)(pfVar31 + 6) >> 0x20)),
                                  (float)*(undefined8 *)(pfVar33 + 6) +
                                  fVar52 * ((float)*(undefined8 *)(pfVar25 + 6) +
                                           (float)*(undefined8 *)(pfVar31 + 6)));
                    *(ulong *)(pfVar33 + 4) =
                         CONCAT44((float)((ulong)*(undefined8 *)(pfVar33 + 4) >> 0x20) +
                                  fVar52 * ((float)((ulong)uVar55 >> 0x20) +
                                           (float)((ulong)uVar54 >> 0x20)),
                                  (float)*(undefined8 *)(pfVar33 + 4) +
                                  fVar52 * ((float)uVar55 + (float)uVar54));
                    uVar54 = *(undefined8 *)(pfVar31 + 8);
                    uVar55 = *(undefined8 *)(pfVar25 + 8);
                    *(ulong *)(pfVar33 + 10) =
                         CONCAT44((float)((ulong)*(undefined8 *)(pfVar33 + 10) >> 0x20) +
                                  fVar52 * ((float)((ulong)*(undefined8 *)(pfVar25 + 10) >> 0x20) +
                                           (float)((ulong)*(undefined8 *)(pfVar31 + 10) >> 0x20)),
                                  (float)*(undefined8 *)(pfVar33 + 10) +
                                  fVar52 * ((float)*(undefined8 *)(pfVar25 + 10) +
                                           (float)*(undefined8 *)(pfVar31 + 10)));
                    *(ulong *)(pfVar33 + 8) =
                         CONCAT44((float)((ulong)*(undefined8 *)(pfVar33 + 8) >> 0x20) +
                                  fVar52 * ((float)((ulong)uVar55 >> 0x20) +
                                           (float)((ulong)uVar54 >> 0x20)),
                                  (float)*(undefined8 *)(pfVar33 + 8) +
                                  fVar52 * ((float)uVar55 + (float)uVar54));
                    pfVar23 = pfVar31 + 0xc;
                    pfVar27 = pfVar31 + 0xe;
                    pfVar31 = pfVar31 + 0x10;
                    uVar62 = CONCAT44((float)((ulong)*(undefined8 *)(pfVar33 + 0xc) >> 0x20) +
                                      fVar52 * ((float)((ulong)*(undefined8 *)(pfVar25 + 0xc) >>
                                                       0x20) +
                                               (float)((ulong)*(undefined8 *)pfVar23 >> 0x20)),
                                      (float)*(undefined8 *)(pfVar33 + 0xc) +
                                      fVar52 * ((float)*(undefined8 *)(pfVar25 + 0xc) +
                                               (float)*(undefined8 *)pfVar23));
                    *(ulong *)(pfVar33 + 0xe) =
                         CONCAT44((float)((ulong)*(undefined8 *)(pfVar33 + 0xe) >> 0x20) +
                                  fVar52 * ((float)((ulong)*(undefined8 *)(pfVar25 + 0xe) >> 0x20) +
                                           (float)((ulong)*(undefined8 *)pfVar27 >> 0x20)),
                                  (float)*(undefined8 *)(pfVar33 + 0xe) +
                                  fVar52 * ((float)*(undefined8 *)(pfVar25 + 0xe) +
                                           (float)*(undefined8 *)pfVar27));
                    *(ulong *)(pfVar33 + 0xc) = uVar62;
                    pfVar33 = pfVar33 + 0x10;
                    pfVar25 = pfVar25 + 0x10;
                  } while (pfVar33 < pfVar19 + uVar17);
                }
              }
            }
            else if (uVar17 != 0) {
              fVar53 = (fVar53 + fVar59 * *(float *)(param_1 + 0x1b0)) / (float)uVar17;
              pfVar31 = local_d0;
              pfVar33 = pfVar39;
              pfVar25 = pfVar19;
              fVar59 = fVar52;
              do {
                fVar57 = *pfVar25 + fVar52 * *pfVar31 + fVar59 * *pfVar33;
                uVar62 = (ulong)(uint)fVar57;
                fVar52 = fVar52 + fVar53;
                fVar59 = fVar59 + fVar53;
                pfVar23 = pfVar25 + 1;
                *pfVar25 = fVar57;
                pfVar31 = pfVar31 + 1;
                pfVar33 = pfVar33 + 1;
                pfVar25 = pfVar23;
              } while (pfVar23 < pfVar19 + uVar17);
            }
          }
        }
        lVar40 = *(long *)(param_1 + 0x158);
        uVar15 = uVar17 + uVar15;
        *(undefined4 *)(param_1 + 0x1ac) = *(undefined4 *)(lVar40 + 0x4c);
        *(undefined4 *)(param_1 + 0x1b0) = *(undefined4 *)(lVar40 + 0x50);
        *(undefined4 *)(param_1 + 0x1b4) = *(undefined4 *)(lVar40 + 0x54);
        *(undefined4 *)(param_1 + 0x19c) = *(undefined4 *)(lVar40 + 0x3c);
        *(undefined4 *)(param_1 + 0x1a4) = *(undefined4 *)(lVar40 + 0x44);
        *(undefined4 *)(param_1 + 0x1a0) = *(undefined4 *)(lVar40 + 0x40);
        uVar20 = uVar20 - uVar17;
        *(undefined4 *)(param_1 + 0x1a8) = *(undefined4 *)(lVar40 + 0x48);
        fVar52 = fVar79;
        fVar59 = fVar78;
      } while (uVar20 != 0);
    }
    (**(code **)(**(long **)(param_1 + 0x160) + 0x18))(*(long **)(param_1 + 0x160),__src);
  }
  return;
}


