/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00494d70; name: FUN_00494d70
 */


void FUN_00494d70(uint *param_1,undefined8 *param_2,uint *param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  uint *puVar13;
  ulong uVar14;
  ulong *puVar15;
  long lVar16;
  undefined8 *puVar17;
  ulong uVar18;
  uint *puVar19;
  ulong *puVar20;
  undefined8 *puVar21;
  long lVar22;
  undefined8 *puVar23;
  uint *puVar24;
  undefined8 *puVar25;
  ulong uVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  uint uVar31;
  undefined8 uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  undefined8 uVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  long lVar46;
  long lVar47;
  long lVar48;
  long lVar49;
  long lVar50;
  long lVar51;
  long lVar52;
  long lVar53;
  long lVar54;
  long lVar55;
  long lVar56;
  long lVar57;
  ulong uVar58;
  undefined8 uVar59;
  ulong uVar60;
  ulong uVar61;
  uint local_a0 [2];
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  uVar32 = param_2[4];
  uStack_78 = CONCAT44((int)((ulong)param_2[5] >> 0x20) + (int)((ulong)param_2[1] >> 0x20),
                       (int)param_2[5] + (int)param_2[1]);
  local_80 = CONCAT44((int)((ulong)uVar32 >> 0x20) + (int)((ulong)*param_2 >> 0x20),
                      (int)uVar32 + (int)*param_2);
  uVar32 = *(undefined8 *)param_3;
  puVar13 = param_3 + 8;
  uVar38 = *(undefined8 *)puVar13;
  uVar34 = (int)*(undefined8 *)(param_3 + 10) + (int)*(undefined8 *)(param_3 + 2);
  uVar36 = (int)((ulong)*(undefined8 *)(param_3 + 10) >> 0x20) +
           (int)((ulong)*(undefined8 *)(param_3 + 2) >> 0x20);
  uVar7 = 0;
  uVar10 = 0;
  uStack_98 = CONCAT44(uVar36,uVar34);
  uStack_68 = CONCAT44((int)((ulong)param_2[7] >> 0x20) + (int)((ulong)param_2[3] >> 0x20),
                       (int)param_2[7] + (int)param_2[3]);
  local_70 = CONCAT44((int)((ulong)param_2[6] >> 0x20) + (int)((ulong)param_2[2] >> 0x20),
                      (int)param_2[6] + (int)param_2[2]);
  uVar31 = (int)*(undefined8 *)(param_3 + 0xc) + (int)*(undefined8 *)(param_3 + 4);
  uVar33 = (int)((ulong)*(undefined8 *)(param_3 + 0xc) >> 0x20) +
           (int)((ulong)*(undefined8 *)(param_3 + 4) >> 0x20);
  uVar35 = (int)*(undefined8 *)(param_3 + 0xe) + (int)*(undefined8 *)(param_3 + 6);
  uVar37 = (int)((ulong)*(undefined8 *)(param_3 + 0xe) >> 0x20) +
           (int)((ulong)*(undefined8 *)(param_3 + 6) >> 0x20);
  puVar15 = (ulong *)(param_3 + 9);
  uStack_88 = CONCAT44(uVar37,uVar35);
  local_90 = CONCAT44(uVar33,uVar31);
  puVar9 = &local_90;
  uVar3 = *param_3;
  uVar4 = *puVar13;
  puVar21 = &uStack_68;
  lVar22 = 1;
  uVar26 = 7;
  uVar14 = 0;
  puVar25 = param_2;
  do {
    puVar21 = (undefined8 *)((long)puVar21 + 4);
    puVar9 = (ulong *)((long)puVar9 + 4);
    lVar16 = uVar14 * 4;
    lVar27 = (ulong)uVar3 * (ulong)*(uint *)((long)param_2 + lVar16);
    lVar29 = uVar10 + (ulong)(uint)((int)uVar38 + (int)uVar32) *
                      (ulong)*(uint *)((long)&local_80 + lVar16);
    lVar28 = uVar7 + (ulong)uVar4 * (ulong)*(uint *)((long)param_2 + (uVar14 + 8) * 4);
    if (lVar22 != 1) {
      lVar27 = lVar27 + (ulong)param_3[1] * (ulong)*(uint *)((long)param_2 + lVar16 + -4);
      lVar29 = lVar29 + (ulong)(uint)((int)((ulong)uVar38 >> 0x20) + (int)((ulong)uVar32 >> 0x20)) *
                        (ulong)*(uint *)((long)&uStack_88 + lVar16 + 4);
      lVar28 = lVar28 + (ulong)param_3[9] * (ulong)*(uint *)((long)param_2 + lVar16 + 0x1c);
      if (lVar22 != 2) {
        lVar27 = lVar27 + (ulong)param_3[2] * (ulong)*(uint *)((long)param_2 + lVar16 + -8);
        lVar29 = lVar29 + (ulong)uVar34 * (ulong)*(uint *)((long)&uStack_88 + lVar16);
        lVar28 = lVar28 + (ulong)param_3[10] * (ulong)*(uint *)((long)param_2 + lVar16 + 0x18);
        if (lVar22 != 3) {
          lVar27 = lVar27 + (ulong)param_3[3] * (ulong)*(uint *)((long)param_2 + lVar16 + -0xc);
          lVar29 = lVar29 + (ulong)uVar36 * (ulong)*(uint *)((long)&local_90 + lVar16 + 4);
          lVar28 = lVar28 + (ulong)param_3[0xb] * (ulong)*(uint *)((long)param_2 + lVar16 + 0x14);
          if (lVar22 != 4) {
            lVar27 = lVar27 + (ulong)param_3[4] * (ulong)*(uint *)((long)param_2 + lVar16 + -0x10);
            lVar29 = lVar29 + (ulong)uVar31 * (ulong)*(uint *)((long)&local_90 + lVar16);
            lVar28 = lVar28 + (ulong)param_3[0xc] * (ulong)*(uint *)((long)param_2 + lVar16 + 0x10);
            if (lVar22 != 5) {
              lVar27 = lVar27 + (ulong)param_3[5] * (ulong)*(uint *)((long)param_2 + lVar16 + -0x14)
              ;
              lVar29 = lVar29 + (ulong)uVar33 * (ulong)local_a0[uVar14 + 3];
              lVar28 = lVar28 + (ulong)param_3[0xd] * (ulong)*(uint *)((long)param_2 + lVar16 + 0xc)
              ;
              if (lVar22 != 6) {
                lVar27 = lVar27 + (ulong)param_3[6] *
                                  (ulong)*(uint *)((long)param_2 + lVar16 + -0x18);
                lVar29 = lVar29 + (ulong)uVar35 * (ulong)local_a0[uVar14 + 2];
                lVar28 = lVar28 + (ulong)param_3[0xe] * (ulong)*(uint *)((long)param_2 + lVar16 + 8)
                ;
                if (lVar22 != 7) {
                  lVar27 = lVar27 + (ulong)param_3[7] *
                                    (ulong)*(uint *)((long)param_2 + lVar16 + -0x1c);
                  lVar29 = lVar29 + (ulong)uVar37 * (ulong)local_a0[uVar14 + 1];
                  lVar28 = lVar28 + (ulong)param_3[0xf] *
                                    (ulong)*(uint *)((long)param_2 + lVar16 + 4);
                }
              }
            }
          }
        }
      }
    }
    uVar2 = uVar14 + 1;
    lVar29 = lVar29 - lVar27;
    lVar28 = lVar28 + lVar27;
    if (uVar2 < 8) {
      uVar7 = 7 - uVar14;
      if (uVar7 < 8) {
        lVar16 = 0;
        lVar27 = lVar22;
        uVar10 = uVar14;
      }
      else {
        lVar12 = 0;
        lVar16 = 0;
        lVar30 = 0;
        lVar39 = 0;
        lVar41 = 0;
        lVar40 = 0;
        lVar43 = 0;
        lVar42 = 0;
        lVar53 = 0;
        lVar52 = 0;
        lVar55 = 0;
        lVar54 = 0;
        lVar45 = 0;
        lVar44 = 0;
        uVar11 = uVar7 & 0xfffffffffffffff8;
        lVar47 = 0;
        lVar46 = 0;
        lVar57 = 0;
        lVar56 = 0;
        uVar18 = uVar26 & 0xfffffffffffffff8;
        lVar49 = 0;
        lVar48 = 0;
        lVar51 = 0;
        lVar50 = 0;
        lVar27 = lVar22 + uVar11;
        uVar10 = uVar14 + uVar11;
        puVar8 = puVar9;
        puVar17 = &local_70;
        puVar20 = puVar15;
        puVar23 = param_2 + 4;
        do {
          uVar60 = NEON_rev64(puVar23[-3],4);
          uVar18 = uVar18 - 8;
          uVar58 = NEON_rev64(puVar23[-1],4);
          uVar61 = NEON_rev64(puVar23[-2],4);
          lVar28 = lVar28 - (puVar20[-4] & 0xffffffff) * (uVar58 & 0xffffffff);
          lVar12 = lVar12 - (puVar20[-4] >> 0x20) * (uVar58 >> 0x20);
          lVar40 = lVar40 - (puVar20[-2] & 0xffffffff) * (uVar60 & 0xffffffff);
          lVar41 = lVar41 - (puVar20[-2] >> 0x20) * (uVar60 >> 0x20);
          uVar59 = *puVar17;
          puVar5 = puVar17 + 1;
          uVar58 = NEON_rev64(puVar23[-4],4);
          lVar39 = lVar39 - (puVar20[-3] & 0xffffffff) * (uVar61 & 0xffffffff);
          lVar30 = lVar30 - (puVar20[-3] >> 0x20) * (uVar61 >> 0x20);
          lVar42 = lVar42 - (puVar20[-1] & 0xffffffff) * (uVar58 & 0xffffffff);
          lVar43 = lVar43 - (puVar20[-1] >> 0x20) * (uVar58 >> 0x20);
          puVar1 = puVar17 + -2;
          puVar6 = puVar17 + -1;
          puVar17 = puVar17 + -4;
          uVar60 = NEON_rev64(*puVar5,4);
          uVar58 = NEON_rev64(uVar59,4);
          lVar54 = lVar54 + (puVar8[-1] & 0xffffffff) * (uVar58 & 0xffffffff);
          lVar55 = lVar55 + (puVar8[-1] >> 0x20) * (uVar58 >> 0x20);
          lVar52 = lVar52 + (puVar8[-2] & 0xffffffff) * (uVar60 & 0xffffffff);
          lVar53 = lVar53 + (puVar8[-2] >> 0x20) * (uVar60 >> 0x20);
          uVar60 = NEON_rev64(*puVar6,4);
          uVar58 = NEON_rev64(*puVar1,4);
          lVar44 = lVar44 + (*puVar8 & 0xffffffff) * (uVar60 & 0xffffffff);
          lVar45 = lVar45 + (*puVar8 >> 0x20) * (uVar60 >> 0x20);
          lVar46 = lVar46 + (puVar8[1] & 0xffffffff) * (uVar58 & 0xffffffff);
          lVar47 = lVar47 + (puVar8[1] >> 0x20) * (uVar58 >> 0x20);
          uVar58 = NEON_rev64(puVar23[3],4);
          lVar29 = lVar29 + (*puVar20 & 0xffffffff) * (uVar58 & 0xffffffff);
          lVar16 = lVar16 + (*puVar20 >> 0x20) * (uVar58 >> 0x20);
          uVar58 = NEON_rev64(puVar23[2],4);
          lVar56 = lVar56 + (puVar20[1] & 0xffffffff) * (uVar58 & 0xffffffff);
          lVar57 = lVar57 + (puVar20[1] >> 0x20) * (uVar58 >> 0x20);
          uVar60 = NEON_rev64(puVar23[1],4);
          uVar58 = NEON_rev64(*puVar23,4);
          lVar50 = lVar50 + (puVar20[3] & 0xffffffff) * (uVar58 & 0xffffffff);
          lVar51 = lVar51 + (puVar20[3] >> 0x20) * (uVar58 >> 0x20);
          lVar48 = lVar48 + (puVar20[2] & 0xffffffff) * (uVar60 & 0xffffffff);
          lVar49 = lVar49 + (puVar20[2] >> 0x20) * (uVar60 >> 0x20);
          puVar20 = puVar20 + 4;
          puVar8 = puVar8 + 4;
          puVar23 = puVar23 + -4;
        } while (uVar18 != 0);
        lVar29 = lVar50 + lVar48 + lVar56 + lVar29 + lVar51 + lVar49 + lVar57 + lVar16;
        lVar16 = lVar46 + lVar44 + lVar54 + lVar52 + lVar47 + lVar45 + lVar55 + lVar53;
        lVar28 = lVar42 + lVar40 + lVar39 + lVar28 + lVar43 + lVar41 + lVar30 + lVar12;
        if (uVar7 == uVar11) goto LAB_00494e54;
      }
      lVar12 = 0;
      puVar19 = local_a0 + lVar27;
      puVar24 = puVar13 + lVar27;
      do {
        lVar30 = lVar12 * 4;
        lVar12 = lVar12 + -1;
        lVar39 = lVar30 + uVar10 * -4;
        lVar28 = lVar28 - (ulong)puVar24[-8] * (ulong)*(uint *)((long)puVar25 + lVar39 + 0x1c);
        lVar16 = lVar16 + (ulong)*puVar19 * (ulong)*(uint *)((long)puVar21 + lVar30 + uVar10 * -4);
        lVar29 = lVar29 + (ulong)*puVar24 * (ulong)*(uint *)((long)puVar25 + lVar39 + 0x3c);
        puVar19 = puVar19 + 1;
        puVar24 = puVar24 + 1;
      } while (lVar27 + -8 != lVar12);
    }
    else {
      lVar16 = 0;
    }
LAB_00494e54:
    uVar7 = (ulong)(lVar28 + lVar16) >> 0x1c;
    param_1[uVar14] = (uint)(lVar28 + lVar16) & 0xfffffff;
    param_1[uVar14 + 8] = (uint)(lVar16 + lVar29) & 0xfffffff;
    uVar10 = (ulong)(lVar16 + lVar29) >> 0x1c;
    lVar22 = lVar22 + 1;
    uVar26 = uVar26 - 1;
    puVar15 = (ulong *)((long)puVar15 + 4);
    puVar25 = (undefined8 *)((long)puVar25 + 4);
    uVar14 = uVar2;
    if (uVar2 == 8) {
      uVar14 = uVar7 + uVar10 + (ulong)param_1[8];
      param_1[8] = (uint)uVar14 & 0xfffffff;
      uVar3 = *param_1;
      param_1[9] = param_1[9] + (int)(uVar14 >> 0x1c);
      *param_1 = (uint)(uVar10 + uVar3) & 0xfffffff;
      param_1[1] = param_1[1] + (int)(uVar10 + uVar3 >> 0x1c);
      return;
    }
  } while( true );
}


