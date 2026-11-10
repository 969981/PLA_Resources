/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00795110; name: FUN_00795110
 */


/* WARNING (jumptable): Heritage AFTER dead removal. Revisit: 0xffffffffffffe980 */
/* WARNING: Removing unreachable block (ram,0x00796270) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_00795110(long param_1)

{
  int iVar1;
  long **pplVar2;
  long *plVar3;
  undefined *puVar4;
  long **pplVar5;
  undefined *puVar6;
  byte *pbVar7;
  int iVar8;
  bool bVar9;
  char cVar10;
  bool bVar11;
  int iVar12;
  undefined1 uVar13;
  undefined7 uVar14;
  undefined *puVar15;
  long *plVar16;
  byte *pbVar17;
  long *plVar18;
  char *pcVar19;
  long *plVar20;
  long lVar21;
  long *plVar22;
  void *__dest;
  ulong uVar23;
  long lVar24;
  uint *puVar25;
  long lVar26;
  uint uVar27;
  undefined8 *puVar28;
  long *plVar29;
  int iVar30;
  char *pcVar31;
  long lVar32;
  byte *pbVar33;
  long lVar34;
  undefined8 uVar35;
  long local_1770;
  ulong local_1728;
  uint local_1688;
  long *local_1680;
  undefined8 uStack_1678;
  long *local_1670;
  long *plStack_1668;
  char local_1660;
  undefined **local_1658;
  undefined *local_1650;
  undefined8 uStack_1648;
  long local_1640;
  undefined8 local_1638;
  long *local_1630;
  long local_1628;
  ulong local_1620;
  char local_1618;
  uint local_1610 [2];
  long *local_1608;
  undefined8 uStack_1600;
  long *local_15f8;
  long *plStack_15f0;
  char local_15e8;
  undefined **local_15e0;
  undefined *local_15d8;
  undefined8 uStack_15d0;
  long local_15c8;
  long *local_15c0;
  long *local_15b8;
  undefined1 auStack_15b0 [32];
  long *local_1590;
  long *local_1588;
  long local_1580;
  char local_1560;
  byte *local_1558;
  long *local_1550;
  long local_1548;
  long local_1538;
  long local_1530;
  undefined8 local_1528;
  long local_1520;
  undefined8 local_1518;
  uint local_1510;
  uint local_150c [623];
  undefined8 local_b50;
  undefined8 uStack_b48;
  long **local_b40;
  long *local_b38;
  long *******local_b30;
  long *******local_b28;
  undefined1 local_b18 [64];
  long **local_ad8;
  undefined8 uStack_ad0;
  long *local_170;
  long *local_168;
  void *local_160;
  undefined *local_158;
  char *local_150;
  char *pcStack_148;
  long *local_140;
  long *local_138;
  char *local_130;
  char *pcStack_128;
  long *local_120;
  long *local_118;
  undefined8 local_110;
  long *plStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined1 local_c8;
  undefined1 *local_c0;
  long *local_b8;
  undefined8 uStack_b0;
  long *local_a8;
  long *local_a0;
  char local_98;
  undefined **ppuStack_90;
  undefined *local_88;
  undefined8 uStack_80;
  long local_78;
  long **local_70;
  undefined **local_68;
  
  lVar24 = *(long *)(param_1 + 0x180);
  lVar34 = *(long *)PTR_DAT_04376258;
  uVar35 = *(undefined8 *)PTR_DAT_04376260;
  FUN_00617a0c(&local_1530);
  FUN_00617a90(&local_1530);
  lVar26 = param_1 + 0x160;
  local_1638 = *(undefined8 *)(param_1 + 0xe0);
  local_1520 = lVar34 * 1000000;
  local_1630 = *(long **)(param_1 + 0xe8);
  if (local_1630 != (long *)0x0) {
    plVar3 = local_1630 + 1;
    do {
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar11) {
        *plVar3 = *plVar3 + 1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
  }
  local_1628 = *(long *)PTR_DAT_04376268 * 60000;
  iVar30 = 1;
  local_1618 = '\x01';
  local_1620 = 0xffffffffffffffff;
  local_1770 = std::chrono::steady_clock::now();
  local_1518 = 0x4000000000000000;
  local_1530 = lVar34;
  local_1528 = uVar35;
  FUN_00617a0c(&local_b40);
  local_1510 = FUN_00617a90(&local_b40);
  puVar15 = PTR_DAT_04376e98;
  lVar34 = -0x26e;
  puVar25 = local_150c + 1;
  uVar27 = local_1510;
  while( true ) {
    iVar12 = (int)lVar34;
    uVar27 = iVar12 + (uVar27 ^ uVar27 >> 0x1e) * 0x6c078965 + 0x26f;
    puVar25[-1] = uVar27;
    if (lVar34 == 0) break;
    iVar1 = iVar30 + 1;
    iVar30 = iVar30 + 2;
    iVar8 = (uVar27 ^ uVar27 >> 0x1e) * 0x6c078965;
    lVar34 = lVar34 + 2;
    uVar27 = iVar8 + iVar1;
    *puVar25 = iVar12 + iVar8 + 0x270;
    puVar25 = puVar25 + 2;
  }
  uStack_b48 = 0;
  local_b50 = 0;
  pplVar2 = (long **)(PTR_DAT_04373168 + 0x10);
  plVar3 = (long *)(PTR_DAT_04373170 + 0x10);
  puVar4 = PTR_DAT_04376ea0 + 0x10;
  local_1728 = 1;
  do {
    FUN_006dd558(&local_b40);
    FUN_006dd5d8(&local_b40,&DAT_03a6c528);
    FUN_006dd564(&local_b40,lVar26);
    FUN_00796550(&local_15c0,*(undefined8 *)(*(long *)(param_1 + 0xd0) + 8),param_1 + 0xf0,
                 &local_b40);
    if (local_b38 != (long *)0x0) {
      plVar20 = local_b38 + 1;
      do {
        lVar34 = *plVar20;
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar20,0x10);
        if (bVar11) {
          *plVar20 = lVar34 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (lVar34 == 0) {
        (**(code **)(*local_b38 + 0x10))(local_b38);
        std::__shared_weak_count::__release_weak();
      }
    }
    plVar18 = local_1550;
    pbVar17 = local_1558;
    plVar16 = local_1588;
    plVar20 = local_1590;
    if (local_1550 != (long *)0x0) {
      plVar29 = local_1550 + 1;
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar29,0x10);
        if (bVar11) {
          *plVar29 = *plVar29 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
    }
    if (local_1588 != (long *)0x0) {
      plVar29 = local_1588 + 1;
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar29,0x10);
        if (bVar11) {
          *plVar29 = *plVar29 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
    }
    ppuStack_90 = (undefined **)0x0;
    local_98 = '\0';
    uStack_80 = 0;
    local_88 = (undefined *)0x0;
    uStack_b0 = 0;
    local_b8 = (long *)0x0;
    local_a0 = (long *)0x0;
    local_a8 = (long *)0x0;
    local_c0 = auStack_15b0;
                    /* try { // try from 00795454 to 0079545b has its CatchHandler @ 007962d4 */
    FUN_007a8034(&uStack_b0,0);
    local_78 = CONCAT71(local_78._1_7_,1);
    FUN_00798770(&local_c0);
    local_d0 = 0;
    uStack_e8 = 0;
    local_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    plStack_108 = (long *)0x0;
    local_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
                    /* try { // try from 00795480 to 0079548b has its CatchHandler @ 007962d8 */
    FUN_007a8034(&uStack_100,0);
    local_c8 = 0;
    local_110 = 0;
    uVar13 = local_1680._0_1_;
    uVar14 = local_1680._1_7_;
    if (local_c0 != (undefined1 *)0x0) {
      bVar11 = true;
      if (uStack_80._4_4_ != 3) goto LAB_00795514;
      do {
        if (bVar11) {
                    /* try { // try from 007956cc to 007956d3 has its CatchHandler @ 007962dc */
          FUN_007add30(&local_b40,local_88);
          if (local_b30 == (long *******)0x0) {
            lVar21 = 0xe10;
            lVar34 = local_1548;
            lVar32 = local_1538;
          }
          else {
            lVar21 = FUN_006ddf80();
            lVar34 = local_1548;
            lVar32 = local_1538;
            if (lVar21 < 1) {
              lVar21 = 0xe10;
            }
          }
          local_1538 = lVar21;
          local_1548 = lVar34;
          if (lVar34 != 0) {
            lVar32 = std::chrono::system_clock::now();
            local_158 = (undefined *)(lVar32 + local_1538 * 1000000);
            FUN_00619a0c(lVar34,&local_158);
            lVar32 = local_1538;
          }
          local_1538 = lVar32;
          FUN_007adde8(&local_b40);
        }
        bVar11 = false;
        while( true ) {
          FUN_00798770(&local_c0);
          if (local_c0 == (undefined1 *)0x0) goto LAB_007959cc;
          if (uStack_80._4_4_ == 3) break;
LAB_00795514:
          if (uStack_80._4_4_ == 2) {
            local_120 = (long *)0x0;
            pcStack_128 = (char *)0x0;
            local_130 = (char *)0x0;
            local_118 = (long *)FUN_00612290();
            puVar6 = local_88;
            if (uStack_80._4_4_ != 2) {
              puVar6 = puVar15;
            }
            puVar28 = (undefined8 *)0x0;
            if (*(long *)(puVar6 + 0x20) != 0) {
              puVar28 = (undefined8 *)(*(long *)(puVar6 + 0x20) + 8);
            }
            if (*(int *)(puVar6 + 0x18) != 0) {
              lVar34 = (long)*(int *)(puVar6 + 0x18) << 3;
              do {
                FUN_0079a930(&local_b40,*puVar28);
                    /* try { // try from 00795568 to 00795577 has its CatchHandler @ 007962e4 */
                FUN_0078c0dc(&local_130,&local_b40);
                FUN_0276123c(&local_b40);
                puVar28 = puVar28 + 1;
                lVar34 = lVar34 + -8;
              } while (lVar34 != 0);
            }
            pcStack_148 = pcStack_128;
            pcStack_128 = (char *)0x0;
            local_150 = local_130;
            local_140 = local_120;
            local_68 = &local_158;
            local_130 = (char *)0x0;
            local_120 = (long *)0x0;
            local_158 = puVar4;
            local_138 = local_118;
            local_70 = (long **)(param_1 + 0x130);
            FUN_007988b0(&local_170,&local_70,*(undefined8 *)(*(long *)(param_1 + 0xe0) + 0x198),
                         *(undefined8 *)(*(long *)(param_1 + 0xe0) + 0x5f8));
            pplVar5 = (long **)(PTR_DAT_04373168 + 0x10);
            local_b38 = (long *)(PTR_DAT_04373170 + 0x10);
            local_ad8 = (long **)0x0;
            uStack_ad0 = 0;
            local_b40 = pplVar5;
            local_b30 = (long *******)&local_b30;
            local_b28 = (long *******)&local_b30;
            (**(code **)(*local_170 + 0x10))(local_170,local_b18);
            local_ad8 = &local_b38;
            thunk_FUN_00783af0(&local_b40);
            local_b40 = pplVar5;
            FUN_00782f18(&local_b38);
            plVar22 = local_168;
            plVar29 = local_170;
            local_170 = (long *)0x0;
            local_168 = (long *)0x0;
            (**(code **)(*plVar29 + 0x30))();
            if (plVar22 != (long *)0x0) {
              plVar29 = plVar22 + 1;
              do {
                lVar34 = *plVar29;
                cVar10 = '\x01';
                bVar9 = (bool)ExclusiveMonitorPass(plVar29,0x10);
                if (bVar9) {
                  *plVar29 = lVar34 + -1;
                  cVar10 = ExclusiveMonitorsStatus();
                }
              } while (cVar10 != '\0');
              if (lVar34 == 0) {
                (**(code **)(*plVar22 + 0x10))(plVar22);
                std::__shared_weak_count::__release_weak();
              }
            }
            if (local_168 != (long *)0x0) {
              plVar29 = local_168 + 1;
              do {
                lVar34 = *plVar29;
                cVar10 = '\x01';
                bVar9 = (bool)ExclusiveMonitorPass(plVar29,0x10);
                if (bVar9) {
                  *plVar29 = lVar34 + -1;
                  cVar10 = ExclusiveMonitorsStatus();
                }
              } while (cVar10 != '\0');
              if (lVar34 == 0) {
                (**(code **)(*local_168 + 0x10))(local_168);
                std::__shared_weak_count::__release_weak();
              }
            }
            pcVar19 = local_150;
            local_158 = PTR_DAT_04376ea0 + 0x10;
            pcVar31 = pcStack_148;
            if (local_150 != (char *)0x0) {
              for (; pcVar31 != pcVar19; pcVar31 = pcVar31 + -0xe8) {
                (*(code *)**(undefined8 **)pcVar31)(pcVar31);
              }
              pcStack_148 = pcVar19;
              (**(code **)(*local_138 + 0x18))
                        (local_138,local_150,(long)local_140 - (long)local_150,8);
            }
            puVar6 = local_88;
            if (uStack_80._4_4_ != 2) {
              puVar6 = puVar15;
            }
            plVar29 = (long *)0x0;
            if (*(long *)(puVar6 + 0x20) != 0) {
              plVar29 = (long *)(*(long *)(puVar6 + 0x20) + 8);
            }
            if (*(int *)(puVar6 + 0x18) != 0) {
              lVar34 = (long)*(int *)(puVar6 + 0x18) << 3;
              do {
                lVar32 = *plVar29;
                FUN_0079b080(&local_b40,lVar32);
                FUN_00799d30(&local_158,&local_b40);
                if (((ulong)local_b40 & 1) != 0) {
                  (*(code *)(*local_b28)[3])
                            (local_b28,local_b30,(ulong)local_b40 & 0xfffffffffffffffe,1);
                }
                pbVar33 = *(byte **)(lVar32 + 0x58);
                local_170 = (long *)0x0;
                local_160 = (void *)0x0;
                local_168 = (long *)0x0;
                pcVar31 = (char *)((ulong)&local_158 | 1);
                if (((ulong)local_158 & 1) != 0) {
                  pcVar31 = pcStack_148;
                }
                plVar22 = (long *)strlen(pcVar31);
                if ((long *)0xffffffffffffffef < plVar22) {
                    /* try { // try from 007962b4 to 007962bf has its CatchHandler @ 007962c0 */
                    /* WARNING: Subroutine does not return */
                  std::__basic_string_common<true>::__throw_length_error();
                }
                if (&DAT_00000016 < plVar22) {
                  __dest = (void *)FUN_002e2e80(PTR_FUN_04373078,
                                                (ulong)(plVar22 + 2) & 0xfffffffffffffff0);
                  local_170 = (long *)((ulong)(plVar22 + 2) & 0xfffffffffffffff0 | 1);
                  local_168 = plVar22;
                  local_160 = __dest;
LAB_00795890:
                  memcpy(__dest,pcVar31,(size_t)plVar22);
                }
                else {
                  local_170 = (long *)CONCAT71(local_170._1_7_,(char)((int)plVar22 << 1));
                  __dest = (void *)((ulong)&local_170 | 1);
                  if (plVar22 != (long *)0x0) goto LAB_00795890;
                }
                local_70 = &local_170;
                *(undefined1 *)((long)__dest + (long)plVar22) = 0;
                local_68 = (undefined **)0x0;
                    /* try { // try from 007958b0 to 00795917 has its CatchHandler @ 007962fc */
                FUN_0079410c(&local_b40,*(undefined8 *)(param_1 + 0x110),&local_70);
                pplVar5 = local_b40;
                plVar22 = local_b40[1];
                if (plVar22 == (long *)0x0) {
                  plVar22 = (long *)FUN_00793f40(param_1 + 0x100,&local_170);
                  *pplVar5 = plVar22;
                  pplVar5[1] = plVar22;
                }
                if ((byte *)(plVar22 + 3) != pbVar33) {
                  uVar23 = *(ulong *)(pbVar33 + 8);
                  pbVar7 = *(byte **)(pbVar33 + 0x10);
                  if ((*pbVar33 & 1) == 0) {
                    pbVar7 = pbVar33 + 1;
                    uVar23 = (ulong)(*pbVar33 >> 1);
                  }
                  FUN_00291910(plVar22 + 3,pbVar7,uVar23);
                }
                if (((ulong)local_170 & 1) != 0) {
                  FUN_002e2ea0(PTR_LAB_04373088,local_160);
                }
                if (((ulong)local_158 & 1) != 0) {
                  (**(code **)(*local_140 + 0x18))
                            (local_140,pcStack_148,(ulong)local_158 & 0xfffffffffffffffe,1);
                }
                plVar29 = plVar29 + 1;
                lVar34 = lVar34 + -8;
              } while (lVar34 != 0);
            }
            pcVar19 = local_130;
            pcVar31 = pcStack_128;
            if (local_130 != (char *)0x0) {
              for (; pcVar31 != pcVar19; pcVar31 = pcVar31 + -0xe8) {
                (*(code *)**(undefined8 **)pcVar31)(pcVar31);
              }
              pcStack_128 = pcVar19;
              (**(code **)(*local_118 + 0x18))
                        (local_118,local_130,(long)local_120 - (long)local_130,8);
            }
          }
        }
      } while( true );
    }
