/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0278f1c8; name: FUN_0278f1c8
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0278f1c8(long param_1)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  char cVar4;
  bool bVar5;
  size_t sVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 uVar11;
  int iVar12;
  undefined8 uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  char *pcVar17;
  long *plVar18;
  undefined4 *puVar19;
  char *pcVar20;
  char *pcVar21;
  undefined8 *puVar22;
  long *local_1880;
  long *local_1878;
  undefined1 auStack_1870 [120];
  undefined8 local_17f8;
  undefined8 uStack_17f0;
  char local_17e8 [4];
  byte local_17e4;
  undefined8 local_17e0;
  undefined8 uStack_17d8;
  undefined8 local_17d0;
  undefined8 uStack_17c8;
  undefined8 local_17c0;
  undefined8 uStack_17b8;
  undefined8 local_17b0;
  undefined8 uStack_17a8;
  undefined8 local_17a0;
  undefined8 uStack_1798;
  undefined8 local_1790;
  undefined8 uStack_1788;
  undefined8 local_1780;
  undefined8 uStack_1778;
  undefined4 local_1770;
  uint uStack_176c;
  undefined8 local_1768;
  undefined8 uStack_1760;
  undefined8 local_1758;
  undefined8 uStack_1750;
  undefined8 local_1748;
  undefined8 uStack_1740;
  undefined8 local_1738;
  undefined8 uStack_1730;
  undefined8 local_1728;
  undefined8 uStack_1720;
  undefined8 local_1718;
  undefined8 uStack_1710;
  undefined8 local_1708;
  undefined8 local_1700;
  undefined8 uStack_16f8;
  char local_16f0;
  undefined8 local_16ec;
  undefined8 uStack_16e4;
  undefined8 local_16dc;
  undefined8 uStack_16d4;
  undefined8 local_16cc;
  undefined8 uStack_16c4;
  undefined8 local_16bc;
  undefined8 uStack_16b4;
  undefined8 local_16ac;
  undefined8 uStack_16a4;
  undefined8 local_169c;
  undefined8 local_1694;
  undefined8 uStack_168c;
  undefined8 local_1684;
  undefined8 uStack_167c;
  char local_1674;
  undefined8 local_1670;
  undefined8 uStack_1668;
  undefined8 local_1660;
  undefined8 uStack_1658;
  undefined8 local_1650;
  undefined8 uStack_1648;
  undefined8 local_1640;
  undefined8 uStack_1638;
  undefined8 local_1630;
  undefined8 uStack_1628;
  undefined8 local_1620;
  undefined8 uStack_1618;
  undefined8 local_1610;
  undefined8 local_1608;
  undefined8 uStack_1600;
  char local_15f8;
  undefined8 local_15f4;
  undefined8 local_15ec;
  undefined8 local_15e4;
  undefined8 uStack_15dc;
  undefined8 local_15d4;
  undefined8 uStack_15cc;
  undefined8 local_15c4;
  undefined8 uStack_15bc;
  undefined8 local_15b4;
  undefined8 uStack_15ac;
  undefined8 local_15a4;
  undefined8 uStack_159c;
  undefined8 local_1594;
  undefined8 uStack_158c;
  undefined8 local_1584;
  char local_157c;
  undefined8 local_1578;
  undefined8 local_1570;
  undefined8 local_1568;
  undefined8 uStack_1560;
  undefined8 local_1558;
  undefined8 uStack_1550;
  undefined8 local_1548;
  undefined8 uStack_1540;
  undefined8 local_1538;
  undefined8 uStack_1530;
  undefined8 local_1528;
  undefined8 uStack_1520;
  undefined8 local_1518;
  undefined8 local_1510;
  undefined8 uStack_1508;
  char local_1500;
  undefined8 local_14fc;
  undefined8 local_14f4;
  undefined8 local_14ec;
  undefined8 uStack_14e4;
  undefined8 local_14dc;
  undefined8 uStack_14d4;
  undefined8 local_14cc;
  undefined8 uStack_14c4;
  undefined8 local_14bc;
  undefined8 local_14b4;
  undefined8 local_14ac;
  undefined8 local_14a4;
  undefined8 uStack_149c;
  undefined8 local_1494;
  undefined8 uStack_148c;
  char local_1484;
  undefined8 local_1480;
  undefined8 local_1478;
  undefined8 local_1470;
  undefined8 uStack_1468;
  undefined8 local_1460;
  undefined8 uStack_1458;
  undefined8 local_1450;
  undefined8 uStack_1448;
  undefined8 local_1440;
  undefined8 local_1438;
  undefined8 local_1430;
  undefined8 uStack_1428;
  undefined8 local_1420;
  undefined8 local_1418;
  undefined8 uStack_1410;
  char acStack_1408 [4];
  undefined4 local_1404;
  char *local_1400;
  char *local_13f8;
  char local_13c8 [4];
  char local_13c4 [4];
  char acStack_13c0 [4];
  char acStack_13bc [4];
  char acStack_13b8 [4];
  char acStack_13b4 [4];
  char local_13b0 [4];
  char acStack_13ac [4];
  char acStack_13a8 [4];
  char acStack_13a4 [4];
  char local_13a0 [4];
  char acStack_139c [4];
  char acStack_1398 [4];
  char acStack_1394 [4];
  char local_1390 [4];
  char acStack_138c [4];
  char acStack_1388 [4];
  char acStack_1384 [4];
  char local_1380 [4];
  char acStack_137c [4];
  char acStack_1378 [4];
  char acStack_1374 [4];
  char local_1370 [4];
  char acStack_136c [4];
  char acStack_1368 [4];
  char acStack_1364 [4];
  char local_1360 [4];
  char acStack_135c [4];
  char acStack_1358 [4];
  char local_1354 [4];
  char acStack_1350 [4];
  char local_134c [4];
  undefined8 local_1348 [15];
  char local_12d0 [4];
  undefined8 local_12cc [15];
  char local_1254 [4];
  undefined8 local_1250 [15];
  char local_11d8;
  char local_115c;
  char local_10e0;
  char local_1064;
  char local_fe8;
  char local_f6c;
  char local_ef0;
  char local_e74;
  char local_df8;
  char local_d7c;
  char local_d00;
  char local_c84;
  char local_c08;
  char local_b8c;
  char local_b10;
  char local_a94;
  char local_a18 [4];
  undefined8 local_a14 [15];
  char local_99c [4];
  undefined8 local_998 [15];
  char local_920 [4];
  undefined8 local_91c [15];
  char local_8a4 [4];
  undefined8 local_8a0 [15];
  char local_828;
  char local_7ac;
  char local_730;
  char local_6b4;
  char local_638;
  char local_5bc;
  char local_540;
  char local_4c4;
  char local_448;
  char local_3cc;
  char local_350;
  char local_2d4;
  char local_258;
  char local_1dc;
  char local_160;
  char local_e4;
  
  if (((*PTR_DAT_04379558 & 1) == 0) &&
     (iVar12 = __cxa_guard_acquire(PTR_DAT_04379558), iVar12 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar16 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar16;
  plVar18 = *(long **)(lVar16 + 0x2a8);
  if (plVar18 == (long *)0x0) {
    return;
  }
  lVar16 = plVar18[0xb];
  if (*(undefined8 **)(lVar16 + 0x18) == (undefined8 *)0x0) {
LAB_0279024c:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  if (*(long *)(lVar16 + 0x10) == 0) {
    uVar13 = (**(code **)**(undefined8 **)(lVar16 + 0x18))();
    *(undefined8 *)(lVar16 + 0x10) = uVar13;
  }
  piVar1 = (int *)(lVar16 + 0xc);
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar5) {
      *piVar1 = *piVar1 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  FUN_0110c3e4(local_a18,plVar18 + 0x217f);
  FUN_0110c3e4(local_13c8,plVar18 + 0x22b5);
  puVar22 = (undefined8 *)((ulong)local_17e8 | 4);
  pcVar21 = "\x01\x02\x03\x04\x05";
LAB_0278f32c:
  cVar4 = *pcVar21;
  uVar14 = FUN_0278ed7c(cVar4);
  if ((uVar14 & 1) != 0) {
    uVar14 = (ulong)(byte)(cVar4 - 1);
    FUN_02793abc(&local_1400,param_1 + uVar14 * 0x38 + 0x100);
    uVar8 = uStack_176c;
    local_1404 = 0;
    uVar11 = local_a18[uVar14 * 0x1f0] != '\0';
    if ((bool)uVar11) {
      uVar13 = local_a14[uVar14 * 0x3e + 1];
      *puVar22 = local_a14[uVar14 * 0x3e];
      puVar22[1] = uVar13;
      uVar13 = local_a14[uVar14 * 0x3e + 5];
      puVar22[4] = local_a14[uVar14 * 0x3e + 4];
      puVar22[5] = uVar13;
      uVar13 = local_a14[uVar14 * 0x3e + 3];
      puVar22[2] = local_a14[uVar14 * 0x3e + 2];
      puVar22[3] = uVar13;
      uVar13 = local_a14[uVar14 * 0x3e + 9];
      puVar22[8] = local_a14[uVar14 * 0x3e + 8];
      puVar22[9] = uVar13;
      uVar13 = local_a14[uVar14 * 0x3e + 7];
      puVar22[6] = local_a14[uVar14 * 0x3e + 6];
      puVar22[7] = uVar13;
      puVar22[0xe] = local_a14[uVar14 * 0x3e + 0xe];
      uVar13 = local_a14[uVar14 * 0x3e + 0xd];
      puVar22[0xc] = local_a14[uVar14 * 0x3e + 0xc];
      puVar22[0xd] = uVar13;
      uVar13 = local_a14[uVar14 * 0x3e + 0xb];
      puVar22[10] = local_a14[uVar14 * 0x3e + 10];
      puVar22[0xb] = uVar13;
    }
    uStack_176c._0_1_ = 0;
    uStack_176c = uVar8 & 0xffffff00;
    if (local_99c[uVar14 * 0x1f0] != '\0') {
      local_1758 = local_998[uVar14 * 0x3e + 2];
      uStack_1750 = local_998[uVar14 * 0x3e + 3];
      local_1768 = local_998[uVar14 * 0x3e];
      uStack_1760 = local_998[uVar14 * 0x3e + 1];
      local_1738 = local_998[uVar14 * 0x3e + 6];
      uStack_1730 = local_998[uVar14 * 0x3e + 7];
      local_1748 = local_998[uVar14 * 0x3e + 4];
      uStack_1740 = local_998[uVar14 * 0x3e + 5];
      local_1718 = local_998[uVar14 * 0x3e + 10];
      uStack_1710 = local_998[uVar14 * 0x3e + 0xb];
      local_1728 = local_998[uVar14 * 0x3e + 8];
      uStack_1720 = local_998[uVar14 * 0x3e + 9];
      local_1700 = local_998[uVar14 * 0x3e + 0xd];
      uStack_16f8 = local_998[uVar14 * 0x3e + 0xe];
      local_1708 = local_998[uVar14 * 0x3e + 0xc];
      uStack_176c._0_1_ = 1;
      uStack_176c = CONCAT31((int3)(uVar8 >> 8),1);
    }
    uStack_176c = CONCAT31(uStack_176c._1_3_,local_99c[uVar14 * 0x1f0] != '\0');
    local_16f0 = 0;
    if (local_920[uVar14 * 0x1f0] != '\0') {
      local_16ec = local_91c[uVar14 * 0x3e];
      uStack_16e4 = local_91c[uVar14 * 0x3e + 1];
      local_16cc = local_91c[uVar14 * 0x3e + 4];
      uStack_16c4 = local_91c[uVar14 * 0x3e + 5];
      local_16dc = local_91c[uVar14 * 0x3e + 2];
      uStack_16d4 = local_91c[uVar14 * 0x3e + 3];
      local_16ac = local_91c[uVar14 * 0x3e + 8];
      uStack_16a4 = local_91c[uVar14 * 0x3e + 9];
      local_16bc = local_91c[uVar14 * 0x3e + 6];
      uStack_16b4 = local_91c[uVar14 * 0x3e + 7];
      local_1684 = local_91c[uVar14 * 0x3e + 0xd];
      uStack_167c = local_91c[uVar14 * 0x3e + 0xe];
      local_169c = local_91c[uVar14 * 0x3e + 10];
      local_1694 = local_91c[uVar14 * 0x3e + 0xb];
      uStack_168c = local_91c[uVar14 * 0x3e + 0xc];
      local_16f0 = 1;
    }
    local_1674 = 0;
    if (local_8a4[uVar14 * 0x1f0] != '\0') {
      local_1660 = local_8a0[uVar14 * 0x3e + 2];
      uStack_1658 = local_8a0[uVar14 * 0x3e + 3];
      local_1670 = local_8a0[uVar14 * 0x3e];
      uStack_1668 = local_8a0[uVar14 * 0x3e + 1];
      local_1640 = local_8a0[uVar14 * 0x3e + 6];
      uStack_1638 = local_8a0[uVar14 * 0x3e + 7];
      local_1650 = local_8a0[uVar14 * 0x3e + 4];
      uStack_1648 = local_8a0[uVar14 * 0x3e + 5];
      local_1620 = local_8a0[uVar14 * 0x3e + 10];
      uStack_1618 = local_8a0[uVar14 * 0x3e + 0xb];
      local_1630 = local_8a0[uVar14 * 0x3e + 8];
      uStack_1628 = local_8a0[uVar14 * 0x3e + 9];
      local_1608 = local_8a0[uVar14 * 0x3e + 0xd];
      uStack_1600 = local_8a0[uVar14 * 0x3e + 0xe];
      local_1610 = local_8a0[uVar14 * 0x3e + 0xc];
      local_1674 = 1;
    }
    local_15f8 = 0;
    bVar5 = local_13c8[uVar14 * 0x1f0] != '\0';
    if (bVar5) {
      lVar16 = uVar14 * 0x1f0;
      local_15f4 = *(undefined8 *)(local_13c4 + lVar16);
      local_15ec = *(undefined8 *)(acStack_13bc + lVar16);
      local_15d4 = *(undefined8 *)(acStack_13a4 + lVar16);
      uStack_15cc = *(undefined8 *)(acStack_139c + lVar16);
      local_15e4 = *(undefined8 *)(acStack_13b4 + lVar16);
      uStack_15dc = *(undefined8 *)(acStack_13ac + lVar16);
      local_15b4 = *(undefined8 *)(acStack_1384 + lVar16);
      uStack_15ac = *(undefined8 *)(acStack_137c + lVar16);
      local_15c4 = *(undefined8 *)(acStack_1394 + lVar16);
      uStack_15bc = *(undefined8 *)(acStack_138c + lVar16);
      local_1584 = *(undefined8 *)(local_1354 + lVar16);
      local_1594 = *(undefined8 *)(acStack_1364 + lVar16);
      uStack_158c = *(undefined8 *)(acStack_135c + lVar16);
      local_15a4 = *(undefined8 *)(acStack_1374 + lVar16);
      uStack_159c = *(undefined8 *)(acStack_136c + lVar16);
      local_15f8 = 1;
    }
    local_157c = 0;
    if (local_134c[uVar14 * 0x1f0] != '\0') {
      local_1568 = local_1348[uVar14 * 0x3e + 2];
      uStack_1560 = local_1348[uVar14 * 0x3e + 3];
      local_1578 = local_1348[uVar14 * 0x3e];
      local_1570 = local_1348[uVar14 * 0x3e + 1];
      local_1548 = local_1348[uVar14 * 0x3e + 6];
      uStack_1540 = local_1348[uVar14 * 0x3e + 7];
      local_1558 = local_1348[uVar14 * 0x3e + 4];
      uStack_1550 = local_1348[uVar14 * 0x3e + 5];
      local_1528 = local_1348[uVar14 * 0x3e + 10];
      uStack_1520 = local_1348[uVar14 * 0x3e + 0xb];
      local_1538 = local_1348[uVar14 * 0x3e + 8];
      uStack_1530 = local_1348[uVar14 * 0x3e + 9];
      local_1510 = local_1348[uVar14 * 0x3e + 0xd];
      uStack_1508 = local_1348[uVar14 * 0x3e + 0xe];
      local_1518 = local_1348[uVar14 * 0x3e + 0xc];
      local_157c = 1;
    }
    local_1500 = 0;
    if (local_12d0[uVar14 * 0x1f0] != '\0') {
      local_14fc = local_12cc[uVar14 * 0x3e];
      local_14f4 = local_12cc[uVar14 * 0x3e + 1];
      local_14dc = local_12cc[uVar14 * 0x3e + 4];
      uStack_14d4 = local_12cc[uVar14 * 0x3e + 5];
      local_14ec = local_12cc[uVar14 * 0x3e + 2];
      uStack_14e4 = local_12cc[uVar14 * 0x3e + 3];
      local_14bc = local_12cc[uVar14 * 0x3e + 8];
      local_14b4 = local_12cc[uVar14 * 0x3e + 9];
      local_14cc = local_12cc[uVar14 * 0x3e + 6];
      uStack_14c4 = local_12cc[uVar14 * 0x3e + 7];
      local_1494 = local_12cc[uVar14 * 0x3e + 0xd];
      uStack_148c = local_12cc[uVar14 * 0x3e + 0xe];
      local_14ac = local_12cc[uVar14 * 0x3e + 10];
      local_14a4 = local_12cc[uVar14 * 0x3e + 0xb];
      uStack_149c = local_12cc[uVar14 * 0x3e + 0xc];
      local_1500 = 1;
    }
    local_1484 = 0;
    if (local_1254[uVar14 * 0x1f0] != '\0') {
      local_1470 = local_1250[uVar14 * 0x3e + 2];
      uStack_1468 = local_1250[uVar14 * 0x3e + 3];
      local_1480 = local_1250[uVar14 * 0x3e];
      local_1478 = local_1250[uVar14 * 0x3e + 1];
      local_1450 = local_1250[uVar14 * 0x3e + 6];
      uStack_1448 = local_1250[uVar14 * 0x3e + 7];
      local_1460 = local_1250[uVar14 * 0x3e + 4];
      uStack_1458 = local_1250[uVar14 * 0x3e + 5];
      local_1430 = local_1250[uVar14 * 0x3e + 10];
      uStack_1428 = local_1250[uVar14 * 0x3e + 0xb];
      local_1440 = local_1250[uVar14 * 0x3e + 8];
      local_1438 = local_1250[uVar14 * 0x3e + 9];
      local_1418 = local_1250[uVar14 * 0x3e + 0xd];
      uStack_1410 = local_1250[uVar14 * 0x3e + 0xe];
      local_1420 = local_1250[uVar14 * 0x3e + 0xc];
      local_1484 = 1;
    }
    pcVar17 = local_17e8;
    local_17e8[0] = uVar11;
    local_16f0 = local_920[uVar14 * 0x1f0] != '\0';
    local_1674 = local_8a4[uVar14 * 0x1f0] != '\0';
    local_15f8 = bVar5;
    local_157c = local_134c[uVar14 * 0x1f0] != '\0';
    local_1500 = local_12d0[uVar14 * 0x1f0] != '\0';
    local_1484 = local_1254[uVar14 * 0x1f0] != '\0';
    do {
      if (((bool)uVar11) && (*(uint *)((long)pcVar17 + 0xc) < 2)) {
        pcVar20 = local_1400;
        if (local_1400 != local_13f8) {
          do {
            if ((((*pcVar20 == *(char *)((long)pcVar17 + 0x44)) &&
                 (pcVar20[1] == *(char *)((long)pcVar17 + 0x45))) &&
                (ABS(*(float *)(pcVar20 + 4) - *(float *)((long)pcVar17 + 0x48)) < 1.1920929e-07))
               && ((ABS(*(float *)(pcVar20 + 8) - *(float *)((long)pcVar17 + 0x4c)) < 1.1920929e-07
                   && (ABS(*(float *)(pcVar20 + 0xc) - *(float *)((long)pcVar17 + 0x50)) <
                       1.1920929e-07)))) goto LAB_0278f4d4;
            pcVar20 = pcVar20 + 0x10;
          } while (local_13f8 != pcVar20);
          pcVar20 = local_13f8;
        }
LAB_0278f4d4:
        if (local_13f8 != pcVar20) {
          sVar6 = (long)local_13f8 - (long)(pcVar20 + 0x10);
          if (sVar6 != 0) {
            memmove(pcVar20,pcVar20 + 0x10,sVar6);
          }
          local_13f8 = pcVar20 + ((long)sVar6 >> 4) * 0x10;
        }
        cVar3 = *(char *)((long)pcVar17 + 0x7c);
        uVar7 = local_1404;
      }
      else {
        uVar8 = (uint)local_1404 >> 8;
        local_1404 = CONCAT31((int3)uVar8,(char)local_1404 + '\x01');
        cVar3 = *(char *)((long)pcVar17 + 0x7c);
        uVar7 = local_1404;
      }
      if ((cVar3 == '\0') || (1 < *(uint *)((long)pcVar17 + 0x88))) {
        local_1404._1_1_ = (char)((uint)uVar7 >> 8);
        local_1404._2_2_ = (undefined2)((uint)uVar7 >> 0x10);
        local_1404._0_1_ = (char)uVar7;
        local_1404._0_2_ = CONCAT11(local_1404._1_1_ + '\x01',(char)local_1404);
        cVar3 = *(char *)((long)pcVar17 + 0xf8);
        uVar7 = local_1404;
      }
      else {
        pcVar20 = local_1400;
        if (local_1400 != local_13f8) {
          do {
            if ((((*pcVar20 == *(char *)((long)pcVar17 + 0xc0)) &&
                 (pcVar20[1] == *(char *)((long)pcVar17 + 0xc1))) &&
                (ABS(*(float *)(pcVar20 + 4) - *(float *)((long)pcVar17 + 0xc4)) < 1.1920929e-07))
               && ((ABS(*(float *)(pcVar20 + 8) - *(float *)((long)pcVar17 + 200)) < 1.1920929e-07
                   && (ABS(*(float *)(pcVar20 + 0xc) - *(float *)((long)pcVar17 + 0xcc)) <
                       1.1920929e-07)))) goto LAB_0278f5b4;
            pcVar20 = pcVar20 + 0x10;
          } while (local_13f8 != pcVar20);
          pcVar20 = local_13f8;
        }
LAB_0278f5b4:
        local_1404 = uVar7;
        if (local_13f8 != pcVar20) {
          sVar6 = (long)local_13f8 - (long)(pcVar20 + 0x10);
          if (sVar6 != 0) {
            memmove(pcVar20,pcVar20 + 0x10,sVar6);
          }
          local_13f8 = pcVar20 + ((long)sVar6 >> 4) * 0x10;
        }
        cVar3 = *(char *)((long)pcVar17 + 0xf8);
        uVar7 = local_1404;
      }
      if ((cVar3 == '\0') || (1 < *(uint *)((long)pcVar17 + 0x104))) {
        local_1404._2_1_ = (char)((uint)uVar7 >> 0x10);
        local_1404._3_1_ = (char)((uint)uVar7 >> 0x18);
        local_1404._0_2_ = (undefined2)uVar7;
        local_1404._0_3_ = CONCAT12(local_1404._2_1_ + '\x01',(undefined2)local_1404);
        cVar3 = *(char *)((long)pcVar17 + 0x174);
        uVar7 = local_1404;
      }
      else {
        pcVar20 = local_1400;
        if (local_1400 != local_13f8) {
          do {
            if ((((*pcVar20 == *(char *)((long)pcVar17 + 0x13c)) &&
                 (pcVar20[1] == *(char *)((long)pcVar17 + 0x13d))) &&
                (ABS(*(float *)(pcVar20 + 4) - *(float *)((long)pcVar17 + 0x140)) < 1.1920929e-07))
               && ((ABS(*(float *)(pcVar20 + 8) - *(float *)((long)pcVar17 + 0x144)) < 1.1920929e-07
                   && (ABS(*(float *)(pcVar20 + 0xc) - *(float *)((long)pcVar17 + 0x148)) <
                       1.1920929e-07)))) goto LAB_0278f698;
            pcVar20 = pcVar20 + 0x10;
          } while (local_13f8 != pcVar20);
          pcVar20 = local_13f8;
        }
LAB_0278f698:
        local_1404 = uVar7;
        if (local_13f8 != pcVar20) {
          sVar6 = (long)local_13f8 - (long)(pcVar20 + 0x10);
          if (sVar6 != 0) {
            memmove(pcVar20,pcVar20 + 0x10,sVar6);
          }
          local_13f8 = pcVar20 + ((long)sVar6 >> 4) * 0x10;
        }
        cVar3 = *(char *)((long)pcVar17 + 0x174);
        uVar7 = local_1404;
      }
      if ((cVar3 == '\0') || (1 < *(uint *)((long)pcVar17 + 0x180))) {
        local_1404._3_1_ = (char)((uint)uVar7 >> 0x18);
        local_1404._0_3_ = (undefined3)uVar7;
        local_1404 = CONCAT13(local_1404._3_1_ + '\x01',(undefined3)local_1404);
      }
      else {
        pcVar20 = local_1400;
        if (local_1400 != local_13f8) {
          do {
            if ((((*pcVar20 == *(char *)((long)pcVar17 + 0x1b8)) &&
                 (pcVar20[1] == *(char *)((long)pcVar17 + 0x1b9))) &&
                (ABS(*(float *)(pcVar20 + 4) - *(float *)((long)pcVar17 + 0x1bc)) < 1.1920929e-07))
               && ((ABS(*(float *)(pcVar20 + 8) - *(float *)((long)pcVar17 + 0x1c0)) < 1.1920929e-07
                   && (ABS(*(float *)(pcVar20 + 0xc) - *(float *)((long)pcVar17 + 0x1c4)) <
                       1.1920929e-07)))) goto LAB_0278f764;
            pcVar20 = pcVar20 + 0x10;
          } while (local_13f8 != pcVar20);
          pcVar20 = local_13f8;
        }
LAB_0278f764:
        local_1404 = uVar7;
        if (local_13f8 != pcVar20) {
          sVar6 = (long)local_13f8 - (long)(pcVar20 + 0x10);
          if (sVar6 != 0) {
            memmove(pcVar20,pcVar20 + 0x10,sVar6);
          }
          local_13f8 = pcVar20 + ((long)sVar6 >> 4) * 0x10;
        }
      }
      pcVar17 = (char *)((long)pcVar17 + 0x1f0);
      if (pcVar17 == acStack_1408) goto LAB_0278f790;
      uVar11 = *pcVar17 != '\0';
    } while( true );
  }
  goto LAB_0278f320;
LAB_0278f790:
  if (local_1484 != '\0') {
    local_1484 = '\0';
  }
  local_157c = '\0';
  local_1500 = '\0';
  local_15f8 = '\0';
  local_1674 = '\0';
  local_16f0 = '\0';
  if ((char)uStack_176c != '\0') {
    uStack_176c = uStack_176c & 0xffffff00;
  }
  if (local_17e8[0] != '\0') {
    uStack_176c = uStack_176c & 0xffffff00;
    local_17e8[0] = '\0';
  }
  if ((char)local_1404 == '\x02') {
    puVar19 = &local_1404;
  }
  else {
    puVar19 = (undefined4 *)((ulong)&local_1404 | 1);
    if (((local_1404._1_1_ != '\x02') &&
        (puVar19 = (undefined4 *)((ulong)&local_1404 | 2), local_1404._2_1_ != '\x02')) &&
       (puVar19 = (undefined4 *)((ulong)&local_1404 | 3), local_1404._3_1_ != '\x02')) {
      FUN_0278d9bc(local_17e8,param_1,cVar4,local_13c8 + uVar14 * 0x1f0,&local_1400);
      uVar13 = uStack_17d8;
      if (local_17e8[0] != '\0') {
        pcVar17 = local_13c8 + (ulong)local_17e4 * 0x7c + uVar14 * 0x1f0;
        *(undefined8 *)(pcVar17 + 4) = local_17e0;
        uVar9 = uStack_17c8;
        *(undefined8 *)(pcVar17 + 0x14) = local_17d0;
        *(undefined8 *)(pcVar17 + 0x1c) = uVar9;
        uVar10 = uStack_17a8;
        uVar9 = local_17b0;
        *(undefined8 *)(pcVar17 + 0xc) = uVar13;
        *(undefined8 *)(pcVar17 + 0x34) = uVar9;
        *(undefined8 *)(pcVar17 + 0x3c) = uVar10;
        uVar13 = uStack_17b8;
        *(undefined8 *)(pcVar17 + 0x24) = local_17c0;
        uVar10 = uStack_1788;
        uVar9 = local_1790;
        *(undefined8 *)(pcVar17 + 0x2c) = uVar13;
        *(undefined8 *)(pcVar17 + 0x54) = uVar9;
        uVar9 = uStack_1798;
        *(undefined8 *)(pcVar17 + 0x44) = local_17a0;
        uVar13 = CONCAT44(uStack_176c,local_1770);
        *(undefined8 *)(pcVar17 + 0x5c) = uVar10;
        *(undefined8 *)(pcVar17 + 0x4c) = uVar9;
        *(undefined8 *)(pcVar17 + 0x74) = uVar13;
        uVar13 = uStack_1778;
        *(undefined8 *)(pcVar17 + 100) = local_1780;
        *(undefined8 *)(pcVar17 + 0x6c) = uVar13;
        if (*pcVar17 == '\0') {
          *pcVar17 = '\x01';
        }
        FUN_02790264(cVar4);
        local_17e8[0] = '\0';
      }
      goto LAB_0278f318;
    }
  }
  uVar15 = FUN_0278d150(((long)local_13f8 - (long)local_1400 >> 4) + -1);
  if ((ulong)((long)local_13f8 - (long)local_1400 >> 4) <= uVar15) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  local_17f8 = *(undefined8 *)(local_1400 + uVar15 * 0x10);
  uStack_17f0 = *(undefined8 *)(local_1400 + uVar15 * 0x10 + 8);
  uVar11 = FUN_02786460();
  local_17f8 = CONCAT71(local_17f8._1_7_,uVar11);
  local_1878 = *(long **)(param_1 + 0x50);
  if (local_1878 != (long *)0x0) {
    lVar16 = local_1878[0xb];
    if (*(undefined8 **)(lVar16 + 0x18) == (undefined8 *)0x0) goto LAB_0279024c;
    if (*(long *)(lVar16 + 0x10) == 0) {
      uVar13 = (**(code **)**(undefined8 **)(lVar16 + 0x18))();
      *(undefined8 *)(lVar16 + 0x10) = uVar13;
    }
    piVar1 = (int *)(lVar16 + 0xc);
    do {
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_1880 = *(long **)(param_1 + 0x58);
  if (local_1880 != (long *)0x0) {
    plVar2 = local_1880 + 10;
    do {
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_02795450(auStack_1870,&local_1878,&local_1880,&local_17f8);
  FUN_0278d4b0(local_17e8,param_1,auStack_1870,&local_1400);
  if (local_1880 != (long *)0x0) {
    plVar2 = local_1880 + 10;
    do {
      iVar12 = (int)*plVar2 + -1;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = iVar12;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar12 == 0) {
      (**(code **)(*local_1880 + 0x10))();
    }
  }
  if (local_1878 != (long *)0x0) {
    lVar16 = *(long *)((long)local_1878 + 0x58);
    piVar1 = (int *)(lVar16 + 0xc);
    do {
      iVar12 = *piVar1;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar12 + -1 == 0) {
      *(undefined8 *)(lVar16 + 0x18) = 0;
      (**(code **)(*local_1878 + 0x20))();
    }
  }
  if (local_17e8[0] != '\0') {
    pcVar17 = local_13c8 + ((long)puVar19 - (long)&local_1404) * 0x7c + uVar14 * 0x1f0;
    *(undefined4 *)(pcVar17 + 4) = (&DAT_03a7e050)[(long)puVar19 - (long)&local_1404];
    uVar13 = puVar22[1];
    *(undefined8 *)(pcVar17 + 8) = *puVar22;
    *(undefined8 *)(pcVar17 + 0x10) = uVar13;
    uVar13 = puVar22[3];
    *(undefined8 *)(pcVar17 + 0x18) = puVar22[2];
    *(undefined8 *)(pcVar17 + 0x20) = uVar13;
    uVar13 = puVar22[7];
    *(undefined8 *)(pcVar17 + 0x38) = puVar22[6];
    *(undefined8 *)(pcVar17 + 0x40) = uVar13;
    uVar13 = puVar22[5];
    *(undefined8 *)(pcVar17 + 0x28) = puVar22[4];
    *(undefined8 *)(pcVar17 + 0x30) = uVar13;
    uVar13 = puVar22[0xb];
    *(undefined8 *)(pcVar17 + 0x58) = puVar22[10];
    *(undefined8 *)(pcVar17 + 0x60) = uVar13;
    uVar13 = puVar22[9];
    *(undefined8 *)(pcVar17 + 0x48) = puVar22[8];
    *(undefined8 *)(pcVar17 + 0x50) = uVar13;
    *(undefined4 *)(pcVar17 + 0x78) = *(undefined4 *)(puVar22 + 0xe);
    uVar13 = puVar22[0xd];
    *(undefined8 *)(pcVar17 + 0x68) = puVar22[0xc];
    *(undefined8 *)(pcVar17 + 0x70) = uVar13;
    if (*pcVar17 == '\0') {
      *pcVar17 = '\x01';
    }
    FUN_02790264(cVar4);
    local_17e8[0] = '\0';
  }
LAB_0278f318:
  FUN_02793cc8(&local_1400);
LAB_0278f320:
  pcVar21 = pcVar21 + 1;
  if (pcVar21 == "") {
    FUN_0110bd14(plVar18,local_13c8);
    if (local_a94 != '\0') {
      local_a94 = '\0';
    }
    local_b8c = '\0';
    local_b10 = '\0';
    local_c08 = '\0';
    local_c84 = '\0';
    local_d00 = '\0';
    local_d7c = '\0';
    local_df8 = '\0';
    local_e74 = '\0';
    local_ef0 = '\0';
    local_f6c = '\0';
    local_fe8 = '\0';
    local_1064 = '\0';
    local_10e0 = '\0';
    local_115c = '\0';
    local_11d8 = '\0';
    local_1254[0] = '\0';
    local_12d0[0] = '\0';
    local_134c[0] = '\0';
    local_13c8[0] = '\0';
    local_e4 = '\0';
    local_160 = '\0';
    local_1dc = '\0';
    local_258 = '\0';
    local_2d4 = '\0';
    local_350 = '\0';
    local_3cc = '\0';
    local_448 = '\0';
    local_4c4 = '\0';
    local_540 = '\0';
    local_5bc = '\0';
    local_638 = '\0';
    local_6b4 = '\0';
    local_730 = '\0';
    local_7ac = '\0';
    local_828 = '\0';
    local_8a4[0] = '\0';
    local_920[0] = '\0';
    local_99c[0] = '\0';
    if (local_a18[0] != '\0') {
      local_a18[0] = '\0';
    }
    lVar16 = plVar18[0xb];
    piVar1 = (int *)(lVar16 + 0xc);
    do {
      iVar12 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar12 + -1 == 0) {
      *(undefined8 *)(lVar16 + 0x18) = 0;
      (**(code **)(*plVar18 + 0x20))(plVar18);
      return;
    }
    return;
  }
  goto LAB_0278f32c;
}


