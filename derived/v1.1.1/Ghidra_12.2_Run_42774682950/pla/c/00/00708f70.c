/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00708f70; name: FUN_00708f70
 */


/* WARNING: Removing unreachable block (ram,0x0070a0fc) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_00708f70(long param_1)

{
  uint uVar1;
  long ****pppplVar2;
  long *plVar3;
  undefined *puVar4;
  long *plVar5;
  long *plVar6;
  undefined2 uVar7;
  char cVar8;
  bool bVar9;
  long *plVar10;
  long ******pppppplVar11;
  long ******pppppplVar12;
  long *******ppppppplVar13;
  bool bVar14;
  long *****ppppplVar15;
  long *plVar16;
  long lVar17;
  undefined8 uVar18;
  long ***ppplVar19;
  long lVar20;
  long lVar21;
  undefined8 *puVar22;
  ulong uVar23;
  long lVar24;
  long ******pppppplVar25;
  long ******pppppplVar26;
  long ****pppplVar27;
  long ****pppplVar28;
  ulong uVar29;
  long ****pppplVar30;
  long ******pppppplVar31;
  ulong uVar32;
  long ******pppppplVar33;
  long lVar34;
  long *plVar35;
  long *plVar36;
  long *****ppppplVar37;
  long *****ppppplVar38;
  long *****ppppplStack_2c0;
  undefined4 uStack_2b8;
  undefined4 local_2b4;
  undefined4 uStack_2b0;
  undefined8 uStack_2ac;
  undefined4 local_298 [2];
  long *****local_290;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined4 local_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  long *****local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined4 local_258;
  undefined4 uStack_254;
  byte local_250;
  undefined7 uStack_24f;
  undefined8 local_240;
  long *plStack_238;
  long *local_200;
  long *local_1f8;
  long *****local_1f0;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  long *****local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined1 auStack_198 [56];
  undefined8 local_160;
  undefined8 *local_158;
  undefined8 uStack_150;
  undefined8 local_f0;
  long *local_e8;
  long ******local_d8;
  long ******local_d0;
  long *******local_c8;
  long *******ppppppplStack_c0;
  ulong local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  long *plStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long ******local_70;
  undefined8 local_68;
  
  lVar34 = *(long *)(param_1 + 0x158);
  if (*(int *)(param_1 + 0x11c) == 1) {
    FUN_007827b4(&ppppplStack_2c0);
    if ((*(byte *)(param_1 + 0xf8) & 1) == 0) {
      lVar24 = param_1 + 0xf9;
    }
    else {
      lVar24 = *(long *)(param_1 + 0x108);
    }
    lVar20 = *(long *)(param_1 + 200);
    uVar7 = *(undefined2 *)(param_1 + 0x118);
    local_1c0 = *(long ******)(lVar20 + 0x198);
    local_d0 = (long ******)0x1;
    ppppppplStack_c0 = *(long ********)(lVar20 + 0x130);
    local_c8 = *(long ********)(lVar20 + 0x128);
    uStack_b0 = *(undefined8 *)(lVar20 + 0x140);
    local_b8 = *(ulong *)(lVar20 + 0x138);
    plStack_a0 = *(long **)(lVar20 + 0x150);
    local_a8 = *(undefined8 *)(lVar20 + 0x148);
    uStack_90 = *(undefined8 *)(lVar20 + 0x160);
    uStack_98 = *(undefined8 *)(lVar20 + 0x158);
    local_d8 = (long ******)local_1c0;
    FUN_006172f4(&uStack_1b8,&local_d8);
    local_e8 = (long *)0x0;
    local_f0 = 0;
    FUN_0061c7b0(&local_290,uVar7);
    uVar32 = (ulong)&local_290 | 1;
    if (((ulong)local_290 & 1) != 0) {
      uVar32 = CONCAT44(uStack_27c,local_280);
    }
    local_298[0] = 2;
    FUN_0070a414(&local_270,lVar24,uVar32,0,local_298);
                    /* try { // try from 0070904c to 00709057 has its CatchHandler @ 0070a3a0 */
    FUN_0070a7d0(&local_d8,&local_270);
    FUN_0070a650(&local_200,&local_d8,local_1c0,local_160);
    if ((local_b8 & 1) != 0) {
      (**(code **)(*plStack_a0 + 0x18))(plStack_a0,local_a8,local_b8 & 0xfffffffffffffffe,1);
    }
    if (((ulong)local_d8 & 1) != 0) {
      (**(code **)((long)*ppppppplStack_c0 + 0x18))
                (ppppppplStack_c0,local_c8,(ulong)local_d8 & 0xfffffffffffffffe,1);
    }
    local_68 = 0;
    local_70 = (long ******)0x0;
    ppppplVar15 = (long *****)(PTR_DAT_04373168 + 0x10);
    local_d0 = (long ******)(PTR_DAT_04373170 + 0x10);
    local_c8 = (long *******)&local_c8;
    local_d8 = (long ******)ppppplVar15;
    ppppppplStack_c0 = local_c8;
    (**(code **)(*local_200 + 0x10))(local_200,&uStack_b0);
    local_70 = (long ******)&local_d0;
    thunk_FUN_00783af0(&local_d8);
    local_d8 = (long ******)ppppplVar15;
    FUN_00782f18(&local_d0);
    plVar6 = local_1f8;
    plVar5 = local_200;
    local_200 = (long *)0x0;
    local_1f8 = (long *)0x0;
    (**(code **)(*plVar5 + 0x30))(&local_1f0);
    if (plVar6 != (long *)0x0) {
      plVar5 = plVar6 + 1;
      do {
        lVar24 = *plVar5;
        cVar8 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar14) {
          *plVar5 = lVar24 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (lVar24 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        std::__shared_weak_count::__release_weak();
      }
    }
    if (local_1f8 != (long *)0x0) {
      plVar5 = local_1f8 + 1;
      do {
        lVar24 = *plVar5;
        cVar8 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar14) {
          *plVar5 = lVar24 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (lVar24 == 0) {
        (**(code **)(*local_1f8 + 0x10))(local_1f8);
        std::__shared_weak_count::__release_weak();
      }
    }
    if ((local_250 & 1) != 0) {
      (**(code **)(*plStack_238 + 0x18))
                (plStack_238,local_240,CONCAT71(uStack_24f,local_250) & 0xfffffffffffffffe,1);
    }
    if (((ulong)local_270 & 1) != 0) {
      (**(code **)(*(long *)CONCAT44(uStack_254,local_258) + 0x18))
                ((long *)CONCAT44(uStack_254,local_258),
                 CONCAT44(local_260._4_4_,(undefined4)local_260),
                 (ulong)local_270 & 0xfffffffffffffffe,1);
    }
    if (((ulong)local_290 & 1) != 0) {
      (**(code **)(*(long *)CONCAT44(uStack_274,uStack_278) + 0x18))
                ((long *)CONCAT44(uStack_274,uStack_278),CONCAT44(uStack_27c,local_280),
                 (ulong)local_290 & 0xfffffffffffffffe,1);
    }
    ppppppplStack_c0 = (long *******)FUN_00612290();
    lVar24 = CONCAT44(uStack_1e4,uStack_1e8) - (long)local_1f0;
    local_d0 = (long ******)0x0;
    local_d8 = (long ******)0x0;
    local_c8 = (long *******)0x0;
    if (lVar24 == 0) {
      bVar14 = false;
    }
    else {
      if (0x924924924924924 < (ulong)((lVar24 >> 2) * 0x6db6db6db6db6db7)) {
                    /* try { // try from 0070a24c to 0070a253 has its CatchHandler @ 0070a254 */
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      local_d8 = (long ******)
                 (**(code **)((long)*ppppppplStack_c0 + 0x10))(ppppppplStack_c0,lVar24,4);
      local_c8 = (long *******)((long)local_d8 + (lVar24 >> 2) * 4);
      ppppplVar15 = local_1f0;
      local_d0 = local_d8;
      if (local_1f0 == (long *****)CONCAT44(uStack_1e4,uStack_1e8)) {
        bVar14 = false;
        if (local_d8 == (long ******)0x0) goto joined_r0x00709300;
      }
      else {
        do {
          ppppplVar38 = (long *****)ppppplVar15[1];
          ppppplVar37 = (long *****)*ppppplVar15;
          puVar22 = (undefined8 *)((long)ppppplVar15 + 0x14);
          uVar18 = *(undefined8 *)((long)ppppplVar15 + 0xc);
          ppppplVar15 = (long *****)((long)ppppplVar15 + 0x1c);
          *(undefined8 *)((long)local_d0 + 0x14) = *puVar22;
          *(undefined8 *)((long)local_d0 + 0xc) = uVar18;
          local_d0[1] = ppppplVar38;
          *local_d0 = ppppplVar37;
          local_d0 = (long ******)((long)local_d0 + 0x1c);
        } while ((long *****)CONCAT44(uStack_1e4,uStack_1e8) != ppppplVar15);
        if (local_d8 == local_d0) {
          bVar14 = false;
        }
        else {
          ppppplStack_2c0 = *local_d8;
          bVar14 = true;
          uStack_2ac = *(undefined8 *)((long)local_d8 + 0x14);
          uStack_2b0 = (undefined4)((ulong)*(undefined8 *)((long)local_d8 + 0xc) >> 0x20);
          uStack_2b8 = SUB84(local_d8[1],0);
          local_2b4 = (undefined4)((ulong)local_d8[1] >> 0x20);
          local_d0 = local_d8;
        }
      }
      (**(code **)((long)*ppppppplStack_c0 + 0x18))
                (ppppppplStack_c0,local_d0,(long)local_c8 - (long)local_d0,4);
    }
joined_r0x00709300:
    if (local_1f0 != (long *****)0x0) {
      uStack_1e8 = SUB84(local_1f0,0);
      uStack_1e4 = (undefined4)((ulong)local_1f0 >> 0x20);
      (**(code **)(*(long *)CONCAT44(uStack_1d4,uStack_1d8) + 0x18))
                ((long *)CONCAT44(uStack_1d4,uStack_1d8),local_1f0,
                 CONCAT44(uStack_1dc,local_1e0) - (long)local_1f0,4);
    }
    if (local_e8 == (long *)0x0) {
LAB_00709384:
      FUN_00617798(&uStack_1b8);
    }
    else {
      plVar5 = local_e8 + 1;
      do {
        lVar24 = *plVar5;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar9) {
          *plVar5 = lVar24 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (lVar24 != 0) goto LAB_00709384;
      (**(code **)(*local_e8 + 0x10))(local_e8);
      std::__shared_weak_count::__release_weak();
      FUN_00617798(&uStack_1b8);
    }
    if (bVar14) {
      local_c8 = (long *******)0x0;
      local_d0 = (long ******)0x0;
      local_d8 = (long ******)0x0;
      ppppppplStack_c0 = (long *******)FUN_00612290();
      if (*(long *)(param_1 + 0x140) != 0) {
        pppplVar28 = (long ****)(PTR_DAT_043764d0 + 0x10);
        pppplVar27 = (long ****)(PTR_DAT_043764d8 + 0x10);
        uVar32 = 0;
        pppplVar2 = (long ****)(PTR_DAT_043764e0 + 0x10);
        do {
          local_1c0 = (long *****)0x5f5e100;
          FUN_006118d0(&local_1c0);
          lVar24 = *(long *)(param_1 + 200);
          plVar5 = *(long **)(param_1 + 0xd0);
          if (plVar5 != (long *)0x0) {
            plVar6 = plVar5 + 1;
            do {
              cVar8 = '\x01';
              bVar14 = (bool)ExclusiveMonitorPass(plVar6,0x10);
              if (bVar14) {
                *plVar6 = *plVar6 + 1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
          }
          lVar20 = *(long *)(param_1 + 0xd8);
          plVar6 = *(long **)(param_1 + 0xe0);
          if (plVar6 != (long *)0x0) {
            plVar35 = plVar6 + 1;
            do {
              cVar8 = '\x01';
              bVar14 = (bool)ExclusiveMonitorPass(plVar35,0x10);
              if (bVar14) {
                *plVar35 = *plVar35 + 1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
          }
          lVar21 = *(long *)(param_1 + 0xe8);
          plVar35 = *(long **)(param_1 + 0xf0);
          if (plVar35 != (long *)0x0) {
            plVar16 = plVar35 + 1;
            do {
              cVar8 = '\x01';
              bVar14 = (bool)ExclusiveMonitorPass(plVar16,0x10);
              if (bVar14) {
                *plVar16 = *plVar16 + 1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
          }
          uStack_288 = uStack_2b8;
          local_290 = ppppplStack_2c0;
          uStack_27c = (undefined4)uStack_2ac;
          uStack_278 = (undefined4)((ulong)uStack_2ac >> 0x20);
          uStack_284 = local_2b4;
          local_280 = uStack_2b0;
          pppplVar30 = *(long *****)(lVar24 + 0x198);
          puVar22 = *(undefined8 **)(lVar24 + 0x348);
          ppppplVar15 = (long *****)(*(code *)(*pppplVar30)[2])(pppplVar30,0x88,8);
          ppppplVar15[2] = (long ****)0x0;
          ppppplVar38 = ppppplVar15 + 1;
          *ppppplVar38 = (long ****)0x0;
          ppppplVar37 = ppppplVar15 + 4;
          *ppppplVar15 = pppplVar28;
          ppppplVar15[3] = pppplVar30;
          FUN_00782ef8();
          ppppplVar15[4] = pppplVar27;
          nn::os::InitializeEvent(ppppplVar15 + 6,0,0);
          ppppplVar15[4] = pppplVar2;
          nn::os::InitializeMutex((MutexType *)(ppppplVar15 + 0xb),false,0);
          *(undefined1 *)(ppppplVar15 + 0x10) = 0;
          if (ppppplVar15 != (long *****)0x0) {
            do {
              cVar8 = '\x01';
              bVar14 = (bool)ExclusiveMonitorPass(ppppplVar38,0x10);
              if (bVar14) {
                *ppppplVar38 = (long ****)((long)*ppppplVar38 + 1);
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
          }
          plVar16 = (long *)(*(code *)(*pppplVar30)[2])(pppplVar30,400,8);
          plVar16[2] = 0;
          plVar16[3] = (long)pppplVar30;
          plVar36 = plVar16 + 1;
          *plVar36 = 0;
          *plVar16 = (long)&PTR_LAB_0419f3a8;
          FUN_007840dc(plVar16 + 4);
          plVar16[4] = (long)&PTR_LAB_0419f3f8;
          lVar17 = (*(code *)(*pppplVar30)[2])(pppplVar30,0x10000,0x10);
          if (lVar17 == 0) {
            local_1c0 = (long *****)CONCAT44(local_1c0._4_4_,0x220);
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl("","","",0,(Result *)&local_1c0,"");
          }
          FUN_00782cfc(plVar16 + 10,ppppplVar37,0,lVar17,0x10000,1);
          plVar16[10] = (long)&PTR_LAB_0419f440;
          plVar16[0x2d] = (long)pppplVar30;
          plVar16[0x2e] = 0x10000;
          *(undefined1 *)((long)plVar16 + 0x189) = 1;
          plVar16[0x2f] = (long)ppppplVar37;
          plVar16[0x30] = (long)ppppplVar15;
          if (plVar5 != (long *)0x0) {
            plVar10 = plVar5 + 1;
            do {
              cVar8 = '\x01';
              bVar14 = (bool)ExclusiveMonitorPass(plVar10,0x10);
              if (bVar14) {
                *plVar10 = *plVar10 + 1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
          }
          if (plVar6 != (long *)0x0) {
            plVar10 = plVar6 + 1;
            do {
              cVar8 = '\x01';
              bVar14 = (bool)ExclusiveMonitorPass(plVar10,0x10);
              if (bVar14) {
                *plVar10 = *plVar10 + 1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
          }
          if (plVar35 != (long *)0x0) {
            plVar10 = plVar35 + 1;
            do {
              cVar8 = '\x01';
              bVar14 = (bool)ExclusiveMonitorPass(plVar10,0x10);
              if (bVar14) {
                *plVar10 = *plVar10 + 1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
          }
          uStack_1e8 = uStack_288;
          local_1f0 = local_290;
          uStack_1dc = uStack_27c;
          uStack_1d8 = uStack_278;
          uStack_1e4 = uStack_284;
          local_1e0 = local_280;
          if (plVar5 != (long *)0x0) {
            plVar10 = plVar5 + 1;
            do {
              cVar8 = '\x01';
              bVar14 = (bool)ExclusiveMonitorPass(plVar10,0x10);
              if (bVar14) {
                *plVar10 = *plVar10 + 1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
          }
          if (plVar6 != (long *)0x0) {
            plVar10 = plVar6 + 1;
            do {
              cVar8 = '\x01';
              bVar14 = (bool)ExclusiveMonitorPass(plVar10,0x10);
              if (bVar14) {
                *plVar10 = *plVar10 + 1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
          }
          if (plVar35 != (long *)0x0) {
            plVar10 = plVar35 + 1;
            do {
              cVar8 = '\x01';
              bVar14 = (bool)ExclusiveMonitorPass(plVar10,0x10);
              if (bVar14) {
                *plVar10 = *plVar10 + 1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
          }
          local_270 = local_290;
          local_260._4_4_ = uStack_27c;
          local_258 = uStack_278;
          uStack_268 = (long ****)CONCAT44(uStack_284,uStack_288);
          local_260._0_4_ = local_280;
          if (plVar5 != (long *)0x0) {
            plVar10 = plVar5 + 1;
            do {
              cVar8 = '\x01';
              bVar14 = (bool)ExclusiveMonitorPass(plVar10,0x10);
              if (bVar14) {
                *plVar10 = *plVar10 + 1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
          }
          if (plVar6 != (long *)0x0) {
            plVar10 = plVar6 + 1;
            do {
              cVar8 = '\x01';
              bVar14 = (bool)ExclusiveMonitorPass(plVar10,0x10);
              if (bVar14) {
                *plVar10 = *plVar10 + 1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
          }
          if (plVar35 != (long *)0x0) {
            plVar10 = plVar35 + 1;
            do {
              cVar8 = '\x01';
              bVar14 = (bool)ExclusiveMonitorPass(plVar10,0x10);
              if (bVar14) {
                *plVar10 = *plVar10 + 1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
          }
          uStack_1b8._0_4_ = uStack_288;
          local_1c0 = local_290;
          local_1b0._4_4_ = uStack_27c;
          uStack_1a8._0_4_ = uStack_278;
          uStack_1b8._4_4_ = uStack_284;
          local_1b0._0_4_ = local_280;
          plVar16[0x23] = lVar24;
          plVar16[0x24] = (long)plVar5;
          if (plVar5 != (long *)0x0) {
            plVar10 = plVar5 + 1;
            do {
              cVar8 = '\x01';
              bVar14 = (bool)ExclusiveMonitorPass(plVar10,0x10);
              if (bVar14) {
                *plVar10 = *plVar10 + 1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
          }
          plVar16[0x25] = lVar20;
          plVar16[0x26] = (long)plVar6;
          if (plVar6 != (long *)0x0) {
            plVar10 = plVar6 + 1;
            do {
              cVar8 = '\x01';
              bVar14 = (bool)ExclusiveMonitorPass(plVar10,0x10);
              if (bVar14) {
                *plVar10 = *plVar10 + 1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
          }
          plVar16[0x27] = lVar21;
          plVar16[0x28] = (long)plVar35;
          if (plVar35 == (long *)0x0) {
            *(ulong *)((long)plVar16 + 0x15c) = CONCAT44(uStack_278,uStack_27c);
            *(ulong *)((long)plVar16 + 0x154) = CONCAT44(local_280,uStack_284);
            plVar16[0x2a] = CONCAT44(uStack_284,uStack_288);
            plVar16[0x29] = (long)local_290;
LAB_0070978c:
            if (plVar6 == (long *)0x0) goto LAB_007097a8;
LAB_00709790:
            plVar10 = plVar6 + 1;
            do {
              lVar24 = *plVar10;
              cVar8 = '\x01';
              bVar14 = (bool)ExclusiveMonitorPass(plVar10,0x10);
              if (bVar14) {
                *plVar10 = lVar24 + -1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            if (lVar24 != 0) goto LAB_007097a8;
            (**(code **)(*plVar6 + 0x10))(plVar6);
            std::__shared_weak_count::__release_weak();
            if (plVar5 != (long *)0x0) goto LAB_007097ac;
LAB_00709800:
            if (plVar35 == (long *)0x0) goto LAB_0070981c;
LAB_00709804:
            plVar10 = plVar35 + 1;
            do {
              lVar24 = *plVar10;
              cVar8 = '\x01';
              bVar14 = (bool)ExclusiveMonitorPass(plVar10,0x10);
              if (bVar14) {
                *plVar10 = lVar24 + -1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            if (lVar24 != 0) goto LAB_0070981c;
            (**(code **)(*plVar35 + 0x10))(plVar35);
            std::__shared_weak_count::__release_weak();
            if (plVar6 != (long *)0x0) goto LAB_00709820;
LAB_00709874:
            if (plVar5 == (long *)0x0) goto LAB_00709890;
LAB_00709878:
            plVar10 = plVar5 + 1;
            do {
              lVar24 = *plVar10;
              cVar8 = '\x01';
              bVar14 = (bool)ExclusiveMonitorPass(plVar10,0x10);
              if (bVar14) {
                *plVar10 = lVar24 + -1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            if (lVar24 != 0) goto LAB_00709890;
            (**(code **)(*plVar5 + 0x10))(plVar5);
            std::__shared_weak_count::__release_weak();
            if (plVar35 != (long *)0x0) goto LAB_00709894;
LAB_007098e8:
            if (plVar6 == (long *)0x0) goto LAB_00709904;
LAB_007098ec:
            plVar10 = plVar6 + 1;
            do {
              lVar24 = *plVar10;
              cVar8 = '\x01';
              bVar14 = (bool)ExclusiveMonitorPass(plVar10,0x10);
              if (bVar14) {
                *plVar10 = lVar24 + -1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            if (lVar24 != 0) goto LAB_00709904;
            (**(code **)(*plVar6 + 0x10))(plVar6);
            std::__shared_weak_count::__release_weak();
          }
          else {
            plVar10 = plVar35 + 1;
            do {
              cVar8 = '\x01';
              bVar14 = (bool)ExclusiveMonitorPass(plVar10,0x10);
              if (bVar14) {
                *plVar10 = *plVar10 + 1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            *(ulong *)((long)plVar16 + 0x15c) = CONCAT44(uStack_278,uStack_27c);
            *(ulong *)((long)plVar16 + 0x154) = CONCAT44(local_280,uStack_284);
            plVar16[0x2a] = CONCAT44(uStack_284,uStack_288);
            plVar16[0x29] = (long)local_290;
            do {
              lVar24 = *plVar10;
              cVar8 = '\x01';
              bVar14 = (bool)ExclusiveMonitorPass(plVar10,0x10);
              if (bVar14) {
                *plVar10 = lVar24 + -1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            if (lVar24 != 0) goto LAB_0070978c;
            (**(code **)(*plVar35 + 0x10))(plVar35);
            std::__shared_weak_count::__release_weak();
            if (plVar6 != (long *)0x0) goto LAB_00709790;
LAB_007097a8:
            if (plVar5 == (long *)0x0) goto LAB_00709800;
LAB_007097ac:
            plVar10 = plVar5 + 1;
            do {
              lVar24 = *plVar10;
              cVar8 = '\x01';
              bVar14 = (bool)ExclusiveMonitorPass(plVar10,0x10);
              if (bVar14) {
                *plVar10 = lVar24 + -1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            if (lVar24 != 0) goto LAB_00709800;
            (**(code **)(*plVar5 + 0x10))(plVar5);
            std::__shared_weak_count::__release_weak();
            if (plVar35 != (long *)0x0) goto LAB_00709804;
LAB_0070981c:
            if (plVar6 == (long *)0x0) goto LAB_00709874;
LAB_00709820:
            plVar10 = plVar6 + 1;
            do {
              lVar24 = *plVar10;
              cVar8 = '\x01';
              bVar14 = (bool)ExclusiveMonitorPass(plVar10,0x10);
              if (bVar14) {
                *plVar10 = lVar24 + -1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            if (lVar24 != 0) goto LAB_00709874;
            (**(code **)(*plVar6 + 0x10))(plVar6);
            std::__shared_weak_count::__release_weak();
            if (plVar5 != (long *)0x0) goto LAB_00709878;
LAB_00709890:
            if (plVar35 == (long *)0x0) goto LAB_007098e8;
LAB_00709894:
            plVar10 = plVar35 + 1;
            do {
              lVar24 = *plVar10;
              cVar8 = '\x01';
              bVar14 = (bool)ExclusiveMonitorPass(plVar10,0x10);
              if (bVar14) {
                *plVar10 = lVar24 + -1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            if (lVar24 != 0) goto LAB_007098e8;
            (**(code **)(*plVar35 + 0x10))(plVar35);
            std::__shared_weak_count::__release_weak();
            if (plVar6 != (long *)0x0) goto LAB_007098ec;
LAB_00709904:
          }
          if (plVar5 != (long *)0x0) {
            plVar10 = plVar5 + 1;
            do {
              lVar24 = *plVar10;
              cVar8 = '\x01';
              bVar14 = (bool)ExclusiveMonitorPass(plVar10,0x10);
              if (bVar14) {
                *plVar10 = lVar24 + -1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            if (lVar24 == 0) {
              (**(code **)(*plVar5 + 0x10))(plVar5);
              std::__shared_weak_count::__release_weak();
            }
          }
          local_270 = (long *****)0x0;
          uStack_268 = (long ****)0x0;
          uStack_1b8._0_4_ = SUB84(plVar16,0);
          uStack_1b8._4_4_ = (undefined4)((ulong)plVar16 >> 0x20);
          do {
            cVar8 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(plVar36,0x10);
            if (bVar14) {
              *plVar36 = *plVar36 + 1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          local_1c0 = (long *****)(plVar16 + 4);
          (**(code **)*puVar22)(puVar22,&local_1c0,&local_270);
          plVar10 = (long *)CONCAT44(uStack_1b8._4_4_,(undefined4)uStack_1b8);
          if (plVar10 != (long *)0x0) {
            plVar3 = plVar10 + 1;
            do {
              lVar24 = *plVar3;
              cVar8 = '\x01';
              bVar14 = (bool)ExclusiveMonitorPass(plVar3,0x10);
              if (bVar14) {
                *plVar3 = lVar24 + -1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            if (lVar24 == 0) {
              (**(code **)(*plVar10 + 0x10))(plVar10);
              std::__shared_weak_count::__release_weak();
            }
          }
          plVar10 = (long *)uStack_268;
          if (uStack_268 != (long ****)0x0) {
            plVar3 = plVar10 + 1;
            do {
              lVar24 = *plVar3;
              cVar8 = '\x01';
              bVar14 = (bool)ExclusiveMonitorPass(plVar3,0x10);
              if (bVar14) {
                *plVar3 = lVar24 + -1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            if (lVar24 == 0) {
              (**(code **)(*plVar10 + 0x10))(plVar10);
              std::__shared_weak_count::__release_weak();
            }
          }
          do {
            lVar24 = *plVar36;
            cVar8 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(plVar36,0x10);
            if (bVar14) {
              *plVar36 = lVar24 + -1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          if (lVar24 == 0) {
            (**(code **)(*plVar16 + 0x10))(plVar16);
            std::__shared_weak_count::__release_weak();
            if (plVar35 != (long *)0x0) goto LAB_00709a3c;
LAB_00709a54:
            if (plVar6 == (long *)0x0) goto LAB_00709ab4;
LAB_00709a5c:
            plVar35 = plVar6 + 1;
            do {
              lVar24 = *plVar35;
              cVar8 = '\x01';
              bVar14 = (bool)ExclusiveMonitorPass(plVar35,0x10);
              if (bVar14) {
                *plVar35 = lVar24 + -1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            if (lVar24 != 0) goto LAB_00709ab4;
            (**(code **)(*plVar6 + 0x10))(plVar6);
            std::__shared_weak_count::__release_weak();
            if (plVar5 != (long *)0x0) goto LAB_00709ab8;
LAB_00709ad0:
            if (local_c8 <= local_d0) goto LAB_00709ae0;
LAB_007093e8:
            *local_d0 = ppppplVar37;
            local_d0[1] = ppppplVar15;
            local_d0 = local_d0 + 2;
          }
          else {
            if (plVar35 == (long *)0x0) goto LAB_00709a54;
LAB_00709a3c:
            plVar16 = plVar35 + 1;
            do {
              lVar24 = *plVar16;
              cVar8 = '\x01';
              bVar14 = (bool)ExclusiveMonitorPass(plVar16,0x10);
              if (bVar14) {
                *plVar16 = lVar24 + -1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            if (lVar24 != 0) goto LAB_00709a54;
            (**(code **)(*plVar35 + 0x10))(plVar35);
            std::__shared_weak_count::__release_weak();
            if (plVar6 != (long *)0x0) goto LAB_00709a5c;
LAB_00709ab4:
            if (plVar5 == (long *)0x0) goto LAB_00709ad0;
LAB_00709ab8:
            plVar6 = plVar5 + 1;
            do {
              lVar24 = *plVar6;
              cVar8 = '\x01';
              bVar14 = (bool)ExclusiveMonitorPass(plVar6,0x10);
              if (bVar14) {
                *plVar6 = lVar24 + -1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            if (lVar24 != 0) goto LAB_00709ad0;
            (**(code **)(*plVar5 + 0x10))(plVar5);
            std::__shared_weak_count::__release_weak();
            if (local_d0 < local_c8) goto LAB_007093e8;
LAB_00709ae0:
            lVar24 = (long)local_d0 - (long)local_d8 >> 4;
            uVar29 = lVar24 + 1;
            if (uVar29 >> 0x3c != 0) {
                    /* try { // try from 0070a23c to 0070a243 has its CatchHandler @ 0070a2a8 */
                    /* WARNING: Subroutine does not return */
              std::__vector_base_common<true>::__throw_length_error();
            }
            if ((ulong)((long)local_c8 - (long)local_d8 >> 4) < 0x7ffffffffffffff) {
              uVar23 = (long)local_c8 - (long)local_d8 >> 3;
              if (uVar29 <= uVar23) {
                uVar29 = uVar23;
              }
              if (uVar29 != 0) goto LAB_00709b24;
              lVar20 = 0;
            }
            else {
              uVar29 = 0xfffffffffffffff;
LAB_00709b24:
              lVar20 = (**(code **)((long)*ppppppplStack_c0 + 0x10))(ppppppplStack_c0,uVar29 << 4,8)
              ;
            }
            ppppppplVar13 = local_c8;
            pppppplVar12 = local_d8;
            pppppplVar26 = (long ******)(lVar20 + lVar24 * 0x10);
            local_c8 = (long *******)(lVar20 + uVar29 * 0x10);
            *pppppplVar26 = ppppplVar37;
            pppppplVar26[1] = ppppplVar15;
            pppppplVar33 = pppppplVar26 + 2;
            pppppplVar11 = local_d0;
            if ((long)local_d0 - (long)local_d8 != 0) {
              uVar29 = ((long)local_d0 - (long)local_d8) - 0x10;
              uVar1 = ((uint)(uVar29 >> 4) & 0xfffffff) + 1;
              if ((uVar1 & 7) != 0) {
                lVar24 = -((ulong)uVar1 & 7);
                pppppplVar25 = pppppplVar26;
                pppppplVar31 = local_d0;
                do {
                  local_d0 = pppppplVar31 + -2;
                  ppppplVar15 = *local_d0;
                  bVar14 = lVar24 != -1;
                  lVar24 = lVar24 + 1;
                  pppppplVar26 = pppppplVar25 + -2;
                  pppppplVar25[-1] = pppppplVar31[-1];
                  *pppppplVar26 = ppppplVar15;
                  *local_d0 = (long *****)0x0;
                  pppppplVar31[-1] = (long *****)0x0;
                  pppppplVar25 = pppppplVar26;
                  pppppplVar31 = local_d0;
                } while (bVar14);
              }
              if (0x6f < uVar29) {
                do {
                  ppppplVar15 = local_d0[-2];
                  pppppplVar26[-1] = local_d0[-1];
                  pppppplVar26[-2] = ppppplVar15;
                  ppppplVar15 = local_d0[-4];
                  local_d0[-2] = (long *****)0x0;
                  local_d0[-1] = (long *****)0x0;
                  pppppplVar26[-3] = local_d0[-3];
                  pppppplVar26[-4] = ppppplVar15;
                  ppppplVar15 = local_d0[-6];
                  local_d0[-4] = (long *****)0x0;
                  local_d0[-3] = (long *****)0x0;
                  pppppplVar26[-5] = local_d0[-5];
                  pppppplVar26[-6] = ppppplVar15;
                  ppppplVar15 = local_d0[-8];
                  local_d0[-6] = (long *****)0x0;
                  local_d0[-5] = (long *****)0x0;
                  pppppplVar26[-7] = local_d0[-7];
                  pppppplVar26[-8] = ppppplVar15;
                  ppppplVar15 = local_d0[-10];
                  local_d0[-8] = (long *****)0x0;
                  local_d0[-7] = (long *****)0x0;
                  pppppplVar26[-9] = local_d0[-9];
                  pppppplVar26[-10] = ppppplVar15;
                  ppppplVar15 = local_d0[-0xc];
                  local_d0[-10] = (long *****)0x0;
                  local_d0[-9] = (long *****)0x0;
                  pppppplVar26[-0xb] = local_d0[-0xb];
                  pppppplVar26[-0xc] = ppppplVar15;
                  ppppplVar15 = local_d0[-0xe];
                  local_d0[-0xc] = (long *****)0x0;
                  local_d0[-0xb] = (long *****)0x0;
                  pppppplVar26[-0xd] = local_d0[-0xd];
                  pppppplVar26[-0xe] = ppppplVar15;
                  local_d0[-0xe] = (long *****)0x0;
                  pppppplVar31 = local_d0 + -0x10;
                  ppppplVar15 = *pppppplVar31;
                  local_d0[-0xd] = (long *****)0x0;
                  pppppplVar25 = pppppplVar26 + -0x10;
                  pppppplVar26[-0xf] = local_d0[-0xf];
                  *pppppplVar25 = ppppplVar15;
                  *pppppplVar31 = (long *****)0x0;
                  local_d0[-0xf] = (long *****)0x0;
                  pppppplVar26 = pppppplVar25;
                  local_d0 = pppppplVar31;
                } while (local_d8 != pppppplVar31);
              }
            }
            while( true ) {
              local_d8 = pppppplVar26;
              local_d0 = pppppplVar33;
              if (pppppplVar11 == pppppplVar12) break;
              ppppplVar15 = pppppplVar11[-1];
              if (ppppplVar15 != (long *****)0x0) {
                ppppplVar37 = ppppplVar15 + 1;
                do {
                  pppplVar30 = *ppppplVar37;
                  cVar8 = '\x01';
                  bVar14 = (bool)ExclusiveMonitorPass(ppppplVar37,0x10);
                  if (bVar14) {
                    *ppppplVar37 = (long ****)((long)pppplVar30 + -1);
                    cVar8 = ExclusiveMonitorsStatus();
                  }
                } while (cVar8 != '\0');
                if (pppplVar30 == (long ****)0x0) {
                  (*(code *)(*ppppplVar15)[2])(ppppplVar15);
                  std::__shared_weak_count::__release_weak();
                }
              }
              pppppplVar33 = local_d0;
              pppppplVar26 = local_d8;
              pppppplVar11 = pppppplVar11 + -2;
            }
            if (pppppplVar12 != (long ******)0x0) {
              (**(code **)((long)*ppppppplStack_c0 + 0x18))
                        (ppppppplStack_c0,pppppplVar12,(long)ppppppplVar13 - (long)pppppplVar12,8);
            }
          }
          uVar32 = uVar32 + 1;
        } while (uVar32 < *(ulong *)(param_1 + 0x140));
      }
      uStack_268 = (long ****)0x0;
      local_260._0_4_ = 0;
      local_260._4_4_ = 0;
      local_270 = (long *****)0x0;
      uVar18 = FUN_00612290();
      pppppplVar33 = local_d0;
      local_258 = (undefined4)uVar18;
      uStack_254 = (undefined4)((ulong)uVar18 >> 0x20);
      if (local_d8 == local_d0) {
        ppppplVar15 = (long *****)(long ****)0x0;
        ppppplVar37 = (long *****)(long ****)0x0;
      }
      else {
        ppppplVar15 = (long *****)(PTR_DAT_04373168 + 0x10);
        puVar4 = PTR_DAT_04373170 + 0x10;
        pppppplVar26 = local_d8;
        do {
          while( true ) {
            local_158 = (undefined8 *)0x0;
            uStack_150 = 0;
            local_1c0 = ppppplVar15;
            uStack_1b8 = puVar4;
            local_1b0 = &local_1b0;
            uStack_1a8 = &local_1b0;
            (*(code *)(**pppppplVar26)[2])(*pppppplVar26,auStack_198);
            local_158 = &uStack_1b8;
            thunk_FUN_00783af0(&local_1c0);
            local_1c0 = ppppplVar15;
            FUN_00782f18(&uStack_1b8);
            ppppplVar37 = *pppppplVar26;
            ppppplVar38 = pppppplVar26[1];
            *pppppplVar26 = (long *****)0x0;
            pppppplVar26[1] = (long *****)0x0;
            ppplVar19 = (long ***)(*(code *)(*ppppplVar37)[6])();
            pppplVar28 = uStack_268;
            uStack_268._4_4_ = SUB84(pppplVar28,4);
            uStack_268._0_4_ = SUB84(pppplVar28,0);
            if (ppppplVar38 == (long *****)0x0) break;
            ppppplVar37 = ppppplVar38 + 1;
            do {
              pppplVar27 = *ppppplVar37;
              cVar8 = '\x01';
              bVar14 = (bool)ExclusiveMonitorPass(ppppplVar37,0x10);
              if (bVar14) {
                *ppppplVar37 = (long ****)((long)pppplVar27 + -1);
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            if (pppplVar27 != (long ****)0x0) break;
            uStack_268 = pppplVar28;
            (*(code *)(*ppppplVar38)[2])(ppppplVar38);
            std::__shared_weak_count::__release_weak();
            pppplVar28 = uStack_268;
            uStack_268._4_4_ = SUB84(pppplVar28,4);
            uStack_268._0_4_ = SUB84(pppplVar28,0);
            if (local_260 <= pppplVar28) goto LAB_00709dac;
LAB_00709d20:
            uStack_268 = pppplVar28 + 1;
            *pppplVar28 = ppplVar19;
            ppppplVar37 = local_270;
LAB_00709d28:
            local_270 = ppppplVar37;
            pppppplVar26 = pppppplVar26 + 2;
            if (pppppplVar26 == pppppplVar33) goto LAB_00709efc;
          }
          if (pppplVar28 < local_260) goto LAB_00709d20;
LAB_00709dac:
          lVar24 = (long)pppplVar28 - (long)local_270 >> 3;
          uVar32 = lVar24 + 1;
          uStack_268 = pppplVar28;
          if (uVar32 >> 0x3d != 0) {
                    /* try { // try from 0070a244 to 0070a24b has its CatchHandler @ 0070a298 */
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
            uStack_268._4_4_ = SUB84(uStack_268,4);
            uStack_268._0_4_ = SUB84(uStack_268,0);
          }
          if ((ulong)((long)local_260 - (long)local_270 >> 3) < 0xfffffffffffffff) {
            uVar29 = (long)local_260 - (long)local_270 >> 2;
            if (uVar32 <= uVar29) {
              uVar32 = uVar29;
            }
            if (uVar32 != 0) goto LAB_00709df0;
            lVar20 = 0;
            pppplVar27 = local_260;
          }
          else {
            uVar32 = 0x1fffffffffffffff;
LAB_00709df0:
            lVar20 = (**(code **)(*(long *)CONCAT44(uStack_254,local_258) + 0x10))
                               ((long *)CONCAT44(uStack_254,local_258),uVar32 << 3,8);
            pppplVar28 = uStack_268;
            uStack_268._4_4_ = SUB84(pppplVar28,4);
            uStack_268._0_4_ = SUB84(pppplVar28,0);
            pppplVar27 = local_260;
          }
          ppppplVar38 = local_270;
          ppppplVar37 = (long *****)(lVar20 + lVar24 * 8);
          local_260 = (long ****)(lVar20 + uVar32 * 8);
          uStack_268 = (long ****)(ppppplVar37 + 1);
          *ppppplVar37 = (long ****)ppplVar19;
          if ((long)pppplVar28 - (long)local_270 != 0) {
            uVar32 = ((long)pppplVar28 - (long)local_270) - 8;
            uVar1 = ((uint)(uVar32 >> 3) & 0x1fffffff) + 1;
            if ((uVar1 & 7) != 0) {
              lVar24 = -((ulong)uVar1 & 7);
              do {
                pppplVar28 = pppplVar28 + -1;
                bVar14 = lVar24 != -1;
                lVar24 = lVar24 + 1;
                ppppplVar37 = ppppplVar37 + -1;
                *ppppplVar37 = (long ****)*pppplVar28;
              } while (bVar14);
            }
            if (0x37 < uVar32) {
              do {
                ppppplVar37[-1] = (long ****)pppplVar28[-1];
                ppppplVar37[-2] = (long ****)pppplVar28[-2];
                ppppplVar37[-3] = (long ****)pppplVar28[-3];
                ppppplVar37[-4] = (long ****)pppplVar28[-4];
                ppppplVar37[-5] = (long ****)pppplVar28[-5];
                ppppplVar37[-6] = (long ****)pppplVar28[-6];
                ppppplVar37[-7] = (long ****)pppplVar28[-7];
                pppplVar28 = pppplVar28 + -8;
                ppppplVar37 = ppppplVar37 + -8;
                *ppppplVar37 = (long ****)*pppplVar28;
              } while (local_270 != (long *****)pppplVar28);
            }
          }
          if (local_270 == (long *****)0x0) goto LAB_00709d28;
          lVar24 = (long)pppplVar27 - (long)local_270;
          local_270 = ppppplVar37;
          (**(code **)(*(long *)CONCAT44(uStack_254,local_258) + 0x18))
                    ((long *)CONCAT44(uStack_254,local_258),ppppplVar38,lVar24,8);
          pppppplVar26 = pppppplVar26 + 2;
        } while (pppppplVar26 != pppppplVar33);
LAB_00709efc:
        ppppplVar15 = local_270;
        ppppplVar37 = local_270;
        if (local_270 != (long *****)uStack_268) {
          ppppplVar38 = local_270;
          ppppplVar37 = (long *****)uStack_268;
          if (*local_270 != (long ****)0x2710) {
            do {
              ppppplVar38 = ppppplVar38 + 1;
              if ((long *****)uStack_268 == ppppplVar38) goto LAB_0070a110;
            } while (*ppppplVar38 != (long ****)0x2710);
          }
          pppplVar28 = (long ****)ppppplVar38;
          if ((ppppplVar38 != (long *****)uStack_268) &&
             (pppplVar27 = (long ****)(ppppplVar38 + 1), pppplVar27 != uStack_268)) {
            uVar32 = (long)uStack_268 + (-0x10 - (long)ppppplVar38);
            if (((uint)uVar32 >> 3 & 1) == 0) {
              if (*pppplVar27 != (long ***)0x2710) {
                pppplVar28 = (long ****)(ppppplVar38 + 1);
                *ppppplVar38 = (long ****)*pppplVar27;
              }
              pppplVar27 = (long ****)(ppppplVar38 + 2);
            }
            if (7 < uVar32) {
              ppplVar19 = *pppplVar27;
              if (ppplVar19 == (long ***)0x2710) goto LAB_00709fbc;
              do {
                *pppplVar28 = ppplVar19;
                ppplVar19 = pppplVar27[1];
                pppplVar2 = pppplVar28 + 1;
                while( true ) {
                  pppplVar28 = pppplVar2;
                  if (ppplVar19 != (long ***)0x2710) {
                    pppplVar28 = pppplVar2 + 1;
                    *pppplVar2 = ppplVar19;
                  }
                  pppplVar27 = pppplVar27 + 2;
                  if (pppplVar27 == uStack_268) goto joined_r0x0070a0c4;
                  ppplVar19 = *pppplVar27;
                  if (ppplVar19 != (long ***)0x2710) break;
LAB_00709fbc:
                  ppplVar19 = pppplVar27[1];
                  pppplVar2 = pppplVar28;
                }
              } while( true );
            }
          }
joined_r0x0070a0c4:
          if (uStack_268 != pppplVar28) {
            ppppplVar37 = (long *****)pppplVar28;
            uStack_268 = pppplVar28;
          }
        }
      }
LAB_0070a110:
      if (ppppplVar15 == ppppplVar37) {
        ppplVar19 = (long ***)0x2710;
        if (ppppplVar15 != (long *****)0x0) goto LAB_0070a16c;
      }
      else {
                    /* try { // try from 0070a118 to 0070a127 has its CatchHandler @ 0070a2e8 */
        FUN_0070c9e0(ppppplVar15,ppppplVar37,&local_1c0);
        uVar32 = (ulong)((long)uStack_268 - (long)local_270 >> 3) >> 1;
        ppppplVar15 = local_270;
        if (((uint)((long)uStack_268 - (long)local_270) >> 3 & 1) == 0) {
          lVar24 = (long)local_270[uVar32] + (long)(local_270 + uVar32)[-1];
          if (lVar24 < 0) {
            lVar24 = lVar24 + 1;
          }
          ppplVar19 = (long ***)(lVar24 >> 1);
        }
        else {
          ppplVar19 = (long ***)local_270[uVar32];
        }
LAB_0070a16c:
        uStack_268 = (long ****)ppppplVar15;
        (**(code **)(*(long *)CONCAT44(uStack_254,local_258) + 0x18))
                  ((long *)CONCAT44(uStack_254,local_258),ppppplVar15,
                   (long)local_260 - (long)ppppplVar15,8);
      }
      pppppplVar26 = local_d8;
      pppppplVar33 = local_d0;
      if (local_d8 != (long ******)0x0) {
        while (pppppplVar33 != pppppplVar26) {
          ppppplVar15 = pppppplVar33[-1];
          pppppplVar33 = pppppplVar33 + -2;
          if (ppppplVar15 != (long *****)0x0) {
            ppppplVar37 = ppppplVar15 + 1;
            do {
              pppplVar28 = *ppppplVar37;
              cVar8 = '\x01';
              bVar14 = (bool)ExclusiveMonitorPass(ppppplVar37,0x10);
              if (bVar14) {
                *ppppplVar37 = (long ****)((long)pppplVar28 + -1);
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            if (pppplVar28 == (long ****)0x0) {
              (*(code *)(*ppppplVar15)[2])(ppppplVar15);
              std::__shared_weak_count::__release_weak();
            }
          }
        }
        local_d0 = pppppplVar26;
        (**(code **)((long)*ppppppplStack_c0 + 0x18))
                  (ppppppplStack_c0,local_d8,(long)local_c8 - (long)local_d8,8);
      }
      goto LAB_0070a00c;
    }
  }
  ppplVar19 = (long ***)0x2710;
LAB_0070a00c:
  nn::os::LockMutex((MutexType *)(lVar34 + 0x38));
  *(long ****)(lVar34 + 0x58) = ppplVar19;
  *(undefined1 *)(lVar34 + 0x60) = 1;
  nn::os::UnlockMutex((MutexType *)(lVar34 + 0x38));
  uStack_268._4_4_ = SUB84(uStack_268,4);
  uStack_268._0_4_ = SUB84(uStack_268,0);
  return 1;
}


