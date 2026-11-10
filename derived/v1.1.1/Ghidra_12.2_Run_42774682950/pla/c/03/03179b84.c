/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03179b84; name: FUN_03179b84
 */


void FUN_03179b84(long param_1,int *param_2,undefined8 *param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  float fVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  float fVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  float fVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined8 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar4 = (long)*param_2;
  lVar5 = *(long *)(param_1 + 0x38);
  lVar1 = lVar5 + lVar4 * 0xf0;
  uVar6 = *(undefined8 *)(lVar1 + 0x50);
  if (((float)((ulong)uVar6 >> 0x20) == (float)((ulong)param_3[6] >> 0x20) &&
      (float)uVar6 == (float)param_3[6]) &&
      (float)*(undefined8 *)(lVar1 + 0x58) == (float)param_3[7]) {
    uVar11 = *(undefined8 *)(lVar1 + 0x20);
    uVar9 = param_3[1];
    uVar6 = *param_3;
    if ((((((float)uVar11 == (float)uVar6 &&
           (float)((ulong)uVar11 >> 0x20) == (float)((ulong)uVar6 >> 0x20)) &&
           (float)*(undefined8 *)(lVar1 + 0x28) == (float)uVar9) &&
         (((float)*(undefined8 *)(lVar1 + 0x30) == (float)param_3[2] &&
          (float)((ulong)*(undefined8 *)(lVar1 + 0x30) >> 0x20) ==
          (float)((ulong)param_3[2] >> 0x20)) &&
          (float)*(undefined8 *)(lVar1 + 0x38) == (float)param_3[3])) &&
        (((float)*(undefined8 *)(lVar1 + 0x40) == (float)param_3[4] &&
         (float)((ulong)*(undefined8 *)(lVar1 + 0x40) >> 0x20) == (float)((ulong)param_3[4] >> 0x20)
         ) && (float)*(undefined8 *)(lVar1 + 0x48) == (float)param_3[5])) &&
       ((lVar3 = lVar5 + lVar4 * 0xf0, uVar11 = *(undefined8 *)(lVar3 + 0x70),
        ((float)uVar11 == (float)param_3[10] &&
        (float)((ulong)uVar11 >> 0x20) == (float)((ulong)param_3[10] >> 0x20)) &&
        (float)*(undefined8 *)(lVar3 + 0x78) == (float)param_3[0xb] &&
        (lVar3 = lVar5 + lVar4 * 0xf0, uVar11 = *(undefined8 *)(lVar3 + 0x60),
        ((float)uVar11 == (float)param_3[8] &&
        (float)((ulong)uVar11 >> 0x20) == (float)((ulong)param_3[8] >> 0x20)) &&
        (float)*(undefined8 *)(lVar3 + 0x68) == (float)param_3[9])))) {
      return;
    }
  }
  else {
    uVar9 = param_3[1];
    uVar6 = *param_3;
  }
  *(undefined8 *)(lVar1 + 0x28) = uVar9;
  *(undefined8 *)(lVar1 + 0x20) = uVar6;
  lVar3 = param_3[2];
  plVar2 = (long *)(lVar5 + lVar4 * 0xf0);
  plVar2[7] = param_3[3];
  plVar2[6] = lVar3;
  lVar3 = param_3[4];
  plVar2[9] = param_3[5];
  plVar2[8] = lVar3;
  uVar6 = param_3[6];
  *(undefined8 *)(lVar1 + 0x58) = param_3[7];
  *(undefined8 *)(lVar1 + 0x50) = uVar6;
  lVar3 = param_3[8];
  lVar1 = *plVar2;
  plVar2[0xd] = param_3[9];
  plVar2[0xc] = lVar3;
  lVar3 = param_3[10];
  plVar2[0xf] = param_3[0xb];
  plVar2[0xe] = lVar3;
  if (lVar1 != 0) {
    uVar9 = param_3[1];
    uVar6 = *param_3;
    *(undefined8 *)(lVar1 + 0x68) = uVar9;
    *(undefined8 *)(lVar1 + 0x60) = uVar6;
    uVar12 = param_3[3];
    uVar11 = param_3[2];
    *(undefined8 *)(lVar1 + 0x78) = uVar12;
    *(undefined8 *)(lVar1 + 0x70) = uVar11;
    uVar18 = param_3[5];
    uVar16 = param_3[4];
    *(undefined8 *)(lVar1 + 0x88) = uVar18;
    *(undefined8 *)(lVar1 + 0x80) = uVar16;
    uVar15 = param_3[7];
    uVar14 = param_3[6];
    *(undefined8 *)(lVar1 + 0x98) = uVar15;
    *(undefined8 *)(lVar1 + 0x90) = uVar14;
    uVar22 = param_3[8];
    *(undefined8 *)(lVar1 + 0xa8) = param_3[9];
    *(undefined8 *)(lVar1 + 0xa0) = uVar22;
    uVar22 = param_3[10];
    *(undefined8 *)(lVar1 + 0xb8) = param_3[0xb];
    *(undefined8 *)(lVar1 + 0xb0) = uVar22;
    lVar3 = *(long *)(param_1 + 0x20);
    if (lVar3 != 0) {
      lVar1 = *(long *)(*(long *)(lVar1 + 0x20) + 0x68);
      uStack_48 = *(undefined8 *)(lVar1 + 0x98);
      local_50 = *(undefined8 *)(lVar1 + 0x90);
      uStack_38 = *(undefined8 *)(lVar1 + 0xa8);
      uStack_40 = *(undefined8 *)(lVar1 + 0xa0);
      fVar20 = (float)local_50;
      fVar10 = (float)uStack_40;
      fVar7 = (float)((ulong)local_50 >> 0x20);
      fVar13 = (float)((ulong)uStack_40 >> 0x20);
      fVar8 = (float)uStack_48;
      fVar17 = (float)uStack_38;
      if (fVar8 <= fVar17 && (fVar7 <= fVar13 && fVar20 <= fVar10)) {
        fVar27 = (fVar20 + fVar10) * 0.5;
        fVar28 = (fVar7 + fVar13) * 0.5;
        fVar29 = (fVar8 + fVar17) * 0.5;
        fVar20 = (fVar10 - fVar20) * 0.5;
        fVar23 = (fVar13 - fVar7) * 0.5;
        fVar25 = (fVar17 - fVar8) * 0.5;
        fVar7 = (float)((ulong)uVar6 >> 0x20);
        fVar10 = (float)((ulong)uVar9 >> 0x20);
        fVar8 = (float)((ulong)uVar11 >> 0x20);
        fVar13 = (float)((ulong)uVar12 >> 0x20);
        fVar17 = (float)((ulong)uVar16 >> 0x20);
        fVar19 = (float)((ulong)uVar18 >> 0x20);
        fVar21 = ABS((float)uVar6 * fVar20) + ABS((float)uVar11 * fVar23) +
                 ABS((float)uVar16 * fVar25);
        fVar24 = ABS(fVar7 * fVar20) + ABS(fVar8 * fVar23) + ABS(fVar17 * fVar25);
        fVar26 = ABS((float)uVar9 * fVar20) + ABS((float)uVar12 * fVar23) +
                 ABS((float)uVar18 * fVar25);
        fVar23 = ABS(fVar10 * fVar20) + ABS(fVar13 * fVar23) + ABS(fVar19 * fVar25);
        fVar20 = (float)uVar14 +
                 (float)uVar16 * fVar29 + (float)uVar6 * fVar27 + (float)uVar11 * fVar28;
        fVar7 = (float)((ulong)uVar14 >> 0x20) + fVar17 * fVar29 + fVar7 * fVar27 + fVar8 * fVar28;
        fVar8 = (float)uVar15 +
                (float)uVar18 * fVar29 + (float)uVar9 * fVar27 + (float)uVar12 * fVar28;
        fVar10 = (float)((ulong)uVar15 >> 0x20) +
                 fVar19 * fVar29 + fVar10 * fVar27 + fVar13 * fVar28;
        uStack_40 = CONCAT44(fVar7 + fVar24,fVar20 + fVar21);
        uStack_38 = CONCAT44(fVar10 + fVar23,fVar8 + fVar26);
        local_50 = CONCAT44(fVar7 - fVar24,fVar20 - fVar21);
        uStack_48 = CONCAT44(fVar10 - fVar23,fVar8 - fVar26);
      }
      if (*(char *)(param_1 + 0x30) != '\x01') {
        lVar3 = FUN_0317c11c((long *)(param_1 + 0x20));
      }
      FUN_001d4ef0(lVar3,*(undefined4 *)(lVar5 + lVar4 * 0xf0 + 0x18),&local_50);
    }
  }
  lVar1 = *(long *)(lVar5 + lVar4 * 0xf0 + 0x10);
  if (lVar1 != 0) {
    uVar6 = *param_3;
    *(undefined8 *)(lVar1 + 0x48) = param_3[1];
    *(undefined8 *)(lVar1 + 0x40) = uVar6;
    uVar6 = param_3[2];
    *(undefined8 *)(lVar1 + 0x58) = param_3[3];
    *(undefined8 *)(lVar1 + 0x50) = uVar6;
    uVar6 = param_3[4];
    *(undefined8 *)(lVar1 + 0x68) = param_3[5];
    *(undefined8 *)(lVar1 + 0x60) = uVar6;
    uVar6 = param_3[6];
    *(undefined8 *)(lVar1 + 0x78) = param_3[7];
    *(undefined8 *)(lVar1 + 0x70) = uVar6;
  }
  return;
}


