/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f64694; name: FUN_02f64694
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02f64694(long param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  long *plVar1;
  float *pfVar2;
  char cVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  undefined *puVar12;
  ulong uVar13;
  undefined4 *puVar14;
  long lVar15;
  undefined8 *puVar16;
  long lVar17;
  int iVar18;
  long *plVar19;
  ulong uVar20;
  float fVar21;
  undefined8 uVar22;
  float fVar24;
  undefined1 auVar23 [16];
  byte bVar25;
  byte bVar30;
  byte bVar31;
  int iVar26;
  byte bVar32;
  byte bVar33;
  byte bVar35;
  byte bVar36;
  int iVar34;
  byte bVar37;
  int iVar38;
  undefined1 auVar27 [12];
  undefined1 auVar28 [12];
  int iVar39;
  undefined1 auVar29 [16];
  float fVar40;
  float fVar41;
  float fVar42;
  int iVar43;
  int iVar47;
  int iVar48;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  int iVar49;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined8 *local_8a8;
  undefined8 local_8a0;
  undefined8 local_898 [32];
  undefined8 local_798;
  float local_790;
  float fStack_78c;
  float fStack_788;
  float fStack_780;
  float fStack_77c;
  float fStack_778;
  undefined8 *local_770;
  undefined8 local_768;
  long local_760;
  undefined8 local_750;
  long local_748;
  undefined8 local_740;
  undefined4 local_738;
  undefined4 local_734;
  undefined4 uStack_730;
  undefined4 local_72c;
  undefined4 uStack_728;
  undefined5 uStack_724;
  undefined8 local_71c;
  undefined8 local_710;
  undefined8 uStack_708;
  undefined8 local_700;
  undefined8 local_6f8;
  long local_6f0;
  char local_6e8;
  undefined4 local_6e0;
  undefined4 uStack_6dc;
  undefined4 local_6d8;
  undefined4 uStack_6d4;
  undefined4 local_6d0;
  undefined4 uStack_6cc;
  undefined4 local_6c8;
  undefined4 local_6c4;
  undefined4 local_6c0;
  undefined4 local_6bc;
  undefined4 local_6b8;
  undefined4 local_6b4;
  undefined4 local_6b0;
  undefined4 local_6ac;
  undefined4 local_6a8;
  undefined4 local_6a4;
  undefined4 local_6a0;
  undefined4 local_69c;
  undefined4 local_698;
  undefined4 local_694;
  undefined4 local_690;
  undefined4 local_68c;
  undefined4 local_688;
  undefined4 local_684;
  undefined4 local_680;
  undefined4 local_67c;
  undefined4 local_678;
  undefined4 local_674;
  undefined4 local_670;
  undefined4 local_66c;
  undefined4 local_668;
  undefined4 local_664;
  undefined4 local_660;
  undefined4 local_65c;
  undefined4 local_658;
  undefined4 local_654;
  undefined4 local_650;
  undefined4 local_64c;
  undefined4 local_648;
  undefined4 local_644;
  undefined4 local_640;
  undefined4 local_63c;
  undefined4 local_638;
  undefined4 local_634;
  undefined4 local_630;
  undefined4 local_62c;
  undefined4 local_628;
  undefined4 local_624;
  undefined4 local_620;
  undefined4 local_61c;
  undefined4 local_618;
  undefined4 local_614;
  undefined4 local_610;
  undefined4 local_60c;
  undefined4 local_608;
  undefined4 local_604;
  undefined4 local_600;
  undefined4 local_5fc;
  undefined4 local_5f8;
  undefined4 local_5f4;
  undefined4 local_5f0;
  undefined4 local_5ec;
  undefined4 local_5e8;
  undefined4 local_5e4;
  undefined4 local_5e0;
  undefined4 local_5dc;
  undefined4 local_5d8;
  undefined4 local_5d4;
  undefined4 local_5d0;
  undefined4 uStack_5cc;
  undefined4 local_5c8;
  undefined4 uStack_5c4;
  undefined4 local_5c0;
  undefined4 uStack_5bc;
  undefined4 local_5b8;
  undefined4 local_5b4;
  undefined4 local_5b0;
  undefined4 local_5ac;
  undefined4 local_5a8;
  undefined4 local_5a4;
  undefined4 local_5a0;
  undefined4 local_59c;
  undefined4 local_598;
  undefined4 local_594;
  undefined4 local_590;
  undefined4 local_58c;
  undefined4 local_588;
  undefined4 local_584;
  undefined4 local_580;
  undefined4 local_57c;
  undefined4 local_578;
  undefined4 local_574;
  undefined4 local_570;
  undefined4 local_56c;
  undefined4 local_568;
  undefined4 local_564;
  undefined4 local_560;
  undefined4 local_55c;
  undefined4 local_558;
  undefined4 local_554;
  undefined4 local_550;
  undefined4 local_54c;
  undefined4 local_548;
  undefined4 local_544;
  undefined4 local_540;
  undefined4 local_53c;
  undefined4 local_538;
  undefined4 local_534;
  undefined4 local_530;
  undefined4 local_52c;
  undefined4 local_528;
  undefined4 local_524;
  undefined4 local_520;
  undefined4 local_51c;
  undefined4 local_518;
  undefined4 local_514;
  undefined4 local_510;
  undefined4 local_50c;
  undefined4 local_508;
  undefined4 local_504;
  undefined4 local_500;
  undefined4 local_4fc;
  undefined4 local_4f8;
  undefined4 local_4f4;
  undefined4 local_4f0;
  undefined4 local_4ec;
  undefined4 local_4e8;
  undefined4 local_4e4;
  undefined4 local_4e0;
  undefined4 local_4dc;
  undefined4 local_4d8;
  undefined4 local_4d4;
  undefined4 local_4d0;
  undefined4 local_4cc;
  undefined4 local_4c8;
  undefined4 local_4c4;
  undefined8 local_4c0;
  long *local_4b8;
  long *local_4b0;
  undefined8 local_4a8;
  undefined8 local_498;
  undefined8 local_490;
  undefined8 uStack_488;
  undefined4 local_480 [256];
  undefined4 *local_80;
  
  auVar23 = NEON_fmov(0x3f800000,4);
  local_738 = 0xffffffff;
  local_740 = 0;
  local_734 = 0;
  uStack_728 = 0;
  uStack_724 = 0;
  local_71c = 0;
  uStack_708 = auVar23._8_8_;
  local_710 = auVar23._0_8_;
  local_6f8 = 0;
  local_700 = 0;
  local_6e8 = *(char *)(param_5 + 0x18) != '\0';
  local_6e0 = *(undefined4 *)(DAT_04434b38 + 0x8a0);
  uStack_6dc = *(undefined4 *)(DAT_04434b38 + 0x8a4);
  local_6d8 = *(undefined4 *)(DAT_04434b38 + 0x8a8);
  uStack_6d4 = *(undefined4 *)(DAT_04434b38 + 0x8ac);
  local_6d0 = *(undefined4 *)(DAT_04434b38 + 0x8b0);
  local_6c8 = *(undefined4 *)(DAT_04434b38 + 0x8b8);
  uStack_6cc = *(undefined4 *)(DAT_04434b38 + 0x8b4);
  local_6c4 = *(undefined4 *)(DAT_04434b38 + 0x8bc);
  local_6c0 = *(undefined4 *)(DAT_04434b38 + 0x8c0);
  local_6b8 = *(undefined4 *)(DAT_04434b38 + 0x8c8);
  local_6bc = *(undefined4 *)(DAT_04434b38 + 0x8c4);
  local_6b4 = *(undefined4 *)(DAT_04434b38 + 0x8cc);
  local_6b0 = *(undefined4 *)(DAT_04434b38 + 0x8d0);
  local_6a8 = *(undefined4 *)(DAT_04434b38 + 0x8d8);
  local_6ac = *(undefined4 *)(DAT_04434b38 + 0x8d4);
  local_6a4 = *(undefined4 *)(DAT_04434b38 + 0x8dc);
  local_6a0 = *(undefined4 *)(DAT_04434b38 + 0x8e0);
  local_698 = *(undefined4 *)(DAT_04434b38 + 0x8e8);
  local_69c = *(undefined4 *)(DAT_04434b38 + 0x8e4);
  local_694 = *(undefined4 *)(DAT_04434b38 + 0x8ec);
  local_690 = *(undefined4 *)(DAT_04434b38 + 0x8f0);
  local_688 = *(undefined4 *)(DAT_04434b38 + 0x8f8);
  local_68c = *(undefined4 *)(DAT_04434b38 + 0x8f4);
  local_684 = *(undefined4 *)(DAT_04434b38 + 0x8fc);
  local_680 = *(undefined4 *)(DAT_04434b38 + 0x900);
  local_678 = *(undefined4 *)(DAT_04434b38 + 0x908);
  local_67c = *(undefined4 *)(DAT_04434b38 + 0x904);
  local_674 = *(undefined4 *)(DAT_04434b38 + 0x90c);
  local_66c = *(undefined4 *)(DAT_04434b38 + 0x914);
  local_668 = *(undefined4 *)(DAT_04434b38 + 0x918);
  local_670 = *(undefined4 *)(DAT_04434b38 + 0x910);
  local_664 = *(undefined4 *)(DAT_04434b38 + 0x91c);
  local_4b0 = (long *)&local_6e0;
  local_660 = *(undefined4 *)(DAT_04434b38 + 0x920);
  local_65c = *(undefined4 *)(DAT_04434b38 + 0x924);
  local_658 = *(undefined4 *)(DAT_04434b38 + 0x928);
  local_654 = *(undefined4 *)(DAT_04434b38 + 0x92c);
  local_650 = *(undefined4 *)(DAT_04434b38 + 0x930);
  local_64c = *(undefined4 *)(DAT_04434b38 + 0x934);
  local_648 = *(undefined4 *)(DAT_04434b38 + 0x938);
  local_644 = *(undefined4 *)(DAT_04434b38 + 0x93c);
  local_640 = *(undefined4 *)(DAT_04434b38 + 0x940);
  local_63c = *(undefined4 *)(DAT_04434b38 + 0x944);
  local_638 = *(undefined4 *)(DAT_04434b38 + 0x948);
  local_634 = *(undefined4 *)(DAT_04434b38 + 0x94c);
  local_630 = *(undefined4 *)(DAT_04434b38 + 0x950);
  local_62c = *(undefined4 *)(DAT_04434b38 + 0x954);
  local_628 = *(undefined4 *)(DAT_04434b38 + 0x958);
  local_624 = *(undefined4 *)(DAT_04434b38 + 0x95c);
  local_620 = *(undefined4 *)(DAT_04434b38 + 0x960);
  local_61c = *(undefined4 *)(DAT_04434b38 + 0x964);
  local_618 = *(undefined4 *)(DAT_04434b38 + 0x968);
  local_614 = *(undefined4 *)(DAT_04434b38 + 0x96c);
  local_610 = *(undefined4 *)(DAT_04434b38 + 0x970);
  local_60c = *(undefined4 *)(DAT_04434b38 + 0x974);
  local_608 = *(undefined4 *)(DAT_04434b38 + 0x978);
  local_604 = *(undefined4 *)(DAT_04434b38 + 0x97c);
  local_600 = *(undefined4 *)(DAT_04434b38 + 0x980);
  local_5fc = *(undefined4 *)(DAT_04434b38 + 0x984);
  local_5f8 = *(undefined4 *)(DAT_04434b38 + 0x988);
  local_5f4 = *(undefined4 *)(DAT_04434b38 + 0x98c);
  local_5f0 = *(undefined4 *)(DAT_04434b38 + 0x990);
  local_5ec = *(undefined4 *)(DAT_04434b38 + 0x994);
  local_5e8 = *(undefined4 *)(DAT_04434b38 + 0x998);
  local_5e4 = *(undefined4 *)(DAT_04434b38 + 0x99c);
  local_5e0 = *(undefined4 *)(DAT_04434b38 + 0x9a0);
  local_5dc = *(undefined4 *)(DAT_04434b38 + 0x9a4);
  local_5d8 = *(undefined4 *)(DAT_04434b38 + 0x9a8);
  local_5d4 = *(undefined4 *)(DAT_04434b38 + 0x9ac);
  local_4b8 = (long *)&local_5d0;
  local_770 = &local_4c0;
  local_4a8 = 0x100000000;
  local_768 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 8) + 0x10) + 0x10);
  local_750 = *(undefined8 *)(param_2 + 0x38);
  local_748 = *(long *)(param_2 + 0x28);
  uStack_730 = (undefined4)param_3;
  local_72c = (undefined4)((ulong)param_3 >> 0x20);
  local_760 = param_2;
  local_6f0 = param_5;
  local_5d0 = local_6e0;
  uStack_5cc = uStack_6dc;
  local_5c8 = local_6d8;
  uStack_5c4 = uStack_6d4;
  local_5c0 = local_6d0;
  uStack_5bc = uStack_6cc;
  local_5b8 = local_6c8;
  local_5b4 = local_6c4;
  local_5b0 = local_6c0;
  local_5ac = local_6bc;
  local_5a8 = local_6b8;
  local_5a4 = local_6b4;
  local_5a0 = local_6b0;
  local_59c = local_6ac;
  local_598 = local_6a8;
  local_594 = local_6a4;
  local_590 = local_6a0;
  local_58c = local_69c;
  local_588 = local_698;
  local_584 = local_694;
  local_580 = local_690;
  local_57c = local_68c;
  local_578 = local_688;
  local_574 = local_684;
  local_570 = local_680;
  local_56c = local_67c;
  local_568 = local_678;
  local_564 = local_674;
  local_560 = local_670;
  local_55c = local_66c;
  local_558 = local_668;
  local_554 = local_664;
  local_550 = local_660;
  local_54c = local_65c;
  local_548 = local_658;
  local_544 = local_654;
  local_540 = local_650;
  local_53c = local_64c;
  local_538 = local_648;
  local_534 = local_644;
  local_530 = local_640;
  local_52c = local_63c;
  local_528 = local_638;
  local_524 = local_634;
  local_520 = local_630;
  local_51c = local_62c;
  local_518 = local_628;
  local_514 = local_624;
  local_510 = local_620;
  local_50c = local_61c;
  local_508 = local_618;
  local_504 = local_614;
  local_500 = local_610;
  local_4fc = local_60c;
  local_4f8 = local_608;
  local_4f4 = local_604;
  local_4f0 = local_600;
  local_4ec = local_5fc;
  local_4e8 = local_5f8;
  local_4e4 = local_5f4;
  local_4e0 = local_5f0;
  local_4dc = local_5ec;
  local_4d8 = local_5e8;
  local_4d4 = local_5e4;
  local_4d0 = local_5e0;
  local_4cc = local_5dc;
  local_4c8 = local_5d8;
  local_4c4 = local_5d4;
  local_4c0 = param_4;
  (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(local_748 + 0x18) * 0x200 + 0x18))
            (local_748,param_3,&local_790);
  puVar12 = PTR_PTR_0434a080;
  uVar22 = NEON_fmin(CONCAT44(*(undefined4 *)(param_2 + 0x30),*(undefined4 *)(param_2 + 0x30)),
                     *(undefined8 *)(param_5 + 0x10),4);
  fVar24 = (float)((ulong)uVar22 >> 0x20);
  local_798 = CONCAT44(fVar24 * fVar24,(float)uVar22 * (float)uVar22);
  local_8a8 = local_898;
  local_8a0 = 0x8000002000000000;
  iVar26 = *(int *)(param_1 + 0x18);
  if (iVar26 < 1) {
    iVar18 = 0;
  }
  else {
    plVar19 = *(long **)(param_2 + 8);
    if (plVar19 == (long *)0x0) {
      iVar18 = 0;
      lVar17 = 0;
      do {
        lVar15 = *(long *)(*(long *)(param_1 + 0x10) + lVar17 * 8);
        if (((*(char *)(lVar15 + 0x20) != '\0') &&
            ((*(byte *)(param_2 + 0x21) & *(byte *)(lVar15 + 0x1ae0)) == 0)) &&
           ((*(byte *)(param_2 + 0x22) & *(byte *)(lVar15 + 0x1ae0)) != 0)) {
          iVar34 = iVar18 + 1;
          if ((int)(local_8a0._4_4_ & 0x3fffffff) <= iVar18) {
            local_8a8 = (undefined8 *)
                        FUN_02f6a1c4(puVar12,iVar34,local_8a8,iVar18,(long)&local_8a0 + 4);
            iVar18 = (int)local_8a0;
          }
          local_8a8[iVar18] = lVar15 + 8;
          local_8a0 = CONCAT44(local_8a0._4_4_,iVar34);
          iVar26 = *(int *)(param_1 + 0x18);
          iVar18 = iVar34;
        }
        lVar17 = lVar17 + 1;
      } while (lVar17 < iVar26);
    }
    else {
      uVar20 = 0;
      do {
        lVar17 = *(long *)(*(long *)(param_1 + 0x10) + uVar20 * 8);
        if (((*(char *)(lVar17 + 0x20) != '\0') &&
            ((*(byte *)(param_2 + 0x21) & *(byte *)(lVar17 + 0x1ae0)) == 0)) &&
           (((*(byte *)(param_2 + 0x22) & *(byte *)(lVar17 + 0x1ae0)) != 0 &&
            (uVar13 = (**(code **)(*plVar19 + 0x28))
                                (plVar19,5,uVar20 & 0xffffffff,*(undefined8 *)(param_2 + 0x18)),
            (uVar13 & 1) != 0)))) {
          iVar26 = (int)local_8a0 + 1;
          if ((int)(local_8a0._4_4_ & 0x3fffffff) <= (int)local_8a0) {
            local_8a8 = (undefined8 *)
                        FUN_02f6a1c4(puVar12,iVar26,local_8a8,local_8a0 & 0xffffffff,
                                     (long)&local_8a0 + 4);
          }
          local_8a8[(int)local_8a0] = lVar17 + 8;
          local_8a0 = CONCAT44(local_8a0._4_4_,iVar26);
        }
        uVar20 = uVar20 + 1;
      } while ((long)uVar20 < (long)*(int *)(param_1 + 0x18));
      iVar18 = (int)local_8a0;
    }
  }
  uVar11 = _UNK_03889708;
  uVar22 = _DAT_03889700;
  if ((*(byte *)(param_5 + 8) & 0x41) == 0) {
    if (iVar18 != 0) {
      lVar17 = (long)iVar18 << 3;
      puVar16 = local_8a8;
      do {
        FUN_02f65080(*puVar16,&local_790,&local_798,&local_770);
        lVar17 = lVar17 + -8;
        puVar16 = puVar16 + 1;
      } while (lVar17 != 0);
    }
  }
  else if (iVar18 != 0) {
    puVar16 = local_8a8;
    fVar24 = local_790;
    fVar6 = fStack_78c;
    fVar7 = fStack_788;
    fVar8 = fStack_780;
    fVar9 = fStack_77c;
    fVar10 = fStack_778;
    do {
      local_790 = fVar24;
      fStack_78c = fVar6;
      fStack_788 = fVar7;
      fStack_780 = fVar8;
      fStack_77c = fVar9;
      fStack_778 = fVar10;
      if (local_6e8 == '\0') {
        auVar23._8_8_ = local_798;
        auVar23._0_8_ = local_798;
        plVar19 = (long *)*puVar16;
        local_480[0] = 1;
        puVar14 = (undefined4 *)((ulong)local_480 | 4);
        do {
          while( true ) {
            local_80 = puVar14 + -1;
            pfVar2 = (float *)((long)plVar19 + (long)(int)puVar14[-1] * 0x80 + *plVar19);
            fVar41 = (float)*(undefined8 *)(pfVar2 + 6);
            fVar42 = (float)((ulong)*(undefined8 *)(pfVar2 + 6) >> 0x20);
            fVar21 = (float)*(undefined8 *)(pfVar2 + 4);
            fVar40 = (float)((ulong)*(undefined8 *)(pfVar2 + 4) >> 0x20);
            auVar44._0_4_ = fVar24 - fVar21;
            auVar44._4_4_ = fVar24 - fVar40;
            auVar44._8_4_ = fVar24 - fVar41;
            auVar44._12_4_ = fVar24 - fVar42;
            auVar45 = NEON_smax(auVar44,ZEXT816(0),4);
            auVar50._0_4_ = fVar6 - pfVar2[0xc];
            auVar50._4_4_ = fVar6 - pfVar2[0xd];
            auVar50._8_4_ = fVar6 - pfVar2[0xe];
            auVar50._12_4_ = fVar6 - pfVar2[0xf];
            auVar51 = NEON_smax(auVar50,ZEXT816(0),4);
            auVar46._4_4_ = fVar8 - pfVar2[1];
            auVar46._0_4_ = fVar8 - *pfVar2;
            auVar46._8_4_ = fVar8 - pfVar2[2];
            auVar46._12_4_ = fVar8 - pfVar2[3];
            auVar46 = NEON_smin(auVar45,auVar46,4);
            auVar45._4_4_ = fVar9 - (float)((ulong)*(undefined8 *)(pfVar2 + 8) >> 0x20);
            auVar45._0_4_ = fVar9 - (float)*(undefined8 *)(pfVar2 + 8);
            auVar45._8_4_ = fVar9 - (float)*(undefined8 *)(pfVar2 + 10);
            auVar45._12_4_ = fVar9 - (float)((ulong)*(undefined8 *)(pfVar2 + 10) >> 0x20);
            auVar45 = NEON_smin(auVar51,auVar45,4);
            auVar52._0_4_ = fVar7 - pfVar2[0x14];
            auVar52._4_4_ = fVar7 - pfVar2[0x15];
            auVar52._8_4_ = fVar7 - pfVar2[0x16];
            auVar52._12_4_ = fVar7 - pfVar2[0x17];
            auVar53 = NEON_smax(auVar52,ZEXT816(0),4);
            auVar51._4_4_ = fVar10 - (float)((ulong)*(undefined8 *)(pfVar2 + 0x10) >> 0x20);
            auVar51._0_4_ = fVar10 - (float)*(undefined8 *)(pfVar2 + 0x10);
            auVar51._8_4_ = fVar10 - (float)*(undefined8 *)(pfVar2 + 0x12);
            auVar51._12_4_ = fVar10 - (float)((ulong)*(undefined8 *)(pfVar2 + 0x12) >> 0x20);
            auVar51 = NEON_smin(auVar53,auVar51,4);
            iVar26 = -(uint)(*pfVar2 <= fVar21);
            iVar34 = -(uint)(pfVar2[1] <= fVar40);
            iVar38 = -(uint)(pfVar2[2] <= fVar41);
            iVar39 = -(uint)(pfVar2[3] <= fVar42);
            fVar21 = auVar23._0_4_;
            iVar43 = -(uint)(auVar46._0_4_ * auVar46._0_4_ + auVar45._0_4_ * auVar45._0_4_ +
                             auVar51._0_4_ * auVar51._0_4_ <= fVar21);
            iVar47 = -(uint)(auVar46._4_4_ * auVar46._4_4_ + auVar45._4_4_ * auVar45._4_4_ +
                             auVar51._4_4_ * auVar51._4_4_ <= auVar23._4_4_);
            iVar48 = -(uint)(auVar46._8_4_ * auVar46._8_4_ + auVar45._8_4_ * auVar45._8_4_ +
                             auVar51._8_4_ * auVar51._8_4_ <= auVar23._8_4_);
            iVar49 = -(uint)(auVar46._12_4_ * auVar46._12_4_ + auVar45._12_4_ * auVar45._12_4_ +
                             auVar51._12_4_ * auVar51._12_4_ <= auVar23._12_4_);
            bVar25 = (byte)iVar43 & (byte)iVar26;
            bVar30 = (byte)((uint)iVar43 >> 8) & (byte)((uint)iVar26 >> 8);
            bVar31 = (byte)((uint)iVar43 >> 0x10) & (byte)((uint)iVar26 >> 0x10);
            bVar32 = (byte)((uint)iVar43 >> 0x18) & (byte)((uint)iVar26 >> 0x18);
            iVar26 = CONCAT13(bVar32,CONCAT12(bVar31,CONCAT11(bVar30,bVar25)));
            bVar33 = (byte)iVar47 & (byte)iVar34;
            bVar35 = (byte)((uint)iVar47 >> 8) & (byte)((uint)iVar34 >> 8);
            bVar36 = (byte)((uint)iVar47 >> 0x10) & (byte)((uint)iVar34 >> 0x10);
            bVar37 = (byte)((uint)iVar47 >> 0x18) & (byte)((uint)iVar34 >> 0x18);
            auVar27._0_8_ =
                 CONCAT17(bVar37,CONCAT16(bVar36,CONCAT15(bVar35,CONCAT14(bVar33,iVar26))));
            auVar27[8] = (byte)iVar48 & (byte)iVar38;
            auVar27[9] = (byte)((uint)iVar48 >> 8) & (byte)((uint)iVar38 >> 8);
            auVar27[10] = (byte)((uint)iVar48 >> 0x10) & (byte)((uint)iVar38 >> 0x10);
            auVar27[0xb] = (byte)((uint)iVar48 >> 0x18) & (byte)((uint)iVar38 >> 0x18);
            auVar53[0xc] = (byte)iVar49 & (byte)iVar39;
            auVar53._0_12_ = auVar27;
            auVar53[0xd] = (byte)((uint)iVar49 >> 8) & (byte)((uint)iVar39 >> 8);
            auVar53[0xe] = (byte)((uint)iVar49 >> 0x10) & (byte)((uint)iVar39 >> 0x10);
            auVar53[0xf] = (byte)((uint)iVar49 >> 0x18) & (byte)((uint)iVar39 >> 0x18);
            if (((iVar26 == 0 && (int)((ulong)auVar27._0_8_ >> 0x20) == 0) && auVar27._8_4_ == 0) &&
                auVar53._12_4_ == 0) break;
            iVar26 = CONCAT13(bVar32 & (byte)((ulong)uVar22 >> 0x18),
                              CONCAT12(bVar31 & (byte)((ulong)uVar22 >> 0x10),
                                       CONCAT11(bVar30 & (byte)((ulong)uVar22 >> 8),
                                                bVar25 & (byte)uVar22)));
            auVar28._0_8_ =
                 CONCAT17(bVar37 & (byte)((ulong)uVar22 >> 0x38),
                          CONCAT16(bVar36 & (byte)((ulong)uVar22 >> 0x30),
                                   CONCAT15(bVar35 & (byte)((ulong)uVar22 >> 0x28),
                                            CONCAT14(bVar33 & (byte)((ulong)uVar22 >> 0x20),iVar26))
                                  ));
            auVar28[8] = auVar27[8] & (byte)uVar11;
            auVar28[9] = auVar27[9] & (byte)((ulong)uVar11 >> 8);
            auVar28[10] = auVar27[10] & (byte)((ulong)uVar11 >> 0x10);
            auVar28[0xb] = auVar27[0xb] & (byte)((ulong)uVar11 >> 0x18);
            auVar29[0xc] = auVar53[0xc] & (byte)((ulong)uVar11 >> 0x20);
            auVar29._0_12_ = auVar28;
            auVar29[0xd] = auVar53[0xd] & (byte)((ulong)uVar11 >> 0x28);
            auVar29[0xe] = auVar53[0xe] & (byte)((ulong)uVar11 >> 0x30);
            auVar29[0xf] = auVar53[0xf] & (byte)((ulong)uVar11 >> 0x38);
            uVar20 = (ulong)(uint)(iVar26 + (int)((ulong)auVar28._0_8_ >> 0x20) +
                                  auVar28._8_4_ + auVar29._12_4_);
            iVar26 = *(int *)(&DAT_03aadfe0 + uVar20 * 4);
            auVar5._12_4_ = (int)((ulong)*(undefined8 *)(pfVar2 + 0x1a) >> 0x20);
            auVar5._0_12_ = *(undefined1 (*) [12])(pfVar2 + 0x18);
            auVar45 = a64_TBL(ZEXT816(0),auVar5,
                              *(undefined1 (*) [16])(&DAT_03aae120 + uVar20 * 0x10));
            uStack_488 = auVar45._8_8_;
            local_490 = auVar45._0_8_;
            if (*(char *)(pfVar2 + 0x1c) == '\0') {
              *(undefined8 *)(puVar14 + -1) = local_490;
              auVar45 = NEON_ext(auVar45,auVar45,8,1);
              *(long *)(puVar14 + 1) = auVar45._0_8_;
              local_80 = local_80 + iVar26;
            }
            else {
              local_498 = CONCAT44(fVar21,fVar21);
              FUN_02f6b854(&local_770,&local_490,(long)iVar26,&local_498);
              if (local_6e8 != '\0') goto LAB_02f64de0;
              auVar23._8_8_ = local_498;
              auVar23._0_8_ = local_498;
            }
            puVar14 = local_80;
            if (local_480 == local_80) goto LAB_02f64de0;
          }
          puVar14 = local_80;
        } while (local_480 != local_80);
      }
LAB_02f64de0:
      puVar16 = puVar16 + 1;
      fVar24 = local_790;
      fVar6 = fStack_78c;
      fVar7 = fStack_788;
      fVar8 = fStack_780;
      fVar9 = fStack_77c;
      fVar10 = fStack_778;
    } while (puVar16 != local_8a8 + iVar18);
  }
  uVar20 = local_8a0;
  uVar13 = (ulong)local_8a0._4_4_;
  local_8a0 = (ulong)local_8a0._4_4_ << 0x20;
  if (((long)uVar20 < 0) || (local_8a8 == (undefined8 *)0x0)) {
    plVar19 = local_4b8;
  }
  else {
    (**(code **)(*(long *)PTR_PTR_0434a080 + 0x18))
              (PTR_PTR_0434a080,local_8a8,(uVar13 & 0x3fffffff) << 3);
    plVar19 = local_4b8;
  }
  if (local_4a8._4_4_ == 0) {
    local_4b8 = plVar19;
    if (plVar19[1] != 0) {
      plVar1 = plVar19 + 2;
      do {
        lVar17 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar17 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar17 + -1 == 0) {
        (**(code **)(*plVar19 + 0x18))();
      }
    }
    plVar19 = local_4b0;
    if (local_4b0[1] != 0) {
      plVar1 = local_4b0 + 2;
      do {
        lVar17 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar17 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar17 + -1 == 0) {
        (**(code **)(*plVar19 + 0x18))();
      }
    }
  }
  return;
}


