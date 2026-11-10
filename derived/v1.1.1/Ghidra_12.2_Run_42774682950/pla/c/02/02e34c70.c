/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e34c70; name: FUN_02e34c70
 */


void FUN_02e34c70(undefined8 param_1,long param_2,uint param_3,ulong param_4,undefined8 *param_5,
                 undefined8 param_6,uint param_7,uint param_8,undefined8 param_9)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  uint uVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  
  if (*(char *)(param_2 + (param_4 & 0xffffffff) * 0x1c + 0x120) == '\0') {
    return;
  }
  param_4 = param_4 & 0xffffffff;
  FUN_02e34554(param_2 + param_4 * 0x58,param_1,param_7,param_8 & 1,param_3,param_5,param_9);
  if (*(int *)(param_2 + param_4 * 0x1c + 0x108) != 0) {
    uVar12 = param_7;
    if ((param_7 & 3) != 0) {
      iVar4 = 4 - (param_7 & 3);
      memset((void *)((long)param_5 + (ulong)param_7 * 4),0,(ulong)(uint)(iVar4 * 4));
      uVar12 = iVar4 + param_7;
    }
    plVar1 = (long *)(param_2 + param_4 * 0x28 + 0xb0);
    puVar7 = (uint *)(param_2 + param_4 * 0x28 + 0xcc);
    uVar8 = *puVar7;
    uVar3 = param_3 >> 2;
    uVar2 = param_3 & 3;
    uVar9 = uVar8 & 1;
    if ((uVar8 - 1 == param_3) && (uVar9 != 0)) {
      pfVar13 = (float *)(*plVar1 + (ulong)((uVar3 + (1 < uVar2 && uVar8 != 1)) * 0x10) * 4);
      pfVar14 = pfVar13 + 1;
      pfVar15 = pfVar13 + 2;
      pfVar16 = pfVar13 + 3;
    }
    else {
      pfVar13 = (float *)(*plVar1 + (ulong)(uVar3 << 4) * 4 + (ulong)uVar2 * 4);
      pfVar14 = pfVar13 + 4;
      pfVar15 = pfVar13 + 8;
      pfVar16 = pfVar13 + 0xc;
    }
    fVar26 = *pfVar13;
    fVar45 = *pfVar14;
    fVar51 = *pfVar15;
    fVar49 = *pfVar16;
    if (uVar12 != 0) {
      puVar10 = *(undefined8 **)(param_2 + param_4 * 0x28 + 0xc0);
      uVar28 = puVar10[1];
      uVar27 = *puVar10;
      uVar30 = puVar10[3];
      uVar29 = puVar10[2];
      uVar32 = puVar10[5];
      uVar31 = puVar10[4];
      uVar34 = puVar10[7];
      uVar33 = puVar10[6];
      uVar36 = puVar10[9];
      uVar35 = puVar10[8];
      uVar38 = puVar10[0xb];
      uVar37 = puVar10[10];
      uVar40 = puVar10[0xd];
      uVar39 = puVar10[0xc];
      uVar42 = puVar10[0xf];
      uVar41 = puVar10[0xe];
      puVar10 = param_5;
      do {
        fVar46 = fVar26 * (float)uVar35;
        fVar47 = fVar26 * (float)((ulong)uVar35 >> 0x20);
        fVar48 = fVar26 * (float)uVar36;
        fVar50 = fVar26 * (float)((ulong)uVar36 >> 0x20);
        fVar17 = (float)uVar37 * fVar45;
        fVar20 = (float)((ulong)uVar37 >> 0x20) * fVar45;
        fVar23 = (float)uVar38 * fVar45;
        fVar24 = (float)((ulong)uVar38 >> 0x20) * fVar45;
        puVar11 = puVar10 + 2;
        fVar26 = (float)((ulong)puVar10[1] >> 0x20);
        fVar45 = (float)puVar10[1];
        fVar18 = (float)uVar39 * fVar51;
        fVar21 = (float)((ulong)uVar39 >> 0x20) * fVar51;
        fVar19 = (float)uVar41 * fVar49;
        fVar22 = (float)((ulong)uVar41 >> 0x20) * fVar49;
        fVar25 = (float)((ulong)uVar42 >> 0x20) * fVar49;
        fVar43 = (float)*puVar10;
        fVar44 = (float)((ulong)*puVar10 >> 0x20);
        fVar49 = fVar48 + fVar23 + (float)uVar40 * fVar51 + (float)uVar42 * fVar49 +
                 (float)uVar28 * fVar45 + (float)uVar30 * fVar45 + (float)uVar32 * fVar44 +
                 (float)uVar34 * fVar43;
        fVar51 = fVar50 + fVar24 + (float)((ulong)uVar40 >> 0x20) * fVar51 + fVar25 +
                 (float)((ulong)uVar28 >> 0x20) * fVar26 + (float)((ulong)uVar30 >> 0x20) * fVar45 +
                 (float)((ulong)uVar32 >> 0x20) * fVar44 + (float)((ulong)uVar34 >> 0x20) * fVar43;
        puVar10[1] = CONCAT44(fVar51,fVar49);
        *puVar10 = CONCAT44(fVar47 + fVar20 + fVar21 + fVar22 +
                            (float)((ulong)uVar27 >> 0x20) * fVar44 +
                            (float)((ulong)uVar29 >> 0x20) * fVar45 +
                            (float)((ulong)uVar31 >> 0x20) * fVar44 +
                            (float)((ulong)uVar33 >> 0x20) * fVar43,
                            fVar46 + fVar17 + fVar18 + fVar19 + (float)uVar27 * fVar43 +
                            (float)uVar29 * fVar45 + (float)uVar31 * fVar44 + (float)uVar33 * fVar43
                           );
        puVar10 = puVar11;
      } while (puVar11 < (undefined8 *)((long)param_5 + (ulong)uVar12 * 4));
      uVar8 = *puVar7;
      uVar9 = uVar8 & 1;
    }
    if ((uVar9 == 0) || (uVar8 - 1 != param_3)) {
      lVar6 = (ulong)(uVar3 << 4) * 4;
      lVar5 = (ulong)uVar2 * 4;
      *(float *)(*plVar1 + lVar6 + lVar5) = fVar26;
      *(float *)(*plVar1 + lVar6 + lVar5 + 0x10) = fVar45;
      *(float *)(*plVar1 + lVar6 + lVar5 + 0x20) = fVar51;
      lVar5 = *plVar1 + lVar6 + lVar5;
      lVar6 = 0xc;
    }
    else {
      lVar5 = (ulong)((uVar3 + (1 < uVar2 && uVar8 != 1)) * 0x10) * 4;
      *(float *)(*plVar1 + lVar5) = fVar26;
      *(float *)(*plVar1 + lVar5 + 4) = fVar45;
      *(float *)(*plVar1 + lVar5 + 8) = fVar51;
      lVar5 = *plVar1 + lVar5;
      lVar6 = 3;
    }
    *(float *)(lVar5 + lVar6 * 4) = fVar49;
  }
  param_2 = param_2 + param_4 * 0x1c;
  FUN_02e0add0(0x3f800000,0x3f800000,*(undefined4 *)(param_2 + 0x168),
               *(undefined4 *)(param_2 + 0x11c),param_6,param_5,param_7);
  return;
}


