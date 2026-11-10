/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006d56b8; name: FUN_006d56b8
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_006d56b8(long *param_1,long *param_2)

{
  ulong uVar1;
  byte *pbVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  byte *pbVar10;
  long lVar11;
  long lVar12;
  void *__src;
  undefined8 uVar13;
  long *plVar14;
  long *plVar15;
  byte *pbVar16;
  long *plVar17;
  byte local_210;
  undefined5 uStack_20f;
  undefined2 uStack_20a;
  char local_208;
  undefined5 uStack_207;
  undefined1 uStack_202;
  undefined1 uStack_201;
  undefined8 local_200;
  long *local_1f8;
  ulong local_1f0;
  long *local_1e8;
  undefined8 local_1e0;
  long *local_1d8;
  ulong local_1d0;
  long *local_1c8;
  ulong local_1c0;
  long *plStack_1b8;
  ulong local_1b0;
  long *plStack_1a8;
  long *local_1a0;
  long *local_198;
  long local_190;
  long *plStack_188;
  long local_180;
  long local_178;
  long local_170;
  long *plStack_168;
  undefined1 auStack_160 [8];
  undefined1 auStack_158 [8];
  undefined1 auStack_150 [8];
  undefined1 auStack_148 [8];
  undefined1 auStack_140 [8];
  long *local_138;
  long *local_130;
  byte local_128;
  undefined7 uStack_127;
  long *plStack_120;
  undefined8 local_118;
  byte local_110;
  undefined7 uStack_10f;
  byte local_108;
  undefined7 uStack_107;
  undefined8 local_100;
  long *local_f8;
  long *plStack_f0;
  byte local_e8;
  undefined7 uStack_e7;
  undefined8 local_d8;
  long *plStack_d0;
  undefined1 auStack_c8 [8];
  byte local_c0;
  undefined7 uStack_bf;
  undefined8 local_b0;
  long *plStack_a8;
  undefined1 auStack_a0 [8];
  byte local_98;
  undefined7 uStack_97;
  undefined8 local_88;
  long *plStack_80;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  
  FUN_0064e76c(auStack_70);
  FUN_006d6770(&local_1d0);
  pbVar16 = (byte *)*param_2;
  pbVar2 = (byte *)param_2[1];
  if (pbVar16 == pbVar2) {
LAB_006d5ab4:
    thunk_FUN_006da740(auStack_70,&DAT_03a565b1,&local_1d0);
    FUN_006d6778(&local_1d0);
    plVar14 = (long *)(**(code **)(*param_1 + 0xc0))(param_1);
    FUN_0067d740(&local_1b0,*plVar14 + 0x10);
    plVar14 = (long *)(**(code **)(*param_1 + 0xc0))(param_1);
    lVar11 = *plVar14;
    local_1e8 = (long *)0x0;
    local_1e0 = 0;
    local_1f0 = 0;
    local_1d8 = (long *)FUN_00612290();
    local_1f0 = CONCAT26(local_1f0._6_2_,0x746d5f5f08);
    local_210 = 0;
    uStack_20f = 0;
    uStack_20a = 0;
    local_208 = 0;
    uStack_207 = 0;
    uStack_202 = 0;
    uStack_201 = 0;
    local_200 = 0;
    local_1f8 = (long *)FUN_00612290();
    local_210 = 0x1a;
    uStack_20f._0_1_ = s_nat_traversal_038ca312[0];
    uStack_20f._1_1_ = s_nat_traversal_038ca312[1];
    uStack_20f._2_1_ = s_nat_traversal_038ca312[2];
    uStack_20f._3_1_ = s_nat_traversal_038ca312[3];
    uStack_20f._4_1_ = s_nat_traversal_038ca312[4];
    uStack_20a = s_nat_traversal_038ca312._5_2_;
    local_208 = s_nat_traversal_038ca312[7];
    uStack_207._0_1_ = s_nat_traversal_038ca312[8];
    uStack_207._1_1_ = s_nat_traversal_038ca312[9];
    uStack_207._2_1_ = s_nat_traversal_038ca312[10];
    uStack_207._3_1_ = s_nat_traversal_038ca312[0xb];
    uStack_207._4_1_ = s_nat_traversal_038ca312[0xc];
    uStack_202 = 0;
    FUN_0067d580(&local_1d0,&local_1f0,&local_210);
    uVar1 = (ulong)&local_1d0 | 1;
    if ((local_1d0 & 1) != 0) {
      uVar1 = local_1c0;
    }
    FUN_0064f808(&local_138,lVar11 + 0x10,uVar1);
    FUN_0067d95c(&local_1b0,&local_138,auStack_70);
    if ((local_e8 & 1) != 0) {
      (**(code **)(*plStack_d0 + 0x18))
                (plStack_d0,local_d8,CONCAT71(uStack_e7,local_e8) & 0xfffffffffffffffe,1);
    }
    if ((local_108 & 1) != 0) {
      (**(code **)(*plStack_f0 + 0x18))
                (plStack_f0,local_f8,CONCAT71(uStack_107,local_108) & 0xfffffffffffffffe,1);
    }
    if ((local_128 & 1) != 0) {
      (**(code **)(*(long *)CONCAT71(uStack_10f,local_110) + 0x18))
                ((long *)CONCAT71(uStack_10f,local_110),local_118,
                 CONCAT71(uStack_127,local_128) & 0xfffffffffffffffe,1);
    }
    if (local_130 != (long *)0x0) {
      plVar14 = (long *)((long)local_130 + 8);
      do {
        lVar11 = *plVar14;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar4) {
          *plVar14 = lVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*local_130 + 0x10))(local_130);
        std::__shared_weak_count::__release_weak();
      }
    }
    if ((local_1d0 & 1) != 0) {
      (**(code **)(*plStack_1b8 + 0x18))(plStack_1b8,local_1c0,local_1d0 & 0xfffffffffffffffe,1);
    }
    if ((local_210 & 1) != 0) {
      (**(code **)(*local_1f8 + 0x18))
                (local_1f8,local_200,
                 CONCAT26(uStack_20a,CONCAT51(uStack_20f,local_210)) & 0xfffffffffffffffe,1);
    }
    if ((local_1f0 & 1) != 0) {
      (**(code **)(*local_1d8 + 0x18))(local_1d8,local_1e0,local_1f0 & 0xfffffffffffffffe,1);
    }
    FUN_0067dec0(&local_210,&local_1b0);
    puVar7 = (undefined8 *)(**(code **)(*param_1 + 0xc0))();
    plVar14 = (long *)FUN_0064bcb4(*puVar7);
    uVar1 = CONCAT26(uStack_20a,CONCAT51(uStack_20f,local_210));
    plVar6 = (long *)CONCAT17(uStack_201,CONCAT16(uStack_202,CONCAT51(uStack_207,local_208)));
    plVar15 = *(long **)(*plVar14 + 0x198);
    uVar13 = *(undefined8 *)(*plVar14 + 0x348);
    local_1f0 = 0;
    local_1e8 = (long *)0x0;
    local_210 = 0;
    uStack_20f = 0;
    uStack_20a = 0;
    local_208 = 0;
    uStack_207 = 0;
    uStack_202 = 0;
    uStack_201 = 0;
    plVar8 = (long *)(**(code **)(*plVar15 + 0x10))(plVar15,0x78,8);
    plVar8[2] = 0;
    plVar17 = plVar8 + 1;
    *plVar17 = 0;
    puVar5 = PTR_DAT_043753e0;
    plVar8[3] = (long)plVar15;
    plVar14 = plVar8 + 4;
    *plVar8 = (long)(puVar5 + 0x10);
    FUN_00782ef8(plVar14);
    plVar8[4] = (long)(PTR_DAT_043753e8 + 0x10);
    nn::os::InitializeEvent(plVar8 + 6,0,0);
    plVar8[4] = (long)(PTR_DAT_043753f0 + 0x10);
    nn::os::InitializeMutex((MutexType *)(plVar8 + 0xb),false,0);
    if (plVar8 != (long *)0x0) {
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar4) {
          *plVar17 = *plVar17 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (plVar6 != (long *)0x0) {
      plVar9 = plVar6 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar4) {
          *plVar9 = *plVar9 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plVar9 = (long *)(**(code **)(*plVar15 + 0x10))(plVar15,0x78,8);
    *plVar9 = (long)&PTR_LAB_0419c848;
    plVar9[1] = 0;
    plVar9[2] = 0;
    plVar9[3] = (long)plVar15;
    FUN_007836ec(plVar9 + 4,plVar14,uVar1);
    plVar9[4] = (long)&PTR_FUN_0419c898;
    *(undefined1 *)(plVar9 + 0xe) = 1;
    plVar9[10] = (long)plVar14;
    plVar9[0xb] = (long)plVar8;
    plVar9[0xc] = uVar1;
    plVar9[0xd] = (long)plVar6;
    local_1d0 = uVar1;
    local_1c8 = plVar6;
    local_138 = plVar9 + 4;
    local_130 = plVar9;
    FUN_007841b0(uVar13,&local_138,&local_1f0,&local_1d0);
    if (local_1c8 != (long *)0x0) {
      plVar14 = local_1c8 + 1;
      do {
        lVar11 = *plVar14;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar4) {
          *plVar14 = lVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*local_1c8 + 0x10))(local_1c8);
        std::__shared_weak_count::__release_weak();
      }
    }
    if (local_130 != (long *)0x0) {
      plVar14 = local_130 + 1;
      do {
        lVar11 = *plVar14;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar4) {
          *plVar14 = lVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*local_130 + 0x10))(local_130);
        std::__shared_weak_count::__release_weak();
      }
    }
    if (local_1e8 != (long *)0x0) {
      plVar14 = local_1e8 + 1;
      do {
        lVar11 = *plVar14;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar4) {
          *plVar14 = lVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*local_1e8 + 0x10))(local_1e8);
        std::__shared_weak_count::__release_weak();
      }
    }
    if (plVar8 != (long *)0x0) {
      do {
        lVar11 = *plVar17;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar4) {
          *plVar17 = lVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        std::__shared_weak_count::__release_weak();
      }
    }
    plVar14 = (long *)CONCAT17(uStack_201,CONCAT16(uStack_202,CONCAT51(uStack_207,local_208)));
    if (plVar14 != (long *)0x0) {
      plVar6 = plVar14 + 1;
      do {
        lVar11 = *plVar6;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = lVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
        std::__shared_weak_count::__release_weak();
      }
    }
    lVar11 = local_180;
    if (local_180 != 0) {
      lVar12 = local_178;
      if (local_178 != local_180) {
        do {
          lVar12 = lVar12 + -8;
          FUN_0064ef40(lVar12);
        } while (lVar11 != lVar12);
      }
      local_178 = lVar11;
      (**(code **)(*plStack_168 + 0x18))(plStack_168,local_180,local_170 - local_180,8);
    }
    plVar6 = local_1a0;
    plVar14 = local_198;
    if (local_1a0 != (long *)0x0) {
      for (; plVar14 != plVar6; plVar14 = plVar14 + -1) {
        FUN_00680b34(plVar14 + -1);
      }
      local_198 = plVar6;
      (**(code **)(*plStack_188 + 0x18))(plStack_188,local_1a0,local_190 - (long)local_1a0,8);
    }
    if (plStack_1a8 != (long *)0x0) {
      plVar14 = plStack_1a8 + 1;
      do {
        lVar11 = *plVar14;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar4) {
          *plVar14 = lVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plStack_1a8 + 0x10))(plStack_1a8);
        std::__shared_weak_count::__release_weak();
      }
    }
    FUN_0064e894(auStack_70);
    return;
  }
  plVar14 = (long *)((ulong)&local_1b0 | 1);
  if ((*pbVar16 & 1) == 0) goto LAB_006d579c;
