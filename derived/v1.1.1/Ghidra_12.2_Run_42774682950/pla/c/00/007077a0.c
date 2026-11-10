/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007077a0; name: FUN_007077a0
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_007077a0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *******ppppppplVar4;
  __tree_node_base *p_Var5;
  long lVar6;
  char cVar7;
  bool bVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  __tree_node_base *p_Var13;
  __tree_node_base *p_Var14;
  long lVar15;
  long ******pppppplVar16;
  long lVar17;
  __tree_node_base *p_Var18;
  undefined8 *puVar19;
  long *plVar20;
  __tree_node_base *p_Var21;
  long *plVar22;
  __tree_node_base *local_2b0;
  __tree_node_base *local_2a8;
  undefined8 uStack_2a0;
  long local_298;
  long *local_290;
  long *local_288;
  __tree_node_base *local_280;
  __tree_node_base *local_278;
  undefined8 local_270;
  long local_268;
  __tree_node_base *local_260;
  long *local_258;
  long *******local_250;
  long *******local_248;
  long local_240;
  long *local_238;
  byte local_230;
  undefined7 uStack_22f;
  undefined8 local_220;
  long *plStack_218;
  byte local_208;
  undefined7 uStack_207;
  undefined8 local_1f8;
  long *plStack_1f0;
  long local_1e8;
  __tree_node_base *local_1e0;
  long *local_1d8;
  long *******local_1d0;
  long *******local_1c8;
  long local_1c0;
  long *local_1b8;
  byte local_1b0;
  undefined7 uStack_1af;
  undefined8 local_1a0;
  long *plStack_198;
  byte local_188;
  undefined7 uStack_187;
  undefined8 local_178;
  long *plStack_170;
  long local_168;
  __tree_node_base *local_160;
  long *local_158;
  long *******local_150;
  long *******local_148;
  long local_140;
  long *local_138;
  byte local_130;
  undefined7 uStack_12f;
  undefined8 local_120;
  long *plStack_118;
  byte local_108;
  undefined7 uStack_107;
  undefined8 local_f8;
  long *local_f0;
  long local_e8;
  __tree_node_base *local_e0;
  long *local_d8;
  long *******local_d0;
  long *******local_c8;
  long local_c0;
  long *local_b8;
  byte local_b0;
  undefined7 uStack_af;
  undefined8 local_a0;
  long *local_98;
  byte local_88;
  undefined7 uStack_87;
  long **local_78;
  long *local_70;
  long local_68;
  
  lVar15 = *(long *)(param_1 + 0x128);
  local_278 = (__tree_node_base *)0x0;
  local_270 = FUN_00612290();
  local_268 = 0;
  lVar17 = *(long *)(param_1 + 0xf8);
  lVar6 = *(long *)(param_1 + 0x100);
  local_280 = (__tree_node_base *)&local_278;
  if (lVar17 != lVar6) {
    puVar1 = PTR_DAT_043764d0 + 0x10;
    puVar2 = PTR_DAT_043764d8 + 0x10;
    puVar3 = PTR_DAT_043764e0 + 0x10;
    do {
      local_e0 = (__tree_node_base *)0x2625a00;
      FUN_006118d0(&local_e0);
      p_Var14 = *(__tree_node_base **)(param_1 + 200);
      local_258 = *(long **)(param_1 + 0xd0);
      if (local_258 != (long *)0x0) {
        plVar12 = local_258 + 1;
        do {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar8) {
            *plVar12 = *plVar12 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
      }
      local_250 = *(long ********)(param_1 + 0xd8);
      local_248 = *(long ********)(param_1 + 0xe0);
      if (local_248 != (long *******)0x0) {
        ppppppplVar4 = local_248 + 1;
        do {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(ppppppplVar4,0x10);
          if (bVar8) {
            *ppppppplVar4 = (long ******)((long)*ppppppplVar4 + 1);
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
      }
      local_240 = *(long *)(param_1 + 0xe8);
      local_238 = *(long **)(param_1 + 0xf0);
      if (local_238 != (long *)0x0) {
        plVar12 = local_238 + 1;
        do {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar8) {
            *plVar12 = *plVar12 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
      }
                    /* try { // try from 007078f4 to 007078ff has its CatchHandler @ 00708770 */
      local_260 = p_Var14;
      FUN_007070bc(&local_230,lVar17);
      local_1e8 = 5;
      plVar20 = *(long **)(p_Var14 + 0x198);
      puVar19 = *(undefined8 **)(p_Var14 + 0x348);
      plVar9 = (long *)(**(code **)(*plVar20 + 0x10))(plVar20,0x88,8);
      plVar9[2] = 0;
      plVar9[3] = (long)plVar20;
      plVar12 = plVar9 + 4;
      plVar10 = plVar9 + 1;
      *plVar10 = 0;
      *plVar9 = (long)puVar1;
      FUN_00782ef8(plVar12);
      plVar9[4] = (long)puVar2;
      nn::os::InitializeEvent(plVar9 + 6,0,0);
      plVar9[4] = (long)puVar3;
      nn::os::InitializeMutex((MutexType *)(plVar9 + 0xb),false,0);
      *(undefined1 *)(plVar9 + 0x10) = 0;
      if (plVar9 != (long *)0x0) {
        do {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar8) {
            *plVar10 = *plVar10 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
      }
      plVar10 = (long *)(**(code **)(*plVar20 + 0x10))(plVar20,0x1c0,8);
      plVar10[2] = 0;
      plVar10[3] = (long)plVar20;
      plVar22 = plVar10 + 1;
      *plVar22 = 0;
      *plVar10 = (long)&PTR_LAB_0419f0c8;
      FUN_007840dc((__tree_node_base *)(plVar10 + 4));
      plVar10[4] = (long)&PTR_LAB_0419f118;
      lVar11 = (**(code **)(*plVar20 + 0x10))(plVar20,0x10000,0x10);
      if (lVar11 == 0) {
        local_e0 = (__tree_node_base *)CONCAT44(local_e0._4_4_,0x220);
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0,(Result *)&local_e0,"");
      }
      FUN_00782cfc(plVar10 + 10,plVar12,0,lVar11,0x10000,1);
      plVar10[10] = (long)&PTR_LAB_0419f160;
      plVar10[0x33] = (long)plVar20;
      plVar10[0x34] = 0x10000;
      *(undefined1 *)((long)plVar10 + 0x1b9) = 1;
      plVar10[0x35] = (long)plVar12;
      plVar10[0x36] = (long)plVar9;
      local_1e0 = local_260;
      local_1d8 = local_258;
      if (local_258 != (long *)0x0) {
        plVar20 = local_258 + 1;
        do {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar8) {
            *plVar20 = *plVar20 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
      }
      local_1d0 = local_250;
      local_1c8 = local_248;
      if (local_248 != (long *******)0x0) {
        ppppppplVar4 = local_248 + 1;
        do {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(ppppppplVar4,0x10);
          if (bVar8) {
            *ppppppplVar4 = (long ******)((long)*ppppppplVar4 + 1);
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
      }
      local_1c0 = local_240;
      local_1b8 = local_238;
      if (local_238 != (long *)0x0) {
        plVar20 = local_238 + 1;
        do {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar8) {
            *plVar20 = *plVar20 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
      }
                    /* try { // try from 00707aa0 to 00707aa7 has its CatchHandler @ 007086ac */
      FUN_007070bc(&local_1b0,&local_230);
      local_168 = local_1e8;
      local_160 = local_1e0;
      local_158 = local_1d8;
      if (local_1d8 != (long *)0x0) {
        plVar20 = local_1d8 + 1;
        do {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar8) {
            *plVar20 = *plVar20 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
      }
      local_150 = local_1d0;
      local_148 = local_1c8;
      if (local_1c8 != (long *******)0x0) {
        ppppppplVar4 = local_1c8 + 1;
        do {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(ppppppplVar4,0x10);
          if (bVar8) {
            *ppppppplVar4 = (long ******)((long)*ppppppplVar4 + 1);
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
      }
      local_140 = local_1c0;
      local_138 = local_1b8;
      if (local_1b8 != (long *)0x0) {
        plVar20 = local_1b8 + 1;
        do {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar8) {
            *plVar20 = *plVar20 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
      }
                    /* try { // try from 00707b10 to 00707b17 has its CatchHandler @ 007085f8 */
      FUN_007070bc(&local_130,&local_1b0);
      local_e8 = local_168;
      local_e0 = local_160;
      local_d8 = local_158;
      if (local_158 != (long *)0x0) {
        plVar20 = local_158 + 1;
        do {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar8) {
            *plVar20 = *plVar20 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
      }
      local_d0 = local_150;
      local_c8 = local_148;
      if (local_148 != (long *******)0x0) {
        ppppppplVar4 = local_148 + 1;
        do {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(ppppppplVar4,0x10);
          if (bVar8) {
            *ppppppplVar4 = (long ******)((long)*ppppppplVar4 + 1);
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
      }
      local_c0 = local_140;
      local_b8 = local_138;
      if (local_138 != (long *)0x0) {
        plVar20 = local_138 + 1;
        do {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar8) {
            *plVar20 = *plVar20 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
      }
                    /* try { // try from 00707b8c to 00707b97 has its CatchHandler @ 00708564 */
      FUN_007070bc(&local_b0,&local_130);
      local_68 = local_e8;
      plVar10[0x23] = (long)local_e0;
      plVar10[0x24] = (long)local_d8;
      if (local_d8 != (long *)0x0) {
        plVar20 = local_d8 + 1;
        do {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar8) {
            *plVar20 = *plVar20 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
      }
      plVar10[0x25] = (long)local_d0;
      plVar10[0x26] = (long)local_c8;
      if (local_c8 != (long *******)0x0) {
        ppppppplVar4 = local_c8 + 1;
        do {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(ppppppplVar4,0x10);
          if (bVar8) {
            *ppppppplVar4 = (long ******)((long)*ppppppplVar4 + 1);
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
      }
      plVar10[0x27] = local_c0;
      plVar10[0x28] = (long)local_b8;
      if (local_b8 != (long *)0x0) {
        plVar20 = local_b8 + 1;
        do {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar8) {
            *plVar20 = *plVar20 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
      }
                    /* try { // try from 00707c1c to 00707c23 has its CatchHandler @ 007084d0 */
      FUN_007070bc(plVar10 + 0x29,&local_b0);
      plVar10[0x32] = local_68;
      if ((local_88 & 1) != 0) {
        (**(code **)(*local_70 + 0x18))
                  (local_70,local_78,CONCAT71(uStack_87,local_88) & 0xfffffffffffffffe,1);
      }
      if ((local_b0 & 1) != 0) {
        (**(code **)(*local_98 + 0x18))
                  (local_98,local_a0,CONCAT71(uStack_af,local_b0) & 0xfffffffffffffffe,1);
      }
      if (local_b8 != (long *)0x0) {
        plVar20 = (long *)((long)local_b8 + 8);
        do {
          lVar11 = *plVar20;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar8) {
            *plVar20 = lVar11 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*local_b8 + 0x10))(local_b8);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (local_c8 != (long *******)0x0) {
        ppppppplVar4 = (long *******)((long)local_c8 + 8);
        do {
          pppppplVar16 = *ppppppplVar4;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(ppppppplVar4,0x10);
          if (bVar8) {
            *ppppppplVar4 = (long ******)((long)pppppplVar16 + -1);
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (pppppplVar16 == (long ******)0x0) {
          (*(code *)(*local_c8)[2])(local_c8);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (local_d8 != (long *)0x0) {
        plVar20 = (long *)((long)local_d8 + 8);
        do {
          lVar11 = *plVar20;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar8) {
            *plVar20 = lVar11 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*local_d8 + 0x10))(local_d8);
          std::__shared_weak_count::__release_weak();
        }
      }
      if ((local_108 & 1) != 0) {
        (**(code **)(*local_f0 + 0x18))
                  (local_f0,local_f8,CONCAT71(uStack_107,local_108) & 0xfffffffffffffffe,1);
      }
      if ((local_130 & 1) != 0) {
        (**(code **)(*plStack_118 + 0x18))
                  (plStack_118,local_120,CONCAT71(uStack_12f,local_130) & 0xfffffffffffffffe,1);
      }
      if (local_138 != (long *)0x0) {
        plVar20 = (long *)((long)local_138 + 8);
        do {
          lVar11 = *plVar20;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar8) {
            *plVar20 = lVar11 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*local_138 + 0x10))(local_138);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (local_148 != (long *******)0x0) {
        ppppppplVar4 = (long *******)((long)local_148 + 8);
        do {
          pppppplVar16 = *ppppppplVar4;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(ppppppplVar4,0x10);
          if (bVar8) {
            *ppppppplVar4 = (long ******)((long)pppppplVar16 + -1);
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (pppppplVar16 == (long ******)0x0) {
          (*(code *)(*local_148)[2])(local_148);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (local_158 != (long *)0x0) {
        plVar20 = (long *)((long)local_158 + 8);
        do {
          lVar11 = *plVar20;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar8) {
            *plVar20 = lVar11 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*local_158 + 0x10))(local_158);
          std::__shared_weak_count::__release_weak();
        }
      }
      if ((local_188 & 1) != 0) {
        (**(code **)(*plStack_170 + 0x18))
                  (plStack_170,local_178,CONCAT71(uStack_187,local_188) & 0xfffffffffffffffe,1);
      }
      if ((local_1b0 & 1) != 0) {
        (**(code **)(*plStack_198 + 0x18))
                  (plStack_198,local_1a0,CONCAT71(uStack_1af,local_1b0) & 0xfffffffffffffffe,1);
      }
      if (local_1b8 != (long *)0x0) {
        plVar20 = (long *)((long)local_1b8 + 8);
        do {
          lVar11 = *plVar20;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar8) {
            *plVar20 = lVar11 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*local_1b8 + 0x10))(local_1b8);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (local_1c8 != (long *******)0x0) {
        ppppppplVar4 = local_1c8 + 1;
        do {
          pppppplVar16 = *ppppppplVar4;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(ppppppplVar4,0x10);
          if (bVar8) {
            *ppppppplVar4 = (long ******)((long)pppppplVar16 + -1);
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (pppppplVar16 == (long ******)0x0) {
          (*(code *)(*local_1c8)[2])(local_1c8);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (local_1d8 != (long *)0x0) {
        plVar20 = local_1d8 + 1;
        do {
          lVar11 = *plVar20;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar8) {
            *plVar20 = lVar11 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*local_1d8 + 0x10))(local_1d8);
          std::__shared_weak_count::__release_weak();
        }
      }
      local_160 = (__tree_node_base *)0x0;
      local_158 = (long *)0x0;
      do {
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar22,0x10);
        if (bVar8) {
          *plVar22 = *plVar22 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      local_e0 = (__tree_node_base *)(plVar10 + 4);
      local_d8 = plVar10;
      (**(code **)*puVar19)(puVar19,&local_e0,&local_160);
      if (local_d8 != (long *)0x0) {
        plVar20 = local_d8 + 1;
        do {
          lVar11 = *plVar20;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar8) {
            *plVar20 = lVar11 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*local_d8 + 0x10))(local_d8);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (local_158 != (long *)0x0) {
        plVar20 = local_158 + 1;
        do {
          lVar11 = *plVar20;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar8) {
            *plVar20 = lVar11 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*local_158 + 0x10))(local_158);
          std::__shared_weak_count::__release_weak();
        }
      }
      do {
        lVar11 = *plVar22;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar22,0x10);
        if (bVar8) {
          *plVar22 = lVar11 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      local_290 = plVar12;
      local_288 = plVar9;
      if (lVar11 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
        std::__shared_weak_count::__release_weak();
      }
      if ((local_208 & 1) != 0) {
        (**(code **)(*plStack_1f0 + 0x18))
                  (plStack_1f0,local_1f8,CONCAT71(uStack_207,local_208) & 0xfffffffffffffffe,1);
      }
      if ((local_230 & 1) != 0) {
        (**(code **)(*plStack_218 + 0x18))
                  (plStack_218,local_220,CONCAT71(uStack_22f,local_230) & 0xfffffffffffffffe,1);
      }
      if (local_238 != (long *)0x0) {
        plVar12 = (long *)((long)local_238 + 8);
        do {
          lVar11 = *plVar12;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar8) {
            *plVar12 = lVar11 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*local_238 + 0x10))(local_238);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (local_248 != (long *******)0x0) {
        ppppppplVar4 = local_248 + 1;
        do {
          pppppplVar16 = *ppppppplVar4;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(ppppppplVar4,0x10);
          if (bVar8) {
            *ppppppplVar4 = (long ******)((long)pppppplVar16 + -1);
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (pppppplVar16 == (long ******)0x0) {
          (*(code *)(*local_248)[2])(local_248);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (local_258 != (long *)0x0) {
        plVar12 = local_258 + 1;
        do {
          lVar11 = *plVar12;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar8) {
            *plVar12 = lVar11 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*local_258 + 0x10))(local_258);
          std::__shared_weak_count::__release_weak();
        }
      }
                    /* try { // try from 007081a8 to 007081e3 has its CatchHandler @ 007087a8 */
      plVar12 = (long *)FUN_00708868(&local_280,&local_160,lVar17 + 0x28);
      if (*plVar12 == 0) {
        FUN_00708984(&local_e0,&local_280,lVar17 + 0x28,&local_290);
        *(__tree_node_base **)(local_e0 + 0x10) = local_160;
        *(undefined8 *)local_e0 = 0;
        *(undefined8 *)(local_e0 + 8) = 0;
        *plVar12 = (long)local_e0;
        p_Var14 = local_e0;
        if (*(__tree_node_base **)local_280 != (__tree_node_base *)0x0) {
          p_Var14 = (__tree_node_base *)*plVar12;
          local_280 = *(__tree_node_base **)local_280;
        }
        std::__tree_balance_after_insert<std::__tree_node_base<void*>*>(local_278,p_Var14);
        local_268 = local_268 + 1;
      }
      if (local_288 != (long *)0x0) {
        plVar12 = local_288 + 1;
        do {
          lVar11 = *plVar12;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar8) {
            *plVar12 = lVar11 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*local_288 + 0x10))(local_288);
          std::__shared_weak_count::__release_weak();
        }
      }
      lVar17 = lVar17 + 0x48;
    } while (lVar17 != lVar6);
  }
  local_2a8 = (__tree_node_base *)0x0;
  uStack_2a0 = FUN_00612290();
  local_298 = 0;
  local_2b0 = (__tree_node_base *)&local_2a8;
  if (local_280 != (__tree_node_base *)&local_278) {
    p_Var14 = (__tree_node_base *)(PTR_DAT_04373168 + 0x10);
    plVar12 = (long *)(PTR_DAT_04373170 + 0x10);
    p_Var21 = local_280;
    do {
      local_78 = (long **)0x0;
      local_70 = (long *)0x0;
      local_e0 = p_Var14;
      local_d8 = plVar12;
      local_d0 = (long *******)&local_d0;
      local_c8 = (long *******)&local_d0;
      (**(code **)(*(long *)*(__tree_node_base **)(p_Var21 + 0x40) + 0x10))
                (*(__tree_node_base **)(p_Var21 + 0x40),&local_b8);
      local_78 = &local_d8;
      thunk_FUN_00783af0(&local_e0);
      local_e0 = p_Var14;
      FUN_00782f18(&local_d8);
      p_Var13 = *(__tree_node_base **)(p_Var21 + 0x40);
      p_Var18 = *(__tree_node_base **)(p_Var21 + 0x48);
      *(__tree_node_base **)(p_Var21 + 0x40) = (__tree_node_base *)0x0;
      *(__tree_node_base **)(p_Var21 + 0x48) = (__tree_node_base *)0x0;
      p_Var13 = (__tree_node_base *)(**(code **)(*(long *)p_Var13 + 0x30))();
      if (p_Var18 != (__tree_node_base *)0x0) {
        p_Var5 = p_Var18 + 8;
        do {
          lVar17 = *(long *)p_Var5;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(p_Var5,0x10);
          if (bVar8) {
            *(long *)p_Var5 = lVar17 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (lVar17 == 0) {
          (**(code **)(*(long *)p_Var18 + 0x10))(p_Var18);
          std::__shared_weak_count::__release_weak();
        }
      }
                    /* try { // try from 00708358 to 00708393 has its CatchHandler @ 00708794 */
      local_1e0 = p_Var13;
      plVar9 = (long *)FUN_006ee0a4(&local_2b0,&local_160,p_Var21 + 0x20);
      if (*plVar9 == 0) {
        FUN_0070d5c4(&local_e0,&local_2b0,p_Var21 + 0x20,&local_1e0);
        *(__tree_node_base **)(local_e0 + 0x10) = local_160;
        *(undefined8 *)local_e0 = 0;
        *(undefined8 *)(local_e0 + 8) = 0;
        *plVar9 = (long)local_e0;
        p_Var13 = local_e0;
        if (*(__tree_node_base **)local_2b0 != (__tree_node_base *)0x0) {
          p_Var13 = (__tree_node_base *)*plVar9;
          local_2b0 = *(__tree_node_base **)local_2b0;
        }
        std::__tree_balance_after_insert<std::__tree_node_base<void*>*>(local_2a8,p_Var13);
        local_298 = local_298 + 1;
        p_Var13 = *(__tree_node_base **)(p_Var21 + 8);
        if (*(__tree_node_base **)(p_Var21 + 8) != (__tree_node_base *)0x0) goto LAB_007083d8;
LAB_007083e8:
        p_Var13 = p_Var21 + 0x10;
        p_Var18 = *(__tree_node_base **)p_Var13;
        if (*(__tree_node_base **)p_Var18 != p_Var21) {
          do {
            lVar17 = *(long *)p_Var13;
            p_Var13 = (__tree_node_base *)(lVar17 + 0x10);
            p_Var18 = *(__tree_node_base **)p_Var13;
          } while (*(long *)p_Var18 != lVar17);
        }
      }
      else {
        p_Var13 = *(__tree_node_base **)(p_Var21 + 8);
        if (*(__tree_node_base **)(p_Var21 + 8) == (__tree_node_base *)0x0) goto LAB_007083e8;
LAB_007083d8:
        do {
          p_Var18 = p_Var13;
          p_Var13 = *(__tree_node_base **)p_Var18;
        } while (*(__tree_node_base **)p_Var18 != (__tree_node_base *)0x0);
      }
      p_Var21 = p_Var18;
    } while (p_Var18 != (__tree_node_base *)&local_278);
  }
  FUN_0070d700(&local_280,local_278);
  nn::os::LockMutex((MutexType *)(lVar15 + 0x38));
  *(__tree_node_base **)(lVar15 + 0x58) = local_2b0;
  *(undefined8 *)(lVar15 + 0x68) = uStack_2a0;
  *(__tree_node_base **)(lVar15 + 0x60) = local_2a8;
  plVar12 = (long *)(lVar15 + 0x60);
  *(long *)(lVar15 + 0x70) = local_298;
  if (local_298 == 0) {
    *(long **)(lVar15 + 0x58) = plVar12;
  }
  else {
    *(long **)(*plVar12 + 0x10) = plVar12;
    local_298 = 0;
    local_2a8 = (__tree_node_base *)0x0;
    local_2b0 = (__tree_node_base *)&local_2a8;
  }
  *(undefined1 *)(lVar15 + 0x78) = 1;
  nn::os::UnlockMutex((MutexType *)(lVar15 + 0x38));
  FUN_02cd5c94(&local_2b0,local_2a8);
  return 1;
}


