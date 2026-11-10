/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02dfe2dc; name: FUN_02dfe2dc
 */


void FUN_02dfe2dc(long param_1,uint param_2,undefined8 *param_3,long param_4)

{
  undefined4 *puVar1;
  long *plVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined8 *puVar5;
  char cVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  code *pcVar9;
  long lVar10;
  ulong uVar11;
  uint uVar12;
  undefined8 *puVar13;
  undefined4 *puVar14;
  undefined8 *puVar15;
  ulong uVar16;
  code *pcVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
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
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  
  if (*(char *)(param_1 + 0x14) != '\0') {
    param_2 = param_2 << 2;
  }
  uVar16 = (ulong)param_2;
  lVar10 = param_4 + uVar16 * 4;
  puVar15 = (undefined8 *)(lVar10 + uVar16 * 4);
  auVar51 = FUN_02dfe250(param_1,param_1 + 0x18);
  pcVar17 = auVar51._0_8_;
  auVar52 = FUN_02dfe250(param_1,param_1 + 0x58);
  pcVar9 = auVar52._0_8_;
  plVar2 = (long *)(param_1 + ((long)auVar52._8_8_ >> 1));
  if ((auVar52._8_8_ & 1) != 0) {
    pcVar9 = *(code **)(pcVar9 + *plVar2);
  }
  (*pcVar9)(*(undefined4 *)(param_1 + 0x390),plVar2,uVar16,param_1 + 0x58,param_4,0,puVar15);
  plVar2 = (long *)(param_1 + ((long)auVar51._8_8_ >> 1));
  if ((auVar51._8_8_ & 1) != 0) {
    pcVar17 = *(code **)(pcVar17 + *plVar2);
  }
  (*pcVar17)(*(undefined4 *)(param_1 + 0x390),plVar2,uVar16,param_1 + 0x18,lVar10,param_4,puVar15);
  puVar5 = param_3;
  if (*(char *)(param_1 + 0x14) != '\0') {
    puVar5 = puVar15;
  }
  if (*(char *)(param_1 + 0x15) == '\0') {
    FUN_02dfe78c(param_1,uVar16,lVar10,param_4,puVar5);
    cVar6 = *(char *)(param_1 + 0x14);
  }
  else {
    FUN_02dfe6d0(param_1,uVar16,lVar10,param_4,puVar5);
    cVar6 = *(char *)(param_1 + 0x14);
  }
  if (cVar6 != '\0') {
    uVar4 = param_2 & 3;
    uVar11 = uVar16;
    uVar12 = param_2;
    if ((param_2 & 3) != 0) {
      memset((void *)((long)puVar5 + uVar16 * 4),0,(ulong)((4 - uVar4) * 4));
      uVar12 = (4 - uVar4) + param_2;
      uVar11 = (ulong)uVar12;
    }
    uVar8 = *(undefined8 *)(param_1 + 200);
    uVar7 = *(undefined8 *)(param_1 + 0xc0);
    fVar27 = *(float *)(param_1 + 0x140);
    fVar44 = *(float *)(param_1 + 0x144);
    fVar50 = *(float *)(param_1 + 0x148);
    fVar48 = *(float *)(param_1 + 0x14c);
    if (uVar12 != 0) {
      uVar29 = *(undefined8 *)(param_1 + 0xd8);
      uVar28 = *(undefined8 *)(param_1 + 0xd0);
      uVar31 = *(undefined8 *)(param_1 + 0xe8);
      uVar30 = *(undefined8 *)(param_1 + 0xe0);
      uVar33 = *(undefined8 *)(param_1 + 0xf8);
      uVar32 = *(undefined8 *)(param_1 + 0xf0);
      uVar35 = *(undefined8 *)(param_1 + 0x108);
      uVar34 = *(undefined8 *)(param_1 + 0x100);
      uVar41 = *(undefined8 *)(param_1 + 0x138);
      uVar40 = *(undefined8 *)(param_1 + 0x130);
      uVar37 = *(undefined8 *)(param_1 + 0x118);
      uVar36 = *(undefined8 *)(param_1 + 0x110);
      uVar39 = *(undefined8 *)(param_1 + 0x128);
      uVar38 = *(undefined8 *)(param_1 + 0x120);
      puVar15 = puVar5;
      do {
        fVar45 = fVar27 * (float)uVar34;
        fVar46 = fVar27 * (float)((ulong)uVar34 >> 0x20);
        fVar47 = fVar27 * (float)uVar35;
        fVar49 = fVar27 * (float)((ulong)uVar35 >> 0x20);
        fVar18 = (float)uVar36 * fVar44;
        fVar21 = (float)((ulong)uVar36 >> 0x20) * fVar44;
        fVar24 = (float)uVar37 * fVar44;
        fVar25 = (float)((ulong)uVar37 >> 0x20) * fVar44;
        puVar13 = puVar15 + 2;
        fVar44 = (float)puVar15[1];
        fVar27 = (float)((ulong)puVar15[1] >> 0x20);
        fVar42 = (float)*puVar15;
        fVar43 = (float)((ulong)*puVar15 >> 0x20);
        fVar19 = (float)uVar38 * fVar50;
        fVar22 = (float)((ulong)uVar38 >> 0x20) * fVar50;
        fVar20 = (float)uVar40 * fVar48;
        fVar23 = (float)((ulong)uVar40 >> 0x20) * fVar48;
        fVar26 = (float)((ulong)uVar41 >> 0x20) * fVar48;
        fVar48 = fVar47 + fVar24 + (float)uVar39 * fVar50 + (float)uVar41 * fVar48 +
                 (float)uVar8 * fVar44 + (float)uVar29 * fVar44 + (float)uVar31 * fVar43 +
                 (float)uVar33 * fVar42;
        fVar50 = fVar49 + fVar25 + (float)((ulong)uVar39 >> 0x20) * fVar50 + fVar26 +
                 (float)((ulong)uVar8 >> 0x20) * fVar27 + (float)((ulong)uVar29 >> 0x20) * fVar44 +
                 (float)((ulong)uVar31 >> 0x20) * fVar43 + (float)((ulong)uVar33 >> 0x20) * fVar42;
        puVar15[1] = CONCAT44(fVar50,fVar48);
        *puVar15 = CONCAT44(fVar46 + fVar21 + fVar22 + fVar23 +
                            (float)((ulong)uVar7 >> 0x20) * fVar43 +
                            (float)((ulong)uVar28 >> 0x20) * fVar44 +
                            (float)((ulong)uVar30 >> 0x20) * fVar43 +
                            (float)((ulong)uVar32 >> 0x20) * fVar42,
                            fVar45 + fVar18 + fVar19 + fVar20 + (float)uVar7 * fVar42 +
                            (float)uVar28 * fVar44 + (float)uVar30 * fVar43 + (float)uVar32 * fVar42
                           );
        puVar15 = puVar13;
      } while (puVar13 < (undefined8 *)((long)puVar5 + uVar11 * 4));
    }
    *(ulong *)(param_1 + 0x140) = CONCAT44(fVar44,fVar27);
    *(ulong *)(param_1 + 0x148) = CONCAT44(fVar48,fVar50);
    uVar11 = uVar16;
    uVar12 = param_2;
    if (uVar4 != 0) {
      memset((void *)((long)puVar5 + uVar16 * 4),0,(ulong)((4 - uVar4) * 4));
      uVar12 = (4 - uVar4) + param_2;
      uVar11 = (ulong)uVar12;
    }
    fVar27 = *(float *)(param_1 + 0x1d0);
    fVar44 = *(float *)(param_1 + 0x1d4);
    fVar50 = *(float *)(param_1 + 0x1d8);
    fVar48 = *(float *)(param_1 + 0x1dc);
    if (uVar12 != 0) {
      uVar8 = *(undefined8 *)(param_1 + 0x158);
      uVar7 = *(undefined8 *)(param_1 + 0x150);
      uVar29 = *(undefined8 *)(param_1 + 0x168);
      uVar28 = *(undefined8 *)(param_1 + 0x160);
      uVar31 = *(undefined8 *)(param_1 + 0x178);
      uVar30 = *(undefined8 *)(param_1 + 0x170);
      uVar33 = *(undefined8 *)(param_1 + 0x188);
      uVar32 = *(undefined8 *)(param_1 + 0x180);
      uVar35 = *(undefined8 *)(param_1 + 0x198);
      uVar34 = *(undefined8 *)(param_1 + 400);
      uVar37 = *(undefined8 *)(param_1 + 0x1a8);
      uVar36 = *(undefined8 *)(param_1 + 0x1a0);
      uVar39 = *(undefined8 *)(param_1 + 0x1b8);
      uVar38 = *(undefined8 *)(param_1 + 0x1b0);
      uVar41 = *(undefined8 *)(param_1 + 0x1c8);
      uVar40 = *(undefined8 *)(param_1 + 0x1c0);
      puVar15 = puVar5;
      do {
        fVar45 = fVar27 * (float)uVar34;
        fVar46 = fVar27 * (float)((ulong)uVar34 >> 0x20);
        fVar47 = fVar27 * (float)uVar35;
        fVar49 = fVar27 * (float)((ulong)uVar35 >> 0x20);
        fVar18 = (float)uVar36 * fVar44;
        fVar21 = (float)((ulong)uVar36 >> 0x20) * fVar44;
        fVar24 = (float)uVar37 * fVar44;
        fVar25 = (float)((ulong)uVar37 >> 0x20) * fVar44;
        puVar13 = puVar15 + 2;
        fVar44 = (float)puVar15[1];
        fVar27 = (float)((ulong)puVar15[1] >> 0x20);
        fVar42 = (float)*puVar15;
        fVar43 = (float)((ulong)*puVar15 >> 0x20);
        fVar19 = (float)uVar38 * fVar50;
        fVar22 = (float)((ulong)uVar38 >> 0x20) * fVar50;
        fVar20 = (float)uVar40 * fVar48;
        fVar23 = (float)((ulong)uVar40 >> 0x20) * fVar48;
        fVar26 = (float)((ulong)uVar41 >> 0x20) * fVar48;
        fVar48 = fVar47 + fVar24 + (float)uVar39 * fVar50 + (float)uVar41 * fVar48 +
                 (float)uVar8 * fVar44 + (float)uVar29 * fVar44 + (float)uVar31 * fVar43 +
                 (float)uVar33 * fVar42;
        fVar50 = fVar49 + fVar25 + (float)((ulong)uVar39 >> 0x20) * fVar50 + fVar26 +
                 (float)((ulong)uVar8 >> 0x20) * fVar27 + (float)((ulong)uVar29 >> 0x20) * fVar44 +
                 (float)((ulong)uVar31 >> 0x20) * fVar43 + (float)((ulong)uVar33 >> 0x20) * fVar42;
        puVar15[1] = CONCAT44(fVar50,fVar48);
        *puVar15 = CONCAT44(fVar46 + fVar21 + fVar22 + fVar23 +
                            (float)((ulong)uVar7 >> 0x20) * fVar43 +
                            (float)((ulong)uVar28 >> 0x20) * fVar44 +
                            (float)((ulong)uVar30 >> 0x20) * fVar43 +
                            (float)((ulong)uVar32 >> 0x20) * fVar42,
                            fVar45 + fVar18 + fVar19 + fVar20 + (float)uVar7 * fVar42 +
                            (float)uVar28 * fVar44 + (float)uVar30 * fVar43 + (float)uVar32 * fVar42
                           );
        puVar15 = puVar13;
      } while (puVar13 < (undefined8 *)((long)puVar5 + uVar11 * 4));
    }
    *(ulong *)(param_1 + 0x1d0) = CONCAT44(fVar44,fVar27);
    *(ulong *)(param_1 + 0x1d8) = CONCAT44(fVar48,fVar50);
    if (uVar4 == 0) {
      uVar12 = param_2;
    }
    else {
      memset((void *)((long)puVar5 + uVar16 * 4),0,(ulong)((4 - uVar4) * 4));
      uVar12 = (4 - uVar4) + param_2;
      uVar16 = (ulong)uVar12;
    }
    fVar27 = *(float *)(param_1 + 0x260);
    fVar44 = *(float *)(param_1 + 0x264);
    fVar50 = *(float *)(param_1 + 0x268);
    fVar48 = *(float *)(param_1 + 0x26c);
    if (uVar12 != 0) {
      uVar8 = *(undefined8 *)(param_1 + 0x1e8);
      uVar7 = *(undefined8 *)(param_1 + 0x1e0);
      uVar29 = *(undefined8 *)(param_1 + 0x1f8);
      uVar28 = *(undefined8 *)(param_1 + 0x1f0);
      uVar31 = *(undefined8 *)(param_1 + 0x208);
      uVar30 = *(undefined8 *)(param_1 + 0x200);
      uVar33 = *(undefined8 *)(param_1 + 0x218);
      uVar32 = *(undefined8 *)(param_1 + 0x210);
      uVar35 = *(undefined8 *)(param_1 + 0x228);
      uVar34 = *(undefined8 *)(param_1 + 0x220);
      uVar37 = *(undefined8 *)(param_1 + 0x238);
      uVar36 = *(undefined8 *)(param_1 + 0x230);
      uVar39 = *(undefined8 *)(param_1 + 0x248);
      uVar38 = *(undefined8 *)(param_1 + 0x240);
      uVar41 = *(undefined8 *)(param_1 + 600);
      uVar40 = *(undefined8 *)(param_1 + 0x250);
      puVar15 = puVar5;
      do {
        fVar45 = fVar27 * (float)uVar34;
        fVar46 = fVar27 * (float)((ulong)uVar34 >> 0x20);
        fVar47 = fVar27 * (float)uVar35;
        fVar49 = fVar27 * (float)((ulong)uVar35 >> 0x20);
        fVar18 = (float)uVar36 * fVar44;
        fVar21 = (float)((ulong)uVar36 >> 0x20) * fVar44;
        fVar24 = (float)uVar37 * fVar44;
        fVar25 = (float)((ulong)uVar37 >> 0x20) * fVar44;
        puVar13 = puVar15 + 2;
        fVar44 = (float)puVar15[1];
        fVar27 = (float)((ulong)puVar15[1] >> 0x20);
        fVar42 = (float)*puVar15;
        fVar43 = (float)((ulong)*puVar15 >> 0x20);
        fVar19 = (float)uVar38 * fVar50;
        fVar22 = (float)((ulong)uVar38 >> 0x20) * fVar50;
        fVar20 = (float)uVar40 * fVar48;
        fVar23 = (float)((ulong)uVar40 >> 0x20) * fVar48;
        fVar26 = (float)((ulong)uVar41 >> 0x20) * fVar48;
        fVar48 = fVar47 + fVar24 + (float)uVar39 * fVar50 + (float)uVar41 * fVar48 +
                 (float)uVar8 * fVar44 + (float)uVar29 * fVar44 + (float)uVar31 * fVar43 +
                 (float)uVar33 * fVar42;
        fVar50 = fVar49 + fVar25 + (float)((ulong)uVar39 >> 0x20) * fVar50 + fVar26 +
                 (float)((ulong)uVar8 >> 0x20) * fVar27 + (float)((ulong)uVar29 >> 0x20) * fVar44 +
                 (float)((ulong)uVar31 >> 0x20) * fVar43 + (float)((ulong)uVar33 >> 0x20) * fVar42;
        puVar15[1] = CONCAT44(fVar50,fVar48);
        *puVar15 = CONCAT44(fVar46 + fVar21 + fVar22 + fVar23 +
                            (float)((ulong)uVar7 >> 0x20) * fVar43 +
                            (float)((ulong)uVar28 >> 0x20) * fVar44 +
                            (float)((ulong)uVar30 >> 0x20) * fVar43 +
                            (float)((ulong)uVar32 >> 0x20) * fVar42,
                            fVar45 + fVar18 + fVar19 + fVar20 + (float)uVar7 * fVar42 +
                            (float)uVar28 * fVar44 + (float)uVar30 * fVar43 + (float)uVar32 * fVar42
                           );
        puVar15 = puVar13;
      } while (puVar13 < (undefined8 *)((long)puVar5 + uVar16 * 4));
    }
    *(ulong *)(param_1 + 0x260) = CONCAT44(fVar44,fVar27);
    *(ulong *)(param_1 + 0x268) = CONCAT44(fVar48,fVar50);
    if (param_2 != 0) {
      lVar10 = 0;
      puVar14 = (undefined4 *)((long)puVar5 + 0x2c);
      do {
        puVar3 = (undefined4 *)((long)param_3 + lVar10);
        lVar10 = lVar10 + 0x10;
        *puVar3 = puVar14[-8];
        puVar3[1] = puVar14[-4];
        puVar3[2] = *puVar14;
        puVar1 = puVar14 + 4;
        puVar14 = puVar14 + 0x10;
        puVar3[3] = *puVar1;
      } while ((uint)lVar10 < param_2);
    }
  }
  return;
}