LAB_006d57a4:
  pbVar10 = *(byte **)(pbVar16 + 0x10);
  do {
    FUN_006e4a70(auStack_140,pbVar10);
    FUN_006d9900(&local_138,&DAT_03a565a1,auStack_140);
    plVar6 = (long *)(**(code **)(*param_1 + 0xc0))();
    lVar11 = *(long *)(*plVar6 + 0x20);
    if ((*(byte *)(lVar11 + 0x48) & 1) == 0) {
      lVar11 = lVar11 + 0x49;
    }
    else {
      lVar11 = *(long *)(lVar11 + 0x58);
    }
    FUN_006e4a70(auStack_148,lVar11);
    FUN_006d9900(&local_110,&DAT_03a565a5,auStack_148);
    local_198 = (long *)FUN_00612290();
    local_1a0 = (long *)0x0;
    local_1b0 = 0;
    plStack_1a8 = (long *)0x0;
    if ((*(ulong *)(pbVar16 + 0x20) & 1) == 0) {
      plStack_1a8 = *(long **)(pbVar16 + 0x28);
      local_1b0 = *(ulong *)(pbVar16 + 0x20);
      local_1a0 = *(long **)(pbVar16 + 0x30);
    }
    else {
      plVar6 = *(long **)(pbVar16 + 0x28);
      if ((long *)0xffffffffffffffef < plVar6) {
                    /* try { // try from 006d6068 to 006d606f has its CatchHandler @ 006d6070 */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      __src = *(void **)(pbVar16 + 0x30);
      if (&DAT_00000016 < plVar6) {
        plVar8 = (long *)(**(code **)(*local_198 + 0x10))
                                   (local_198,(ulong)(plVar6 + 2) & 0xfffffffffffffff0,1);
        local_1b0 = (ulong)(plVar6 + 2) & 0xfffffffffffffff0 | 1;
        plStack_1a8 = plVar6;
        local_1a0 = plVar8;
LAB_006d5898:
        memcpy(plVar8,__src,(size_t)plVar6);
      }
      else {
        local_1b0 = (ulong)(byte)((int)plVar6 << 1);
        plVar8 = plVar14;
        if (plVar6 != (long *)0x0) goto LAB_006d5898;
      }
      *(undefined1 *)((long)plVar8 + (long)plVar6) = 0;
    }
    plVar6 = plVar14;
    if ((local_1b0 & 1) != 0) {
      plVar6 = local_1a0;
    }
    FUN_006e4a70(auStack_150,plVar6);
    FUN_006d9900(&local_e8,&DAT_03a565a8,auStack_150);
    FUN_006e498c(auStack_158,(long)*(int *)(pbVar16 + 0x40));
    FUN_006d9900(&local_c0,&DAT_03a565ab,auStack_158);
    FUN_006e4918(auStack_160,pbVar16[0x44]);
    FUN_006d9900(&local_98,&DAT_03a565ae,auStack_160);
    FUN_006d9aec(&local_210,&local_138,5);
    FUN_006e4b38(&local_1f0,&local_210);
    FUN_006d67b4(&local_1d0,&local_1f0);
    FUN_006e4b9c(&local_1f0);
    FUN_006d9cd8(&local_210);
    FUN_006e4b9c(auStack_78);
    if ((local_98 & 1) == 0) {
      FUN_006e4b9c(auStack_a0);
      if ((local_c0 & 1) != 0) goto LAB_006d5a2c;
LAB_006d5974:
      FUN_006e4b9c(auStack_c8);
      if ((local_e8 & 1) != 0) goto LAB_006d5a58;
LAB_006d5984:
      FUN_006e4b9c(&plStack_f0);
      if ((local_110 & 1) != 0) goto LAB_006d5a84;
LAB_006d5994:
      FUN_006e4b9c(&local_118);
    }
    else {
      (**(code **)(*plStack_80 + 0x18))
                (plStack_80,local_88,CONCAT71(uStack_97,local_98) & 0xfffffffffffffffe,1);
      FUN_006e4b9c(auStack_a0);
      if ((local_c0 & 1) == 0) goto LAB_006d5974;
LAB_006d5a2c:
      (**(code **)(*plStack_a8 + 0x18))
                (plStack_a8,local_b0,CONCAT71(uStack_bf,local_c0) & 0xfffffffffffffffe,1);
      FUN_006e4b9c(auStack_c8);
      if ((local_e8 & 1) == 0) goto LAB_006d5984;
LAB_006d5a58:
      (**(code **)(*plStack_d0 + 0x18))
                (plStack_d0,local_d8,CONCAT71(uStack_e7,local_e8) & 0xfffffffffffffffe,1);
      FUN_006e4b9c(&plStack_f0);
      if ((local_110 & 1) == 0) goto LAB_006d5994;
LAB_006d5a84:
      (**(code **)(*local_f8 + 0x18))
                (local_f8,local_100,CONCAT71(uStack_10f,local_110) & 0xfffffffffffffffe,1);
      FUN_006e4b9c(&local_118);
    }
    if (((ulong)local_138 & 1) != 0) {
      (**(code **)(*plStack_120 + 0x18))
                (plStack_120,CONCAT71(uStack_127,local_128),(ulong)local_138 & 0xfffffffffffffffe,1)
      ;
    }
    FUN_006e4b9c(auStack_160);
    FUN_006e4b9c(auStack_158);
    FUN_006e4b9c(auStack_150);
    if ((local_1b0 & 1) != 0) {
      (**(code **)(*local_198 + 0x18))(local_198,local_1a0,local_1b0 & 0xfffffffffffffffe,1);
    }
    FUN_006e4b9c(auStack_148);
    FUN_006e4b9c(auStack_140);
    pbVar16 = pbVar16 + 0x48;
    if (pbVar2 == pbVar16) goto LAB_006d5ab4;
    if ((*pbVar16 & 1) != 0) goto LAB_006d57a4;
LAB_006d579c:
    pbVar10 = pbVar16 + 1;
  } while( true );
}


