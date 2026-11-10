/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0335cd2c; name: FUN_0335cd2c
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_0335cd2c(long *param_1)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  ulong *puVar4;
  ulong *puVar5;
  int iVar6;
  ulong uVar7;
  bool bVar8;
  int *piVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ulong uVar15;
  undefined8 *puVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined8 uVar22;
  float fVar23;
  undefined8 uVar24;
  float fVar25;
  float fVar26;
  undefined8 uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined8 local_f0;
  ulong uStack_e8;
  undefined8 uStack_e0;
  ulong auStack_d8 [4];
  ulong uStack_b8;
  undefined8 local_b0;
  ulong uStack_a8;
  undefined8 local_a0;
  ulong uStack_98;
  undefined8 local_90;
  ulong uStack_88;
  undefined8 local_80;
  ulong uStack_78;
  
  puVar16 = (undefined8 *)0x0;
  if (*param_1 != 0) {
    puVar16 = (undefined8 *)(*param_1 + (long)param_1);
  }
  if ((int)param_1[1] != 0) {
    puVar1 = puVar16 + (long)(int)param_1[1] * 0x10;
    do {
      uVar33 = puVar16[0xd];
      uVar32 = puVar16[0xc];
      uVar22 = puVar16[2];
      fVar21 = (float)uVar22;
      fVar25 = (float)*puVar16;
      uVar24 = puVar16[6];
      iVar3 = (int)uVar32;
      uVar27 = puVar16[4];
      fVar23 = (float)uVar24;
      fVar26 = (float)uVar27;
      fVar17 = (fVar21 - fVar25) * (fVar23 - fVar26);
      fVar18 = ((float)((ulong)uVar22 >> 0x20) - (float)((ulong)*puVar16 >> 0x20)) *
               ((float)((ulong)uVar24 >> 0x20) - (float)((ulong)uVar27 >> 0x20));
      fVar19 = ((float)puVar16[3] - (float)puVar16[1]) * ((float)puVar16[7] - (float)puVar16[5]);
      fVar20 = ((float)((ulong)puVar16[3] >> 0x20) - (float)((ulong)puVar16[1] >> 0x20)) *
               ((float)((ulong)puVar16[7] >> 0x20) - (float)((ulong)puVar16[5] >> 0x20));
      uVar15 = puVar16[10];
      uVar7 = puVar16[8];
      cVar2 = *(char *)(puVar16 + 0xe);
      fVar28 = (float)uVar15 - (float)uVar7;
      fVar29 = (float)(uVar15 >> 0x20) - (float)(uVar7 >> 0x20);
      fVar30 = (float)puVar16[0xb] - (float)puVar16[9];
      fVar31 = (float)((ulong)puVar16[0xb] >> 0x20) - (float)((ulong)puVar16[9] >> 0x20);
      if (cVar2 == '\0') {
        uVar22 = CONCAT44(fVar18 * fVar29,fVar17 * fVar28);
        uVar24 = CONCAT44(fVar20 * fVar31,fVar19 * fVar30);
        if (iVar3 == 0) goto LAB_0335ce34;
LAB_0335ce00:
        uStack_e8 = uVar7 & 0xffffffff;
        auStack_d8[0] = uVar15 & 0xffffffff;
        local_f0 = CONCAT44(fVar26,fVar25);
        uStack_e0 = CONCAT44(fVar23,fVar21);
        uVar15 = 1;
        local_110 = (undefined4)uVar22;
        local_10c = 0;
      }
      else {
        uVar22 = CONCAT44(fVar18 * fVar29,fVar17 * fVar28);
        uVar24 = CONCAT44(fVar20 * fVar31,fVar19 * fVar30);
        if (iVar3 != -1) goto LAB_0335ce00;
LAB_0335ce34:
        uVar15 = 0;
      }
      bVar8 = *(int *)((long)puVar16 + 100) != 0;
      if (cVar2 != '\0') {
        bVar8 = *(int *)((long)puVar16 + 100) != -1;
      }
      if (bVar8) {
        auStack_d8[2] = (ulong)*(uint *)((long)puVar16 + 0x44);
        auStack_d8[1] =
             CONCAT44(*(undefined4 *)((long)puVar16 + 0x24),*(undefined4 *)((long)puVar16 + 4));
        uVar15 = (ulong)((int)uVar15 + 1);
        uStack_b8 = (ulong)*(uint *)((long)puVar16 + 0x54);
        auStack_d8[3] =
             CONCAT44(*(undefined4 *)((long)puVar16 + 0x34),*(undefined4 *)((long)puVar16 + 0x14));
        local_108 = (undefined4)((ulong)uVar22 >> 0x20);
        local_104 = 1;
      }
      bVar8 = *(int *)(puVar16 + 0xd) != 0;
      if (cVar2 != '\0') {
        bVar8 = *(int *)(puVar16 + 0xd) != -1;
      }
      if (bVar8) {
        uStack_a8 = (ulong)(uint)puVar16[9];
        local_b0 = CONCAT44(*(undefined4 *)(puVar16 + 5),*(undefined4 *)(puVar16 + 1));
        uVar15 = (ulong)((int)uVar15 + 1);
        uStack_98 = (ulong)(uint)puVar16[0xb];
        local_a0 = CONCAT44(*(undefined4 *)(puVar16 + 7),*(undefined4 *)(puVar16 + 3));
        local_100 = (undefined4)uVar24;
        local_fc = 2;
      }
      bVar8 = *(int *)((long)puVar16 + 0x6c) != 0;
      if (cVar2 != '\0') {
        bVar8 = *(int *)((long)puVar16 + 0x6c) != -1;
      }
      if (bVar8) {
        uVar15 = (ulong)((int)uVar15 + 1);
        uStack_88 = (ulong)*(uint *)((long)puVar16 + 0x4c);
        local_90 = CONCAT44(*(undefined4 *)((long)puVar16 + 0x2c),
                            *(undefined4 *)((long)puVar16 + 0xc));
        uStack_78 = (ulong)*(uint *)((long)puVar16 + 0x5c);
        local_80 = CONCAT44(*(undefined4 *)((long)puVar16 + 0x3c),
                            *(undefined4 *)((long)puVar16 + 0x1c));
        local_f8 = (undefined4)((ulong)uVar24 >> 0x20);
        local_f4 = 3;
        FUN_0335d190(&local_110,uVar15);
LAB_0335cff8:
        uVar7 = 0;
        piVar9 = (int *)((ulong)&local_110 | 4);
        do {
          switch(*piVar9) {
          case 0:
            iVar6 = iVar3;
            break;
          case 1:
            iVar6 = (int)((ulong)uVar32 >> 0x20);
            break;
          case 2:
            iVar6 = (int)uVar33;
            break;
          case 3:
            iVar6 = (int)((ulong)uVar33 >> 0x20);
            break;
          default:
            iVar6 = 0;
          }
          *(int *)((long)puVar16 + uVar7 * 4 + 0x60) = iVar6;
          lVar10 = (long)*piVar9;
          iVar6 = (int)uVar7;
          puVar4 = puVar16 + 8;
          puVar5 = puVar16 + 10;
          puVar11 = puVar16;
          puVar12 = puVar16 + 2;
          puVar13 = puVar16 + 4;
          puVar14 = puVar16 + 6;
          if (iVar6 != 0) {
            if (iVar6 == 1) {
              puVar4 = (ulong *)((long)puVar16 + 0x44);
              puVar5 = (ulong *)((long)puVar16 + 0x54);
              puVar11 = (undefined8 *)((long)puVar16 + 4);
              puVar12 = (undefined8 *)((long)puVar16 + 0x14);
              puVar13 = (undefined8 *)((long)puVar16 + 0x24);
              puVar14 = (undefined8 *)((long)puVar16 + 0x34);
            }
            else if (iVar6 == 2) {
              puVar4 = puVar16 + 9;
              puVar5 = puVar16 + 0xb;
              puVar11 = puVar16 + 1;
              puVar12 = puVar16 + 3;
              puVar13 = puVar16 + 5;
              puVar14 = puVar16 + 7;
            }
            else {
              puVar4 = (ulong *)((long)puVar16 + 0x4c);
              puVar5 = (ulong *)((long)puVar16 + 0x5c);
              puVar11 = (undefined8 *)((long)puVar16 + 0xc);
              puVar12 = (undefined8 *)((long)puVar16 + 0x1c);
              puVar13 = (undefined8 *)((long)puVar16 + 0x2c);
              puVar14 = (undefined8 *)((long)puVar16 + 0x3c);
            }
          }
          *(undefined4 *)puVar11 = *(undefined4 *)(&local_f0 + lVar10 * 4);
          *(undefined4 *)puVar12 = *(undefined4 *)((long)&uStack_e0 + lVar10 * 0x20);
          *(undefined4 *)puVar13 = *(undefined4 *)((long)&local_f0 + lVar10 * 0x20 + 4);
          *(undefined4 *)puVar14 = *(undefined4 *)((long)auStack_d8 + lVar10 * 0x20 + -4);
          *(uint *)puVar4 = (uint)(&uStack_e8)[lVar10 * 4];
          uVar7 = uVar7 + 1;
          piVar9 = piVar9 + 2;
          *(uint *)puVar5 = (uint)auStack_d8[lVar10 * 4];
        } while (uVar15 != uVar7);
      }
      else {
        FUN_0335d190(&local_110,uVar15);
        if ((int)uVar15 != 0) goto LAB_0335cff8;
      }
      puVar16 = puVar16 + 0x10;
    } while (puVar16 != puVar1);
  }
  return;
}


