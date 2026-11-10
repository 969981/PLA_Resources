/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e0fe50; name: FUN_02e0fe50
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_02e0fe50(long param_1,long *param_2)

{
  float *__s;
  float *pfVar1;
  float *__dest;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  long *plVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  float *pfVar10;
  bool bVar11;
  bool bVar12;
  float *__src;
  ulong uVar13;
  uint uVar14;
  float *pfVar15;
  byte bVar16;
  uint uVar17;
  uint uVar18;
  float *pfVar19;
  uint uVar20;
  long lVar21;
  uint *puVar22;
  uint *puVar23;
  float *pfVar24;
  uint uVar25;
  int iVar26;
  uint uVar27;
  int iVar28;
  float *pfVar29;
  float *pfVar30;
  ulong uVar31;
  undefined8 *puVar32;
  ulong *puVar33;
  float *pfVar34;
  float *pfVar35;
  ulong uVar36;
  long lVar37;
  long lVar38;
  ulong uVar39;
  long lVar40;
  byte bVar41;
  float *pfVar42;
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
  undefined8 uVar53;
  undefined8 uVar54;
  float fVar55;
  undefined8 uVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  ulong uVar61;
  ulong uVar62;
  undefined8 uVar63;
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
  float fVar77;
  float fVar78;
  undefined8 uVar79;
  ulong uVar80;
  undefined8 uVar81;
  ulong uVar82;
  undefined8 uVar83;
  ulong uVar84;
  undefined8 uVar85;
  ulong uVar86;
  undefined8 uVar87;
  ulong uVar88;
  undefined8 uVar89;
  ulong uVar90;
  float fVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  float fVar95;
  float fVar96;
  float *local_e0;
  float *local_b8 [5];
  float *local_88;
  
  uVar7 = *(uint *)(param_2 + 1);
  uVar6 = 0;
  if (*(char *)(*(long *)(param_1 + 0x158) + 0x99) != '\0') {
    uVar6 = (uint)((uVar7 & 0x210000) != 0) << 1;
  }
  __src = (float *)(**(code **)(**(long **)(param_1 + 0x160) + 0x10))
                             (*(long **)(param_1 + 0x160),
                              ((ulong)*(byte *)(param_1 + 0x138) + (ulong)uVar6) * 0x400 + 0x1800);
  if (__src != (float *)0x0) {
    __s = __src + 0x200;
    pfVar1 = __src + 0x300;
    local_b8[2] = __src + 0x400;
    local_b8[3] = __src + 0x500;
    if (*(char *)(param_1 + 0x138) == '\0') {
      pfVar15 = (float *)0x0;
      pfVar42 = (float *)0x0;
      local_e0 = (float *)0x0;
      local_88 = (float *)0x0;
    }
    else {
      local_88 = __src + 0x600;
      local_e0 = __src + 0x700;
      if (uVar6 == 2) {
        pfVar15 = __src + 0x800;
        pfVar42 = __src + 0x900;
      }
      else {
        pfVar15 = (float *)0x0;
        pfVar42 = (float *)0x0;
      }
    }
    fVar78 = *(float *)(param_1 + 0x174) * 0.001627189 + 0.707106;
    fVar52 = 1.0 - fVar78 * fVar78;
    fVar59 = SQRT(fVar52);
    if (fVar52 <= 0.0) {
      fVar59 = 0.0;
    }
    fVar52 = *(float *)(*(long *)(param_1 + 0x158) + 0x14);
    uVar61 = (ulong)(uint)fVar52;
    fVar77 = fVar52 * 0.001627189 + 0.707106;
    fVar52 = 1.0 - fVar77 * fVar77;
    fVar57 = SQRT(fVar52);
    if (fVar52 <= 0.0) {
      fVar57 = 0.0;
    }
    if ((uVar7 & 0x210000) == 0) {
      *(undefined4 *)(*(long *)(param_1 + 0x158) + 0x3c) = 0x3f800000;
      *(undefined4 *)(*(long *)(param_1 + 0x158) + 0x40) = 0x3f800000;
    }
    uVar20 = (uint)*(ushort *)((long)param_2 + 0x12);
    local_b8[0] = __s;
    local_b8[1] = pfVar1;
    if (*(ushort *)((long)param_2 + 0x12) != 0) {
      uVar14 = 0;
      __dest = __src + 0x100;
      pfVar2 = __src + 0x201;
      pfVar3 = __src + 0x301;
      pfVar4 = __src + 0x101;
      do {
        uVar17 = uVar20;
        if (0xff < uVar20) {
          uVar17 = 0x100;
        }
        FUN_02e1ce44(param_1,param_2,__src,uVar17);
        uVar25 = *(uint *)(param_1 + 0xd0);
        uVar13 = (ulong)(uVar17 << 2);
        if (uVar25 == 0) {
          memcpy(__dest,__src,uVar13);
        }
        else {
          uVar31 = (ulong)*(uint *)(param_1 + 0xe0);
          pfVar30 = (float *)(*(long *)(param_1 + 0xd8) + uVar31 * 4);
          pfVar34 = __dest;
          pfVar19 = __src;
          uVar18 = uVar17;
          do {
            uVar25 = uVar25 - (int)uVar31;
            uVar27 = uVar18;
            if (uVar25 <= uVar18) {
              uVar27 = uVar25;
            }
            uVar8 = uVar27 >> 2;
            uVar25 = uVar27 & 3;
            pfVar24 = pfVar34;
            pfVar35 = pfVar19;
            pfVar29 = pfVar30;
            if (uVar8 != 0) {
              uVar9 = uVar27 >> 2 & 3;
              pfVar29 = (float *)(ulong)uVar8;
              if (2 < uVar8 - 1) {
                iVar26 = uVar8 - uVar9;
                do {
                  uVar54 = *(undefined8 *)(pfVar30 + 2);
                  uVar53 = *(undefined8 *)pfVar30;
                  iVar26 = iVar26 + -4;
                  uVar56 = *(undefined8 *)pfVar19;
                  *(undefined8 *)(pfVar30 + 2) = *(undefined8 *)(pfVar19 + 2);
                  *(undefined8 *)pfVar30 = uVar56;
                  *(undefined8 *)(pfVar34 + 2) = uVar54;
                  *(undefined8 *)pfVar34 = uVar53;
                  uVar54 = *(undefined8 *)(pfVar30 + 6);
                  uVar53 = *(undefined8 *)(pfVar30 + 4);
                  uVar56 = *(undefined8 *)(pfVar19 + 4);
                  *(undefined8 *)(pfVar30 + 6) = *(undefined8 *)(pfVar19 + 6);
                  *(undefined8 *)(pfVar30 + 4) = uVar56;
                  *(undefined8 *)(pfVar34 + 6) = uVar54;
                  *(undefined8 *)(pfVar34 + 4) = uVar53;
                  uVar54 = *(undefined8 *)(pfVar30 + 10);
                  uVar53 = *(undefined8 *)(pfVar30 + 8);
                  uVar56 = *(undefined8 *)(pfVar19 + 8);
                  *(undefined8 *)(pfVar30 + 10) = *(undefined8 *)(pfVar19 + 10);
                  *(undefined8 *)(pfVar30 + 8) = uVar56;
                  *(undefined8 *)(pfVar34 + 10) = uVar54;
                  *(undefined8 *)(pfVar34 + 8) = uVar53;
                  uVar54 = *(undefined8 *)(pfVar30 + 0xe);
                  uVar53 = *(undefined8 *)(pfVar30 + 0xc);
                  pfVar24 = pfVar19 + 0xe;
                  uVar56 = *(undefined8 *)(pfVar19 + 0xc);
                  pfVar19 = pfVar19 + 0x10;
                  *(undefined8 *)(pfVar30 + 0xe) = *(undefined8 *)pfVar24;
                  *(undefined8 *)(pfVar30 + 0xc) = uVar56;
                  *(undefined8 *)(pfVar34 + 0xe) = uVar54;
                  *(undefined8 *)(pfVar34 + 0xc) = uVar53;
                  pfVar30 = pfVar30 + 0x10;
                  pfVar34 = pfVar34 + 0x10;
                  pfVar35 = pfVar19;
                  pfVar29 = pfVar30;
                  pfVar24 = pfVar34;
                } while (iVar26 != 0);
              }
              if (uVar9 != 0) {
                iVar26 = -uVar9;
                pfVar19 = pfVar24;
                pfVar34 = pfVar35;
                do {
                  pfVar29 = pfVar30 + 4;
                  uVar54 = *(undefined8 *)(pfVar30 + 2);
                  uVar53 = *(undefined8 *)pfVar30;
                  bVar12 = iVar26 != -1;
                  iVar26 = iVar26 + 1;
                  pfVar35 = pfVar34 + 4;
                  uVar56 = *(undefined8 *)pfVar34;
                  *(undefined8 *)(pfVar30 + 2) = *(undefined8 *)(pfVar34 + 2);
                  *(undefined8 *)pfVar30 = uVar56;
                  pfVar24 = pfVar19 + 4;
                  *(undefined8 *)(pfVar19 + 2) = uVar54;
                  *(undefined8 *)pfVar19 = uVar53;
                  pfVar19 = pfVar24;
                  pfVar34 = pfVar35;
                  pfVar30 = pfVar29;
                } while (bVar12);
              }
            }
            pfVar34 = pfVar24;
            pfVar19 = pfVar35;
            pfVar30 = pfVar29;
            if (uVar25 != 0) {
              fVar52 = *pfVar29;
              pfVar19 = pfVar35 + 1;
              pfVar30 = pfVar29 + 1;
              *pfVar29 = *pfVar35;
              pfVar34 = pfVar24 + 1;
              *pfVar24 = fVar52;
              if (1 < uVar25) {
                fVar52 = pfVar29[1];
                pfVar29[1] = pfVar35[1];
                pfVar24[1] = fVar52;
                if (uVar25 == 2) {
                  pfVar19 = pfVar35 + 2;
                  pfVar30 = pfVar29 + 2;
                  pfVar34 = pfVar24 + 2;
                }
                else {
                  fVar52 = pfVar29[2];
                  pfVar19 = pfVar35 + 3;
                  pfVar29[2] = pfVar35[2];
                  pfVar30 = pfVar29 + 3;
                  pfVar24[2] = fVar52;
                  pfVar34 = pfVar24 + 3;
                }
              }
            }
            uVar8 = *(int *)(param_1 + 0xe0) + uVar27;
            uVar25 = *(uint *)(param_1 + 0xd0);
            *(uint *)(param_1 + 0xe0) = uVar8;
            if (uVar8 == uVar25) {
              pfVar30 = *(float **)(param_1 + 0xd8);
              uVar8 = 0;
              *(undefined4 *)(param_1 + 0xe0) = 0;
            }
            uVar31 = (ulong)uVar8;
            uVar18 = uVar18 - uVar27;
          } while (uVar18 != 0);
        }
        uVar25 = *(uint *)(param_1 + 0xb8);
        if ((uVar25 != 0) && (uVar17 != 0)) {
          uVar31 = (ulong)*(uint *)(param_1 + 200);
          pfVar30 = __src;
          pfVar19 = (float *)(*(long *)(param_1 + 0xc0) + uVar31 * 4);
          uVar18 = uVar17;
          do {
            uVar25 = uVar25 - (int)uVar31;
            uVar27 = uVar18;
            if (uVar25 <= uVar18) {
              uVar27 = uVar25;
            }
            uVar8 = uVar27 >> 2;
            uVar25 = uVar27 & 3;
            if (uVar8 == 0) {
              pfVar34 = pfVar19;
              pfVar24 = pfVar30;
              if (uVar25 != 0) goto LAB_02e10374;
            }
            else {
              uVar9 = uVar27 >> 2 & 3;
              pfVar35 = (float *)(ulong)uVar8;
              pfVar34 = pfVar19;
              pfVar29 = (float *)(ulong)(uVar8 - 1);
              pfVar24 = pfVar30;
              if (2 < uVar8 - 1) {
                iVar26 = uVar8 - uVar9;
                do {
                  uVar54 = *(undefined8 *)(pfVar19 + 2);
                  uVar53 = *(undefined8 *)pfVar19;
                  iVar26 = iVar26 + -4;
                  uVar56 = *(undefined8 *)pfVar30;
                  *(undefined8 *)(pfVar19 + 2) = *(undefined8 *)(pfVar30 + 2);
                  *(undefined8 *)pfVar19 = uVar56;
                  *(undefined8 *)(pfVar30 + 2) = uVar54;
                  *(undefined8 *)pfVar30 = uVar53;
                  uVar54 = *(undefined8 *)(pfVar19 + 6);
                  uVar53 = *(undefined8 *)(pfVar19 + 4);
                  uVar56 = *(undefined8 *)(pfVar30 + 4);
                  *(undefined8 *)(pfVar19 + 6) = *(undefined8 *)(pfVar30 + 6);
                  *(undefined8 *)(pfVar19 + 4) = uVar56;
                  *(undefined8 *)(pfVar30 + 6) = uVar54;
                  *(undefined8 *)(pfVar30 + 4) = uVar53;
                  uVar54 = *(undefined8 *)(pfVar19 + 10);
                  uVar53 = *(undefined8 *)(pfVar19 + 8);
                  uVar56 = *(undefined8 *)(pfVar30 + 8);
                  *(undefined8 *)(pfVar19 + 10) = *(undefined8 *)(pfVar30 + 10);
                  *(undefined8 *)(pfVar19 + 8) = uVar56;
                  *(undefined8 *)(pfVar30 + 10) = uVar54;
                  *(undefined8 *)(pfVar30 + 8) = uVar53;
                  uVar54 = *(undefined8 *)(pfVar19 + 0xe);
                  uVar53 = *(undefined8 *)(pfVar19 + 0xc);
                  uVar56 = *(undefined8 *)(pfVar30 + 0xc);
                  *(undefined8 *)(pfVar19 + 0xe) = *(undefined8 *)(pfVar30 + 0xe);
                  *(undefined8 *)(pfVar19 + 0xc) = uVar56;
                  *(undefined8 *)(pfVar30 + 0xe) = uVar54;
                  *(undefined8 *)(pfVar30 + 0xc) = uVar53;
                  pfVar19 = pfVar19 + 0x10;
                  pfVar30 = pfVar30 + 0x10;
                  pfVar35 = pfVar19;
                  pfVar34 = pfVar19;
                  pfVar29 = pfVar30;
                  pfVar24 = pfVar30;
                } while (iVar26 != 0);
              }
              pfVar30 = pfVar29;
              pfVar19 = pfVar35;
              if (uVar9 != 0) {
                iVar26 = -uVar9;
                do {
                  pfVar19 = pfVar34 + 4;
                  uVar54 = *(undefined8 *)(pfVar34 + 2);
                  uVar53 = *(undefined8 *)pfVar34;
                  bVar12 = iVar26 != -1;
                  iVar26 = iVar26 + 1;
                  pfVar30 = pfVar24 + 4;
                  uVar56 = *(undefined8 *)pfVar24;
                  *(undefined8 *)(pfVar34 + 2) = *(undefined8 *)(pfVar24 + 2);
                  *(undefined8 *)pfVar34 = uVar56;
                  *(undefined8 *)(pfVar24 + 2) = uVar54;
                  *(undefined8 *)pfVar24 = uVar53;
                  pfVar34 = pfVar19;
                  pfVar24 = pfVar30;
                } while (bVar12);
              }
              pfVar34 = pfVar19;
              pfVar24 = pfVar30;
              if (uVar25 != 0) {
LAB_02e10374:
                fVar52 = *pfVar19;
                pfVar34 = pfVar19 + 1;
                *pfVar19 = *pfVar24;
                pfVar30 = pfVar24 + 1;
                *pfVar24 = fVar52;
                if (1 < uVar25) {
                  fVar52 = pfVar19[1];
                  pfVar19[1] = pfVar24[1];
                  pfVar24[1] = fVar52;
                  if (uVar25 == 2) {
                    pfVar34 = pfVar19 + 2;
                    pfVar30 = pfVar24 + 2;
                  }
                  else {
                    fVar52 = pfVar19[2];
                    pfVar19[2] = pfVar24[2];
                    pfVar34 = pfVar19 + 3;
                    pfVar30 = pfVar24 + 3;
                    pfVar24[2] = fVar52;
                  }
                }
              }
            }
            uVar8 = *(int *)(param_1 + 200) + uVar27;
            uVar31 = (ulong)uVar8;
            uVar25 = *(uint *)(param_1 + 0xb8);
            *(uint *)(param_1 + 200) = uVar8;
            if (uVar8 == uVar25) {
              pfVar34 = *(float **)(param_1 + 0xc0);
              uVar31 = 0;
              *(undefined4 *)(param_1 + 200) = 0;
            }
            uVar18 = uVar18 - uVar27;
            pfVar19 = pfVar34;
          } while (uVar18 != 0);
        }
        if (*(char *)(param_1 + 0x138) != '\0') {
          FUN_02e1f368(*(undefined8 *)(param_1 + 0x150),__src,local_88,local_e0,uVar17);
          if ((*(char *)(*(long *)(param_1 + 0x158) + 0x98) != '\0') &&
             (bVar16 = *(byte *)(param_1 + 0x134), bVar16 != 0)) {
            uVar18 = uVar17 & 3;
            iVar26 = 4 - uVar18;
            uVar39 = 0;
            bVar41 = 0;
            uVar31 = (ulong)uVar17;
            uVar25 = iVar26 + uVar17;
            do {
              lVar40 = *(long *)(param_1 + 0x148);
              if (*(int *)(lVar40 + uVar39 * 0xa0 + 0x90) == 1) {
                uVar61 = uVar31;
                uVar27 = uVar17;
                if (uVar18 != 0) {
                  memset(local_88 + uVar31,0,(ulong)(uint)(iVar26 * 4));
                  uVar61 = (ulong)uVar25;
                  uVar27 = uVar25;
                }
                puVar32 = (undefined8 *)(lVar40 + uVar39 * 0xa0);
                fVar52 = *(float *)(puVar32 + 0x10);
                fVar55 = *(float *)((long)puVar32 + 0x84);
                fVar58 = *(float *)(puVar32 + 0x11);
                fVar60 = *(float *)((long)puVar32 + 0x8c);
                if (uVar27 != 0) {
                  uVar54 = puVar32[1];
                  uVar53 = *puVar32;
                  uVar63 = puVar32[3];
                  uVar56 = puVar32[2];
                  uVar67 = puVar32[5];
                  uVar65 = puVar32[4];
                  uVar71 = puVar32[7];
                  uVar69 = puVar32[6];
                  uVar75 = puVar32[9];
                  uVar73 = puVar32[8];
                  uVar81 = puVar32[0xb];
                  uVar79 = puVar32[10];
                  uVar85 = puVar32[0xd];
                  uVar83 = puVar32[0xc];
                  uVar89 = puVar32[0xf];
                  uVar87 = puVar32[0xe];
                  pfVar19 = local_88;
                  do {
                    fVar93 = fVar52 * (float)uVar73;
                    fVar94 = fVar52 * (float)((ulong)uVar73 >> 0x20);
                    fVar95 = fVar52 * (float)uVar75;
                    fVar96 = fVar52 * (float)((ulong)uVar75 >> 0x20);
                    fVar43 = (float)uVar79 * fVar55;
                    fVar46 = (float)((ulong)uVar79 >> 0x20) * fVar55;
                    fVar49 = (float)uVar81 * fVar55;
                    fVar50 = (float)((ulong)uVar81 >> 0x20) * fVar55;
                    pfVar30 = pfVar19 + 4;
                    fVar52 = (float)((ulong)*(undefined8 *)(pfVar19 + 2) >> 0x20);
                    fVar44 = (float)uVar83 * fVar58;
                    fVar47 = (float)((ulong)uVar83 >> 0x20) * fVar58;
                    fVar45 = (float)uVar87 * fVar60;
                    fVar48 = (float)((ulong)uVar87 >> 0x20) * fVar60;
                    fVar51 = (float)((ulong)uVar89 >> 0x20) * fVar60;
                    fVar91 = (float)*(undefined8 *)pfVar19;
                    fVar92 = (float)((ulong)*(undefined8 *)pfVar19 >> 0x20);
                    fVar55 = (float)*(undefined8 *)(pfVar19 + 2);
                    fVar60 = fVar95 + fVar49 + (float)uVar85 * fVar58 + (float)uVar89 * fVar60 +
                             (float)uVar54 * fVar55 + (float)uVar63 * fVar55 +
                             (float)uVar67 * fVar92 + (float)uVar71 * fVar91;
                    fVar58 = fVar96 + fVar50 + (float)((ulong)uVar85 >> 0x20) * fVar58 + fVar51 +
                             (float)((ulong)uVar54 >> 0x20) * fVar52 +
                             (float)((ulong)uVar63 >> 0x20) * fVar55 +
                             (float)((ulong)uVar67 >> 0x20) * fVar92 +
                             (float)((ulong)uVar71 >> 0x20) * fVar91;
                    *(ulong *)(pfVar19 + 2) = CONCAT44(fVar58,fVar60);
                    *(ulong *)pfVar19 =
                         CONCAT44(fVar94 + fVar46 + fVar47 + fVar48 +
                                  (float)((ulong)uVar53 >> 0x20) * fVar92 +
                                  (float)((ulong)uVar56 >> 0x20) * fVar55 +
                                  (float)((ulong)uVar65 >> 0x20) * fVar92 +
                                  (float)((ulong)uVar69 >> 0x20) * fVar91,
                                  fVar93 + fVar43 + fVar44 + fVar45 + (float)uVar53 * fVar91 +
                                  (float)uVar56 * fVar55 + (float)uVar65 * fVar92 +
                                  (float)uVar69 * fVar91);
                    pfVar19 = pfVar30;
                  } while (pfVar30 < local_88 + uVar61);
                }
                *(float *)(puVar32 + 0x10) = fVar52;
                *(float *)((long)puVar32 + 0x84) = fVar55;
                *(float *)(puVar32 + 0x11) = fVar58;
                *(float *)((long)puVar32 + 0x8c) = fVar60;
                lVar40 = *(long *)(param_1 + 0x148);
                uVar36 = uVar31;
                uVar27 = uVar17;
                if (uVar18 != 0) {
                  memset(local_e0 + uVar31,0,(ulong)(uint)(iVar26 * 4));
                  uVar36 = (ulong)uVar25;
                  uVar27 = uVar25;
                }
                puVar33 = (ulong *)(lVar40 + (uVar39 + 1) * 0xa0);
                fVar52 = *(float *)(puVar33 + 0x10);
                fVar58 = *(float *)((long)puVar33 + 0x84);
                fVar55 = *(float *)(puVar33 + 0x11);
                fVar60 = *(float *)((long)puVar33 + 0x8c);
                uVar61 = (ulong)(uint)fVar60;
                if (uVar27 != 0) {
                  uVar39 = puVar33[1];
                  uVar61 = *puVar33;
                  uVar64 = puVar33[3];
                  uVar62 = puVar33[2];
                  uVar68 = puVar33[5];
                  uVar66 = puVar33[4];
                  uVar72 = puVar33[7];
                  uVar70 = puVar33[6];
                  uVar76 = puVar33[9];
                  uVar74 = puVar33[8];
                  uVar82 = puVar33[0xb];
                  uVar80 = puVar33[10];
                  uVar86 = puVar33[0xd];
                  uVar84 = puVar33[0xc];
                  uVar90 = puVar33[0xf];
                  uVar88 = puVar33[0xe];
                  pfVar19 = local_e0;
                  do {
                    fVar93 = fVar52 * (float)uVar74;
                    fVar94 = fVar52 * (float)(uVar74 >> 0x20);
                    fVar95 = fVar52 * (float)uVar76;
                    fVar96 = fVar52 * (float)(uVar76 >> 0x20);
                    fVar43 = (float)uVar80 * fVar58;
                    fVar46 = (float)(uVar80 >> 0x20) * fVar58;
                    fVar49 = (float)uVar82 * fVar58;
                    fVar50 = (float)(uVar82 >> 0x20) * fVar58;
                    pfVar30 = pfVar19 + 4;
                    fVar52 = (float)((ulong)*(undefined8 *)(pfVar19 + 2) >> 0x20);
                    fVar44 = (float)uVar84 * fVar55;
                    fVar47 = (float)(uVar84 >> 0x20) * fVar55;
                    fVar45 = (float)uVar88 * fVar60;
                    fVar48 = (float)(uVar88 >> 0x20) * fVar60;
                    fVar51 = (float)(uVar90 >> 0x20) * fVar60;
                    fVar91 = (float)*(undefined8 *)pfVar19;
                    fVar92 = (float)((ulong)*(undefined8 *)pfVar19 >> 0x20);
                    fVar58 = (float)*(undefined8 *)(pfVar19 + 2);
                    fVar60 = fVar95 + fVar49 + (float)uVar86 * fVar55 + (float)uVar90 * fVar60 +
                             (float)uVar39 * fVar58 + (float)uVar64 * fVar58 +
                             (float)uVar68 * fVar92 + (float)uVar72 * fVar91;
                    fVar55 = fVar96 + fVar50 + (float)(uVar86 >> 0x20) * fVar55 + fVar51 +
                             (float)(uVar39 >> 0x20) * fVar52 + (float)(uVar64 >> 0x20) * fVar58 +
                             (float)(uVar68 >> 0x20) * fVar92 + (float)(uVar72 >> 0x20) * fVar91;
                    *(ulong *)(pfVar19 + 2) = CONCAT44(fVar55,fVar60);
                    *(ulong *)pfVar19 =
                         CONCAT44(fVar94 + fVar46 + fVar47 + fVar48 +
                                  (float)(uVar61 >> 0x20) * fVar92 +
                                  (float)(uVar62 >> 0x20) * fVar58 +
                                  (float)(uVar66 >> 0x20) * fVar92 +
                                  (float)(uVar70 >> 0x20) * fVar91,
                                  fVar93 + fVar43 + fVar44 + fVar45 + (float)uVar61 * fVar91 +
                                  (float)uVar62 * fVar58 + (float)uVar66 * fVar92 +
                                  (float)uVar70 * fVar91);
                    pfVar19 = pfVar30;
                  } while (pfVar30 < local_e0 + uVar36);
                }
                *(float *)(puVar33 + 0x10) = fVar52;
                bVar41 = bVar41 + 1;
                *(float *)((long)puVar33 + 0x84) = fVar58;
                *(float *)(puVar33 + 0x11) = fVar55;
                *(float *)((long)puVar33 + 0x8c) = fVar60;
                bVar16 = *(byte *)(param_1 + 0x134);
              }
              bVar41 = bVar41 + 1;
              uVar39 = (ulong)bVar41;
            } while (bVar41 < bVar16);
          }
          if (uVar6 == 2) {
            uVar25 = *(uint *)(param_1 + 0xe8);
            pfVar19 = local_88;
            pfVar30 = local_e0;
            if (uVar25 != 0) {
              if (uVar17 != 0) {
                uVar31 = (ulong)*(uint *)(param_1 + 0xf8);
                pfVar30 = (float *)(*(long *)(param_1 + 0xf0) + uVar31 * 4);
                pfVar34 = pfVar15;
                uVar18 = uVar17;
                do {
                  uVar25 = uVar25 - (int)uVar31;
                  uVar27 = uVar18;
                  if (uVar25 <= uVar18) {
                    uVar27 = uVar25;
                  }
                  uVar8 = uVar27 >> 2;
                  uVar25 = uVar27 & 3;
                  pfVar24 = pfVar34;
                  pfVar35 = pfVar19;
                  pfVar29 = pfVar30;
                  if (uVar8 != 0) {
                    uVar9 = uVar27 >> 2 & 3;
                    pfVar29 = (float *)(ulong)uVar8;
                    if (2 < uVar8 - 1) {
                      iVar26 = uVar8 - uVar9;
                      do {
                        uVar54 = *(undefined8 *)(pfVar30 + 2);
                        uVar53 = *(undefined8 *)pfVar30;
                        iVar26 = iVar26 + -4;
                        uVar56 = *(undefined8 *)pfVar19;
                        *(undefined8 *)(pfVar30 + 2) = *(undefined8 *)(pfVar19 + 2);
                        *(undefined8 *)pfVar30 = uVar56;
                        *(undefined8 *)(pfVar34 + 2) = uVar54;
                        *(undefined8 *)pfVar34 = uVar53;
                        uVar54 = *(undefined8 *)(pfVar30 + 6);
                        uVar53 = *(undefined8 *)(pfVar30 + 4);
                        uVar56 = *(undefined8 *)(pfVar19 + 4);
                        *(undefined8 *)(pfVar30 + 6) = *(undefined8 *)(pfVar19 + 6);
                        *(undefined8 *)(pfVar30 + 4) = uVar56;
                        *(undefined8 *)(pfVar34 + 6) = uVar54;
                        *(undefined8 *)(pfVar34 + 4) = uVar53;
                        uVar54 = *(undefined8 *)(pfVar30 + 10);
                        uVar53 = *(undefined8 *)(pfVar30 + 8);
                        uVar56 = *(undefined8 *)(pfVar19 + 8);
                        *(undefined8 *)(pfVar30 + 10) = *(undefined8 *)(pfVar19 + 10);
                        *(undefined8 *)(pfVar30 + 8) = uVar56;
                        *(undefined8 *)(pfVar34 + 10) = uVar54;
                        *(undefined8 *)(pfVar34 + 8) = uVar53;
                        uVar54 = *(undefined8 *)(pfVar30 + 0xe);
                        uVar53 = *(undefined8 *)(pfVar30 + 0xc);
                        pfVar24 = pfVar19 + 0xe;
                        uVar56 = *(undefined8 *)(pfVar19 + 0xc);
                        pfVar19 = pfVar19 + 0x10;
                        *(undefined8 *)(pfVar30 + 0xe) = *(undefined8 *)pfVar24;
                        *(undefined8 *)(pfVar30 + 0xc) = uVar56;
                        *(undefined8 *)(pfVar34 + 0xe) = uVar54;
                        *(undefined8 *)(pfVar34 + 0xc) = uVar53;
                        pfVar30 = pfVar30 + 0x10;
                        pfVar34 = pfVar34 + 0x10;
                        pfVar35 = pfVar19;
                        pfVar29 = pfVar30;
                        pfVar24 = pfVar34;
                      } while (iVar26 != 0);
                    }
                    if (uVar9 != 0) {
                      iVar26 = -uVar9;
                      pfVar19 = pfVar24;
                      pfVar34 = pfVar35;
                      do {
                        pfVar29 = pfVar30 + 4;
                        uVar54 = *(undefined8 *)(pfVar30 + 2);
                        uVar53 = *(undefined8 *)pfVar30;
                        bVar12 = iVar26 != -1;
                        iVar26 = iVar26 + 1;
                        pfVar35 = pfVar34 + 4;
                        uVar56 = *(undefined8 *)pfVar34;
                        *(undefined8 *)(pfVar30 + 2) = *(undefined8 *)(pfVar34 + 2);
                        *(undefined8 *)pfVar30 = uVar56;
                        pfVar24 = pfVar19 + 4;
                        *(undefined8 *)(pfVar19 + 2) = uVar54;
                        *(undefined8 *)pfVar19 = uVar53;
                        pfVar19 = pfVar24;
                        pfVar34 = pfVar35;
                        pfVar30 = pfVar29;
                      } while (bVar12);
                    }
                  }
                  pfVar34 = pfVar24;
                  pfVar19 = pfVar35;
                  pfVar30 = pfVar29;
                  if (uVar25 != 0) {
                    fVar52 = *pfVar29;
                    pfVar19 = pfVar35 + 1;
                    pfVar30 = pfVar29 + 1;
                    *pfVar29 = *pfVar35;
                    pfVar34 = pfVar24 + 1;
                    *pfVar24 = fVar52;
                    if (1 < uVar25) {
                      fVar52 = pfVar29[1];
                      pfVar29[1] = pfVar35[1];
                      pfVar24[1] = fVar52;
                      if (uVar25 == 2) {
                        pfVar19 = pfVar35 + 2;
                        pfVar30 = pfVar29 + 2;
                        pfVar34 = pfVar24 + 2;
                      }
                      else {
                        fVar52 = pfVar29[2];
                        pfVar19 = pfVar35 + 3;
                        pfVar29[2] = pfVar35[2];
                        pfVar30 = pfVar29 + 3;
                        pfVar24[2] = fVar52;
                        pfVar34 = pfVar24 + 3;
                      }
                    }
                  }
                  uVar8 = *(int *)(param_1 + 0xf8) + uVar27;
                  uVar25 = *(uint *)(param_1 + 0xe8);
                  *(uint *)(param_1 + 0xf8) = uVar8;
                  if (uVar8 == uVar25) {
                    pfVar30 = *(float **)(param_1 + 0xf0);
                    uVar8 = 0;
                    *(undefined4 *)(param_1 + 0xf8) = 0;
                  }
                  uVar31 = (ulong)uVar8;
                  uVar18 = uVar18 - uVar27;
                } while (uVar18 != 0);
                uVar31 = (ulong)*(uint *)(param_1 + 0x110);
                pfVar30 = (float *)(*(long *)(param_1 + 0x108) + uVar31 * 4);
                uVar25 = *(uint *)(param_1 + 0x100);
                pfVar34 = pfVar42;
                pfVar19 = local_e0;
                uVar18 = uVar17;
                do {
                  uVar25 = uVar25 - (int)uVar31;
                  uVar27 = uVar18;
                  if (uVar25 <= uVar18) {
                    uVar27 = uVar25;
                  }
                  uVar8 = uVar27 >> 2;
                  uVar25 = uVar27 & 3;
                  pfVar24 = pfVar34;
                  pfVar35 = pfVar19;
                  pfVar29 = pfVar30;
                  if (uVar8 != 0) {
                    uVar9 = uVar27 >> 2 & 3;
                    pfVar29 = (float *)(ulong)uVar8;
                    if (2 < uVar8 - 1) {
                      iVar26 = uVar8 - uVar9;
                      do {
                        uVar54 = *(undefined8 *)(pfVar30 + 2);
                        uVar53 = *(undefined8 *)pfVar30;
                        iVar26 = iVar26 + -4;
                        uVar56 = *(undefined8 *)pfVar19;
                        *(undefined8 *)(pfVar30 + 2) = *(undefined8 *)(pfVar19 + 2);
                        *(undefined8 *)pfVar30 = uVar56;
                        *(undefined8 *)(pfVar34 + 2) = uVar54;
                        *(undefined8 *)pfVar34 = uVar53;
                        uVar54 = *(undefined8 *)(pfVar30 + 6);
                        uVar53 = *(undefined8 *)(pfVar30 + 4);
                        uVar56 = *(undefined8 *)(pfVar19 + 4);
                        *(undefined8 *)(pfVar30 + 6) = *(undefined8 *)(pfVar19 + 6);
                        *(undefined8 *)(pfVar30 + 4) = uVar56;
                        *(undefined8 *)(pfVar34 + 6) = uVar54;
                        *(undefined8 *)(pfVar34 + 4) = uVar53;
                        uVar54 = *(undefined8 *)(pfVar30 + 10);
                        uVar53 = *(undefined8 *)(pfVar30 + 8);
                        uVar56 = *(undefined8 *)(pfVar19 + 8);
                        *(undefined8 *)(pfVar30 + 10) = *(undefined8 *)(pfVar19 + 10);
                        *(undefined8 *)(pfVar30 + 8) = uVar56;
                        *(undefined8 *)(pfVar34 + 10) = uVar54;
                        *(undefined8 *)(pfVar34 + 8) = uVar53;
                        uVar54 = *(undefined8 *)(pfVar30 + 0xe);
                        uVar53 = *(undefined8 *)(pfVar30 + 0xc);
                        pfVar24 = pfVar19 + 0xe;
                        uVar56 = *(undefined8 *)(pfVar19 + 0xc);
                        pfVar19 = pfVar19 + 0x10;
                        *(undefined8 *)(pfVar30 + 0xe) = *(undefined8 *)pfVar24;
                        *(undefined8 *)(pfVar30 + 0xc) = uVar56;
                        *(undefined8 *)(pfVar34 + 0xe) = uVar54;
                        *(undefined8 *)(pfVar34 + 0xc) = uVar53;
                        pfVar30 = pfVar30 + 0x10;
                        pfVar34 = pfVar34 + 0x10;
                        pfVar35 = pfVar19;
                        pfVar29 = pfVar30;
                        pfVar24 = pfVar34;
                      } while (iVar26 != 0);
                    }
                    if (uVar9 != 0) {
                      iVar26 = -uVar9;
                      pfVar19 = pfVar24;
                      pfVar34 = pfVar35;
                      do {
                        pfVar29 = pfVar30 + 4;
                        uVar54 = *(undefined8 *)(pfVar30 + 2);
                        uVar53 = *(undefined8 *)pfVar30;
                        bVar12 = iVar26 != -1;
                        iVar26 = iVar26 + 1;
                        pfVar35 = pfVar34 + 4;
                        uVar56 = *(undefined8 *)pfVar34;
                        *(undefined8 *)(pfVar30 + 2) = *(undefined8 *)(pfVar34 + 2);
                        *(undefined8 *)pfVar30 = uVar56;
                        pfVar24 = pfVar19 + 4;
                        *(undefined8 *)(pfVar19 + 2) = uVar54;
                        *(undefined8 *)pfVar19 = uVar53;
                        pfVar19 = pfVar24;
                        pfVar34 = pfVar35;
                        pfVar30 = pfVar29;
                      } while (bVar12);
                    }
                  }
                  pfVar34 = pfVar24;
                  pfVar19 = pfVar35;
                  pfVar30 = pfVar29;
                  if (uVar25 != 0) {
                    fVar52 = *pfVar29;
                    pfVar19 = pfVar35 + 1;
                    pfVar30 = pfVar29 + 1;
                    *pfVar29 = *pfVar35;
                    pfVar34 = pfVar24 + 1;
                    *pfVar24 = fVar52;
                    if (1 < uVar25) {
                      fVar52 = pfVar29[1];
                      pfVar29[1] = pfVar35[1];
                      pfVar24[1] = fVar52;
                      if (uVar25 == 2) {
                        pfVar19 = pfVar35 + 2;
                        pfVar30 = pfVar29 + 2;
                        pfVar34 = pfVar24 + 2;
                      }
                      else {
                        fVar52 = pfVar29[2];
                        pfVar19 = pfVar35 + 3;
                        pfVar29[2] = pfVar35[2];
                        pfVar30 = pfVar29 + 3;
                        pfVar24[2] = fVar52;
                        pfVar34 = pfVar24 + 3;
                      }
                    }
                  }
                  uVar8 = *(int *)(param_1 + 0x110) + uVar27;
                  uVar25 = *(uint *)(param_1 + 0x100);
                  *(uint *)(param_1 + 0x110) = uVar8;
                  if (uVar8 == uVar25) {
                    pfVar30 = *(float **)(param_1 + 0x108);
                    uVar8 = 0;
                    *(undefined4 *)(param_1 + 0x110) = 0;
                  }
                  uVar31 = (ulong)uVar8;
                  uVar18 = uVar18 - uVar27;
                } while (uVar18 != 0);
              }
              goto LAB_02e106e4;
            }
          }
          else {
            pfVar19 = pfVar15;
            pfVar30 = pfVar42;
          }
          pfVar42 = pfVar30;
          pfVar15 = pfVar19;
        }
LAB_02e106e4:
        iVar26 = *(int *)(param_1 + 0x18);
        iVar28 = *(int *)(param_1 + 8);
        uVar25 = iVar28 - iVar26;
        pfVar19 = (float *)(*(long *)(param_1 + 0x10) + (ulong)(uint)(iVar26 << 1) * 4);
        if (uVar17 < uVar25) {
          if (uVar17 != 0) {
            pfVar30 = __dest;
            uVar25 = uVar17;
            if ((uVar17 & 1) != 0) {
              fVar52 = *__dest;
              fVar55 = *pfVar19;
              *pfVar19 = fVar52;
              uVar61 = (ulong)(uint)*(float *)(param_1 + 0x1c);
              fVar55 = fVar55 + (fVar52 - pfVar19[1]) * *(float *)(param_1 + 0x1c);
              pfVar19[1] = fVar55;
              pfVar19 = pfVar19 + 2;
              *__dest = fVar55;
              pfVar30 = pfVar4;
              uVar25 = uVar17 - 1;
            }
            if (uVar17 != 1) {
              do {
                fVar52 = *pfVar30;
                uVar25 = uVar25 - 2;
                fVar55 = *pfVar19;
                *pfVar19 = fVar52;
                fVar55 = fVar55 + (fVar52 - pfVar19[1]) * *(float *)(param_1 + 0x1c);
                pfVar19[1] = fVar55;
                *pfVar30 = fVar55;
                fVar52 = pfVar30[1];
                fVar55 = pfVar19[2];
                pfVar19[2] = fVar52;
                fVar55 = fVar55 + (fVar52 - pfVar19[3]) * *(float *)(param_1 + 0x1c);
                pfVar19[3] = fVar55;
                pfVar30[1] = fVar55;
                pfVar30 = pfVar30 + 2;
                pfVar19 = pfVar19 + 4;
              } while (uVar25 != 0);
            }
            iVar26 = *(int *)(param_1 + 0x18);
          }
          *(uint *)(param_1 + 0x18) = iVar26 + uVar17;
        }
        else {
          pfVar30 = __dest;
          uVar18 = uVar17;
          do {
            uVar27 = uVar18;
            if (uVar25 <= uVar18) {
              uVar27 = uVar25;
            }
            pfVar34 = pfVar30;
            if (uVar27 != 0) {
              if (uVar27 != 1) {
                iVar26 = (uVar27 & 1) - uVar27;
                pfVar34 = pfVar19;
                pfVar24 = pfVar30;
                do {
                  fVar52 = *pfVar24;
                  pfVar19 = pfVar34 + 4;
                  pfVar30 = pfVar24 + 2;
                  fVar55 = *pfVar34;
                  *pfVar34 = fVar52;
                  fVar55 = fVar55 + (fVar52 - pfVar34[1]) * *(float *)(param_1 + 0x1c);
                  pfVar34[1] = fVar55;
                  *pfVar24 = fVar55;
                  fVar52 = pfVar24[1];
                  fVar55 = pfVar34[2];
                  pfVar34[2] = fVar52;
                  fVar55 = fVar55 + (fVar52 - pfVar34[3]) * *(float *)(param_1 + 0x1c);
                  iVar26 = iVar26 + 2;
                  pfVar34[3] = fVar55;
                  pfVar24[1] = fVar55;
                  pfVar34 = pfVar19;
                  pfVar24 = pfVar30;
                } while (iVar26 != 0);
              }
              pfVar34 = pfVar30;
              if ((uVar27 & 1) != 0) {
                fVar52 = *pfVar30;
                fVar55 = *pfVar19;
                *pfVar19 = fVar52;
                fVar55 = fVar55 + (fVar52 - pfVar19[1]) * *(float *)(param_1 + 0x1c);
                pfVar19[1] = fVar55;
                pfVar19 = pfVar19 + 2;
                pfVar34 = pfVar30 + 1;
                *pfVar30 = fVar55;
              }
              iVar26 = *(int *)(param_1 + 0x18);
              iVar28 = *(int *)(param_1 + 8);
            }
            iVar26 = iVar26 + uVar27;
            *(int *)(param_1 + 0x18) = iVar26;
            if (iVar26 == iVar28) {
              pfVar19 = *(float **)(param_1 + 0x10);
              iVar26 = 0;
              *(undefined4 *)(param_1 + 0x18) = 0;
            }
            uVar18 = uVar18 - uVar27;
            uVar25 = iVar28 - iVar26;
            pfVar30 = pfVar34;
          } while (uVar18 != 0);
        }
        iVar26 = *(int *)(param_1 + 0x30);
        iVar28 = *(int *)(param_1 + 0x20);
        uVar25 = iVar28 - iVar26;
        pfVar19 = (float *)(*(long *)(param_1 + 0x28) + (ulong)(uint)(iVar26 << 1) * 4);
        if (uVar17 < uVar25) {
          if (uVar17 != 0) {
            pfVar30 = __dest;
            uVar25 = uVar17;
            if ((uVar17 & 1) != 0) {
              fVar52 = *__dest;
              fVar55 = *pfVar19;
              *pfVar19 = fVar52;
              uVar61 = (ulong)(uint)*(float *)(param_1 + 0x34);
              fVar55 = fVar55 + (fVar52 - pfVar19[1]) * *(float *)(param_1 + 0x34);
              pfVar19[1] = fVar55;
              pfVar19 = pfVar19 + 2;
              *__dest = fVar55;
              pfVar30 = pfVar4;
              uVar25 = uVar17 - 1;
            }
            if (uVar17 != 1) {
              do {
                fVar52 = *pfVar30;
                uVar25 = uVar25 - 2;
                fVar55 = *pfVar19;
                *pfVar19 = fVar52;
                fVar55 = fVar55 + (fVar52 - pfVar19[1]) * *(float *)(param_1 + 0x34);
                pfVar19[1] = fVar55;
                *pfVar30 = fVar55;
                fVar52 = pfVar30[1];
                fVar55 = pfVar19[2];
                pfVar19[2] = fVar52;
                fVar55 = fVar55 + (fVar52 - pfVar19[3]) * *(float *)(param_1 + 0x34);
                pfVar19[3] = fVar55;
                pfVar30[1] = fVar55;
                pfVar30 = pfVar30 + 2;
                pfVar19 = pfVar19 + 4;
              } while (uVar25 != 0);
            }
            iVar26 = *(int *)(param_1 + 0x30);
          }
          *(uint *)(param_1 + 0x30) = iVar26 + uVar17;
        }
        else {
          pfVar30 = __dest;
          uVar18 = uVar17;
          do {
            uVar27 = uVar18;
            if (uVar25 <= uVar18) {
              uVar27 = uVar25;
            }
            pfVar34 = pfVar30;
            if (uVar27 != 0) {
              if (uVar27 != 1) {
                iVar26 = (uVar27 & 1) - uVar27;
                pfVar34 = pfVar19;
                pfVar24 = pfVar30;
                do {
                  fVar52 = *pfVar24;
                  pfVar19 = pfVar34 + 4;
                  pfVar30 = pfVar24 + 2;
                  fVar55 = *pfVar34;
                  *pfVar34 = fVar52;
                  fVar55 = fVar55 + (fVar52 - pfVar34[1]) * *(float *)(param_1 + 0x34);
                  pfVar34[1] = fVar55;
                  *pfVar24 = fVar55;
                  fVar52 = pfVar24[1];
                  fVar55 = pfVar34[2];
                  pfVar34[2] = fVar52;
                  fVar55 = fVar55 + (fVar52 - pfVar34[3]) * *(float *)(param_1 + 0x34);
                  iVar26 = iVar26 + 2;
                  pfVar34[3] = fVar55;
                  pfVar24[1] = fVar55;
                  pfVar34 = pfVar19;
                  pfVar24 = pfVar30;
                } while (iVar26 != 0);
              }
              pfVar34 = pfVar30;
              if ((uVar27 & 1) != 0) {
                fVar52 = *pfVar30;
                fVar55 = *pfVar19;
                *pfVar19 = fVar52;
                fVar55 = fVar55 + (fVar52 - pfVar19[1]) * *(float *)(param_1 + 0x34);
                pfVar19[1] = fVar55;
                pfVar19 = pfVar19 + 2;
                pfVar34 = pfVar30 + 1;
                *pfVar30 = fVar55;
              }
              iVar26 = *(int *)(param_1 + 0x30);
              iVar28 = *(int *)(param_1 + 0x20);
            }
            iVar26 = iVar26 + uVar27;
            *(int *)(param_1 + 0x30) = iVar26;
            if (iVar26 == iVar28) {
              pfVar19 = *(float **)(param_1 + 0x28);
              iVar26 = 0;
              *(undefined4 *)(param_1 + 0x30) = 0;
            }
            uVar18 = uVar18 - uVar27;
            uVar25 = iVar28 - iVar26;
            pfVar30 = pfVar34;
          } while (uVar18 != 0);
        }
        iVar26 = *(int *)(param_1 + 0x48);
        iVar28 = *(int *)(param_1 + 0x38);
        uVar25 = iVar28 - iVar26;
        pfVar19 = (float *)(*(long *)(param_1 + 0x40) + (ulong)(uint)(iVar26 << 1) * 4);
        if (uVar17 < uVar25) {
          if (uVar17 != 0) {
            pfVar30 = __dest;
            uVar25 = uVar17;
            if ((uVar17 & 1) != 0) {
              fVar52 = *__dest;
              fVar55 = *pfVar19;
              *pfVar19 = fVar52;
              uVar61 = (ulong)(uint)*(float *)(param_1 + 0x4c);
              fVar55 = fVar55 + (fVar52 - pfVar19[1]) * *(float *)(param_1 + 0x4c);
              pfVar19[1] = fVar55;
              pfVar19 = pfVar19 + 2;
              *__dest = fVar55;
              pfVar30 = pfVar4;
              uVar25 = uVar17 - 1;
            }
            if (uVar17 != 1) {
              do {
                fVar52 = *pfVar30;
                uVar25 = uVar25 - 2;
                fVar55 = *pfVar19;
                *pfVar19 = fVar52;
                fVar55 = fVar55 + (fVar52 - pfVar19[1]) * *(float *)(param_1 + 0x4c);
                pfVar19[1] = fVar55;
                *pfVar30 = fVar55;
                fVar52 = pfVar30[1];
                fVar55 = pfVar19[2];
                pfVar19[2] = fVar52;
                fVar55 = fVar55 + (fVar52 - pfVar19[3]) * *(float *)(param_1 + 0x4c);
                pfVar19[3] = fVar55;
                pfVar30[1] = fVar55;
                pfVar30 = pfVar30 + 2;
                pfVar19 = pfVar19 + 4;
              } while (uVar25 != 0);
            }
            iVar26 = *(int *)(param_1 + 0x48);
          }
          *(uint *)(param_1 + 0x48) = iVar26 + uVar17;
        }
        else {
          pfVar30 = __dest;
          uVar18 = uVar17;
          do {
            uVar27 = uVar18;
            if (uVar25 <= uVar18) {
              uVar27 = uVar25;
            }
            pfVar34 = pfVar30;
            if (uVar27 != 0) {
              if (uVar27 != 1) {
                iVar26 = (uVar27 & 1) - uVar27;
                pfVar34 = pfVar19;
                pfVar24 = pfVar30;
                do {
                  fVar52 = *pfVar24;
                  pfVar19 = pfVar34 + 4;
                  pfVar30 = pfVar24 + 2;
                  fVar55 = *pfVar34;
                  *pfVar34 = fVar52;
                  fVar55 = fVar55 + (fVar52 - pfVar34[1]) * *(float *)(param_1 + 0x4c);
                  pfVar34[1] = fVar55;
                  *pfVar24 = fVar55;
                  fVar52 = pfVar24[1];
                  fVar55 = pfVar34[2];
                  pfVar34[2] = fVar52;
                  fVar55 = fVar55 + (fVar52 - pfVar34[3]) * *(float *)(param_1 + 0x4c);
                  iVar26 = iVar26 + 2;
                  pfVar34[3] = fVar55;
                  pfVar24[1] = fVar55;
                  pfVar34 = pfVar19;
                  pfVar24 = pfVar30;
                } while (iVar26 != 0);
              }
              pfVar34 = pfVar30;
              if ((uVar27 & 1) != 0) {
                fVar52 = *pfVar30;
                fVar55 = *pfVar19;
                *pfVar19 = fVar52;
                fVar55 = fVar55 + (fVar52 - pfVar19[1]) * *(float *)(param_1 + 0x4c);
                pfVar19[1] = fVar55;
                pfVar19 = pfVar19 + 2;
                pfVar34 = pfVar30 + 1;
                *pfVar30 = fVar55;
              }
              iVar26 = *(int *)(param_1 + 0x48);
              iVar28 = *(int *)(param_1 + 0x38);
            }
            iVar26 = iVar26 + uVar27;
            *(int *)(param_1 + 0x48) = iVar26;
            if (iVar26 == iVar28) {
              pfVar19 = *(float **)(param_1 + 0x40);
              iVar26 = 0;
              *(undefined4 *)(param_1 + 0x48) = 0;
            }
            uVar18 = uVar18 - uVar27;
            uVar25 = iVar28 - iVar26;
            pfVar30 = pfVar34;
          } while (uVar18 != 0);
        }
        iVar26 = *(int *)(param_1 + 0x60);
        iVar28 = *(int *)(param_1 + 0x50);
        uVar25 = iVar28 - iVar26;
        pfVar19 = (float *)(*(long *)(param_1 + 0x58) + (ulong)(uint)(iVar26 << 1) * 4);
        if (uVar17 < uVar25) {
          if (uVar17 != 0) {
            pfVar30 = __dest;
            uVar25 = uVar17;
            if ((uVar17 & 1) != 0) {
              fVar52 = *__dest;
              fVar55 = *pfVar19;
              *pfVar19 = fVar52;
              uVar61 = (ulong)(uint)*(float *)(param_1 + 100);
              fVar55 = fVar55 + (fVar52 - pfVar19[1]) * *(float *)(param_1 + 100);
              pfVar19[1] = fVar55;
              pfVar19 = pfVar19 + 2;
              *__dest = fVar55;
              pfVar30 = pfVar4;
              uVar25 = uVar17 - 1;
            }
            if (uVar17 != 1) {
              do {
                fVar52 = *pfVar30;
                uVar25 = uVar25 - 2;
                fVar55 = *pfVar19;
                *pfVar19 = fVar52;
                fVar55 = fVar55 + (fVar52 - pfVar19[1]) * *(float *)(param_1 + 100);
                pfVar19[1] = fVar55;
                *pfVar30 = fVar55;
                fVar52 = pfVar30[1];
                fVar55 = pfVar19[2];
                pfVar19[2] = fVar52;
                fVar55 = fVar55 + (fVar52 - pfVar19[3]) * *(float *)(param_1 + 100);
                pfVar19[3] = fVar55;
                pfVar30[1] = fVar55;
                pfVar30 = pfVar30 + 2;
                pfVar19 = pfVar19 + 4;
              } while (uVar25 != 0);
            }
            iVar26 = *(int *)(param_1 + 0x60);
          }
          *(uint *)(param_1 + 0x60) = iVar26 + uVar17;
        }
        else {
          pfVar30 = __dest;
          uVar18 = uVar17;
          do {
            uVar27 = uVar18;
            if (uVar25 <= uVar18) {
              uVar27 = uVar25;
            }
            pfVar34 = pfVar30;
            if (uVar27 != 0) {
              if (uVar27 != 1) {
                iVar26 = (uVar27 & 1) - uVar27;
                pfVar34 = pfVar19;
                pfVar24 = pfVar30;
                do {
                  fVar52 = *pfVar24;
                  pfVar19 = pfVar34 + 4;
                  pfVar30 = pfVar24 + 2;
                  fVar55 = *pfVar34;
                  *pfVar34 = fVar52;
                  fVar55 = fVar55 + (fVar52 - pfVar34[1]) * *(float *)(param_1 + 100);
                  pfVar34[1] = fVar55;
                  *pfVar24 = fVar55;
                  fVar52 = pfVar24[1];
                  fVar55 = pfVar34[2];
                  pfVar34[2] = fVar52;
                  fVar55 = fVar55 + (fVar52 - pfVar34[3]) * *(float *)(param_1 + 100);
                  iVar26 = iVar26 + 2;
                  pfVar34[3] = fVar55;
                  pfVar24[1] = fVar55;
                  pfVar34 = pfVar19;
                  pfVar24 = pfVar30;
                } while (iVar26 != 0);
              }
              pfVar34 = pfVar30;
              if ((uVar27 & 1) != 0) {
                fVar52 = *pfVar30;
                fVar55 = *pfVar19;
                *pfVar19 = fVar52;
                fVar55 = fVar55 + (fVar52 - pfVar19[1]) * *(float *)(param_1 + 100);
                pfVar19[1] = fVar55;
                pfVar19 = pfVar19 + 2;
                pfVar34 = pfVar30 + 1;
                *pfVar30 = fVar55;
              }
              iVar26 = *(int *)(param_1 + 0x60);
              iVar28 = *(int *)(param_1 + 0x50);
            }
            iVar26 = iVar26 + uVar27;
            *(int *)(param_1 + 0x60) = iVar26;
            if (iVar26 == iVar28) {
              pfVar19 = *(float **)(param_1 + 0x58);
              iVar26 = 0;
              *(undefined4 *)(param_1 + 0x60) = 0;
            }
            uVar18 = uVar18 - uVar27;
            uVar25 = iVar28 - iVar26;
            pfVar30 = pfVar34;
          } while (uVar18 != 0);
        }
        FUN_02e1d0ac(param_1,__dest,uVar17);
        memset(__s,0,0x1000);
        if (*(int *)(param_1 + 0x128) != 0) {
          uVar31 = 0;
          lVar40 = *(long *)(param_1 + 0x140);
          do {
            if (uVar17 != 0) {
              lVar21 = lVar40 + uVar31 * 0xa8;
              plVar5 = (long *)(lVar21 + 0x98);
              puVar22 = (uint *)(lVar21 + 0xa0);
              uVar39 = (ulong)*puVar22;
              puVar23 = (uint *)(lVar40 + uVar31 * 0xa8 + 0x90);
              uVar25 = *puVar23;
              pfVar30 = __dest;
              pfVar19 = (float *)(*plVar5 + uVar39 * 4);
              uVar18 = uVar17;
              do {
                uVar25 = uVar25 - (int)uVar39;
                uVar27 = uVar18;
                if (uVar25 <= uVar18) {
                  uVar27 = uVar25;
                }
                uVar8 = uVar27 >> 2;
                uVar25 = uVar27 & 3;
                if (uVar8 == 0) {
                  pfVar34 = pfVar19;
                  pfVar24 = pfVar30;
                  if (uVar25 != 0) goto LAB_02e10c7c;
                }
                else {
                  uVar9 = uVar27 >> 2 & 3;
                  pfVar35 = (float *)(ulong)uVar8;
                  pfVar34 = pfVar19;
                  pfVar29 = (float *)(ulong)(uVar8 - 1);
                  pfVar24 = pfVar30;
                  if (2 < uVar8 - 1) {
                    iVar26 = uVar8 - uVar9;
                    do {
                      uVar54 = *(undefined8 *)(pfVar19 + 2);
                      uVar53 = *(undefined8 *)pfVar19;
                      iVar26 = iVar26 + -4;
                      uVar56 = *(undefined8 *)pfVar30;
                      *(undefined8 *)(pfVar19 + 2) = *(undefined8 *)(pfVar30 + 2);
                      *(undefined8 *)pfVar19 = uVar56;
                      *(undefined8 *)(pfVar30 + 2) = uVar54;
                      *(undefined8 *)pfVar30 = uVar53;
                      uVar54 = *(undefined8 *)(pfVar19 + 6);
                      uVar53 = *(undefined8 *)(pfVar19 + 4);
                      uVar56 = *(undefined8 *)(pfVar30 + 4);
                      *(undefined8 *)(pfVar19 + 6) = *(undefined8 *)(pfVar30 + 6);
                      *(undefined8 *)(pfVar19 + 4) = uVar56;
                      *(undefined8 *)(pfVar30 + 6) = uVar54;
                      *(undefined8 *)(pfVar30 + 4) = uVar53;
                      uVar54 = *(undefined8 *)(pfVar19 + 10);
                      uVar53 = *(undefined8 *)(pfVar19 + 8);
                      uVar56 = *(undefined8 *)(pfVar30 + 8);
                      *(undefined8 *)(pfVar19 + 10) = *(undefined8 *)(pfVar30 + 10);
                      *(undefined8 *)(pfVar19 + 8) = uVar56;
                      *(undefined8 *)(pfVar30 + 10) = uVar54;
                      *(undefined8 *)(pfVar30 + 8) = uVar53;
                      uVar54 = *(undefined8 *)(pfVar19 + 0xe);
                      uVar53 = *(undefined8 *)(pfVar19 + 0xc);
                      uVar56 = *(undefined8 *)(pfVar30 + 0xc);
                      *(undefined8 *)(pfVar19 + 0xe) = *(undefined8 *)(pfVar30 + 0xe);
                      *(undefined8 *)(pfVar19 + 0xc) = uVar56;
                      *(undefined8 *)(pfVar30 + 0xe) = uVar54;
                      *(undefined8 *)(pfVar30 + 0xc) = uVar53;
                      pfVar19 = pfVar19 + 0x10;
                      pfVar30 = pfVar30 + 0x10;
                      pfVar35 = pfVar19;
                      pfVar34 = pfVar19;
                      pfVar29 = pfVar30;
                      pfVar24 = pfVar30;
                    } while (iVar26 != 0);
                  }
                  pfVar30 = pfVar29;
                  pfVar19 = pfVar35;
                  if (uVar9 != 0) {
                    iVar26 = -uVar9;
                    do {
                      pfVar19 = pfVar34 + 4;
                      uVar54 = *(undefined8 *)(pfVar34 + 2);
                      uVar53 = *(undefined8 *)pfVar34;
                      bVar12 = iVar26 != -1;
                      iVar26 = iVar26 + 1;
                      pfVar30 = pfVar24 + 4;
                      uVar56 = *(undefined8 *)pfVar24;
                      *(undefined8 *)(pfVar34 + 2) = *(undefined8 *)(pfVar24 + 2);
                      *(undefined8 *)pfVar34 = uVar56;
                      *(undefined8 *)(pfVar24 + 2) = uVar54;
                      *(undefined8 *)pfVar24 = uVar53;
                      pfVar34 = pfVar19;
                      pfVar24 = pfVar30;
                    } while (bVar12);
                  }
                  pfVar34 = pfVar19;
                  pfVar24 = pfVar30;
                  if (uVar25 != 0) {
LAB_02e10c7c:
                    fVar52 = *pfVar19;
                    pfVar34 = pfVar19 + 1;
                    *pfVar19 = *pfVar24;
                    pfVar30 = pfVar24 + 1;
                    *pfVar24 = fVar52;
                    if (1 < uVar25) {
                      fVar52 = pfVar19[1];
                      pfVar19[1] = pfVar24[1];
                      pfVar24[1] = fVar52;
                      if (uVar25 == 2) {
                        pfVar34 = pfVar19 + 2;
                        pfVar30 = pfVar24 + 2;
                      }
                      else {
                        fVar52 = pfVar19[2];
                        pfVar19[2] = pfVar24[2];
                        pfVar34 = pfVar19 + 3;
                        pfVar30 = pfVar24 + 3;
                        pfVar24[2] = fVar52;
                      }
                    }
                  }
                }
                uVar8 = *puVar22 + uVar27;
                uVar39 = (ulong)uVar8;
                *puVar22 = uVar8;
                uVar25 = *puVar23;
                if (uVar8 == uVar25) {
                  pfVar34 = (float *)*plVar5;
                  uVar39 = 0;
                  *puVar22 = 0;
                }
                uVar18 = uVar18 - uVar27;
                pfVar19 = pfVar34;
              } while (uVar18 != 0);
              lVar40 = *(long *)(param_1 + 0x140);
            }
            FUN_02e1e698(lVar40 + uVar31 * 0xa8,__dest,local_b8[(uint)uVar31 & 1],
                         local_b8[(uint)uVar31 & 1 | 2],uVar17);
            uVar31 = uVar31 + 1;
            if (*(uint *)(param_1 + 0x128) <= uVar31) break;
            lVar40 = *(long *)(param_1 + 0x140);
          } while( true );
        }
        fVar58 = *(float *)(param_1 + 0x124) * 1.4142135;
        fVar55 = *(float *)(param_1 + 0x70);
        fVar52 = *(float *)(param_1 + 0x74);
        if (uVar17 == 0) {
          uVar61 = (ulong)(uint)fVar52;
        }
        else {
          pfVar19 = (float *)((long)__src + uVar13 + 0x800);
          fVar60 = *(float *)(param_1 + 0x78);
          if (pfVar19 <= pfVar2) {
            pfVar19 = pfVar2;
          }
          uVar31 = (long)pfVar19 + (-0x801 - (long)__src);
          if (((uint)uVar31 >> 2 & 1) == 0) {
            fVar43 = *__s;
            fVar52 = (fVar43 * fVar58 - fVar55) + fVar52 * fVar60;
            uVar61 = (ulong)(uint)fVar52;
            *__s = fVar52;
            pfVar19 = pfVar2;
            fVar55 = fVar43 * fVar58;
          }
          else {
            pfVar19 = __s;
          }
          if (3 < uVar31) {
            do {
              fVar43 = (*pfVar19 * fVar58 - fVar55) + fVar52 * fVar60;
              fVar55 = pfVar19[1] * fVar58;
              fVar52 = (fVar55 - *pfVar19 * fVar58) + fVar43 * fVar60;
              uVar61 = (ulong)(uint)fVar52;
              pfVar30 = pfVar19 + 2;
              *pfVar19 = fVar43;
              pfVar19[1] = fVar52;
              pfVar19 = pfVar30;
            } while (pfVar30 < __s + uVar17);
          }
        }
        *(float *)(param_1 + 0x70) = fVar55;
        fVar55 = *(float *)(param_1 + 0x7c);
        fVar52 = *(float *)(param_1 + 0x80);
        *(int *)(param_1 + 0x74) = (int)uVar61;
        if (uVar17 == 0) {
          uVar61 = (ulong)(uint)fVar52;
        }
        else {
          pfVar19 = (float *)((long)__src + uVar13 + 0xc00);
          fVar60 = *(float *)(param_1 + 0x84);
          if (pfVar19 <= pfVar3) {
            pfVar19 = pfVar3;
          }
          uVar31 = (long)pfVar19 + (-0xc01 - (long)__src);
          pfVar19 = pfVar1;
          if (((uint)uVar31 >> 2 & 1) == 0) {
            fVar43 = *pfVar1;
            fVar52 = (fVar43 * fVar58 - fVar55) + fVar52 * fVar60;
            uVar61 = (ulong)(uint)fVar52;
            *pfVar1 = fVar52;
            pfVar19 = pfVar3;
            fVar55 = fVar43 * fVar58;
          }
          if (3 < uVar31) {
            do {
              fVar43 = *pfVar19;
              fVar52 = (fVar43 * fVar58 - fVar55) + fVar52 * fVar60;
              fVar55 = pfVar19[1] * fVar58;
              *pfVar19 = fVar52;
              fVar52 = (fVar55 - fVar43 * fVar58) + fVar52 * fVar60;
              uVar61 = (ulong)(uint)fVar52;
              pfVar19[1] = fVar52;
              pfVar19 = pfVar19 + 2;
            } while (pfVar19 < pfVar1 + uVar17);
          }
        }
        *(float *)(param_1 + 0x7c) = fVar55;
        fVar55 = *(float *)(param_1 + 0x88);
        fVar52 = *(float *)(param_1 + 0x8c);
        *(int *)(param_1 + 0x80) = (int)uVar61;
        if (uVar17 == 0) {
          uVar61 = (ulong)(uint)fVar52;
        }
        else {
          pfVar19 = local_b8[2] + uVar17;
          fVar60 = *(float *)(param_1 + 0x90);
          pfVar30 = pfVar19;
          if (pfVar19 <= local_b8[2] + 1) {
            pfVar30 = local_b8[2] + 1;
          }
          pfVar34 = local_b8[2];
          if (((uint)(~(ulong)local_b8[2] + (long)pfVar30) >> 2 & 1) == 0) {
            fVar43 = *local_b8[2];
            fVar52 = (fVar43 * fVar58 - fVar55) + fVar52 * fVar60;
            uVar61 = (ulong)(uint)fVar52;
            *local_b8[2] = fVar52;
            fVar55 = fVar43 * fVar58;
            pfVar34 = local_b8[2] + 1;
          }
          if (3 < ~(ulong)local_b8[2] + (long)pfVar30) {
            do {
              fVar43 = *pfVar34;
              fVar52 = (fVar43 * fVar58 - fVar55) + fVar52 * fVar60;
              fVar55 = pfVar34[1] * fVar58;
              *pfVar34 = fVar52;
              fVar52 = (fVar55 - fVar43 * fVar58) + fVar52 * fVar60;
              uVar61 = (ulong)(uint)fVar52;
              pfVar34[1] = fVar52;
              pfVar34 = pfVar34 + 2;
            } while (pfVar34 < pfVar19);
          }
        }
        *(float *)(param_1 + 0x88) = fVar55;
        fVar55 = *(float *)(param_1 + 0x94);
        fVar52 = *(float *)(param_1 + 0x98);
        *(int *)(param_1 + 0x8c) = (int)uVar61;
        if (uVar17 == 0) {
          uVar61 = (ulong)(uint)fVar52;
          *(float *)(param_1 + 0x94) = fVar55;
          *(float *)(param_1 + 0x98) = fVar52;
          if ((uVar7 >> 0xc & 1) == 0) goto LAB_02e10fe8;
LAB_02e111d8:
          lVar40 = *(long *)(param_1 + 0x158);
          fVar58 = *(float *)(param_1 + 0x1b4) * *(float *)(param_1 + 0x19c);
          fVar44 = *(float *)(lVar40 + 0x54) * *(float *)(lVar40 + 0x3c);
          fVar55 = fVar58 * fVar78;
          fVar58 = fVar58 * fVar59;
          fVar43 = fVar44 * fVar77;
          fVar44 = fVar44 * fVar57;
          fVar52 = *(float *)(param_1 + 0x1ac);
          fVar60 = *(float *)(lVar40 + 0x4c);
          uVar61 = (ulong)(uint)fVar60;
          lVar40 = *param_2;
          pfVar19 = (float *)(lVar40 + (ulong)uVar14 * 4);
          bVar12 = false;
          if ((fVar44 == fVar58) && (bVar12 = false, !NAN(fVar60) && !NAN(fVar52))) {
            bVar12 = fVar60 == fVar52;
          }
          bVar11 = false;
          if ((bVar12) && (bVar11 = false, !NAN(fVar43) && !NAN(fVar55))) {
            bVar11 = fVar43 == fVar55;
          }
          if (bVar11) {
            if (uVar17 != 0) {
              uVar31 = lVar40 + (ulong)uVar14 * 4;
              pfVar30 = (float *)(uVar31 + 0x10);
              pfVar34 = pfVar19 + uVar17;
              pfVar24 = pfVar34;
              if (pfVar34 <= pfVar30) {
                pfVar24 = pfVar30;
              }
              uVar31 = ~uVar31 + (long)pfVar24;
              pfVar24 = __s;
              pfVar30 = pfVar1;
              pfVar35 = pfVar19;
              if (((uint)uVar31 >> 4 & 1) == 0) {
                uVar61 = CONCAT44((float)(*(ulong *)pfVar19 >> 0x20) * fVar52 +
                                  fVar55 * (float)((ulong)*(undefined8 *)__s >> 0x20) +
                                  fVar58 * (float)((ulong)*(undefined8 *)pfVar1 >> 0x20),
                                  (float)*(ulong *)pfVar19 * fVar52 +
                                  fVar55 * (float)*(undefined8 *)__s +
                                  fVar58 * (float)*(undefined8 *)pfVar1);
                *(ulong *)(pfVar19 + 2) =
                     CONCAT44((float)(*(ulong *)(pfVar19 + 2) >> 0x20) * fVar52 +
                              fVar55 * (float)((ulong)*(undefined8 *)(__src + 0x202) >> 0x20) +
                              fVar58 * (float)((ulong)*(undefined8 *)(__src + 0x302) >> 0x20),
                              (float)*(ulong *)(pfVar19 + 2) * fVar52 +
                              fVar55 * (float)*(undefined8 *)(__src + 0x202) +
                              fVar58 * (float)*(undefined8 *)(__src + 0x302));
                *(ulong *)pfVar19 = uVar61;
                pfVar24 = __src + 0x204;
                pfVar30 = __src + 0x304;
                pfVar35 = pfVar19 + 4;
              }
              if (0xf < uVar31) {
                do {
                  uVar53 = *(undefined8 *)pfVar24;
                  uVar54 = *(undefined8 *)pfVar30;
                  *(ulong *)(pfVar35 + 2) =
                       CONCAT44((float)(*(ulong *)(pfVar35 + 2) >> 0x20) * fVar52 +
                                fVar55 * (float)((ulong)*(undefined8 *)(pfVar24 + 2) >> 0x20) +
                                fVar58 * (float)((ulong)*(undefined8 *)(pfVar30 + 2) >> 0x20),
                                (float)*(ulong *)(pfVar35 + 2) * fVar52 +
                                fVar55 * (float)*(undefined8 *)(pfVar24 + 2) +
                                fVar58 * (float)*(undefined8 *)(pfVar30 + 2));
                  *(ulong *)pfVar35 =
                       CONCAT44((float)(*(ulong *)pfVar35 >> 0x20) * fVar52 +
                                fVar55 * (float)((ulong)uVar53 >> 0x20) +
                                fVar58 * (float)((ulong)uVar54 >> 0x20),
                                (float)*(ulong *)pfVar35 * fVar52 + fVar55 * (float)uVar53 +
                                fVar58 * (float)uVar54);
                  pfVar29 = pfVar24 + 6;
                  uVar61 = *(ulong *)(pfVar24 + 4);
                  pfVar10 = pfVar30 + 6;
                  uVar53 = *(undefined8 *)(pfVar30 + 4);
                  pfVar30 = pfVar30 + 8;
                  pfVar24 = pfVar24 + 8;
                  *(ulong *)(pfVar35 + 6) =
                       CONCAT44((float)(*(ulong *)(pfVar35 + 6) >> 0x20) * fVar52 +
                                fVar55 * (float)((ulong)*(undefined8 *)pfVar29 >> 0x20) +
                                fVar58 * (float)((ulong)*(undefined8 *)pfVar10 >> 0x20),
                                (float)*(ulong *)(pfVar35 + 6) * fVar52 +
                                fVar55 * (float)*(undefined8 *)pfVar29 +
                                fVar58 * (float)*(undefined8 *)pfVar10);
                  *(ulong *)(pfVar35 + 4) =
                       CONCAT44((float)(*(ulong *)(pfVar35 + 4) >> 0x20) * fVar52 +
                                fVar55 * (float)(uVar61 >> 0x20) +
                                fVar58 * (float)((ulong)uVar53 >> 0x20),
                                (float)*(ulong *)(pfVar35 + 4) * fVar52 + fVar55 * (float)uVar61 +
                                fVar58 * (float)uVar53);
                  pfVar35 = pfVar35 + 8;
                } while (pfVar35 < pfVar34);
              }
            }
          }
          else if (uVar17 != 0) {
            fVar45 = 1.0 / (float)uVar17;
            fVar43 = fVar43 - fVar55;
            fVar44 = fVar44 - fVar58;
            fVar60 = (fVar60 - fVar52) * fVar45;
            uVar61 = (ulong)(uint)fVar60;
            pfVar34 = pfVar19;
            pfVar30 = __s;
            do {
              fVar48 = *pfVar34 * fVar52;
              fVar46 = fVar55 * *pfVar30;
              pfVar24 = pfVar30 + 0x100;
              pfVar30 = pfVar30 + 1;
              fVar47 = fVar58 * *pfVar24;
              fVar52 = fVar52 + fVar60;
              fVar55 = fVar55 + fVar43 * fVar45;
              fVar58 = fVar58 + fVar44 * fVar45;
              pfVar24 = pfVar34 + 1;
              *pfVar34 = fVar48 + fVar46 + fVar47;
              pfVar34 = pfVar24;
            } while (pfVar24 < pfVar19 + uVar17);
          }
          if (*(char *)(param_1 + 0x138) != '\0') {
            fVar55 = *(float *)(param_1 + 0x1b0) * *(float *)(param_1 + 0x19c);
            fVar60 = *(float *)(*(long *)(param_1 + 0x158) + 0x50) *
                     *(float *)(*(long *)(param_1 + 0x158) + 0x3c);
            fVar52 = fVar55 * fVar78;
            fVar55 = fVar55 * fVar59;
            fVar58 = fVar60 * fVar77;
            fVar60 = fVar60 * fVar57;
            uVar61 = (ulong)(uint)fVar60;
            bVar12 = false;
            if ((fVar58 == fVar52) && (bVar12 = false, !NAN(fVar60) && !NAN(fVar55))) {
              bVar12 = fVar60 == fVar55;
            }
            if (bVar12) {
              if (uVar17 != 0) {
                uVar31 = lVar40 + (ulong)uVar14 * 4;
                pfVar30 = (float *)(uVar31 + 0x10);
                pfVar34 = pfVar19 + uVar17;
                pfVar24 = pfVar34;
                if (pfVar34 <= pfVar30) {
                  pfVar24 = pfVar30;
                }
                uVar31 = ~uVar31 + (long)pfVar24;
                pfVar30 = local_e0;
                pfVar24 = local_88;
                if (((uint)uVar31 >> 4 & 1) == 0) {
                  uVar61 = *(ulong *)local_88;
                  uVar53 = *(undefined8 *)local_e0;
                  *(ulong *)(pfVar19 + 2) =
                       CONCAT44((float)(*(ulong *)(pfVar19 + 2) >> 0x20) +
                                fVar52 * (float)((ulong)*(undefined8 *)(local_88 + 2) >> 0x20) +
                                fVar55 * (float)((ulong)*(undefined8 *)(local_e0 + 2) >> 0x20),
                                (float)*(ulong *)(pfVar19 + 2) +
                                fVar52 * (float)*(undefined8 *)(local_88 + 2) +
                                fVar55 * (float)*(undefined8 *)(local_e0 + 2));
                  *(ulong *)pfVar19 =
                       CONCAT44((float)(*(ulong *)pfVar19 >> 0x20) +
                                fVar52 * (float)(uVar61 >> 0x20) +
                                fVar55 * (float)((ulong)uVar53 >> 0x20),
                                (float)*(ulong *)pfVar19 + fVar52 * (float)uVar61 +
                                fVar55 * (float)uVar53);
                  pfVar19 = pfVar19 + 4;
                  pfVar30 = local_e0 + 4;
                  pfVar24 = local_88 + 4;
                }
                if (0xf < uVar31) {
                  do {
                    uVar53 = *(undefined8 *)pfVar24;
                    uVar54 = *(undefined8 *)pfVar30;
                    *(ulong *)(pfVar19 + 2) =
                         CONCAT44((float)(*(ulong *)(pfVar19 + 2) >> 0x20) +
                                  fVar52 * (float)((ulong)*(undefined8 *)(pfVar24 + 2) >> 0x20) +
                                  fVar55 * (float)((ulong)*(undefined8 *)(pfVar30 + 2) >> 0x20),
                                  (float)*(ulong *)(pfVar19 + 2) +
                                  fVar52 * (float)*(undefined8 *)(pfVar24 + 2) +
                                  fVar55 * (float)*(undefined8 *)(pfVar30 + 2));
                    *(ulong *)pfVar19 =
                         CONCAT44((float)(*(ulong *)pfVar19 >> 0x20) +
                                  fVar52 * (float)((ulong)uVar53 >> 0x20) +
                                  fVar55 * (float)((ulong)uVar54 >> 0x20),
                                  (float)*(ulong *)pfVar19 + fVar52 * (float)uVar53 +
                                  fVar55 * (float)uVar54);
                    pfVar35 = pfVar24 + 6;
                    uVar53 = *(undefined8 *)(pfVar24 + 4);
                    pfVar29 = pfVar30 + 6;
                    uVar61 = *(ulong *)(pfVar30 + 4);
                    pfVar30 = pfVar30 + 8;
                    pfVar24 = pfVar24 + 8;
                    *(ulong *)(pfVar19 + 6) =
                         CONCAT44((float)(*(ulong *)(pfVar19 + 6) >> 0x20) +
                                  fVar52 * (float)((ulong)*(undefined8 *)pfVar35 >> 0x20) +
                                  fVar55 * (float)((ulong)*(undefined8 *)pfVar29 >> 0x20),
                                  (float)*(ulong *)(pfVar19 + 6) +
                                  fVar52 * (float)*(undefined8 *)pfVar35 +
                                  fVar55 * (float)*(undefined8 *)pfVar29);
                    *(ulong *)(pfVar19 + 4) =
                         CONCAT44((float)(*(ulong *)(pfVar19 + 4) >> 0x20) +
                                  fVar52 * (float)((ulong)uVar53 >> 0x20) +
                                  fVar55 * (float)(uVar61 >> 0x20),
                                  (float)*(ulong *)(pfVar19 + 4) + fVar52 * (float)uVar53 +
                                  fVar55 * (float)uVar61);
                    pfVar19 = pfVar19 + 8;
                  } while (pfVar19 < pfVar34);
                }
              }
            }
            else if (uVar17 != 0) {
              fVar58 = fVar58 - fVar52;
              fVar60 = (fVar60 - fVar55) / (float)uVar17;
              uVar61 = (ulong)(uint)fVar60;
              pfVar30 = pfVar19;
              pfVar34 = local_88;
              pfVar24 = local_e0;
              do {
                uVar31 = 1;
                fVar43 = fVar52 * *pfVar34;
                fVar44 = fVar55 * *pfVar24;
                fVar52 = fVar52 + fVar58 / (float)uVar17;
                fVar55 = fVar55 + fVar60;
                pfVar35 = pfVar30 + 1;
                *pfVar30 = *pfVar30 + fVar43 + fVar44;
                pfVar30 = pfVar35;
                pfVar34 = pfVar34 + 1;
                pfVar24 = pfVar24 + 1;
              } while (pfVar35 < pfVar19 + uVar17);
              goto joined_r0x02e124a8;
            }
          }
          uVar31 = 1;
        }
        else {
          pfVar19 = local_b8[3] + uVar17;
          fVar60 = *(float *)(param_1 + 0x9c);
          pfVar30 = pfVar19;
          if (pfVar19 <= local_b8[3] + 1) {
            pfVar30 = local_b8[3] + 1;
          }
          pfVar34 = local_b8[3];
          if (((uint)(~(ulong)local_b8[3] + (long)pfVar30) >> 2 & 1) == 0) {
            fVar43 = *local_b8[3];
            fVar52 = (fVar43 * fVar58 - fVar55) + fVar52 * fVar60;
            uVar61 = (ulong)(uint)fVar52;
            *local_b8[3] = fVar52;
            fVar55 = fVar43 * fVar58;
            pfVar34 = local_b8[3] + 1;
          }
          if (3 < ~(ulong)local_b8[3] + (long)pfVar30) {
            do {
              fVar43 = *pfVar34;
              fVar52 = (fVar43 * fVar58 - fVar55) + fVar52 * fVar60;
              fVar55 = pfVar34[1] * fVar58;
              *pfVar34 = fVar52;
              fVar52 = (fVar55 - fVar43 * fVar58) + fVar52 * fVar60;
              uVar61 = (ulong)(uint)fVar52;
              pfVar34[1] = fVar52;
              pfVar34 = pfVar34 + 2;
            } while (pfVar34 < pfVar19);
          }
          *(float *)(param_1 + 0x94) = fVar55;
          *(int *)(param_1 + 0x98) = (int)uVar61;
          if ((uVar7 >> 0xc & 1) != 0) goto LAB_02e111d8;
LAB_02e10fe8:
          uVar31 = 0;
        }
joined_r0x02e124a8:
        if ((uVar7 >> 0xd & 1) != 0) {
          lVar37 = *(long *)(param_1 + 0x158);
          uVar36 = (ulong)(uint)((int)uVar31 << 2);
          lVar21 = (ulong)uVar14 * 4;
          fVar58 = *(float *)(param_1 + 0x1b4) * *(float *)(param_1 + 0x19c);
          fVar44 = *(float *)(lVar37 + 0x54) * *(float *)(lVar37 + 0x3c);
          fVar43 = fVar44 * fVar57;
          fVar55 = fVar58 * fVar59;
          fVar58 = fVar58 * fVar78;
          fVar44 = fVar44 * fVar77;
          lVar40 = *param_2;
          uVar39 = (ulong)*(ushort *)(param_2 + 2);
          fVar52 = *(float *)(param_1 + 0x1ac);
          fVar60 = *(float *)(lVar37 + 0x4c);
          uVar61 = (ulong)(uint)fVar60;
          pfVar19 = (float *)(lVar40 + uVar39 * uVar36 + (ulong)uVar14 * 4);
          bVar12 = false;
          if ((fVar44 == fVar58) && (bVar12 = false, !NAN(fVar60) && !NAN(fVar52))) {
            bVar12 = fVar60 == fVar52;
          }
          bVar11 = false;
          if ((bVar12) && (bVar11 = false, !NAN(fVar43) && !NAN(fVar55))) {
            bVar11 = fVar43 == fVar55;
          }
          if (bVar11) {
            if (uVar17 != 0) {
              lVar37 = lVar21 + uVar36 * uVar39;
              uVar64 = lVar40 + lVar37 + uVar13;
              uVar62 = lVar40 + lVar37 + 0x10;
              if (uVar64 <= uVar62) {
                uVar64 = uVar62;
              }
              uVar64 = ~(lVar40 + uVar31 * uVar39 * 4 + lVar21) + uVar64;
              pfVar34 = __s;
              pfVar30 = pfVar1;
              pfVar24 = pfVar19;
              if (((uint)uVar64 >> 4 & 1) == 0) {
                uVar61 = CONCAT44((float)(*(ulong *)pfVar19 >> 0x20) * fVar52 +
                                  fVar55 * (float)((ulong)*(undefined8 *)__s >> 0x20) +
                                  fVar58 * (float)((ulong)*(undefined8 *)pfVar1 >> 0x20),
                                  (float)*(ulong *)pfVar19 * fVar52 +
                                  fVar55 * (float)*(undefined8 *)__s +
                                  fVar58 * (float)*(undefined8 *)pfVar1);
                *(ulong *)(pfVar19 + 2) =
                     CONCAT44((float)(*(ulong *)(pfVar19 + 2) >> 0x20) * fVar52 +
                              fVar55 * (float)((ulong)*(undefined8 *)(__src + 0x202) >> 0x20) +
                              fVar58 * (float)((ulong)*(undefined8 *)(__src + 0x302) >> 0x20),
                              (float)*(ulong *)(pfVar19 + 2) * fVar52 +
                              fVar55 * (float)*(undefined8 *)(__src + 0x202) +
                              fVar58 * (float)*(undefined8 *)(__src + 0x302));
                *(ulong *)pfVar19 = uVar61;
                pfVar34 = __src + 0x204;
                pfVar30 = __src + 0x304;
                pfVar24 = pfVar19 + 4;
              }
              if (0xf < uVar64) {
                do {
                  uVar53 = *(undefined8 *)pfVar34;
                  uVar54 = *(undefined8 *)pfVar30;
                  *(ulong *)(pfVar24 + 2) =
                       CONCAT44((float)(*(ulong *)(pfVar24 + 2) >> 0x20) * fVar52 +
                                fVar55 * (float)((ulong)*(undefined8 *)(pfVar34 + 2) >> 0x20) +
                                fVar58 * (float)((ulong)*(undefined8 *)(pfVar30 + 2) >> 0x20),
                                (float)*(ulong *)(pfVar24 + 2) * fVar52 +
                                fVar55 * (float)*(undefined8 *)(pfVar34 + 2) +
                                fVar58 * (float)*(undefined8 *)(pfVar30 + 2));
                  *(ulong *)pfVar24 =
                       CONCAT44((float)(*(ulong *)pfVar24 >> 0x20) * fVar52 +
                                fVar55 * (float)((ulong)uVar53 >> 0x20) +
                                fVar58 * (float)((ulong)uVar54 >> 0x20),
                                (float)*(ulong *)pfVar24 * fVar52 + fVar55 * (float)uVar53 +
                                fVar58 * (float)uVar54);
                  pfVar35 = pfVar34 + 6;
                  uVar61 = *(ulong *)(pfVar34 + 4);
                  pfVar29 = pfVar30 + 6;
                  uVar53 = *(undefined8 *)(pfVar30 + 4);
                  pfVar30 = pfVar30 + 8;
                  pfVar34 = pfVar34 + 8;
                  *(ulong *)(pfVar24 + 6) =
                       CONCAT44((float)(*(ulong *)(pfVar24 + 6) >> 0x20) * fVar52 +
                                fVar55 * (float)((ulong)*(undefined8 *)pfVar35 >> 0x20) +
                                fVar58 * (float)((ulong)*(undefined8 *)pfVar29 >> 0x20),
                                (float)*(ulong *)(pfVar24 + 6) * fVar52 +
                                fVar55 * (float)*(undefined8 *)pfVar35 +
                                fVar58 * (float)*(undefined8 *)pfVar29);
                  *(ulong *)(pfVar24 + 4) =
                       CONCAT44((float)(*(ulong *)(pfVar24 + 4) >> 0x20) * fVar52 +
                                fVar55 * (float)(uVar61 >> 0x20) +
                                fVar58 * (float)((ulong)uVar53 >> 0x20),
                                (float)*(ulong *)(pfVar24 + 4) * fVar52 + fVar55 * (float)uVar61 +
                                fVar58 * (float)uVar53);
                  pfVar24 = pfVar24 + 8;
                } while (pfVar24 < pfVar19 + uVar17);
              }
            }
          }
          else if (uVar17 != 0) {
            fVar45 = 1.0 / (float)uVar17;
            fVar43 = fVar43 - fVar55;
            fVar44 = fVar44 - fVar58;
            fVar60 = (fVar60 - fVar52) * fVar45;
            uVar61 = (ulong)(uint)fVar60;
            pfVar30 = __s;
            pfVar34 = pfVar19;
            do {
              fVar48 = *pfVar34 * fVar52;
              fVar46 = fVar55 * *pfVar30;
              pfVar24 = pfVar30 + 0x100;
              pfVar30 = pfVar30 + 1;
              fVar47 = fVar58 * *pfVar24;
              fVar52 = fVar52 + fVar60;
              fVar55 = fVar55 + fVar43 * fVar45;
              fVar58 = fVar58 + fVar44 * fVar45;
              pfVar24 = pfVar34 + 1;
              *pfVar34 = fVar48 + fVar46 + fVar47;
              pfVar34 = pfVar24;
            } while (pfVar24 < pfVar19 + uVar17);
          }
          if (*(char *)(param_1 + 0x138) != '\0') {
            fVar55 = *(float *)(param_1 + 0x1b0) * *(float *)(param_1 + 0x19c);
            fVar60 = *(float *)(*(long *)(param_1 + 0x158) + 0x50) *
                     *(float *)(*(long *)(param_1 + 0x158) + 0x3c);
            fVar52 = fVar55 * fVar59;
            fVar55 = fVar55 * fVar78;
            fVar58 = fVar60 * fVar57;
            fVar60 = fVar60 * fVar77;
            uVar61 = (ulong)(uint)fVar60;
            bVar12 = false;
            if ((fVar58 == fVar52) && (bVar12 = false, !NAN(fVar60) && !NAN(fVar55))) {
              bVar12 = fVar60 == fVar55;
            }
            if (bVar12) {
              if (uVar17 != 0) {
                lVar37 = lVar21 + uVar36 * uVar39;
                uVar62 = lVar40 + lVar37 + uVar13;
                uVar36 = lVar40 + lVar37 + 0x10;
                if (uVar62 <= uVar36) {
                  uVar62 = uVar36;
                }
                uVar62 = ~(lVar40 + uVar31 * uVar39 * 4 + lVar21) + uVar62;
                pfVar24 = pfVar19;
                pfVar30 = local_e0;
                pfVar34 = local_88;
                if (((uint)uVar62 >> 4 & 1) == 0) {
                  uVar61 = *(ulong *)local_88;
                  uVar53 = *(undefined8 *)local_e0;
                  *(ulong *)(pfVar19 + 2) =
                       CONCAT44((float)(*(ulong *)(pfVar19 + 2) >> 0x20) +
                                fVar52 * (float)((ulong)*(undefined8 *)(local_88 + 2) >> 0x20) +
                                fVar55 * (float)((ulong)*(undefined8 *)(local_e0 + 2) >> 0x20),
                                (float)*(ulong *)(pfVar19 + 2) +
                                fVar52 * (float)*(undefined8 *)(local_88 + 2) +
                                fVar55 * (float)*(undefined8 *)(local_e0 + 2));
                  *(ulong *)pfVar19 =
                       CONCAT44((float)(*(ulong *)pfVar19 >> 0x20) +
                                fVar52 * (float)(uVar61 >> 0x20) +
                                fVar55 * (float)((ulong)uVar53 >> 0x20),
                                (float)*(ulong *)pfVar19 + fVar52 * (float)uVar61 +
                                fVar55 * (float)uVar53);
                  pfVar24 = pfVar19 + 4;
                  pfVar30 = local_e0 + 4;
                  pfVar34 = local_88 + 4;
                }
                if (0xf < uVar62) {
                  do {
                    uVar53 = *(undefined8 *)pfVar34;
                    uVar54 = *(undefined8 *)pfVar30;
                    *(ulong *)(pfVar24 + 2) =
                         CONCAT44((float)(*(ulong *)(pfVar24 + 2) >> 0x20) +
                                  fVar52 * (float)((ulong)*(undefined8 *)(pfVar34 + 2) >> 0x20) +
                                  fVar55 * (float)((ulong)*(undefined8 *)(pfVar30 + 2) >> 0x20),
                                  (float)*(ulong *)(pfVar24 + 2) +
                                  fVar52 * (float)*(undefined8 *)(pfVar34 + 2) +
                                  fVar55 * (float)*(undefined8 *)(pfVar30 + 2));
                    *(ulong *)pfVar24 =
                         CONCAT44((float)(*(ulong *)pfVar24 >> 0x20) +
                                  fVar52 * (float)((ulong)uVar53 >> 0x20) +
                                  fVar55 * (float)((ulong)uVar54 >> 0x20),
                                  (float)*(ulong *)pfVar24 + fVar52 * (float)uVar53 +
                                  fVar55 * (float)uVar54);
                    pfVar35 = pfVar34 + 6;
                    uVar53 = *(undefined8 *)(pfVar34 + 4);
                    pfVar29 = pfVar30 + 6;
                    uVar61 = *(ulong *)(pfVar30 + 4);
                    pfVar30 = pfVar30 + 8;
                    pfVar34 = pfVar34 + 8;
                    *(ulong *)(pfVar24 + 6) =
                         CONCAT44((float)(*(ulong *)(pfVar24 + 6) >> 0x20) +
                                  fVar52 * (float)((ulong)*(undefined8 *)pfVar35 >> 0x20) +
                                  fVar55 * (float)((ulong)*(undefined8 *)pfVar29 >> 0x20),
                                  (float)*(ulong *)(pfVar24 + 6) +
                                  fVar52 * (float)*(undefined8 *)pfVar35 +
                                  fVar55 * (float)*(undefined8 *)pfVar29);
                    *(ulong *)(pfVar24 + 4) =
                         CONCAT44((float)(*(ulong *)(pfVar24 + 4) >> 0x20) +
                                  fVar52 * (float)((ulong)uVar53 >> 0x20) +
                                  fVar55 * (float)(uVar61 >> 0x20),
                                  (float)*(ulong *)(pfVar24 + 4) + fVar52 * (float)uVar53 +
                                  fVar55 * (float)uVar61);
                    pfVar24 = pfVar24 + 8;
                  } while (pfVar24 < pfVar19 + uVar17);
                }
              }
            }
            else if (uVar17 != 0) {
              fVar58 = fVar58 - fVar52;
              fVar60 = (fVar60 - fVar55) / (float)uVar17;
              uVar61 = (ulong)(uint)fVar60;
              pfVar30 = pfVar19;
              pfVar34 = local_88;
              pfVar24 = local_e0;
              do {
                fVar43 = fVar52 * *pfVar34;
                fVar44 = fVar55 * *pfVar24;
                fVar52 = fVar52 + fVar58 / (float)uVar17;
                fVar55 = fVar55 + fVar60;
                pfVar35 = pfVar30 + 1;
                *pfVar30 = *pfVar30 + fVar43 + fVar44;
                pfVar30 = pfVar35;
                pfVar34 = pfVar34 + 1;
                pfVar24 = pfVar24 + 1;
              } while (pfVar35 < pfVar19 + uVar17);
            }
          }
          uVar31 = (ulong)((int)uVar31 + 1);
        }
        if ((uVar7 >> 0xe & 1) != 0) {
          lVar21 = *(long *)(param_1 + 0x158);
          fVar55 = *(float *)(param_1 + 0x1a4) * 0.707106 * *(float *)(param_1 + 0x1b4);
          uVar39 = (ulong)(uint)fVar55;
          fVar52 = *(float *)(param_1 + 0x1ac);
          lVar40 = *param_2;
          pfVar19 = (float *)(lVar40 + uVar31 * *(ushort *)(param_2 + 2) * 4 + (ulong)uVar14 * 4);
          fVar58 = *(float *)(lVar21 + 0x44) * 0.707106 * *(float *)(lVar21 + 0x54);
          uVar61 = (ulong)(uint)fVar58;
          bVar12 = false;
          if ((*(float *)(lVar21 + 0x4c) == fVar52) &&
             (bVar12 = false, !NAN(fVar58) && !NAN(fVar55))) {
            bVar12 = fVar58 == fVar55;
          }
          if (bVar12) {
            if (uVar17 != 0) {
              lVar37 = uVar31 * *(ushort *)(param_2 + 2) * 4;
              lVar21 = lVar37 + (ulong)uVar14 * 4;
              uVar36 = lVar40 + lVar21 + uVar13;
              uVar39 = lVar40 + lVar21 + 0x10;
              if (uVar36 <= uVar39) {
                uVar36 = uVar39;
              }
              uVar36 = ~(lVar37 + lVar40 + (ulong)uVar14 * 4) + uVar36;
              pfVar34 = pfVar19;
              pfVar30 = local_b8[2];
              pfVar24 = local_b8[3];
              if (((uint)uVar36 >> 4 & 1) == 0) {
                fVar58 = (float)*(undefined8 *)local_b8[3] + (float)*(undefined8 *)local_b8[2];
                fVar60 = (float)((ulong)*(undefined8 *)local_b8[3] >> 0x20) +
                         (float)((ulong)*(undefined8 *)local_b8[2] >> 0x20);
                uVar61 = CONCAT44(fVar60,fVar58);
                *(ulong *)(pfVar19 + 2) =
                     CONCAT44((float)((ulong)*(undefined8 *)(pfVar19 + 2) >> 0x20) * fVar52 +
                              fVar55 * ((float)((ulong)*(undefined8 *)(local_b8[3] + 2) >> 0x20) +
                                       (float)((ulong)*(undefined8 *)(local_b8[2] + 2) >> 0x20)),
                              (float)*(undefined8 *)(pfVar19 + 2) * fVar52 +
                              fVar55 * ((float)*(undefined8 *)(local_b8[3] + 2) +
                                       (float)*(undefined8 *)(local_b8[2] + 2)));
                *(ulong *)pfVar19 =
                     CONCAT44((float)((ulong)*(undefined8 *)pfVar19 >> 0x20) * fVar52 +
                              fVar55 * fVar60,
                              (float)*(undefined8 *)pfVar19 * fVar52 + fVar55 * fVar58);
                pfVar34 = pfVar19 + 4;
                pfVar30 = local_b8[2] + 4;
                pfVar24 = local_b8[3] + 4;
              }
              if (0xf < uVar36) {
                do {
                  uVar53 = *(undefined8 *)pfVar30;
                  uVar54 = *(undefined8 *)pfVar24;
                  *(ulong *)(pfVar34 + 2) =
                       CONCAT44((float)((ulong)*(undefined8 *)(pfVar34 + 2) >> 0x20) * fVar52 +
                                fVar55 * ((float)((ulong)*(undefined8 *)(pfVar24 + 2) >> 0x20) +
                                         (float)((ulong)*(undefined8 *)(pfVar30 + 2) >> 0x20)),
                                (float)*(undefined8 *)(pfVar34 + 2) * fVar52 +
                                fVar55 * ((float)*(undefined8 *)(pfVar24 + 2) +
                                         (float)*(undefined8 *)(pfVar30 + 2)));
                  *(ulong *)pfVar34 =
                       CONCAT44((float)((ulong)*(undefined8 *)pfVar34 >> 0x20) * fVar52 +
                                fVar55 * ((float)((ulong)uVar54 >> 0x20) +
                                         (float)((ulong)uVar53 >> 0x20)),
                                (float)*(undefined8 *)pfVar34 * fVar52 +
                                fVar55 * ((float)uVar54 + (float)uVar53));
                  pfVar35 = pfVar30 + 6;
                  uVar53 = *(undefined8 *)(pfVar30 + 4);
                  uVar61 = *(ulong *)(pfVar24 + 4);
                  pfVar30 = pfVar30 + 8;
                  *(ulong *)(pfVar34 + 6) =
                       CONCAT44((float)((ulong)*(undefined8 *)(pfVar34 + 6) >> 0x20) * fVar52 +
                                fVar55 * ((float)((ulong)*(undefined8 *)(pfVar24 + 6) >> 0x20) +
                                         (float)((ulong)*(undefined8 *)pfVar35 >> 0x20)),
                                (float)*(undefined8 *)(pfVar34 + 6) * fVar52 +
                                fVar55 * ((float)*(undefined8 *)(pfVar24 + 6) +
                                         (float)*(undefined8 *)pfVar35));
                  *(ulong *)(pfVar34 + 4) =
                       CONCAT44((float)((ulong)*(undefined8 *)(pfVar34 + 4) >> 0x20) * fVar52 +
                                fVar55 * ((float)(uVar61 >> 0x20) + (float)((ulong)uVar53 >> 0x20)),
                                (float)*(undefined8 *)(pfVar34 + 4) * fVar52 +
                                fVar55 * ((float)uVar61 + (float)uVar53));
                  pfVar34 = pfVar34 + 8;
                  pfVar24 = pfVar24 + 8;
                } while (pfVar34 < pfVar19 + uVar17);
              }
            }
          }
          else if (uVar17 != 0) {
            fVar60 = *(float *)(lVar21 + 0x4c) - fVar52;
            fVar55 = (fVar58 - fVar55) / (float)uVar17;
            pfVar30 = pfVar19;
            pfVar34 = local_b8[2];
            pfVar24 = local_b8[3];
            uVar61 = uVar39;
            do {
              fVar44 = *pfVar30 * fVar52;
              fVar52 = fVar52 + fVar60 / (float)uVar17;
              fVar58 = (float)uVar39;
              fVar43 = (float)uVar61;
              uVar39 = (ulong)(uint)(fVar58 + fVar55);
              uVar61 = (ulong)(uint)(fVar43 + fVar55);
              pfVar35 = pfVar30 + 1;
              *pfVar30 = fVar44 + fVar58 * *pfVar34 + fVar43 * *pfVar24;
              pfVar30 = pfVar35;
              pfVar34 = pfVar34 + 1;
              pfVar24 = pfVar24 + 1;
            } while (pfVar35 < pfVar19 + uVar17);
          }
          uVar31 = (ulong)((int)uVar31 + 1);
        }
        if ((uVar7 & 0x210000) != 0) {
          lVar37 = uVar31 * *(ushort *)(param_2 + 2);
          lVar21 = *param_2;
          pfVar19 = (float *)(lVar21 + lVar37 * 4 + (ulong)uVar14 * 4);
          lVar40 = *(long *)(param_1 + 0x158);
          fVar58 = *(float *)(param_1 + 0x1b4) * *(float *)(param_1 + 0x1a0);
          fVar55 = fVar58 * fVar78;
          fVar58 = fVar58 * fVar59;
          fVar44 = *(float *)(lVar40 + 0x54) * *(float *)(lVar40 + 0x40);
          fVar43 = fVar44 * fVar77;
          fVar44 = fVar44 * fVar57;
          fVar52 = *(float *)(param_1 + 0x1ac);
          fVar60 = *(float *)(lVar40 + 0x4c);
          bVar12 = false;
          if ((fVar44 == fVar58) && (bVar12 = false, !NAN(fVar60) && !NAN(fVar52))) {
            bVar12 = fVar60 == fVar52;
          }
          bVar11 = false;
          if ((bVar12) && (bVar11 = false, !NAN(fVar43) && !NAN(fVar55))) {
            bVar11 = fVar43 == fVar55;
          }
          lVar40 = (ulong)uVar14 * 4;
          if (bVar11) {
            if (uVar17 != 0) {
              lVar38 = lVar37 * 4 + lVar40;
              uVar39 = lVar21 + lVar38 + uVar13;
              uVar61 = lVar21 + lVar38 + 0x10;
              if (uVar39 <= uVar61) {
                uVar39 = uVar61;
              }
              uVar39 = ~(lVar37 * 4 + lVar21 + lVar40) + uVar39;
              pfVar30 = local_b8[3];
              pfVar24 = pfVar19;
              pfVar34 = local_b8[2];
              if (((uint)uVar39 >> 4 & 1) == 0) {
                pfVar24 = pfVar19 + 4;
                pfVar34 = local_b8[2] + 4;
                uVar53 = *(undefined8 *)local_b8[2];
                pfVar30 = local_b8[3] + 4;
                uVar54 = *(undefined8 *)local_b8[3];
                *(ulong *)(pfVar19 + 2) =
                     CONCAT44((float)((ulong)*(undefined8 *)(pfVar19 + 2) >> 0x20) * fVar52 +
                              fVar55 * (float)((ulong)*(undefined8 *)(local_b8[2] + 2) >> 0x20) +
                              fVar58 * (float)((ulong)*(undefined8 *)(local_b8[3] + 2) >> 0x20),
                              (float)*(undefined8 *)(pfVar19 + 2) * fVar52 +
                              fVar55 * (float)*(undefined8 *)(local_b8[2] + 2) +
                              fVar58 * (float)*(undefined8 *)(local_b8[3] + 2));
                *(ulong *)pfVar19 =
                     CONCAT44((float)((ulong)*(undefined8 *)pfVar19 >> 0x20) * fVar52 +
                              fVar55 * (float)((ulong)uVar53 >> 0x20) +
                              fVar58 * (float)((ulong)uVar54 >> 0x20),
                              (float)*(undefined8 *)pfVar19 * fVar52 + fVar55 * (float)uVar53 +
                              fVar58 * (float)uVar54);
              }
              if (0xf < uVar39) {
                do {
                  uVar53 = *(undefined8 *)pfVar34;
                  uVar54 = *(undefined8 *)pfVar30;
                  *(ulong *)(pfVar24 + 2) =
                       CONCAT44((float)((ulong)*(undefined8 *)(pfVar24 + 2) >> 0x20) * fVar52 +
                                fVar55 * (float)((ulong)*(undefined8 *)(pfVar34 + 2) >> 0x20) +
                                fVar58 * (float)((ulong)*(undefined8 *)(pfVar30 + 2) >> 0x20),
                                (float)*(undefined8 *)(pfVar24 + 2) * fVar52 +
                                fVar55 * (float)*(undefined8 *)(pfVar34 + 2) +
                                fVar58 * (float)*(undefined8 *)(pfVar30 + 2));
                  *(ulong *)pfVar24 =
                       CONCAT44((float)((ulong)*(undefined8 *)pfVar24 >> 0x20) * fVar52 +
                                fVar55 * (float)((ulong)uVar53 >> 0x20) +
                                fVar58 * (float)((ulong)uVar54 >> 0x20),
                                (float)*(undefined8 *)pfVar24 * fVar52 + fVar55 * (float)uVar53 +
                                fVar58 * (float)uVar54);
                  pfVar35 = pfVar34 + 6;
                  uVar53 = *(undefined8 *)(pfVar34 + 4);
                  pfVar29 = pfVar30 + 6;
                  uVar54 = *(undefined8 *)(pfVar30 + 4);
                  pfVar30 = pfVar30 + 8;
                  pfVar34 = pfVar34 + 8;
                  *(ulong *)(pfVar24 + 6) =
                       CONCAT44((float)((ulong)*(undefined8 *)(pfVar24 + 6) >> 0x20) * fVar52 +
                                fVar55 * (float)((ulong)*(undefined8 *)pfVar35 >> 0x20) +
                                fVar58 * (float)((ulong)*(undefined8 *)pfVar29 >> 0x20),
                                (float)*(undefined8 *)(pfVar24 + 6) * fVar52 +
                                fVar55 * (float)*(undefined8 *)pfVar35 +
                                fVar58 * (float)*(undefined8 *)pfVar29);
                  *(ulong *)(pfVar24 + 4) =
                       CONCAT44((float)((ulong)*(undefined8 *)(pfVar24 + 4) >> 0x20) * fVar52 +
                                fVar55 * (float)((ulong)uVar53 >> 0x20) +
                                fVar58 * (float)((ulong)uVar54 >> 0x20),
                                (float)*(undefined8 *)(pfVar24 + 4) * fVar52 +
                                fVar55 * (float)uVar53 + fVar58 * (float)uVar54);
                  pfVar24 = pfVar24 + 8;
                } while (pfVar24 < pfVar19 + uVar17);
              }
            }
          }
          else if (uVar17 != 0) {
            fVar45 = 1.0 / (float)uVar17;
            fVar60 = fVar60 - fVar52;
            fVar43 = fVar43 - fVar55;
            fVar44 = fVar44 - fVar58;
            pfVar30 = local_b8[2];
            pfVar34 = local_b8[3];
            pfVar24 = pfVar19;
            do {
              fVar48 = *pfVar24 * fVar52;
              fVar52 = fVar52 + fVar60 * fVar45;
              fVar46 = fVar55 * *pfVar30;
              fVar47 = fVar58 * *pfVar34;
              fVar55 = fVar55 + fVar43 * fVar45;
              fVar58 = fVar58 + fVar44 * fVar45;
              pfVar35 = pfVar24 + 1;
              *pfVar24 = fVar48 + fVar46 + fVar47;
              pfVar30 = pfVar30 + 1;
              pfVar34 = pfVar34 + 1;
              pfVar24 = pfVar35;
            } while (pfVar35 < pfVar19 + uVar17);
          }
          if (*(char *)(param_1 + 0x138) != '\0') {
            fVar55 = *(float *)(param_1 + 0x1b0) * *(float *)(param_1 + 0x1a0);
            fVar60 = *(float *)(*(long *)(param_1 + 0x158) + 0x50) *
                     *(float *)(*(long *)(param_1 + 0x158) + 0x40);
            fVar52 = fVar55 * fVar78;
            fVar55 = fVar55 * fVar59;
            fVar58 = fVar60 * fVar77;
            fVar60 = fVar60 * fVar57;
            bVar12 = false;
            if ((fVar58 == fVar52) && (bVar12 = false, !NAN(fVar60) && !NAN(fVar55))) {
              bVar12 = fVar60 == fVar55;
            }
            if (bVar12) {
              if (uVar17 != 0) {
                lVar38 = lVar37 * 4 + lVar40;
                uVar39 = lVar21 + lVar38 + uVar13;
                uVar61 = lVar21 + lVar38 + 0x10;
                if (uVar39 <= uVar61) {
                  uVar39 = uVar61;
                }
                uVar39 = ~(lVar37 * 4 + lVar21 + lVar40) + uVar39;
                pfVar24 = pfVar19;
                pfVar34 = pfVar15;
                pfVar30 = pfVar42;
                if (((uint)uVar39 >> 4 & 1) == 0) {
                  uVar53 = *(undefined8 *)pfVar15;
                  uVar54 = *(undefined8 *)pfVar42;
                  *(ulong *)(pfVar19 + 2) =
                       CONCAT44((float)((ulong)*(undefined8 *)(pfVar19 + 2) >> 0x20) +
                                fVar52 * (float)((ulong)*(undefined8 *)(pfVar15 + 2) >> 0x20) +
                                fVar55 * (float)((ulong)*(undefined8 *)(pfVar42 + 2) >> 0x20),
                                (float)*(undefined8 *)(pfVar19 + 2) +
                                fVar52 * (float)*(undefined8 *)(pfVar15 + 2) +
                                fVar55 * (float)*(undefined8 *)(pfVar42 + 2));
                  *(ulong *)pfVar19 =
                       CONCAT44((float)((ulong)*(undefined8 *)pfVar19 >> 0x20) +
                                fVar52 * (float)((ulong)uVar53 >> 0x20) +
                                fVar55 * (float)((ulong)uVar54 >> 0x20),
                                (float)*(undefined8 *)pfVar19 + fVar52 * (float)uVar53 +
                                fVar55 * (float)uVar54);
                  pfVar24 = pfVar19 + 4;
                  pfVar34 = pfVar15 + 4;
                  pfVar30 = pfVar42 + 4;
                }
                if (0xf < uVar39) {
                  do {
                    uVar53 = *(undefined8 *)pfVar34;
                    uVar54 = *(undefined8 *)pfVar30;
                    *(ulong *)(pfVar24 + 2) =
                         CONCAT44((float)((ulong)*(undefined8 *)(pfVar24 + 2) >> 0x20) +
                                  fVar52 * (float)((ulong)*(undefined8 *)(pfVar34 + 2) >> 0x20) +
                                  fVar55 * (float)((ulong)*(undefined8 *)(pfVar30 + 2) >> 0x20),
                                  (float)*(undefined8 *)(pfVar24 + 2) +
                                  fVar52 * (float)*(undefined8 *)(pfVar34 + 2) +
                                  fVar55 * (float)*(undefined8 *)(pfVar30 + 2));
                    *(ulong *)pfVar24 =
                         CONCAT44((float)((ulong)*(undefined8 *)pfVar24 >> 0x20) +
                                  fVar52 * (float)((ulong)uVar53 >> 0x20) +
                                  fVar55 * (float)((ulong)uVar54 >> 0x20),
                                  (float)*(undefined8 *)pfVar24 + fVar52 * (float)uVar53 +
                                  fVar55 * (float)uVar54);
                    pfVar35 = pfVar34 + 6;
                    uVar53 = *(undefined8 *)(pfVar34 + 4);
                    pfVar29 = pfVar30 + 6;
                    uVar54 = *(undefined8 *)(pfVar30 + 4);
                    pfVar30 = pfVar30 + 8;
                    pfVar34 = pfVar34 + 8;
                    *(ulong *)(pfVar24 + 6) =
                         CONCAT44((float)((ulong)*(undefined8 *)(pfVar24 + 6) >> 0x20) +
                                  fVar52 * (float)((ulong)*(undefined8 *)pfVar35 >> 0x20) +
                                  fVar55 * (float)((ulong)*(undefined8 *)pfVar29 >> 0x20),
                                  (float)*(undefined8 *)(pfVar24 + 6) +
                                  fVar52 * (float)*(undefined8 *)pfVar35 +
                                  fVar55 * (float)*(undefined8 *)pfVar29);
                    *(ulong *)(pfVar24 + 4) =
                         CONCAT44((float)((ulong)*(undefined8 *)(pfVar24 + 4) >> 0x20) +
                                  fVar52 * (float)((ulong)uVar53 >> 0x20) +
                                  fVar55 * (float)((ulong)uVar54 >> 0x20),
                                  (float)*(undefined8 *)(pfVar24 + 4) + fVar52 * (float)uVar53 +
                                  fVar55 * (float)uVar54);
                    pfVar24 = pfVar24 + 8;
                  } while (pfVar24 < pfVar19 + uVar17);
                }
              }
            }
            else if (uVar17 != 0) {
              fVar58 = fVar58 - fVar52;
              fVar60 = fVar60 - fVar55;
              pfVar30 = pfVar19;
              pfVar34 = pfVar15;
              pfVar24 = pfVar42;
              do {
                fVar43 = fVar52 * *pfVar34;
                fVar44 = fVar55 * *pfVar24;
                fVar52 = fVar52 + fVar58 / (float)uVar17;
                fVar55 = fVar55 + fVar60 / (float)uVar17;
                pfVar35 = pfVar30 + 1;
                *pfVar30 = *pfVar30 + fVar43 + fVar44;
                pfVar30 = pfVar35;
                pfVar34 = pfVar34 + 1;
                pfVar24 = pfVar24 + 1;
              } while (pfVar35 < pfVar19 + uVar17);
            }
          }
          lVar21 = *param_2;
          lVar37 = (ulong)((int)uVar31 + 1) * 4;
          uVar39 = (ulong)*(ushort *)(param_2 + 2);
          pfVar19 = (float *)(lVar21 + lVar37 * uVar39 + (ulong)uVar14 * 4);
          lVar38 = *(long *)(param_1 + 0x158);
          fVar58 = *(float *)(param_1 + 0x1b4) * *(float *)(param_1 + 0x1a0);
          fVar55 = fVar58 * fVar59;
          fVar58 = fVar58 * fVar78;
          fVar44 = *(float *)(lVar38 + 0x54) * *(float *)(lVar38 + 0x40);
          fVar43 = fVar44 * fVar57;
          fVar44 = fVar44 * fVar77;
          fVar52 = *(float *)(param_1 + 0x1ac);
          fVar60 = *(float *)(lVar38 + 0x4c);
          uVar61 = (ulong)(uint)fVar60;
          bVar12 = false;
          if ((fVar44 == fVar58) && (bVar12 = false, !NAN(fVar60) && !NAN(fVar52))) {
            bVar12 = fVar60 == fVar52;
          }
          bVar11 = false;
          if ((bVar12) && (bVar11 = false, !NAN(fVar43) && !NAN(fVar55))) {
            bVar11 = fVar43 == fVar55;
          }
          if (bVar11) {
            if (uVar17 != 0) {
              lVar38 = lVar37 * uVar39 + lVar40;
              uVar62 = lVar21 + lVar38 + uVar13;
              uVar36 = lVar21 + lVar38 + 0x10;
              if (uVar62 <= uVar36) {
                uVar62 = uVar36;
              }
              uVar62 = ~(lVar37 * uVar39 + lVar21 + lVar40) + uVar62;
              pfVar30 = local_b8[3];
              pfVar24 = pfVar19;
              pfVar34 = local_b8[2];
              if (((uint)uVar62 >> 4 & 1) == 0) {
                pfVar24 = pfVar19 + 4;
                pfVar34 = local_b8[2] + 4;
                pfVar30 = local_b8[3] + 4;
                uVar61 = CONCAT44((float)(*(ulong *)pfVar19 >> 0x20) * fVar52 +
                                  fVar55 * (float)((ulong)*(undefined8 *)local_b8[2] >> 0x20) +
                                  fVar58 * (float)((ulong)*(undefined8 *)local_b8[3] >> 0x20),
                                  (float)*(ulong *)pfVar19 * fVar52 +
                                  fVar55 * (float)*(undefined8 *)local_b8[2] +
                                  fVar58 * (float)*(undefined8 *)local_b8[3]);
                *(ulong *)(pfVar19 + 2) =
                     CONCAT44((float)(*(ulong *)(pfVar19 + 2) >> 0x20) * fVar52 +
                              fVar55 * (float)((ulong)*(undefined8 *)(local_b8[2] + 2) >> 0x20) +
                              fVar58 * (float)((ulong)*(undefined8 *)(local_b8[3] + 2) >> 0x20),
                              (float)*(ulong *)(pfVar19 + 2) * fVar52 +
                              fVar55 * (float)*(undefined8 *)(local_b8[2] + 2) +
                              fVar58 * (float)*(undefined8 *)(local_b8[3] + 2));
                *(ulong *)pfVar19 = uVar61;
              }
              if (0xf < uVar62) {
                do {
                  uVar53 = *(undefined8 *)pfVar34;
                  uVar54 = *(undefined8 *)pfVar30;
                  *(ulong *)(pfVar24 + 2) =
                       CONCAT44((float)(*(ulong *)(pfVar24 + 2) >> 0x20) * fVar52 +
                                fVar55 * (float)((ulong)*(undefined8 *)(pfVar34 + 2) >> 0x20) +
                                fVar58 * (float)((ulong)*(undefined8 *)(pfVar30 + 2) >> 0x20),
                                (float)*(ulong *)(pfVar24 + 2) * fVar52 +
                                fVar55 * (float)*(undefined8 *)(pfVar34 + 2) +
                                fVar58 * (float)*(undefined8 *)(pfVar30 + 2));
                  *(ulong *)pfVar24 =
                       CONCAT44((float)(*(ulong *)pfVar24 >> 0x20) * fVar52 +
                                fVar55 * (float)((ulong)uVar53 >> 0x20) +
                                fVar58 * (float)((ulong)uVar54 >> 0x20),
                                (float)*(ulong *)pfVar24 * fVar52 + fVar55 * (float)uVar53 +
                                fVar58 * (float)uVar54);
                  pfVar35 = pfVar34 + 6;
                  uVar61 = *(ulong *)(pfVar34 + 4);
                  pfVar29 = pfVar30 + 6;
                  uVar53 = *(undefined8 *)(pfVar30 + 4);
                  pfVar30 = pfVar30 + 8;
                  pfVar34 = pfVar34 + 8;
                  *(ulong *)(pfVar24 + 6) =
                       CONCAT44((float)(*(ulong *)(pfVar24 + 6) >> 0x20) * fVar52 +
                                fVar55 * (float)((ulong)*(undefined8 *)pfVar35 >> 0x20) +
                                fVar58 * (float)((ulong)*(undefined8 *)pfVar29 >> 0x20),
                                (float)*(ulong *)(pfVar24 + 6) * fVar52 +
                                fVar55 * (float)*(undefined8 *)pfVar35 +
                                fVar58 * (float)*(undefined8 *)pfVar29);
                  *(ulong *)(pfVar24 + 4) =
                       CONCAT44((float)(*(ulong *)(pfVar24 + 4) >> 0x20) * fVar52 +
                                fVar55 * (float)(uVar61 >> 0x20) +
                                fVar58 * (float)((ulong)uVar53 >> 0x20),
                                (float)*(ulong *)(pfVar24 + 4) * fVar52 + fVar55 * (float)uVar61 +
                                fVar58 * (float)uVar53);
                  pfVar24 = pfVar24 + 8;
                } while (pfVar24 < pfVar19 + uVar17);
              }
            }
          }
          else if (uVar17 != 0) {
            fVar45 = 1.0 / (float)uVar17;
            fVar43 = fVar43 - fVar55;
            fVar44 = fVar44 - fVar58;
            fVar60 = (fVar60 - fVar52) * fVar45;
            uVar61 = (ulong)(uint)fVar60;
            pfVar30 = local_b8[2];
            pfVar34 = local_b8[3];
            pfVar24 = pfVar19;
            do {
              fVar48 = *pfVar24 * fVar52;
              fVar52 = fVar52 + fVar60;
              fVar46 = fVar55 * *pfVar30;
              fVar47 = fVar58 * *pfVar34;
              fVar55 = fVar55 + fVar43 * fVar45;
              fVar58 = fVar58 + fVar44 * fVar45;
              pfVar35 = pfVar24 + 1;
              *pfVar24 = fVar48 + fVar46 + fVar47;
              pfVar30 = pfVar30 + 1;
              pfVar34 = pfVar34 + 1;
              pfVar24 = pfVar35;
            } while (pfVar35 < pfVar19 + uVar17);
          }
          if (*(char *)(param_1 + 0x138) != '\0') {
            fVar52 = *(float *)(param_1 + 0x1b0) * *(float *)(param_1 + 0x1a0);
            fVar55 = *(float *)(*(long *)(param_1 + 0x158) + 0x50) *
                     *(float *)(*(long *)(param_1 + 0x158) + 0x40);
            fVar59 = fVar52 * fVar59;
            fVar52 = fVar52 * fVar78;
            fVar78 = fVar55 * fVar57;
            fVar55 = fVar55 * fVar77;
            uVar61 = (ulong)(uint)fVar55;
            bVar12 = false;
            if ((fVar78 == fVar59) && (bVar12 = false, !NAN(fVar55) && !NAN(fVar52))) {
              bVar12 = fVar55 == fVar52;
            }
            if (bVar12) {
              if (uVar17 != 0) {
                lVar38 = lVar37 * uVar39 + lVar40;
                uVar62 = lVar21 + lVar38 + uVar13;
                uVar36 = lVar21 + lVar38 + 0x10;
                if (uVar62 <= uVar36) {
                  uVar62 = uVar36;
                }
                uVar62 = ~(lVar37 * uVar39 + lVar21 + lVar40) + uVar62;
                pfVar24 = pfVar19;
                pfVar34 = pfVar15;
                pfVar30 = pfVar42;
                if (((uint)uVar62 >> 4 & 1) == 0) {
                  uVar61 = *(ulong *)pfVar15;
                  uVar53 = *(undefined8 *)pfVar42;
                  *(ulong *)(pfVar19 + 2) =
                       CONCAT44((float)(*(ulong *)(pfVar19 + 2) >> 0x20) +
                                fVar59 * (float)((ulong)*(undefined8 *)(pfVar15 + 2) >> 0x20) +
                                fVar52 * (float)((ulong)*(undefined8 *)(pfVar42 + 2) >> 0x20),
                                (float)*(ulong *)(pfVar19 + 2) +
                                fVar59 * (float)*(undefined8 *)(pfVar15 + 2) +
                                fVar52 * (float)*(undefined8 *)(pfVar42 + 2));
                  *(ulong *)pfVar19 =
                       CONCAT44((float)(*(ulong *)pfVar19 >> 0x20) +
                                fVar59 * (float)(uVar61 >> 0x20) +
                                fVar52 * (float)((ulong)uVar53 >> 0x20),
                                (float)*(ulong *)pfVar19 + fVar59 * (float)uVar61 +
                                fVar52 * (float)uVar53);
                  pfVar24 = pfVar19 + 4;
                  pfVar34 = pfVar15 + 4;
                  pfVar30 = pfVar42 + 4;
                }
                if (0xf < uVar62) {
                  do {
                    uVar53 = *(undefined8 *)pfVar34;
                    uVar54 = *(undefined8 *)pfVar30;
                    *(ulong *)(pfVar24 + 2) =
                         CONCAT44((float)(*(ulong *)(pfVar24 + 2) >> 0x20) +
                                  fVar59 * (float)((ulong)*(undefined8 *)(pfVar34 + 2) >> 0x20) +
                                  fVar52 * (float)((ulong)*(undefined8 *)(pfVar30 + 2) >> 0x20),
                                  (float)*(ulong *)(pfVar24 + 2) +
                                  fVar59 * (float)*(undefined8 *)(pfVar34 + 2) +
                                  fVar52 * (float)*(undefined8 *)(pfVar30 + 2));
                    *(ulong *)pfVar24 =
                         CONCAT44((float)(*(ulong *)pfVar24 >> 0x20) +
                                  fVar59 * (float)((ulong)uVar53 >> 0x20) +
                                  fVar52 * (float)((ulong)uVar54 >> 0x20),
                                  (float)*(ulong *)pfVar24 + fVar59 * (float)uVar53 +
                                  fVar52 * (float)uVar54);
                    pfVar35 = pfVar34 + 6;
                    uVar53 = *(undefined8 *)(pfVar34 + 4);
                    pfVar29 = pfVar30 + 6;
                    uVar61 = *(ulong *)(pfVar30 + 4);
                    pfVar30 = pfVar30 + 8;
                    pfVar34 = pfVar34 + 8;
                    *(ulong *)(pfVar24 + 6) =
                         CONCAT44((float)(*(ulong *)(pfVar24 + 6) >> 0x20) +
                                  fVar59 * (float)((ulong)*(undefined8 *)pfVar35 >> 0x20) +
                                  fVar52 * (float)((ulong)*(undefined8 *)pfVar29 >> 0x20),
                                  (float)*(ulong *)(pfVar24 + 6) +
                                  fVar59 * (float)*(undefined8 *)pfVar35 +
                                  fVar52 * (float)*(undefined8 *)pfVar29);
                    *(ulong *)(pfVar24 + 4) =
                         CONCAT44((float)(*(ulong *)(pfVar24 + 4) >> 0x20) +
                                  fVar59 * (float)((ulong)uVar53 >> 0x20) +
                                  fVar52 * (float)(uVar61 >> 0x20),
                                  (float)*(ulong *)(pfVar24 + 4) + fVar59 * (float)uVar53 +
                                  fVar52 * (float)uVar61);
                    pfVar24 = pfVar24 + 8;
                  } while (pfVar24 < pfVar19 + uVar17);
                }
              }
            }
            else if (uVar17 != 0) {
              fVar78 = fVar78 - fVar59;
              fVar55 = (fVar55 - fVar52) / (float)uVar17;
              uVar61 = (ulong)(uint)fVar55;
              pfVar30 = pfVar19;
              pfVar34 = pfVar15;
              pfVar24 = pfVar42;
              do {
                fVar58 = fVar59 * *pfVar34;
                fVar60 = fVar52 * *pfVar24;
                fVar59 = fVar59 + fVar78 / (float)uVar17;
                fVar52 = fVar52 + fVar55;
                pfVar35 = pfVar30 + 1;
                *pfVar30 = *pfVar30 + fVar58 + fVar60;
                pfVar30 = pfVar35;
                pfVar34 = pfVar34 + 1;
                pfVar24 = pfVar24 + 1;
              } while (pfVar35 < pfVar19 + uVar17);
            }
          }
          uVar31 = (ulong)((int)uVar31 + 2);
        }
        if ((uVar7 >> 0xf & 1) != 0) {
          lVar21 = *(long *)(param_1 + 0x158);
          fVar78 = *(float *)(param_1 + 0x1ac);
          fVar59 = *(float *)(param_1 + 0x1a8) * 0.707106 * *(float *)(param_1 + 0x1b4);
          uVar39 = (ulong)(uint)fVar59;
          lVar40 = *param_2;
          pfVar19 = (float *)(lVar40 + uVar31 * *(ushort *)(param_2 + 2) * 4 + (ulong)uVar14 * 4);
          fVar52 = *(float *)(lVar21 + 0x48) * 0.707106 * *(float *)(lVar21 + 0x54);
          uVar61 = (ulong)(uint)fVar52;
          bVar12 = false;
          if ((*(float *)(lVar21 + 0x4c) == fVar78) &&
             (bVar12 = false, !NAN(fVar52) && !NAN(fVar59))) {
            bVar12 = fVar52 == fVar59;
          }
          if (bVar12) {
            if (uVar17 != 0) {
              lVar37 = uVar31 * *(ushort *)(param_2 + 2) * 4;
              lVar21 = lVar37 + (ulong)uVar14 * 4;
              uVar31 = lVar40 + lVar21 + uVar13;
              uVar13 = lVar40 + lVar21 + 0x10;
              if (uVar31 <= uVar13) {
                uVar31 = uVar13;
              }
              uVar31 = ~(lVar37 + lVar40 + (ulong)uVar14 * 4) + uVar31;
              pfVar34 = pfVar19;
              pfVar30 = local_b8[2];
              pfVar24 = local_b8[3];
              if (((uint)uVar31 >> 4 & 1) == 0) {
                fVar52 = (float)*(undefined8 *)local_b8[3] + (float)*(undefined8 *)local_b8[2];
                fVar55 = (float)((ulong)*(undefined8 *)local_b8[3] >> 0x20) +
                         (float)((ulong)*(undefined8 *)local_b8[2] >> 0x20);
                uVar61 = CONCAT44(fVar55,fVar52);
                *(ulong *)(pfVar19 + 2) =
                     CONCAT44((float)((ulong)*(undefined8 *)(pfVar19 + 2) >> 0x20) * fVar78 +
                              fVar59 * ((float)((ulong)*(undefined8 *)(local_b8[3] + 2) >> 0x20) +
                                       (float)((ulong)*(undefined8 *)(local_b8[2] + 2) >> 0x20)),
                              (float)*(undefined8 *)(pfVar19 + 2) * fVar78 +
                              fVar59 * ((float)*(undefined8 *)(local_b8[3] + 2) +
                                       (float)*(undefined8 *)(local_b8[2] + 2)));
                *(ulong *)pfVar19 =
                     CONCAT44((float)((ulong)*(undefined8 *)pfVar19 >> 0x20) * fVar78 +
                              fVar59 * fVar55,
                              (float)*(undefined8 *)pfVar19 * fVar78 + fVar59 * fVar52);
                pfVar34 = pfVar19 + 4;
                pfVar30 = local_b8[2] + 4;
                pfVar24 = local_b8[3] + 4;
              }
              if (0xf < uVar31) {
                do {
                  uVar53 = *(undefined8 *)pfVar30;
                  uVar54 = *(undefined8 *)pfVar24;
                  *(ulong *)(pfVar34 + 2) =
                       CONCAT44((float)((ulong)*(undefined8 *)(pfVar34 + 2) >> 0x20) * fVar78 +
                                fVar59 * ((float)((ulong)*(undefined8 *)(pfVar24 + 2) >> 0x20) +
                                         (float)((ulong)*(undefined8 *)(pfVar30 + 2) >> 0x20)),
                                (float)*(undefined8 *)(pfVar34 + 2) * fVar78 +
                                fVar59 * ((float)*(undefined8 *)(pfVar24 + 2) +
                                         (float)*(undefined8 *)(pfVar30 + 2)));
                  *(ulong *)pfVar34 =
                       CONCAT44((float)((ulong)*(undefined8 *)pfVar34 >> 0x20) * fVar78 +
                                fVar59 * ((float)((ulong)uVar54 >> 0x20) +
                                         (float)((ulong)uVar53 >> 0x20)),
                                (float)*(undefined8 *)pfVar34 * fVar78 +
                                fVar59 * ((float)uVar54 + (float)uVar53));
                  pfVar35 = pfVar30 + 6;
                  uVar53 = *(undefined8 *)(pfVar30 + 4);
                  uVar61 = *(ulong *)(pfVar24 + 4);
                  pfVar30 = pfVar30 + 8;
                  *(ulong *)(pfVar34 + 6) =
                       CONCAT44((float)((ulong)*(undefined8 *)(pfVar34 + 6) >> 0x20) * fVar78 +
                                fVar59 * ((float)((ulong)*(undefined8 *)(pfVar24 + 6) >> 0x20) +
                                         (float)((ulong)*(undefined8 *)pfVar35 >> 0x20)),
                                (float)*(undefined8 *)(pfVar34 + 6) * fVar78 +
                                fVar59 * ((float)*(undefined8 *)(pfVar24 + 6) +
                                         (float)*(undefined8 *)pfVar35));
                  *(ulong *)(pfVar34 + 4) =
                       CONCAT44((float)((ulong)*(undefined8 *)(pfVar34 + 4) >> 0x20) * fVar78 +
                                fVar59 * ((float)(uVar61 >> 0x20) + (float)((ulong)uVar53 >> 0x20)),
                                (float)*(undefined8 *)(pfVar34 + 4) * fVar78 +
                                fVar59 * ((float)uVar61 + (float)uVar53));
                  pfVar34 = pfVar34 + 8;
                  pfVar24 = pfVar24 + 8;
                } while (pfVar34 < pfVar19 + uVar17);
              }
            }
          }
          else if (uVar17 != 0) {
            fVar55 = *(float *)(lVar21 + 0x4c) - fVar78;
            fVar59 = (fVar52 - fVar59) / (float)uVar17;
            pfVar30 = local_b8[2];
            pfVar34 = local_b8[3];
            pfVar24 = pfVar19;
            uVar61 = uVar39;
            do {
              fVar60 = *pfVar24 * fVar78;
              fVar78 = fVar78 + fVar55 / (float)uVar17;
              fVar52 = (float)uVar39;
              fVar58 = (float)uVar61;
              uVar39 = (ulong)(uint)(fVar52 + fVar59);
              uVar61 = (ulong)(uint)(fVar58 + fVar59);
              pfVar35 = pfVar24 + 1;
              *pfVar24 = fVar60 + fVar52 * *pfVar30 + fVar58 * *pfVar34;
              pfVar30 = pfVar30 + 1;
              pfVar34 = pfVar34 + 1;
              pfVar24 = pfVar35;
            } while (pfVar35 < pfVar19 + uVar17);
          }
        }
        lVar40 = *(long *)(param_1 + 0x158);
        uVar14 = uVar17 + uVar14;
        *(undefined4 *)(param_1 + 0x1ac) = *(undefined4 *)(lVar40 + 0x4c);
        *(undefined4 *)(param_1 + 0x1b0) = *(undefined4 *)(lVar40 + 0x50);
        *(undefined4 *)(param_1 + 0x1b4) = *(undefined4 *)(lVar40 + 0x54);
        *(undefined4 *)(param_1 + 0x19c) = *(undefined4 *)(lVar40 + 0x3c);
        *(undefined4 *)(param_1 + 0x1a4) = *(undefined4 *)(lVar40 + 0x44);
        *(undefined4 *)(param_1 + 0x1a0) = *(undefined4 *)(lVar40 + 0x40);
        uVar20 = uVar20 - uVar17;
        *(undefined4 *)(param_1 + 0x1a8) = *(undefined4 *)(lVar40 + 0x48);
        fVar78 = fVar77;
        fVar59 = fVar57;
      } while (uVar20 != 0);
    }
    (**(code **)(**(long **)(param_1 + 0x160) + 0x18))(*(long **)(param_1 + 0x160),__src);
  }
  return;
}


