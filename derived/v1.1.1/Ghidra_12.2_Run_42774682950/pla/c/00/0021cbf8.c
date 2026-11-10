/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0021cbf8; name: FUN_0021cbf8
 */


void FUN_0021cbf8(float param_1,long param_2,long param_3,long param_4,int param_5,long param_6,
                 long param_7,int param_8,long param_9,int param_10,byte param_11)

{
  undefined8 uVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  float fVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  float *pfVar28;
  float *pfVar29;
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
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  
  lVar26 = (long)param_10;
  lVar27 = *(long *)(param_2 + 0xa0);
  lVar25 = (ulong)*(byte *)(*(long *)(param_2 + 0xa8) + lVar26) * 4;
  iVar5 = *(int *)(param_6 + lVar25);
  iVar6 = *(int *)(param_9 + lVar25);
  *(int *)(param_9 + lVar25) = iVar6 + 1;
  lVar25 = 0x40;
  if (param_4 != 0) {
    lVar25 = 0x60;
  }
  pfVar28 = (float *)(lVar27 + lVar26 * 0x38);
  fVar33 = *pfVar28;
  fVar32 = pfVar28[1];
  pfVar28 = (float *)(param_7 + param_3 + lVar25 * (ulong)(uint)(iVar6 + iVar5 * param_8));
  if ((param_11 & 1) == 0) {
    fVar34 = *(float *)(lVar27 + lVar26 * 0x38 + 8);
  }
  else {
    fVar34 = fVar33 * -0.5;
  }
  lVar25 = lVar27 + lVar26 * 0x38;
  fVar24 = (float)(int)*(short *)(lVar25 + 0x30);
  fVar31 = (fVar32 * fVar24) / *(float *)(param_2 + 0xbc);
  fVar35 = *(float *)(lVar25 + 0xc);
  if (param_4 == 0) {
    lVar27 = lVar27 + lVar26 * 0x38;
    bVar7 = *(byte *)(lVar27 + 0x32);
    *pfVar28 = fVar33;
    pfVar28[1] = fVar32;
    pfVar28[2] = fVar34;
    pfVar28[3] = fVar35;
    uVar1 = *(undefined8 *)(lVar27 + 0x20);
    *(undefined8 *)(pfVar28 + 4) = *(undefined8 *)(lVar27 + 0x18);
    *(undefined8 *)(pfVar28 + 6) = uVar1;
    pfVar28[8] = *(float *)(lVar25 + 0x10);
    pfVar28[9] = *(float *)(lVar25 + 0x14);
    pfVar28[10] = (float)(uint)bVar7;
    pfVar28[0xb] = fVar31;
    pfVar28[0xf] = fVar24;
    return;
  }
  fVar36 = fVar35;
  if ((param_11 & 1) == 0) {
    if (param_5 == 1) {
      fVar36 = fVar32 + fVar35;
    }
    else if (param_5 == 0) {
      fVar36 = (fVar32 + fVar35 + fVar35) * 0.5;
    }
    else {
      fVar36 = 0.0;
    }
    fVar36 = fVar36 - param_1;
  }
  pfVar29 = (float *)(param_4 + lVar26 * 0x34);
  fVar38 = pfVar29[4];
  fVar39 = pfVar29[5];
  lVar27 = lVar27 + lVar26 * 0x38;
  fVar40 = pfVar29[6];
  fVar41 = pfVar29[7];
  fVar30 = pfVar29[2];
  fVar37 = pfVar29[3];
  bVar7 = *(byte *)(lVar27 + 0x11);
  bVar8 = *(byte *)((long)pfVar29 + 0x2d);
  bVar9 = *(byte *)(lVar27 + 0x12);
  bVar10 = *(byte *)((long)pfVar29 + 0x2e);
  bVar11 = *(byte *)(lVar27 + 0x13);
  bVar12 = *(byte *)((long)pfVar29 + 0x2f);
  bVar13 = *(byte *)(pfVar29 + 0xb);
  bVar14 = *(byte *)(lVar27 + 0x16);
  bVar15 = *(byte *)((long)pfVar29 + 0x32);
  bVar16 = *(byte *)(lVar27 + 0x15);
  fVar3 = pfVar29[8];
  fVar4 = pfVar29[10];
  bVar17 = *(byte *)(lVar25 + 0x10);
  bVar18 = *(byte *)(lVar25 + 0x14);
  bVar19 = *(byte *)(pfVar29 + 0xc);
  bVar20 = *(byte *)((long)pfVar29 + 0x31);
  fVar42 = pfVar29[9];
  fVar43 = *pfVar29;
  fVar44 = pfVar29[1];
  bVar21 = *(byte *)(lVar27 + 0x17);
  bVar22 = *(byte *)((long)pfVar29 + 0x33);
  bVar23 = *(byte *)(lVar27 + 0x32);
  *pfVar28 = fVar33;
  pfVar28[1] = fVar32;
  pfVar28[2] = fVar34;
  pfVar28[3] = fVar35;
  uVar1 = *(undefined8 *)(lVar27 + 0x18);
  uVar2 = *(undefined8 *)(lVar27 + 0x20);
  pfVar28[0xb] = fVar31;
  *(undefined8 *)(pfVar28 + 4) = uVar1;
  *(undefined8 *)(pfVar28 + 6) = uVar2;
  pfVar28[0x10] = fVar38 * fVar37 * fVar43;
  pfVar28[0x16] = fVar37 * fVar39 * fVar44;
  pfVar28[0x12] = -(fVar40 * fVar43);
  pfVar28[10] = (float)(uint)bVar23;
  pfVar28[0x11] = fVar37 * fVar41 * fVar43;
  pfVar28[0x13] = (fVar33 + fVar34 + fVar34 + fVar24) * 0.5;
  pfVar28[0x14] = (fVar38 * fVar40 * fVar39 - fVar41 * fVar30) * fVar44;
  pfVar28[0x17] = fVar36;
  pfVar28[0xc] = fVar3;
  pfVar28[0xe] = fVar4;
  pfVar28[0xf] = fVar24;
  pfVar28[0x15] = (fVar41 * fVar40 * fVar39 + fVar38 * fVar30) * fVar44;
  fVar32 = (fVar42 - fVar36) + 0.0;
  if ((param_11 & 1) == 0) {
    fVar32 = fVar42;
  }
  pfVar28[8] = (float)(((uint)bVar13 * (uint)bVar17) / 0xff & 0xffff00ff |
                       (((uint)bVar8 * (uint)bVar7) / 0xff & 0xff) << 8 |
                       (((uint)bVar10 * (uint)bVar9) / 0xff & 0xff) << 0x10 |
                      ((uint)bVar12 * (uint)bVar11) / 0xff << 0x18);
  pfVar28[9] = (float)(((uint)bVar19 * (uint)bVar18) / 0xff & 0xffff00ff |
                       (((uint)bVar20 * (uint)bVar16) / 0xff & 0xff) << 8 |
                       (((uint)bVar15 * (uint)bVar14) / 0xff & 0xff) << 0x10 |
                      ((uint)bVar22 * (uint)bVar21) / 0xff << 0x18);
  pfVar28[0xd] = fVar32;
  return;
}


