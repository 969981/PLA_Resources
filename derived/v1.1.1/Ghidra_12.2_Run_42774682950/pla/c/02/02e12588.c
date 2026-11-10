/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e12588; name: FUN_02e12588
 */


void FUN_02e12588(long param_1,long *param_2)

{
  float *__s;
  float *pfVar1;
  float *pfVar2;
  float *__dest;
  float *pfVar3;
  float *pfVar4;
  long *plVar5;
  float *pfVar6;
  float *pfVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  float *pfVar11;
  bool bVar12;
  bool bVar13;
  float *__src;
  float *pfVar14;
  ulong uVar15;
  float *pfVar16;
  ulong uVar17;
  uint uVar18;
  byte bVar19;
  uint uVar20;
  uint uVar21;
  float *pfVar22;
  uint uVar23;
  long lVar24;
  uint *puVar25;
  uint *puVar26;
  ulong uVar27;
  int iVar28;
  int iVar29;
  uint uVar30;
  float *pfVar31;
  ulong uVar32;
  float *pfVar33;
  undefined8 *puVar34;
  ulong *puVar35;
  long lVar36;
  long lVar37;
  float *pfVar38;
  uint uVar39;
  byte bVar40;
  ulong uVar41;
  float *pfVar42;
  float *pfVar43;
  long lVar44;
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
  undefined8 uVar55;
  undefined8 uVar56;
  float fVar57;
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
  float *local_c8 [4];
  float *local_a8;
  float *local_a0;
  
  uVar8 = *(uint *)(param_2 + 1);
  __src = (float *)(**(code **)(**(long **)(param_1 + 0x160) + 0x10))
                             (*(long **)(param_1 + 0x160),
                              (ulong)*(byte *)(param_1 + 0x138) * 0x800 + 0x2000);
  if (__src != (float *)0x0) {
    local_c8[2] = __src + 0x400;
    local_c8[3] = __src + 0x500;
    __s = __src + 0x200;
    pfVar1 = __src + 0x300;
    local_a8 = __src + 0x600;
    local_a0 = __src + 0x700;
    bVar13 = *(char *)(param_1 + 0x138) != '\0';
    fVar79 = *(float *)(*(long *)(param_1 + 0x158) + 0x14) * 0.001627189 + 0.707106;
    fVar54 = 1.0 - fVar79 * fVar79;
    fVar62 = SQRT(fVar54);
    pfVar42 = (float *)0x0;
    if (bVar13) {
      pfVar42 = __src + 0xb00;
    }
    pfVar43 = (float *)0x0;
    if (bVar13) {
      pfVar43 = __src + 0xa00;
    }
    pfVar6 = (float *)0x0;
    if (bVar13) {
      pfVar6 = __src + 0x900;
    }
    pfVar7 = (float *)0x0;
    if (bVar13) {
      pfVar7 = __src + 0x800;
    }
    uVar23 = (uint)*(ushort *)((long)param_2 + 0x12);
    if (fVar54 <= 0.0) {
      fVar62 = 0.0;
    }
    local_c8[0] = __s;
    local_c8[1] = pfVar1;
    if (*(ushort *)((long)param_2 + 0x12) != 0) {
      uVar15 = (ulong)(uint)*(float *)(param_1 + 0x174);
      fVar54 = *(float *)(param_1 + 0x174) * 0.001627189 + 0.707106;
      fVar57 = 1.0 - fVar54 * fVar54;
      fVar60 = SQRT(fVar57);
      pfVar2 = __src + 0x101;
      __dest = __src + 0x100;
      pfVar3 = __src + 0x201;
      pfVar4 = __src + 0x301;
      if (fVar57 <= 0.0) {
        fVar60 = 0.0;
      }
      uVar18 = 0;
      do {
        uVar20 = uVar23;
        if (0xff < uVar23) {
          uVar20 = 0x100;
        }
        FUN_02e1ce44(param_1,param_2,__src,uVar20);
        uVar39 = *(uint *)(param_1 + 0xd0);
        uVar17 = (ulong)(uVar20 << 2);
        if (uVar39 == 0) {
          memcpy(__dest,__src,uVar17);
        }
        else {
          uVar32 = (ulong)*(uint *)(param_1 + 0xe0);
          pfVar31 = (float *)(*(long *)(param_1 + 0xd8) + uVar32 * 4);
          pfVar33 = __dest;
          pfVar22 = __src;
          uVar21 = uVar20;
          do {
            uVar39 = uVar39 - (int)uVar32;
            uVar30 = uVar21;
            if (uVar39 <= uVar21) {
              uVar30 = uVar39;
            }
            uVar9 = uVar30 >> 2;
            uVar39 = uVar30 & 3;
            pfVar16 = pfVar33;
            pfVar14 = pfVar22;
            pfVar38 = pfVar31;
            if (uVar9 != 0) {
              uVar10 = uVar30 >> 2 & 3;
              pfVar38 = (float *)(ulong)uVar9;
              if (2 < uVar9 - 1) {
                iVar28 = uVar9 - uVar10;
                do {
                  uVar56 = *(undefined8 *)(pfVar31 + 2);
                  uVar55 = *(undefined8 *)pfVar31;
                  iVar28 = iVar28 + -4;
                  uVar59 = *(undefined8 *)pfVar22;
                  *(undefined8 *)(pfVar31 + 2) = *(undefined8 *)(pfVar22 + 2);
                  *(undefined8 *)pfVar31 = uVar59;
                  *(undefined8 *)(pfVar33 + 2) = uVar56;
                  *(undefined8 *)pfVar33 = uVar55;
                  uVar56 = *(undefined8 *)(pfVar31 + 6);
                  uVar55 = *(undefined8 *)(pfVar31 + 4);
                  uVar59 = *(undefined8 *)(pfVar22 + 4);
                  *(undefined8 *)(pfVar31 + 6) = *(undefined8 *)(pfVar22 + 6);
                  *(undefined8 *)(pfVar31 + 4) = uVar59;
                  *(undefined8 *)(pfVar33 + 6) = uVar56;
                  *(undefined8 *)(pfVar33 + 4) = uVar55;
                  uVar56 = *(undefined8 *)(pfVar31 + 10);
                  uVar55 = *(undefined8 *)(pfVar31 + 8);
                  uVar59 = *(undefined8 *)(pfVar22 + 8);
                  *(undefined8 *)(pfVar31 + 10) = *(undefined8 *)(pfVar22 + 10);
                  *(undefined8 *)(pfVar31 + 8) = uVar59;
                  *(undefined8 *)(pfVar33 + 10) = uVar56;
                  *(undefined8 *)(pfVar33 + 8) = uVar55;
                  uVar56 = *(undefined8 *)(pfVar31 + 0xe);
                  uVar55 = *(undefined8 *)(pfVar31 + 0xc);
                  pfVar16 = pfVar22 + 0xe;
                  uVar59 = *(undefined8 *)(pfVar22 + 0xc);
                  pfVar22 = pfVar22 + 0x10;
                  *(undefined8 *)(pfVar31 + 0xe) = *(undefined8 *)pfVar16;
                  *(undefined8 *)(pfVar31 + 0xc) = uVar59;
                  *(undefined8 *)(pfVar33 + 0xe) = uVar56;
                  *(undefined8 *)(pfVar33 + 0xc) = uVar55;
                  pfVar31 = pfVar31 + 0x10;
                  pfVar33 = pfVar33 + 0x10;
                  pfVar14 = pfVar22;
                  pfVar38 = pfVar31;
                  pfVar16 = pfVar33;
                } while (iVar28 != 0);
              }
              if (uVar10 != 0) {
                iVar28 = -uVar10;
                pfVar22 = pfVar16;
                pfVar33 = pfVar14;
                do {
                  pfVar38 = pfVar31 + 4;
                  uVar56 = *(undefined8 *)(pfVar31 + 2);
                  uVar55 = *(undefined8 *)pfVar31;
                  bVar13 = iVar28 != -1;
                  iVar28 = iVar28 + 1;
                  pfVar14 = pfVar33 + 4;
                  uVar59 = *(undefined8 *)pfVar33;
                  *(undefined8 *)(pfVar31 + 2) = *(undefined8 *)(pfVar33 + 2);
                  *(undefined8 *)pfVar31 = uVar59;
                  pfVar16 = pfVar22 + 4;
                  *(undefined8 *)(pfVar22 + 2) = uVar56;
                  *(undefined8 *)pfVar22 = uVar55;
                  pfVar22 = pfVar16;
                  pfVar33 = pfVar14;
                  pfVar31 = pfVar38;
                } while (bVar13);
              }
            }
            pfVar33 = pfVar16;
            pfVar22 = pfVar14;
            pfVar31 = pfVar38;
            if (uVar39 != 0) {
              fVar57 = *pfVar38;
              pfVar22 = pfVar14 + 1;
              pfVar31 = pfVar38 + 1;
              *pfVar38 = *pfVar14;
              pfVar33 = pfVar16 + 1;
              *pfVar16 = fVar57;
              if (1 < uVar39) {
                fVar57 = pfVar38[1];
                pfVar38[1] = pfVar14[1];
                pfVar16[1] = fVar57;
                if (uVar39 == 2) {
                  pfVar22 = pfVar14 + 2;
                  pfVar31 = pfVar38 + 2;
                  pfVar33 = pfVar16 + 2;
                }
                else {
                  fVar57 = pfVar38[2];
                  pfVar22 = pfVar14 + 3;
                  pfVar38[2] = pfVar14[2];
                  pfVar31 = pfVar38 + 3;
                  pfVar16[2] = fVar57;
                  pfVar33 = pfVar16 + 3;
                }
              }
            }
            uVar9 = *(int *)(param_1 + 0xe0) + uVar30;
            uVar39 = *(uint *)(param_1 + 0xd0);
            *(uint *)(param_1 + 0xe0) = uVar9;
            if (uVar9 == uVar39) {
              pfVar31 = *(float **)(param_1 + 0xd8);
              uVar9 = 0;
              *(undefined4 *)(param_1 + 0xe0) = 0;
            }
            uVar32 = (ulong)uVar9;
            uVar21 = uVar21 - uVar30;
          } while (uVar21 != 0);
        }
        uVar39 = *(uint *)(param_1 + 0xb8);
        if ((uVar39 != 0) && (uVar20 != 0)) {
          uVar32 = (ulong)*(uint *)(param_1 + 200);
          pfVar31 = __src;
          pfVar22 = (float *)(*(long *)(param_1 + 0xc0) + uVar32 * 4);
          uVar21 = uVar20;
          do {
            uVar39 = uVar39 - (int)uVar32;
            uVar30 = uVar21;
            if (uVar39 <= uVar21) {
              uVar30 = uVar39;
            }
            uVar9 = uVar30 >> 2;
            uVar39 = uVar30 & 3;
            if (uVar9 == 0) {
              pfVar33 = pfVar22;
              pfVar16 = pfVar31;
              if (uVar39 != 0) goto LAB_02e13a0c;
            }
            else {
              uVar10 = uVar30 >> 2 & 3;
              pfVar14 = (float *)(ulong)uVar9;
              pfVar33 = pfVar22;
              pfVar38 = (float *)(ulong)(uVar9 - 1);
              pfVar16 = pfVar31;
              if (2 < uVar9 - 1) {
                iVar28 = uVar9 - uVar10;
                do {
                  uVar56 = *(undefined8 *)(pfVar22 + 2);
                  uVar55 = *(undefined8 *)pfVar22;
                  iVar28 = iVar28 + -4;
                  uVar59 = *(undefined8 *)pfVar31;
                  *(undefined8 *)(pfVar22 + 2) = *(undefined8 *)(pfVar31 + 2);
                  *(undefined8 *)pfVar22 = uVar59;
                  *(undefined8 *)(pfVar31 + 2) = uVar56;
                  *(undefined8 *)pfVar31 = uVar55;
                  uVar56 = *(undefined8 *)(pfVar22 + 6);
                  uVar55 = *(undefined8 *)(pfVar22 + 4);
                  uVar59 = *(undefined8 *)(pfVar31 + 4);
                  *(undefined8 *)(pfVar22 + 6) = *(undefined8 *)(pfVar31 + 6);
                  *(undefined8 *)(pfVar22 + 4) = uVar59;
                  *(undefined8 *)(pfVar31 + 6) = uVar56;
                  *(undefined8 *)(pfVar31 + 4) = uVar55;
                  uVar56 = *(undefined8 *)(pfVar22 + 10);
                  uVar55 = *(undefined8 *)(pfVar22 + 8);
                  uVar59 = *(undefined8 *)(pfVar31 + 8);
                  *(undefined8 *)(pfVar22 + 10) = *(undefined8 *)(pfVar31 + 10);
                  *(undefined8 *)(pfVar22 + 8) = uVar59;
                  *(undefined8 *)(pfVar31 + 10) = uVar56;
                  *(undefined8 *)(pfVar31 + 8) = uVar55;
                  uVar56 = *(undefined8 *)(pfVar22 + 0xe);
                  uVar55 = *(undefined8 *)(pfVar22 + 0xc);
                  uVar59 = *(undefined8 *)(pfVar31 + 0xc);
                  *(undefined8 *)(pfVar22 + 0xe) = *(undefined8 *)(pfVar31 + 0xe);
                  *(undefined8 *)(pfVar22 + 0xc) = uVar59;
                  *(undefined8 *)(pfVar31 + 0xe) = uVar56;
                  *(undefined8 *)(pfVar31 + 0xc) = uVar55;
                  pfVar22 = pfVar22 + 0x10;
                  pfVar31 = pfVar31 + 0x10;
                  pfVar14 = pfVar22;
                  pfVar33 = pfVar22;
                  pfVar38 = pfVar31;
                  pfVar16 = pfVar31;
                } while (iVar28 != 0);
              }
              pfVar31 = pfVar38;
              pfVar22 = pfVar14;
              if (uVar10 != 0) {
                iVar28 = -uVar10;
                do {
                  pfVar22 = pfVar33 + 4;
                  uVar56 = *(undefined8 *)(pfVar33 + 2);
                  uVar55 = *(undefined8 *)pfVar33;
                  bVar13 = iVar28 != -1;
                  iVar28 = iVar28 + 1;
                  pfVar31 = pfVar16 + 4;
                  uVar59 = *(undefined8 *)pfVar16;
                  *(undefined8 *)(pfVar33 + 2) = *(undefined8 *)(pfVar16 + 2);
                  *(undefined8 *)pfVar33 = uVar59;
                  *(undefined8 *)(pfVar16 + 2) = uVar56;
                  *(undefined8 *)pfVar16 = uVar55;
                  pfVar33 = pfVar22;
                  pfVar16 = pfVar31;
                } while (bVar13);
              }
              pfVar33 = pfVar22;
              pfVar16 = pfVar31;
              if (uVar39 != 0) {
LAB_02e13a0c:
                fVar57 = *pfVar22;
                pfVar33 = pfVar22 + 1;
                *pfVar22 = *pfVar16;
                pfVar31 = pfVar16 + 1;
                *pfVar16 = fVar57;
                if (1 < uVar39) {
                  fVar57 = pfVar22[1];
                  pfVar22[1] = pfVar16[1];
                  pfVar16[1] = fVar57;
                  if (uVar39 == 2) {
                    pfVar33 = pfVar22 + 2;
                    pfVar31 = pfVar16 + 2;
                  }
                  else {
                    fVar57 = pfVar22[2];
                    pfVar22[2] = pfVar16[2];
                    pfVar33 = pfVar22 + 3;
                    pfVar31 = pfVar16 + 3;
                    pfVar16[2] = fVar57;
                  }
                }
              }
            }
            uVar9 = *(int *)(param_1 + 200) + uVar30;
            uVar32 = (ulong)uVar9;
            uVar39 = *(uint *)(param_1 + 0xb8);
            *(uint *)(param_1 + 200) = uVar9;
            if (uVar9 == uVar39) {
              pfVar33 = *(float **)(param_1 + 0xc0);
              uVar32 = 0;
              *(undefined4 *)(param_1 + 200) = 0;
            }
            uVar21 = uVar21 - uVar30;
            pfVar22 = pfVar33;
          } while (uVar21 != 0);
        }
        if (*(char *)(param_1 + 0x138) != '\0') {
          FUN_02e1f368(*(undefined8 *)(param_1 + 0x150),__src,pfVar7,pfVar6,uVar20);
          if ((*(char *)(*(long *)(param_1 + 0x158) + 0x98) != '\0') &&
             (bVar19 = *(byte *)(param_1 + 0x134), bVar19 != 0)) {
            uVar21 = uVar20 & 3;
            iVar28 = 4 - uVar21;
            uVar41 = 0;
            bVar40 = 0;
            uVar32 = (ulong)uVar20;
            uVar39 = iVar28 + uVar20;
            do {
              lVar44 = *(long *)(param_1 + 0x148);
              if (*(int *)(lVar44 + uVar41 * 0xa0 + 0x90) == 1) {
                uVar15 = uVar32;
                uVar30 = uVar20;
                if (uVar21 != 0) {
                  memset(pfVar7 + uVar32,0,(ulong)(uint)(iVar28 * 4));
                  uVar15 = (ulong)uVar39;
                  uVar30 = uVar39;
                }
                puVar34 = (undefined8 *)(lVar44 + uVar41 * 0xa0);
                fVar57 = *(float *)(puVar34 + 0x10);
                fVar58 = *(float *)((long)puVar34 + 0x84);
                fVar61 = *(float *)(puVar34 + 0x11);
                fVar63 = *(float *)((long)puVar34 + 0x8c);
                if (uVar30 != 0) {
                  uVar56 = puVar34[1];
                  uVar55 = *puVar34;
                  uVar65 = puVar34[3];
                  uVar59 = puVar34[2];
                  uVar69 = puVar34[5];
                  uVar67 = puVar34[4];
                  uVar73 = puVar34[7];
                  uVar71 = puVar34[6];
                  uVar77 = puVar34[9];
                  uVar75 = puVar34[8];
                  uVar82 = puVar34[0xb];
                  uVar80 = puVar34[10];
                  uVar86 = puVar34[0xd];
                  uVar84 = puVar34[0xc];
                  uVar90 = puVar34[0xf];
                  uVar88 = puVar34[0xe];
                  pfVar22 = pfVar7;
                  do {
                    fVar94 = fVar57 * (float)uVar75;
                    fVar95 = fVar57 * (float)((ulong)uVar75 >> 0x20);
                    fVar96 = fVar57 * (float)uVar77;
                    fVar97 = fVar57 * (float)((ulong)uVar77 >> 0x20);
                    fVar45 = (float)uVar80 * fVar58;
                    fVar48 = (float)((ulong)uVar80 >> 0x20) * fVar58;
                    fVar51 = (float)uVar82 * fVar58;
                    fVar52 = (float)((ulong)uVar82 >> 0x20) * fVar58;
                    pfVar31 = pfVar22 + 4;
                    fVar57 = (float)((ulong)*(undefined8 *)(pfVar22 + 2) >> 0x20);
                    fVar46 = (float)uVar84 * fVar61;
                    fVar49 = (float)((ulong)uVar84 >> 0x20) * fVar61;
                    fVar47 = (float)uVar88 * fVar63;
                    fVar50 = (float)((ulong)uVar88 >> 0x20) * fVar63;
                    fVar53 = (float)((ulong)uVar90 >> 0x20) * fVar63;
                    fVar92 = (float)*(undefined8 *)pfVar22;
                    fVar93 = (float)((ulong)*(undefined8 *)pfVar22 >> 0x20);
                    fVar58 = (float)*(undefined8 *)(pfVar22 + 2);
                    fVar63 = fVar96 + fVar51 + (float)uVar86 * fVar61 + (float)uVar90 * fVar63 +
                             (float)uVar56 * fVar58 + (float)uVar65 * fVar58 +
                             (float)uVar69 * fVar93 + (float)uVar73 * fVar92;
                    fVar61 = fVar97 + fVar52 + (float)((ulong)uVar86 >> 0x20) * fVar61 + fVar53 +
                             (float)((ulong)uVar56 >> 0x20) * fVar57 +
                             (float)((ulong)uVar65 >> 0x20) * fVar58 +
                             (float)((ulong)uVar69 >> 0x20) * fVar93 +
                             (float)((ulong)uVar73 >> 0x20) * fVar92;
                    *(ulong *)(pfVar22 + 2) = CONCAT44(fVar61,fVar63);
                    *(ulong *)pfVar22 =
                         CONCAT44(fVar95 + fVar48 + fVar49 + fVar50 +
                                  (float)((ulong)uVar55 >> 0x20) * fVar93 +
                                  (float)((ulong)uVar59 >> 0x20) * fVar58 +
                                  (float)((ulong)uVar67 >> 0x20) * fVar93 +
                                  (float)((ulong)uVar71 >> 0x20) * fVar92,
                                  fVar94 + fVar45 + fVar46 + fVar47 + (float)uVar55 * fVar92 +
                                  (float)uVar59 * fVar58 + (float)uVar67 * fVar93 +
                                  (float)uVar71 * fVar92);
                    pfVar22 = pfVar31;
                  } while (pfVar31 < pfVar7 + uVar15);
                }
                *(float *)(puVar34 + 0x10) = fVar57;
                *(float *)((long)puVar34 + 0x84) = fVar58;
                *(float *)(puVar34 + 0x11) = fVar61;
                *(float *)((long)puVar34 + 0x8c) = fVar63;
                lVar44 = *(long *)(param_1 + 0x148);
                uVar27 = uVar32;
                uVar30 = uVar20;
                if (uVar21 != 0) {
                  memset(pfVar6 + uVar32,0,(ulong)(uint)(iVar28 * 4));
                  uVar27 = (ulong)uVar39;
                  uVar30 = uVar39;
                }
                puVar35 = (ulong *)(lVar44 + (uVar41 + 1) * 0xa0);
                fVar57 = *(float *)(puVar35 + 0x10);
                fVar61 = *(float *)((long)puVar35 + 0x84);
                fVar58 = *(float *)(puVar35 + 0x11);
                fVar63 = *(float *)((long)puVar35 + 0x8c);
                uVar15 = (ulong)(uint)fVar63;
                if (uVar30 != 0) {
                  uVar41 = puVar35[1];
                  uVar15 = *puVar35;
                  uVar66 = puVar35[3];
                  uVar64 = puVar35[2];
                  uVar70 = puVar35[5];
                  uVar68 = puVar35[4];
                  uVar74 = puVar35[7];
                  uVar72 = puVar35[6];
                  uVar78 = puVar35[9];
                  uVar76 = puVar35[8];
                  uVar83 = puVar35[0xb];
                  uVar81 = puVar35[10];
                  uVar87 = puVar35[0xd];
                  uVar85 = puVar35[0xc];
                  uVar91 = puVar35[0xf];
                  uVar89 = puVar35[0xe];
                  pfVar22 = pfVar6;
                  do {
                    fVar94 = fVar57 * (float)uVar76;
                    fVar95 = fVar57 * (float)(uVar76 >> 0x20);
                    fVar96 = fVar57 * (float)uVar78;
                    fVar97 = fVar57 * (float)(uVar78 >> 0x20);
                    fVar45 = (float)uVar81 * fVar61;
                    fVar48 = (float)(uVar81 >> 0x20) * fVar61;
                    fVar51 = (float)uVar83 * fVar61;
                    fVar52 = (float)(uVar83 >> 0x20) * fVar61;
                    pfVar31 = pfVar22 + 4;
                    fVar57 = (float)((ulong)*(undefined8 *)(pfVar22 + 2) >> 0x20);
                    fVar46 = (float)uVar85 * fVar58;
                    fVar49 = (float)(uVar85 >> 0x20) * fVar58;
                    fVar47 = (float)uVar89 * fVar63;
                    fVar50 = (float)(uVar89 >> 0x20) * fVar63;
                    fVar53 = (float)(uVar91 >> 0x20) * fVar63;
                    fVar92 = (float)*(undefined8 *)pfVar22;
                    fVar93 = (float)((ulong)*(undefined8 *)pfVar22 >> 0x20);
                    fVar61 = (float)*(undefined8 *)(pfVar22 + 2);
                    fVar63 = fVar96 + fVar51 + (float)uVar87 * fVar58 + (float)uVar91 * fVar63 +
                             (float)uVar41 * fVar61 + (float)uVar66 * fVar61 +
                             (float)uVar70 * fVar93 + (float)uVar74 * fVar92;
                    fVar58 = fVar97 + fVar52 + (float)(uVar87 >> 0x20) * fVar58 + fVar53 +
                             (float)(uVar41 >> 0x20) * fVar57 + (float)(uVar66 >> 0x20) * fVar61 +
                             (float)(uVar70 >> 0x20) * fVar93 + (float)(uVar74 >> 0x20) * fVar92;
                    *(ulong *)(pfVar22 + 2) = CONCAT44(fVar58,fVar63);
                    *(ulong *)pfVar22 =
                         CONCAT44(fVar95 + fVar48 + fVar49 + fVar50 +
                                  (float)(uVar15 >> 0x20) * fVar93 +
                                  (float)(uVar64 >> 0x20) * fVar61 +
                                  (float)(uVar68 >> 0x20) * fVar93 +
                                  (float)(uVar72 >> 0x20) * fVar92,
                                  fVar94 + fVar45 + fVar46 + fVar47 + (float)uVar15 * fVar92 +
                                  (float)uVar64 * fVar61 + (float)uVar68 * fVar93 +
                                  (float)uVar72 * fVar92);
                    pfVar22 = pfVar31;
                  } while (pfVar31 < pfVar6 + uVar27);
                }
                *(float *)(puVar35 + 0x10) = fVar57;
                bVar40 = bVar40 + 1;
                *(float *)((long)puVar35 + 0x84) = fVar61;
                *(float *)(puVar35 + 0x11) = fVar58;
                *(float *)((long)puVar35 + 0x8c) = fVar63;
                bVar19 = *(byte *)(param_1 + 0x134);
              }
              bVar40 = bVar40 + 1;
              uVar41 = (ulong)bVar40;
            } while (bVar40 < bVar19);
          }
          uVar39 = *(uint *)(param_1 + 0xe8);
          if (uVar39 == 0) {
            pfVar42 = pfVar6;
            pfVar43 = pfVar7;
          }
          else if (uVar20 != 0) {
            uVar32 = (ulong)*(uint *)(param_1 + 0xf8);
            pfVar31 = (float *)(*(long *)(param_1 + 0xf0) + uVar32 * 4);
            pfVar33 = pfVar43;
            pfVar22 = pfVar7;
            uVar21 = uVar20;
            do {
              uVar39 = uVar39 - (int)uVar32;
              uVar30 = uVar21;
              if (uVar39 <= uVar21) {
                uVar30 = uVar39;
              }
              uVar9 = uVar30 >> 2;
              uVar39 = uVar30 & 3;
              pfVar16 = pfVar33;
              pfVar14 = pfVar22;
              pfVar38 = pfVar31;
              if (uVar9 != 0) {
                uVar10 = uVar30 >> 2 & 3;
                pfVar38 = (float *)(ulong)uVar9;
                if (2 < uVar9 - 1) {
                  iVar28 = uVar9 - uVar10;
                  do {
                    uVar56 = *(undefined8 *)(pfVar31 + 2);
                    uVar55 = *(undefined8 *)pfVar31;
                    iVar28 = iVar28 + -4;
                    uVar59 = *(undefined8 *)pfVar22;
                    *(undefined8 *)(pfVar31 + 2) = *(undefined8 *)(pfVar22 + 2);
                    *(undefined8 *)pfVar31 = uVar59;
                    *(undefined8 *)(pfVar33 + 2) = uVar56;
                    *(undefined8 *)pfVar33 = uVar55;
                    uVar56 = *(undefined8 *)(pfVar31 + 6);
                    uVar55 = *(undefined8 *)(pfVar31 + 4);
                    uVar59 = *(undefined8 *)(pfVar22 + 4);
                    *(undefined8 *)(pfVar31 + 6) = *(undefined8 *)(pfVar22 + 6);
                    *(undefined8 *)(pfVar31 + 4) = uVar59;
                    *(undefined8 *)(pfVar33 + 6) = uVar56;
                    *(undefined8 *)(pfVar33 + 4) = uVar55;
                    uVar56 = *(undefined8 *)(pfVar31 + 10);
                    uVar55 = *(undefined8 *)(pfVar31 + 8);
                    uVar59 = *(undefined8 *)(pfVar22 + 8);
                    *(undefined8 *)(pfVar31 + 10) = *(undefined8 *)(pfVar22 + 10);
                    *(undefined8 *)(pfVar31 + 8) = uVar59;
                    *(undefined8 *)(pfVar33 + 10) = uVar56;
                    *(undefined8 *)(pfVar33 + 8) = uVar55;
                    uVar56 = *(undefined8 *)(pfVar31 + 0xe);
                    uVar55 = *(undefined8 *)(pfVar31 + 0xc);
                    pfVar16 = pfVar22 + 0xe;
                    uVar59 = *(undefined8 *)(pfVar22 + 0xc);
                    pfVar22 = pfVar22 + 0x10;
                    *(undefined8 *)(pfVar31 + 0xe) = *(undefined8 *)pfVar16;
                    *(undefined8 *)(pfVar31 + 0xc) = uVar59;
                    *(undefined8 *)(pfVar33 + 0xe) = uVar56;
                    *(undefined8 *)(pfVar33 + 0xc) = uVar55;
                    pfVar31 = pfVar31 + 0x10;
                    pfVar33 = pfVar33 + 0x10;
                    pfVar14 = pfVar22;
                    pfVar38 = pfVar31;
                    pfVar16 = pfVar33;
                  } while (iVar28 != 0);
                }
                if (uVar10 != 0) {
                  iVar28 = -uVar10;
                  pfVar22 = pfVar16;
                  pfVar33 = pfVar14;
                  do {
                    pfVar38 = pfVar31 + 4;
                    uVar56 = *(undefined8 *)(pfVar31 + 2);
                    uVar55 = *(undefined8 *)pfVar31;
                    bVar13 = iVar28 != -1;
                    iVar28 = iVar28 + 1;
                    pfVar14 = pfVar33 + 4;
                    uVar59 = *(undefined8 *)pfVar33;
                    *(undefined8 *)(pfVar31 + 2) = *(undefined8 *)(pfVar33 + 2);
                    *(undefined8 *)pfVar31 = uVar59;
                    pfVar16 = pfVar22 + 4;
                    *(undefined8 *)(pfVar22 + 2) = uVar56;
                    *(undefined8 *)pfVar22 = uVar55;
                    pfVar22 = pfVar16;
                    pfVar33 = pfVar14;
                    pfVar31 = pfVar38;
                  } while (bVar13);
                }
              }
              pfVar33 = pfVar16;
              pfVar22 = pfVar14;
              pfVar31 = pfVar38;
              if (uVar39 != 0) {
                fVar57 = *pfVar38;
                pfVar22 = pfVar14 + 1;
                pfVar31 = pfVar38 + 1;
                *pfVar38 = *pfVar14;
                pfVar33 = pfVar16 + 1;
                *pfVar16 = fVar57;
                if (1 < uVar39) {
                  fVar57 = pfVar38[1];
                  pfVar38[1] = pfVar14[1];
                  pfVar16[1] = fVar57;
                  if (uVar39 == 2) {
                    pfVar22 = pfVar14 + 2;
                    pfVar31 = pfVar38 + 2;
                    pfVar33 = pfVar16 + 2;
                  }
                  else {
                    fVar57 = pfVar38[2];
                    pfVar22 = pfVar14 + 3;
                    pfVar38[2] = pfVar14[2];
                    pfVar31 = pfVar38 + 3;
                    pfVar16[2] = fVar57;
                    pfVar33 = pfVar16 + 3;
                  }
                }
              }
              uVar9 = *(int *)(param_1 + 0xf8) + uVar30;
              uVar39 = *(uint *)(param_1 + 0xe8);
              *(uint *)(param_1 + 0xf8) = uVar9;
              if (uVar9 == uVar39) {
                pfVar31 = *(float **)(param_1 + 0xf0);
                uVar9 = 0;
                *(undefined4 *)(param_1 + 0xf8) = 0;
              }
              uVar32 = (ulong)uVar9;
              uVar21 = uVar21 - uVar30;
            } while (uVar21 != 0);
            uVar32 = (ulong)*(uint *)(param_1 + 0x110);
            pfVar31 = (float *)(*(long *)(param_1 + 0x108) + uVar32 * 4);
            uVar39 = *(uint *)(param_1 + 0x100);
            pfVar33 = pfVar42;
            pfVar22 = pfVar6;
            uVar21 = uVar20;
            do {
              uVar39 = uVar39 - (int)uVar32;
              uVar30 = uVar21;
              if (uVar39 <= uVar21) {
                uVar30 = uVar39;
              }
              uVar9 = uVar30 >> 2;
              uVar39 = uVar30 & 3;
              pfVar16 = pfVar33;
              pfVar14 = pfVar22;
              pfVar38 = pfVar31;
              if (uVar9 != 0) {
                uVar10 = uVar30 >> 2 & 3;
                pfVar38 = (float *)(ulong)uVar9;
                if (2 < uVar9 - 1) {
                  iVar28 = uVar9 - uVar10;
                  do {
                    uVar56 = *(undefined8 *)(pfVar31 + 2);
                    uVar55 = *(undefined8 *)pfVar31;
                    iVar28 = iVar28 + -4;
                    uVar59 = *(undefined8 *)pfVar22;
                    *(undefined8 *)(pfVar31 + 2) = *(undefined8 *)(pfVar22 + 2);
                    *(undefined8 *)pfVar31 = uVar59;
                    *(undefined8 *)(pfVar33 + 2) = uVar56;
                    *(undefined8 *)pfVar33 = uVar55;
                    uVar56 = *(undefined8 *)(pfVar31 + 6);
                    uVar55 = *(undefined8 *)(pfVar31 + 4);
                    uVar59 = *(undefined8 *)(pfVar22 + 4);
                    *(undefined8 *)(pfVar31 + 6) = *(undefined8 *)(pfVar22 + 6);
                    *(undefined8 *)(pfVar31 + 4) = uVar59;
                    *(undefined8 *)(pfVar33 + 6) = uVar56;
                    *(undefined8 *)(pfVar33 + 4) = uVar55;
                    uVar56 = *(undefined8 *)(pfVar31 + 10);
                    uVar55 = *(undefined8 *)(pfVar31 + 8);
                    uVar59 = *(undefined8 *)(pfVar22 + 8);
                    *(undefined8 *)(pfVar31 + 10) = *(undefined8 *)(pfVar22 + 10);
                    *(undefined8 *)(pfVar31 + 8) = uVar59;
                    *(undefined8 *)(pfVar33 + 10) = uVar56;
                    *(undefined8 *)(pfVar33 + 8) = uVar55;
                    uVar56 = *(undefined8 *)(pfVar31 + 0xe);
                    uVar55 = *(undefined8 *)(pfVar31 + 0xc);
                    pfVar16 = pfVar22 + 0xe;
                    uVar59 = *(undefined8 *)(pfVar22 + 0xc);
                    pfVar22 = pfVar22 + 0x10;
                    *(undefined8 *)(pfVar31 + 0xe) = *(undefined8 *)pfVar16;
                    *(undefined8 *)(pfVar31 + 0xc) = uVar59;
                    *(undefined8 *)(pfVar33 + 0xe) = uVar56;
                    *(undefined8 *)(pfVar33 + 0xc) = uVar55;
                    pfVar31 = pfVar31 + 0x10;
                    pfVar33 = pfVar33 + 0x10;
                    pfVar14 = pfVar22;
                    pfVar38 = pfVar31;
                    pfVar16 = pfVar33;
                  } while (iVar28 != 0);
                }
                if (uVar10 != 0) {
                  iVar28 = -uVar10;
                  pfVar22 = pfVar16;
                  pfVar33 = pfVar14;
                  do {
                    pfVar38 = pfVar31 + 4;
                    uVar56 = *(undefined8 *)(pfVar31 + 2);
                    uVar55 = *(undefined8 *)pfVar31;
                    bVar13 = iVar28 != -1;
                    iVar28 = iVar28 + 1;
                    pfVar14 = pfVar33 + 4;
                    uVar59 = *(undefined8 *)pfVar33;
                    *(undefined8 *)(pfVar31 + 2) = *(undefined8 *)(pfVar33 + 2);
                    *(undefined8 *)pfVar31 = uVar59;
                    pfVar16 = pfVar22 + 4;
                    *(undefined8 *)(pfVar22 + 2) = uVar56;
                    *(undefined8 *)pfVar22 = uVar55;
                    pfVar22 = pfVar16;
                    pfVar33 = pfVar14;
                    pfVar31 = pfVar38;
                  } while (bVar13);
                }
              }
              pfVar33 = pfVar16;
              pfVar22 = pfVar14;
              pfVar31 = pfVar38;
              if (uVar39 != 0) {
                fVar57 = *pfVar38;
                pfVar22 = pfVar14 + 1;
                pfVar31 = pfVar38 + 1;
                *pfVar38 = *pfVar14;
                pfVar33 = pfVar16 + 1;
                *pfVar16 = fVar57;
                if (1 < uVar39) {
                  fVar57 = pfVar38[1];
                  pfVar38[1] = pfVar14[1];
                  pfVar16[1] = fVar57;
                  if (uVar39 == 2) {
                    pfVar22 = pfVar14 + 2;
                    pfVar31 = pfVar38 + 2;
                    pfVar33 = pfVar16 + 2;
                  }
                  else {
                    fVar57 = pfVar38[2];
                    pfVar22 = pfVar14 + 3;
                    pfVar38[2] = pfVar14[2];
                    pfVar31 = pfVar38 + 3;
                    pfVar16[2] = fVar57;
                    pfVar33 = pfVar16 + 3;
                  }
                }
              }
              uVar9 = *(int *)(param_1 + 0x110) + uVar30;
              uVar39 = *(uint *)(param_1 + 0x100);
              *(uint *)(param_1 + 0x110) = uVar9;
              if (uVar9 == uVar39) {
                pfVar31 = *(float **)(param_1 + 0x108);
                uVar9 = 0;
                *(undefined4 *)(param_1 + 0x110) = 0;
              }
              uVar32 = (ulong)uVar9;
              uVar21 = uVar21 - uVar30;
            } while (uVar21 != 0);
          }
        }
        iVar28 = *(int *)(param_1 + 0x18);
        iVar29 = *(int *)(param_1 + 8);
        uVar39 = iVar29 - iVar28;
        pfVar22 = (float *)(*(long *)(param_1 + 0x10) + (ulong)(uint)(iVar28 << 1) * 4);
        if (uVar20 < uVar39) {
          if (uVar20 != 0) {
            pfVar31 = __dest;
            uVar39 = uVar20;
            if ((uVar20 & 1) != 0) {
              fVar57 = *__dest;
              fVar58 = *pfVar22;
              *pfVar22 = fVar57;
              uVar15 = (ulong)(uint)*(float *)(param_1 + 0x1c);
              fVar58 = fVar58 + (fVar57 - pfVar22[1]) * *(float *)(param_1 + 0x1c);
              pfVar22[1] = fVar58;
              pfVar22 = pfVar22 + 2;
              *__dest = fVar58;
              pfVar31 = pfVar2;
              uVar39 = uVar20 - 1;
            }
            if (uVar20 != 1) {
              do {
                fVar57 = *pfVar31;
                uVar39 = uVar39 - 2;
                fVar58 = *pfVar22;
                *pfVar22 = fVar57;
                fVar58 = fVar58 + (fVar57 - pfVar22[1]) * *(float *)(param_1 + 0x1c);
                pfVar22[1] = fVar58;
                *pfVar31 = fVar58;
                fVar57 = pfVar31[1];
                fVar58 = pfVar22[2];
                pfVar22[2] = fVar57;
                fVar58 = fVar58 + (fVar57 - pfVar22[3]) * *(float *)(param_1 + 0x1c);
                pfVar22[3] = fVar58;
                pfVar31[1] = fVar58;
                pfVar31 = pfVar31 + 2;
                pfVar22 = pfVar22 + 4;
              } while (uVar39 != 0);
            }
            iVar28 = *(int *)(param_1 + 0x18);
          }
          *(uint *)(param_1 + 0x18) = iVar28 + uVar20;
        }
        else {
          pfVar31 = __dest;
          uVar21 = uVar20;
          do {
            uVar30 = uVar21;
            if (uVar39 <= uVar21) {
              uVar30 = uVar39;
            }
            pfVar33 = pfVar31;
            if (uVar30 != 0) {
              if (uVar30 != 1) {
                iVar28 = (uVar30 & 1) - uVar30;
                pfVar33 = pfVar22;
                pfVar16 = pfVar31;
                do {
                  fVar57 = *pfVar16;
                  pfVar22 = pfVar33 + 4;
                  pfVar31 = pfVar16 + 2;
                  fVar58 = *pfVar33;
                  *pfVar33 = fVar57;
                  fVar58 = fVar58 + (fVar57 - pfVar33[1]) * *(float *)(param_1 + 0x1c);
                  pfVar33[1] = fVar58;
                  *pfVar16 = fVar58;
                  fVar57 = pfVar16[1];
                  fVar58 = pfVar33[2];
                  pfVar33[2] = fVar57;
                  fVar58 = fVar58 + (fVar57 - pfVar33[3]) * *(float *)(param_1 + 0x1c);
                  iVar28 = iVar28 + 2;
                  pfVar33[3] = fVar58;
                  pfVar16[1] = fVar58;
                  pfVar33 = pfVar22;
                  pfVar16 = pfVar31;
                } while (iVar28 != 0);
              }
              pfVar33 = pfVar31;
              if ((uVar30 & 1) != 0) {
                fVar57 = *pfVar31;
                fVar58 = *pfVar22;
                *pfVar22 = fVar57;
                fVar58 = fVar58 + (fVar57 - pfVar22[1]) * *(float *)(param_1 + 0x1c);
                pfVar22[1] = fVar58;
                pfVar22 = pfVar22 + 2;
                pfVar33 = pfVar31 + 1;
                *pfVar31 = fVar58;
              }
              iVar28 = *(int *)(param_1 + 0x18);
              iVar29 = *(int *)(param_1 + 8);
            }
            iVar28 = iVar28 + uVar30;
            *(int *)(param_1 + 0x18) = iVar28;
            if (iVar28 == iVar29) {
              pfVar22 = *(float **)(param_1 + 0x10);
              iVar28 = 0;
              *(undefined4 *)(param_1 + 0x18) = 0;
            }
            uVar21 = uVar21 - uVar30;
            uVar39 = iVar29 - iVar28;
            pfVar31 = pfVar33;
          } while (uVar21 != 0);
        }
        iVar28 = *(int *)(param_1 + 0x30);
        iVar29 = *(int *)(param_1 + 0x20);
        uVar39 = iVar29 - iVar28;
        pfVar22 = (float *)(*(long *)(param_1 + 0x28) + (ulong)(uint)(iVar28 << 1) * 4);
        if (uVar20 < uVar39) {
          if (uVar20 != 0) {
            pfVar31 = __dest;
            uVar39 = uVar20;
            if ((uVar20 & 1) != 0) {
              fVar57 = *__dest;
              fVar58 = *pfVar22;
              *pfVar22 = fVar57;
              uVar15 = (ulong)(uint)*(float *)(param_1 + 0x34);
              fVar58 = fVar58 + (fVar57 - pfVar22[1]) * *(float *)(param_1 + 0x34);
              pfVar22[1] = fVar58;
              pfVar22 = pfVar22 + 2;
              *__dest = fVar58;
              pfVar31 = pfVar2;
              uVar39 = uVar20 - 1;
            }
            if (uVar20 != 1) {
              do {
                fVar57 = *pfVar31;
                uVar39 = uVar39 - 2;
                fVar58 = *pfVar22;
                *pfVar22 = fVar57;
                fVar58 = fVar58 + (fVar57 - pfVar22[1]) * *(float *)(param_1 + 0x34);
                pfVar22[1] = fVar58;
                *pfVar31 = fVar58;
                fVar57 = pfVar31[1];
                fVar58 = pfVar22[2];
                pfVar22[2] = fVar57;
                fVar58 = fVar58 + (fVar57 - pfVar22[3]) * *(float *)(param_1 + 0x34);
                pfVar22[3] = fVar58;
                pfVar31[1] = fVar58;
                pfVar31 = pfVar31 + 2;
                pfVar22 = pfVar22 + 4;
              } while (uVar39 != 0);
            }
            iVar28 = *(int *)(param_1 + 0x30);
          }
          *(uint *)(param_1 + 0x30) = iVar28 + uVar20;
        }
        else {
          pfVar31 = __dest;
          uVar21 = uVar20;
          do {
            uVar30 = uVar21;
            if (uVar39 <= uVar21) {
              uVar30 = uVar39;
            }
            pfVar33 = pfVar31;
            if (uVar30 != 0) {
              if (uVar30 != 1) {
                iVar28 = (uVar30 & 1) - uVar30;
                pfVar33 = pfVar22;
                pfVar16 = pfVar31;
                do {
                  fVar57 = *pfVar16;
                  pfVar22 = pfVar33 + 4;
                  pfVar31 = pfVar16 + 2;
                  fVar58 = *pfVar33;
                  *pfVar33 = fVar57;
                  fVar58 = fVar58 + (fVar57 - pfVar33[1]) * *(float *)(param_1 + 0x34);
                  pfVar33[1] = fVar58;
                  *pfVar16 = fVar58;
                  fVar57 = pfVar16[1];
                  fVar58 = pfVar33[2];
                  pfVar33[2] = fVar57;
                  fVar58 = fVar58 + (fVar57 - pfVar33[3]) * *(float *)(param_1 + 0x34);
                  iVar28 = iVar28 + 2;
                  pfVar33[3] = fVar58;
                  pfVar16[1] = fVar58;
                  pfVar33 = pfVar22;
                  pfVar16 = pfVar31;
                } while (iVar28 != 0);
              }
              pfVar33 = pfVar31;
              if ((uVar30 & 1) != 0) {
                fVar57 = *pfVar31;
                fVar58 = *pfVar22;
                *pfVar22 = fVar57;
                fVar58 = fVar58 + (fVar57 - pfVar22[1]) * *(float *)(param_1 + 0x34);
                pfVar22[1] = fVar58;
                pfVar22 = pfVar22 + 2;
                pfVar33 = pfVar31 + 1;
                *pfVar31 = fVar58;
              }
              iVar28 = *(int *)(param_1 + 0x30);
              iVar29 = *(int *)(param_1 + 0x20);
            }
            iVar28 = iVar28 + uVar30;
            *(int *)(param_1 + 0x30) = iVar28;
            if (iVar28 == iVar29) {
              pfVar22 = *(float **)(param_1 + 0x28);
              iVar28 = 0;
              *(undefined4 *)(param_1 + 0x30) = 0;
            }
            uVar21 = uVar21 - uVar30;
            uVar39 = iVar29 - iVar28;
            pfVar31 = pfVar33;
          } while (uVar21 != 0);
        }
        iVar28 = *(int *)(param_1 + 0x48);
        iVar29 = *(int *)(param_1 + 0x38);
        uVar39 = iVar29 - iVar28;
        pfVar22 = (float *)(*(long *)(param_1 + 0x40) + (ulong)(uint)(iVar28 << 1) * 4);
        if (uVar20 < uVar39) {
          if (uVar20 != 0) {
            pfVar31 = __dest;
            uVar39 = uVar20;
            if ((uVar20 & 1) != 0) {
              fVar57 = *__dest;
              fVar58 = *pfVar22;
              *pfVar22 = fVar57;
              uVar15 = (ulong)(uint)*(float *)(param_1 + 0x4c);
              fVar58 = fVar58 + (fVar57 - pfVar22[1]) * *(float *)(param_1 + 0x4c);
              pfVar22[1] = fVar58;
              pfVar22 = pfVar22 + 2;
              *__dest = fVar58;
              pfVar31 = pfVar2;
              uVar39 = uVar20 - 1;
            }
            if (uVar20 != 1) {
              do {
                fVar57 = *pfVar31;
                uVar39 = uVar39 - 2;
                fVar58 = *pfVar22;
                *pfVar22 = fVar57;
                fVar58 = fVar58 + (fVar57 - pfVar22[1]) * *(float *)(param_1 + 0x4c);
                pfVar22[1] = fVar58;
                *pfVar31 = fVar58;
                fVar57 = pfVar31[1];
                fVar58 = pfVar22[2];
                pfVar22[2] = fVar57;
                fVar58 = fVar58 + (fVar57 - pfVar22[3]) * *(float *)(param_1 + 0x4c);
                pfVar22[3] = fVar58;
                pfVar31[1] = fVar58;
                pfVar31 = pfVar31 + 2;
                pfVar22 = pfVar22 + 4;
              } while (uVar39 != 0);
            }
            iVar28 = *(int *)(param_1 + 0x48);
          }
          *(uint *)(param_1 + 0x48) = iVar28 + uVar20;
        }
        else {
          pfVar31 = __dest;
          uVar21 = uVar20;
          do {
            uVar30 = uVar21;
            if (uVar39 <= uVar21) {
              uVar30 = uVar39;
            }
            pfVar33 = pfVar31;
            if (uVar30 != 0) {
              if (uVar30 != 1) {
                iVar28 = (uVar30 & 1) - uVar30;
                pfVar33 = pfVar22;
                pfVar16 = pfVar31;
                do {
                  fVar57 = *pfVar16;
                  pfVar22 = pfVar33 + 4;
                  pfVar31 = pfVar16 + 2;
                  fVar58 = *pfVar33;
                  *pfVar33 = fVar57;
                  fVar58 = fVar58 + (fVar57 - pfVar33[1]) * *(float *)(param_1 + 0x4c);
                  pfVar33[1] = fVar58;
                  *pfVar16 = fVar58;
                  fVar57 = pfVar16[1];
                  fVar58 = pfVar33[2];
                  pfVar33[2] = fVar57;
                  fVar58 = fVar58 + (fVar57 - pfVar33[3]) * *(float *)(param_1 + 0x4c);
                  iVar28 = iVar28 + 2;
                  pfVar33[3] = fVar58;
                  pfVar16[1] = fVar58;
                  pfVar33 = pfVar22;
                  pfVar16 = pfVar31;
                } while (iVar28 != 0);
              }
              pfVar33 = pfVar31;
              if ((uVar30 & 1) != 0) {
                fVar57 = *pfVar31;
                fVar58 = *pfVar22;
                *pfVar22 = fVar57;
                fVar58 = fVar58 + (fVar57 - pfVar22[1]) * *(float *)(param_1 + 0x4c);
                pfVar22[1] = fVar58;
                pfVar22 = pfVar22 + 2;
                pfVar33 = pfVar31 + 1;
                *pfVar31 = fVar58;
              }
              iVar28 = *(int *)(param_1 + 0x48);
              iVar29 = *(int *)(param_1 + 0x38);
            }
            iVar28 = iVar28 + uVar30;
            *(int *)(param_1 + 0x48) = iVar28;
            if (iVar28 == iVar29) {
              pfVar22 = *(float **)(param_1 + 0x40);
              iVar28 = 0;
              *(undefined4 *)(param_1 + 0x48) = 0;
            }
            uVar21 = uVar21 - uVar30;
            uVar39 = iVar29 - iVar28;
            pfVar31 = pfVar33;
          } while (uVar21 != 0);
        }
        iVar28 = *(int *)(param_1 + 0x60);
        iVar29 = *(int *)(param_1 + 0x50);
        uVar39 = iVar29 - iVar28;
        pfVar22 = (float *)(*(long *)(param_1 + 0x58) + (ulong)(uint)(iVar28 << 1) * 4);
        if (uVar20 < uVar39) {
          if (uVar20 != 0) {
            pfVar31 = __dest;
            uVar39 = uVar20;
            if ((uVar20 & 1) != 0) {
              fVar57 = *__dest;
              fVar58 = *pfVar22;
              *pfVar22 = fVar57;
              uVar15 = (ulong)(uint)*(float *)(param_1 + 100);
              fVar58 = fVar58 + (fVar57 - pfVar22[1]) * *(float *)(param_1 + 100);
              pfVar22[1] = fVar58;
              pfVar22 = pfVar22 + 2;
              *__dest = fVar58;
              pfVar31 = pfVar2;
              uVar39 = uVar20 - 1;
            }
            if (uVar20 != 1) {
              do {
                fVar57 = *pfVar31;
                uVar39 = uVar39 - 2;
                fVar58 = *pfVar22;
                *pfVar22 = fVar57;
                fVar58 = fVar58 + (fVar57 - pfVar22[1]) * *(float *)(param_1 + 100);
                pfVar22[1] = fVar58;
                *pfVar31 = fVar58;
                fVar57 = pfVar31[1];
                fVar58 = pfVar22[2];
                pfVar22[2] = fVar57;
                fVar58 = fVar58 + (fVar57 - pfVar22[3]) * *(float *)(param_1 + 100);
                pfVar22[3] = fVar58;
                pfVar31[1] = fVar58;
                pfVar31 = pfVar31 + 2;
                pfVar22 = pfVar22 + 4;
              } while (uVar39 != 0);
            }
            iVar28 = *(int *)(param_1 + 0x60);
          }
          *(uint *)(param_1 + 0x60) = iVar28 + uVar20;
        }
        else {
          pfVar31 = __dest;
          uVar21 = uVar20;
          do {
            uVar30 = uVar21;
            if (uVar39 <= uVar21) {
              uVar30 = uVar39;
            }
            pfVar33 = pfVar31;
            if (uVar30 != 0) {
              if (uVar30 != 1) {
                iVar28 = (uVar30 & 1) - uVar30;
                pfVar33 = pfVar22;
                pfVar16 = pfVar31;
                do {
                  fVar57 = *pfVar16;
                  pfVar22 = pfVar33 + 4;
                  pfVar31 = pfVar16 + 2;
                  fVar58 = *pfVar33;
                  *pfVar33 = fVar57;
                  fVar58 = fVar58 + (fVar57 - pfVar33[1]) * *(float *)(param_1 + 100);
                  pfVar33[1] = fVar58;
                  *pfVar16 = fVar58;
                  fVar57 = pfVar16[1];
                  fVar58 = pfVar33[2];
                  pfVar33[2] = fVar57;
                  fVar58 = fVar58 + (fVar57 - pfVar33[3]) * *(float *)(param_1 + 100);
                  iVar28 = iVar28 + 2;
                  pfVar33[3] = fVar58;
                  pfVar16[1] = fVar58;
                  pfVar33 = pfVar22;
                  pfVar16 = pfVar31;
                } while (iVar28 != 0);
              }
              pfVar33 = pfVar31;
              if ((uVar30 & 1) != 0) {
                fVar57 = *pfVar31;
                fVar58 = *pfVar22;
                *pfVar22 = fVar57;
                fVar58 = fVar58 + (fVar57 - pfVar22[1]) * *(float *)(param_1 + 100);
                pfVar22[1] = fVar58;
                pfVar22 = pfVar22 + 2;
                pfVar33 = pfVar31 + 1;
                *pfVar31 = fVar58;
              }
              iVar28 = *(int *)(param_1 + 0x60);
              iVar29 = *(int *)(param_1 + 0x50);
            }
            iVar28 = iVar28 + uVar30;
            *(int *)(param_1 + 0x60) = iVar28;
            if (iVar28 == iVar29) {
              pfVar22 = *(float **)(param_1 + 0x58);
              iVar28 = 0;
              *(undefined4 *)(param_1 + 0x60) = 0;
            }
            uVar21 = uVar21 - uVar30;
            uVar39 = iVar29 - iVar28;
            pfVar31 = pfVar33;
          } while (uVar21 != 0);
        }
        FUN_02e1d0ac(param_1,__dest,uVar20);
        memset(__s,0,0x1800);
        fVar57 = (float)uVar15;
        if (*(int *)(param_1 + 0x128) != 0) {
          uVar32 = 0;
          lVar44 = *(long *)(param_1 + 0x140);
          do {
            if (uVar20 != 0) {
              lVar24 = lVar44 + uVar32 * 0xa8;
              plVar5 = (long *)(lVar24 + 0x98);
              puVar25 = (uint *)(lVar24 + 0xa0);
              uVar41 = (ulong)*puVar25;
              puVar26 = (uint *)(lVar44 + uVar32 * 0xa8 + 0x90);
              uVar39 = *puVar26;
              pfVar31 = __dest;
              pfVar22 = (float *)(*plVar5 + uVar41 * 4);
              uVar21 = uVar20;
              do {
                uVar39 = uVar39 - (int)uVar41;
                uVar30 = uVar21;
                if (uVar39 <= uVar21) {
                  uVar30 = uVar39;
                }
                uVar9 = uVar30 >> 2;
                uVar39 = uVar30 & 3;
                if (uVar9 == 0) {
                  pfVar33 = pfVar22;
                  pfVar16 = pfVar31;
                  if (uVar39 != 0) goto LAB_02e12ed0;
                }
                else {
                  uVar10 = uVar30 >> 2 & 3;
                  pfVar14 = (float *)(ulong)uVar9;
                  pfVar33 = pfVar22;
                  pfVar38 = (float *)(ulong)(uVar9 - 1);
                  pfVar16 = pfVar31;
                  if (2 < uVar9 - 1) {
                    iVar28 = uVar9 - uVar10;
                    do {
                      uVar56 = *(undefined8 *)(pfVar22 + 2);
                      uVar55 = *(undefined8 *)pfVar22;
                      iVar28 = iVar28 + -4;
                      uVar59 = *(undefined8 *)pfVar31;
                      *(undefined8 *)(pfVar22 + 2) = *(undefined8 *)(pfVar31 + 2);
                      *(undefined8 *)pfVar22 = uVar59;
                      *(undefined8 *)(pfVar31 + 2) = uVar56;
                      *(undefined8 *)pfVar31 = uVar55;
                      uVar56 = *(undefined8 *)(pfVar22 + 6);
                      uVar55 = *(undefined8 *)(pfVar22 + 4);
                      uVar59 = *(undefined8 *)(pfVar31 + 4);
                      *(undefined8 *)(pfVar22 + 6) = *(undefined8 *)(pfVar31 + 6);
                      *(undefined8 *)(pfVar22 + 4) = uVar59;
                      *(undefined8 *)(pfVar31 + 6) = uVar56;
                      *(undefined8 *)(pfVar31 + 4) = uVar55;
                      uVar56 = *(undefined8 *)(pfVar22 + 10);
                      uVar55 = *(undefined8 *)(pfVar22 + 8);
                      uVar59 = *(undefined8 *)(pfVar31 + 8);
                      *(undefined8 *)(pfVar22 + 10) = *(undefined8 *)(pfVar31 + 10);
                      *(undefined8 *)(pfVar22 + 8) = uVar59;
                      *(undefined8 *)(pfVar31 + 10) = uVar56;
                      *(undefined8 *)(pfVar31 + 8) = uVar55;
                      uVar56 = *(undefined8 *)(pfVar22 + 0xe);
                      uVar55 = *(undefined8 *)(pfVar22 + 0xc);
                      uVar59 = *(undefined8 *)(pfVar31 + 0xc);
                      *(undefined8 *)(pfVar22 + 0xe) = *(undefined8 *)(pfVar31 + 0xe);
                      *(undefined8 *)(pfVar22 + 0xc) = uVar59;
                      *(undefined8 *)(pfVar31 + 0xe) = uVar56;
                      *(undefined8 *)(pfVar31 + 0xc) = uVar55;
                      pfVar22 = pfVar22 + 0x10;
                      pfVar31 = pfVar31 + 0x10;
                      pfVar14 = pfVar22;
                      pfVar33 = pfVar22;
                      pfVar38 = pfVar31;
                      pfVar16 = pfVar31;
                    } while (iVar28 != 0);
                  }
                  pfVar31 = pfVar38;
                  pfVar22 = pfVar14;
                  if (uVar10 != 0) {
                    iVar28 = -uVar10;
                    do {
                      pfVar22 = pfVar33 + 4;
                      uVar56 = *(undefined8 *)(pfVar33 + 2);
                      uVar55 = *(undefined8 *)pfVar33;
                      bVar13 = iVar28 != -1;
                      iVar28 = iVar28 + 1;
                      pfVar31 = pfVar16 + 4;
                      uVar59 = *(undefined8 *)pfVar16;
                      *(undefined8 *)(pfVar33 + 2) = *(undefined8 *)(pfVar16 + 2);
                      *(undefined8 *)pfVar33 = uVar59;
                      *(undefined8 *)(pfVar16 + 2) = uVar56;
                      *(undefined8 *)pfVar16 = uVar55;
                      pfVar33 = pfVar22;
                      pfVar16 = pfVar31;
                    } while (bVar13);
                  }
                  pfVar33 = pfVar22;
                  pfVar16 = pfVar31;
                  if (uVar39 != 0) {
LAB_02e12ed0:
                    fVar57 = *pfVar22;
                    pfVar33 = pfVar22 + 1;
                    *pfVar22 = *pfVar16;
                    pfVar31 = pfVar16 + 1;
                    *pfVar16 = fVar57;
                    if (1 < uVar39) {
                      fVar57 = pfVar22[1];
                      pfVar22[1] = pfVar16[1];
                      pfVar16[1] = fVar57;
                      if (uVar39 == 2) {
                        pfVar33 = pfVar22 + 2;
                        pfVar31 = pfVar16 + 2;
                      }
                      else {
                        fVar57 = pfVar22[2];
                        pfVar22[2] = pfVar16[2];
                        pfVar33 = pfVar22 + 3;
                        pfVar31 = pfVar16 + 3;
                        pfVar16[2] = fVar57;
                      }
                    }
                  }
                }
                uVar9 = *puVar25 + uVar30;
                uVar41 = (ulong)uVar9;
                *puVar25 = uVar9;
                uVar39 = *puVar26;
                if (uVar9 == uVar39) {
                  pfVar33 = (float *)*plVar5;
                  uVar41 = 0;
                  *puVar25 = 0;
                }
                uVar21 = uVar21 - uVar30;
                pfVar22 = pfVar33;
              } while (uVar21 != 0);
              lVar44 = *(long *)(param_1 + 0x140);
            }
            uVar39 = (uint)uVar32;
            FUN_02e1ead4(lVar44 + uVar32 * 0xa8,__dest,local_c8[uVar39 & 1],local_c8[uVar39 & 1 | 2]
                         ,local_c8[uVar39 & 1 | 4],uVar20);
            fVar57 = (float)uVar15;
            uVar32 = uVar32 + 1;
            if (*(uint *)(param_1 + 0x128) <= uVar32) break;
            lVar44 = *(long *)(param_1 + 0x140);
          } while( true );
        }
        fVar63 = *(float *)(param_1 + 0x124) * 1.4142135;
        fVar61 = *(float *)(param_1 + 0x70);
        fVar58 = *(float *)(param_1 + 0x74);
        if (uVar20 == 0) {
          fVar57 = fVar58;
        }
        else {
          fVar45 = *(float *)(param_1 + 0x78);
          pfVar22 = (float *)((long)__s + uVar17);
          if ((float *)((long)__s + uVar17) <= pfVar3) {
            pfVar22 = pfVar3;
          }
          uVar15 = (long)pfVar22 + (-0x801 - (long)__src);
          if (((uint)uVar15 >> 2 & 1) == 0) {
            fVar57 = *__s;
            fVar58 = (fVar57 * fVar63 - fVar61) + fVar58 * fVar45;
            *__s = fVar58;
            pfVar22 = pfVar3;
            fVar61 = fVar57 * fVar63;
            fVar57 = fVar58;
          }
          else {
            pfVar22 = __s;
          }
          if (3 < uVar15) {
            do {
              fVar57 = (*pfVar22 * fVar63 - fVar61) + fVar58 * fVar45;
              fVar61 = pfVar22[1] * fVar63;
              fVar58 = (fVar61 - *pfVar22 * fVar63) + fVar57 * fVar45;
              pfVar31 = pfVar22 + 2;
              *pfVar22 = fVar57;
              pfVar22[1] = fVar58;
              pfVar22 = pfVar31;
              fVar57 = fVar58;
            } while (pfVar31 < __s + uVar20);
          }
        }
        *(float *)(param_1 + 0x70) = fVar61;
        fVar61 = *(float *)(param_1 + 0x7c);
        fVar58 = *(float *)(param_1 + 0x80);
        *(float *)(param_1 + 0x74) = fVar57;
        if (uVar20 != 0) {
          fVar45 = *(float *)(param_1 + 0x84);
          pfVar22 = (float *)((long)pfVar1 + uVar17);
          if ((float *)((long)pfVar1 + uVar17) <= pfVar4) {
            pfVar22 = pfVar4;
          }
          uVar15 = (long)pfVar22 + (-0xc01 - (long)__src);
          pfVar22 = pfVar1;
          fVar46 = fVar58;
          if (((uint)uVar15 >> 2 & 1) == 0) {
            fVar57 = *pfVar1;
            fVar46 = (fVar57 * fVar63 - fVar61) + fVar58 * fVar45;
            *pfVar1 = fVar46;
            pfVar22 = pfVar4;
            fVar61 = fVar57 * fVar63;
            fVar57 = fVar46;
          }
          fVar58 = fVar57;
          if (3 < uVar15) {
            do {
              fVar57 = *pfVar22;
              fVar58 = (fVar57 * fVar63 - fVar61) + fVar46 * fVar45;
              fVar61 = pfVar22[1] * fVar63;
              *pfVar22 = fVar58;
              fVar46 = (fVar61 - fVar57 * fVar63) + fVar58 * fVar45;
              pfVar22[1] = fVar46;
              pfVar22 = pfVar22 + 2;
              fVar58 = fVar46;
            } while (pfVar22 < pfVar1 + uVar20);
          }
        }
        *(float *)(param_1 + 0x7c) = fVar61;
        fVar61 = *(float *)(param_1 + 0x88);
        fVar57 = *(float *)(param_1 + 0x8c);
        *(float *)(param_1 + 0x80) = fVar58;
        if (uVar20 != 0) {
          pfVar22 = local_c8[2] + uVar20;
          fVar45 = *(float *)(param_1 + 0x90);
          pfVar31 = pfVar22;
          if (pfVar22 <= local_c8[2] + 1) {
            pfVar31 = local_c8[2] + 1;
          }
          fVar46 = fVar57;
          pfVar33 = local_c8[2];
          if (((uint)(~(ulong)local_c8[2] + (long)pfVar31) >> 2 & 1) == 0) {
            fVar58 = *local_c8[2];
            fVar46 = (fVar58 * fVar63 - fVar61) + fVar57 * fVar45;
            *local_c8[2] = fVar46;
            fVar61 = fVar58 * fVar63;
            fVar58 = fVar46;
            pfVar33 = local_c8[2] + 1;
          }
          fVar57 = fVar58;
          if (3 < ~(ulong)local_c8[2] + (long)pfVar31) {
            do {
              fVar57 = *pfVar33;
              fVar58 = (fVar57 * fVar63 - fVar61) + fVar46 * fVar45;
              fVar61 = pfVar33[1] * fVar63;
              *pfVar33 = fVar58;
              fVar46 = (fVar61 - fVar57 * fVar63) + fVar58 * fVar45;
              pfVar33[1] = fVar46;
              pfVar33 = pfVar33 + 2;
              fVar57 = fVar46;
            } while (pfVar33 < pfVar22);
          }
        }
        *(float *)(param_1 + 0x88) = fVar61;
        fVar61 = *(float *)(param_1 + 0x94);
        fVar58 = *(float *)(param_1 + 0x98);
        *(float *)(param_1 + 0x8c) = fVar57;
        if (uVar20 != 0) {
          pfVar22 = local_c8[3] + uVar20;
          fVar45 = *(float *)(param_1 + 0x9c);
          pfVar31 = pfVar22;
          if (pfVar22 <= local_c8[3] + 1) {
            pfVar31 = local_c8[3] + 1;
          }
          fVar46 = fVar58;
          pfVar33 = local_c8[3];
          if (((uint)(~(ulong)local_c8[3] + (long)pfVar31) >> 2 & 1) == 0) {
            fVar57 = *local_c8[3];
            fVar46 = (fVar57 * fVar63 - fVar61) + fVar58 * fVar45;
            *local_c8[3] = fVar46;
            fVar61 = fVar57 * fVar63;
            fVar57 = fVar46;
            pfVar33 = local_c8[3] + 1;
          }
          fVar58 = fVar57;
          if (3 < ~(ulong)local_c8[3] + (long)pfVar31) {
            do {
              fVar57 = *pfVar33;
              fVar58 = (fVar57 * fVar63 - fVar61) + fVar46 * fVar45;
              fVar61 = pfVar33[1] * fVar63;
              *pfVar33 = fVar58;
              fVar46 = (fVar61 - fVar57 * fVar63) + fVar58 * fVar45;
              pfVar33[1] = fVar46;
              pfVar33 = pfVar33 + 2;
              fVar58 = fVar46;
            } while (pfVar33 < pfVar22);
          }
        }
        *(float *)(param_1 + 0x94) = fVar61;
        fVar61 = *(float *)(param_1 + 0xa0);
        fVar57 = *(float *)(param_1 + 0xa4);
        *(float *)(param_1 + 0x98) = fVar58;
        if (uVar20 != 0) {
          pfVar22 = local_a8 + uVar20;
          fVar45 = *(float *)(param_1 + 0xa8);
          pfVar31 = pfVar22;
          if (pfVar22 <= local_a8 + 1) {
            pfVar31 = local_a8 + 1;
          }
          fVar46 = fVar57;
          pfVar33 = local_a8;
          if (((uint)(~(ulong)local_a8 + (long)pfVar31) >> 2 & 1) == 0) {
            fVar58 = *local_a8;
            fVar46 = (fVar58 * fVar63 - fVar61) + fVar57 * fVar45;
            *local_a8 = fVar46;
            fVar61 = fVar58 * fVar63;
            fVar58 = fVar46;
            pfVar33 = local_a8 + 1;
          }
          fVar57 = fVar58;
          if (3 < ~(ulong)local_a8 + (long)pfVar31) {
            do {
              fVar57 = *pfVar33;
              fVar58 = (fVar57 * fVar63 - fVar61) + fVar46 * fVar45;
              fVar61 = pfVar33[1] * fVar63;
              *pfVar33 = fVar58;
              fVar46 = (fVar61 - fVar57 * fVar63) + fVar58 * fVar45;
              pfVar33[1] = fVar46;
              pfVar33 = pfVar33 + 2;
              fVar57 = fVar46;
            } while (pfVar33 < pfVar22);
          }
        }
        *(float *)(param_1 + 0xa0) = fVar61;
        fVar61 = *(float *)(param_1 + 0xac);
        fVar58 = *(float *)(param_1 + 0xb0);
        *(float *)(param_1 + 0xa4) = fVar57;
        if (uVar20 != 0) {
          pfVar22 = local_a0 + uVar20;
          fVar45 = *(float *)(param_1 + 0xb4);
          pfVar31 = pfVar22;
          if (pfVar22 <= local_a0 + 1) {
            pfVar31 = local_a0 + 1;
          }
          fVar46 = fVar58;
          pfVar33 = local_a0;
          if (((uint)(~(ulong)local_a0 + (long)pfVar31) >> 2 & 1) == 0) {
            fVar57 = *local_a0;
            fVar46 = (fVar57 * fVar63 - fVar61) + fVar58 * fVar45;
            *local_a0 = fVar46;
            fVar61 = fVar57 * fVar63;
            fVar57 = fVar46;
            pfVar33 = local_a0 + 1;
          }
          fVar58 = fVar57;
          if (3 < ~(ulong)local_a0 + (long)pfVar31) {
            do {
              fVar57 = *pfVar33;
              fVar58 = (fVar57 * fVar63 - fVar61) + fVar46 * fVar45;
              fVar61 = pfVar33[1] * fVar63;
              *pfVar33 = fVar58;
              fVar46 = (fVar61 - fVar57 * fVar63) + fVar58 * fVar45;
              pfVar33[1] = fVar46;
              pfVar33 = pfVar33 + 2;
              fVar58 = fVar46;
            } while (pfVar33 < pfVar22);
          }
        }
        lVar44 = *(long *)(param_1 + 0x158);
        *(float *)(param_1 + 0xac) = fVar61;
        *(float *)(param_1 + 0xb0) = fVar58;
        uVar32 = (ulong)uVar18;
        fVar61 = *(float *)(param_1 + 0x1b4) * *(float *)(param_1 + 0x19c);
        fVar46 = *(float *)(lVar44 + 0x54) * *(float *)(lVar44 + 0x3c);
        fVar58 = fVar61 * fVar54;
        fVar61 = fVar61 * fVar60;
        fVar45 = fVar46 * fVar79;
        fVar46 = fVar46 * fVar62;
        fVar57 = *(float *)(param_1 + 0x1ac);
        fVar63 = *(float *)(lVar44 + 0x4c);
        lVar44 = *param_2;
        pfVar22 = (float *)(lVar44 + (ulong)uVar18 * 4);
        bVar13 = false;
        if ((fVar46 == fVar61) && (bVar13 = false, !NAN(fVar63) && !NAN(fVar57))) {
          bVar13 = fVar63 == fVar57;
        }
        bVar12 = false;
        if ((bVar13) && (bVar12 = false, !NAN(fVar45) && !NAN(fVar58))) {
          bVar12 = fVar45 == fVar58;
        }
        if (bVar12) {
          if (uVar20 != 0) {
            uVar15 = lVar44 + uVar32 * 4;
            pfVar31 = (float *)(uVar15 + 0x10);
            pfVar33 = pfVar22 + uVar20;
            pfVar16 = pfVar33;
            if (pfVar33 <= pfVar31) {
              pfVar16 = pfVar31;
            }
            uVar15 = ~uVar15 + (long)pfVar16;
            pfVar16 = __s;
            pfVar31 = pfVar1;
            pfVar14 = pfVar22;
            if (((uint)uVar15 >> 4 & 1) == 0) {
              uVar55 = *(undefined8 *)__s;
              uVar56 = *(undefined8 *)pfVar1;
              *(ulong *)(pfVar22 + 2) =
                   CONCAT44((float)((ulong)*(undefined8 *)(pfVar22 + 2) >> 0x20) * fVar57 +
                            fVar58 * (float)((ulong)*(undefined8 *)(__src + 0x202) >> 0x20) +
                            fVar61 * (float)((ulong)*(undefined8 *)(__src + 0x302) >> 0x20),
                            (float)*(undefined8 *)(pfVar22 + 2) * fVar57 +
                            fVar58 * (float)*(undefined8 *)(__src + 0x202) +
                            fVar61 * (float)*(undefined8 *)(__src + 0x302));
              *(ulong *)pfVar22 =
                   CONCAT44((float)((ulong)*(undefined8 *)pfVar22 >> 0x20) * fVar57 +
                            fVar58 * (float)((ulong)uVar55 >> 0x20) +
                            fVar61 * (float)((ulong)uVar56 >> 0x20),
                            (float)*(undefined8 *)pfVar22 * fVar57 + fVar58 * (float)uVar55 +
                            fVar61 * (float)uVar56);
              pfVar16 = __src + 0x204;
              pfVar31 = __src + 0x304;
              pfVar14 = pfVar22 + 4;
            }
            if (0xf < uVar15) {
              do {
                uVar55 = *(undefined8 *)pfVar16;
                uVar56 = *(undefined8 *)pfVar31;
                *(ulong *)(pfVar14 + 2) =
                     CONCAT44((float)((ulong)*(undefined8 *)(pfVar14 + 2) >> 0x20) * fVar57 +
                              fVar58 * (float)((ulong)*(undefined8 *)(pfVar16 + 2) >> 0x20) +
                              fVar61 * (float)((ulong)*(undefined8 *)(pfVar31 + 2) >> 0x20),
                              (float)*(undefined8 *)(pfVar14 + 2) * fVar57 +
                              fVar58 * (float)*(undefined8 *)(pfVar16 + 2) +
                              fVar61 * (float)*(undefined8 *)(pfVar31 + 2));
                *(ulong *)pfVar14 =
                     CONCAT44((float)((ulong)*(undefined8 *)pfVar14 >> 0x20) * fVar57 +
                              fVar58 * (float)((ulong)uVar55 >> 0x20) +
                              fVar61 * (float)((ulong)uVar56 >> 0x20),
                              (float)*(undefined8 *)pfVar14 * fVar57 + fVar58 * (float)uVar55 +
                              fVar61 * (float)uVar56);
                pfVar38 = pfVar16 + 6;
                uVar55 = *(undefined8 *)(pfVar16 + 4);
                pfVar11 = pfVar31 + 6;
                uVar56 = *(undefined8 *)(pfVar31 + 4);
                pfVar31 = pfVar31 + 8;
                pfVar16 = pfVar16 + 8;
                *(ulong *)(pfVar14 + 6) =
                     CONCAT44((float)((ulong)*(undefined8 *)(pfVar14 + 6) >> 0x20) * fVar57 +
                              fVar58 * (float)((ulong)*(undefined8 *)pfVar38 >> 0x20) +
                              fVar61 * (float)((ulong)*(undefined8 *)pfVar11 >> 0x20),
                              (float)*(undefined8 *)(pfVar14 + 6) * fVar57 +
                              fVar58 * (float)*(undefined8 *)pfVar38 +
                              fVar61 * (float)*(undefined8 *)pfVar11);
                *(ulong *)(pfVar14 + 4) =
                     CONCAT44((float)((ulong)*(undefined8 *)(pfVar14 + 4) >> 0x20) * fVar57 +
                              fVar58 * (float)((ulong)uVar55 >> 0x20) +
                              fVar61 * (float)((ulong)uVar56 >> 0x20),
                              (float)*(undefined8 *)(pfVar14 + 4) * fVar57 + fVar58 * (float)uVar55
                              + fVar61 * (float)uVar56);
                pfVar14 = pfVar14 + 8;
              } while (pfVar14 < pfVar33);
            }
          }
        }
        else if (uVar20 != 0) {
          fVar47 = 1.0 / (float)uVar20;
          fVar63 = fVar63 - fVar57;
          fVar45 = fVar45 - fVar58;
          fVar46 = fVar46 - fVar61;
          pfVar33 = pfVar22;
          pfVar31 = __s;
          do {
            fVar50 = *pfVar33 * fVar57;
            fVar48 = fVar58 * *pfVar31;
            pfVar16 = pfVar31 + 0x100;
            pfVar31 = pfVar31 + 1;
            fVar49 = fVar61 * *pfVar16;
            fVar57 = fVar57 + fVar63 * fVar47;
            fVar58 = fVar58 + fVar45 * fVar47;
            fVar61 = fVar61 + fVar46 * fVar47;
            pfVar16 = pfVar33 + 1;
            *pfVar33 = fVar50 + fVar48 + fVar49;
            pfVar33 = pfVar16;
          } while (pfVar16 < pfVar22 + uVar20);
        }
        if (*(char *)(param_1 + 0x138) != '\0') {
          fVar58 = *(float *)(param_1 + 0x1b0) * *(float *)(param_1 + 0x19c);
          fVar63 = *(float *)(*(long *)(param_1 + 0x158) + 0x50) *
                   *(float *)(*(long *)(param_1 + 0x158) + 0x3c);
          fVar57 = fVar58 * fVar54;
          fVar58 = fVar58 * fVar60;
          fVar61 = fVar63 * fVar79;
          fVar63 = fVar63 * fVar62;
          bVar13 = false;
          if ((fVar61 == fVar57) && (bVar13 = false, !NAN(fVar63) && !NAN(fVar58))) {
            bVar13 = fVar63 == fVar58;
          }
          if (bVar13) {
            if (uVar20 != 0) {
              uVar15 = lVar44 + uVar32 * 4;
              pfVar31 = (float *)(uVar15 + 0x10);
              pfVar33 = pfVar22 + uVar20;
              pfVar16 = pfVar33;
              if (pfVar33 <= pfVar31) {
                pfVar16 = pfVar31;
              }
              uVar15 = ~uVar15 + (long)pfVar16;
              pfVar16 = pfVar7;
              pfVar31 = pfVar6;
              if (((uint)uVar15 >> 4 & 1) == 0) {
                uVar55 = *(undefined8 *)pfVar7;
                uVar56 = *(undefined8 *)pfVar6;
                *(ulong *)(pfVar22 + 2) =
                     CONCAT44((float)((ulong)*(undefined8 *)(pfVar22 + 2) >> 0x20) +
                              fVar57 * (float)((ulong)*(undefined8 *)(pfVar7 + 2) >> 0x20) +
                              fVar58 * (float)((ulong)*(undefined8 *)(pfVar6 + 2) >> 0x20),
                              (float)*(undefined8 *)(pfVar22 + 2) +
                              fVar57 * (float)*(undefined8 *)(pfVar7 + 2) +
                              fVar58 * (float)*(undefined8 *)(pfVar6 + 2));
                *(ulong *)pfVar22 =
                     CONCAT44((float)((ulong)*(undefined8 *)pfVar22 >> 0x20) +
                              fVar57 * (float)((ulong)uVar55 >> 0x20) +
                              fVar58 * (float)((ulong)uVar56 >> 0x20),
                              (float)*(undefined8 *)pfVar22 + fVar57 * (float)uVar55 +
                              fVar58 * (float)uVar56);
                pfVar22 = pfVar22 + 4;
                pfVar16 = pfVar7 + 4;
                pfVar31 = pfVar6 + 4;
              }
              if (0xf < uVar15) {
                do {
                  uVar55 = *(undefined8 *)pfVar16;
                  uVar56 = *(undefined8 *)pfVar31;
                  *(ulong *)(pfVar22 + 2) =
                       CONCAT44((float)((ulong)*(undefined8 *)(pfVar22 + 2) >> 0x20) +
                                fVar57 * (float)((ulong)*(undefined8 *)(pfVar16 + 2) >> 0x20) +
                                fVar58 * (float)((ulong)*(undefined8 *)(pfVar31 + 2) >> 0x20),
                                (float)*(undefined8 *)(pfVar22 + 2) +
                                fVar57 * (float)*(undefined8 *)(pfVar16 + 2) +
                                fVar58 * (float)*(undefined8 *)(pfVar31 + 2));
                  *(ulong *)pfVar22 =
                       CONCAT44((float)((ulong)*(undefined8 *)pfVar22 >> 0x20) +
                                fVar57 * (float)((ulong)uVar55 >> 0x20) +
                                fVar58 * (float)((ulong)uVar56 >> 0x20),
                                (float)*(undefined8 *)pfVar22 + fVar57 * (float)uVar55 +
                                fVar58 * (float)uVar56);
                  pfVar14 = pfVar16 + 6;
                  uVar55 = *(undefined8 *)(pfVar16 + 4);
                  pfVar38 = pfVar31 + 6;
                  uVar56 = *(undefined8 *)(pfVar31 + 4);
                  pfVar31 = pfVar31 + 8;
                  pfVar16 = pfVar16 + 8;
                  *(ulong *)(pfVar22 + 6) =
                       CONCAT44((float)((ulong)*(undefined8 *)(pfVar22 + 6) >> 0x20) +
                                fVar57 * (float)((ulong)*(undefined8 *)pfVar14 >> 0x20) +
                                fVar58 * (float)((ulong)*(undefined8 *)pfVar38 >> 0x20),
                                (float)*(undefined8 *)(pfVar22 + 6) +
                                fVar57 * (float)*(undefined8 *)pfVar14 +
                                fVar58 * (float)*(undefined8 *)pfVar38);
                  *(ulong *)(pfVar22 + 4) =
                       CONCAT44((float)((ulong)*(undefined8 *)(pfVar22 + 4) >> 0x20) +
                                fVar57 * (float)((ulong)uVar55 >> 0x20) +
                                fVar58 * (float)((ulong)uVar56 >> 0x20),
                                (float)*(undefined8 *)(pfVar22 + 4) + fVar57 * (float)uVar55 +
                                fVar58 * (float)uVar56);
                  pfVar22 = pfVar22 + 8;
                } while (pfVar22 < pfVar33);
              }
            }
          }
          else if (uVar20 != 0) {
            fVar61 = fVar61 - fVar57;
            fVar63 = fVar63 - fVar58;
            pfVar31 = pfVar22;
            pfVar33 = pfVar7;
            pfVar16 = pfVar6;
            do {
              fVar45 = fVar57 * *pfVar33;
              fVar46 = fVar58 * *pfVar16;
              fVar57 = fVar57 + fVar61 / (float)uVar20;
              fVar58 = fVar58 + fVar63 / (float)uVar20;
              pfVar14 = pfVar31 + 1;
              *pfVar31 = *pfVar31 + fVar45 + fVar46;
              pfVar31 = pfVar14;
              pfVar33 = pfVar33 + 1;
              pfVar16 = pfVar16 + 1;
            } while (pfVar14 < pfVar22 + uVar20);
          }
        }
        lVar36 = (ulong)*(ushort *)(param_2 + 2) * 4;
        lVar24 = *param_2;
        pfVar22 = (float *)(lVar24 + lVar36 + uVar32 * 4);
        lVar44 = *(long *)(param_1 + 0x158);
        fVar61 = *(float *)(param_1 + 0x1b4) * *(float *)(param_1 + 0x19c);
        fVar46 = *(float *)(lVar44 + 0x54) * *(float *)(lVar44 + 0x3c);
        fVar58 = fVar61 * fVar60;
        fVar61 = fVar61 * fVar54;
        fVar57 = *(float *)(param_1 + 0x1ac);
        fVar45 = fVar46 * fVar62;
        fVar46 = fVar46 * fVar79;
        fVar63 = *(float *)(lVar44 + 0x4c);
        lVar44 = uVar32 * 4;
        bVar13 = false;
        if ((fVar46 == fVar61) && (bVar13 = false, !NAN(fVar63) && !NAN(fVar57))) {
          bVar13 = fVar63 == fVar57;
        }
        bVar12 = false;
        if ((bVar13) && (bVar12 = false, !NAN(fVar45) && !NAN(fVar58))) {
          bVar12 = fVar45 == fVar58;
        }
        if (bVar12) {
          if (uVar20 != 0) {
            uVar41 = lVar24 + lVar44 + lVar36 + uVar17;
            uVar15 = lVar24 + lVar44 + lVar36 + 0x10;
            if (uVar41 <= uVar15) {
              uVar41 = uVar15;
            }
            uVar41 = ~(lVar24 + lVar44 + lVar36) + uVar41;
            pfVar33 = __s;
            pfVar31 = pfVar1;
            pfVar16 = pfVar22;
            if (((uint)uVar41 >> 4 & 1) == 0) {
              uVar55 = *(undefined8 *)__s;
              uVar56 = *(undefined8 *)pfVar1;
              *(ulong *)(pfVar22 + 2) =
                   CONCAT44((float)((ulong)*(undefined8 *)(pfVar22 + 2) >> 0x20) * fVar57 +
                            fVar58 * (float)((ulong)*(undefined8 *)(__src + 0x202) >> 0x20) +
                            fVar61 * (float)((ulong)*(undefined8 *)(__src + 0x302) >> 0x20),
                            (float)*(undefined8 *)(pfVar22 + 2) * fVar57 +
                            fVar58 * (float)*(undefined8 *)(__src + 0x202) +
                            fVar61 * (float)*(undefined8 *)(__src + 0x302));
              *(ulong *)pfVar22 =
                   CONCAT44((float)((ulong)*(undefined8 *)pfVar22 >> 0x20) * fVar57 +
                            fVar58 * (float)((ulong)uVar55 >> 0x20) +
                            fVar61 * (float)((ulong)uVar56 >> 0x20),
                            (float)*(undefined8 *)pfVar22 * fVar57 + fVar58 * (float)uVar55 +
                            fVar61 * (float)uVar56);
              pfVar33 = __src + 0x204;
              pfVar31 = __src + 0x304;
              pfVar16 = pfVar22 + 4;
            }
            if (0xf < uVar41) {
              do {
                uVar55 = *(undefined8 *)pfVar33;
                uVar56 = *(undefined8 *)pfVar31;
                *(ulong *)(pfVar16 + 2) =
                     CONCAT44((float)((ulong)*(undefined8 *)(pfVar16 + 2) >> 0x20) * fVar57 +
                              fVar58 * (float)((ulong)*(undefined8 *)(pfVar33 + 2) >> 0x20) +
                              fVar61 * (float)((ulong)*(undefined8 *)(pfVar31 + 2) >> 0x20),
                              (float)*(undefined8 *)(pfVar16 + 2) * fVar57 +
                              fVar58 * (float)*(undefined8 *)(pfVar33 + 2) +
                              fVar61 * (float)*(undefined8 *)(pfVar31 + 2));
                *(ulong *)pfVar16 =
                     CONCAT44((float)((ulong)*(undefined8 *)pfVar16 >> 0x20) * fVar57 +
                              fVar58 * (float)((ulong)uVar55 >> 0x20) +
                              fVar61 * (float)((ulong)uVar56 >> 0x20),
                              (float)*(undefined8 *)pfVar16 * fVar57 + fVar58 * (float)uVar55 +
                              fVar61 * (float)uVar56);
                pfVar14 = pfVar33 + 6;
                uVar55 = *(undefined8 *)(pfVar33 + 4);
                pfVar38 = pfVar31 + 6;
                uVar56 = *(undefined8 *)(pfVar31 + 4);
                pfVar31 = pfVar31 + 8;
                pfVar33 = pfVar33 + 8;
                *(ulong *)(pfVar16 + 6) =
                     CONCAT44((float)((ulong)*(undefined8 *)(pfVar16 + 6) >> 0x20) * fVar57 +
                              fVar58 * (float)((ulong)*(undefined8 *)pfVar14 >> 0x20) +
                              fVar61 * (float)((ulong)*(undefined8 *)pfVar38 >> 0x20),
                              (float)*(undefined8 *)(pfVar16 + 6) * fVar57 +
                              fVar58 * (float)*(undefined8 *)pfVar14 +
                              fVar61 * (float)*(undefined8 *)pfVar38);
                *(ulong *)(pfVar16 + 4) =
                     CONCAT44((float)((ulong)*(undefined8 *)(pfVar16 + 4) >> 0x20) * fVar57 +
                              fVar58 * (float)((ulong)uVar55 >> 0x20) +
                              fVar61 * (float)((ulong)uVar56 >> 0x20),
                              (float)*(undefined8 *)(pfVar16 + 4) * fVar57 + fVar58 * (float)uVar55
                              + fVar61 * (float)uVar56);
                pfVar16 = pfVar16 + 8;
              } while (pfVar16 < pfVar22 + uVar20);
            }
          }
        }
        else if (uVar20 != 0) {
          fVar47 = 1.0 / (float)uVar20;
          fVar63 = fVar63 - fVar57;
          fVar45 = fVar45 - fVar58;
          fVar46 = fVar46 - fVar61;
          pfVar33 = pfVar22;
          pfVar31 = __s;
          do {
            fVar50 = *pfVar33 * fVar57;
            fVar48 = fVar58 * *pfVar31;
            pfVar16 = pfVar31 + 0x100;
            pfVar31 = pfVar31 + 1;
            fVar49 = fVar61 * *pfVar16;
            fVar57 = fVar57 + fVar63 * fVar47;
            fVar58 = fVar58 + fVar45 * fVar47;
            fVar61 = fVar61 + fVar46 * fVar47;
            pfVar16 = pfVar33 + 1;
            *pfVar33 = fVar50 + fVar48 + fVar49;
            pfVar33 = pfVar16;
          } while (pfVar16 < pfVar22 + uVar20);
        }
        if (*(char *)(param_1 + 0x138) != '\0') {
          fVar58 = *(float *)(param_1 + 0x1b0) * *(float *)(param_1 + 0x19c);
          fVar63 = *(float *)(*(long *)(param_1 + 0x158) + 0x50) *
                   *(float *)(*(long *)(param_1 + 0x158) + 0x3c);
          fVar57 = fVar58 * fVar60;
          fVar58 = fVar58 * fVar54;
          fVar61 = fVar63 * fVar62;
          fVar63 = fVar63 * fVar79;
          bVar13 = false;
          if ((fVar61 == fVar57) && (bVar13 = false, !NAN(fVar63) && !NAN(fVar58))) {
            bVar13 = fVar63 == fVar58;
          }
          if (bVar13) {
            if (uVar20 != 0) {
              uVar41 = lVar24 + lVar44 + lVar36 + uVar17;
              uVar15 = lVar24 + lVar44 + lVar36 + 0x10;
              if (uVar41 <= uVar15) {
                uVar41 = uVar15;
              }
              uVar41 = ~(lVar24 + lVar44 + lVar36) + uVar41;
              pfVar16 = pfVar22;
              pfVar33 = pfVar7;
              pfVar31 = pfVar6;
              if (((uint)uVar41 >> 4 & 1) == 0) {
                uVar55 = *(undefined8 *)pfVar7;
                uVar56 = *(undefined8 *)pfVar6;
                *(ulong *)(pfVar22 + 2) =
                     CONCAT44((float)((ulong)*(undefined8 *)(pfVar22 + 2) >> 0x20) +
                              fVar57 * (float)((ulong)*(undefined8 *)(pfVar7 + 2) >> 0x20) +
                              fVar58 * (float)((ulong)*(undefined8 *)(pfVar6 + 2) >> 0x20),
                              (float)*(undefined8 *)(pfVar22 + 2) +
                              fVar57 * (float)*(undefined8 *)(pfVar7 + 2) +
                              fVar58 * (float)*(undefined8 *)(pfVar6 + 2));
                *(ulong *)pfVar22 =
                     CONCAT44((float)((ulong)*(undefined8 *)pfVar22 >> 0x20) +
                              fVar57 * (float)((ulong)uVar55 >> 0x20) +
                              fVar58 * (float)((ulong)uVar56 >> 0x20),
                              (float)*(undefined8 *)pfVar22 + fVar57 * (float)uVar55 +
                              fVar58 * (float)uVar56);
                pfVar16 = pfVar22 + 4;
                pfVar33 = pfVar7 + 4;
                pfVar31 = pfVar6 + 4;
              }
              if (0xf < uVar41) {
                do {
                  uVar55 = *(undefined8 *)pfVar33;
                  uVar56 = *(undefined8 *)pfVar31;
                  *(ulong *)(pfVar16 + 2) =
                       CONCAT44((float)((ulong)*(undefined8 *)(pfVar16 + 2) >> 0x20) +
                                fVar57 * (float)((ulong)*(undefined8 *)(pfVar33 + 2) >> 0x20) +
                                fVar58 * (float)((ulong)*(undefined8 *)(pfVar31 + 2) >> 0x20),
                                (float)*(undefined8 *)(pfVar16 + 2) +
                                fVar57 * (float)*(undefined8 *)(pfVar33 + 2) +
                                fVar58 * (float)*(undefined8 *)(pfVar31 + 2));
                  *(ulong *)pfVar16 =
                       CONCAT44((float)((ulong)*(undefined8 *)pfVar16 >> 0x20) +
                                fVar57 * (float)((ulong)uVar55 >> 0x20) +
                                fVar58 * (float)((ulong)uVar56 >> 0x20),
                                (float)*(undefined8 *)pfVar16 + fVar57 * (float)uVar55 +
                                fVar58 * (float)uVar56);
                  pfVar14 = pfVar33 + 6;
                  uVar55 = *(undefined8 *)(pfVar33 + 4);
                  pfVar38 = pfVar31 + 6;
                  uVar56 = *(undefined8 *)(pfVar31 + 4);
                  pfVar31 = pfVar31 + 8;
                  pfVar33 = pfVar33 + 8;
                  *(ulong *)(pfVar16 + 6) =
                       CONCAT44((float)((ulong)*(undefined8 *)(pfVar16 + 6) >> 0x20) +
                                fVar57 * (float)((ulong)*(undefined8 *)pfVar14 >> 0x20) +
                                fVar58 * (float)((ulong)*(undefined8 *)pfVar38 >> 0x20),
                                (float)*(undefined8 *)(pfVar16 + 6) +
                                fVar57 * (float)*(undefined8 *)pfVar14 +
                                fVar58 * (float)*(undefined8 *)pfVar38);
                  *(ulong *)(pfVar16 + 4) =
                       CONCAT44((float)((ulong)*(undefined8 *)(pfVar16 + 4) >> 0x20) +
                                fVar57 * (float)((ulong)uVar55 >> 0x20) +
                                fVar58 * (float)((ulong)uVar56 >> 0x20),
                                (float)*(undefined8 *)(pfVar16 + 4) + fVar57 * (float)uVar55 +
                                fVar58 * (float)uVar56);
                  pfVar16 = pfVar16 + 8;
                } while (pfVar16 < pfVar22 + uVar20);
              }
            }
          }
          else if (uVar20 != 0) {
            fVar61 = fVar61 - fVar57;
            fVar63 = fVar63 - fVar58;
            pfVar31 = pfVar22;
            pfVar33 = pfVar7;
            pfVar16 = pfVar6;
            do {
              fVar45 = fVar57 * *pfVar33;
              fVar46 = fVar58 * *pfVar16;
              fVar57 = fVar57 + fVar61 / (float)uVar20;
              fVar58 = fVar58 + fVar63 / (float)uVar20;
              pfVar14 = pfVar31 + 1;
              *pfVar31 = *pfVar31 + fVar45 + fVar46;
              pfVar31 = pfVar14;
              pfVar33 = pfVar33 + 1;
              pfVar16 = pfVar16 + 1;
            } while (pfVar14 < pfVar22 + uVar20);
          }
        }
        lVar37 = (ulong)*(ushort *)(param_2 + 2) * 8;
        lVar36 = *param_2;
        lVar24 = lVar36 + lVar37;
        if ((uVar8 >> 0xe & 1) == 0) {
          lVar36 = 0xc;
        }
        else {
          pfVar22 = (float *)(lVar24 + uVar32 * 4);
          lVar24 = *(long *)(param_1 + 0x158);
          fVar57 = *(float *)(param_1 + 0x1ac);
          fVar58 = *(float *)(param_1 + 0x1a4) * 0.707106 * *(float *)(param_1 + 0x1b4);
          fVar61 = *(float *)(lVar24 + 0x44) * 0.707106 * *(float *)(lVar24 + 0x54);
          bVar13 = false;
          if ((*(float *)(lVar24 + 0x4c) == fVar57) &&
             (bVar13 = false, !NAN(fVar61) && !NAN(fVar58))) {
            bVar13 = fVar61 == fVar58;
          }
          if (bVar13) {
            if (uVar20 != 0) {
              uVar41 = lVar36 + lVar37 + lVar44 + uVar17;
              uVar15 = lVar36 + lVar37 + lVar44 + 0x10;
              if (uVar41 <= uVar15) {
                uVar41 = uVar15;
              }
              uVar41 = ~(lVar36 + lVar44 + lVar37) + uVar41;
              pfVar33 = pfVar22;
              pfVar31 = local_c8[2];
              pfVar16 = local_c8[3];
              if (((uint)uVar41 >> 4 & 1) == 0) {
                uVar55 = *(undefined8 *)local_c8[2];
                uVar56 = *(undefined8 *)local_c8[3];
                *(ulong *)(pfVar22 + 2) =
                     CONCAT44((float)((ulong)*(undefined8 *)(pfVar22 + 2) >> 0x20) * fVar57 +
                              fVar58 * ((float)((ulong)*(undefined8 *)(local_c8[3] + 2) >> 0x20) +
                                       (float)((ulong)*(undefined8 *)(local_c8[2] + 2) >> 0x20)),
                              (float)*(undefined8 *)(pfVar22 + 2) * fVar57 +
                              fVar58 * ((float)*(undefined8 *)(local_c8[3] + 2) +
                                       (float)*(undefined8 *)(local_c8[2] + 2)));
                *(ulong *)pfVar22 =
                     CONCAT44((float)((ulong)*(undefined8 *)pfVar22 >> 0x20) * fVar57 +
                              fVar58 * ((float)((ulong)uVar56 >> 0x20) +
                                       (float)((ulong)uVar55 >> 0x20)),
                              (float)*(undefined8 *)pfVar22 * fVar57 +
                              fVar58 * ((float)uVar56 + (float)uVar55));
                pfVar33 = pfVar22 + 4;
                pfVar31 = local_c8[2] + 4;
                pfVar16 = local_c8[3] + 4;
              }
              if (0xf < uVar41) {
                do {
                  uVar55 = *(undefined8 *)pfVar31;
                  uVar56 = *(undefined8 *)pfVar16;
                  *(ulong *)(pfVar33 + 2) =
                       CONCAT44((float)((ulong)*(undefined8 *)(pfVar33 + 2) >> 0x20) * fVar57 +
                                fVar58 * ((float)((ulong)*(undefined8 *)(pfVar16 + 2) >> 0x20) +
                                         (float)((ulong)*(undefined8 *)(pfVar31 + 2) >> 0x20)),
                                (float)*(undefined8 *)(pfVar33 + 2) * fVar57 +
                                fVar58 * ((float)*(undefined8 *)(pfVar16 + 2) +
                                         (float)*(undefined8 *)(pfVar31 + 2)));
                  *(ulong *)pfVar33 =
                       CONCAT44((float)((ulong)*(undefined8 *)pfVar33 >> 0x20) * fVar57 +
                                fVar58 * ((float)((ulong)uVar56 >> 0x20) +
                                         (float)((ulong)uVar55 >> 0x20)),
                                (float)*(undefined8 *)pfVar33 * fVar57 +
                                fVar58 * ((float)uVar56 + (float)uVar55));
                  pfVar14 = pfVar31 + 6;
                  uVar55 = *(undefined8 *)(pfVar31 + 4);
                  uVar56 = *(undefined8 *)(pfVar16 + 4);
                  pfVar31 = pfVar31 + 8;
                  *(ulong *)(pfVar33 + 6) =
                       CONCAT44((float)((ulong)*(undefined8 *)(pfVar33 + 6) >> 0x20) * fVar57 +
                                fVar58 * ((float)((ulong)*(undefined8 *)(pfVar16 + 6) >> 0x20) +
                                         (float)((ulong)*(undefined8 *)pfVar14 >> 0x20)),
                                (float)*(undefined8 *)(pfVar33 + 6) * fVar57 +
                                fVar58 * ((float)*(undefined8 *)(pfVar16 + 6) +
                                         (float)*(undefined8 *)pfVar14));
                  *(ulong *)(pfVar33 + 4) =
                       CONCAT44((float)((ulong)*(undefined8 *)(pfVar33 + 4) >> 0x20) * fVar57 +
                                fVar58 * ((float)((ulong)uVar56 >> 0x20) +
                                         (float)((ulong)uVar55 >> 0x20)),
                                (float)*(undefined8 *)(pfVar33 + 4) * fVar57 +
                                fVar58 * ((float)uVar56 + (float)uVar55));
                  pfVar33 = pfVar33 + 8;
                  pfVar16 = pfVar16 + 8;
                } while (pfVar33 < pfVar22 + uVar20);
              }
            }
          }
          else if (uVar20 != 0) {
            fVar63 = *(float *)(lVar24 + 0x4c) - fVar57;
            fVar45 = (fVar61 - fVar58) / (float)uVar20;
            pfVar31 = pfVar22;
            pfVar33 = local_c8[2];
            pfVar16 = local_c8[3];
            fVar61 = fVar58;
            do {
              fVar48 = *pfVar31 * fVar57;
              fVar57 = fVar57 + fVar63 / (float)uVar20;
              fVar46 = fVar58 * *pfVar33;
              fVar47 = fVar61 * *pfVar16;
              fVar58 = fVar58 + fVar45;
              fVar61 = fVar61 + fVar45;
              pfVar14 = pfVar31 + 1;
              *pfVar31 = fVar48 + fVar46 + fVar47;
              pfVar31 = pfVar14;
              pfVar33 = pfVar33 + 1;
              pfVar16 = pfVar16 + 1;
            } while (pfVar14 < pfVar22 + uVar20);
          }
          lVar24 = *param_2 + (ulong)*(ushort *)(param_2 + 2) * 0xc;
          lVar36 = 0x10;
        }
        lVar37 = *(long *)(param_1 + 0x158);
        pfVar22 = (float *)(lVar24 + uVar32 * 4);
        fVar61 = *(float *)(param_1 + 0x1b4) * *(float *)(param_1 + 0x1a0);
        fVar46 = *(float *)(lVar37 + 0x54) * *(float *)(lVar37 + 0x40);
        fVar58 = fVar61 * fVar54;
        fVar61 = fVar61 * fVar60;
        fVar45 = fVar46 * fVar79;
        fVar46 = fVar46 * fVar62;
        fVar57 = *(float *)(param_1 + 0x1ac);
        fVar63 = *(float *)(lVar37 + 0x4c);
        bVar13 = false;
        if ((fVar46 == fVar61) && (bVar13 = false, !NAN(fVar63) && !NAN(fVar57))) {
          bVar13 = fVar63 == fVar57;
        }
        bVar12 = false;
        if ((bVar13) && (bVar12 = false, !NAN(fVar45) && !NAN(fVar58))) {
          bVar12 = fVar45 == fVar58;
        }
        if (bVar12) {
          if (uVar20 != 0) {
            pfVar31 = pfVar22 + uVar20;
            pfVar33 = pfVar31;
            if (pfVar31 <= pfVar22 + 4) {
              pfVar33 = pfVar22 + 4;
            }
            pfVar14 = local_a8;
            pfVar16 = local_a0;
            pfVar38 = pfVar22;
            if (((uint)(~(ulong)pfVar22 + (long)pfVar33) >> 4 & 1) == 0) {
              pfVar38 = pfVar22 + 4;
              pfVar14 = local_a8 + 4;
              uVar55 = *(undefined8 *)local_a8;
              pfVar16 = local_a0 + 4;
              uVar56 = *(undefined8 *)local_a0;
              *(ulong *)(pfVar22 + 2) =
                   CONCAT44((float)((ulong)*(undefined8 *)(pfVar22 + 2) >> 0x20) * fVar57 +
                            fVar58 * (float)((ulong)*(undefined8 *)(local_a8 + 2) >> 0x20) +
                            fVar61 * (float)((ulong)*(undefined8 *)(local_a0 + 2) >> 0x20),
                            (float)*(undefined8 *)(pfVar22 + 2) * fVar57 +
                            fVar58 * (float)*(undefined8 *)(local_a8 + 2) +
                            fVar61 * (float)*(undefined8 *)(local_a0 + 2));
              *(ulong *)pfVar22 =
                   CONCAT44((float)((ulong)*(undefined8 *)pfVar22 >> 0x20) * fVar57 +
                            fVar58 * (float)((ulong)uVar55 >> 0x20) +
                            fVar61 * (float)((ulong)uVar56 >> 0x20),
                            (float)*(undefined8 *)pfVar22 * fVar57 + fVar58 * (float)uVar55 +
                            fVar61 * (float)uVar56);
            }
            if (0xf < ~(ulong)pfVar22 + (long)pfVar33) {
              do {
                uVar55 = *(undefined8 *)pfVar14;
                uVar56 = *(undefined8 *)pfVar16;
                *(ulong *)(pfVar38 + 2) =
                     CONCAT44((float)((ulong)*(undefined8 *)(pfVar38 + 2) >> 0x20) * fVar57 +
                              fVar58 * (float)((ulong)*(undefined8 *)(pfVar14 + 2) >> 0x20) +
                              fVar61 * (float)((ulong)*(undefined8 *)(pfVar16 + 2) >> 0x20),
                              (float)*(undefined8 *)(pfVar38 + 2) * fVar57 +
                              fVar58 * (float)*(undefined8 *)(pfVar14 + 2) +
                              fVar61 * (float)*(undefined8 *)(pfVar16 + 2));
                *(ulong *)pfVar38 =
                     CONCAT44((float)((ulong)*(undefined8 *)pfVar38 >> 0x20) * fVar57 +
                              fVar58 * (float)((ulong)uVar55 >> 0x20) +
                              fVar61 * (float)((ulong)uVar56 >> 0x20),
                              (float)*(undefined8 *)pfVar38 * fVar57 + fVar58 * (float)uVar55 +
                              fVar61 * (float)uVar56);
                pfVar33 = pfVar14 + 6;
                uVar55 = *(undefined8 *)(pfVar14 + 4);
                pfVar11 = pfVar16 + 6;
                uVar56 = *(undefined8 *)(pfVar16 + 4);
                pfVar16 = pfVar16 + 8;
                pfVar14 = pfVar14 + 8;
                *(ulong *)(pfVar38 + 6) =
                     CONCAT44((float)((ulong)*(undefined8 *)(pfVar38 + 6) >> 0x20) * fVar57 +
                              fVar58 * (float)((ulong)*(undefined8 *)pfVar33 >> 0x20) +
                              fVar61 * (float)((ulong)*(undefined8 *)pfVar11 >> 0x20),
                              (float)*(undefined8 *)(pfVar38 + 6) * fVar57 +
                              fVar58 * (float)*(undefined8 *)pfVar33 +
                              fVar61 * (float)*(undefined8 *)pfVar11);
                *(ulong *)(pfVar38 + 4) =
                     CONCAT44((float)((ulong)*(undefined8 *)(pfVar38 + 4) >> 0x20) * fVar57 +
                              fVar58 * (float)((ulong)uVar55 >> 0x20) +
                              fVar61 * (float)((ulong)uVar56 >> 0x20),
                              (float)*(undefined8 *)(pfVar38 + 4) * fVar57 + fVar58 * (float)uVar55
                              + fVar61 * (float)uVar56);
                pfVar38 = pfVar38 + 8;
              } while (pfVar38 < pfVar31);
            }
          }
        }
        else if (uVar20 != 0) {
          fVar47 = 1.0 / (float)uVar20;
          fVar63 = fVar63 - fVar57;
          fVar45 = fVar45 - fVar58;
          fVar46 = fVar46 - fVar61;
          pfVar31 = local_a8;
          pfVar33 = local_a0;
          pfVar16 = pfVar22;
          do {
            fVar50 = *pfVar16 * fVar57;
            fVar57 = fVar57 + fVar63 * fVar47;
            fVar48 = fVar58 * *pfVar31;
            fVar49 = fVar61 * *pfVar33;
            fVar58 = fVar58 + fVar45 * fVar47;
            fVar61 = fVar61 + fVar46 * fVar47;
            pfVar14 = pfVar16 + 1;
            *pfVar16 = fVar50 + fVar48 + fVar49;
            pfVar31 = pfVar31 + 1;
            pfVar33 = pfVar33 + 1;
            pfVar16 = pfVar14;
          } while (pfVar14 < pfVar22 + uVar20);
        }
        if (*(char *)(param_1 + 0x138) != '\0') {
          fVar58 = *(float *)(param_1 + 0x1b0) * *(float *)(param_1 + 0x1a0);
          fVar63 = *(float *)(*(long *)(param_1 + 0x158) + 0x50) *
                   *(float *)(*(long *)(param_1 + 0x158) + 0x40);
          fVar57 = fVar58 * fVar54;
          fVar58 = fVar58 * fVar60;
          fVar61 = fVar63 * fVar79;
          fVar63 = fVar63 * fVar62;
          bVar13 = false;
          if ((fVar61 == fVar57) && (bVar13 = false, !NAN(fVar63) && !NAN(fVar58))) {
            bVar13 = fVar63 == fVar58;
          }
          if (bVar13) {
            if (uVar20 != 0) {
              pfVar31 = pfVar22 + uVar20;
              pfVar33 = pfVar31;
              if (pfVar31 <= pfVar22 + 4) {
                pfVar33 = pfVar22 + 4;
              }
              uVar15 = ~(ulong)pfVar22;
              pfVar16 = pfVar42;
              pfVar14 = pfVar43;
              if (((uint)(uVar15 + (long)pfVar33) >> 4 & 1) == 0) {
                uVar55 = *(undefined8 *)pfVar43;
                uVar56 = *(undefined8 *)pfVar42;
                *(ulong *)(pfVar22 + 2) =
                     CONCAT44((float)((ulong)*(undefined8 *)(pfVar22 + 2) >> 0x20) +
                              fVar57 * (float)((ulong)*(undefined8 *)(pfVar43 + 2) >> 0x20) +
                              fVar58 * (float)((ulong)*(undefined8 *)(pfVar42 + 2) >> 0x20),
                              (float)*(undefined8 *)(pfVar22 + 2) +
                              fVar57 * (float)*(undefined8 *)(pfVar43 + 2) +
                              fVar58 * (float)*(undefined8 *)(pfVar42 + 2));
                *(ulong *)pfVar22 =
                     CONCAT44((float)((ulong)*(undefined8 *)pfVar22 >> 0x20) +
                              fVar57 * (float)((ulong)uVar55 >> 0x20) +
                              fVar58 * (float)((ulong)uVar56 >> 0x20),
                              (float)*(undefined8 *)pfVar22 + fVar57 * (float)uVar55 +
                              fVar58 * (float)uVar56);
                pfVar22 = pfVar22 + 4;
                pfVar16 = pfVar42 + 4;
                pfVar14 = pfVar43 + 4;
              }
              if (0xf < uVar15 + (long)pfVar33) {
                do {
                  uVar55 = *(undefined8 *)pfVar14;
                  uVar56 = *(undefined8 *)pfVar16;
                  *(ulong *)(pfVar22 + 2) =
                       CONCAT44((float)((ulong)*(undefined8 *)(pfVar22 + 2) >> 0x20) +
                                fVar57 * (float)((ulong)*(undefined8 *)(pfVar14 + 2) >> 0x20) +
                                fVar58 * (float)((ulong)*(undefined8 *)(pfVar16 + 2) >> 0x20),
                                (float)*(undefined8 *)(pfVar22 + 2) +
                                fVar57 * (float)*(undefined8 *)(pfVar14 + 2) +
                                fVar58 * (float)*(undefined8 *)(pfVar16 + 2));
                  *(ulong *)pfVar22 =
                       CONCAT44((float)((ulong)*(undefined8 *)pfVar22 >> 0x20) +
                                fVar57 * (float)((ulong)uVar55 >> 0x20) +
                                fVar58 * (float)((ulong)uVar56 >> 0x20),
                                (float)*(undefined8 *)pfVar22 + fVar57 * (float)uVar55 +
                                fVar58 * (float)uVar56);
                  pfVar33 = pfVar14 + 6;
                  uVar55 = *(undefined8 *)(pfVar14 + 4);
                  pfVar38 = pfVar16 + 6;
                  uVar56 = *(undefined8 *)(pfVar16 + 4);
                  pfVar16 = pfVar16 + 8;
                  pfVar14 = pfVar14 + 8;
                  *(ulong *)(pfVar22 + 6) =
                       CONCAT44((float)((ulong)*(undefined8 *)(pfVar22 + 6) >> 0x20) +
                                fVar57 * (float)((ulong)*(undefined8 *)pfVar33 >> 0x20) +
                                fVar58 * (float)((ulong)*(undefined8 *)pfVar38 >> 0x20),
                                (float)*(undefined8 *)(pfVar22 + 6) +
                                fVar57 * (float)*(undefined8 *)pfVar33 +
                                fVar58 * (float)*(undefined8 *)pfVar38);
                  *(ulong *)(pfVar22 + 4) =
                       CONCAT44((float)((ulong)*(undefined8 *)(pfVar22 + 4) >> 0x20) +
                                fVar57 * (float)((ulong)uVar55 >> 0x20) +
                                fVar58 * (float)((ulong)uVar56 >> 0x20),
                                (float)*(undefined8 *)(pfVar22 + 4) + fVar57 * (float)uVar55 +
                                fVar58 * (float)uVar56);
                  pfVar22 = pfVar22 + 8;
                } while (pfVar22 < pfVar31);
              }
            }
          }
          else if (uVar20 != 0) {
            fVar61 = fVar61 - fVar57;
            fVar63 = fVar63 - fVar58;
            pfVar31 = pfVar42;
            pfVar33 = pfVar22;
            pfVar16 = pfVar43;
            do {
              fVar45 = fVar57 * *pfVar16;
              fVar46 = fVar58 * *pfVar31;
              fVar57 = fVar57 + fVar61 / (float)uVar20;
              fVar58 = fVar58 + fVar63 / (float)uVar20;
              pfVar14 = pfVar33 + 1;
              *pfVar33 = *pfVar33 + fVar45 + fVar46;
              pfVar31 = pfVar31 + 1;
              pfVar33 = pfVar14;
              pfVar16 = pfVar16 + 1;
            } while (pfVar14 < pfVar22 + uVar20);
          }
        }
        lVar24 = *(long *)(param_1 + 0x158);
        fVar61 = *(float *)(param_1 + 0x1b4) * *(float *)(param_1 + 0x1a0);
        fVar46 = *(float *)(lVar24 + 0x54) * *(float *)(lVar24 + 0x40);
        fVar45 = fVar46 * fVar62;
        fVar58 = fVar61 * fVar60;
        fVar61 = fVar61 * fVar54;
        fVar46 = fVar46 * fVar79;
        lVar37 = *param_2;
        uVar41 = (ulong)*(ushort *)(param_2 + 2);
        fVar57 = *(float *)(param_1 + 0x1ac);
        fVar63 = *(float *)(lVar24 + 0x4c);
        uVar15 = (ulong)(uint)fVar63;
        pfVar22 = (float *)(lVar37 + uVar41 * lVar36 + uVar32 * 4);
        bVar13 = false;
        if ((fVar46 == fVar61) && (bVar13 = false, !NAN(fVar63) && !NAN(fVar57))) {
          bVar13 = fVar63 == fVar57;
        }
        bVar12 = false;
        if ((bVar13) && (bVar12 = false, !NAN(fVar45) && !NAN(fVar58))) {
          bVar12 = fVar45 == fVar58;
        }
        if (bVar12) {
          if (uVar20 != 0) {
            lVar24 = lVar36 * uVar41 + lVar44;
            uVar64 = lVar37 + lVar24 + uVar17;
            uVar27 = lVar37 + lVar24 + 0x10;
            if (uVar64 <= uVar27) {
              uVar64 = uVar27;
            }
            uVar64 = ~(lVar36 * uVar41 + lVar37 + lVar44) + uVar64;
            pfVar16 = pfVar22;
            pfVar33 = local_a8;
            pfVar31 = local_a0;
            if (((uint)uVar64 >> 4 & 1) == 0) {
              uVar15 = CONCAT44((float)(*(ulong *)pfVar22 >> 0x20) * fVar57 +
                                fVar58 * (float)((ulong)*(undefined8 *)local_a8 >> 0x20) +
                                fVar61 * (float)((ulong)*(undefined8 *)local_a0 >> 0x20),
                                (float)*(ulong *)pfVar22 * fVar57 +
                                fVar58 * (float)*(undefined8 *)local_a8 +
                                fVar61 * (float)*(undefined8 *)local_a0);
              *(ulong *)(pfVar22 + 2) =
                   CONCAT44((float)(*(ulong *)(pfVar22 + 2) >> 0x20) * fVar57 +
                            fVar58 * (float)((ulong)*(undefined8 *)(local_a8 + 2) >> 0x20) +
                            fVar61 * (float)((ulong)*(undefined8 *)(local_a0 + 2) >> 0x20),
                            (float)*(ulong *)(pfVar22 + 2) * fVar57 +
                            fVar58 * (float)*(undefined8 *)(local_a8 + 2) +
                            fVar61 * (float)*(undefined8 *)(local_a0 + 2));
              *(ulong *)pfVar22 = uVar15;
              pfVar16 = pfVar22 + 4;
              pfVar33 = local_a8 + 4;
              pfVar31 = local_a0 + 4;
            }
            if (0xf < uVar64) {
              do {
                uVar55 = *(undefined8 *)pfVar33;
                uVar56 = *(undefined8 *)pfVar31;
                *(ulong *)(pfVar16 + 2) =
                     CONCAT44((float)(*(ulong *)(pfVar16 + 2) >> 0x20) * fVar57 +
                              fVar58 * (float)((ulong)*(undefined8 *)(pfVar33 + 2) >> 0x20) +
                              fVar61 * (float)((ulong)*(undefined8 *)(pfVar31 + 2) >> 0x20),
                              (float)*(ulong *)(pfVar16 + 2) * fVar57 +
                              fVar58 * (float)*(undefined8 *)(pfVar33 + 2) +
                              fVar61 * (float)*(undefined8 *)(pfVar31 + 2));
                *(ulong *)pfVar16 =
                     CONCAT44((float)(*(ulong *)pfVar16 >> 0x20) * fVar57 +
                              fVar58 * (float)((ulong)uVar55 >> 0x20) +
                              fVar61 * (float)((ulong)uVar56 >> 0x20),
                              (float)*(ulong *)pfVar16 * fVar57 + fVar58 * (float)uVar55 +
                              fVar61 * (float)uVar56);
                pfVar14 = pfVar33 + 6;
                uVar15 = *(ulong *)(pfVar33 + 4);
                pfVar38 = pfVar31 + 6;
                uVar55 = *(undefined8 *)(pfVar31 + 4);
                pfVar31 = pfVar31 + 8;
                pfVar33 = pfVar33 + 8;
                *(ulong *)(pfVar16 + 6) =
                     CONCAT44((float)(*(ulong *)(pfVar16 + 6) >> 0x20) * fVar57 +
                              fVar58 * (float)((ulong)*(undefined8 *)pfVar14 >> 0x20) +
                              fVar61 * (float)((ulong)*(undefined8 *)pfVar38 >> 0x20),
                              (float)*(ulong *)(pfVar16 + 6) * fVar57 +
                              fVar58 * (float)*(undefined8 *)pfVar14 +
                              fVar61 * (float)*(undefined8 *)pfVar38);
                *(ulong *)(pfVar16 + 4) =
                     CONCAT44((float)(*(ulong *)(pfVar16 + 4) >> 0x20) * fVar57 +
                              fVar58 * (float)(uVar15 >> 0x20) +
                              fVar61 * (float)((ulong)uVar55 >> 0x20),
                              (float)*(ulong *)(pfVar16 + 4) * fVar57 + fVar58 * (float)uVar15 +
                              fVar61 * (float)uVar55);
                pfVar16 = pfVar16 + 8;
              } while (pfVar16 < pfVar22 + uVar20);
            }
          }
        }
        else if (uVar20 != 0) {
          fVar47 = 1.0 / (float)uVar20;
          fVar45 = fVar45 - fVar58;
          fVar46 = fVar46 - fVar61;
          fVar63 = (fVar63 - fVar57) * fVar47;
          uVar15 = (ulong)(uint)fVar63;
          pfVar31 = pfVar22;
          pfVar33 = local_a8;
          pfVar16 = local_a0;
          do {
            fVar50 = *pfVar31 * fVar57;
            fVar57 = fVar57 + fVar63;
            fVar48 = fVar58 * *pfVar33;
            fVar49 = fVar61 * *pfVar16;
            fVar58 = fVar58 + fVar45 * fVar47;
            fVar61 = fVar61 + fVar46 * fVar47;
            pfVar14 = pfVar31 + 1;
            *pfVar31 = fVar50 + fVar48 + fVar49;
            pfVar31 = pfVar14;
            pfVar33 = pfVar33 + 1;
            pfVar16 = pfVar16 + 1;
          } while (pfVar14 < pfVar22 + uVar20);
        }
        if (*(char *)(param_1 + 0x138) != '\0') {
          fVar57 = *(float *)(param_1 + 0x1b0) * *(float *)(param_1 + 0x1a0);
          fVar58 = *(float *)(*(long *)(param_1 + 0x158) + 0x50) *
                   *(float *)(*(long *)(param_1 + 0x158) + 0x40);
          fVar60 = fVar57 * fVar60;
          fVar57 = fVar57 * fVar54;
          fVar54 = fVar58 * fVar62;
          fVar58 = fVar58 * fVar79;
          uVar15 = (ulong)(uint)fVar58;
          bVar13 = false;
          if ((fVar54 == fVar60) && (bVar13 = false, !NAN(fVar58) && !NAN(fVar57))) {
            bVar13 = fVar58 == fVar57;
          }
          if (bVar13) {
            if (uVar20 != 0) {
              lVar24 = lVar36 * uVar41 + lVar44;
              uVar64 = lVar37 + lVar24 + uVar17;
              uVar27 = lVar37 + lVar24 + 0x10;
              if (uVar64 <= uVar27) {
                uVar64 = uVar27;
              }
              uVar64 = ~(lVar36 * uVar41 + lVar37 + lVar44) + uVar64;
              pfVar16 = pfVar22;
              pfVar31 = pfVar42;
              pfVar33 = pfVar43;
              if (((uint)uVar64 >> 4 & 1) == 0) {
                uVar15 = *(ulong *)pfVar43;
                uVar55 = *(undefined8 *)pfVar42;
                *(ulong *)(pfVar22 + 2) =
                     CONCAT44((float)(*(ulong *)(pfVar22 + 2) >> 0x20) +
                              fVar60 * (float)((ulong)*(undefined8 *)(pfVar43 + 2) >> 0x20) +
                              fVar57 * (float)((ulong)*(undefined8 *)(pfVar42 + 2) >> 0x20),
                              (float)*(ulong *)(pfVar22 + 2) +
                              fVar60 * (float)*(undefined8 *)(pfVar43 + 2) +
                              fVar57 * (float)*(undefined8 *)(pfVar42 + 2));
                *(ulong *)pfVar22 =
                     CONCAT44((float)(*(ulong *)pfVar22 >> 0x20) + fVar60 * (float)(uVar15 >> 0x20)
                              + fVar57 * (float)((ulong)uVar55 >> 0x20),
                              (float)*(ulong *)pfVar22 + fVar60 * (float)uVar15 +
                              fVar57 * (float)uVar55);
                pfVar16 = pfVar22 + 4;
                pfVar31 = pfVar42 + 4;
                pfVar33 = pfVar43 + 4;
              }
              if (0xf < uVar64) {
                do {
                  uVar55 = *(undefined8 *)pfVar33;
                  uVar56 = *(undefined8 *)pfVar31;
                  *(ulong *)(pfVar16 + 2) =
                       CONCAT44((float)(*(ulong *)(pfVar16 + 2) >> 0x20) +
                                fVar60 * (float)((ulong)*(undefined8 *)(pfVar33 + 2) >> 0x20) +
                                fVar57 * (float)((ulong)*(undefined8 *)(pfVar31 + 2) >> 0x20),
                                (float)*(ulong *)(pfVar16 + 2) +
                                fVar60 * (float)*(undefined8 *)(pfVar33 + 2) +
                                fVar57 * (float)*(undefined8 *)(pfVar31 + 2));
                  *(ulong *)pfVar16 =
                       CONCAT44((float)(*(ulong *)pfVar16 >> 0x20) +
                                fVar60 * (float)((ulong)uVar55 >> 0x20) +
                                fVar57 * (float)((ulong)uVar56 >> 0x20),
                                (float)*(ulong *)pfVar16 + fVar60 * (float)uVar55 +
                                fVar57 * (float)uVar56);
                  pfVar14 = pfVar33 + 6;
                  uVar55 = *(undefined8 *)(pfVar33 + 4);
                  pfVar38 = pfVar31 + 6;
                  uVar15 = *(ulong *)(pfVar31 + 4);
                  pfVar31 = pfVar31 + 8;
                  pfVar33 = pfVar33 + 8;
                  *(ulong *)(pfVar16 + 6) =
                       CONCAT44((float)(*(ulong *)(pfVar16 + 6) >> 0x20) +
                                fVar60 * (float)((ulong)*(undefined8 *)pfVar14 >> 0x20) +
                                fVar57 * (float)((ulong)*(undefined8 *)pfVar38 >> 0x20),
                                (float)*(ulong *)(pfVar16 + 6) +
                                fVar60 * (float)*(undefined8 *)pfVar14 +
                                fVar57 * (float)*(undefined8 *)pfVar38);
                  *(ulong *)(pfVar16 + 4) =
                       CONCAT44((float)(*(ulong *)(pfVar16 + 4) >> 0x20) +
                                fVar60 * (float)((ulong)uVar55 >> 0x20) +
                                fVar57 * (float)(uVar15 >> 0x20),
                                (float)*(ulong *)(pfVar16 + 4) + fVar60 * (float)uVar55 +
                                fVar57 * (float)uVar15);
                  pfVar16 = pfVar16 + 8;
                } while (pfVar16 < pfVar22 + uVar20);
              }
            }
          }
          else if (uVar20 != 0) {
            fVar54 = fVar54 - fVar60;
            fVar58 = (fVar58 - fVar57) / (float)uVar20;
            uVar15 = (ulong)(uint)fVar58;
            pfVar31 = pfVar43;
            pfVar33 = pfVar22;
            pfVar16 = pfVar42;
            do {
              fVar61 = fVar60 * *pfVar31;
              fVar63 = fVar57 * *pfVar16;
              fVar60 = fVar60 + fVar54 / (float)uVar20;
              fVar57 = fVar57 + fVar58;
              pfVar14 = pfVar33 + 1;
              *pfVar33 = *pfVar33 + fVar61 + fVar63;
              pfVar31 = pfVar31 + 1;
              pfVar33 = pfVar14;
              pfVar16 = pfVar16 + 1;
            } while (pfVar14 < pfVar22 + uVar20);
          }
        }
        if ((uVar8 >> 0xf & 1) != 0) {
          lVar37 = *param_2;
          uVar41 = (ulong)((int)lVar36 + 4);
          fVar60 = *(float *)(param_1 + 0x1a8) * 0.707106 * *(float *)(param_1 + 0x1b4);
          uVar27 = (ulong)(uint)fVar60;
          pfVar22 = (float *)(lVar37 + *(ushort *)(param_2 + 2) * uVar41 + uVar32 * 4);
          lVar24 = *(long *)(param_1 + 0x158);
          fVar54 = *(float *)(param_1 + 0x1ac);
          fVar57 = *(float *)(lVar24 + 0x48) * 0.707106 * *(float *)(lVar24 + 0x54);
          uVar15 = (ulong)(uint)fVar57;
          bVar13 = false;
          if ((*(float *)(lVar24 + 0x4c) == fVar54) &&
             (bVar13 = false, !NAN(fVar57) && !NAN(fVar60))) {
            bVar13 = fVar57 == fVar60;
          }
          if (bVar13) {
            if (uVar20 != 0) {
              lVar36 = uVar41 * *(ushort *)(param_2 + 2);
              lVar24 = lVar36 + lVar44;
              uVar32 = lVar37 + lVar24 + uVar17;
              uVar17 = lVar37 + lVar24 + 0x10;
              if (uVar32 <= uVar17) {
                uVar32 = uVar17;
              }
              uVar32 = ~(lVar36 + lVar37 + lVar44) + uVar32;
              pfVar33 = pfVar22;
              pfVar31 = local_c8[2];
              pfVar16 = local_c8[3];
              if (((uint)uVar32 >> 4 & 1) == 0) {
                fVar57 = (float)*(undefined8 *)local_c8[3] + (float)*(undefined8 *)local_c8[2];
                fVar58 = (float)((ulong)*(undefined8 *)local_c8[3] >> 0x20) +
                         (float)((ulong)*(undefined8 *)local_c8[2] >> 0x20);
                uVar15 = CONCAT44(fVar58,fVar57);
                *(ulong *)(pfVar22 + 2) =
                     CONCAT44((float)((ulong)*(undefined8 *)(pfVar22 + 2) >> 0x20) * fVar54 +
                              fVar60 * ((float)((ulong)*(undefined8 *)(local_c8[3] + 2) >> 0x20) +
                                       (float)((ulong)*(undefined8 *)(local_c8[2] + 2) >> 0x20)),
                              (float)*(undefined8 *)(pfVar22 + 2) * fVar54 +
                              fVar60 * ((float)*(undefined8 *)(local_c8[3] + 2) +
                                       (float)*(undefined8 *)(local_c8[2] + 2)));
                *(ulong *)pfVar22 =
                     CONCAT44((float)((ulong)*(undefined8 *)pfVar22 >> 0x20) * fVar54 +
                              fVar60 * fVar58,
                              (float)*(undefined8 *)pfVar22 * fVar54 + fVar60 * fVar57);
                pfVar33 = pfVar22 + 4;
                pfVar31 = local_c8[2] + 4;
                pfVar16 = local_c8[3] + 4;
              }
              if (0xf < uVar32) {
                do {
                  uVar55 = *(undefined8 *)pfVar31;
                  uVar56 = *(undefined8 *)pfVar16;
                  *(ulong *)(pfVar33 + 2) =
                       CONCAT44((float)((ulong)*(undefined8 *)(pfVar33 + 2) >> 0x20) * fVar54 +
                                fVar60 * ((float)((ulong)*(undefined8 *)(pfVar16 + 2) >> 0x20) +
                                         (float)((ulong)*(undefined8 *)(pfVar31 + 2) >> 0x20)),
                                (float)*(undefined8 *)(pfVar33 + 2) * fVar54 +
                                fVar60 * ((float)*(undefined8 *)(pfVar16 + 2) +
                                         (float)*(undefined8 *)(pfVar31 + 2)));
                  *(ulong *)pfVar33 =
                       CONCAT44((float)((ulong)*(undefined8 *)pfVar33 >> 0x20) * fVar54 +
                                fVar60 * ((float)((ulong)uVar56 >> 0x20) +
                                         (float)((ulong)uVar55 >> 0x20)),
                                (float)*(undefined8 *)pfVar33 * fVar54 +
                                fVar60 * ((float)uVar56 + (float)uVar55));
                  pfVar14 = pfVar31 + 6;
                  uVar55 = *(undefined8 *)(pfVar31 + 4);
                  uVar15 = *(ulong *)(pfVar16 + 4);
                  pfVar31 = pfVar31 + 8;
                  *(ulong *)(pfVar33 + 6) =
                       CONCAT44((float)((ulong)*(undefined8 *)(pfVar33 + 6) >> 0x20) * fVar54 +
                                fVar60 * ((float)((ulong)*(undefined8 *)(pfVar16 + 6) >> 0x20) +
                                         (float)((ulong)*(undefined8 *)pfVar14 >> 0x20)),
                                (float)*(undefined8 *)(pfVar33 + 6) * fVar54 +
                                fVar60 * ((float)*(undefined8 *)(pfVar16 + 6) +
                                         (float)*(undefined8 *)pfVar14));
                  *(ulong *)(pfVar33 + 4) =
                       CONCAT44((float)((ulong)*(undefined8 *)(pfVar33 + 4) >> 0x20) * fVar54 +
                                fVar60 * ((float)(uVar15 >> 0x20) + (float)((ulong)uVar55 >> 0x20)),
                                (float)*(undefined8 *)(pfVar33 + 4) * fVar54 +
                                fVar60 * ((float)uVar15 + (float)uVar55));
                  pfVar33 = pfVar33 + 8;
                  pfVar16 = pfVar16 + 8;
                } while (pfVar33 < pfVar22 + uVar20);
              }
            }
          }
          else if (uVar20 != 0) {
            fVar58 = *(float *)(lVar24 + 0x4c) - fVar54;
            fVar60 = (fVar57 - fVar60) / (float)uVar20;
            pfVar31 = local_c8[2];
            pfVar33 = local_c8[3];
            pfVar16 = pfVar22;
            uVar15 = uVar27;
            do {
              fVar63 = *pfVar16 * fVar54;
              fVar54 = fVar54 + fVar58 / (float)uVar20;
              fVar57 = (float)uVar27;
              fVar61 = (float)uVar15;
              uVar27 = (ulong)(uint)(fVar57 + fVar60);
              uVar15 = (ulong)(uint)(fVar61 + fVar60);
              pfVar14 = pfVar16 + 1;
              *pfVar16 = fVar63 + fVar57 * *pfVar31 + fVar61 * *pfVar33;
              pfVar31 = pfVar31 + 1;
              pfVar33 = pfVar33 + 1;
              pfVar16 = pfVar14;
            } while (pfVar14 < pfVar22 + uVar20);
          }
        }
        lVar44 = *(long *)(param_1 + 0x158);
        uVar18 = uVar20 + uVar18;
        *(undefined4 *)(param_1 + 0x1ac) = *(undefined4 *)(lVar44 + 0x4c);
        *(undefined4 *)(param_1 + 0x1b0) = *(undefined4 *)(lVar44 + 0x50);
        *(undefined4 *)(param_1 + 0x1b4) = *(undefined4 *)(lVar44 + 0x54);
        *(undefined4 *)(param_1 + 0x19c) = *(undefined4 *)(lVar44 + 0x3c);
        *(undefined4 *)(param_1 + 0x1a4) = *(undefined4 *)(lVar44 + 0x44);
        *(undefined4 *)(param_1 + 0x1a0) = *(undefined4 *)(lVar44 + 0x40);
        uVar23 = uVar23 - uVar20;
        *(undefined4 *)(param_1 + 0x1a8) = *(undefined4 *)(lVar44 + 0x48);
        fVar54 = fVar79;
        fVar60 = fVar62;
      } while (uVar23 != 0);
    }
    (**(code **)(**(long **)(param_1 + 0x160) + 0x18))(*(long **)(param_1 + 0x160),__src);
  }
  return;
}


