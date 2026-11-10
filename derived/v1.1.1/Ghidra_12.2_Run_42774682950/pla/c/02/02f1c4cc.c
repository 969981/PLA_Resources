/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f1c4cc; name: FUN_02f1c4cc
 */


undefined4 FUN_02f1c4cc(undefined8 *param_1,undefined4 *param_2,uint param_3)

{
  byte *pbVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  undefined1 uVar5;
  undefined4 *puVar6;
  undefined2 *puVar7;
  undefined8 uVar8;
  byte bVar9;
  byte bVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  code *pcVar15;
  undefined4 uVar16;
  float fVar17;
  
  bVar2 = *(byte *)(param_2 + 1);
  uVar14 = (ulong)bVar2;
  uVar3 = *(ushort *)(param_2 + 2);
  if (bVar2 < 9) {
    param_1[3] = 0;
    param_1[4] = param_1;
    param_1[10] = param_1 + 9;
    *(undefined1 *)(param_1 + 0xb) = 0;
    param_1[2] = 0;
    *param_1 = 0;
    param_1[1] = 0;
LAB_02f1c510:
    uVar4 = 0;
    if (param_3 != 0) {
      uVar4 = 48000 / param_3;
    }
    *(uint *)(param_1 + 8) = uVar4;
    uVar16 = *param_2;
    *(byte *)((long)param_1 + 0x6d) = bVar2;
    fVar17 = (float)NEON_ucvtf(uVar16);
    *(float *)((long)param_1 + 100) = fVar17 / (float)param_3;
    if ((*(ushort *)(param_2 + 2) & 0x3f) == 0x20) {
      bVar10 = 4;
      if (bVar2 != 2) {
        bVar10 = 5;
      }
      bVar9 = 3;
      if (bVar2 != 1) {
        bVar9 = bVar10;
      }
    }
    else if ((*(ushort *)(param_2 + 2) & 0x3f) == 0x10) {
      bVar10 = 1;
      if (bVar2 != 2) {
        bVar10 = 2;
      }
      bVar9 = 0;
      if (bVar2 != 1) {
        bVar9 = bVar10;
      }
    }
    else {
      bVar9 = 0xff;
    }
    pbVar1 = (byte *)(param_2 + 1);
    *(byte *)((long)param_1 + 0x6c) = bVar9;
    if ((uVar3 & 0x3f) == 0x20) {
      pcVar15 = FUN_02ea66e0;
      bVar2 = *pbVar1;
    }
    else {
      pcVar15 = FUN_02ea66f0;
      bVar2 = *pbVar1;
    }
    if (bVar2 != 0) {
      uVar5 = (*pcVar15)(pbVar1,0);
      *(undefined1 *)param_1[10] = uVar5;
      if ((*pbVar1 & 0xfe) != 0) {
        uVar14 = 1;
        do {
          uVar5 = (*pcVar15)(pbVar1,uVar14 & 0xffffffff);
          *(undefined1 *)(param_1[10] + uVar14) = uVar5;
          uVar14 = uVar14 + 1;
        } while (uVar14 < *pbVar1);
      }
      bVar9 = *(byte *)((long)param_1 + 0x6c);
    }
    uVar16 = 1;
    if (5 < bVar9) {
      uVar16 = 2;
    }
  }
  else {
    if ((uVar3 & 0x3f) == 0x20) {
      puVar6 = (undefined4 *)FUN_02f59e40(5,(ulong)bVar2 << 2,0x10);
      param_1[4] = puVar6;
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = 0;
        uVar11 = (ulong)(bVar2 - 1) & 3;
        if (uVar14 - 2 < 3) {
          lVar12 = 1;
        }
        else {
          lVar13 = 0;
          do {
            lVar12 = lVar13;
            lVar13 = lVar12 * 4;
            *(undefined4 *)(param_1[4] + lVar13 + 4) = 0;
            *(undefined4 *)(param_1[4] + lVar13 + 8) = 0;
            *(undefined4 *)(param_1[4] + lVar13 + 0xc) = 0;
            *(undefined4 *)(param_1[4] + lVar13 + 0x10) = 0;
            lVar13 = lVar12 + 4;
          } while (~uVar11 + uVar14 != lVar12 + 4);
          lVar12 = lVar12 + 5;
        }
        if ((bVar2 - 1 & 3) != 0) {
          lVar12 = lVar12 << 2;
          do {
            *(undefined4 *)(param_1[4] + lVar12) = 0;
            uVar11 = uVar11 - 1;
            lVar12 = lVar12 + 4;
          } while (uVar11 != 0);
        }
        goto LAB_02f1c79c;
      }
    }
    else {
      puVar7 = (undefined2 *)FUN_02f59e40(5,(ulong)bVar2 << 1,0x10);
      param_1[4] = puVar7;
      if (puVar7 != (undefined2 *)0x0) {
        *puVar7 = 0;
        uVar11 = (ulong)(bVar2 - 1) & 3;
        if (uVar14 - 2 < 3) {
          lVar12 = 1;
        }
        else {
          lVar13 = 0;
          do {
            lVar12 = lVar13;
            lVar13 = lVar12 * 2;
            *(undefined2 *)(param_1[4] + lVar13 + 2) = 0;
            *(undefined2 *)(param_1[4] + lVar13 + 4) = 0;
            *(undefined2 *)(param_1[4] + lVar13 + 6) = 0;
            *(undefined2 *)(param_1[4] + lVar13 + 8) = 0;
            lVar13 = lVar12 + 4;
          } while (~uVar11 + uVar14 != lVar12 + 4);
          lVar12 = lVar12 + 5;
        }
        if ((bVar2 - 1 & 3) != 0) {
          lVar12 = lVar12 << 1;
          do {
            *(undefined2 *)(param_1[4] + lVar12) = 0;
            uVar11 = uVar11 - 1;
            lVar12 = lVar12 + 2;
          } while (uVar11 != 0);
        }
LAB_02f1c79c:
        uVar8 = FUN_02f59e30(5,uVar14);
        param_1[10] = uVar8;
        *(undefined1 *)(param_1 + 0xb) = 1;
        goto LAB_02f1c510;
      }
    }
    uVar16 = 2;
  }
  return uVar16;
}


