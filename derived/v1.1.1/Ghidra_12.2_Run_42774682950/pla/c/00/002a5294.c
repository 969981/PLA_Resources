/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002a5294; name: FUN_002a5294
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002a5294(ulong *param_1,long *param_2)

{
  long *plVar1;
  char *__s;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  size_t __n;
  long lVar10;
  void *__dest;
  undefined8 *puVar11;
  long *plVar12;
  long *plVar13;
  ulong local_2a0;
  size_t sStack_298;
  void *local_290;
  long *local_288;
  ulong local_280;
  long *local_278;
  undefined8 uStack_270;
  long *local_268;
  long *plStack_260;
  char local_258;
  long *local_250;
  long local_248;
  undefined8 uStack_240;
  long local_238;
  undefined1 auStack_230 [104];
  undefined4 local_1c8 [2];
  long *local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  long *plStack_1a8;
  char local_1a0;
  long *local_198;
  long local_190;
  undefined8 uStack_188;
  long local_180;
  ulong local_178;
  size_t sStack_170;
  void *local_168;
  long *plStack_160;
  long *local_158;
  long *local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  long *plStack_138;
  char local_130;
  long *local_128;
  long local_120;
  undefined8 uStack_118;
  long local_110;
  byte local_108;
  undefined7 uStack_107;
  char *local_f8;
  long *plStack_f0;
  long *local_a0;
  long *local_98;
  long local_90;
  long *local_88;
  ulong local_80;
  ulong uStack_78;
  undefined8 local_68;
  
  local_88 = (long *)0x0;
  local_90 = 0;
  if (param_2[1] == 0) {
    local_88 = (long *)0x0;
  }
  else {
    local_88 = (long *)std::__shared_weak_count::lock();
    if ((local_88 != (long *)0x0) && (lVar10 = *param_2, local_90 = lVar10, lVar10 != 0)) {
      FUN_002a4cf4(&local_a0,param_2);
      uVar5 = (**(code **)(*local_a0 + 0x20))();
      plVar9 = local_98;
      if ((uVar5 & 1) == 0) {
        lVar10 = *(long *)(lVar10 + 0x10);
        if (local_98 != (long *)0x0) {
          plVar1 = local_98 + 1;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = *plVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        plVar12 = *(long **)(lVar10 + 0x198);
        puVar11 = *(undefined8 **)(lVar10 + 0x348);
        plVar7 = (long *)(**(code **)(*plVar12 + 0x10))(plVar12,0xf0,8);
        plVar7[2] = 0;
        plVar8 = plVar7 + 1;
        *plVar8 = 0;
        puVar4 = PTR_DAT_043732d8;
        plVar7[3] = (long)plVar12;
        plVar1 = plVar7 + 4;
        *plVar7 = (long)(puVar4 + 0x10);
        FUN_00782ef8(plVar1);
        plVar7[4] = (long)(PTR_DAT_043732e0 + 0x10);
        nn::os::InitializeEvent(plVar7 + 6,0,0);
        plVar7[4] = (long)(PTR_DAT_043732e8 + 0x10);
        nn::os::InitializeMutex((MutexType *)(plVar7 + 0xb),false,0);
        *(undefined1 *)(plVar7 + 0x1d) = 0;
        if (plVar7 != (long *)0x0) {
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar3) {
              *plVar8 = *plVar8 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        plVar8 = (long *)(**(code **)(*plVar12 + 0x10))(plVar12,0x158,8);
        plVar13 = plVar8 + 1;
        *plVar13 = 0;
        plVar8[2] = 0;
        plVar8[3] = (long)plVar12;
        *plVar8 = (long)&PTR_LAB_0414f740;
        FUN_007840dc(plVar8 + 4);
        plVar8[4] = (long)&PTR_LAB_0414f790;
        lVar10 = (**(code **)(*plVar12 + 0x10))(plVar12,0x10000,0x10);
        if (lVar10 == 0) {
          local_158 = (long *)CONCAT44(local_158._4_4_,0x220);
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl("","","",0,(Result *)&local_158,"");
        }
        FUN_00782cfc(plVar8 + 10,plVar1,0,lVar10,0x10000,1);
        plVar8[10] = (long)&PTR_LAB_0414f7d8;
        plVar8[0x26] = (long)plVar12;
        plVar8[0x27] = 0x10000;
        *(undefined1 *)((long)plVar8 + 0x151) = 1;
        plVar8[0x28] = (long)plVar1;
        plVar8[0x29] = (long)plVar7;
        plVar8[0x23] = (long)local_a0;
        plVar8[0x24] = (long)plVar9;
        local_280 = 0;
        local_278 = (long *)0x0;
        if (plVar8 != (long *)0x0) {
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar3) {
              *plVar13 = *plVar13 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        local_158 = plVar8 + 4;
        local_150 = plVar8;
        (**(code **)*puVar11)(puVar11,&local_158,&local_280);
        if (local_150 != (long *)0x0) {
          plVar9 = local_150 + 1;
          do {
            lVar10 = *plVar9;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar3) {
              *plVar9 = lVar10 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar10 == 0) {
            (**(code **)(*local_150 + 0x10))(local_150);
            std::__shared_weak_count::__release_weak();
          }
        }
        if (local_278 != (long *)0x0) {
          plVar9 = local_278 + 1;
          do {
            lVar10 = *plVar9;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar3) {
              *plVar9 = lVar10 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar10 == 0) {
            (**(code **)(*local_278 + 0x10))(local_278);
            std::__shared_weak_count::__release_weak();
          }
        }
        *param_1 = (ulong)plVar1;
        param_1[1] = (ulong)plVar7;
        if (plVar8 != (long *)0x0) {
          do {
            lVar10 = *plVar13;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar3) {
              *plVar13 = lVar10 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar10 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
            std::__shared_weak_count::__release_weak();
          }
        }
      }
      else {
        uVar6 = (**(code **)(*local_a0 + 0x38))();
                    /* try { // try from 002a5314 to 002a531b has its CatchHandler @ 002a5a08 */
        FUN_00290d84(&local_158,uVar6);
        local_268 = (long *)local_140;
        uVar6 = *(undefined8 *)(*(long *)(local_90 + 0x10) + 400);
        uStack_270 = uStack_148;
        local_278 = local_150;
        local_150 = (long *)0x0;
        uStack_148 = 0;
        local_140 = 0;
        plStack_260 = plStack_138;
        local_280 = CONCAT44(local_280._4_4_,local_158._0_4_);
        local_258 = '\0';
        if (local_130 != '\0') {
          uStack_240 = uStack_118;
          local_248 = local_120;
          local_250 = local_128;
          local_238 = local_110;
          if (local_110 == 0) {
            local_250 = &local_248;
          }
          else {
            *(long **)(local_120 + 0x10) = &local_248;
            local_128 = &local_120;
            local_120 = 0;
            local_110 = 0;
          }
          local_258 = '\x01';
        }
                    /* try { // try from 002a5710 to 002a5717 has its CatchHandler @ 002a59bc */
        FUN_00294ef4(auStack_230,&local_108);
        local_2a0 = 0;
        sStack_298 = 0;
        __s = local_f8;
        if ((local_108 & 1) == 0) {
          __s = (char *)&uStack_107;
        }
        local_290 = (void *)0x0;
        plVar9 = (long *)FUN_00612290();
        local_288 = plVar9;
        __n = strlen(__s);
        if (0xffffffffffffffef < __n) {
                    /* try { // try from 002a59a0 to 002a59a7 has its CatchHandler @ 002a59a8 */
                    /* WARNING: Subroutine does not return */
          std::__basic_string_common<true>::__throw_length_error();
        }
        if (__n < 0x17) {
          local_2a0 = CONCAT71(local_2a0._1_7_,(char)((int)__n << 1));
          __dest = (void *)((ulong)&local_2a0 | 1);
          if (__n != 0) goto LAB_002a57a4;
        }
        else {
          uVar5 = __n + 0x10 & 0xfffffffffffffff0;
          __dest = (void *)(**(code **)(*plVar9 + 0x10))(plVar9,uVar5,1);
          local_2a0 = uVar5 | 1;
          sStack_298 = __n;
          local_290 = __dest;
LAB_002a57a4:
          memcpy(__dest,__s,__n);
        }
        local_1b0 = local_268;
        uStack_1b8 = uStack_270;
        local_1c0 = local_278;
        local_168 = local_290;
        sStack_170 = sStack_298;
        local_178 = local_2a0;
        *(undefined1 *)((long)__dest + __n) = 0;
        uStack_270 = 0;
        local_268 = (long *)0x0;
        local_278 = (long *)0x0;
        local_1c8[0] = (undefined4)local_280;
        plStack_1a8 = plStack_260;
        local_1a0 = '\0';
        if (local_258 != '\0') {
          local_198 = local_250;
          uStack_188 = uStack_240;
          local_190 = local_248;
          local_180 = local_238;
          if (local_238 == 0) {
            local_198 = &local_190;
          }
          else {
            *(long **)(local_248 + 0x10) = &local_190;
            local_250 = &local_248;
            local_248 = 0;
            local_238 = 0;
          }
          local_1a0 = '\x01';
        }
        local_2a0 = 0;
        sStack_298 = 0;
        local_290 = (void *)0x0;
        plStack_160 = local_288;
                    /* try { // try from 002a5840 to 002a584f has its CatchHandler @ 002a59b8 */
        local_68 = uVar6;
        FUN_002a7010(&local_80,&local_68,local_1c8);
        param_1[1] = uStack_78;
        *param_1 = local_80;
        if ((local_178 & 1) != 0) {
          (**(code **)(*plStack_160 + 0x18))(plStack_160,local_168,local_178 & 0xfffffffffffffffe,1)
          ;
        }
        if (local_1a0 != '\0') {
          FUN_02767254(&local_198,local_190);
        }
        if (((ulong)local_1c0 & 1) != 0) {
          (**(code **)(*plStack_1a8 + 0x18))
                    (plStack_1a8,local_1b0,(ulong)local_1c0 & 0xfffffffffffffffe,1);
        }
        if ((local_2a0 & 1) != 0) {
          (**(code **)(*local_288 + 0x18))(local_288,local_290,local_2a0 & 0xfffffffffffffffe,1);
        }
        FUN_00290f08(&local_280);
        FUN_00290f08(&local_158);
      }
      if (local_98 != (long *)0x0) {
        plVar9 = local_98 + 1;
        do {
          lVar10 = *plVar9;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = lVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*local_98 + 0x10))(local_98);
          std::__shared_weak_count::__release_weak();
        }
      }
      goto joined_r0x002a5490;
    }
  }
  uVar5 = *(ulong *)(_DAT_00000010 + 400);
  local_268 = (long *)FUN_00612290();
  uStack_270 = 0;
  local_280 = 0;
  local_278 = (long *)0x0;
  FUN_002a4eb0(local_1c8,0x290541);
  FUN_002a6ee0(&local_158,&local_280,0xe,"UserContext already disposed.",local_1c8);
                    /* try { // try from 002a53e4 to 002a53f3 has its CatchHandler @ 002a5a24 */
  local_80 = uVar5;
  FUN_002a7010(&local_2a0,&local_80,&local_158);
  param_1[1] = sStack_298;
  *param_1 = local_2a0;
  if ((local_108 & 1) != 0) {
    (**(code **)(*plStack_f0 + 0x18))
              (plStack_f0,local_f8,CONCAT71(uStack_107,local_108) & 0xfffffffffffffffe,1);
  }
  if (local_130 != '\0') {
    FUN_02767254(&local_128,local_120);
  }
  if (((ulong)local_150 & 1) != 0) {
    (**(code **)(*plStack_138 + 0x18))
              (plStack_138,local_140,(ulong)local_150 & 0xfffffffffffffffe,1);
  }
  FUN_02767254(local_1c8,local_1c0);
  if ((local_280 & 1) != 0) {
    (**(code **)(*local_268 + 0x18))(local_268,uStack_270,local_280 & 0xfffffffffffffffe,1);
  }
joined_r0x002a5490:
  if (local_88 != (long *)0x0) {
    plVar9 = local_88 + 1;
    do {
      lVar10 = *plVar9;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*local_88 + 0x10))(local_88);
      std::__shared_weak_count::__release_weak();
    }
  }
  return;
}


