/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0066bb48; name: FUN_0066bb48
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_0066bb48(undefined8 param_1,long *param_2)

{
  long **pplVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte *pbVar6;
  byte *pbVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  char *__s;
  long *plVar12;
  long *__n;
  __tree_node_base *p_Var13;
  byte *pbVar14;
  long lVar15;
  long lVar16;
  __tree_node_base *p_Var17;
  undefined8 ******__dest;
  long *local_218;
  long *local_210;
  int local_208 [2];
  byte local_200;
  undefined7 uStack_1ff;
  undefined8 local_1f0;
  long *plStack_1e8;
  char local_1e0;
  undefined1 auStack_1d8 [8];
  undefined8 local_1d0;
  undefined1 auStack_1b8 [8];
  long local_1b0;
  long local_1a8;
  long local_1a0;
  long *plStack_198;
  undefined1 auStack_190 [8];
  long *local_188;
  long local_180;
  long local_178;
  long local_170;
  long *plStack_168;
  long local_160;
  long local_158;
  long local_150;
  long *plStack_148;
  undefined1 auStack_140 [8];
  long *local_138;
  byte local_130;
  undefined7 uStack_12f;
  undefined8 local_120;
  long *plStack_118;
  byte local_110;
  undefined7 uStack_10f;
  undefined8 local_100;
  long *plStack_f8;
  byte local_f0;
  undefined7 uStack_ef;
  undefined8 local_e0;
  long *plStack_d8;
  undefined1 auStack_d0 [20];
  undefined4 local_bc;
  long **local_b8;
  long *plStack_b0;
  undefined8 *******local_a8;
  undefined8 *******pppppppuStack_a0;
  long *local_98;
  byte local_90;
  undefined7 uStack_8f;
  undefined8 local_80;
  long *plStack_78;
  byte local_60;
  undefined7 uStack_5f;
  long **local_50;
  long *plStack_48;
  
  local_bc = 0;
  pbVar6 = (byte *)(**(code **)(*param_2 + 0x10))();
  pbVar14 = *(byte **)(pbVar6 + 0x10);
  if ((*pbVar6 & 1) == 0) {
    pbVar14 = pbVar6 + 1;
  }
  pbVar7 = (byte *)(**(code **)(*param_2 + 0x18))(param_2);
  pbVar6 = *(byte **)(pbVar7 + 0x10);
  if ((*pbVar7 & 1) == 0) {
    pbVar6 = pbVar7 + 1;
  }
  uVar4 = (**(code **)(*param_2 + 0x20))(param_2);
  uVar5 = (**(code **)(*param_2 + 0x28))(param_2);
  if ((*(byte *)(param_2 + 0x2d) & 1) == 0) {
    lVar16 = (long)param_2 + 0x169;
  }
  else {
    lVar16 = param_2[0x2f];
  }
  FUN_006759c8(&local_b8,1,pbVar14,pbVar6,uVar4,uVar5,0,lVar16);
  FUN_00675e28(auStack_d0,&local_b8);
  if ((local_60 & 1) != 0) {
    (**(code **)(*plStack_48 + 0x18))
              (plStack_48,local_50,CONCAT71(uStack_5f,local_60) & 0xfffffffffffffffe,1);
  }
  if ((local_90 & 1) != 0) {
    (**(code **)(*plStack_78 + 0x18))
              (plStack_78,local_80,CONCAT71(uStack_8f,local_90) & 0xfffffffffffffffe,1);
  }
  if (((ulong)plStack_b0 & 1) != 0) {
    (**(code **)(*local_98 + 0x18))
              (local_98,pppppppuStack_a0,(ulong)plStack_b0 & 0xfffffffffffffffe,1);
  }
  uVar8 = FUN_00675dd8();
  FUN_0064ef18(&local_b8,"__upcsidn");
  FUN_0064e784(auStack_d0,uVar8,&local_b8);
  FUN_0064eabc(&local_b8);
  uVar8 = FUN_00675dd8();
  FUN_0064ef08(&local_b8,20000);
  FUN_0064e784(auStack_d0,uVar8,&local_b8);
  FUN_0064eabc(&local_b8);
  uVar8 = FUN_00675dd8();
  FUN_0064eef8(&local_b8,1);
  FUN_0064e784(auStack_d0,uVar8,&local_b8);
  FUN_0064eabc(&local_b8);
  uVar8 = FUN_00675dd8();
  FUN_0064ef28(&local_b8,"__upcsidn");
  FUN_0064e784(auStack_d0,uVar8,&local_b8);
  FUN_0064eabc(&local_b8);
  plVar9 = (long *)(**(code **)(*param_2 + 0xc0))(param_2);
  lVar16 = *plVar9;
  uVar8 = FUN_00675ed4();
  FUN_0064f424(&local_b8,lVar16 + 0x10,uVar8);
  pbVar6 = (byte *)(**(code **)(*param_2 + 0x18))(param_2);
  pbVar14 = *(byte **)(pbVar6 + 0x10);
  if ((*pbVar6 & 1) == 0) {
    pbVar14 = pbVar6 + 1;
  }
  FUN_0064f564(auStack_140,&local_b8,pbVar14);
  if (((ulong)local_a8 & 1) != 0) {
    (**(code **)(*(long *)CONCAT71(uStack_8f,local_90) + 0x18))
              ((long *)CONCAT71(uStack_8f,local_90),local_98,(ulong)local_a8 & 0xfffffffffffffffe,1)
    ;
  }
  if (plStack_b0 != (long *)0x0) {
    plVar9 = plStack_b0 + 1;
    do {
      lVar16 = *plVar9;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = lVar16 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar16 == 0) {
      (**(code **)(*plStack_b0 + 0x10))(plStack_b0);
      std::__shared_weak_count::__release_weak();
    }
  }
  plVar9 = (long *)(**(code **)(*param_2 + 0xc0))(param_2);
  FUN_0067d740(auStack_190,*plVar9 + 0x10);
  FUN_0067dda8(auStack_190,auStack_140);
  FUN_0067d95c(auStack_190,auStack_140,auStack_d0);
  FUN_0067dec0(&local_218,auStack_190);
  local_50 = (long **)0x0;
  plStack_48 = (long *)0x0;
  pplVar1 = (long **)(PTR_DAT_04373168 + 0x10);
  plStack_b0 = (long *)(PTR_DAT_04373170 + 0x10);
  local_a8 = &local_a8;
  local_b8 = pplVar1;
  pppppppuStack_a0 = local_a8;
  (**(code **)(*local_218 + 0x10))(local_218,&local_90);
  local_50 = &plStack_b0;
  thunk_FUN_00783af0(&local_b8);
  local_b8 = pplVar1;
  FUN_00782f18(&plStack_b0);
  plVar12 = local_210;
  plVar9 = local_218;
  local_218 = (long *)0x0;
  local_210 = (long *)0x0;
  (**(code **)(*plVar9 + 0x30))(local_208);
  if (plVar12 != (long *)0x0) {
    plVar9 = plVar12 + 1;
    do {
      lVar16 = *plVar9;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = lVar16 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar16 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_210 != (long *)0x0) {
    plVar9 = local_210 + 1;
    do {
      lVar16 = *plVar9;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = lVar16 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar16 == 0) {
      (**(code **)(*local_210 + 0x10))(local_210);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_208[0] != 0) {
    FUN_0066c5e4(param_1,local_208,&DAT_03a4b720);
    lVar16 = local_1b0;
    if (local_1b0 != 0) {
      lVar15 = local_1a8;
      if (local_1a8 != local_1b0) {
        do {
          puVar11 = (undefined8 *)(lVar15 + -0x18);
          lVar10 = lVar15 + -0x20;
          lVar15 = lVar15 + -0x28;
          FUN_0064cd98(lVar10,*puVar11);
        } while (lVar16 != lVar15);
      }
      local_1a8 = lVar16;
      (**(code **)(*plStack_198 + 0x18))(plStack_198,local_1b0,local_1a0 - local_1b0,8);
    }
    if (local_1e0 != '\0') {
      FUN_02767254(auStack_1d8,local_1d0);
    }
    if ((local_200 & 1) != 0) {
      (**(code **)(*plStack_1e8 + 0x18))
                (plStack_1e8,local_1f0,CONCAT71(uStack_1ff,local_200) & 0xfffffffffffffffe,1);
    }
    lVar16 = local_160;
    if (local_160 != 0) {
      lVar15 = local_158;
      if (local_158 != local_160) {
        do {
          lVar15 = lVar15 + -8;
          FUN_0064ef40(lVar15);
        } while (lVar16 != lVar15);
      }
      local_158 = lVar16;
      (**(code **)(*plStack_148 + 0x18))(plStack_148,local_160,local_150 - local_160,8);
    }
    lVar16 = local_180;
    if (local_180 != 0) {
      lVar15 = local_178;
      if (local_178 != local_180) {
        do {
          lVar15 = lVar15 + -8;
          FUN_00680b34(lVar15);
        } while (lVar16 != lVar15);
      }
      local_178 = lVar16;
      (**(code **)(*plStack_168 + 0x18))(plStack_168,local_180,local_170 - local_180,8);
    }
    if (local_188 != (long *)0x0) {
      plVar9 = local_188 + 1;
      do {
        lVar16 = *plVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = lVar16 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar16 == 0) {
        (**(code **)(*local_188 + 0x10))(local_188);
        std::__shared_weak_count::__release_weak();
      }
    }
    if ((local_f0 & 1) != 0) {
      (**(code **)(*plStack_d8 + 0x18))
                (plStack_d8,local_e0,CONCAT71(uStack_ef,local_f0) & 0xfffffffffffffffe,1);
    }
    if ((local_110 & 1) != 0) {
      (**(code **)(*plStack_f8 + 0x18))
                (plStack_f8,local_100,CONCAT71(uStack_10f,local_110) & 0xfffffffffffffffe,1);
    }
    if ((local_130 & 1) != 0) {
      (**(code **)(*plStack_118 + 0x18))
                (plStack_118,local_120,CONCAT71(uStack_12f,local_130) & 0xfffffffffffffffe,1);
    }
    if (local_138 != (long *)0x0) {
      plVar9 = local_138 + 1;
      do {
        lVar16 = *plVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = lVar16 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar16 == 0) {
        (**(code **)(*local_138 + 0x10))(local_138);
        std::__shared_weak_count::__release_weak();
      }
    }
    FUN_0064e894(auStack_d0);
    return;
  }
  puVar11 = (undefined8 *)FUN_00681a00(auStack_1b8);
  plVar9 = (long *)FUN_00681dec(*puVar11);
  __s = (char *)FUN_00675dd8();
  local_b8 = (long **)0x0;
  plStack_b0 = (long *)0x0;
  local_a8 = (undefined8 *******)0x0;
  plVar12 = (long *)FUN_00612290();
  pppppppuStack_a0 = (undefined8 *******)plVar12;
  __n = (long *)strlen(__s);
  if ((long *)0xffffffffffffffef < __n) {
                    /* try { // try from 0066c584 to 0066c58b has its CatchHandler @ 0066c58c */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < (long *)0x17) {
    local_b8 = (long **)CONCAT71(local_b8._1_7_,(char)((int)__n << 1));
    __dest = (undefined8 ******)((ulong)&local_b8 | 1);
    if (__n == (long *)0x0) goto LAB_0066c020;
  }
  else {
    __dest = (undefined8 ******)
             (**(code **)(*plVar12 + 0x10))(plVar12,(ulong)(__n + 2) & 0xfffffffffffffff0,1);
    local_b8 = (long **)((ulong)(__n + 2) & 0xfffffffffffffff0 | 1);
    plStack_b0 = __n;
    local_a8 = (undefined8 *******)__dest;
  }
  memcpy(__dest,__s,(size_t)__n);
LAB_0066c020:
  *(undefined1 *)((long)__dest + (long)__n) = 0;
                    /* try { // try from 0066c024 to 0066c033 has its CatchHandler @ 0066c594 */
  puVar11 = (undefined8 *)FUN_0064e650(plVar9,&local_218,&local_b8);
  p_Var17 = (__tree_node_base *)*puVar11;
  if (p_Var17 == (__tree_node_base *)0x0) {
    p_Var17 = (__tree_node_base *)(**(code **)(*(long *)plVar9[2] + 0x10))((long *)plVar9[2],0x48,8)
    ;
    *(long **)(p_Var17 + 0x28) = plStack_b0;
    *(long ***)(p_Var17 + 0x20) = local_b8;
    *(undefined8 ********)(p_Var17 + 0x38) = pppppppuStack_a0;
    *(undefined8 ********)(p_Var17 + 0x30) = local_a8;
    plStack_b0 = (long *)0x0;
    local_a8 = (undefined8 *******)0x0;
    local_b8 = (long **)0x0;
    FUN_006e48b4(p_Var17 + 0x40);
    *(undefined8 *)p_Var17 = 0;
    *(undefined8 *)(p_Var17 + 8) = 0;
    *(long **)(p_Var17 + 0x10) = local_218;
    *puVar11 = p_Var17;
    if (*(long *)*plVar9 == 0) {
      p_Var13 = p_Var17;
    }
    else {
      *plVar9 = *(long *)*plVar9;
      p_Var13 = (__tree_node_base *)*puVar11;
    }
    std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
              ((__tree_node_base *)plVar9[1],p_Var13);
    plVar9[3] = plVar9[3] + 1;
  }
  local_bc = FUN_006e4d20(p_Var17 + 0x40);
  if (((ulong)local_b8 & 1) != 0) {
    (**(code **)((long)*pppppppuStack_a0 + 0x18))
              (pppppppuStack_a0,local_a8,(ulong)local_b8 & 0xfffffffffffffffe,1);
  }
  lVar16 = local_1b0;
  if (local_1b0 != 0) {
    lVar15 = local_1a8;
    if (local_1a8 != local_1b0) {
      do {
        puVar11 = (undefined8 *)(lVar15 + -0x18);
        lVar10 = lVar15 + -0x20;
        lVar15 = lVar15 + -0x28;
        FUN_0064cd98(lVar10,*puVar11);
      } while (lVar16 != lVar15);
    }
    local_1a8 = lVar16;
    (**(code **)(*plStack_198 + 0x18))(plStack_198,local_1b0,local_1a0 - local_1b0,8);
  }
  if (local_1e0 != '\0') {
    FUN_02767254(auStack_1d8,local_1d0);
  }
  if ((local_200 & 1) != 0) {
    (**(code **)(*plStack_1e8 + 0x18))
              (plStack_1e8,local_1f0,CONCAT71(uStack_1ff,local_200) & 0xfffffffffffffffe,1);
  }
  lVar16 = local_160;
  if (local_160 != 0) {
    lVar15 = local_158;
    if (local_158 != local_160) {
      do {
        lVar15 = lVar15 + -8;
        FUN_0064ef40(lVar15);
      } while (lVar16 != lVar15);
    }
    local_158 = lVar16;
    (**(code **)(*plStack_148 + 0x18))(plStack_148,local_160,local_150 - local_160,8);
  }
  lVar16 = local_180;
  if (local_180 != 0) {
    lVar15 = local_178;
    if (local_178 != local_180) {
      do {
        lVar15 = lVar15 + -8;
        FUN_00680b34(lVar15);
      } while (lVar16 != lVar15);
    }
    local_178 = lVar16;
    (**(code **)(*plStack_168 + 0x18))(plStack_168,local_180,local_170 - local_180,8);
  }
  if (local_188 != (long *)0x0) {
    plVar9 = local_188 + 1;
    do {
      lVar16 = *plVar9;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = lVar16 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar16 == 0) {
      (**(code **)(*local_188 + 0x10))(local_188);
      std::__shared_weak_count::__release_weak();
    }
  }
  if ((local_f0 & 1) != 0) {
    (**(code **)(*plStack_d8 + 0x18))
              (plStack_d8,local_e0,CONCAT71(uStack_ef,local_f0) & 0xfffffffffffffffe,1);
  }
  if ((local_110 & 1) != 0) {
    (**(code **)(*plStack_f8 + 0x18))
              (plStack_f8,local_100,CONCAT71(uStack_10f,local_110) & 0xfffffffffffffffe,1);
  }
  if ((local_130 & 1) != 0) {
    (**(code **)(*plStack_118 + 0x18))
              (plStack_118,local_120,CONCAT71(uStack_12f,local_130) & 0xfffffffffffffffe,1);
  }
  if (local_138 != (long *)0x0) {
    plVar9 = local_138 + 1;
    do {
      lVar16 = *plVar9;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = lVar16 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar16 == 0) {
      (**(code **)(*local_138 + 0x10))(local_138);
      std::__shared_weak_count::__release_weak();
    }
  }
  FUN_0064e894(auStack_d0);
  plStack_b0 = (long *)0x0;
  local_a8 = (undefined8 *******)FUN_00612290();
  pppppppuStack_a0 = (undefined8 *******)0x0;
  local_b8 = &plStack_b0;
  FUN_00674b64(param_1,&local_bc,0,&DAT_03996322,&local_b8);
  FUN_02767254(&local_b8,plStack_b0);
  return;
}