LAB_007959cc:
    FUN_007a81f0(&uStack_100);
    FUN_007a81f0(&uStack_b0);
    if (local_1560 == '\0') {
      local_1560 = '\x01';
                    /* try { // try from 007959fc to 00795a03 has its CatchHandler @ 007962d0 */
      (**(code **)(**(long **)(local_1580 + 0x20) + 0x38))(*(long **)(local_1580 + 0x20),0);
    }
    local_ad8 = (long **)0x0;
    uStack_ad0 = 0;
    local_b40 = pplVar2;
    local_b38 = plVar3;
    local_b30 = (long *******)&local_b30;
    local_b28 = (long *******)&local_b30;
    (**(code **)(*local_15c0 + 0x10))(local_15c0,local_b18);
    local_ad8 = &local_b38;
    thunk_FUN_00783af0(&local_b40);
    local_b40 = pplVar2;
    FUN_00782f18(&local_b38);
    plVar22 = local_15b8;
    plVar29 = local_15c0;
    local_15c0 = (long *)0x0;
    local_15b8 = (long *)0x0;
    (**(code **)(*plVar29 + 0x30))(&local_c0);
    if (plVar22 == (long *)0x0) {
LAB_00795a88:
      if ((uint)local_c0 < 2) goto LAB_00795a94;
LAB_00795b00:
      local_15f8 = local_a8;
      uStack_1600 = uStack_b0;
      local_1608 = local_b8;
      uStack_b0 = 0;
      local_a8 = (long *)0x0;
      local_b8 = (long *)0x0;
      plStack_15f0 = local_a0;
      local_15e8 = '\0';
      local_1610[0] = (uint)local_c0;
      if (local_98 != '\0') {
        local_15e0 = ppuStack_90;
        uStack_15d0 = uStack_80;
        local_15d8 = local_88;
        local_15c8 = local_78;
        if (local_78 == 0) {
          local_15e8 = '\x01';
          local_15e0 = &local_15d8;
          goto joined_r0x00795e6c;
        }
        *(undefined ***)(local_88 + 0x10) = &local_15d8;
        local_78 = 0;
        local_88 = (undefined *)0x0;
        local_15e8 = '\x01';
        ppuStack_90 = &local_88;
        if (local_98 == '\0') goto LAB_00795b78;
        goto LAB_00795b6c;
      }
    }
    else {
      plVar29 = plVar22 + 1;
      do {
        lVar34 = *plVar29;
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar29,0x10);
        if (bVar11) {
          *plVar29 = lVar34 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (lVar34 != 0) goto LAB_00795a88;
      (**(code **)(*plVar22 + 0x10))(plVar22);
      std::__shared_weak_count::__release_weak();
      if (1 < (uint)local_c0) goto LAB_00795b00;
LAB_00795a94:
      local_b38 = (long *)0x0;
      local_b30 = (long *******)FUN_00612290();
      local_b28 = (long *******)0x0;
      local_b40 = &local_b38;
      FUN_002a3b60(local_1610,0,&DAT_03996322,&local_b40);
      FUN_02767254(&local_b40,local_b38);
joined_r0x00795e6c:
      if (local_98 != '\0') {
LAB_00795b6c:
        FUN_02767254(&ppuStack_90,local_88);
      }
    }
LAB_00795b78:
    if (((ulong)local_b8 & 1) != 0) {
      (**(code **)(*local_a0 + 0x18))(local_a0,local_a8,(ulong)local_b8 & 0xfffffffffffffffe,1);
    }
    pplVar5 = (long **)(PTR_DAT_04373168 + 0x10);
    local_b38 = (long *)(PTR_DAT_04373170 + 0x10);
    local_ad8 = (long **)0x0;
    uStack_ad0 = 0;
    local_b40 = pplVar5;
    local_b30 = (long *******)&local_b30;
    local_b28 = (long *******)&local_b30;
    (**(code **)(*plVar20 + 0x10))(plVar20,local_b18);
    local_ad8 = &local_b38;
    thunk_FUN_00783af0(&local_b40);
    local_b40 = pplVar5;
    FUN_00782f18(&local_b38);
    pcVar31 = (char *)(**(code **)(*plVar20 + 0x38))(plVar20);
    switch(local_1610[0]) {
    case 2:
    case 0xd:
    case 0x10:
      if ((1 < local_1728) && ((*pbVar17 & 1) == 0)) {
        local_1688 = local_1610[0];
        break;
      }
LAB_00795c74:
      if ((*pbVar17 & 1) == 0) {
        if ((local_1728 < local_1620) &&
           (lVar34 = std::chrono::steady_clock::now(), lVar34 - local_1770 < local_1628 * 1000000))
        {
          local_1728 = local_1728 + 1;
          goto LAB_00795cd0;
        }
        local_1670 = local_15f8;
        plVar20 = local_1608;
        local_1688 = local_1610[0];
        local_1608._0_1_ = 0;
        local_1608._1_7_ = 0;
        local_15f8 = (long *)0x0;
        uStack_1678 = uStack_1600;
        local_1680._0_1_ = SUB81(plVar20,0);
        local_1680._1_7_ = (undefined7)((ulong)plVar20 >> 8);
        plStack_1668 = plStack_15f0;
        plVar20 = plVar20;
        if (local_15e8 != '\0') {
          local_1640 = local_15c8;
          uVar13 = local_1680._0_1_;
          uVar14 = local_1680._1_7_;
          local_1650 = local_15d8;
          goto joined_r0x00795e50;
        }
        goto LAB_00795fa0;
      }
      local_1770 = std::chrono::steady_clock::now();
      FUN_00619140(&local_1530);
      local_1728 = 1;
LAB_00795cd0:
      lVar34 = FUN_006190c8(&local_1530);
      FUN_00618738(&local_b40,&local_1638);
      FUN_00618534(&local_110,local_b40);
      if (local_b38 != (long *)0x0) {
        plVar20 = local_b38 + 1;
        do {
          lVar32 = *plVar20;
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar11) {
            *plVar20 = lVar32 + -1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (lVar32 == 0) {
          (**(code **)(*local_b38 + 0x10))(local_b38);
          std::__shared_weak_count::__release_weak();
        }
      }
      local_c0 = *(undefined1 **)(param_1 + 0x160);
      local_b8 = *(long **)(param_1 + 0x168);
      if (local_b8 != (long *)0x0) {
        plVar20 = local_b8 + 1;
        do {
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar11) {
            *plVar20 = *plVar20 + 1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
      }
      local_a8 = plStack_108;
      uStack_b0 = local_110;
      if (plStack_108 != (long *)0x0) {
        plVar20 = plStack_108 + 1;
        do {
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar11) {
            *plVar20 = *plVar20 + 1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
      }
      FUN_00617c4c(&local_b40,&local_c0,2);
      if (local_a8 != (long *)0x0) {
        plVar20 = local_a8 + 1;
        do {
          lVar32 = *plVar20;
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar11) {
            *plVar20 = lVar32 + -1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (lVar32 == 0) {
          (**(code **)(*local_a8 + 0x10))(local_a8);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (local_b8 != (long *)0x0) {
        plVar20 = local_b8 + 1;
        do {
          lVar32 = *plVar20;
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar11) {
            *plVar20 = lVar32 + -1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (lVar32 == 0) {
          (**(code **)(*local_b8 + 0x10))(local_b8);
          std::__shared_weak_count::__release_weak();
        }
      }
      local_158 = (undefined *)(lVar34 * 1000000);
      FUN_00617eb8(&local_c0,&local_b40);
      FUN_006119e0(&local_158,&local_c0);
      if (local_b8 == (long *)0x0) {
LAB_00796074:
        uVar23 = FUN_00783cf4(lVar26);
        if ((uVar23 & 1) != 0) goto LAB_00796080;
LAB_00796108:
        bVar11 = false;
        FUN_00617d58(&local_b40);
joined_r0x00796118:
        if (plStack_108 != (long *)0x0) {
LAB_00796154:
          plVar20 = plStack_108 + 1;
          do {
            lVar34 = *plVar20;
            cVar10 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar20,0x10);
            if (bVar9) {
              *plVar20 = lVar34 + -1;
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
          if (lVar34 == 0) {
            (**(code **)(*plStack_108 + 0x10))(plStack_108);
            std::__shared_weak_count::__release_weak();
          }
        }
      }
      else {
        plVar20 = local_b8 + 1;
        do {
          lVar34 = *plVar20;
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar11) {
            *plVar20 = lVar34 + -1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (lVar34 != 0) goto LAB_00796074;
        (**(code **)(*local_b8 + 0x10))(local_b8);
        std::__shared_weak_count::__release_weak();
        uVar23 = FUN_00783cf4(lVar26);
        if ((uVar23 & 1) == 0) goto LAB_00796108;
LAB_00796080:
        plStack_1668 = plStack_15f0;
        local_1670 = local_15f8;
        uStack_1678 = uStack_1600;
        local_1680 = local_1608;
        local_1688 = local_1610[0];
        uStack_1600 = 0;
        local_15f8 = (long *)0x0;
        local_1608 = (long *)0x0;
        local_1660 = '\0';
        if (local_15e8 == '\0') {
          bVar11 = true;
          FUN_00617d58(&local_b40);
          goto joined_r0x00796118;
        }
        local_1658 = local_15e0;
        uStack_1648 = uStack_15d0;
        local_1650 = local_15d8;
        local_1640 = local_15c8;
        if (local_15c8 == 0) {
          local_1658 = &local_1650;
        }
        else {
          *(undefined ***)(local_15d8 + 0x10) = &local_1650;
          local_15c8 = 0;
          local_15d8 = (undefined *)0x0;
          local_15e0 = &local_15d8;
        }
        bVar11 = true;
        local_1660 = '\x01';
        FUN_00617d58(&local_b40);
        if (plStack_108 != (long *)0x0) goto LAB_00796154;
      }
      goto joined_r0x00795ee0;
    default:
      local_1688 = local_1610[0];
      break;
    case 0xe:
      if (!(local_1618 == '\0' && *pcVar31 == '\0')) goto LAB_00795c74;
      local_1688 = 0xe;
    }
    uStack_1678 = uStack_1600;
    local_1680 = local_1608;
    plVar20 = local_1680;
    if (local_15e8 == '\0') {
LAB_00795fa0:
      local_1680 = plVar20;
      uStack_1600 = 0;
      local_1608 = (long *)0x0;
      local_1660 = '\0';
      bVar11 = true;
    }
    else {
      local_1640 = local_15c8;
      local_1650 = local_15d8;
joined_r0x00795e50:
      uStack_1600 = 0;
      if (local_1640 == 0) {
        local_1658 = &local_1650;
        local_15d8 = local_1650;
        local_15c8 = local_1640;
      }
      else {
        *(undefined ***)(local_1650 + 0x10) = &local_1650;
        local_15c8 = 0;
        local_15d8 = (undefined *)0x0;
        local_1658 = local_15e0;
        local_15e0 = &local_15d8;
      }
      local_1680 = (long *)CONCAT71(uVar14,uVar13);
      bVar11 = true;
      local_1660 = '\x01';
      uStack_1648 = uStack_15d0;
joined_r0x00795ee0:
      if (local_15e8 != '\0') {
        FUN_02767254(&local_15e0,local_15d8);
      }
      if (((ulong)local_1608 & 1) != 0) {
        (**(code **)(*plStack_15f0 + 0x18))
                  (plStack_15f0,local_15f8,(ulong)local_1608 & 0xfffffffffffffffe,1);
      }
    }
    if (plVar16 == (long *)0x0) {
LAB_00795f38:
      if (plVar18 == (long *)0x0) goto LAB_00795f5c;
LAB_00795f40:
      plVar20 = plVar18 + 1;
      do {
        lVar34 = *plVar20;
        cVar10 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar20,0x10);
        if (bVar9) {
          *plVar20 = lVar34 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (lVar34 != 0) goto LAB_00795f5c;
      (**(code **)(*plVar18 + 0x10))(plVar18);
      std::__shared_weak_count::__release_weak();
      FUN_007973e8(auStack_15b0);
    }
    else {
      plVar20 = plVar16 + 1;
      do {
        lVar34 = *plVar20;
        cVar10 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar20,0x10);
        if (bVar9) {
          *plVar20 = lVar34 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (lVar34 != 0) goto LAB_00795f38;
      (**(code **)(*plVar16 + 0x10))(plVar16);
      std::__shared_weak_count::__release_weak();
      if (plVar18 != (long *)0x0) goto LAB_00795f40;
LAB_00795f5c:
      FUN_007973e8(auStack_15b0);
    }
    if (local_15b8 != (long *)0x0) {
      plVar20 = local_15b8 + 1;
      do {
        lVar34 = *plVar20;
        cVar10 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar20,0x10);
        if (bVar9) {
          *plVar20 = lVar34 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (lVar34 == 0) {
        (**(code **)(*local_15b8 + 0x10))(local_15b8);
        std::__shared_weak_count::__release_weak();
      }
    }
    if (bVar11) {
      if (local_1630 != (long *)0x0) {
        plVar3 = local_1630 + 1;
        do {
          lVar26 = *plVar3;
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar11) {
            *plVar3 = lVar26 + -1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (lVar26 == 0) {
          (**(code **)(*local_1630 + 0x10))(local_1630);
          std::__shared_weak_count::__release_weak();
        }
      }
      nn::os::LockMutex((MutexType *)(lVar24 + 0x38));
      *(uint *)(lVar24 + 0x58) = local_1688;
      *(undefined8 *)(lVar24 + 0x68) = uStack_1678;
      *(long **)(lVar24 + 0x60) = local_1680;
      *(long **)(lVar24 + 0x78) = plStack_1668;
      *(long **)(lVar24 + 0x70) = local_1670;
      *(undefined1 *)(lVar24 + 0x80) = 0;
      if (local_1660 != '\0') {
        *(undefined ***)(lVar24 + 0x88) = local_1658;
        plVar3 = (long *)(lVar24 + 0x90);
        *(undefined8 *)(lVar24 + 0x98) = uStack_1648;
        *(undefined **)(lVar24 + 0x90) = local_1650;
        *(long *)(lVar24 + 0xa0) = local_1640;
        if (local_1640 == 0) {
          *(long **)(lVar24 + 0x88) = plVar3;
        }
        else {
          *(long **)(*plVar3 + 0x10) = plVar3;
          local_1640 = 0;
          local_1650 = (undefined *)0x0;
          local_1658 = &local_1650;
        }
        *(undefined1 *)(lVar24 + 0x80) = 1;
      }
      *(undefined1 *)(lVar24 + 0xa8) = 1;
      nn::os::UnlockMutex((MutexType *)(lVar24 + 0x38));
      if (local_1660 != '\0') {
        FUN_02767254(&local_1658,local_1650);
      }
      return 1;
    }
  } while( true );
}


