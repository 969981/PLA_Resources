/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00ab02ac; name: FUN_00ab02ac
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_00ab02ac(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar5 [16];
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  float fVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  undefined8 uVar21;
  float fVar22;
  undefined8 uVar23;
  float fVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  float fVar27;
  float fVar28;
  float fVar30;
  undefined8 uVar29;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar35;
  undefined8 uVar34;
  float fVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  float fVar40;
  float fVar41;
  undefined8 uVar42;
  float fVar43;
  undefined8 uVar44;
  float fVar45;
  float fVar46;
  undefined8 uVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  undefined1 *local_40;
  undefined *puStack_38;
  undefined8 local_30;
  long *local_28;
  
  puVar1 = (undefined8 *)FUN_02ad80fc();
  local_40 = &DAT_6723799257d05608;
  puStack_38 = &DAT_03a82288;
  local_30 = 0x1f;
  local_28 = (long *)0x0;
  lVar2 = FUN_02b11e64(*puVar1,&local_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  if (lVar2 == 0) {
    uVar11 = _DAT_0388a130;
    uVar13 = _UNK_0388a138;
    uVar16 = _DAT_0388a130;
    uVar18 = _UNK_0388a138;
    uVar21 = _DAT_03888d10;
    uVar23 = _UNK_03888d18;
    uVar25 = DAT_0388a140;
    uVar26 = DAT_0388a148;
    uVar29 = _DAT_03889a80;
    uVar34 = _UNK_03889a88;
    uVar37 = _DAT_03888d10;
    uVar38 = _UNK_03888d18;
    uVar39 = DAT_0388a140;
    uVar42 = DAT_0388a148;
    uVar44 = _DAT_03889a80;
    uVar47 = _UNK_03889a88;
  }
  else {
    uVar11 = *(undefined8 *)(lVar2 + 0x80);
    uVar13 = *(undefined8 *)(lVar2 + 0x88);
    uVar16 = *(undefined8 *)(lVar2 + 0xc0);
    uVar18 = *(undefined8 *)(lVar2 + 200);
    uVar21 = *(undefined8 *)(lVar2 + 0xb0);
    uVar23 = *(undefined8 *)(lVar2 + 0xb8);
    uVar25 = *(undefined8 *)(lVar2 + 0xa0);
    uVar26 = *(undefined8 *)(lVar2 + 0xa8);
    uVar29 = *(undefined8 *)(lVar2 + 0x90);
    uVar34 = *(undefined8 *)(lVar2 + 0x98);
    uVar37 = *(undefined8 *)(lVar2 + 0x70);
    uVar38 = *(undefined8 *)(lVar2 + 0x78);
    uVar39 = *(undefined8 *)(lVar2 + 0x60);
    uVar42 = *(undefined8 *)(lVar2 + 0x68);
    uVar44 = *(undefined8 *)(lVar2 + 0x50);
    uVar47 = *(undefined8 *)(lVar2 + 0x58);
  }
  fVar3 = (float)uVar44;
  fVar27 = (float)uVar29;
  fVar30 = (float)((ulong)uVar29 >> 0x20);
  fVar32 = (float)uVar34;
  fVar35 = (float)((ulong)uVar34 >> 0x20);
  fVar7 = (float)uVar37;
  fVar4 = (float)((ulong)uVar44 >> 0x20);
  fVar28 = (float)uVar25;
  fVar31 = (float)((ulong)uVar25 >> 0x20);
  fVar33 = (float)uVar26;
  fVar36 = (float)((ulong)uVar26 >> 0x20);
  fVar6 = (float)uVar47;
  fVar14 = (float)uVar21;
  fVar15 = (float)((ulong)uVar21 >> 0x20);
  fVar17 = (float)uVar23;
  fVar19 = (float)((ulong)uVar23 >> 0x20);
  fVar20 = (float)((ulong)uVar47 >> 0x20);
  fVar8 = (float)uVar16;
  fVar10 = (float)((ulong)uVar16 >> 0x20);
  fVar9 = (float)uVar18;
  fVar12 = (float)((ulong)uVar18 >> 0x20);
  fVar49 = fVar27 * fVar3 + fVar28 * fVar4 + fVar14 * fVar6 + fVar8 * fVar20;
  fVar50 = fVar30 * fVar3 + fVar31 * fVar4 + fVar15 * fVar6 + fVar10 * fVar20;
  fVar51 = fVar32 * fVar3 + fVar33 * fVar4 + fVar17 * fVar6 + fVar9 * fVar20;
  fVar52 = fVar35 * fVar3 + fVar36 * fVar4 + fVar19 * fVar6 + fVar12 * fVar20;
  fVar48 = (float)uVar39;
  fVar3 = (float)uVar11;
  fVar40 = (float)((ulong)uVar39 >> 0x20);
  fVar41 = (float)uVar42;
  fVar20 = (float)((ulong)uVar37 >> 0x20);
  fVar4 = (float)((ulong)uVar11 >> 0x20);
  fVar22 = (float)uVar38;
  fVar6 = (float)uVar13;
  fVar24 = (float)((ulong)uVar38 >> 0x20);
  fVar53 = fVar27 * fVar7 + fVar28 * fVar20 + fVar14 * fVar22 + fVar8 * fVar24;
  fVar54 = fVar30 * fVar7 + fVar31 * fVar20 + fVar15 * fVar22 + fVar10 * fVar24;
  fVar55 = fVar32 * fVar7 + fVar33 * fVar20 + fVar17 * fVar22 + fVar9 * fVar24;
  fVar56 = fVar35 * fVar7 + fVar36 * fVar20 + fVar19 * fVar22 + fVar12 * fVar24;
  fVar7 = (float)((ulong)uVar42 >> 0x20);
  fVar43 = fVar27 * fVar48 + fVar28 * fVar40 + fVar14 * fVar41 + fVar8 * fVar7;
  fVar45 = fVar30 * fVar48 + fVar31 * fVar40 + fVar15 * fVar41 + fVar10 * fVar7;
  fVar46 = fVar32 * fVar48 + fVar33 * fVar40 + fVar17 * fVar41 + fVar9 * fVar7;
  fVar48 = fVar35 * fVar48 + fVar36 * fVar40 + fVar19 * fVar41 + fVar12 * fVar7;
  fVar20 = (float)_DAT_03889830;
  fVar22 = (float)((ulong)_DAT_03889830 >> 0x20);
  fVar24 = (float)((ulong)_UNK_03889838 >> 0x20);
  fVar7 = (float)((ulong)uVar13 >> 0x20);
  fVar28 = fVar27 * fVar3 + fVar28 * fVar4 + fVar14 * fVar6 + fVar8 * fVar7;
  fVar31 = fVar30 * fVar3 + fVar31 * fVar4 + fVar15 * fVar6 + fVar10 * fVar7;
  fVar33 = fVar32 * fVar3 + fVar33 * fVar4 + fVar17 * fVar6 + fVar9 * fVar7;
  fVar36 = fVar35 * fVar3 + fVar36 * fVar4 + fVar19 * fVar6 + fVar12 * fVar7;
  fVar9 = (float)_DAT_03889c90;
  fVar12 = (float)((ulong)_DAT_03889c90 >> 0x20);
  fVar14 = (float)((ulong)_UNK_03889c98 >> 0x20);
  fVar3 = (float)_DAT_03888d10;
  fVar6 = (float)((ulong)_DAT_03888d10 >> 0x20);
  fVar10 = (float)((ulong)_UNK_03888d18 >> 0x20);
  fVar15 = (float)_DAT_0388a040;
  fVar17 = (float)((ulong)_DAT_0388a040 >> 0x20);
  fVar19 = (float)((ulong)_UNK_0388a048 >> 0x20);
  fVar4 = (float)*param_1;
  fVar7 = (float)((ulong)*param_1 >> 0x20);
  fVar8 = (float)param_1[1];
  fVar10 = 1.0 / (fVar24 * fVar28 + fVar14 * fVar31 + fVar10 * fVar33 + fVar19 * fVar36 +
                 (fVar24 * fVar49 + fVar14 * fVar50 + fVar10 * fVar51 + fVar19 * fVar52) * fVar4 +
                 (fVar24 * fVar43 + fVar14 * fVar45 + fVar10 * fVar46 + fVar19 * fVar48) * fVar7 +
                 (fVar24 * fVar53 + fVar14 * fVar54 + fVar10 * fVar55 + fVar19 * fVar56) * fVar8);
  auVar5._4_4_ = ((fVar22 * fVar28 + fVar12 * fVar31 + fVar6 * fVar33 + fVar17 * fVar36 +
                  (fVar22 * fVar49 + fVar12 * fVar50 + fVar6 * fVar51 + fVar17 * fVar52) * fVar4 +
                  (fVar22 * fVar43 + fVar12 * fVar45 + fVar6 * fVar46 + fVar17 * fVar48) * fVar7 +
                  (fVar22 * fVar53 + fVar12 * fVar54 + fVar6 * fVar55 + fVar17 * fVar56) * fVar8) *
                 fVar10) / 1080.0;
  auVar5._0_4_ = ((fVar20 * fVar28 + fVar9 * fVar31 + fVar3 * fVar33 + fVar15 * fVar36 +
                  (fVar20 * fVar49 + fVar9 * fVar50 + fVar3 * fVar51 + fVar15 * fVar52) * fVar4 +
                  (fVar20 * fVar43 + fVar9 * fVar45 + fVar3 * fVar46 + fVar15 * fVar48) * fVar7 +
                  (fVar20 * fVar53 + fVar9 * fVar54 + fVar3 * fVar55 + fVar15 * fVar56) * fVar8) *
                 fVar10) / 1920.0;
  auVar5._8_8_ = 0;
  return auVar5;
}


