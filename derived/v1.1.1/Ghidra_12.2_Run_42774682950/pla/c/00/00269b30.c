/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00269b30; name: FUN_00269b30
 */


void FUN_00269b30(undefined8 param_1,char *param_2)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar7;
  undefined8 uVar6;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar18;
  undefined8 uVar17;
  float fVar19;
  float fVar20;
  float fVar22;
  undefined8 uVar21;
  float fVar23;
  float fVar25;
  undefined8 uVar24;
  float fVar26;
  float fVar28;
  undefined8 uVar27;
  float fVar29;
  float fVar31;
  undefined8 uVar30;
  float fVar32;
  float fVar34;
  undefined8 uVar33;
  float fVar35;
  float fVar37;
  undefined8 uVar36;
  undefined8 uVar38;
  undefined8 uVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_28;
  
  if (*param_2 == '\0') {
    lVar1 = *(long *)(param_2 + 0x78);
    if (*(char *)(*(long *)(param_2 + 0x238) + 2) == '\0') {
      if (*(int *)(lVar1 + 0x18) == 0) goto LAB_00269ffc;
      fVar4 = (float)*(undefined8 *)(param_2 + 0x2c0);
      fVar20 = (float)*(undefined8 *)(lVar1 + 0x60);
      fVar22 = (float)((ulong)*(undefined8 *)(lVar1 + 0x60) >> 0x20);
      fVar23 = (float)*(undefined8 *)(lVar1 + 0x68);
      fVar25 = (float)((ulong)*(undefined8 *)(lVar1 + 0x68) >> 0x20);
      fVar7 = (float)((ulong)*(undefined8 *)(param_2 + 0x2c0) >> 0x20);
      fVar26 = (float)*(undefined8 *)(lVar1 + 0x70);
      fVar28 = (float)((ulong)*(undefined8 *)(lVar1 + 0x70) >> 0x20);
      fVar29 = (float)*(undefined8 *)(lVar1 + 0x78);
      fVar31 = (float)((ulong)*(undefined8 *)(lVar1 + 0x78) >> 0x20);
      uVar12 = *(undefined8 *)(lVar1 + 0x98);
      uVar6 = *(undefined8 *)(lVar1 + 0x90);
      fVar9 = (float)*(undefined8 *)(param_2 + 0x2c8);
      fVar32 = (float)*(undefined8 *)(lVar1 + 0x80);
      fVar40 = (float)((ulong)*(undefined8 *)(lVar1 + 0x80) >> 0x20);
      fVar41 = (float)*(undefined8 *)(lVar1 + 0x88);
      fVar42 = (float)((ulong)*(undefined8 *)(lVar1 + 0x88) >> 0x20);
      fVar10 = (float)*(undefined8 *)(param_2 + 0x2d0);
      fVar11 = (float)*(undefined8 *)(param_2 + 0x2e0);
      fVar13 = (float)((ulong)*(undefined8 *)(param_2 + 0x2e0) >> 0x20);
      fVar14 = (float)*(undefined8 *)(param_2 + 0x2e8);
      fVar5 = (float)((ulong)*(undefined8 *)(param_2 + 0x2d0) >> 0x20);
      fVar8 = (float)*(undefined8 *)(param_2 + 0x2d8);
      fVar16 = (float)*(undefined8 *)(param_2 + 0x2f0);
      fVar18 = (float)((ulong)*(undefined8 *)(param_2 + 0x2f0) >> 0x20);
      fVar19 = (float)*(undefined8 *)(param_2 + 0x2f8);
      *(ulong *)(param_2 + 0x348) =
           CONCAT44(fVar25 * fVar4 + fVar31 * fVar7 + fVar42 * fVar9,
                    fVar23 * fVar4 + fVar29 * fVar7 + fVar41 * fVar9);
      *(ulong *)(param_2 + 0x340) =
           CONCAT44(fVar22 * fVar4 + fVar28 * fVar7 + fVar40 * fVar9,
                    fVar20 * fVar4 + fVar26 * fVar7 + fVar32 * fVar9);
      *(ulong *)(param_2 + 0x358) =
           CONCAT44(fVar25 * fVar10 + fVar31 * fVar5 + fVar42 * fVar8,
                    fVar23 * fVar10 + fVar29 * fVar5 + fVar41 * fVar8);
      *(ulong *)(param_2 + 0x350) =
           CONCAT44(fVar22 * fVar10 + fVar28 * fVar5 + fVar40 * fVar8,
                    fVar20 * fVar10 + fVar26 * fVar5 + fVar32 * fVar8);
      fVar9 = (float)*(undefined8 *)(param_2 + 0x328);
      uVar15 = *(undefined8 *)(param_2 + 800);
      fVar10 = (float)*(undefined8 *)(param_2 + 0x338);
      uVar17 = *(undefined8 *)(param_2 + 0x330);
      *(ulong *)(param_2 + 0x368) =
           CONCAT44(fVar25 * fVar11 + fVar31 * fVar13 + fVar42 * fVar14,
                    fVar23 * fVar11 + fVar29 * fVar13 + fVar41 * fVar14);
      *(ulong *)(param_2 + 0x360) =
           CONCAT44(fVar22 * fVar11 + fVar28 * fVar13 + fVar40 * fVar14,
                    fVar20 * fVar11 + fVar26 * fVar13 + fVar32 * fVar14);
      *(ulong *)(param_2 + 0x378) =
           CONCAT44((float)((ulong)uVar12 >> 0x20) +
                    fVar25 * fVar16 + fVar31 * fVar18 + fVar42 * fVar19,
                    (float)uVar12 + fVar23 * fVar16 + fVar29 * fVar18 + fVar41 * fVar19);
      *(ulong *)(param_2 + 0x370) =
           CONCAT44((float)((ulong)uVar6 >> 0x20) +
                    fVar22 * fVar16 + fVar28 * fVar18 + fVar40 * fVar19,
                    (float)uVar6 + fVar20 * fVar16 + fVar26 * fVar18 + fVar32 * fVar19);
      fVar4 = (float)*(undefined8 *)(param_2 + 0x308);
      uVar6 = *(undefined8 *)(param_2 + 0x300);
      fVar7 = (float)*(undefined8 *)(param_2 + 0x318);
      uVar12 = *(undefined8 *)(param_2 + 0x310);
      uVar24 = *(undefined8 *)(lVar1 + 0xa8);
      uVar21 = *(undefined8 *)(lVar1 + 0xa0);
      uVar30 = *(undefined8 *)(lVar1 + 0xb8);
      uVar27 = *(undefined8 *)(lVar1 + 0xb0);
      uVar36 = *(undefined8 *)(lVar1 + 200);
      uVar33 = *(undefined8 *)(lVar1 + 0xc0);
      uVar39 = *(undefined8 *)(lVar1 + 0xd8);
      uVar38 = *(undefined8 *)(lVar1 + 0xd0);
      goto LAB_00269fc0;
    }
    FUN_0026946c(param_1,param_2,&local_60,&local_a0);
    fVar10 = SUB84(local_60,0);
    fVar20 = (float)*(undefined8 *)(lVar1 + 0x60);
    fVar22 = (float)((ulong)*(undefined8 *)(lVar1 + 0x60) >> 0x20);
    fVar23 = (float)*(undefined8 *)(lVar1 + 0x68);
    fVar25 = (float)((ulong)*(undefined8 *)(lVar1 + 0x68) >> 0x20);
    fVar5 = (float)((ulong)local_60 >> 0x20);
    fVar26 = (float)*(undefined8 *)(lVar1 + 0x70);
    fVar28 = (float)((ulong)*(undefined8 *)(lVar1 + 0x70) >> 0x20);
    fVar29 = (float)*(undefined8 *)(lVar1 + 0x78);
    fVar31 = (float)((ulong)*(undefined8 *)(lVar1 + 0x78) >> 0x20);
    uVar12 = *(undefined8 *)(lVar1 + 0x98);
    uVar6 = *(undefined8 *)(lVar1 + 0x90);
    fVar8 = (float)uStack_58;
    fVar32 = (float)*(undefined8 *)(lVar1 + 0x80);
    fVar40 = (float)((ulong)*(undefined8 *)(lVar1 + 0x80) >> 0x20);
    fVar41 = (float)*(undefined8 *)(lVar1 + 0x88);
    fVar42 = (float)((ulong)*(undefined8 *)(lVar1 + 0x88) >> 0x20);
    fVar4 = (float)local_50;
    fVar16 = (float)local_40;
    fVar18 = (float)((ulong)local_40 >> 0x20);
    fVar19 = (float)uStack_38;
    fVar7 = (float)((ulong)local_50 >> 0x20);
    fVar9 = (float)local_48;
    fVar11 = (float)local_30;
    fVar13 = (float)((ulong)local_30 >> 0x20);
    fVar14 = (float)local_28;
    *(ulong *)(param_2 + 0x348) =
         CONCAT44(fVar25 * fVar10 + fVar31 * fVar5 + fVar42 * fVar8,
                  fVar23 * fVar10 + fVar29 * fVar5 + fVar41 * fVar8);
    *(ulong *)(param_2 + 0x340) =
         CONCAT44(fVar22 * fVar10 + fVar28 * fVar5 + fVar40 * fVar8,
                  fVar20 * fVar10 + fVar26 * fVar5 + fVar32 * fVar8);
    *(ulong *)(param_2 + 0x358) =
         CONCAT44(fVar25 * fVar4 + fVar31 * fVar7 + fVar42 * fVar9,
                  fVar23 * fVar4 + fVar29 * fVar7 + fVar41 * fVar9);
    *(ulong *)(param_2 + 0x350) =
         CONCAT44(fVar22 * fVar4 + fVar28 * fVar7 + fVar40 * fVar9,
                  fVar20 * fVar4 + fVar26 * fVar7 + fVar32 * fVar9);
    *(ulong *)(param_2 + 0x368) =
         CONCAT44(fVar25 * fVar16 + fVar31 * fVar18 + fVar42 * fVar19,
                  fVar23 * fVar16 + fVar29 * fVar18 + fVar41 * fVar19);
    *(ulong *)(param_2 + 0x360) =
         CONCAT44(fVar22 * fVar16 + fVar28 * fVar18 + fVar40 * fVar19,
                  fVar20 * fVar16 + fVar26 * fVar18 + fVar32 * fVar19);
    *(ulong *)(param_2 + 0x378) =
         CONCAT44((float)((ulong)uVar12 >> 0x20) +
                  fVar25 * fVar11 + fVar31 * fVar13 + fVar42 * fVar14,
                  (float)uVar12 + fVar23 * fVar11 + fVar29 * fVar13 + fVar41 * fVar14);
    *(ulong *)(param_2 + 0x370) =
         CONCAT44((float)((ulong)uVar6 >> 0x20) +
                  fVar22 * fVar11 + fVar28 * fVar13 + fVar40 * fVar14,
                  (float)uVar6 + fVar20 * fVar11 + fVar26 * fVar13 + fVar32 * fVar14);
    fVar10 = (float)local_a0;
    fVar16 = (float)*(undefined8 *)(lVar1 + 0xa0);
    fVar18 = (float)((ulong)*(undefined8 *)(lVar1 + 0xa0) >> 0x20);
    fVar19 = (float)*(undefined8 *)(lVar1 + 0xa8);
    fVar20 = (float)((ulong)*(undefined8 *)(lVar1 + 0xa8) >> 0x20);
    fVar5 = (float)((ulong)local_a0 >> 0x20);
    fVar22 = (float)*(undefined8 *)(lVar1 + 0xb0);
    fVar23 = (float)((ulong)*(undefined8 *)(lVar1 + 0xb0) >> 0x20);
    fVar25 = (float)*(undefined8 *)(lVar1 + 0xb8);
    fVar26 = (float)((ulong)*(undefined8 *)(lVar1 + 0xb8) >> 0x20);
    fVar8 = (float)uStack_98;
    fVar28 = (float)*(undefined8 *)(lVar1 + 0xc0);
    fVar29 = (float)((ulong)*(undefined8 *)(lVar1 + 0xc0) >> 0x20);
    fVar31 = (float)*(undefined8 *)(lVar1 + 200);
    fVar32 = (float)((ulong)*(undefined8 *)(lVar1 + 200) >> 0x20);
    fVar4 = (float)local_90;
    fVar7 = (float)local_80;
    fVar9 = (float)((ulong)local_80 >> 0x20);
    fVar11 = (float)uStack_78;
    fVar40 = fVar16 * fVar7 + fVar22 * fVar9 + fVar28 * fVar11;
    fVar41 = fVar18 * fVar7 + fVar23 * fVar9 + fVar29 * fVar11;
    fVar42 = fVar19 * fVar7 + fVar25 * fVar9 + fVar31 * fVar11;
    fVar43 = fVar20 * fVar7 + fVar26 * fVar9 + fVar32 * fVar11;
    fVar7 = (float)((ulong)local_90 >> 0x20);
    fVar9 = (float)uStack_88;
    fVar11 = (float)local_70;
    fVar13 = (float)((ulong)local_70 >> 0x20);
    fVar14 = (float)uStack_68;
    uVar6 = CONCAT44((float)((ulong)*(undefined8 *)(lVar1 + 0xd0) >> 0x20) +
                     fVar18 * fVar11 + fVar23 * fVar13 + fVar29 * fVar14,
                     (float)*(undefined8 *)(lVar1 + 0xd0) +
                     fVar16 * fVar11 + fVar22 * fVar13 + fVar28 * fVar14);
    uVar12 = CONCAT44((float)((ulong)*(undefined8 *)(lVar1 + 0xd8) >> 0x20) +
                      fVar20 * fVar11 + fVar26 * fVar13 + fVar32 * fVar14,
                      (float)*(undefined8 *)(lVar1 + 0xd8) +
                      fVar19 * fVar11 + fVar25 * fVar13 + fVar31 * fVar14);
    *(ulong *)(param_2 + 0x388) =
         CONCAT44(fVar20 * fVar10 + fVar26 * fVar5 + fVar32 * fVar8,
                  fVar19 * fVar10 + fVar25 * fVar5 + fVar31 * fVar8);
    *(ulong *)(param_2 + 0x380) =
         CONCAT44(fVar18 * fVar10 + fVar23 * fVar5 + fVar29 * fVar8,
                  fVar16 * fVar10 + fVar22 * fVar5 + fVar28 * fVar8);
    *(ulong *)(param_2 + 0x398) =
         CONCAT44(fVar20 * fVar4 + fVar26 * fVar7 + fVar32 * fVar9,
                  fVar19 * fVar4 + fVar25 * fVar7 + fVar31 * fVar9);
    *(ulong *)(param_2 + 0x390) =
         CONCAT44(fVar18 * fVar4 + fVar23 * fVar7 + fVar29 * fVar9,
                  fVar16 * fVar4 + fVar22 * fVar7 + fVar28 * fVar9);
  }
  else if (*(char *)(*(long *)(param_2 + 0xa0) + 0x7e4) == '\0') {
    if (*(char *)(*(long *)(param_2 + 0x238) + 2) == '\0') {
      *(undefined8 *)(param_2 + 0x360) = *(undefined8 *)(param_2 + 0x2e0);
      *(undefined8 *)(param_2 + 0x368) = *(undefined8 *)(param_2 + 0x2e8);
      *(undefined8 *)(param_2 + 0x370) = *(undefined8 *)(param_2 + 0x2f0);
      *(undefined8 *)(param_2 + 0x378) = *(undefined8 *)(param_2 + 0x2f8);
      *(undefined8 *)(param_2 + 0x340) = *(undefined8 *)(param_2 + 0x2c0);
      *(undefined8 *)(param_2 + 0x348) = *(undefined8 *)(param_2 + 0x2c8);
      *(undefined8 *)(param_2 + 0x350) = *(undefined8 *)(param_2 + 0x2d0);
      *(undefined8 *)(param_2 + 0x358) = *(undefined8 *)(param_2 + 0x2d8);
      *(undefined8 *)(param_2 + 0x398) = *(undefined8 *)(param_2 + 0x318);
      *(undefined8 *)(param_2 + 0x390) = *(undefined8 *)(param_2 + 0x310);
      *(undefined8 *)(param_2 + 0x388) = *(undefined8 *)(param_2 + 0x308);
      *(undefined8 *)(param_2 + 0x380) = *(undefined8 *)(param_2 + 0x300);
      *(undefined8 *)(param_2 + 0x3b8) = *(undefined8 *)(param_2 + 0x338);
      *(undefined8 *)(param_2 + 0x3b0) = *(undefined8 *)(param_2 + 0x330);
      *(undefined8 *)(param_2 + 0x3a8) = *(undefined8 *)(param_2 + 0x328);
      *(undefined8 *)(param_2 + 0x3a0) = *(undefined8 *)(param_2 + 800);
    }
    else {
      FUN_0026946c(param_1,param_2,&local_60,&local_a0);
      *(undefined8 *)(param_2 + 0x368) = uStack_38;
      *(undefined8 *)(param_2 + 0x378) = local_28;
      *(undefined8 *)(param_2 + 0x348) = uStack_58;
      *(undefined8 *)(param_2 + 0x358) = local_48;
      *(undefined8 *)(param_2 + 0x350) = local_50;
      *(char **)(param_2 + 0x340) = local_60;
      *(undefined8 *)(param_2 + 0x370) = local_30;
      *(undefined8 *)(param_2 + 0x360) = local_40;
      *(undefined8 *)(param_2 + 0x390) = local_90;
      *(undefined8 *)(param_2 + 0x380) = local_a0;
      *(undefined8 *)(param_2 + 0x398) = uStack_88;
      *(undefined8 *)(param_2 + 0x388) = uStack_98;
      *(undefined8 *)(param_2 + 0x3a0) = local_80;
      *(undefined8 *)(param_2 + 0x3b0) = local_70;
      *(undefined8 *)(param_2 + 0x3b8) = uStack_68;
      *(undefined8 *)(param_2 + 0x3a8) = uStack_78;
    }
    lVar1 = *(long *)(param_2 + 0x548);
    if (*(char *)(*(long *)(lVar1 + 0xa0) + 0x753) == '\x01') goto LAB_00269ffc;
    fVar4 = (float)*(undefined8 *)(param_2 + 0x340);
    fVar20 = (float)*(undefined8 *)(lVar1 + 0x340);
    fVar22 = (float)((ulong)*(undefined8 *)(lVar1 + 0x340) >> 0x20);
    fVar23 = (float)*(undefined8 *)(lVar1 + 0x348);
    fVar25 = (float)((ulong)*(undefined8 *)(lVar1 + 0x348) >> 0x20);
    fVar7 = (float)((ulong)*(undefined8 *)(param_2 + 0x340) >> 0x20);
    fVar26 = (float)*(undefined8 *)(lVar1 + 0x350);
    fVar28 = (float)((ulong)*(undefined8 *)(lVar1 + 0x350) >> 0x20);
    fVar29 = (float)*(undefined8 *)(lVar1 + 0x358);
    fVar31 = (float)((ulong)*(undefined8 *)(lVar1 + 0x358) >> 0x20);
    uVar12 = *(undefined8 *)(lVar1 + 0x378);
    uVar6 = *(undefined8 *)(lVar1 + 0x370);
    fVar9 = (float)*(undefined8 *)(param_2 + 0x348);
    fVar32 = (float)*(undefined8 *)(lVar1 + 0x360);
    fVar40 = (float)((ulong)*(undefined8 *)(lVar1 + 0x360) >> 0x20);
    fVar41 = (float)*(undefined8 *)(lVar1 + 0x368);
    fVar42 = (float)((ulong)*(undefined8 *)(lVar1 + 0x368) >> 0x20);
    fVar10 = (float)*(undefined8 *)(param_2 + 0x350);
    fVar11 = (float)*(undefined8 *)(param_2 + 0x360);
    fVar13 = (float)((ulong)*(undefined8 *)(param_2 + 0x360) >> 0x20);
    fVar14 = (float)*(undefined8 *)(param_2 + 0x368);
    fVar5 = (float)((ulong)*(undefined8 *)(param_2 + 0x350) >> 0x20);
    fVar8 = (float)*(undefined8 *)(param_2 + 0x358);
    fVar16 = (float)*(undefined8 *)(param_2 + 0x370);
    fVar18 = (float)((ulong)*(undefined8 *)(param_2 + 0x370) >> 0x20);
    fVar19 = (float)*(undefined8 *)(param_2 + 0x378);
    *(ulong *)(param_2 + 0x348) =
         CONCAT44(fVar25 * fVar4 + fVar31 * fVar7 + fVar42 * fVar9,
                  fVar23 * fVar4 + fVar29 * fVar7 + fVar41 * fVar9);
    *(ulong *)(param_2 + 0x340) =
         CONCAT44(fVar22 * fVar4 + fVar28 * fVar7 + fVar40 * fVar9,
                  fVar20 * fVar4 + fVar26 * fVar7 + fVar32 * fVar9);
    *(ulong *)(param_2 + 0x358) =
         CONCAT44(fVar25 * fVar10 + fVar31 * fVar5 + fVar42 * fVar8,
                  fVar23 * fVar10 + fVar29 * fVar5 + fVar41 * fVar8);
    *(ulong *)(param_2 + 0x350) =
         CONCAT44(fVar22 * fVar10 + fVar28 * fVar5 + fVar40 * fVar8,
                  fVar20 * fVar10 + fVar26 * fVar5 + fVar32 * fVar8);
    fVar9 = (float)*(undefined8 *)(param_2 + 0x3a8);
    uVar15 = *(undefined8 *)(param_2 + 0x3a0);
    fVar10 = (float)*(undefined8 *)(param_2 + 0x3b8);
    uVar17 = *(undefined8 *)(param_2 + 0x3b0);
    *(ulong *)(param_2 + 0x368) =
         CONCAT44(fVar25 * fVar11 + fVar31 * fVar13 + fVar42 * fVar14,
                  fVar23 * fVar11 + fVar29 * fVar13 + fVar41 * fVar14);
    *(ulong *)(param_2 + 0x360) =
         CONCAT44(fVar22 * fVar11 + fVar28 * fVar13 + fVar40 * fVar14,
                  fVar20 * fVar11 + fVar26 * fVar13 + fVar32 * fVar14);
    *(ulong *)(param_2 + 0x378) =
         CONCAT44((float)((ulong)uVar12 >> 0x20) +
                  fVar25 * fVar16 + fVar31 * fVar18 + fVar42 * fVar19,
                  (float)uVar12 + fVar23 * fVar16 + fVar29 * fVar18 + fVar41 * fVar19);
    *(ulong *)(param_2 + 0x370) =
         CONCAT44((float)((ulong)uVar6 >> 0x20) +
                  fVar22 * fVar16 + fVar28 * fVar18 + fVar40 * fVar19,
                  (float)uVar6 + fVar20 * fVar16 + fVar26 * fVar18 + fVar32 * fVar19);
    fVar4 = (float)*(undefined8 *)(param_2 + 0x388);
    uVar6 = *(undefined8 *)(param_2 + 0x380);
    fVar7 = (float)*(undefined8 *)(param_2 + 0x398);
    uVar12 = *(undefined8 *)(param_2 + 0x390);
    uVar24 = *(undefined8 *)(lVar1 + 0x388);
    uVar21 = *(undefined8 *)(lVar1 + 0x380);
    uVar30 = *(undefined8 *)(lVar1 + 0x398);
    uVar27 = *(undefined8 *)(lVar1 + 0x390);
    uVar36 = *(undefined8 *)(lVar1 + 0x3a8);
    uVar33 = *(undefined8 *)(lVar1 + 0x3a0);
    uVar39 = *(undefined8 *)(lVar1 + 0x3b8);
    uVar38 = *(undefined8 *)(lVar1 + 0x3b0);
LAB_00269fc0:
    fVar5 = (float)uVar6;
    fVar18 = (float)uVar21;
    fVar19 = (float)((ulong)uVar21 >> 0x20);
    fVar20 = (float)uVar24;
    fVar22 = (float)((ulong)uVar24 >> 0x20);
    fVar8 = (float)((ulong)uVar6 >> 0x20);
    fVar23 = (float)uVar27;
    fVar25 = (float)((ulong)uVar27 >> 0x20);
    fVar26 = (float)uVar30;
    fVar28 = (float)((ulong)uVar30 >> 0x20);
    fVar14 = (float)uVar15;
    fVar16 = (float)((ulong)uVar15 >> 0x20);
    fVar29 = (float)uVar33;
    fVar31 = (float)((ulong)uVar33 >> 0x20);
    fVar32 = (float)uVar36;
    fVar34 = (float)((ulong)uVar36 >> 0x20);
    fVar11 = (float)uVar12;
    fVar13 = (float)((ulong)uVar12 >> 0x20);
    fVar40 = fVar18 * fVar14 + fVar23 * fVar16 + fVar29 * fVar9;
    fVar41 = fVar19 * fVar14 + fVar25 * fVar16 + fVar31 * fVar9;
    fVar42 = fVar20 * fVar14 + fVar26 * fVar16 + fVar32 * fVar9;
    fVar43 = fVar22 * fVar14 + fVar28 * fVar16 + fVar34 * fVar9;
    fVar9 = (float)uVar17;
    fVar14 = (float)((ulong)uVar17 >> 0x20);
    *(ulong *)(param_2 + 0x388) =
         CONCAT44(fVar22 * fVar5 + fVar28 * fVar8 + fVar34 * fVar4,
                  fVar20 * fVar5 + fVar26 * fVar8 + fVar32 * fVar4);
    *(ulong *)(param_2 + 0x380) =
         CONCAT44(fVar19 * fVar5 + fVar25 * fVar8 + fVar31 * fVar4,
                  fVar18 * fVar5 + fVar23 * fVar8 + fVar29 * fVar4);
    *(ulong *)(param_2 + 0x398) =
         CONCAT44(fVar22 * fVar11 + fVar28 * fVar13 + fVar34 * fVar7,
                  fVar20 * fVar11 + fVar26 * fVar13 + fVar32 * fVar7);
    *(ulong *)(param_2 + 0x390) =
         CONCAT44(fVar19 * fVar11 + fVar25 * fVar13 + fVar31 * fVar7,
                  fVar18 * fVar11 + fVar23 * fVar13 + fVar29 * fVar7);
    uVar6 = CONCAT44((float)((ulong)uVar38 >> 0x20) +
                     fVar19 * fVar9 + fVar25 * fVar14 + fVar31 * fVar10,
                     (float)uVar38 + fVar18 * fVar9 + fVar23 * fVar14 + fVar29 * fVar10);
    uVar12 = CONCAT44((float)((ulong)uVar39 >> 0x20) +
                      fVar22 * fVar9 + fVar28 * fVar14 + fVar34 * fVar10,
                      (float)uVar39 + fVar20 * fVar9 + fVar26 * fVar14 + fVar32 * fVar10);
  }
  else {
    if (*(char *)(*(long *)(param_2 + 0x238) + 2) == '\0') {
      *(undefined8 *)(param_2 + 0x360) = *(undefined8 *)(param_2 + 0x2e0);
      *(undefined8 *)(param_2 + 0x368) = *(undefined8 *)(param_2 + 0x2e8);
      *(undefined8 *)(param_2 + 0x370) = *(undefined8 *)(param_2 + 0x2f0);
      *(undefined8 *)(param_2 + 0x378) = *(undefined8 *)(param_2 + 0x2f8);
      *(undefined8 *)(param_2 + 0x340) = *(undefined8 *)(param_2 + 0x2c0);
      *(undefined8 *)(param_2 + 0x348) = *(undefined8 *)(param_2 + 0x2c8);
      *(undefined8 *)(param_2 + 0x350) = *(undefined8 *)(param_2 + 0x2d0);
      *(undefined8 *)(param_2 + 0x358) = *(undefined8 *)(param_2 + 0x2d8);
      *(undefined8 *)(param_2 + 0x398) = *(undefined8 *)(param_2 + 0x318);
      *(undefined8 *)(param_2 + 0x390) = *(undefined8 *)(param_2 + 0x310);
      *(undefined8 *)(param_2 + 0x388) = *(undefined8 *)(param_2 + 0x308);
      *(undefined8 *)(param_2 + 0x380) = *(undefined8 *)(param_2 + 0x300);
      *(undefined8 *)(param_2 + 0x3b8) = *(undefined8 *)(param_2 + 0x338);
      *(undefined8 *)(param_2 + 0x3b0) = *(undefined8 *)(param_2 + 0x330);
      *(undefined8 *)(param_2 + 0x3a8) = *(undefined8 *)(param_2 + 0x328);
      *(undefined8 *)(param_2 + 0x3a0) = *(undefined8 *)(param_2 + 800);
    }
    else {
      FUN_0026946c(param_1,param_2,&local_60,&local_a0);
      *(undefined8 *)(param_2 + 0x368) = uStack_38;
      *(undefined8 *)(param_2 + 0x378) = local_28;
      *(undefined8 *)(param_2 + 0x348) = uStack_58;
      *(undefined8 *)(param_2 + 0x358) = local_48;
      *(undefined8 *)(param_2 + 0x350) = local_50;
      *(char **)(param_2 + 0x340) = local_60;
      *(undefined8 *)(param_2 + 0x370) = local_30;
      *(undefined8 *)(param_2 + 0x360) = local_40;
      *(undefined8 *)(param_2 + 0x390) = local_90;
      *(undefined8 *)(param_2 + 0x380) = local_a0;
      *(undefined8 *)(param_2 + 0x398) = uStack_88;
      *(undefined8 *)(param_2 + 0x388) = uStack_98;
      *(undefined8 *)(param_2 + 0x3a0) = local_80;
      *(undefined8 *)(param_2 + 0x3b0) = local_70;
      *(undefined8 *)(param_2 + 0x3b8) = uStack_68;
      *(undefined8 *)(param_2 + 0x3a8) = uStack_78;
    }
    lVar1 = *(long *)(param_2 + 0x548);
    fVar4 = (float)*(undefined8 *)(param_2 + 0x370) + (float)*(undefined8 *)(param_2 + 0x5c0);
    fVar7 = (float)((ulong)*(undefined8 *)(param_2 + 0x370) >> 0x20) +
            (float)((ulong)*(undefined8 *)(param_2 + 0x5c0) >> 0x20);
    fVar9 = (float)*(undefined8 *)(param_2 + 0x378) + (float)*(undefined8 *)(param_2 + 0x5c8);
    uVar6 = CONCAT44((float)((ulong)*(undefined8 *)(param_2 + 0x378) >> 0x20) +
                     (float)((ulong)*(undefined8 *)(param_2 + 0x5c8) >> 0x20),fVar9);
    *(undefined8 *)(param_2 + 0x378) = uVar6;
    *(ulong *)(param_2 + 0x370) = CONCAT44(fVar7,fVar4);
    *(undefined8 *)(param_2 + 0x3b8) = uVar6;
    *(ulong *)(param_2 + 0x3b0) = CONCAT44(fVar7,fVar4);
    if (*(char *)(*(long *)(lVar1 + 0xa0) + 0x753) == '\x01') goto LAB_00269ffc;
    fVar10 = (float)*(undefined8 *)(param_2 + 0x340);
    fVar20 = (float)*(undefined8 *)(lVar1 + 0x340);
    fVar22 = (float)((ulong)*(undefined8 *)(lVar1 + 0x340) >> 0x20);
    fVar23 = (float)*(undefined8 *)(lVar1 + 0x348);
    fVar25 = (float)((ulong)*(undefined8 *)(lVar1 + 0x348) >> 0x20);
    fVar5 = (float)((ulong)*(undefined8 *)(param_2 + 0x340) >> 0x20);
    fVar26 = (float)*(undefined8 *)(lVar1 + 0x350);
    fVar28 = (float)((ulong)*(undefined8 *)(lVar1 + 0x350) >> 0x20);
    fVar29 = (float)*(undefined8 *)(lVar1 + 0x358);
    fVar31 = (float)((ulong)*(undefined8 *)(lVar1 + 0x358) >> 0x20);
    uVar12 = *(undefined8 *)(lVar1 + 0x378);
    uVar6 = *(undefined8 *)(lVar1 + 0x370);
    fVar8 = (float)*(undefined8 *)(param_2 + 0x348);
    fVar32 = (float)*(undefined8 *)(lVar1 + 0x360);
    fVar40 = (float)((ulong)*(undefined8 *)(lVar1 + 0x360) >> 0x20);
    fVar41 = (float)*(undefined8 *)(lVar1 + 0x368);
    fVar42 = (float)((ulong)*(undefined8 *)(lVar1 + 0x368) >> 0x20);
    fVar11 = (float)*(undefined8 *)(param_2 + 0x350);
    fVar13 = (float)((ulong)*(undefined8 *)(param_2 + 0x350) >> 0x20);
    fVar14 = (float)*(undefined8 *)(param_2 + 0x358);
    fVar16 = (float)*(undefined8 *)(param_2 + 0x360);
    fVar18 = (float)((ulong)*(undefined8 *)(param_2 + 0x360) >> 0x20);
    fVar19 = (float)*(undefined8 *)(param_2 + 0x368);
    *(ulong *)(param_2 + 0x348) =
         CONCAT44(fVar25 * fVar10 + fVar31 * fVar5 + fVar42 * fVar8,
                  fVar23 * fVar10 + fVar29 * fVar5 + fVar41 * fVar8);
    *(ulong *)(param_2 + 0x340) =
         CONCAT44(fVar22 * fVar10 + fVar28 * fVar5 + fVar40 * fVar8,
                  fVar20 * fVar10 + fVar26 * fVar5 + fVar32 * fVar8);
    *(ulong *)(param_2 + 0x358) =
         CONCAT44(fVar25 * fVar11 + fVar31 * fVar13 + fVar42 * fVar14,
                  fVar23 * fVar11 + fVar29 * fVar13 + fVar41 * fVar14);
    *(ulong *)(param_2 + 0x350) =
         CONCAT44(fVar22 * fVar11 + fVar28 * fVar13 + fVar40 * fVar14,
                  fVar20 * fVar11 + fVar26 * fVar13 + fVar32 * fVar14);
    *(ulong *)(param_2 + 0x368) =
         CONCAT44(fVar25 * fVar16 + fVar31 * fVar18 + fVar42 * fVar19,
                  fVar23 * fVar16 + fVar29 * fVar18 + fVar41 * fVar19);
    *(ulong *)(param_2 + 0x360) =
         CONCAT44(fVar22 * fVar16 + fVar28 * fVar18 + fVar40 * fVar19,
                  fVar20 * fVar16 + fVar26 * fVar18 + fVar32 * fVar19);
    *(ulong *)(param_2 + 0x378) =
         CONCAT44((float)((ulong)uVar12 >> 0x20) + fVar25 * fVar4 + fVar31 * fVar7 + fVar42 * fVar9,
                  (float)uVar12 + fVar23 * fVar4 + fVar29 * fVar7 + fVar41 * fVar9);
    *(ulong *)(param_2 + 0x370) =
         CONCAT44((float)((ulong)uVar6 >> 0x20) + fVar22 * fVar4 + fVar28 * fVar7 + fVar40 * fVar9,
                  (float)uVar6 + fVar20 * fVar4 + fVar26 * fVar7 + fVar32 * fVar9);
    fVar10 = (float)*(undefined8 *)(param_2 + 0x380);
    fVar20 = (float)*(undefined8 *)(lVar1 + 0x380);
    fVar22 = (float)((ulong)*(undefined8 *)(lVar1 + 0x380) >> 0x20);
    fVar23 = (float)*(undefined8 *)(lVar1 + 0x388);
    fVar25 = (float)((ulong)*(undefined8 *)(lVar1 + 0x388) >> 0x20);
    fVar5 = (float)((ulong)*(undefined8 *)(param_2 + 0x380) >> 0x20);
    fVar26 = (float)*(undefined8 *)(lVar1 + 0x390);
    fVar28 = (float)((ulong)*(undefined8 *)(lVar1 + 0x390) >> 0x20);
    fVar29 = (float)*(undefined8 *)(lVar1 + 0x398);
    fVar31 = (float)((ulong)*(undefined8 *)(lVar1 + 0x398) >> 0x20);
    uVar12 = *(undefined8 *)(lVar1 + 0x3b8);
    uVar6 = *(undefined8 *)(lVar1 + 0x3b0);
    fVar8 = (float)*(undefined8 *)(param_2 + 0x388);
    fVar32 = (float)*(undefined8 *)(lVar1 + 0x3a0);
    fVar34 = (float)((ulong)*(undefined8 *)(lVar1 + 0x3a0) >> 0x20);
    fVar35 = (float)*(undefined8 *)(lVar1 + 0x3a8);
    fVar37 = (float)((ulong)*(undefined8 *)(lVar1 + 0x3a8) >> 0x20);
    fVar11 = (float)*(undefined8 *)(param_2 + 0x390);
    fVar13 = (float)((ulong)*(undefined8 *)(param_2 + 0x390) >> 0x20);
    fVar14 = (float)*(undefined8 *)(param_2 + 0x398);
    fVar16 = (float)*(undefined8 *)(param_2 + 0x3a0);
    fVar18 = (float)((ulong)*(undefined8 *)(param_2 + 0x3a0) >> 0x20);
    fVar19 = (float)*(undefined8 *)(param_2 + 0x3a8);
    fVar40 = fVar20 * fVar16 + fVar26 * fVar18 + fVar32 * fVar19;
    fVar41 = fVar22 * fVar16 + fVar28 * fVar18 + fVar34 * fVar19;
    fVar42 = fVar23 * fVar16 + fVar29 * fVar18 + fVar35 * fVar19;
    fVar43 = fVar25 * fVar16 + fVar31 * fVar18 + fVar37 * fVar19;
    *(ulong *)(param_2 + 0x388) =
         CONCAT44(fVar25 * fVar10 + fVar31 * fVar5 + fVar37 * fVar8,
                  fVar23 * fVar10 + fVar29 * fVar5 + fVar35 * fVar8);
    *(ulong *)(param_2 + 0x380) =
         CONCAT44(fVar22 * fVar10 + fVar28 * fVar5 + fVar34 * fVar8,
                  fVar20 * fVar10 + fVar26 * fVar5 + fVar32 * fVar8);
    *(ulong *)(param_2 + 0x398) =
         CONCAT44(fVar25 * fVar11 + fVar31 * fVar13 + fVar37 * fVar14,
                  fVar23 * fVar11 + fVar29 * fVar13 + fVar35 * fVar14);
    *(ulong *)(param_2 + 0x390) =
         CONCAT44(fVar22 * fVar11 + fVar28 * fVar13 + fVar34 * fVar14,
                  fVar20 * fVar11 + fVar26 * fVar13 + fVar32 * fVar14);
    uVar6 = CONCAT44((float)((ulong)uVar6 >> 0x20) +
                     fVar22 * fVar4 + fVar28 * fVar7 + fVar34 * fVar9,
                     (float)uVar6 + fVar20 * fVar4 + fVar26 * fVar7 + fVar32 * fVar9);
    uVar12 = CONCAT44((float)((ulong)uVar12 >> 0x20) +
                      fVar25 * fVar4 + fVar31 * fVar7 + fVar37 * fVar9,
                      (float)uVar12 + fVar23 * fVar4 + fVar29 * fVar7 + fVar35 * fVar9);
  }
  *(ulong *)(param_2 + 0x3a8) = CONCAT44(fVar43,fVar42);
  *(ulong *)(param_2 + 0x3a0) = CONCAT44(fVar41,fVar40);
  *(undefined8 *)(param_2 + 0x3b8) = uVar12;
  *(undefined8 *)(param_2 + 0x3b0) = uVar6;
LAB_00269ffc:
  lVar3 = *(long *)(param_2 + 0x3e0);
  lVar1 = *(long *)(param_2 + 1000);
  local_60 = param_2;
  if ((*(long *)(param_2 + 0x3f0) != 0) &&
     (pcVar2 = *(code **)(*(long *)(param_2 + 0x3f0) + 0x18), pcVar2 != (code *)0x0)) {
    (*pcVar2)(&local_60);
  }
  if ((lVar3 != 0) && (pcVar2 = *(code **)(lVar3 + 0x18), pcVar2 != (code *)0x0)) {
    (*pcVar2)(&local_60);
  }
  if ((lVar1 != 0) && (pcVar2 = *(code **)(lVar1 + 0x18), pcVar2 != (code *)0x0)) {
    (*pcVar2)(&local_60);
  }
  return;
}


