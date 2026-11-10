/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00472830; name: FUN_00472830
 */


void FUN_00472830(ulong *param_1,ulong *param_2,ulong param_3,undefined8 param_4,ulong *param_5,
                 code *param_6)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  ulong *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong *puVar12;
  ulong uVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  
  if (param_3 == 0) {
    return;
  }
  if (param_3 < 0x10) {
    puVar12 = param_5;
  }
  else {
    puVar3 = param_5;
    uVar13 = param_3;
    do {
      puVar12 = param_2;
      *puVar12 = *puVar3 ^ *param_1;
      puVar12[1] = puVar3[1] ^ param_1[1];
      (*param_6)(puVar12,puVar12,param_4);
      uVar13 = uVar13 - 0x10;
      param_1 = param_1 + 2;
      param_2 = puVar12 + 2;
      puVar3 = puVar12;
    } while (0xf < uVar13);
    param_3 = param_3 & 0xf;
    if (param_3 == 0) {
LAB_00472aac:
      uVar13 = *puVar12;
      param_5[1] = puVar12[1];
      *param_5 = uVar13;
      return;
    }
  }
  lVar14 = 0;
  puVar15 = (undefined8 *)((long)param_2 + 0x41);
  puVar3 = puVar12;
  puVar12 = param_2;
  do {
    uVar10 = 0x10;
    uVar13 = 0;
    puVar4 = (undefined8 *)((long)puVar3 + 0x41);
    puVar6 = puVar15;
    do {
      puVar11 = puVar6;
      puVar7 = puVar4;
      uVar5 = uVar13;
      *(byte *)((long)puVar12 + uVar5) =
           *(byte *)((long)puVar3 + uVar5) ^ *(byte *)((long)param_1 + uVar5);
      uVar13 = uVar5 + 1;
      uVar10 = uVar10 - 1;
      if (0xf < uVar13) break;
      puVar4 = (undefined8 *)((long)puVar7 + 1);
      puVar6 = (undefined8 *)((long)puVar11 + 1);
    } while (uVar13 < param_3);
    if (uVar13 < 0x10) {
      uVar8 = 0x10 - uVar13;
      if ((0x3f < uVar8) &&
         ((puVar3 + 2 <= (ulong *)((long)puVar12 + uVar13) ||
          (param_2 + lVar14 * 2 + 2 <= (ulong *)((long)puVar3 + uVar13))))) {
        uVar13 = (uVar10 & 0xffffffffffffffc0) + uVar13;
        uVar10 = (0xf - uVar5 & 0xffffffffffffffc0) - 0x40 >> 6;
        lVar9 = ~uVar10 + ((ulong)((int)uVar10 + 1) & 1);
        do {
          puVar6 = puVar7;
          puVar4 = puVar11;
          uVar16 = puVar6[-8];
          uVar18 = puVar6[-5];
          uVar17 = puVar6[-6];
          lVar9 = lVar9 + 2;
          uVar20 = puVar6[-3];
          uVar19 = puVar6[-4];
          uVar22 = puVar6[-1];
          uVar21 = puVar6[-2];
          puVar4[-7] = puVar6[-7];
          puVar4[-8] = uVar16;
          puVar4[-5] = uVar18;
          puVar4[-6] = uVar17;
          puVar4[-3] = uVar20;
          puVar4[-4] = uVar19;
          puVar4[-1] = uVar22;
          puVar4[-2] = uVar21;
          uVar16 = *puVar6;
          uVar18 = puVar6[3];
          uVar17 = puVar6[2];
          uVar20 = puVar6[5];
          uVar19 = puVar6[4];
          uVar22 = puVar6[7];
          uVar21 = puVar6[6];
          puVar4[1] = puVar6[1];
          *puVar4 = uVar16;
          puVar4[3] = uVar18;
          puVar4[2] = uVar17;
          puVar4[5] = uVar20;
          puVar4[4] = uVar19;
          puVar4[7] = uVar22;
          puVar4[6] = uVar21;
          puVar11 = puVar4 + 0x10;
          puVar7 = puVar6 + 0x10;
        } while (lVar9 != 0);
        if ((((uVar8 & 0xffffffffffffffc0) - 0x40 >> 6) + 1 & 1) != 0) {
          uVar16 = puVar6[8];
          uVar18 = puVar6[0xb];
          uVar17 = puVar6[10];
          uVar20 = puVar6[0xd];
          uVar19 = puVar6[0xc];
          uVar22 = puVar6[0xf];
          uVar21 = puVar6[0xe];
          puVar4[9] = puVar6[9];
          puVar4[8] = uVar16;
          puVar4[0xb] = uVar18;
          puVar4[10] = uVar17;
          puVar4[0xd] = uVar20;
          puVar4[0xc] = uVar19;
          puVar4[0xf] = uVar22;
          puVar4[0xe] = uVar21;
        }
        if (uVar8 == (uVar8 & 0xffffffffffffffc0)) goto LAB_00472a78;
      }
      uVar5 = 0xf - uVar13;
      uVar10 = (ulong)(uint)-(int)uVar13 & 7;
      if ((-(int)uVar13 & 7U) != 0) {
        do {
          uVar10 = uVar10 - 1;
          *(undefined1 *)((long)puVar12 + uVar13) = *(undefined1 *)((long)puVar3 + uVar13);
          uVar13 = uVar13 + 1;
        } while (uVar10 != 0);
      }
      if (6 < uVar5) {
        do {
          puVar1 = (undefined1 *)((long)puVar3 + uVar13 + 7);
          puVar2 = (undefined1 *)((long)puVar12 + uVar13);
          uVar13 = uVar13 + 8;
          *puVar2 = puVar1[-7];
          puVar2[1] = puVar1[-6];
          puVar2[2] = puVar1[-5];
          puVar2[3] = puVar1[-4];
          puVar2[4] = puVar1[-3];
          puVar2[5] = puVar1[-2];
          puVar2[6] = puVar1[-1];
          puVar2[7] = *puVar1;
        } while (uVar13 != 0x10);
      }
    }
LAB_00472a78:
    (*param_6)(puVar12,puVar12,param_4);
    if (param_3 < 0x11) goto LAB_00472aac;
    param_3 = param_3 - 0x10;
    param_1 = param_1 + 2;
    lVar14 = lVar14 + 1;
    puVar15 = puVar15 + 2;
    puVar3 = puVar12;
    puVar12 = puVar12 + 2;
  } while( true );
}


