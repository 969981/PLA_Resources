/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e14c94; name: FUN_02e14c94
 */


void FUN_02e14c94(long param_1,long *param_2)

{
  float *__s;
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *__dest;
  long *plVar5;
  uint uVar6;
  float *pfVar7;
  float *pfVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  float *pfVar12;
  bool bVar13;
  bool bVar14;
  float *__src;
  float *pfVar15;
  uint uVar16;
  byte bVar17;
  uint uVar18;
  uint uVar19;
  ulong uVar20;
  float *pfVar21;
  float *pfVar22;
  float *pfVar23;
  float *pfVar24;
  long lVar25;
  uint *puVar26;
  uint *puVar27;
  uint uVar28;
  ulong uVar29;
  int iVar30;
  int iVar31;
  uint uVar32;
  float *pfVar33;
  long lVar34;
  float *pfVar35;
  float *pfVar36;
  long lVar37;
  ulong uVar38;
  float *pfVar39;
  undefined8 *puVar40;
  ulong *puVar41;
  long lVar42;
  uint uVar43;
  ulong uVar44;
  float *pfVar45;
  byte bVar46;
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
  undefined8 uVar57;
  undefined8 uVar58;
  float fVar59;
  float fVar60;
  undefined8 uVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  ulong uVar66;
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
  undefined8 uVar78;
  ulong uVar79;
  undefined8 uVar80;
  ulong uVar81;
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
  float *local_c8 [4];
  float *local_a8;
  float *local_a0;
  
  uVar9 = *(uint *)(param_2 + 1);
  __src = (float *)(**(code **)(**(long **)(param_1 + 0x160) + 0x10))
                             (*(long **)(param_1 + 0x160),
                              (ulong)*(byte *)(param_1 + 0x138) * 0x800 + 0x2000);
  if (__src != (float *)0x0) {
    __s = __src + 0x200;
    pfVar1 = __src + 0x300;
    local_c8[2] = __src + 0x400;
    local_c8[3] = __src + 0x500;
    local_a8 = __src + 0x600;
    local_a0 = __src + 0x700;
    bVar14 = *(char *)(param_1 + 0x138) != '\0';
    pfVar7 = (float *)0x0;
    if (bVar14) {
      pfVar7 = __src + 0x900;
    }
    pfVar8 = (float *)0x0;
    if (bVar14) {
      pfVar8 = __src + 0x800;
    }
    fVar82 = *(float *)(*(long *)(param_1 + 0x158) + 0x14) * 0.001627189 + 0.707106;
    fVar56 = 1.0 - fVar82 * fVar82;
    fVar64 = SQRT(fVar56);
    pfVar33 = (float *)0x0;
    if (bVar14) {
      pfVar33 = __src + 0xb00;
    }
    pfVar36 = (float *)0x0;
    if (bVar14) {
      pfVar36 = __src + 0xa00;
    }
    uVar28 = (uint)*(ushort *)((long)param_2 + 0x12);
    if (fVar56 <= 0.0) {
      fVar64 = 0.0;
    }
    local_c8[0] = __s;
    local_c8[1] = pfVar1;
    if (*(ushort *)((long)param_2 + 0x12) != 0) {
      uVar66 = (ulong)(uint)*(float *)(param_1 + 0x174);
      fVar56 = *(float *)(param_1 + 0x174) * 0.001627189 + 0.707106;
      fVar59 = 1.0 - fVar56 * fVar56;
      uVar6 = uVar9 - (uVar9 >> 0xf & 1) & 0xff;
      pfVar2 = __src + 0x201;
      pfVar3 = __src + 0x301;
      pfVar4 = __src + 0x101;
      fVar62 = SQRT(fVar59);
      if (fVar59 <= 0.0) {
        fVar62 = 0.0;
      }
      uVar16 = 0;
      __dest = __src + 0x100;
      do {
        uVar18 = uVar28;
        if (0xff < uVar28) {
          uVar18 = 0x100;
        }
        FUN_02e1ce44(param_1,param_2,__src,uVar18);
        uVar43 = *(uint *)(param_1 + 0xd0);
        uVar20 = (ulong)(uVar18 << 2);
        if (uVar43 == 0) {
          memcpy(__dest,__src,uVar20);
        }
        else {
          uVar38 = (ulong)*(uint *)(param_1 + 0xe0);
          pfVar35 = (float *)(*(long *)(param_1 + 0xd8) + uVar38 * 4);
          pfVar39 = __dest;
          pfVar21 = __src;
          uVar19 = uVar18;
          do {
            uVar43 = uVar43 - (int)uVar38;
            uVar32 = uVar19;
            if (uVar43 <= uVar19) {
              uVar32 = uVar43;
            }
            uVar10 = uVar32 >> 2;
            uVar43 = uVar32 & 3;
            pfVar15 = pfVar39;
            pfVar22 = pfVar21;
            pfVar23 = pfVar35;
            if (uVar10 != 0) {
              uVar11 = uVar32 >> 2 & 3;
              pfVar23 = (float *)(ulong)uVar10;
              if (2 < uVar10 - 1) {
                iVar30 = uVar10 - uVar11;
                do {
                  uVar58 = *(undefined8 *)(pfVar35 + 2);
                  uVar57 = *(undefined8 *)pfVar35;
                  iVar30 = iVar30 + -4;
                  uVar61 = *(undefined8 *)pfVar21;
                  *(undefined8 *)(pfVar35 + 2) = *(undefined8 *)(pfVar21 + 2);
                  *(undefined8 *)pfVar35 = uVar61;
                  *(undefined8 *)(pfVar39 + 2) = uVar58;
                  *(undefined8 *)pfVar39 = uVar57;
                  uVar58 = *(undefined8 *)(pfVar35 + 6);
                  uVar57 = *(undefined8 *)(pfVar35 + 4);
                  uVar61 = *(undefined8 *)(pfVar21 + 4);
                  *(undefined8 *)(pfVar35 + 6) = *(undefined8 *)(pfVar21 + 6);
                  *(undefined8 *)(pfVar35 + 4) = uVar61;
                  *(undefined8 *)(pfVar39 + 6) = uVar58;
                  *(undefined8 *)(pfVar39 + 4) = uVar57;
                  uVar58 = *(undefined8 *)(pfVar35 + 10);
                  uVar57 = *(undefined8 *)(pfVar35 + 8);
                  uVar61 = *(undefined8 *)(pfVar21 + 8);
                  *(undefined8 *)(pfVar35 + 10) = *(undefined8 *)(pfVar21 + 10);
                  *(undefined8 *)(pfVar35 + 8) = uVar61;
                  *(undefined8 *)(pfVar39 + 10) = uVar58;
                  *(undefined8 *)(pfVar39 + 8) = uVar57;
                  uVar58 = *(undefined8 *)(pfVar35 + 0xe);
                  uVar57 = *(undefined8 *)(pfVar35 + 0xc);
                  pfVar15 = pfVar21 + 0xe;
                  uVar61 = *(undefined8 *)(pfVar21 + 0xc);
                  pfVar21 = pfVar21 + 0x10;
                  *(undefined8 *)(pfVar35 + 0xe) = *(undefined8 *)pfVar15;
                  *(undefined8 *)(pfVar35 + 0xc) = uVar61;
                  *(undefined8 *)(pfVar39 + 0xe) = uVar58;
                  *(undefined8 *)(pfVar39 + 0xc) = uVar57;
                  pfVar35 = pfVar35 + 0x10;
                  pfVar39 = pfVar39 + 0x10;
                  pfVar22 = pfVar21;
                  pfVar23 = pfVar35;
                  pfVar15 = pfVar39;
                } while (iVar30 != 0);
              }
              if (uVar11 != 0) {
                iVar30 = -uVar11;
                pfVar21 = pfVar15;
                pfVar39 = pfVar22;
                do {
                  pfVar23 = pfVar35 + 4;
                  uVar58 = *(undefined8 *)(pfVar35 + 2);
                  uVar57 = *(undefined8 *)pfVar35;
                  bVar14 = iVar30 != -1;
                  iVar30 = iVar30 + 1;
                  pfVar22 = pfVar39 + 4;
                  uVar61 = *(undefined8 *)pfVar39;
                  *(undefined8 *)(pfVar35 + 2) = *(undefined8 *)(pfVar39 + 2);
                  *(undefined8 *)pfVar35 = uVar61;
                  pfVar15 = pfVar21 + 4;
                  *(undefined8 *)(pfVar21 + 2) = uVar58;
                  *(undefined8 *)pfVar21 = uVar57;
                  pfVar21 = pfVar15;
                  pfVar39 = pfVar22;
                  pfVar35 = pfVar23;
                } while (bVar14);
              }
            }
            pfVar39 = pfVar15;
            pfVar21 = pfVar22;
            pfVar35 = pfVar23;
            if (uVar43 != 0) {
              fVar59 = *pfVar23;
              pfVar21 = pfVar22 + 1;
              pfVar35 = pfVar23 + 1;
              *pfVar23 = *pfVar22;
              pfVar39 = pfVar15 + 1;
              *pfVar15 = fVar59;
              if (1 < uVar43) {
                fVar59 = pfVar23[1];
                pfVar23[1] = pfVar22[1];
                pfVar15[1] = fVar59;
                if (uVar43 == 2) {
                  pfVar21 = pfVar22 + 2;
                  pfVar35 = pfVar23 + 2;
                  pfVar39 = pfVar15 + 2;
                }
                else {
                  fVar59 = pfVar23[2];
                  pfVar21 = pfVar22 + 3;
                  pfVar23[2] = pfVar22[2];
                  pfVar35 = pfVar23 + 3;
                  pfVar15[2] = fVar59;
                  pfVar39 = pfVar15 + 3;
                }
              }
            }
            uVar10 = *(int *)(param_1 + 0xe0) + uVar32;
            uVar43 = *(uint *)(param_1 + 0xd0);
            *(uint *)(param_1 + 0xe0) = uVar10;
            if (uVar10 == uVar43) {
              pfVar35 = *(float **)(param_1 + 0xd8);
              uVar10 = 0;
              *(undefined4 *)(param_1 + 0xe0) = 0;
            }
            uVar38 = (ulong)uVar10;
            uVar19 = uVar19 - uVar32;
          } while (uVar19 != 0);
        }
        uVar43 = *(uint *)(param_1 + 0xb8);
        if ((uVar43 != 0) && (uVar18 != 0)) {
          uVar38 = (ulong)*(uint *)(param_1 + 200);
          pfVar35 = __src;
          pfVar21 = (float *)(*(long *)(param_1 + 0xc0) + uVar38 * 4);
          uVar19 = uVar18;
          do {
            uVar43 = uVar43 - (int)uVar38;
            uVar32 = uVar19;
            if (uVar43 <= uVar19) {
              uVar32 = uVar43;
            }
            uVar10 = uVar32 >> 2;
            uVar43 = uVar32 & 3;
            if (uVar10 == 0) {
              pfVar39 = pfVar21;
              pfVar15 = pfVar35;
              if (uVar43 != 0) goto LAB_02e16140;
            }
            else {
              uVar11 = uVar32 >> 2 & 3;
              pfVar22 = (float *)(ulong)uVar10;
              pfVar39 = pfVar21;
              pfVar23 = (float *)(ulong)(uVar10 - 1);
              pfVar15 = pfVar35;
              if (2 < uVar10 - 1) {
                iVar30 = uVar10 - uVar11;
                do {
                  uVar58 = *(undefined8 *)(pfVar21 + 2);
                  uVar57 = *(undefined8 *)pfVar21;
                  iVar30 = iVar30 + -4;
                  uVar61 = *(undefined8 *)pfVar35;
                  *(undefined8 *)(pfVar21 + 2) = *(undefined8 *)(pfVar35 + 2);
                  *(undefined8 *)pfVar21 = uVar61;
                  *(undefined8 *)(pfVar35 + 2) = uVar58;
                  *(undefined8 *)pfVar35 = uVar57;
                  uVar58 = *(undefined8 *)(pfVar21 + 6);
                  uVar57 = *(undefined8 *)(pfVar21 + 4);
                  uVar61 = *(undefined8 *)(pfVar35 + 4);
                  *(undefined8 *)(pfVar21 + 6) = *(undefined8 *)(pfVar35 + 6);
                  *(undefined8 *)(pfVar21 + 4) = uVar61;
                  *(undefined8 *)(pfVar35 + 6) = uVar58;
                  *(undefined8 *)(pfVar35 + 4) = uVar57;
                  uVar58 = *(undefined8 *)(pfVar21 + 10);
                  uVar57 = *(undefined8 *)(pfVar21 + 8);
                  uVar61 = *(undefined8 *)(pfVar35 + 8);
                  *(undefined8 *)(pfVar21 + 10) = *(undefined8 *)(pfVar35 + 10);
                  *(undefined8 *)(pfVar21 + 8) = uVar61;
                  *(undefined8 *)(pfVar35 + 10) = uVar58;
                  *(undefined8 *)(pfVar35 + 8) = uVar57;
                  uVar58 = *(undefined8 *)(pfVar21 + 0xe);
                  uVar57 = *(undefined8 *)(pfVar21 + 0xc);
                  uVar61 = *(undefined8 *)(pfVar35 + 0xc);
                  *(undefined8 *)(pfVar21 + 0xe) = *(undefined8 *)(pfVar35 + 0xe);
                  *(undefined8 *)(pfVar21 + 0xc) = uVar61;
                  *(undefined8 *)(pfVar35 + 0xe) = uVar58;
                  *(undefined8 *)(pfVar35 + 0xc) = uVar57;
                  pfVar21 = pfVar21 + 0x10;
                  pfVar35 = pfVar35 + 0x10;
                  pfVar22 = pfVar21;
                  pfVar39 = pfVar21;
                  pfVar23 = pfVar35;
                  pfVar15 = pfVar35;
                } while (iVar30 != 0);
              }
              pfVar35 = pfVar23;
              pfVar21 = pfVar22;
              if (uVar11 != 0) {
                iVar30 = -uVar11;
                do {
                  pfVar21 = pfVar39 + 4;
                  uVar58 = *(undefined8 *)(pfVar39 + 2);
                  uVar57 = *(undefined8 *)pfVar39;
                  bVar14 = iVar30 != -1;
                  iVar30 = iVar30 + 1;
                  pfVar35 = pfVar15 + 4;
                  uVar61 = *(undefined8 *)pfVar15;
                  *(undefined8 *)(pfVar39 + 2) = *(undefined8 *)(pfVar15 + 2);
                  *(undefined8 *)pfVar39 = uVar61;
                  *(undefined8 *)(pfVar15 + 2) = uVar58;
                  *(undefined8 *)pfVar15 = uVar57;
                  pfVar39 = pfVar21;
                  pfVar15 = pfVar35;
                } while (bVar14);
              }
              pfVar39 = pfVar21;
              pfVar15 = pfVar35;
              if (uVar43 != 0) {
LAB_02e16140:
                fVar59 = *pfVar21;
                pfVar39 = pfVar21 + 1;
                *pfVar21 = *pfVar15;
                pfVar35 = pfVar15 + 1;
                *pfVar15 = fVar59;
                if (1 < uVar43) {
                  fVar59 = pfVar21[1];
                  pfVar21[1] = pfVar15[1];
                  pfVar15[1] = fVar59;
                  if (uVar43 == 2) {
                    pfVar39 = pfVar21 + 2;
                    pfVar35 = pfVar15 + 2;
                  }
                  else {
                    fVar59 = pfVar21[2];
                    pfVar21[2] = pfVar15[2];
                    pfVar39 = pfVar21 + 3;
                    pfVar35 = pfVar15 + 3;
                    pfVar15[2] = fVar59;
                  }
                }
              }
            }
            uVar10 = *(int *)(param_1 + 200) + uVar32;
            uVar38 = (ulong)uVar10;
            uVar43 = *(uint *)(param_1 + 0xb8);
            *(uint *)(param_1 + 200) = uVar10;
            if (uVar10 == uVar43) {
              pfVar39 = *(float **)(param_1 + 0xc0);
              uVar38 = 0;
              *(undefined4 *)(param_1 + 200) = 0;
            }
            uVar19 = uVar19 - uVar32;
            pfVar21 = pfVar39;
          } while (uVar19 != 0);
        }
        if (*(char *)(param_1 + 0x138) != '\0') {
          FUN_02e1f368(*(undefined8 *)(param_1 + 0x150),__src,pfVar8,pfVar7,uVar18);
          if ((*(char *)(*(long *)(param_1 + 0x158) + 0x98) != '\0') &&
             (bVar17 = *(byte *)(param_1 + 0x134), bVar17 != 0)) {
            uVar19 = uVar18 & 3;
            iVar30 = 4 - uVar19;
            uVar44 = 0;
            bVar46 = 0;
            uVar38 = (ulong)uVar18;
            uVar43 = iVar30 + uVar18;
            do {
              lVar42 = *(long *)(param_1 + 0x148);
              if (*(int *)(lVar42 + uVar44 * 0xa0 + 0x90) == 1) {
                uVar66 = uVar38;
                uVar32 = uVar18;
                if (uVar19 != 0) {
                  memset(pfVar8 + uVar38,0,(ulong)(uint)(iVar30 * 4));
                  uVar66 = (ulong)uVar43;
                  uVar32 = uVar43;
                }
                puVar40 = (undefined8 *)(lVar42 + uVar44 * 0xa0);
                fVar59 = *(float *)(puVar40 + 0x10);
                fVar60 = *(float *)((long)puVar40 + 0x84);
                fVar63 = *(float *)(puVar40 + 0x11);
                fVar65 = *(float *)((long)puVar40 + 0x8c);
                if (uVar32 != 0) {
                  uVar58 = puVar40[1];
                  uVar57 = *puVar40;
                  uVar68 = puVar40[3];
                  uVar61 = puVar40[2];
                  uVar72 = puVar40[5];
                  uVar70 = puVar40[4];
                  uVar76 = puVar40[7];
                  uVar74 = puVar40[6];
                  uVar80 = puVar40[9];
                  uVar78 = puVar40[8];
                  uVar85 = puVar40[0xb];
                  uVar83 = puVar40[10];
                  uVar89 = puVar40[0xd];
                  uVar87 = puVar40[0xc];
                  uVar93 = puVar40[0xf];
                  uVar91 = puVar40[0xe];
                  pfVar21 = pfVar8;
                  do {
                    fVar96 = fVar59 * (float)uVar78;
                    fVar97 = fVar59 * (float)((ulong)uVar78 >> 0x20);
                    fVar98 = fVar59 * (float)uVar80;
                    fVar99 = fVar59 * (float)((ulong)uVar80 >> 0x20);
                    fVar47 = (float)uVar83 * fVar60;
                    fVar50 = (float)((ulong)uVar83 >> 0x20) * fVar60;
                    fVar53 = (float)uVar85 * fVar60;
                    fVar54 = (float)((ulong)uVar85 >> 0x20) * fVar60;
                    pfVar35 = pfVar21 + 4;
                    fVar59 = (float)((ulong)*(undefined8 *)(pfVar21 + 2) >> 0x20);
                    fVar48 = (float)uVar87 * fVar63;
                    fVar51 = (float)((ulong)uVar87 >> 0x20) * fVar63;
                    fVar49 = (float)uVar91 * fVar65;
                    fVar52 = (float)((ulong)uVar91 >> 0x20) * fVar65;
                    fVar55 = (float)((ulong)uVar93 >> 0x20) * fVar65;
                    fVar100 = (float)*(undefined8 *)pfVar21;
                    fVar95 = (float)((ulong)*(undefined8 *)pfVar21 >> 0x20);
                    fVar60 = (float)*(undefined8 *)(pfVar21 + 2);
                    fVar65 = fVar98 + fVar53 + (float)uVar89 * fVar63 + (float)uVar93 * fVar65 +
                             (float)uVar58 * fVar60 + (float)uVar68 * fVar60 +
                             (float)uVar72 * fVar95 + (float)uVar76 * fVar100;
                    fVar63 = fVar99 + fVar54 + (float)((ulong)uVar89 >> 0x20) * fVar63 + fVar55 +
                             (float)((ulong)uVar58 >> 0x20) * fVar59 +
                             (float)((ulong)uVar68 >> 0x20) * fVar60 +
                             (float)((ulong)uVar72 >> 0x20) * fVar95 +
                             (float)((ulong)uVar76 >> 0x20) * fVar100;
                    *(ulong *)(pfVar21 + 2) = CONCAT44(fVar63,fVar65);
                    *(ulong *)pfVar21 =
                         CONCAT44(fVar97 + fVar50 + fVar51 + fVar52 +
                                  (float)((ulong)uVar57 >> 0x20) * fVar95 +
                                  (float)((ulong)uVar61 >> 0x20) * fVar60 +
                                  (float)((ulong)uVar70 >> 0x20) * fVar95 +
                                  (float)((ulong)uVar74 >> 0x20) * fVar100,
                                  fVar96 + fVar47 + fVar48 + fVar49 + (float)uVar57 * fVar100 +
                                  (float)uVar61 * fVar60 + (float)uVar70 * fVar95 +
                                  (float)uVar74 * fVar100);
                    pfVar21 = pfVar35;
                  } while (pfVar35 < pfVar8 + uVar66);
                }
                *(float *)(puVar40 + 0x10) = fVar59;
                *(float *)((long)puVar40 + 0x84) = fVar60;
                *(float *)(puVar40 + 0x11) = fVar63;
                *(float *)((long)puVar40 + 0x8c) = fVar65;
                lVar42 = *(long *)(param_1 + 0x148);
                uVar29 = uVar38;
                uVar32 = uVar18;
                if (uVar19 != 0) {
                  memset(pfVar7 + uVar38,0,(ulong)(uint)(iVar30 * 4));
                  uVar29 = (ulong)uVar43;
                  uVar32 = uVar43;
                }
                puVar41 = (ulong *)(lVar42 + (uVar44 + 1) * 0xa0);
                fVar59 = *(float *)(puVar41 + 0x10);
                fVar63 = *(float *)((long)puVar41 + 0x84);
                fVar60 = *(float *)(puVar41 + 0x11);
                fVar65 = *(float *)((long)puVar41 + 0x8c);
                uVar66 = (ulong)(uint)fVar65;
                if (uVar32 != 0) {
                  uVar44 = puVar41[1];
                  uVar66 = *puVar41;
                  uVar69 = puVar41[3];
                  uVar67 = puVar41[2];
                  uVar73 = puVar41[5];
                  uVar71 = puVar41[4];
                  uVar77 = puVar41[7];
                  uVar75 = puVar41[6];
                  uVar81 = puVar41[9];
                  uVar79 = puVar41[8];
                  uVar86 = puVar41[0xb];
                  uVar84 = puVar41[10];
                  uVar90 = puVar41[0xd];
                  uVar88 = puVar41[0xc];
                  uVar94 = puVar41[0xf];
                  uVar92 = puVar41[0xe];
                  pfVar21 = pfVar7;
                  do {
                    fVar96 = fVar59 * (float)uVar79;
                    fVar97 = fVar59 * (float)(uVar79 >> 0x20);
                    fVar98 = fVar59 * (float)uVar81;
                    fVar99 = fVar59 * (float)(uVar81 >> 0x20);
                    fVar47 = (float)uVar84 * fVar63;
                    fVar50 = (float)(uVar84 >> 0x20) * fVar63;
                    fVar53 = (float)uVar86 * fVar63;
                    fVar54 = (float)(uVar86 >> 0x20) * fVar63;
                    pfVar35 = pfVar21 + 4;
                    fVar59 = (float)((ulong)*(undefined8 *)(pfVar21 + 2) >> 0x20);
                    fVar48 = (float)uVar88 * fVar60;
                    fVar51 = (float)(uVar88 >> 0x20) * fVar60;
                    fVar49 = (float)uVar92 * fVar65;
                    fVar52 = (float)(uVar92 >> 0x20) * fVar65;
                    fVar55 = (float)(uVar94 >> 0x20) * fVar65;
                    fVar100 = (float)*(undefined8 *)pfVar21;
                    fVar95 = (float)((ulong)*(undefined8 *)pfVar21 >> 0x20);
                    fVar63 = (float)*(undefined8 *)(pfVar21 + 2);
                    fVar65 = fVar98 + fVar53 + (float)uVar90 * fVar60 + (float)uVar94 * fVar65 +
                             (float)uVar44 * fVar63 + (float)uVar69 * fVar63 +
                             (float)uVar73 * fVar95 + (float)uVar77 * fVar100;
                    fVar60 = fVar99 + fVar54 + (float)(uVar90 >> 0x20) * fVar60 + fVar55 +
                             (float)(uVar44 >> 0x20) * fVar59 + (float)(uVar69 >> 0x20) * fVar63 +
                             (float)(uVar73 >> 0x20) * fVar95 + (float)(uVar77 >> 0x20) * fVar100;
                    *(ulong *)(pfVar21 + 2) = CONCAT44(fVar60,fVar65);
                    *(ulong *)pfVar21 =
                         CONCAT44(fVar97 + fVar50 + fVar51 + fVar52 +
                                  (float)(uVar66 >> 0x20) * fVar95 +
                                  (float)(uVar67 >> 0x20) * fVar63 +
                                  (float)(uVar71 >> 0x20) * fVar95 +
                                  (float)(uVar75 >> 0x20) * fVar100,
                                  fVar96 + fVar47 + fVar48 + fVar49 + (float)uVar66 * fVar100 +
                                  (float)uVar67 * fVar63 + (float)uVar71 * fVar95 +
                                  (float)uVar75 * fVar100);
                    pfVar21 = pfVar35;
                  } while (pfVar35 < pfVar7 + uVar29);
                }
                *(float *)(puVar41 + 0x10) = fVar59;
                bVar46 = bVar46 + 1;
                *(float *)((long)puVar41 + 0x84) = fVar63;
                *(float *)(puVar41 + 0x11) = fVar60;
                *(float *)((long)puVar41 + 0x8c) = fVar65;
                bVar17 = *(byte *)(param_1 + 0x134);
              }
              bVar46 = bVar46 + 1;
              uVar44 = (ulong)bVar46;
            } while (bVar46 < bVar17);
          }
          uVar43 = *(uint *)(param_1 + 0xe8);
          if (uVar43 == 0) {
            pfVar33 = pfVar7;
            pfVar36 = pfVar8;
          }
          else if (uVar18 != 0) {
            uVar38 = (ulong)*(uint *)(param_1 + 0xf8);
            pfVar35 = (float *)(*(long *)(param_1 + 0xf0) + uVar38 * 4);
            pfVar39 = pfVar36;
            pfVar21 = pfVar8;
            uVar19 = uVar18;
            do {
              uVar43 = uVar43 - (int)uVar38;
              uVar32 = uVar19;
              if (uVar43 <= uVar19) {
                uVar32 = uVar43;
              }
              uVar10 = uVar32 >> 2;
              uVar43 = uVar32 & 3;
              pfVar15 = pfVar39;
              pfVar22 = pfVar21;
              pfVar23 = pfVar35;
              if (uVar10 != 0) {
                uVar11 = uVar32 >> 2 & 3;
                pfVar23 = (float *)(ulong)uVar10;
                if (2 < uVar10 - 1) {
                  iVar30 = uVar10 - uVar11;
                  do {
                    uVar58 = *(undefined8 *)(pfVar35 + 2);
                    uVar57 = *(undefined8 *)pfVar35;
                    iVar30 = iVar30 + -4;
                    uVar61 = *(undefined8 *)pfVar21;
                    *(undefined8 *)(pfVar35 + 2) = *(undefined8 *)(pfVar21 + 2);
                    *(undefined8 *)pfVar35 = uVar61;
                    *(undefined8 *)(pfVar39 + 2) = uVar58;
                    *(undefined8 *)pfVar39 = uVar57;
                    uVar58 = *(undefined8 *)(pfVar35 + 6);
                    uVar57 = *(undefined8 *)(pfVar35 + 4);
                    uVar61 = *(undefined8 *)(pfVar21 + 4);
                    *(undefined8 *)(pfVar35 + 6) = *(undefined8 *)(pfVar21 + 6);
                    *(undefined8 *)(pfVar35 + 4) = uVar61;
                    *(undefined8 *)(pfVar39 + 6) = uVar58;
                    *(undefined8 *)(pfVar39 + 4) = uVar57;
                    uVar58 = *(undefined8 *)(pfVar35 + 10);
                    uVar57 = *(undefined8 *)(pfVar35 + 8);
                    uVar61 = *(undefined8 *)(pfVar21 + 8);
                    *(undefined8 *)(pfVar35 + 10) = *(undefined8 *)(pfVar21 + 10);
                    *(undefined8 *)(pfVar35 + 8) = uVar61;
                    *(undefined8 *)(pfVar39 + 10) = uVar58;
                    *(undefined8 *)(pfVar39 + 8) = uVar57;
                    uVar58 = *(undefined8 *)(pfVar35 + 0xe);
                    uVar57 = *(undefined8 *)(pfVar35 + 0xc);
                    pfVar15 = pfVar21 + 0xe;
                    uVar61 = *(undefined8 *)(pfVar21 + 0xc);
                    pfVar21 = pfVar21 + 0x10;
                    *(undefined8 *)(pfVar35 + 0xe) = *(undefined8 *)pfVar15;
                    *(undefined8 *)(pfVar35 + 0xc) = uVar61;
                    *(undefined8 *)(pfVar39 + 0xe) = uVar58;
                    *(undefined8 *)(pfVar39 + 0xc) = uVar57;
                    pfVar35 = pfVar35 + 0x10;
                    pfVar39 = pfVar39 + 0x10;
                    pfVar22 = pfVar21;
                    pfVar23 = pfVar35;
                    pfVar15 = pfVar39;
                  } while (iVar30 != 0);
                }
                if (uVar11 != 0) {
                  iVar30 = -uVar11;
                  pfVar21 = pfVar15;
                  pfVar39 = pfVar22;
                  do {
                    pfVar23 = pfVar35 + 4;
                    uVar58 = *(undefined8 *)(pfVar35 + 2);
                    uVar57 = *(undefined8 *)pfVar35;
                    bVar14 = iVar30 != -1;
                    iVar30 = iVar30 + 1;
                    pfVar22 = pfVar39 + 4;
                    uVar61 = *(undefined8 *)pfVar39;
                    *(undefined8 *)(pfVar35 + 2) = *(undefined8 *)(pfVar39 + 2);
                    *(undefined8 *)pfVar35 = uVar61;
                    pfVar15 = pfVar21 + 4;
                    *(undefined8 *)(pfVar21 + 2) = uVar58;
                    *(undefined8 *)pfVar21 = uVar57;
                    pfVar21 = pfVar15;
                    pfVar39 = pfVar22;
                    pfVar35 = pfVar23;
                  } while (bVar14);
                }
              }
              pfVar39 = pfVar15;
              pfVar21 = pfVar22;
              pfVar35 = pfVar23;
              if (uVar43 != 0) {
                fVar59 = *pfVar23;
                pfVar21 = pfVar22 + 1;
                pfVar35 = pfVar23 + 1;
                *pfVar23 = *pfVar22;
                pfVar39 = pfVar15 + 1;
                *pfVar15 = fVar59;
                if (1 < uVar43) {
                  fVar59 = pfVar23[1];
                  pfVar23[1] = pfVar22[1];
                  pfVar15[1] = fVar59;
                  if (uVar43 == 2) {
                    pfVar21 = pfVar22 + 2;
                    pfVar35 = pfVar23 + 2;
                    pfVar39 = pfVar15 + 2;
                  }
                  else {
                    fVar59 = pfVar23[2];
                    pfVar21 = pfVar22 + 3;
                    pfVar23[2] = pfVar22[2];
                    pfVar35 = pfVar23 + 3;
                    pfVar15[2] = fVar59;
                    pfVar39 = pfVar15 + 3;
                  }
                }
              }
              uVar10 = *(int *)(param_1 + 0xf8) + uVar32;
              uVar43 = *(uint *)(param_1 + 0xe8);
              *(uint *)(param_1 + 0xf8) = uVar10;
              if (uVar10 == uVar43) {
                pfVar35 = *(float **)(param_1 + 0xf0);
                uVar10 = 0;
                *(undefined4 *)(param_1 + 0xf8) = 0;
              }
              uVar38 = (ulong)uVar10;
              uVar19 = uVar19 - uVar32;
            } while (uVar19 != 0);
            uVar38 = (ulong)*(uint *)(param_1 + 0x110);
            pfVar35 = (float *)(*(long *)(param_1 + 0x108) + uVar38 * 4);
            uVar43 = *(uint *)(param_1 + 0x100);
            pfVar39 = pfVar33;
            pfVar21 = pfVar7;
            uVar19 = uVar18;
            do {
              uVar43 = uVar43 - (int)uVar38;
              uVar32 = uVar19;
              if (uVar43 <= uVar19) {
                uVar32 = uVar43;
              }
              uVar10 = uVar32 >> 2;
              uVar43 = uVar32 & 3;
              pfVar15 = pfVar39;
              pfVar22 = pfVar21;
              pfVar23 = pfVar35;
              if (uVar10 != 0) {
                uVar11 = uVar32 >> 2 & 3;
                pfVar23 = (float *)(ulong)uVar10;
                if (2 < uVar10 - 1) {
                  iVar30 = uVar10 - uVar11;
                  do {
                    uVar58 = *(undefined8 *)(pfVar35 + 2);
                    uVar57 = *(undefined8 *)pfVar35;
                    iVar30 = iVar30 + -4;
                    uVar61 = *(undefined8 *)pfVar21;
                    *(undefined8 *)(pfVar35 + 2) = *(undefined8 *)(pfVar21 + 2);
                    *(undefined8 *)pfVar35 = uVar61;
                    *(undefined8 *)(pfVar39 + 2) = uVar58;
                    *(undefined8 *)pfVar39 = uVar57;
                    uVar58 = *(undefined8 *)(pfVar35 + 6);
                    uVar57 = *(undefined8 *)(pfVar35 + 4);
                    uVar61 = *(undefined8 *)(pfVar21 + 4);
                    *(undefined8 *)(pfVar35 + 6) = *(undefined8 *)(pfVar21 + 6);
                    *(undefined8 *)(pfVar35 + 4) = uVar61;
                    *(undefined8 *)(pfVar39 + 6) = uVar58;
                    *(undefined8 *)(pfVar39 + 4) = uVar57;
                    uVar58 = *(undefined8 *)(pfVar35 + 10);
                    uVar57 = *(undefined8 *)(pfVar35 + 8);
                    uVar61 = *(undefined8 *)(pfVar21 + 8);
                    *(undefined8 *)(pfVar35 + 10) = *(undefined8 *)(pfVar21 + 10);
                    *(undefined8 *)(pfVar35 + 8) = uVar61;
                    *(undefined8 *)(pfVar39 + 10) = uVar58;
                    *(undefined8 *)(pfVar39 + 8) = uVar57;
                    uVar58 = *(undefined8 *)(pfVar35 + 0xe);
                    uVar57 = *(undefined8 *)(pfVar35 + 0xc);
                    pfVar15 = pfVar21 + 0xe;
                    uVar61 = *(undefined8 *)(pfVar21 + 0xc);
                    pfVar21 = pfVar21 + 0x10;
                    *(undefined8 *)(pfVar35 + 0xe) = *(undefined8 *)pfVar15;
                    *(undefined8 *)(pfVar35 + 0xc) = uVar61;
                    *(undefined8 *)(pfVar39 + 0xe) = uVar58;
                    *(undefined8 *)(pfVar39 + 0xc) = uVar57;
                    pfVar35 = pfVar35 + 0x10;
                    pfVar39 = pfVar39 + 0x10;
                    pfVar22 = pfVar21;
                    pfVar23 = pfVar35;
                    pfVar15 = pfVar39;
                  } while (iVar30 != 0);
                }
                if (uVar11 != 0) {
                  iVar30 = -uVar11;
                  pfVar21 = pfVar15;
                  pfVar39 = pfVar22;
                  do {
                    pfVar23 = pfVar35 + 4;
                    uVar58 = *(undefined8 *)(pfVar35 + 2);
                    uVar57 = *(undefined8 *)pfVar35;
                    bVar14 = iVar30 != -1;
                    iVar30 = iVar30 + 1;
                    pfVar22 = pfVar39 + 4;
                    uVar61 = *(undefined8 *)pfVar39;
                    *(undefined8 *)(pfVar35 + 2) = *(undefined8 *)(pfVar39 + 2);
                    *(undefined8 *)pfVar35 = uVar61;
                    pfVar15 = pfVar21 + 4;
                    *(undefined8 *)(pfVar21 + 2) = uVar58;
                    *(undefined8 *)pfVar21 = uVar57;
                    pfVar21 = pfVar15;
                    pfVar39 = pfVar22;
                    pfVar35 = pfVar23;
                  } while (bVar14);
                }
              }
              pfVar39 = pfVar15;
              pfVar21 = pfVar22;
              pfVar35 = pfVar23;
              if (uVar43 != 0) {
                fVar59 = *pfVar23;
                pfVar21 = pfVar22 + 1;
                pfVar35 = pfVar23 + 1;
                *pfVar23 = *pfVar22;
                pfVar39 = pfVar15 + 1;
                *pfVar15 = fVar59;
                if (1 < uVar43) {
                  fVar59 = pfVar23[1];
                  pfVar23[1] = pfVar22[1];
                  pfVar15[1] = fVar59;
                  if (uVar43 == 2) {
                    pfVar21 = pfVar22 + 2;
                    pfVar35 = pfVar23 + 2;
                    pfVar39 = pfVar15 + 2;
                  }
                  else {
                    fVar59 = pfVar23[2];
                    pfVar21 = pfVar22 + 3;
                    pfVar23[2] = pfVar22[2];
                    pfVar35 = pfVar23 + 3;
                    pfVar15[2] = fVar59;
                    pfVar39 = pfVar15 + 3;
                  }
                }
              }
              uVar10 = *(int *)(param_1 + 0x110) + uVar32;
              uVar43 = *(uint *)(param_1 + 0x100);
              *(uint *)(param_1 + 0x110) = uVar10;
              if (uVar10 == uVar43) {
                pfVar35 = *(float **)(param_1 + 0x108);
                uVar10 = 0;
                *(undefined4 *)(param_1 + 0x110) = 0;
              }
              uVar38 = (ulong)uVar10;
              uVar19 = uVar19 - uVar32;
            } while (uVar19 != 0);
          }
        }
        iVar30 = *(int *)(param_1 + 0x18);
        iVar31 = *(int *)(param_1 + 8);
        uVar43 = iVar31 - iVar30;
        pfVar21 = (float *)(*(long *)(param_1 + 0x10) + (ulong)(uint)(iVar30 << 1) * 4);
        if (uVar18 < uVar43) {
          if (uVar18 != 0) {
            pfVar35 = __dest;
            uVar43 = uVar18;
            if ((uVar18 & 1) != 0) {
              fVar59 = *__dest;
              fVar60 = *pfVar21;
              *pfVar21 = fVar59;
              uVar66 = (ulong)(uint)*(float *)(param_1 + 0x1c);
              fVar60 = fVar60 + (fVar59 - pfVar21[1]) * *(float *)(param_1 + 0x1c);
              pfVar21[1] = fVar60;
              pfVar21 = pfVar21 + 2;
              *__dest = fVar60;
              pfVar35 = pfVar4;
              uVar43 = uVar18 - 1;
            }
            if (uVar18 != 1) {
              do {
                fVar59 = *pfVar35;
                uVar43 = uVar43 - 2;
                fVar60 = *pfVar21;
                *pfVar21 = fVar59;
                fVar60 = fVar60 + (fVar59 - pfVar21[1]) * *(float *)(param_1 + 0x1c);
                pfVar21[1] = fVar60;
                *pfVar35 = fVar60;
                fVar59 = pfVar35[1];
                fVar60 = pfVar21[2];
                pfVar21[2] = fVar59;
                fVar60 = fVar60 + (fVar59 - pfVar21[3]) * *(float *)(param_1 + 0x1c);
                pfVar21[3] = fVar60;
                pfVar35[1] = fVar60;
                pfVar35 = pfVar35 + 2;
                pfVar21 = pfVar21 + 4;
              } while (uVar43 != 0);
            }
            iVar30 = *(int *)(param_1 + 0x18);
          }
          *(uint *)(param_1 + 0x18) = iVar30 + uVar18;
        }
        else {
          pfVar35 = __dest;
          uVar19 = uVar18;
          do {
            uVar32 = uVar19;
            if (uVar43 <= uVar19) {
              uVar32 = uVar43;
            }
            pfVar39 = pfVar35;
            if (uVar32 != 0) {
              if (uVar32 != 1) {
                iVar30 = (uVar32 & 1) - uVar32;
                pfVar39 = pfVar21;
                pfVar15 = pfVar35;
                do {
                  fVar59 = *pfVar15;
                  pfVar21 = pfVar39 + 4;
                  pfVar35 = pfVar15 + 2;
                  fVar60 = *pfVar39;
                  *pfVar39 = fVar59;
                  fVar60 = fVar60 + (fVar59 - pfVar39[1]) * *(float *)(param_1 + 0x1c);
                  pfVar39[1] = fVar60;
                  *pfVar15 = fVar60;
                  fVar59 = pfVar15[1];
                  fVar60 = pfVar39[2];
                  pfVar39[2] = fVar59;
                  fVar60 = fVar60 + (fVar59 - pfVar39[3]) * *(float *)(param_1 + 0x1c);
                  iVar30 = iVar30 + 2;
                  pfVar39[3] = fVar60;
                  pfVar15[1] = fVar60;
                  pfVar39 = pfVar21;
                  pfVar15 = pfVar35;
                } while (iVar30 != 0);
              }
              pfVar39 = pfVar35;
              if ((uVar32 & 1) != 0) {
                fVar59 = *pfVar35;
                fVar60 = *pfVar21;
                *pfVar21 = fVar59;
                fVar60 = fVar60 + (fVar59 - pfVar21[1]) * *(float *)(param_1 + 0x1c);
                pfVar21[1] = fVar60;
                pfVar21 = pfVar21 + 2;
                pfVar39 = pfVar35 + 1;
                *pfVar35 = fVar60;
              }
              iVar30 = *(int *)(param_1 + 0x18);
              iVar31 = *(int *)(param_1 + 8);
            }
            iVar30 = iVar30 + uVar32;
            *(int *)(param_1 + 0x18) = iVar30;
            if (iVar30 == iVar31) {
              pfVar21 = *(float **)(param_1 + 0x10);
              iVar30 = 0;
              *(undefined4 *)(param_1 + 0x18) = 0;
            }
            uVar19 = uVar19 - uVar32;
            uVar43 = iVar31 - iVar30;
            pfVar35 = pfVar39;
          } while (uVar19 != 0);
        }
        iVar30 = *(int *)(param_1 + 0x30);
        iVar31 = *(int *)(param_1 + 0x20);
        uVar43 = iVar31 - iVar30;
        pfVar21 = (float *)(*(long *)(param_1 + 0x28) + (ulong)(uint)(iVar30 << 1) * 4);
        if (uVar18 < uVar43) {
          if (uVar18 != 0) {
            pfVar35 = __dest;
            uVar43 = uVar18;
            if ((uVar18 & 1) != 0) {
              fVar59 = *__dest;
              fVar60 = *pfVar21;
              *pfVar21 = fVar59;
              uVar66 = (ulong)(uint)*(float *)(param_1 + 0x34);
              fVar60 = fVar60 + (fVar59 - pfVar21[1]) * *(float *)(param_1 + 0x34);
              pfVar21[1] = fVar60;
              pfVar21 = pfVar21 + 2;
              *__dest = fVar60;
              pfVar35 = pfVar4;
              uVar43 = uVar18 - 1;
            }
            if (uVar18 != 1) {
              do {
                fVar59 = *pfVar35;
                uVar43 = uVar43 - 2;
                fVar60 = *pfVar21;
                *pfVar21 = fVar59;
                fVar60 = fVar60 + (fVar59 - pfVar21[1]) * *(float *)(param_1 + 0x34);
                pfVar21[1] = fVar60;
                *pfVar35 = fVar60;
                fVar59 = pfVar35[1];
                fVar60 = pfVar21[2];
                pfVar21[2] = fVar59;
                fVar60 = fVar60 + (fVar59 - pfVar21[3]) * *(float *)(param_1 + 0x34);
                pfVar21[3] = fVar60;
                pfVar35[1] = fVar60;
                pfVar35 = pfVar35 + 2;
                pfVar21 = pfVar21 + 4;
              } while (uVar43 != 0);
            }
            iVar30 = *(int *)(param_1 + 0x30);
          }
          *(uint *)(param_1 + 0x30) = iVar30 + uVar18;
        }
        else {
          pfVar35 = __dest;
          uVar19 = uVar18;
          do {
            uVar32 = uVar19;
            if (uVar43 <= uVar19) {
              uVar32 = uVar43;
            }
            pfVar39 = pfVar35;
            if (uVar32 != 0) {
              if (uVar32 != 1) {
                iVar30 = (uVar32 & 1) - uVar32;
                pfVar39 = pfVar21;
                pfVar15 = pfVar35;
                do {
                  fVar59 = *pfVar15;
                  pfVar21 = pfVar39 + 4;
                  pfVar35 = pfVar15 + 2;
                  fVar60 = *pfVar39;
                  *pfVar39 = fVar59;
                  fVar60 = fVar60 + (fVar59 - pfVar39[1]) * *(float *)(param_1 + 0x34);
                  pfVar39[1] = fVar60;
                  *pfVar15 = fVar60;
                  fVar59 = pfVar15[1];
                  fVar60 = pfVar39[2];
                  pfVar39[2] = fVar59;
                  fVar60 = fVar60 + (fVar59 - pfVar39[3]) * *(float *)(param_1 + 0x34);
                  iVar30 = iVar30 + 2;
                  pfVar39[3] = fVar60;
                  pfVar15[1] = fVar60;
                  pfVar39 = pfVar21;
                  pfVar15 = pfVar35;
                } while (iVar30 != 0);
              }
              pfVar39 = pfVar35;
              if ((uVar32 & 1) != 0) {
                fVar59 = *pfVar35;
                fVar60 = *pfVar21;
                *pfVar21 = fVar59;
                fVar60 = fVar60 + (fVar59 - pfVar21[1]) * *(float *)(param_1 + 0x34);
                pfVar21[1] = fVar60;
                pfVar21 = pfVar21 + 2;
                pfVar39 = pfVar35 + 1;
                *pfVar35 = fVar60;
              }
              iVar30 = *(int *)(param_1 + 0x30);
              iVar31 = *(int *)(param_1 + 0x20);
            }
            iVar30 = iVar30 + uVar32;
            *(int *)(param_1 + 0x30) = iVar30;
            if (iVar30 == iVar31) {
              pfVar21 = *(float **)(param_1 + 0x28);
              iVar30 = 0;
              *(undefined4 *)(param_1 + 0x30) = 0;
            }
            uVar19 = uVar19 - uVar32;
            uVar43 = iVar31 - iVar30;
            pfVar35 = pfVar39;
          } while (uVar19 != 0);
        }
        iVar30 = *(int *)(param_1 + 0x48);
        iVar31 = *(int *)(param_1 + 0x38);
        uVar43 = iVar31 - iVar30;
        pfVar21 = (float *)(*(long *)(param_1 + 0x40) + (ulong)(uint)(iVar30 << 1) * 4);
        if (uVar18 < uVar43) {
          if (uVar18 != 0) {
            pfVar35 = __dest;
            uVar43 = uVar18;
            if ((uVar18 & 1) != 0) {
              fVar59 = *__dest;
              fVar60 = *pfVar21;
              *pfVar21 = fVar59;
              uVar66 = (ulong)(uint)*(float *)(param_1 + 0x4c);
              fVar60 = fVar60 + (fVar59 - pfVar21[1]) * *(float *)(param_1 + 0x4c);
              pfVar21[1] = fVar60;
              pfVar21 = pfVar21 + 2;
              *__dest = fVar60;
              pfVar35 = pfVar4;
              uVar43 = uVar18 - 1;
            }
            if (uVar18 != 1) {
              do {
                fVar59 = *pfVar35;
                uVar43 = uVar43 - 2;
                fVar60 = *pfVar21;
                *pfVar21 = fVar59;
                fVar60 = fVar60 + (fVar59 - pfVar21[1]) * *(float *)(param_1 + 0x4c);
                pfVar21[1] = fVar60;
                *pfVar35 = fVar60;
                fVar59 = pfVar35[1];
                fVar60 = pfVar21[2];
                pfVar21[2] = fVar59;
                fVar60 = fVar60 + (fVar59 - pfVar21[3]) * *(float *)(param_1 + 0x4c);
                pfVar21[3] = fVar60;
                pfVar35[1] = fVar60;
                pfVar35 = pfVar35 + 2;
                pfVar21 = pfVar21 + 4;
              } while (uVar43 != 0);
            }
            iVar30 = *(int *)(param_1 + 0x48);
          }
          *(uint *)(param_1 + 0x48) = iVar30 + uVar18;
        }
        else {
          pfVar35 = __dest;
          uVar19 = uVar18;
          do {
            uVar32 = uVar19;
            if (uVar43 <= uVar19) {
              uVar32 = uVar43;
            }
            pfVar39 = pfVar35;
            if (uVar32 != 0) {
              if (uVar32 != 1) {
                iVar30 = (uVar32 & 1) - uVar32;
                pfVar39 = pfVar21;
                pfVar15 = pfVar35;
                do {
                  fVar59 = *pfVar15;
                  pfVar21 = pfVar39 + 4;
                  pfVar35 = pfVar15 + 2;
                  fVar60 = *pfVar39;
                  *pfVar39 = fVar59;
                  fVar60 = fVar60 + (fVar59 - pfVar39[1]) * *(float *)(param_1 + 0x4c);
                  pfVar39[1] = fVar60;
                  *pfVar15 = fVar60;
                  fVar59 = pfVar15[1];
                  fVar60 = pfVar39[2];
                  pfVar39[2] = fVar59;
                  fVar60 = fVar60 + (fVar59 - pfVar39[3]) * *(float *)(param_1 + 0x4c);
                  iVar30 = iVar30 + 2;
                  pfVar39[3] = fVar60;
                  pfVar15[1] = fVar60;
                  pfVar39 = pfVar21;
                  pfVar15 = pfVar35;
                } while (iVar30 != 0);
              }
              pfVar39 = pfVar35;
              if ((uVar32 & 1) != 0) {
                fVar59 = *pfVar35;
                fVar60 = *pfVar21;
                *pfVar21 = fVar59;
                fVar60 = fVar60 + (fVar59 - pfVar21[1]) * *(float *)(param_1 + 0x4c);
                pfVar21[1] = fVar60;
                pfVar21 = pfVar21 + 2;
                pfVar39 = pfVar35 + 1;
                *pfVar35 = fVar60;
              }
              iVar30 = *(int *)(param_1 + 0x48);
              iVar31 = *(int *)(param_1 + 0x38);
            }
            iVar30 = iVar30 + uVar32;
            *(int *)(param_1 + 0x48) = iVar30;
            if (iVar30 == iVar31) {
              pfVar21 = *(float **)(param_1 + 0x40);
              iVar30 = 0;
              *(undefined4 *)(param_1 + 0x48) = 0;
            }
            uVar19 = uVar19 - uVar32;
            uVar43 = iVar31 - iVar30;
            pfVar35 = pfVar39;
          } while (uVar19 != 0);
        }
        iVar30 = *(int *)(param_1 + 0x60);
        iVar31 = *(int *)(param_1 + 0x50);
        uVar43 = iVar31 - iVar30;
        pfVar21 = (float *)(*(long *)(param_1 + 0x58) + (ulong)(uint)(iVar30 << 1) * 4);
        if (uVar18 < uVar43) {
          if (uVar18 != 0) {
            pfVar35 = __dest;
            uVar43 = uVar18;
            if ((uVar18 & 1) != 0) {
              fVar59 = *__dest;
              fVar60 = *pfVar21;
              *pfVar21 = fVar59;
              uVar66 = (ulong)(uint)*(float *)(param_1 + 100);
              fVar60 = fVar60 + (fVar59 - pfVar21[1]) * *(float *)(param_1 + 100);
              pfVar21[1] = fVar60;
              pfVar21 = pfVar21 + 2;
              *__dest = fVar60;
              pfVar35 = pfVar4;
              uVar43 = uVar18 - 1;
            }
            if (uVar18 != 1) {
              do {
                fVar59 = *pfVar35;
                uVar43 = uVar43 - 2;
                fVar60 = *pfVar21;
                *pfVar21 = fVar59;
                fVar60 = fVar60 + (fVar59 - pfVar21[1]) * *(float *)(param_1 + 100);
                pfVar21[1] = fVar60;
                *pfVar35 = fVar60;
                fVar59 = pfVar35[1];
                fVar60 = pfVar21[2];
                pfVar21[2] = fVar59;
                fVar60 = fVar60 + (fVar59 - pfVar21[3]) * *(float *)(param_1 + 100);
                pfVar21[3] = fVar60;
                pfVar35[1] = fVar60;
                pfVar35 = pfVar35 + 2;
                pfVar21 = pfVar21 + 4;
              } while (uVar43 != 0);
            }
            iVar30 = *(int *)(param_1 + 0x60);
          }
          *(uint *)(param_1 + 0x60) = iVar30 + uVar18;
        }
        else {
          pfVar35 = __dest;
          uVar19 = uVar18;
          do {
            uVar32 = uVar19;
            if (uVar43 <= uVar19) {
              uVar32 = uVar43;
            }
            pfVar39 = pfVar35;
            if (uVar32 != 0) {
              if (uVar32 != 1) {
                iVar30 = (uVar32 & 1) - uVar32;
                pfVar39 = pfVar21;
                pfVar15 = pfVar35;
                do {
                  fVar59 = *pfVar15;
                  pfVar21 = pfVar39 + 4;
                  pfVar35 = pfVar15 + 2;
                  fVar60 = *pfVar39;
                  *pfVar39 = fVar59;
                  fVar60 = fVar60 + (fVar59 - pfVar39[1]) * *(float *)(param_1 + 100);
                  pfVar39[1] = fVar60;
                  *pfVar15 = fVar60;
                  fVar59 = pfVar15[1];
                  fVar60 = pfVar39[2];
                  pfVar39[2] = fVar59;
                  fVar60 = fVar60 + (fVar59 - pfVar39[3]) * *(float *)(param_1 + 100);
                  iVar30 = iVar30 + 2;
                  pfVar39[3] = fVar60;
                  pfVar15[1] = fVar60;
                  pfVar39 = pfVar21;
                  pfVar15 = pfVar35;
                } while (iVar30 != 0);
              }
              pfVar39 = pfVar35;
              if ((uVar32 & 1) != 0) {
                fVar59 = *pfVar35;
                fVar60 = *pfVar21;
                *pfVar21 = fVar59;
                fVar60 = fVar60 + (fVar59 - pfVar21[1]) * *(float *)(param_1 + 100);
                pfVar21[1] = fVar60;
                pfVar21 = pfVar21 + 2;
                pfVar39 = pfVar35 + 1;
                *pfVar35 = fVar60;
              }
              iVar30 = *(int *)(param_1 + 0x60);
              iVar31 = *(int *)(param_1 + 0x50);
            }
            iVar30 = iVar30 + uVar32;
            *(int *)(param_1 + 0x60) = iVar30;
            if (iVar30 == iVar31) {
              pfVar21 = *(float **)(param_1 + 0x58);
              iVar30 = 0;
              *(undefined4 *)(param_1 + 0x60) = 0;
            }
            uVar19 = uVar19 - uVar32;
            uVar43 = iVar31 - iVar30;
            pfVar35 = pfVar39;
          } while (uVar19 != 0);
        }
        FUN_02e1d0ac(param_1,__dest,uVar18);
        memset(__s,0,0x1800);
        fVar59 = (float)uVar66;
        if (*(int *)(param_1 + 0x128) != 0) {
          uVar38 = 0;
          lVar42 = *(long *)(param_1 + 0x140);
          do {
            if (uVar18 != 0) {
              lVar25 = lVar42 + uVar38 * 0xa8;
              plVar5 = (long *)(lVar25 + 0x98);
              puVar26 = (uint *)(lVar25 + 0xa0);
              uVar44 = (ulong)*puVar26;
              puVar27 = (uint *)(lVar42 + uVar38 * 0xa8 + 0x90);
              uVar43 = *puVar27;
              pfVar35 = __dest;
              pfVar21 = (float *)(*plVar5 + uVar44 * 4);
              uVar19 = uVar18;
              do {
                uVar43 = uVar43 - (int)uVar44;
                uVar32 = uVar19;
                if (uVar43 <= uVar19) {
                  uVar32 = uVar43;
                }
                uVar10 = uVar32 >> 2;
                uVar43 = uVar32 & 3;
                if (uVar10 == 0) {
                  pfVar39 = pfVar21;
                  pfVar15 = pfVar35;
                  if (uVar43 != 0) goto LAB_02e15600;
                }
                else {
                  uVar11 = uVar32 >> 2 & 3;
                  pfVar22 = (float *)(ulong)uVar10;
                  pfVar39 = pfVar21;
                  pfVar23 = (float *)(ulong)(uVar10 - 1);
                  pfVar15 = pfVar35;
                  if (2 < uVar10 - 1) {
                    iVar30 = uVar10 - uVar11;
                    do {
                      uVar58 = *(undefined8 *)(pfVar21 + 2);
                      uVar57 = *(undefined8 *)pfVar21;
                      iVar30 = iVar30 + -4;
                      uVar61 = *(undefined8 *)pfVar35;
                      *(undefined8 *)(pfVar21 + 2) = *(undefined8 *)(pfVar35 + 2);
                      *(undefined8 *)pfVar21 = uVar61;
                      *(undefined8 *)(pfVar35 + 2) = uVar58;
                      *(undefined8 *)pfVar35 = uVar57;
                      uVar58 = *(undefined8 *)(pfVar21 + 6);
                      uVar57 = *(undefined8 *)(pfVar21 + 4);
                      uVar61 = *(undefined8 *)(pfVar35 + 4);
                      *(undefined8 *)(pfVar21 + 6) = *(undefined8 *)(pfVar35 + 6);
                      *(undefined8 *)(pfVar21 + 4) = uVar61;
                      *(undefined8 *)(pfVar35 + 6) = uVar58;
                      *(undefined8 *)(pfVar35 + 4) = uVar57;
                      uVar58 = *(undefined8 *)(pfVar21 + 10);
                      uVar57 = *(undefined8 *)(pfVar21 + 8);
                      uVar61 = *(undefined8 *)(pfVar35 + 8);
                      *(undefined8 *)(pfVar21 + 10) = *(undefined8 *)(pfVar35 + 10);
                      *(undefined8 *)(pfVar21 + 8) = uVar61;
                      *(undefined8 *)(pfVar35 + 10) = uVar58;
                      *(undefined8 *)(pfVar35 + 8) = uVar57;
                      uVar58 = *(undefined8 *)(pfVar21 + 0xe);
                      uVar57 = *(undefined8 *)(pfVar21 + 0xc);
                      uVar61 = *(undefined8 *)(pfVar35 + 0xc);
                      *(undefined8 *)(pfVar21 + 0xe) = *(undefined8 *)(pfVar35 + 0xe);
                      *(undefined8 *)(pfVar21 + 0xc) = uVar61;
                      *(undefined8 *)(pfVar35 + 0xe) = uVar58;
                      *(undefined8 *)(pfVar35 + 0xc) = uVar57;
                      pfVar21 = pfVar21 + 0x10;
                      pfVar35 = pfVar35 + 0x10;
                      pfVar22 = pfVar21;
                      pfVar39 = pfVar21;
                      pfVar23 = pfVar35;
                      pfVar15 = pfVar35;
                    } while (iVar30 != 0);
                  }
                  pfVar35 = pfVar23;
                  pfVar21 = pfVar22;
                  if (uVar11 != 0) {
                    iVar30 = -uVar11;
                    do {
                      pfVar21 = pfVar39 + 4;
                      uVar58 = *(undefined8 *)(pfVar39 + 2);
                      uVar57 = *(undefined8 *)pfVar39;
                      bVar14 = iVar30 != -1;
                      iVar30 = iVar30 + 1;
                      pfVar35 = pfVar15 + 4;
                      uVar61 = *(undefined8 *)pfVar15;
                      *(undefined8 *)(pfVar39 + 2) = *(undefined8 *)(pfVar15 + 2);
                      *(undefined8 *)pfVar39 = uVar61;
                      *(undefined8 *)(pfVar15 + 2) = uVar58;
                      *(undefined8 *)pfVar15 = uVar57;
                      pfVar39 = pfVar21;
                      pfVar15 = pfVar35;
                    } while (bVar14);
                  }
                  pfVar39 = pfVar21;
                  pfVar15 = pfVar35;
                  if (uVar43 != 0) {
LAB_02e15600:
                    fVar59 = *pfVar21;
                    pfVar39 = pfVar21 + 1;
                    *pfVar21 = *pfVar15;
                    pfVar35 = pfVar15 + 1;
                    *pfVar15 = fVar59;
                    if (1 < uVar43) {
                      fVar59 = pfVar21[1];
                      pfVar21[1] = pfVar15[1];
                      pfVar15[1] = fVar59;
                      if (uVar43 == 2) {
                        pfVar39 = pfVar21 + 2;
                        pfVar35 = pfVar15 + 2;
                      }
                      else {
                        fVar59 = pfVar21[2];
                        pfVar21[2] = pfVar15[2];
                        pfVar39 = pfVar21 + 3;
                        pfVar35 = pfVar15 + 3;
                        pfVar15[2] = fVar59;
                      }
                    }
                  }
                }
                uVar10 = *puVar26 + uVar32;
                uVar44 = (ulong)uVar10;
                *puVar26 = uVar10;
                uVar43 = *puVar27;
                if (uVar10 == uVar43) {
                  pfVar39 = (float *)*plVar5;
                  uVar44 = 0;
                  *puVar26 = 0;
                }
                uVar19 = uVar19 - uVar32;
                pfVar21 = pfVar39;
              } while (uVar19 != 0);
              lVar42 = *(long *)(param_1 + 0x140);
            }
            uVar43 = (uint)uVar38;
            FUN_02e1ead4(lVar42 + uVar38 * 0xa8,__dest,local_c8[uVar43 & 1],local_c8[uVar43 & 1 | 2]
                         ,local_c8[uVar43 & 1 | 4],uVar18);
            fVar59 = (float)uVar66;
            uVar38 = uVar38 + 1;
            if (*(uint *)(param_1 + 0x128) <= uVar38) break;
            lVar42 = *(long *)(param_1 + 0x140);
          } while( true );
        }
        pfVar35 = local_c8[3];
        pfVar21 = local_c8[2];
        fVar65 = *(float *)(param_1 + 0x124) * 1.4142135;
        fVar63 = *(float *)(param_1 + 0x70);
        fVar60 = *(float *)(param_1 + 0x74);
        if (uVar18 == 0) {
          fVar59 = fVar60;
        }
        else {
          fVar47 = *(float *)(param_1 + 0x78);
          pfVar39 = (float *)((long)__s + uVar20);
          if ((float *)((long)__s + uVar20) <= pfVar2) {
            pfVar39 = pfVar2;
          }
          uVar66 = (long)pfVar39 + (-0x801 - (long)__src);
          if (((uint)uVar66 >> 2 & 1) == 0) {
            fVar59 = *__s;
            fVar60 = (fVar59 * fVar65 - fVar63) + fVar60 * fVar47;
            *__s = fVar60;
            pfVar39 = pfVar2;
            fVar63 = fVar59 * fVar65;
            fVar59 = fVar60;
          }
          else {
            pfVar39 = __s;
          }
          if (3 < uVar66) {
            do {
              fVar59 = (*pfVar39 * fVar65 - fVar63) + fVar60 * fVar47;
              fVar63 = pfVar39[1] * fVar65;
              fVar60 = (fVar63 - *pfVar39 * fVar65) + fVar59 * fVar47;
              pfVar15 = pfVar39 + 2;
              *pfVar39 = fVar59;
              pfVar39[1] = fVar60;
              pfVar39 = pfVar15;
              fVar59 = fVar60;
            } while (pfVar15 < __s + uVar18);
          }
        }
        *(float *)(param_1 + 0x70) = fVar63;
        fVar63 = *(float *)(param_1 + 0x7c);
        fVar60 = *(float *)(param_1 + 0x80);
        *(float *)(param_1 + 0x74) = fVar59;
        if (uVar18 != 0) {
          fVar47 = *(float *)(param_1 + 0x84);
          pfVar39 = (float *)((long)pfVar1 + uVar20);
          if ((float *)((long)pfVar1 + uVar20) <= pfVar3) {
            pfVar39 = pfVar3;
          }
          uVar66 = (long)pfVar39 + (-0xc01 - (long)__src);
          pfVar39 = pfVar1;
          fVar48 = fVar60;
          if (((uint)uVar66 >> 2 & 1) == 0) {
            fVar59 = *pfVar1;
            fVar48 = (fVar59 * fVar65 - fVar63) + fVar60 * fVar47;
            *pfVar1 = fVar48;
            pfVar39 = pfVar3;
            fVar63 = fVar59 * fVar65;
            fVar59 = fVar48;
          }
          fVar60 = fVar59;
          if (3 < uVar66) {
            do {
              fVar59 = *pfVar39;
              fVar60 = (fVar59 * fVar65 - fVar63) + fVar48 * fVar47;
              fVar63 = pfVar39[1] * fVar65;
              *pfVar39 = fVar60;
              fVar48 = (fVar63 - fVar59 * fVar65) + fVar60 * fVar47;
              pfVar39[1] = fVar48;
              pfVar39 = pfVar39 + 2;
              fVar60 = fVar48;
            } while (pfVar39 < pfVar1 + uVar18);
          }
        }
        *(float *)(param_1 + 0x7c) = fVar63;
        fVar63 = *(float *)(param_1 + 0x88);
        fVar59 = *(float *)(param_1 + 0x8c);
        *(float *)(param_1 + 0x80) = fVar60;
        if (uVar18 != 0) {
          pfVar39 = local_c8[2] + uVar18;
          fVar47 = *(float *)(param_1 + 0x90);
          pfVar15 = pfVar39;
          if (pfVar39 <= local_c8[2] + 1) {
            pfVar15 = local_c8[2] + 1;
          }
          fVar48 = fVar59;
          pfVar22 = local_c8[2];
          if (((uint)(~(ulong)local_c8[2] + (long)pfVar15) >> 2 & 1) == 0) {
            fVar60 = *local_c8[2];
            fVar48 = (fVar60 * fVar65 - fVar63) + fVar59 * fVar47;
            *local_c8[2] = fVar48;
            fVar63 = fVar60 * fVar65;
            fVar60 = fVar48;
            pfVar22 = local_c8[2] + 1;
          }
          fVar59 = fVar60;
          if (3 < ~(ulong)local_c8[2] + (long)pfVar15) {
            do {
              fVar59 = *pfVar22;
              fVar60 = (fVar59 * fVar65 - fVar63) + fVar48 * fVar47;
              fVar63 = pfVar22[1] * fVar65;
              *pfVar22 = fVar60;
              fVar48 = (fVar63 - fVar59 * fVar65) + fVar60 * fVar47;
              pfVar22[1] = fVar48;
              pfVar22 = pfVar22 + 2;
              fVar59 = fVar48;
            } while (pfVar22 < pfVar39);
          }
        }
        *(float *)(param_1 + 0x88) = fVar63;
        fVar63 = *(float *)(param_1 + 0x94);
        fVar60 = *(float *)(param_1 + 0x98);
        *(float *)(param_1 + 0x8c) = fVar59;
        if (uVar18 != 0) {
          pfVar39 = local_c8[3] + uVar18;
          fVar47 = *(float *)(param_1 + 0x9c);
          pfVar15 = pfVar39;
          if (pfVar39 <= local_c8[3] + 1) {
            pfVar15 = local_c8[3] + 1;
          }
          fVar48 = fVar60;
          pfVar22 = local_c8[3];
          if (((uint)(~(ulong)local_c8[3] + (long)pfVar15) >> 2 & 1) == 0) {
            fVar59 = *local_c8[3];
            fVar48 = (fVar59 * fVar65 - fVar63) + fVar60 * fVar47;
            *local_c8[3] = fVar48;
            fVar63 = fVar59 * fVar65;
            fVar59 = fVar48;
            pfVar22 = local_c8[3] + 1;
          }
          fVar60 = fVar59;
          if (3 < ~(ulong)local_c8[3] + (long)pfVar15) {
            do {
              fVar59 = *pfVar22;
              fVar60 = (fVar59 * fVar65 - fVar63) + fVar48 * fVar47;
              fVar63 = pfVar22[1] * fVar65;
              *pfVar22 = fVar60;
              fVar48 = (fVar63 - fVar59 * fVar65) + fVar60 * fVar47;
              pfVar22[1] = fVar48;
              pfVar22 = pfVar22 + 2;
              fVar60 = fVar48;
            } while (pfVar22 < pfVar39);
          }
        }
        *(float *)(param_1 + 0x94) = fVar63;
        fVar63 = *(float *)(param_1 + 0xa0);
        fVar59 = *(float *)(param_1 + 0xa4);
        *(float *)(param_1 + 0x98) = fVar60;
        if (uVar18 != 0) {
          pfVar39 = local_a8 + uVar18;
          fVar47 = *(float *)(param_1 + 0xa8);
          pfVar15 = pfVar39;
          if (pfVar39 <= local_a8 + 1) {
            pfVar15 = local_a8 + 1;
          }
          fVar48 = fVar59;
          pfVar22 = local_a8;
          if (((uint)(~(ulong)local_a8 + (long)pfVar15) >> 2 & 1) == 0) {
            fVar60 = *local_a8;
            fVar48 = (fVar60 * fVar65 - fVar63) + fVar59 * fVar47;
            *local_a8 = fVar48;
            fVar63 = fVar60 * fVar65;
            fVar60 = fVar48;
            pfVar22 = local_a8 + 1;
          }
          fVar59 = fVar60;
          if (3 < ~(ulong)local_a8 + (long)pfVar15) {
            do {
              fVar59 = *pfVar22;
              fVar60 = (fVar59 * fVar65 - fVar63) + fVar48 * fVar47;
              fVar63 = pfVar22[1] * fVar65;
              *pfVar22 = fVar60;
              fVar48 = (fVar63 - fVar59 * fVar65) + fVar60 * fVar47;
              pfVar22[1] = fVar48;
              pfVar22 = pfVar22 + 2;
              fVar59 = fVar48;
            } while (pfVar22 < pfVar39);
          }
        }
        *(float *)(param_1 + 0xa0) = fVar63;
        fVar63 = *(float *)(param_1 + 0xac);
        fVar60 = *(float *)(param_1 + 0xb0);
        *(float *)(param_1 + 0xa4) = fVar59;
        if (uVar18 != 0) {
          pfVar39 = local_a0 + uVar18;
          fVar47 = *(float *)(param_1 + 0xb4);
          pfVar15 = pfVar39;
          if (pfVar39 <= local_a0 + 1) {
            pfVar15 = local_a0 + 1;
          }
          fVar48 = fVar60;
          pfVar22 = local_a0;
          if (((uint)(~(ulong)local_a0 + (long)pfVar15) >> 2 & 1) == 0) {
            fVar59 = *local_a0;
            fVar48 = (fVar59 * fVar65 - fVar63) + fVar60 * fVar47;
            *local_a0 = fVar48;
            fVar63 = fVar59 * fVar65;
            fVar59 = fVar48;
            pfVar22 = local_a0 + 1;
          }
          fVar60 = fVar59;
          if (3 < ~(ulong)local_a0 + (long)pfVar15) {
            do {
              fVar59 = *pfVar22;
              fVar60 = (fVar59 * fVar65 - fVar63) + fVar48 * fVar47;
              fVar63 = pfVar22[1] * fVar65;
              *pfVar22 = fVar60;
              fVar48 = (fVar63 - fVar59 * fVar65) + fVar60 * fVar47;
              pfVar22[1] = fVar48;
              pfVar22 = pfVar22 + 2;
              fVar60 = fVar48;
            } while (pfVar22 < pfVar39);
          }
        }
        lVar42 = *(long *)(param_1 + 0x158);
        *(float *)(param_1 + 0xac) = fVar63;
        *(float *)(param_1 + 0xb0) = fVar60;
        uVar38 = (ulong)uVar16;
        fVar63 = *(float *)(param_1 + 0x1b4) * *(float *)(param_1 + 0x19c);
        fVar48 = *(float *)(lVar42 + 0x54) * *(float *)(lVar42 + 0x3c);
        fVar60 = fVar63 * fVar56;
        fVar63 = fVar63 * fVar62;
        fVar47 = fVar48 * fVar82;
        fVar48 = fVar48 * fVar64;
        fVar59 = *(float *)(param_1 + 0x1ac);
        fVar65 = *(float *)(lVar42 + 0x4c);
        lVar42 = *param_2;
        pfVar39 = (float *)(lVar42 + (ulong)uVar16 * 4);
        bVar14 = false;
        if ((fVar48 == fVar63) && (bVar14 = false, !NAN(fVar65) && !NAN(fVar59))) {
          bVar14 = fVar65 == fVar59;
        }
        bVar13 = false;
        if ((bVar14) && (bVar13 = false, !NAN(fVar47) && !NAN(fVar60))) {
          bVar13 = fVar47 == fVar60;
        }
        if (bVar13) {
          if (uVar18 != 0) {
            uVar66 = lVar42 + uVar38 * 4;
            pfVar15 = (float *)(uVar66 + 0x10);
            pfVar22 = pfVar39 + uVar18;
            pfVar23 = pfVar22;
            if (pfVar22 <= pfVar15) {
              pfVar23 = pfVar15;
            }
            uVar66 = ~uVar66 + (long)pfVar23;
            pfVar23 = __s;
            pfVar15 = pfVar1;
            pfVar24 = pfVar39;
            if (((uint)uVar66 >> 4 & 1) == 0) {
              uVar57 = *(undefined8 *)__s;
              uVar58 = *(undefined8 *)pfVar1;
              *(ulong *)(pfVar39 + 2) =
                   CONCAT44((float)((ulong)*(undefined8 *)(pfVar39 + 2) >> 0x20) * fVar59 +
                            fVar60 * (float)((ulong)*(undefined8 *)(__src + 0x202) >> 0x20) +
                            fVar63 * (float)((ulong)*(undefined8 *)(__src + 0x302) >> 0x20),
                            (float)*(undefined8 *)(pfVar39 + 2) * fVar59 +
                            fVar60 * (float)*(undefined8 *)(__src + 0x202) +
                            fVar63 * (float)*(undefined8 *)(__src + 0x302));
              *(ulong *)pfVar39 =
                   CONCAT44((float)((ulong)*(undefined8 *)pfVar39 >> 0x20) * fVar59 +
                            fVar60 * (float)((ulong)uVar57 >> 0x20) +
                            fVar63 * (float)((ulong)uVar58 >> 0x20),
                            (float)*(undefined8 *)pfVar39 * fVar59 + fVar60 * (float)uVar57 +
                            fVar63 * (float)uVar58);
              pfVar23 = __src + 0x204;
              pfVar15 = __src + 0x304;
              pfVar24 = pfVar39 + 4;
            }
            if (0xf < uVar66) {
              do {
                uVar57 = *(undefined8 *)pfVar23;
                uVar58 = *(undefined8 *)pfVar15;
                *(ulong *)(pfVar24 + 2) =
                     CONCAT44((float)((ulong)*(undefined8 *)(pfVar24 + 2) >> 0x20) * fVar59 +
                              fVar60 * (float)((ulong)*(undefined8 *)(pfVar23 + 2) >> 0x20) +
                              fVar63 * (float)((ulong)*(undefined8 *)(pfVar15 + 2) >> 0x20),
                              (float)*(undefined8 *)(pfVar24 + 2) * fVar59 +
                              fVar60 * (float)*(undefined8 *)(pfVar23 + 2) +
                              fVar63 * (float)*(undefined8 *)(pfVar15 + 2));
                *(ulong *)pfVar24 =
                     CONCAT44((float)((ulong)*(undefined8 *)pfVar24 >> 0x20) * fVar59 +
                              fVar60 * (float)((ulong)uVar57 >> 0x20) +
                              fVar63 * (float)((ulong)uVar58 >> 0x20),
                              (float)*(undefined8 *)pfVar24 * fVar59 + fVar60 * (float)uVar57 +
                              fVar63 * (float)uVar58);
                pfVar45 = pfVar23 + 6;
                uVar57 = *(undefined8 *)(pfVar23 + 4);
                pfVar12 = pfVar15 + 6;
                uVar58 = *(undefined8 *)(pfVar15 + 4);
                pfVar15 = pfVar15 + 8;
                pfVar23 = pfVar23 + 8;
                *(ulong *)(pfVar24 + 6) =
                     CONCAT44((float)((ulong)*(undefined8 *)(pfVar24 + 6) >> 0x20) * fVar59 +
                              fVar60 * (float)((ulong)*(undefined8 *)pfVar45 >> 0x20) +
                              fVar63 * (float)((ulong)*(undefined8 *)pfVar12 >> 0x20),
                              (float)*(undefined8 *)(pfVar24 + 6) * fVar59 +
                              fVar60 * (float)*(undefined8 *)pfVar45 +
                              fVar63 * (float)*(undefined8 *)pfVar12);
                *(ulong *)(pfVar24 + 4) =
                     CONCAT44((float)((ulong)*(undefined8 *)(pfVar24 + 4) >> 0x20) * fVar59 +
                              fVar60 * (float)((ulong)uVar57 >> 0x20) +
                              fVar63 * (float)((ulong)uVar58 >> 0x20),
                              (float)*(undefined8 *)(pfVar24 + 4) * fVar59 + fVar60 * (float)uVar57
                              + fVar63 * (float)uVar58);
                pfVar24 = pfVar24 + 8;
              } while (pfVar24 < pfVar22);
            }
          }
        }
        else if (uVar18 != 0) {
          fVar49 = 1.0 / (float)uVar18;
          fVar65 = fVar65 - fVar59;
          fVar47 = fVar47 - fVar60;
          fVar48 = fVar48 - fVar63;
          pfVar22 = pfVar39;
          pfVar15 = __s;
          do {
            fVar52 = *pfVar22 * fVar59;
            fVar50 = fVar60 * *pfVar15;
            pfVar23 = pfVar15 + 0x100;
            pfVar15 = pfVar15 + 1;
            fVar51 = fVar63 * *pfVar23;
            fVar59 = fVar59 + fVar65 * fVar49;
            fVar60 = fVar60 + fVar47 * fVar49;
            fVar63 = fVar63 + fVar48 * fVar49;
            pfVar23 = pfVar22 + 1;
            *pfVar22 = fVar52 + fVar50 + fVar51;
            pfVar22 = pfVar23;
          } while (pfVar23 < pfVar39 + uVar18);
        }
        if (*(char *)(param_1 + 0x138) != '\0') {
          fVar60 = *(float *)(param_1 + 0x1b0) * *(float *)(param_1 + 0x19c);
          fVar65 = *(float *)(*(long *)(param_1 + 0x158) + 0x50) *
                   *(float *)(*(long *)(param_1 + 0x158) + 0x3c);
          fVar59 = fVar60 * fVar56;
          fVar60 = fVar60 * fVar62;
          fVar63 = fVar65 * fVar82;
          fVar65 = fVar65 * fVar64;
          bVar14 = false;
          if ((fVar63 == fVar59) && (bVar14 = false, !NAN(fVar65) && !NAN(fVar60))) {
            bVar14 = fVar65 == fVar60;
          }
          if (bVar14) {
            if (uVar18 != 0) {
              uVar66 = lVar42 + uVar38 * 4;
              pfVar15 = (float *)(uVar66 + 0x10);
              pfVar22 = pfVar39 + uVar18;
              pfVar23 = pfVar22;
              if (pfVar22 <= pfVar15) {
                pfVar23 = pfVar15;
              }
              uVar66 = ~uVar66 + (long)pfVar23;
              pfVar23 = pfVar8;
              pfVar15 = pfVar7;
              if (((uint)uVar66 >> 4 & 1) == 0) {
                uVar57 = *(undefined8 *)pfVar8;
                uVar58 = *(undefined8 *)pfVar7;
                *(ulong *)(pfVar39 + 2) =
                     CONCAT44((float)((ulong)*(undefined8 *)(pfVar39 + 2) >> 0x20) +
                              fVar59 * (float)((ulong)*(undefined8 *)(pfVar8 + 2) >> 0x20) +
                              fVar60 * (float)((ulong)*(undefined8 *)(pfVar7 + 2) >> 0x20),
                              (float)*(undefined8 *)(pfVar39 + 2) +
                              fVar59 * (float)*(undefined8 *)(pfVar8 + 2) +
                              fVar60 * (float)*(undefined8 *)(pfVar7 + 2));
                *(ulong *)pfVar39 =
                     CONCAT44((float)((ulong)*(undefined8 *)pfVar39 >> 0x20) +
                              fVar59 * (float)((ulong)uVar57 >> 0x20) +
                              fVar60 * (float)((ulong)uVar58 >> 0x20),
                              (float)*(undefined8 *)pfVar39 + fVar59 * (float)uVar57 +
                              fVar60 * (float)uVar58);
                pfVar39 = pfVar39 + 4;
                pfVar23 = pfVar8 + 4;
                pfVar15 = pfVar7 + 4;
              }
              if (0xf < uVar66) {
                do {
                  uVar57 = *(undefined8 *)pfVar23;
                  uVar58 = *(undefined8 *)pfVar15;
                  *(ulong *)(pfVar39 + 2) =
                       CONCAT44((float)((ulong)*(undefined8 *)(pfVar39 + 2) >> 0x20) +
                                fVar59 * (float)((ulong)*(undefined8 *)(pfVar23 + 2) >> 0x20) +
                                fVar60 * (float)((ulong)*(undefined8 *)(pfVar15 + 2) >> 0x20),
                                (float)*(undefined8 *)(pfVar39 + 2) +
                                fVar59 * (float)*(undefined8 *)(pfVar23 + 2) +
                                fVar60 * (float)*(undefined8 *)(pfVar15 + 2));
                  *(ulong *)pfVar39 =
                       CONCAT44((float)((ulong)*(undefined8 *)pfVar39 >> 0x20) +
                                fVar59 * (float)((ulong)uVar57 >> 0x20) +
                                fVar60 * (float)((ulong)uVar58 >> 0x20),
                                (float)*(undefined8 *)pfVar39 + fVar59 * (float)uVar57 +
                                fVar60 * (float)uVar58);
                  pfVar24 = pfVar23 + 6;
                  uVar57 = *(undefined8 *)(pfVar23 + 4);
                  pfVar45 = pfVar15 + 6;
                  uVar58 = *(undefined8 *)(pfVar15 + 4);
                  pfVar15 = pfVar15 + 8;
                  pfVar23 = pfVar23 + 8;
                  *(ulong *)(pfVar39 + 6) =
                       CONCAT44((float)((ulong)*(undefined8 *)(pfVar39 + 6) >> 0x20) +
                                fVar59 * (float)((ulong)*(undefined8 *)pfVar24 >> 0x20) +
                                fVar60 * (float)((ulong)*(undefined8 *)pfVar45 >> 0x20),
                                (float)*(undefined8 *)(pfVar39 + 6) +
                                fVar59 * (float)*(undefined8 *)pfVar24 +
                                fVar60 * (float)*(undefined8 *)pfVar45);
                  *(ulong *)(pfVar39 + 4) =
                       CONCAT44((float)((ulong)*(undefined8 *)(pfVar39 + 4) >> 0x20) +
                                fVar59 * (float)((ulong)uVar57 >> 0x20) +
                                fVar60 * (float)((ulong)uVar58 >> 0x20),
                                (float)*(undefined8 *)(pfVar39 + 4) + fVar59 * (float)uVar57 +
                                fVar60 * (float)uVar58);
                  pfVar39 = pfVar39 + 8;
                } while (pfVar39 < pfVar22);
              }
            }
          }
          else if (uVar18 != 0) {
            fVar63 = fVar63 - fVar59;
            fVar65 = fVar65 - fVar60;
            pfVar15 = pfVar39;
            pfVar22 = pfVar8;
            pfVar23 = pfVar7;
            do {
              fVar47 = fVar59 * *pfVar22;
              fVar48 = fVar60 * *pfVar23;
              fVar59 = fVar59 + fVar63 / (float)uVar18;
              fVar60 = fVar60 + fVar65 / (float)uVar18;
              pfVar24 = pfVar15 + 1;
              *pfVar15 = *pfVar15 + fVar47 + fVar48;
              pfVar15 = pfVar24;
              pfVar22 = pfVar22 + 1;
              pfVar23 = pfVar23 + 1;
            } while (pfVar24 < pfVar39 + uVar18);
          }
        }
        lVar34 = (ulong)*(ushort *)(param_2 + 2) * 4;
        lVar25 = *param_2;
        pfVar39 = (float *)(lVar25 + lVar34 + uVar38 * 4);
        lVar42 = *(long *)(param_1 + 0x158);
        fVar63 = *(float *)(param_1 + 0x1b4) * *(float *)(param_1 + 0x19c);
        fVar48 = *(float *)(lVar42 + 0x54) * *(float *)(lVar42 + 0x3c);
        fVar60 = fVar63 * fVar62;
        fVar63 = fVar63 * fVar56;
        fVar59 = *(float *)(param_1 + 0x1ac);
        fVar47 = fVar48 * fVar64;
        fVar48 = fVar48 * fVar82;
        fVar65 = *(float *)(lVar42 + 0x4c);
        lVar42 = uVar38 * 4;
        bVar14 = false;
        if ((fVar48 == fVar63) && (bVar14 = false, !NAN(fVar65) && !NAN(fVar59))) {
          bVar14 = fVar65 == fVar59;
        }
        bVar13 = false;
        if ((bVar14) && (bVar13 = false, !NAN(fVar47) && !NAN(fVar60))) {
          bVar13 = fVar47 == fVar60;
        }
        if (bVar13) {
          if (uVar18 != 0) {
            uVar44 = lVar25 + lVar42 + lVar34 + uVar20;
            uVar66 = lVar25 + lVar42 + lVar34 + 0x10;
            if (uVar44 <= uVar66) {
              uVar44 = uVar66;
            }
            uVar44 = ~(lVar25 + lVar42 + lVar34) + uVar44;
            pfVar22 = __s;
            pfVar15 = pfVar1;
            pfVar23 = pfVar39;
            if (((uint)uVar44 >> 4 & 1) == 0) {
              uVar57 = *(undefined8 *)__s;
              uVar58 = *(undefined8 *)pfVar1;
              *(ulong *)(pfVar39 + 2) =
                   CONCAT44((float)((ulong)*(undefined8 *)(pfVar39 + 2) >> 0x20) * fVar59 +
                            fVar60 * (float)((ulong)*(undefined8 *)(__src + 0x202) >> 0x20) +
                            fVar63 * (float)((ulong)*(undefined8 *)(__src + 0x302) >> 0x20),
                            (float)*(undefined8 *)(pfVar39 + 2) * fVar59 +
                            fVar60 * (float)*(undefined8 *)(__src + 0x202) +
                            fVar63 * (float)*(undefined8 *)(__src + 0x302));
              *(ulong *)pfVar39 =
                   CONCAT44((float)((ulong)*(undefined8 *)pfVar39 >> 0x20) * fVar59 +
                            fVar60 * (float)((ulong)uVar57 >> 0x20) +
                            fVar63 * (float)((ulong)uVar58 >> 0x20),
                            (float)*(undefined8 *)pfVar39 * fVar59 + fVar60 * (float)uVar57 +
                            fVar63 * (float)uVar58);
              pfVar22 = __src + 0x204;
              pfVar15 = __src + 0x304;
              pfVar23 = pfVar39 + 4;
            }
            if (0xf < uVar44) {
              do {
                uVar57 = *(undefined8 *)pfVar22;
                uVar58 = *(undefined8 *)pfVar15;
                *(ulong *)(pfVar23 + 2) =
                     CONCAT44((float)((ulong)*(undefined8 *)(pfVar23 + 2) >> 0x20) * fVar59 +
                              fVar60 * (float)((ulong)*(undefined8 *)(pfVar22 + 2) >> 0x20) +
                              fVar63 * (float)((ulong)*(undefined8 *)(pfVar15 + 2) >> 0x20),
                              (float)*(undefined8 *)(pfVar23 + 2) * fVar59 +
                              fVar60 * (float)*(undefined8 *)(pfVar22 + 2) +
                              fVar63 * (float)*(undefined8 *)(pfVar15 + 2));
                *(ulong *)pfVar23 =
                     CONCAT44((float)((ulong)*(undefined8 *)pfVar23 >> 0x20) * fVar59 +
                              fVar60 * (float)((ulong)uVar57 >> 0x20) +
                              fVar63 * (float)((ulong)uVar58 >> 0x20),
                              (float)*(undefined8 *)pfVar23 * fVar59 + fVar60 * (float)uVar57 +
                              fVar63 * (float)uVar58);
                pfVar24 = pfVar22 + 6;
                uVar57 = *(undefined8 *)(pfVar22 + 4);
                pfVar45 = pfVar15 + 6;
                uVar58 = *(undefined8 *)(pfVar15 + 4);
                pfVar15 = pfVar15 + 8;
                pfVar22 = pfVar22 + 8;
                *(ulong *)(pfVar23 + 6) =
                     CONCAT44((float)((ulong)*(undefined8 *)(pfVar23 + 6) >> 0x20) * fVar59 +
                              fVar60 * (float)((ulong)*(undefined8 *)pfVar24 >> 0x20) +
                              fVar63 * (float)((ulong)*(undefined8 *)pfVar45 >> 0x20),
                              (float)*(undefined8 *)(pfVar23 + 6) * fVar59 +
                              fVar60 * (float)*(undefined8 *)pfVar24 +
                              fVar63 * (float)*(undefined8 *)pfVar45);
                *(ulong *)(pfVar23 + 4) =
                     CONCAT44((float)((ulong)*(undefined8 *)(pfVar23 + 4) >> 0x20) * fVar59 +
                              fVar60 * (float)((ulong)uVar57 >> 0x20) +
                              fVar63 * (float)((ulong)uVar58 >> 0x20),
                              (float)*(undefined8 *)(pfVar23 + 4) * fVar59 + fVar60 * (float)uVar57
                              + fVar63 * (float)uVar58);
                pfVar23 = pfVar23 + 8;
              } while (pfVar23 < pfVar39 + uVar18);
            }
          }
        }
        else if (uVar18 != 0) {
          fVar49 = 1.0 / (float)uVar18;
          fVar65 = fVar65 - fVar59;
          fVar47 = fVar47 - fVar60;
          fVar48 = fVar48 - fVar63;
          pfVar22 = pfVar39;
          pfVar15 = __s;
          do {
            fVar52 = *pfVar22 * fVar59;
            fVar50 = fVar60 * *pfVar15;
            pfVar23 = pfVar15 + 0x100;
            pfVar15 = pfVar15 + 1;
            fVar51 = fVar63 * *pfVar23;
            fVar59 = fVar59 + fVar65 * fVar49;
            fVar60 = fVar60 + fVar47 * fVar49;
            fVar63 = fVar63 + fVar48 * fVar49;
            pfVar23 = pfVar22 + 1;
            *pfVar22 = fVar52 + fVar50 + fVar51;
            pfVar22 = pfVar23;
          } while (pfVar23 < pfVar39 + uVar18);
        }
        if (*(char *)(param_1 + 0x138) != '\0') {
          fVar60 = *(float *)(param_1 + 0x1b0) * *(float *)(param_1 + 0x19c);
          fVar65 = *(float *)(*(long *)(param_1 + 0x158) + 0x50) *
                   *(float *)(*(long *)(param_1 + 0x158) + 0x3c);
          fVar59 = fVar60 * fVar62;
          fVar60 = fVar60 * fVar56;
          fVar63 = fVar65 * fVar64;
          fVar65 = fVar65 * fVar82;
          bVar14 = false;
          if ((fVar63 == fVar59) && (bVar14 = false, !NAN(fVar65) && !NAN(fVar60))) {
            bVar14 = fVar65 == fVar60;
          }
          if (bVar14) {
            if (uVar18 != 0) {
              uVar44 = lVar25 + lVar42 + lVar34 + uVar20;
              uVar66 = lVar25 + lVar42 + lVar34 + 0x10;
              if (uVar44 <= uVar66) {
                uVar44 = uVar66;
              }
              uVar44 = ~(lVar25 + lVar42 + lVar34) + uVar44;
              pfVar23 = pfVar39;
              pfVar22 = pfVar8;
              pfVar15 = pfVar7;
              if (((uint)uVar44 >> 4 & 1) == 0) {
                uVar57 = *(undefined8 *)pfVar8;
                uVar58 = *(undefined8 *)pfVar7;
                *(ulong *)(pfVar39 + 2) =
                     CONCAT44((float)((ulong)*(undefined8 *)(pfVar39 + 2) >> 0x20) +
                              fVar59 * (float)((ulong)*(undefined8 *)(pfVar8 + 2) >> 0x20) +
                              fVar60 * (float)((ulong)*(undefined8 *)(pfVar7 + 2) >> 0x20),
                              (float)*(undefined8 *)(pfVar39 + 2) +
                              fVar59 * (float)*(undefined8 *)(pfVar8 + 2) +
                              fVar60 * (float)*(undefined8 *)(pfVar7 + 2));
                *(ulong *)pfVar39 =
                     CONCAT44((float)((ulong)*(undefined8 *)pfVar39 >> 0x20) +
                              fVar59 * (float)((ulong)uVar57 >> 0x20) +
                              fVar60 * (float)((ulong)uVar58 >> 0x20),
                              (float)*(undefined8 *)pfVar39 + fVar59 * (float)uVar57 +
                              fVar60 * (float)uVar58);
                pfVar23 = pfVar39 + 4;
                pfVar22 = pfVar8 + 4;
                pfVar15 = pfVar7 + 4;
              }
              if (0xf < uVar44) {
                do {
                  uVar57 = *(undefined8 *)pfVar22;
                  uVar58 = *(undefined8 *)pfVar15;
                  *(ulong *)(pfVar23 + 2) =
                       CONCAT44((float)((ulong)*(undefined8 *)(pfVar23 + 2) >> 0x20) +
                                fVar59 * (float)((ulong)*(undefined8 *)(pfVar22 + 2) >> 0x20) +
                                fVar60 * (float)((ulong)*(undefined8 *)(pfVar15 + 2) >> 0x20),
                                (float)*(undefined8 *)(pfVar23 + 2) +
                                fVar59 * (float)*(undefined8 *)(pfVar22 + 2) +
                                fVar60 * (float)*(undefined8 *)(pfVar15 + 2));
                  *(ulong *)pfVar23 =
                       CONCAT44((float)((ulong)*(undefined8 *)pfVar23 >> 0x20) +
                                fVar59 * (float)((ulong)uVar57 >> 0x20) +
                                fVar60 * (float)((ulong)uVar58 >> 0x20),
                                (float)*(undefined8 *)pfVar23 + fVar59 * (float)uVar57 +
                                fVar60 * (float)uVar58);
                  pfVar24 = pfVar22 + 6;
                  uVar57 = *(undefined8 *)(pfVar22 + 4);
                  pfVar45 = pfVar15 + 6;
                  uVar58 = *(undefined8 *)(pfVar15 + 4);
                  pfVar15 = pfVar15 + 8;
                  pfVar22 = pfVar22 + 8;
                  *(ulong *)(pfVar23 + 6) =
                       CONCAT44((float)((ulong)*(undefined8 *)(pfVar23 + 6) >> 0x20) +
                                fVar59 * (float)((ulong)*(undefined8 *)pfVar24 >> 0x20) +
                                fVar60 * (float)((ulong)*(undefined8 *)pfVar45 >> 0x20),
                                (float)*(undefined8 *)(pfVar23 + 6) +
                                fVar59 * (float)*(undefined8 *)pfVar24 +
                                fVar60 * (float)*(undefined8 *)pfVar45);
                  *(ulong *)(pfVar23 + 4) =
                       CONCAT44((float)((ulong)*(undefined8 *)(pfVar23 + 4) >> 0x20) +
                                fVar59 * (float)((ulong)uVar57 >> 0x20) +
                                fVar60 * (float)((ulong)uVar58 >> 0x20),
                                (float)*(undefined8 *)(pfVar23 + 4) + fVar59 * (float)uVar57 +
                                fVar60 * (float)uVar58);
                  pfVar23 = pfVar23 + 8;
                } while (pfVar23 < pfVar39 + uVar18);
              }
            }
          }
          else if (uVar18 != 0) {
            fVar63 = fVar63 - fVar59;
            fVar65 = fVar65 - fVar60;
            pfVar15 = pfVar39;
            pfVar22 = pfVar8;
            pfVar23 = pfVar7;
            do {
              fVar47 = fVar59 * *pfVar22;
              fVar48 = fVar60 * *pfVar23;
              fVar59 = fVar59 + fVar63 / (float)uVar18;
              fVar60 = fVar60 + fVar65 / (float)uVar18;
              pfVar24 = pfVar15 + 1;
              *pfVar15 = *pfVar15 + fVar47 + fVar48;
              pfVar15 = pfVar24;
              pfVar22 = pfVar22 + 1;
              pfVar23 = pfVar23 + 1;
            } while (pfVar24 < pfVar39 + uVar18);
          }
        }
        if ((uVar9 >> 0xe & 1) == 0) {
          lVar25 = 2;
        }
        else {
          lVar37 = *(long *)(param_1 + 0x158);
          fVar60 = *(float *)(param_1 + 0x1a4) * 0.707106 * *(float *)(param_1 + 0x1b4);
          fVar59 = *(float *)(param_1 + 0x1ac);
          lVar34 = (ulong)*(ushort *)(param_2 + 2) * 8;
          fVar63 = *(float *)(lVar37 + 0x44) * 0.707106 * *(float *)(lVar37 + 0x54);
          lVar25 = *param_2;
          pfVar39 = (float *)(lVar25 + lVar34 + uVar38 * 4);
          bVar14 = false;
          if ((*(float *)(lVar37 + 0x4c) == fVar59) &&
             (bVar14 = false, !NAN(fVar63) && !NAN(fVar60))) {
            bVar14 = fVar63 == fVar60;
          }
          if (bVar14) {
            if (uVar18 != 0) {
              uVar44 = lVar25 + lVar34 + lVar42 + uVar20;
              uVar66 = lVar25 + lVar34 + lVar42 + 0x10;
              if (uVar44 <= uVar66) {
                uVar44 = uVar66;
              }
              uVar44 = ~(lVar25 + lVar42 + lVar34) + uVar44;
              pfVar22 = pfVar39;
              pfVar15 = local_c8[2];
              pfVar23 = local_c8[3];
              if (((uint)uVar44 >> 4 & 1) == 0) {
                uVar57 = *(undefined8 *)local_c8[2];
                uVar58 = *(undefined8 *)local_c8[3];
                *(ulong *)(pfVar39 + 2) =
                     CONCAT44((float)((ulong)*(undefined8 *)(pfVar39 + 2) >> 0x20) * fVar59 +
                              fVar60 * ((float)((ulong)*(undefined8 *)(local_c8[3] + 2) >> 0x20) +
                                       (float)((ulong)*(undefined8 *)(local_c8[2] + 2) >> 0x20)),
                              (float)*(undefined8 *)(pfVar39 + 2) * fVar59 +
                              fVar60 * ((float)*(undefined8 *)(local_c8[3] + 2) +
                                       (float)*(undefined8 *)(local_c8[2] + 2)));
                *(ulong *)pfVar39 =
                     CONCAT44((float)((ulong)*(undefined8 *)pfVar39 >> 0x20) * fVar59 +
                              fVar60 * ((float)((ulong)uVar58 >> 0x20) +
                                       (float)((ulong)uVar57 >> 0x20)),
                              (float)*(undefined8 *)pfVar39 * fVar59 +
                              fVar60 * ((float)uVar58 + (float)uVar57));
                pfVar22 = pfVar39 + 4;
                pfVar15 = local_c8[2] + 4;
                pfVar23 = local_c8[3] + 4;
              }
              if (0xf < uVar44) {
                do {
                  uVar57 = *(undefined8 *)pfVar15;
                  uVar58 = *(undefined8 *)pfVar23;
                  *(ulong *)(pfVar22 + 2) =
                       CONCAT44((float)((ulong)*(undefined8 *)(pfVar22 + 2) >> 0x20) * fVar59 +
                                fVar60 * ((float)((ulong)*(undefined8 *)(pfVar23 + 2) >> 0x20) +
                                         (float)((ulong)*(undefined8 *)(pfVar15 + 2) >> 0x20)),
                                (float)*(undefined8 *)(pfVar22 + 2) * fVar59 +
                                fVar60 * ((float)*(undefined8 *)(pfVar23 + 2) +
                                         (float)*(undefined8 *)(pfVar15 + 2)));
                  *(ulong *)pfVar22 =
                       CONCAT44((float)((ulong)*(undefined8 *)pfVar22 >> 0x20) * fVar59 +
                                fVar60 * ((float)((ulong)uVar58 >> 0x20) +
                                         (float)((ulong)uVar57 >> 0x20)),
                                (float)*(undefined8 *)pfVar22 * fVar59 +
                                fVar60 * ((float)uVar58 + (float)uVar57));
                  pfVar24 = pfVar15 + 6;
                  uVar57 = *(undefined8 *)(pfVar15 + 4);
                  uVar58 = *(undefined8 *)(pfVar23 + 4);
                  pfVar15 = pfVar15 + 8;
                  *(ulong *)(pfVar22 + 6) =
                       CONCAT44((float)((ulong)*(undefined8 *)(pfVar22 + 6) >> 0x20) * fVar59 +
                                fVar60 * ((float)((ulong)*(undefined8 *)(pfVar23 + 6) >> 0x20) +
                                         (float)((ulong)*(undefined8 *)pfVar24 >> 0x20)),
                                (float)*(undefined8 *)(pfVar22 + 6) * fVar59 +
                                fVar60 * ((float)*(undefined8 *)(pfVar23 + 6) +
                                         (float)*(undefined8 *)pfVar24));
                  *(ulong *)(pfVar22 + 4) =
                       CONCAT44((float)((ulong)*(undefined8 *)(pfVar22 + 4) >> 0x20) * fVar59 +
                                fVar60 * ((float)((ulong)uVar58 >> 0x20) +
                                         (float)((ulong)uVar57 >> 0x20)),
                                (float)*(undefined8 *)(pfVar22 + 4) * fVar59 +
                                fVar60 * ((float)uVar58 + (float)uVar57));
                  pfVar22 = pfVar22 + 8;
                  pfVar23 = pfVar23 + 8;
                } while (pfVar22 < pfVar39 + uVar18);
              }
            }
            lVar25 = 3;
          }
          else if (uVar18 == 0) {
            lVar25 = 3;
          }
          else {
            fVar65 = *(float *)(lVar37 + 0x4c) - fVar59;
            fVar47 = (fVar63 - fVar60) / (float)uVar18;
            pfVar15 = pfVar39;
            pfVar22 = local_c8[2];
            pfVar23 = local_c8[3];
            fVar63 = fVar60;
            do {
              fVar50 = *pfVar15 * fVar59;
              fVar59 = fVar59 + fVar65 / (float)uVar18;
              fVar48 = fVar60 * *pfVar22;
              fVar49 = fVar63 * *pfVar23;
              fVar60 = fVar60 + fVar47;
              fVar63 = fVar63 + fVar47;
              lVar25 = 3;
              pfVar24 = pfVar15 + 1;
              *pfVar15 = fVar50 + fVar48 + fVar49;
              pfVar15 = pfVar24;
              pfVar22 = pfVar22 + 1;
              pfVar23 = pfVar23 + 1;
            } while (pfVar24 < pfVar39 + uVar18);
          }
        }
        lVar34 = *(long *)(param_1 + 0x158);
        fVar60 = *(float *)(param_1 + 0x1b4) * *(float *)(param_1 + 0x1a0);
        fVar59 = fVar60 * fVar56;
        fVar63 = *(float *)(lVar34 + 0x54) * *(float *)(lVar34 + 0x40);
        fVar47 = fVar63 * fVar82;
        fVar63 = fVar63 * fVar64;
        fVar60 = fVar60 * fVar62;
        lVar37 = *param_2;
        uVar44 = (ulong)*(ushort *)(param_2 + 2);
        fVar65 = *(float *)(param_1 + 0x1b0) * *(float *)(param_1 + 0x1a0);
        fVar48 = *(float *)(lVar34 + 0x4c);
        bVar14 = false;
        if ((fVar63 == fVar60) && (bVar14 = false, !NAN(fVar47) && !NAN(fVar59))) {
          bVar14 = fVar47 == fVar59;
        }
        fVar50 = *(float *)(lVar34 + 0x50) * *(float *)(lVar34 + 0x40);
        uVar43 = (uint)lVar25 * 4;
        uVar29 = (ulong)uVar43;
        fVar49 = *(float *)(param_1 + 0x1ac);
        pfVar39 = (float *)(lVar37 + uVar44 * uVar29 + uVar38 * 4);
        bVar13 = false;
        if ((bVar14) && (bVar13 = false, !NAN(fVar48) && !NAN(fVar49))) {
          bVar13 = fVar48 == fVar49;
        }
        if (bVar13) {
          if (uVar18 != 0) {
            lVar34 = lVar42 + uVar29 * uVar44;
            uVar67 = lVar37 + lVar34 + uVar20;
            uVar66 = lVar37 + lVar34 + 0x10;
            if (uVar67 <= uVar66) {
              uVar67 = uVar66;
            }
            uVar67 = ~(lVar37 + lVar25 * uVar44 * 4 + lVar42) + uVar67;
            pfVar23 = pfVar39;
            pfVar22 = local_a8;
            pfVar15 = local_a0;
            if (((uint)uVar67 >> 4 & 1) == 0) {
              pfVar23 = pfVar39 + 4;
              pfVar22 = local_a8 + 4;
              uVar57 = *(undefined8 *)local_a8;
              pfVar15 = local_a0 + 4;
              uVar58 = *(undefined8 *)local_a0;
              *(ulong *)(pfVar39 + 2) =
                   CONCAT44((float)((ulong)*(undefined8 *)(pfVar39 + 2) >> 0x20) * fVar49 +
                            fVar59 * (float)((ulong)*(undefined8 *)(local_a8 + 2) >> 0x20) +
                            fVar60 * (float)((ulong)*(undefined8 *)(local_a0 + 2) >> 0x20),
                            (float)*(undefined8 *)(pfVar39 + 2) * fVar49 +
                            fVar59 * (float)*(undefined8 *)(local_a8 + 2) +
                            fVar60 * (float)*(undefined8 *)(local_a0 + 2));
              *(ulong *)pfVar39 =
                   CONCAT44((float)((ulong)*(undefined8 *)pfVar39 >> 0x20) * fVar49 +
                            fVar59 * (float)((ulong)uVar57 >> 0x20) +
                            fVar60 * (float)((ulong)uVar58 >> 0x20),
                            (float)*(undefined8 *)pfVar39 * fVar49 + fVar59 * (float)uVar57 +
                            fVar60 * (float)uVar58);
            }
            if (0xf < uVar67) {
              do {
                uVar57 = *(undefined8 *)pfVar22;
                uVar58 = *(undefined8 *)pfVar15;
                *(ulong *)(pfVar23 + 2) =
                     CONCAT44((float)((ulong)*(undefined8 *)(pfVar23 + 2) >> 0x20) * fVar49 +
                              fVar59 * (float)((ulong)*(undefined8 *)(pfVar22 + 2) >> 0x20) +
                              fVar60 * (float)((ulong)*(undefined8 *)(pfVar15 + 2) >> 0x20),
                              (float)*(undefined8 *)(pfVar23 + 2) * fVar49 +
                              fVar59 * (float)*(undefined8 *)(pfVar22 + 2) +
                              fVar60 * (float)*(undefined8 *)(pfVar15 + 2));
                *(ulong *)pfVar23 =
                     CONCAT44((float)((ulong)*(undefined8 *)pfVar23 >> 0x20) * fVar49 +
                              fVar59 * (float)((ulong)uVar57 >> 0x20) +
                              fVar60 * (float)((ulong)uVar58 >> 0x20),
                              (float)*(undefined8 *)pfVar23 * fVar49 + fVar59 * (float)uVar57 +
                              fVar60 * (float)uVar58);
                pfVar24 = pfVar22 + 6;
                uVar57 = *(undefined8 *)(pfVar22 + 4);
                pfVar45 = pfVar15 + 6;
                uVar58 = *(undefined8 *)(pfVar15 + 4);
                pfVar15 = pfVar15 + 8;
                pfVar22 = pfVar22 + 8;
                *(ulong *)(pfVar23 + 6) =
                     CONCAT44((float)((ulong)*(undefined8 *)(pfVar23 + 6) >> 0x20) * fVar49 +
                              fVar59 * (float)((ulong)*(undefined8 *)pfVar24 >> 0x20) +
                              fVar60 * (float)((ulong)*(undefined8 *)pfVar45 >> 0x20),
                              (float)*(undefined8 *)(pfVar23 + 6) * fVar49 +
                              fVar59 * (float)*(undefined8 *)pfVar24 +
                              fVar60 * (float)*(undefined8 *)pfVar45);
                *(ulong *)(pfVar23 + 4) =
                     CONCAT44((float)((ulong)*(undefined8 *)(pfVar23 + 4) >> 0x20) * fVar49 +
                              fVar59 * (float)((ulong)uVar57 >> 0x20) +
                              fVar60 * (float)((ulong)uVar58 >> 0x20),
                              (float)*(undefined8 *)(pfVar23 + 4) * fVar49 + fVar59 * (float)uVar57
                              + fVar60 * (float)uVar58);
                pfVar23 = pfVar23 + 8;
              } while (pfVar23 < pfVar39 + uVar18);
            }
          }
        }
        else if (uVar18 != 0) {
          fVar53 = 1.0 / (float)uVar18;
          fVar48 = fVar48 - fVar49;
          pfVar15 = pfVar39;
          pfVar22 = local_a8;
          pfVar23 = local_a0;
          fVar51 = fVar60;
          fVar52 = fVar59;
          do {
            fVar100 = *pfVar15 * fVar49;
            fVar49 = fVar49 + fVar48 * fVar53;
            fVar54 = fVar52 * *pfVar22;
            fVar55 = fVar51 * *pfVar23;
            fVar52 = fVar52 + (fVar47 - fVar59) * fVar53;
            fVar51 = fVar51 + (fVar63 - fVar60) * fVar53;
            pfVar24 = pfVar15 + 1;
            *pfVar15 = fVar100 + fVar54 + fVar55;
            pfVar15 = pfVar24;
            pfVar22 = pfVar22 + 1;
            pfVar23 = pfVar23 + 1;
          } while (pfVar24 < pfVar39 + uVar18);
        }
        fVar56 = fVar65 * fVar56;
        fVar48 = fVar50 * fVar82;
        fVar65 = fVar65 * fVar62;
        uVar66 = (ulong)(uint)fVar65;
        fVar50 = fVar50 * fVar64;
        if (*(char *)(param_1 + 0x138) != '\0') {
          if ((fVar48 == fVar56) && (fVar50 == fVar65)) {
            if (uVar18 != 0) {
              lVar34 = lVar42 + uVar29 * uVar44;
              uVar67 = lVar37 + lVar34 + uVar20;
              uVar29 = lVar37 + lVar34 + 0x10;
              if (uVar67 <= uVar29) {
                uVar67 = uVar29;
              }
              uVar67 = ~(lVar37 + lVar25 * uVar44 * 4 + lVar42) + uVar67;
              pfVar23 = pfVar39;
              pfVar15 = pfVar33;
              pfVar22 = pfVar36;
              if (((uint)uVar67 >> 4 & 1) == 0) {
                uVar57 = *(undefined8 *)pfVar36;
                uVar58 = *(undefined8 *)pfVar33;
                *(ulong *)(pfVar39 + 2) =
                     CONCAT44((float)((ulong)*(undefined8 *)(pfVar39 + 2) >> 0x20) +
                              fVar56 * (float)((ulong)*(undefined8 *)(pfVar36 + 2) >> 0x20) +
                              fVar65 * (float)((ulong)*(undefined8 *)(pfVar33 + 2) >> 0x20),
                              (float)*(undefined8 *)(pfVar39 + 2) +
                              fVar56 * (float)*(undefined8 *)(pfVar36 + 2) +
                              fVar65 * (float)*(undefined8 *)(pfVar33 + 2));
                *(ulong *)pfVar39 =
                     CONCAT44((float)((ulong)*(undefined8 *)pfVar39 >> 0x20) +
                              fVar56 * (float)((ulong)uVar57 >> 0x20) +
                              fVar65 * (float)((ulong)uVar58 >> 0x20),
                              (float)*(undefined8 *)pfVar39 + fVar56 * (float)uVar57 +
                              fVar65 * (float)uVar58);
                pfVar23 = pfVar39 + 4;
                pfVar15 = pfVar33 + 4;
                pfVar22 = pfVar36 + 4;
              }
              if (0xf < uVar67) {
                do {
                  uVar57 = *(undefined8 *)pfVar22;
                  uVar58 = *(undefined8 *)pfVar15;
                  *(ulong *)(pfVar23 + 2) =
                       CONCAT44((float)((ulong)*(undefined8 *)(pfVar23 + 2) >> 0x20) +
                                fVar56 * (float)((ulong)*(undefined8 *)(pfVar22 + 2) >> 0x20) +
                                fVar65 * (float)((ulong)*(undefined8 *)(pfVar15 + 2) >> 0x20),
                                (float)*(undefined8 *)(pfVar23 + 2) +
                                fVar56 * (float)*(undefined8 *)(pfVar22 + 2) +
                                fVar65 * (float)*(undefined8 *)(pfVar15 + 2));
                  *(ulong *)pfVar23 =
                       CONCAT44((float)((ulong)*(undefined8 *)pfVar23 >> 0x20) +
                                fVar56 * (float)((ulong)uVar57 >> 0x20) +
                                fVar65 * (float)((ulong)uVar58 >> 0x20),
                                (float)*(undefined8 *)pfVar23 + fVar56 * (float)uVar57 +
                                fVar65 * (float)uVar58);
                  pfVar24 = pfVar22 + 6;
                  uVar57 = *(undefined8 *)(pfVar22 + 4);
                  pfVar45 = pfVar15 + 6;
                  uVar58 = *(undefined8 *)(pfVar15 + 4);
                  pfVar15 = pfVar15 + 8;
                  pfVar22 = pfVar22 + 8;
                  *(ulong *)(pfVar23 + 6) =
                       CONCAT44((float)((ulong)*(undefined8 *)(pfVar23 + 6) >> 0x20) +
                                fVar56 * (float)((ulong)*(undefined8 *)pfVar24 >> 0x20) +
                                fVar65 * (float)((ulong)*(undefined8 *)pfVar45 >> 0x20),
                                (float)*(undefined8 *)(pfVar23 + 6) +
                                fVar56 * (float)*(undefined8 *)pfVar24 +
                                fVar65 * (float)*(undefined8 *)pfVar45);
                  *(ulong *)(pfVar23 + 4) =
                       CONCAT44((float)((ulong)*(undefined8 *)(pfVar23 + 4) >> 0x20) +
                                fVar56 * (float)((ulong)uVar57 >> 0x20) +
                                fVar65 * (float)((ulong)uVar58 >> 0x20),
                                (float)*(undefined8 *)(pfVar23 + 4) + fVar56 * (float)uVar57 +
                                fVar65 * (float)uVar58);
                  pfVar23 = pfVar23 + 8;
                } while (pfVar23 < pfVar39 + uVar18);
              }
            }
          }
          else if (uVar18 != 0) {
            pfVar15 = pfVar39;
            pfVar22 = pfVar36;
            pfVar23 = pfVar33;
            uVar44 = uVar66;
            fVar62 = fVar56;
            do {
              fVar49 = fVar62 * *pfVar22;
              fVar51 = (float)uVar44;
              fVar62 = fVar62 + (fVar48 - fVar56) / (float)uVar18;
              uVar44 = (ulong)(uint)(fVar51 + (fVar50 - fVar65) / (float)uVar18);
              pfVar24 = pfVar15 + 1;
              *pfVar15 = *pfVar15 + fVar49 + fVar51 * *pfVar23;
              pfVar15 = pfVar24;
              pfVar22 = pfVar22 + 1;
              pfVar23 = pfVar23 + 1;
            } while (pfVar24 < pfVar39 + uVar18);
          }
        }
        lVar34 = *param_2;
        uVar44 = (ulong)(uVar43 + 4);
        uVar29 = (ulong)*(ushort *)(param_2 + 2);
        fVar62 = *(float *)(param_1 + 0x1ac);
        fVar49 = *(float *)(*(long *)(param_1 + 0x158) + 0x4c);
        pfVar39 = (float *)(lVar34 + uVar29 * uVar44 + uVar38 * 4);
        if (((fVar47 == fVar59) && (fVar63 == fVar60)) && (fVar49 == fVar62)) {
          if (uVar18 != 0) {
            lVar37 = uVar44 * uVar29 + lVar42;
            uVar69 = lVar34 + lVar37 + uVar20;
            uVar67 = lVar34 + lVar37 + 0x10;
            if (uVar69 <= uVar67) {
              uVar69 = uVar67;
            }
            uVar69 = ~(uVar44 * uVar29 + lVar34 + lVar42) + uVar69;
            pfVar15 = local_a0;
            pfVar23 = pfVar39;
            pfVar22 = local_a8;
            if (((uint)uVar69 >> 4 & 1) == 0) {
              pfVar23 = pfVar39 + 4;
              pfVar22 = local_a8 + 4;
              uVar57 = *(undefined8 *)local_a8;
              pfVar15 = local_a0 + 4;
              uVar58 = *(undefined8 *)local_a0;
              *(ulong *)(pfVar39 + 2) =
                   CONCAT44((float)((ulong)*(undefined8 *)(pfVar39 + 2) >> 0x20) * fVar62 +
                            fVar60 * (float)((ulong)*(undefined8 *)(local_a8 + 2) >> 0x20) +
                            fVar59 * (float)((ulong)*(undefined8 *)(local_a0 + 2) >> 0x20),
                            (float)*(undefined8 *)(pfVar39 + 2) * fVar62 +
                            fVar60 * (float)*(undefined8 *)(local_a8 + 2) +
                            fVar59 * (float)*(undefined8 *)(local_a0 + 2));
              *(ulong *)pfVar39 =
                   CONCAT44((float)((ulong)*(undefined8 *)pfVar39 >> 0x20) * fVar62 +
                            fVar60 * (float)((ulong)uVar57 >> 0x20) +
                            fVar59 * (float)((ulong)uVar58 >> 0x20),
                            (float)*(undefined8 *)pfVar39 * fVar62 + fVar60 * (float)uVar57 +
                            fVar59 * (float)uVar58);
            }
            if (0xf < uVar69) {
              do {
                uVar57 = *(undefined8 *)pfVar22;
                uVar58 = *(undefined8 *)pfVar15;
                *(ulong *)(pfVar23 + 2) =
                     CONCAT44((float)((ulong)*(undefined8 *)(pfVar23 + 2) >> 0x20) * fVar62 +
                              fVar60 * (float)((ulong)*(undefined8 *)(pfVar22 + 2) >> 0x20) +
                              fVar59 * (float)((ulong)*(undefined8 *)(pfVar15 + 2) >> 0x20),
                              (float)*(undefined8 *)(pfVar23 + 2) * fVar62 +
                              fVar60 * (float)*(undefined8 *)(pfVar22 + 2) +
                              fVar59 * (float)*(undefined8 *)(pfVar15 + 2));
                *(ulong *)pfVar23 =
                     CONCAT44((float)((ulong)*(undefined8 *)pfVar23 >> 0x20) * fVar62 +
                              fVar60 * (float)((ulong)uVar57 >> 0x20) +
                              fVar59 * (float)((ulong)uVar58 >> 0x20),
                              (float)*(undefined8 *)pfVar23 * fVar62 + fVar60 * (float)uVar57 +
                              fVar59 * (float)uVar58);
                pfVar24 = pfVar22 + 6;
                uVar57 = *(undefined8 *)(pfVar22 + 4);
                pfVar45 = pfVar15 + 6;
                uVar58 = *(undefined8 *)(pfVar15 + 4);
                pfVar15 = pfVar15 + 8;
                pfVar22 = pfVar22 + 8;
                *(ulong *)(pfVar23 + 6) =
                     CONCAT44((float)((ulong)*(undefined8 *)(pfVar23 + 6) >> 0x20) * fVar62 +
                              fVar60 * (float)((ulong)*(undefined8 *)pfVar24 >> 0x20) +
                              fVar59 * (float)((ulong)*(undefined8 *)pfVar45 >> 0x20),
                              (float)*(undefined8 *)(pfVar23 + 6) * fVar62 +
                              fVar60 * (float)*(undefined8 *)pfVar24 +
                              fVar59 * (float)*(undefined8 *)pfVar45);
                *(ulong *)(pfVar23 + 4) =
                     CONCAT44((float)((ulong)*(undefined8 *)(pfVar23 + 4) >> 0x20) * fVar62 +
                              fVar60 * (float)((ulong)uVar57 >> 0x20) +
                              fVar59 * (float)((ulong)uVar58 >> 0x20),
                              (float)*(undefined8 *)(pfVar23 + 4) * fVar62 + fVar60 * (float)uVar57
                              + fVar59 * (float)uVar58);
                pfVar23 = pfVar23 + 8;
              } while (pfVar23 < pfVar39 + uVar18);
            }
          }
        }
        else if (uVar18 != 0) {
          fVar53 = 1.0 / (float)uVar18;
          fVar49 = fVar49 - fVar62;
          pfVar15 = local_a0;
          pfVar22 = pfVar39;
          pfVar23 = local_a8;
          fVar51 = fVar60;
          fVar52 = fVar59;
          do {
            fVar100 = *pfVar22 * fVar62;
            fVar62 = fVar62 + fVar49 * fVar53;
            fVar54 = fVar51 * *pfVar23;
            fVar55 = fVar52 * *pfVar15;
            fVar51 = fVar51 + (fVar63 - fVar60) * fVar53;
            fVar52 = fVar52 + (fVar47 - fVar59) * fVar53;
            pfVar24 = pfVar22 + 1;
            *pfVar22 = fVar100 + fVar54 + fVar55;
            pfVar15 = pfVar15 + 1;
            pfVar22 = pfVar24;
            pfVar23 = pfVar23 + 1;
          } while (pfVar24 < pfVar39 + uVar18);
        }
        if (*(char *)(param_1 + 0x138) != '\0') {
          if ((fVar50 == fVar65) && (fVar48 == fVar56)) {
            if (uVar18 != 0) {
              lVar37 = uVar44 * uVar29 + lVar42;
              uVar69 = lVar34 + lVar37 + uVar20;
              uVar67 = lVar34 + lVar37 + 0x10;
              if (uVar69 <= uVar67) {
                uVar69 = uVar67;
              }
              uVar69 = ~(uVar44 * uVar29 + lVar34 + lVar42) + uVar69;
              pfVar23 = pfVar39;
              pfVar15 = pfVar33;
              pfVar22 = pfVar36;
              if (((uint)uVar69 >> 4 & 1) == 0) {
                uVar57 = *(undefined8 *)pfVar36;
                uVar58 = *(undefined8 *)pfVar33;
                *(ulong *)(pfVar39 + 2) =
                     CONCAT44((float)((ulong)*(undefined8 *)(pfVar39 + 2) >> 0x20) +
                              fVar65 * (float)((ulong)*(undefined8 *)(pfVar36 + 2) >> 0x20) +
                              fVar56 * (float)((ulong)*(undefined8 *)(pfVar33 + 2) >> 0x20),
                              (float)*(undefined8 *)(pfVar39 + 2) +
                              fVar65 * (float)*(undefined8 *)(pfVar36 + 2) +
                              fVar56 * (float)*(undefined8 *)(pfVar33 + 2));
                *(ulong *)pfVar39 =
                     CONCAT44((float)((ulong)*(undefined8 *)pfVar39 >> 0x20) +
                              fVar65 * (float)((ulong)uVar57 >> 0x20) +
                              fVar56 * (float)((ulong)uVar58 >> 0x20),
                              (float)*(undefined8 *)pfVar39 + fVar65 * (float)uVar57 +
                              fVar56 * (float)uVar58);
                pfVar23 = pfVar39 + 4;
                pfVar15 = pfVar33 + 4;
                pfVar22 = pfVar36 + 4;
              }
              if (0xf < uVar69) {
                do {
                  uVar57 = *(undefined8 *)pfVar22;
                  uVar58 = *(undefined8 *)pfVar15;
                  *(ulong *)(pfVar23 + 2) =
                       CONCAT44((float)((ulong)*(undefined8 *)(pfVar23 + 2) >> 0x20) +
                                fVar65 * (float)((ulong)*(undefined8 *)(pfVar22 + 2) >> 0x20) +
                                fVar56 * (float)((ulong)*(undefined8 *)(pfVar15 + 2) >> 0x20),
                                (float)*(undefined8 *)(pfVar23 + 2) +
                                fVar65 * (float)*(undefined8 *)(pfVar22 + 2) +
                                fVar56 * (float)*(undefined8 *)(pfVar15 + 2));
                  *(ulong *)pfVar23 =
                       CONCAT44((float)((ulong)*(undefined8 *)pfVar23 >> 0x20) +
                                fVar65 * (float)((ulong)uVar57 >> 0x20) +
                                fVar56 * (float)((ulong)uVar58 >> 0x20),
                                (float)*(undefined8 *)pfVar23 + fVar65 * (float)uVar57 +
                                fVar56 * (float)uVar58);
                  pfVar24 = pfVar22 + 6;
                  uVar57 = *(undefined8 *)(pfVar22 + 4);
                  pfVar45 = pfVar15 + 6;
                  uVar58 = *(undefined8 *)(pfVar15 + 4);
                  pfVar15 = pfVar15 + 8;
                  pfVar22 = pfVar22 + 8;
                  *(ulong *)(pfVar23 + 6) =
                       CONCAT44((float)((ulong)*(undefined8 *)(pfVar23 + 6) >> 0x20) +
                                fVar65 * (float)((ulong)*(undefined8 *)pfVar24 >> 0x20) +
                                fVar56 * (float)((ulong)*(undefined8 *)pfVar45 >> 0x20),
                                (float)*(undefined8 *)(pfVar23 + 6) +
                                fVar65 * (float)*(undefined8 *)pfVar24 +
                                fVar56 * (float)*(undefined8 *)pfVar45);
                  *(ulong *)(pfVar23 + 4) =
                       CONCAT44((float)((ulong)*(undefined8 *)(pfVar23 + 4) >> 0x20) +
                                fVar65 * (float)((ulong)uVar57 >> 0x20) +
                                fVar56 * (float)((ulong)uVar58 >> 0x20),
                                (float)*(undefined8 *)(pfVar23 + 4) + fVar65 * (float)uVar57 +
                                fVar56 * (float)uVar58);
                  pfVar23 = pfVar23 + 8;
                } while (pfVar23 < pfVar39 + uVar18);
              }
            }
          }
          else if (uVar18 != 0) {
            pfVar15 = pfVar39;
            pfVar22 = pfVar36;
            pfVar23 = pfVar33;
            uVar44 = uVar66;
            fVar62 = fVar56;
            do {
              fVar51 = (float)uVar44;
              fVar49 = fVar62 * *pfVar23;
              uVar44 = (ulong)(uint)(fVar51 + (fVar50 - fVar65) / (float)uVar18);
              fVar62 = fVar62 + (fVar48 - fVar56) / (float)uVar18;
              pfVar24 = pfVar15 + 1;
              *pfVar15 = *pfVar15 + fVar51 * *pfVar22 + fVar49;
              pfVar15 = pfVar24;
              pfVar22 = pfVar22 + 1;
              pfVar23 = pfVar23 + 1;
            } while (pfVar24 < pfVar39 + uVar18);
          }
        }
        lVar34 = *param_2;
        uVar44 = (ulong)(uVar43 + 8);
        uVar29 = (ulong)*(ushort *)(param_2 + 2);
        fVar62 = *(float *)(param_1 + 0x1ac);
        fVar49 = *(float *)(*(long *)(param_1 + 0x158) + 0x4c);
        pfVar39 = (float *)(lVar34 + uVar29 * uVar44 + uVar38 * 4);
        if (((fVar63 == fVar60) && (fVar47 == fVar59)) && (fVar49 == fVar62)) {
          if (uVar18 != 0) {
            lVar37 = uVar44 * uVar29 + lVar42;
            uVar69 = lVar34 + lVar37 + uVar20;
            uVar67 = lVar34 + lVar37 + 0x10;
            if (uVar69 <= uVar67) {
              uVar69 = uVar67;
            }
            uVar69 = ~(uVar44 * uVar29 + lVar34 + lVar42) + uVar69;
            pfVar15 = local_a0;
            pfVar23 = pfVar39;
            pfVar22 = local_a8;
            if (((uint)uVar69 >> 4 & 1) == 0) {
              pfVar23 = pfVar39 + 4;
              pfVar22 = local_a8 + 4;
              uVar57 = *(undefined8 *)local_a8;
              pfVar15 = local_a0 + 4;
              uVar58 = *(undefined8 *)local_a0;
              *(ulong *)(pfVar39 + 2) =
                   CONCAT44((float)((ulong)*(undefined8 *)(pfVar39 + 2) >> 0x20) * fVar62 +
                            fVar59 * (float)((ulong)*(undefined8 *)(local_a8 + 2) >> 0x20) +
                            fVar60 * (float)((ulong)*(undefined8 *)(local_a0 + 2) >> 0x20),
                            (float)*(undefined8 *)(pfVar39 + 2) * fVar62 +
                            fVar59 * (float)*(undefined8 *)(local_a8 + 2) +
                            fVar60 * (float)*(undefined8 *)(local_a0 + 2));
              *(ulong *)pfVar39 =
                   CONCAT44((float)((ulong)*(undefined8 *)pfVar39 >> 0x20) * fVar62 +
                            fVar59 * (float)((ulong)uVar57 >> 0x20) +
                            fVar60 * (float)((ulong)uVar58 >> 0x20),
                            (float)*(undefined8 *)pfVar39 * fVar62 + fVar59 * (float)uVar57 +
                            fVar60 * (float)uVar58);
            }
            if (0xf < uVar69) {
              do {
                uVar57 = *(undefined8 *)pfVar22;
                uVar58 = *(undefined8 *)pfVar15;
                *(ulong *)(pfVar23 + 2) =
                     CONCAT44((float)((ulong)*(undefined8 *)(pfVar23 + 2) >> 0x20) * fVar62 +
                              fVar59 * (float)((ulong)*(undefined8 *)(pfVar22 + 2) >> 0x20) +
                              fVar60 * (float)((ulong)*(undefined8 *)(pfVar15 + 2) >> 0x20),
                              (float)*(undefined8 *)(pfVar23 + 2) * fVar62 +
                              fVar59 * (float)*(undefined8 *)(pfVar22 + 2) +
                              fVar60 * (float)*(undefined8 *)(pfVar15 + 2));
                *(ulong *)pfVar23 =
                     CONCAT44((float)((ulong)*(undefined8 *)pfVar23 >> 0x20) * fVar62 +
                              fVar59 * (float)((ulong)uVar57 >> 0x20) +
                              fVar60 * (float)((ulong)uVar58 >> 0x20),
                              (float)*(undefined8 *)pfVar23 * fVar62 + fVar59 * (float)uVar57 +
                              fVar60 * (float)uVar58);
                pfVar24 = pfVar22 + 6;
                uVar57 = *(undefined8 *)(pfVar22 + 4);
                pfVar45 = pfVar15 + 6;
                uVar58 = *(undefined8 *)(pfVar15 + 4);
                pfVar15 = pfVar15 + 8;
                pfVar22 = pfVar22 + 8;
                *(ulong *)(pfVar23 + 6) =
                     CONCAT44((float)((ulong)*(undefined8 *)(pfVar23 + 6) >> 0x20) * fVar62 +
                              fVar59 * (float)((ulong)*(undefined8 *)pfVar24 >> 0x20) +
                              fVar60 * (float)((ulong)*(undefined8 *)pfVar45 >> 0x20),
                              (float)*(undefined8 *)(pfVar23 + 6) * fVar62 +
                              fVar59 * (float)*(undefined8 *)pfVar24 +
                              fVar60 * (float)*(undefined8 *)pfVar45);
                *(ulong *)(pfVar23 + 4) =
                     CONCAT44((float)((ulong)*(undefined8 *)(pfVar23 + 4) >> 0x20) * fVar62 +
                              fVar59 * (float)((ulong)uVar57 >> 0x20) +
                              fVar60 * (float)((ulong)uVar58 >> 0x20),
                              (float)*(undefined8 *)(pfVar23 + 4) * fVar62 + fVar59 * (float)uVar57
                              + fVar60 * (float)uVar58);
                pfVar23 = pfVar23 + 8;
              } while (pfVar23 < pfVar39 + uVar18);
            }
          }
        }
        else if (uVar18 != 0) {
          fVar53 = 1.0 / (float)uVar18;
          fVar49 = fVar49 - fVar62;
          pfVar15 = local_a0;
          pfVar22 = pfVar39;
          pfVar23 = local_a8;
          fVar51 = fVar60;
          fVar52 = fVar59;
          do {
            fVar100 = *pfVar22 * fVar62;
            fVar62 = fVar62 + fVar49 * fVar53;
            fVar54 = fVar52 * *pfVar23;
            fVar55 = fVar51 * *pfVar15;
            fVar52 = fVar52 + (fVar47 - fVar59) * fVar53;
            fVar51 = fVar51 + (fVar63 - fVar60) * fVar53;
            pfVar24 = pfVar22 + 1;
            *pfVar22 = fVar100 + fVar54 + fVar55;
            pfVar15 = pfVar15 + 1;
            pfVar22 = pfVar24;
            pfVar23 = pfVar23 + 1;
          } while (pfVar24 < pfVar39 + uVar18);
        }
        if (*(char *)(param_1 + 0x138) != '\0') {
          if ((fVar48 == fVar56) && (fVar50 == fVar65)) {
            if (uVar18 != 0) {
              lVar37 = uVar44 * uVar29 + lVar42;
              uVar69 = lVar34 + lVar37 + uVar20;
              uVar67 = lVar34 + lVar37 + 0x10;
              if (uVar69 <= uVar67) {
                uVar69 = uVar67;
              }
              uVar69 = ~(uVar44 * uVar29 + lVar34 + lVar42) + uVar69;
              pfVar23 = pfVar39;
              pfVar15 = pfVar33;
              pfVar22 = pfVar36;
              if (((uint)uVar69 >> 4 & 1) == 0) {
                uVar57 = *(undefined8 *)pfVar36;
                uVar58 = *(undefined8 *)pfVar33;
                *(ulong *)(pfVar39 + 2) =
                     CONCAT44((float)((ulong)*(undefined8 *)(pfVar39 + 2) >> 0x20) +
                              fVar56 * (float)((ulong)*(undefined8 *)(pfVar36 + 2) >> 0x20) +
                              fVar65 * (float)((ulong)*(undefined8 *)(pfVar33 + 2) >> 0x20),
                              (float)*(undefined8 *)(pfVar39 + 2) +
                              fVar56 * (float)*(undefined8 *)(pfVar36 + 2) +
                              fVar65 * (float)*(undefined8 *)(pfVar33 + 2));
                *(ulong *)pfVar39 =
                     CONCAT44((float)((ulong)*(undefined8 *)pfVar39 >> 0x20) +
                              fVar56 * (float)((ulong)uVar57 >> 0x20) +
                              fVar65 * (float)((ulong)uVar58 >> 0x20),
                              (float)*(undefined8 *)pfVar39 + fVar56 * (float)uVar57 +
                              fVar65 * (float)uVar58);
                pfVar23 = pfVar39 + 4;
                pfVar15 = pfVar33 + 4;
                pfVar22 = pfVar36 + 4;
              }
              if (0xf < uVar69) {
                do {
                  uVar57 = *(undefined8 *)pfVar22;
                  uVar58 = *(undefined8 *)pfVar15;
                  *(ulong *)(pfVar23 + 2) =
                       CONCAT44((float)((ulong)*(undefined8 *)(pfVar23 + 2) >> 0x20) +
                                fVar56 * (float)((ulong)*(undefined8 *)(pfVar22 + 2) >> 0x20) +
                                fVar65 * (float)((ulong)*(undefined8 *)(pfVar15 + 2) >> 0x20),
                                (float)*(undefined8 *)(pfVar23 + 2) +
                                fVar56 * (float)*(undefined8 *)(pfVar22 + 2) +
                                fVar65 * (float)*(undefined8 *)(pfVar15 + 2));
                  *(ulong *)pfVar23 =
                       CONCAT44((float)((ulong)*(undefined8 *)pfVar23 >> 0x20) +
                                fVar56 * (float)((ulong)uVar57 >> 0x20) +
                                fVar65 * (float)((ulong)uVar58 >> 0x20),
                                (float)*(undefined8 *)pfVar23 + fVar56 * (float)uVar57 +
                                fVar65 * (float)uVar58);
                  pfVar24 = pfVar22 + 6;
                  uVar57 = *(undefined8 *)(pfVar22 + 4);
                  pfVar45 = pfVar15 + 6;
                  uVar58 = *(undefined8 *)(pfVar15 + 4);
                  pfVar15 = pfVar15 + 8;
                  pfVar22 = pfVar22 + 8;
                  *(ulong *)(pfVar23 + 6) =
                       CONCAT44((float)((ulong)*(undefined8 *)(pfVar23 + 6) >> 0x20) +
                                fVar56 * (float)((ulong)*(undefined8 *)pfVar24 >> 0x20) +
                                fVar65 * (float)((ulong)*(undefined8 *)pfVar45 >> 0x20),
                                (float)*(undefined8 *)(pfVar23 + 6) +
                                fVar56 * (float)*(undefined8 *)pfVar24 +
                                fVar65 * (float)*(undefined8 *)pfVar45);
                  *(ulong *)(pfVar23 + 4) =
                       CONCAT44((float)((ulong)*(undefined8 *)(pfVar23 + 4) >> 0x20) +
                                fVar56 * (float)((ulong)uVar57 >> 0x20) +
                                fVar65 * (float)((ulong)uVar58 >> 0x20),
                                (float)*(undefined8 *)(pfVar23 + 4) + fVar56 * (float)uVar57 +
                                fVar65 * (float)uVar58);
                  pfVar23 = pfVar23 + 8;
                } while (pfVar23 < pfVar39 + uVar18);
              }
            }
          }
          else if (uVar18 != 0) {
            pfVar15 = pfVar39;
            pfVar22 = pfVar36;
            pfVar23 = pfVar33;
            uVar44 = uVar66;
            fVar62 = fVar56;
            do {
              fVar49 = fVar62 * *pfVar22;
              fVar51 = (float)uVar44;
              fVar62 = fVar62 + (fVar48 - fVar56) / (float)uVar18;
              uVar44 = (ulong)(uint)(fVar51 + (fVar50 - fVar65) / (float)uVar18);
              pfVar24 = pfVar15 + 1;
              *pfVar15 = *pfVar15 + fVar49 + fVar51 * *pfVar23;
              pfVar15 = pfVar24;
              pfVar22 = pfVar22 + 1;
              pfVar23 = pfVar23 + 1;
            } while (pfVar24 < pfVar39 + uVar18);
          }
        }
        lVar34 = *param_2;
        uVar44 = (ulong)(uVar43 + 0xc);
        uVar29 = (ulong)*(ushort *)(param_2 + 2);
        fVar62 = *(float *)(param_1 + 0x1ac);
        fVar49 = *(float *)(*(long *)(param_1 + 0x158) + 0x4c);
        pfVar39 = (float *)(lVar34 + uVar29 * uVar44 + uVar38 * 4);
        if (((fVar47 == fVar59) && (fVar63 == fVar60)) && (fVar49 == fVar62)) {
          if (uVar18 != 0) {
            lVar37 = uVar44 * uVar29 + lVar42;
            uVar69 = lVar34 + lVar37 + uVar20;
            uVar67 = lVar34 + lVar37 + 0x10;
            if (uVar69 <= uVar67) {
              uVar69 = uVar67;
            }
            uVar69 = ~(uVar44 * uVar29 + lVar34 + lVar42) + uVar69;
            pfVar23 = pfVar39;
            pfVar22 = local_a8;
            pfVar15 = local_a0;
            if (((uint)uVar69 >> 4 & 1) == 0) {
              uVar57 = *(undefined8 *)local_a8;
              uVar58 = *(undefined8 *)local_a0;
              *(ulong *)(pfVar39 + 2) =
                   CONCAT44((float)((ulong)*(undefined8 *)(pfVar39 + 2) >> 0x20) * fVar62 +
                            fVar60 * (float)((ulong)*(undefined8 *)(local_a8 + 2) >> 0x20) +
                            fVar59 * (float)((ulong)*(undefined8 *)(local_a0 + 2) >> 0x20),
                            (float)*(undefined8 *)(pfVar39 + 2) * fVar62 +
                            fVar60 * (float)*(undefined8 *)(local_a8 + 2) +
                            fVar59 * (float)*(undefined8 *)(local_a0 + 2));
              *(ulong *)pfVar39 =
                   CONCAT44((float)((ulong)*(undefined8 *)pfVar39 >> 0x20) * fVar62 +
                            fVar60 * (float)((ulong)uVar57 >> 0x20) +
                            fVar59 * (float)((ulong)uVar58 >> 0x20),
                            (float)*(undefined8 *)pfVar39 * fVar62 + fVar60 * (float)uVar57 +
                            fVar59 * (float)uVar58);
              pfVar23 = pfVar39 + 4;
              pfVar22 = local_a8 + 4;
              pfVar15 = local_a0 + 4;
            }
            if (0xf < uVar69) {
              do {
                uVar57 = *(undefined8 *)pfVar22;
                uVar58 = *(undefined8 *)pfVar15;
                *(ulong *)(pfVar23 + 2) =
                     CONCAT44((float)((ulong)*(undefined8 *)(pfVar23 + 2) >> 0x20) * fVar62 +
                              fVar60 * (float)((ulong)*(undefined8 *)(pfVar22 + 2) >> 0x20) +
                              fVar59 * (float)((ulong)*(undefined8 *)(pfVar15 + 2) >> 0x20),
                              (float)*(undefined8 *)(pfVar23 + 2) * fVar62 +
                              fVar60 * (float)*(undefined8 *)(pfVar22 + 2) +
                              fVar59 * (float)*(undefined8 *)(pfVar15 + 2));
                *(ulong *)pfVar23 =
                     CONCAT44((float)((ulong)*(undefined8 *)pfVar23 >> 0x20) * fVar62 +
                              fVar60 * (float)((ulong)uVar57 >> 0x20) +
                              fVar59 * (float)((ulong)uVar58 >> 0x20),
                              (float)*(undefined8 *)pfVar23 * fVar62 + fVar60 * (float)uVar57 +
                              fVar59 * (float)uVar58);
                pfVar24 = pfVar22 + 6;
                uVar57 = *(undefined8 *)(pfVar22 + 4);
                pfVar45 = pfVar15 + 6;
                uVar58 = *(undefined8 *)(pfVar15 + 4);
                pfVar15 = pfVar15 + 8;
                pfVar22 = pfVar22 + 8;
                *(ulong *)(pfVar23 + 6) =
                     CONCAT44((float)((ulong)*(undefined8 *)(pfVar23 + 6) >> 0x20) * fVar62 +
                              fVar60 * (float)((ulong)*(undefined8 *)pfVar24 >> 0x20) +
                              fVar59 * (float)((ulong)*(undefined8 *)pfVar45 >> 0x20),
                              (float)*(undefined8 *)(pfVar23 + 6) * fVar62 +
                              fVar60 * (float)*(undefined8 *)pfVar24 +
                              fVar59 * (float)*(undefined8 *)pfVar45);
                *(ulong *)(pfVar23 + 4) =
                     CONCAT44((float)((ulong)*(undefined8 *)(pfVar23 + 4) >> 0x20) * fVar62 +
                              fVar60 * (float)((ulong)uVar57 >> 0x20) +
                              fVar59 * (float)((ulong)uVar58 >> 0x20),
                              (float)*(undefined8 *)(pfVar23 + 4) * fVar62 + fVar60 * (float)uVar57
                              + fVar59 * (float)uVar58);
                pfVar23 = pfVar23 + 8;
              } while (pfVar23 < pfVar39 + uVar18);
            }
          }
        }
        else if (uVar18 != 0) {
          fVar51 = 1.0 / (float)uVar18;
          fVar49 = fVar49 - fVar62;
          fVar63 = fVar63 - fVar60;
          fVar47 = fVar47 - fVar59;
          pfVar15 = local_a8;
          pfVar22 = local_a0;
          pfVar23 = pfVar39;
          do {
            fVar54 = *pfVar23 * fVar62;
            fVar62 = fVar62 + fVar49 * fVar51;
            fVar52 = fVar60 * *pfVar15;
            fVar53 = fVar59 * *pfVar22;
            fVar60 = fVar60 + fVar63 * fVar51;
            fVar59 = fVar59 + fVar47 * fVar51;
            pfVar24 = pfVar23 + 1;
            *pfVar23 = fVar54 + fVar52 + fVar53;
            pfVar15 = pfVar15 + 1;
            pfVar22 = pfVar22 + 1;
            pfVar23 = pfVar24;
          } while (pfVar24 < pfVar39 + uVar18);
        }
        if (*(char *)(param_1 + 0x138) != '\0') {
          if ((fVar50 == fVar65) && (fVar48 == fVar56)) {
            if (uVar18 != 0) {
              lVar37 = uVar44 * uVar29 + lVar42;
              uVar67 = lVar34 + lVar37 + uVar20;
              uVar20 = lVar34 + lVar37 + 0x10;
              if (uVar67 <= uVar20) {
                uVar67 = uVar20;
              }
              uVar67 = ~(uVar44 * uVar29 + lVar34 + lVar42) + uVar67;
              pfVar23 = pfVar39;
              pfVar15 = pfVar33;
              pfVar22 = pfVar36;
              if (((uint)uVar67 >> 4 & 1) == 0) {
                uVar66 = *(ulong *)pfVar36;
                uVar57 = *(undefined8 *)pfVar33;
                *(ulong *)(pfVar39 + 2) =
                     CONCAT44((float)((ulong)*(undefined8 *)(pfVar39 + 2) >> 0x20) +
                              fVar65 * (float)((ulong)*(undefined8 *)(pfVar36 + 2) >> 0x20) +
                              fVar56 * (float)((ulong)*(undefined8 *)(pfVar33 + 2) >> 0x20),
                              (float)*(undefined8 *)(pfVar39 + 2) +
                              fVar65 * (float)*(undefined8 *)(pfVar36 + 2) +
                              fVar56 * (float)*(undefined8 *)(pfVar33 + 2));
                *(ulong *)pfVar39 =
                     CONCAT44((float)((ulong)*(undefined8 *)pfVar39 >> 0x20) +
                              fVar65 * (float)(uVar66 >> 0x20) +
                              fVar56 * (float)((ulong)uVar57 >> 0x20),
                              (float)*(undefined8 *)pfVar39 + fVar65 * (float)uVar66 +
                              fVar56 * (float)uVar57);
                pfVar23 = pfVar39 + 4;
                pfVar15 = pfVar33 + 4;
                pfVar22 = pfVar36 + 4;
              }
              if (0xf < uVar67) {
                do {
                  uVar57 = *(undefined8 *)pfVar22;
                  uVar58 = *(undefined8 *)pfVar15;
                  *(ulong *)(pfVar23 + 2) =
                       CONCAT44((float)((ulong)*(undefined8 *)(pfVar23 + 2) >> 0x20) +
                                fVar65 * (float)((ulong)*(undefined8 *)(pfVar22 + 2) >> 0x20) +
                                fVar56 * (float)((ulong)*(undefined8 *)(pfVar15 + 2) >> 0x20),
                                (float)*(undefined8 *)(pfVar23 + 2) +
                                fVar65 * (float)*(undefined8 *)(pfVar22 + 2) +
                                fVar56 * (float)*(undefined8 *)(pfVar15 + 2));
                  *(ulong *)pfVar23 =
                       CONCAT44((float)((ulong)*(undefined8 *)pfVar23 >> 0x20) +
                                fVar65 * (float)((ulong)uVar57 >> 0x20) +
                                fVar56 * (float)((ulong)uVar58 >> 0x20),
                                (float)*(undefined8 *)pfVar23 + fVar65 * (float)uVar57 +
                                fVar56 * (float)uVar58);
                  pfVar24 = pfVar22 + 6;
                  uVar57 = *(undefined8 *)(pfVar22 + 4);
                  pfVar45 = pfVar15 + 6;
                  uVar66 = *(ulong *)(pfVar15 + 4);
                  pfVar15 = pfVar15 + 8;
                  pfVar22 = pfVar22 + 8;
                  *(ulong *)(pfVar23 + 6) =
                       CONCAT44((float)((ulong)*(undefined8 *)(pfVar23 + 6) >> 0x20) +
                                fVar65 * (float)((ulong)*(undefined8 *)pfVar24 >> 0x20) +
                                fVar56 * (float)((ulong)*(undefined8 *)pfVar45 >> 0x20),
                                (float)*(undefined8 *)(pfVar23 + 6) +
                                fVar65 * (float)*(undefined8 *)pfVar24 +
                                fVar56 * (float)*(undefined8 *)pfVar45);
                  *(ulong *)(pfVar23 + 4) =
                       CONCAT44((float)((ulong)*(undefined8 *)(pfVar23 + 4) >> 0x20) +
                                fVar65 * (float)((ulong)uVar57 >> 0x20) +
                                fVar56 * (float)(uVar66 >> 0x20),
                                (float)*(undefined8 *)(pfVar23 + 4) + fVar65 * (float)uVar57 +
                                fVar56 * (float)uVar66);
                  pfVar23 = pfVar23 + 8;
                } while (pfVar23 < pfVar39 + uVar18);
              }
            }
          }
          else if (uVar18 != 0) {
            fVar48 = fVar48 - fVar56;
            pfVar15 = pfVar36;
            pfVar22 = pfVar33;
            pfVar23 = pfVar39;
            do {
              fVar59 = (float)uVar66;
              fVar62 = fVar56 * *pfVar22;
              uVar66 = (ulong)(uint)(fVar59 + (fVar50 - fVar65) / (float)uVar18);
              fVar56 = fVar56 + fVar48 / (float)uVar18;
              pfVar24 = pfVar23 + 1;
              *pfVar23 = *pfVar23 + fVar59 * *pfVar15 + fVar62;
              pfVar15 = pfVar15 + 1;
              pfVar22 = pfVar22 + 1;
              pfVar23 = pfVar24;
            } while (pfVar24 < pfVar39 + uVar18);
          }
        }
        uVar43 = (uint)lVar25 | 4;
        if (uVar43 < uVar6) {
          lVar42 = (ulong)uVar43 << 2;
          lVar25 = (ulong)uVar6 - (ulong)uVar43;
          do {
            FUN_02e1d300(*(undefined4 *)(param_1 + 0x1ac),
                         *(undefined4 *)(*(long *)(param_1 + 0x158) + 0x4c),
                         *param_2 + lVar42 * (ulong)*(ushort *)(param_2 + 2) + uVar38 * 4,uVar18);
            lVar42 = lVar42 + 4;
            lVar25 = lVar25 + -1;
          } while (lVar25 != 0);
        }
        if ((uVar9 >> 0xf & 1) != 0) {
          if ((*(uint *)(param_2 + 1) >> 0xf & 1) == 0) {
            lVar42 = 0;
          }
          else {
            lVar42 = *param_2 +
                     (ulong)((*(uint *)(param_2 + 1) & 0xff) - 1) * (ulong)*(ushort *)(param_2 + 2)
                     * 4;
          }
          lVar25 = *(long *)(param_1 + 0x158);
          fVar62 = *(float *)(param_1 + 0x1a8) * 0.707106 * *(float *)(param_1 + 0x1b4);
          uVar20 = (ulong)(uint)fVar62;
          fVar56 = *(float *)(param_1 + 0x1ac);
          fVar59 = *(float *)(lVar25 + 0x48) * 0.707106 * *(float *)(lVar25 + 0x54);
          uVar66 = (ulong)(uint)fVar59;
          pfVar39 = (float *)(lVar42 + uVar38 * 4);
          if ((*(float *)(lVar25 + 0x4c) == fVar56) && (fVar59 == fVar62)) {
            if (uVar18 != 0) {
              pfVar15 = pfVar39 + uVar18;
              pfVar22 = pfVar15;
              if (pfVar15 <= pfVar39 + 4) {
                pfVar22 = pfVar39 + 4;
              }
              pfVar24 = pfVar39;
              pfVar23 = pfVar21;
              pfVar45 = pfVar35;
              if (((uint)(~(ulong)pfVar39 + (long)pfVar22) >> 4 & 1) == 0) {
                pfVar24 = pfVar39 + 4;
                pfVar23 = pfVar21 + 4;
                pfVar45 = pfVar35 + 4;
                fVar59 = (float)*(undefined8 *)pfVar35 + (float)*(undefined8 *)pfVar21;
                fVar60 = (float)((ulong)*(undefined8 *)pfVar35 >> 0x20) +
                         (float)((ulong)*(undefined8 *)pfVar21 >> 0x20);
                uVar66 = CONCAT44(fVar60,fVar59);
                *(ulong *)(pfVar39 + 2) =
                     CONCAT44((float)((ulong)*(undefined8 *)(pfVar39 + 2) >> 0x20) * fVar56 +
                              fVar62 * ((float)((ulong)*(undefined8 *)(pfVar35 + 2) >> 0x20) +
                                       (float)((ulong)*(undefined8 *)(pfVar21 + 2) >> 0x20)),
                              (float)*(undefined8 *)(pfVar39 + 2) * fVar56 +
                              fVar62 * ((float)*(undefined8 *)(pfVar35 + 2) +
                                       (float)*(undefined8 *)(pfVar21 + 2)));
                *(ulong *)pfVar39 =
                     CONCAT44((float)((ulong)*(undefined8 *)pfVar39 >> 0x20) * fVar56 +
                              fVar62 * fVar60,
                              (float)*(undefined8 *)pfVar39 * fVar56 + fVar62 * fVar59);
              }
              if (0xf < ~(ulong)pfVar39 + (long)pfVar22) {
                do {
                  uVar57 = *(undefined8 *)pfVar23;
                  uVar58 = *(undefined8 *)pfVar45;
                  *(ulong *)(pfVar24 + 2) =
                       CONCAT44((float)((ulong)*(undefined8 *)(pfVar24 + 2) >> 0x20) * fVar56 +
                                fVar62 * ((float)((ulong)*(undefined8 *)(pfVar45 + 2) >> 0x20) +
                                         (float)((ulong)*(undefined8 *)(pfVar23 + 2) >> 0x20)),
                                (float)*(undefined8 *)(pfVar24 + 2) * fVar56 +
                                fVar62 * ((float)*(undefined8 *)(pfVar45 + 2) +
                                         (float)*(undefined8 *)(pfVar23 + 2)));
                  *(ulong *)pfVar24 =
                       CONCAT44((float)((ulong)*(undefined8 *)pfVar24 >> 0x20) * fVar56 +
                                fVar62 * ((float)((ulong)uVar58 >> 0x20) +
                                         (float)((ulong)uVar57 >> 0x20)),
                                (float)*(undefined8 *)pfVar24 * fVar56 +
                                fVar62 * ((float)uVar58 + (float)uVar57));
                  pfVar21 = pfVar23 + 6;
                  uVar57 = *(undefined8 *)(pfVar23 + 4);
                  uVar66 = *(ulong *)(pfVar45 + 4);
                  pfVar23 = pfVar23 + 8;
                  *(ulong *)(pfVar24 + 6) =
                       CONCAT44((float)((ulong)*(undefined8 *)(pfVar24 + 6) >> 0x20) * fVar56 +
                                fVar62 * ((float)((ulong)*(undefined8 *)(pfVar45 + 6) >> 0x20) +
                                         (float)((ulong)*(undefined8 *)pfVar21 >> 0x20)),
                                (float)*(undefined8 *)(pfVar24 + 6) * fVar56 +
                                fVar62 * ((float)*(undefined8 *)(pfVar45 + 6) +
                                         (float)*(undefined8 *)pfVar21));
                  *(ulong *)(pfVar24 + 4) =
                       CONCAT44((float)((ulong)*(undefined8 *)(pfVar24 + 4) >> 0x20) * fVar56 +
                                fVar62 * ((float)(uVar66 >> 0x20) + (float)((ulong)uVar57 >> 0x20)),
                                (float)*(undefined8 *)(pfVar24 + 4) * fVar56 +
                                fVar62 * ((float)uVar66 + (float)uVar57));
                  pfVar24 = pfVar24 + 8;
                  pfVar45 = pfVar45 + 8;
                } while (pfVar24 < pfVar15);
              }
            }
          }
          else if (uVar18 != 0) {
            fVar60 = *(float *)(lVar25 + 0x4c) - fVar56;
            fVar62 = (fVar59 - fVar62) / (float)uVar18;
            pfVar15 = pfVar39;
            uVar66 = uVar20;
            do {
              fVar65 = *pfVar15 * fVar56;
              fVar56 = fVar56 + fVar60 / (float)uVar18;
              fVar59 = (float)uVar20;
              fVar63 = (float)uVar66;
              uVar20 = (ulong)(uint)(fVar59 + fVar62);
              uVar66 = (ulong)(uint)(fVar63 + fVar62);
              pfVar22 = pfVar15 + 1;
              *pfVar15 = fVar65 + fVar59 * *pfVar21 + fVar63 * *pfVar35;
              pfVar15 = pfVar22;
              pfVar21 = pfVar21 + 1;
              pfVar35 = pfVar35 + 1;
            } while (pfVar22 < pfVar39 + uVar18);
          }
        }
        lVar42 = *(long *)(param_1 + 0x158);
        uVar16 = uVar18 + uVar16;
        uVar28 = uVar28 - uVar18;
        *(undefined4 *)(param_1 + 0x1ac) = *(undefined4 *)(lVar42 + 0x4c);
        *(undefined4 *)(param_1 + 0x1b0) = *(undefined4 *)(lVar42 + 0x50);
        *(undefined4 *)(param_1 + 0x1b4) = *(undefined4 *)(lVar42 + 0x54);
        *(undefined4 *)(param_1 + 0x19c) = *(undefined4 *)(lVar42 + 0x3c);
        *(undefined4 *)(param_1 + 0x1a4) = *(undefined4 *)(lVar42 + 0x44);
        *(undefined4 *)(param_1 + 0x1a0) = *(undefined4 *)(lVar42 + 0x40);
        *(undefined4 *)(param_1 + 0x1a8) = *(undefined4 *)(lVar42 + 0x48);
        fVar56 = fVar82;
        fVar62 = fVar64;
      } while (uVar28 != 0);
    }
    (**(code **)(**(long **)(param_1 + 0x160) + 0x18))(*(long **)(param_1 + 0x160),__src);
  }
  return;
}


