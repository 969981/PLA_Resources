/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006df2dc; name: FUN_006df2dc
 */


void FUN_006df2dc(long *param_1,long param_2,undefined8 *param_3,long *param_4,char *param_5,
                 undefined8 param_6)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  long *plVar4;
  long *plVar5;
  size_t __n;
  void *__dest;
  long *plVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long *plVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  long local_470;
  long *plStack_468;
  undefined8 local_460;
  long local_458;
  undefined1 auStack_450 [32];
  undefined1 *local_430;
  undefined8 local_420;
  long local_418;
  undefined8 local_410;
  long local_408;
  undefined8 local_400;
  long local_3f8;
  undefined1 local_3f0;
  long local_3e8;
  long local_3e0;
  undefined8 local_3d8;
  size_t local_3d0;
  void *local_3c8;
  long *local_3c0;
  undefined1 auStack_3b8 [80];
  undefined8 local_368;
  undefined8 *local_360;
  undefined8 local_358;
  undefined8 local_350;
  undefined8 uStack_348;
  ulong local_260;
  long *local_258;
  undefined8 local_250;
  long *local_248;
  ulong local_240;
  undefined8 local_238;
  undefined8 local_230;
  long *local_228;
  ulong local_220;
  undefined8 local_218;
  undefined8 local_210;
  long *local_208;
  undefined8 local_200;
  long *local_160;
  long *local_158;
  
  if ((*(long *)(param_2 + 0x18) == 0) ||
     (plVar4 = (long *)std::__shared_weak_count::lock(), plVar4 == (long *)0x0)) {
    lVar14 = *param_4;
    plVar4 = (long *)0x0;
  }
  else {
    lVar8 = *(long *)(param_2 + 0x10);
    lVar14 = *param_4;
    if (lVar8 != 0) {
      plVar5 = plVar4 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      local_460 = *(undefined8 *)(param_2 + 0x20);
      local_458 = *(long *)(param_2 + 0x28);
      if (local_458 != 0) {
        plVar5 = (long *)(local_458 + 8);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar2) {
            *plVar5 = *plVar5 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      local_470 = lVar8;
      plStack_468 = plVar4;
      if (&local_470 != (long *)(param_2 + 0x10)) {
        plVar5 = *(long **)(param_2 + 0x50);
        if (plVar5 == (long *)0x0) {
          local_430 = (undefined1 *)0x0;
        }
        else if (plVar5 == (long *)(param_2 + 0x30)) {
          local_430 = auStack_450;
          (**(code **)(*plVar5 + 0x28))(plVar5,auStack_450);
        }
        else {
          local_430 = (undefined1 *)(**(code **)(*plVar5 + 0x30))();
        }
      }
      local_420 = *param_3;
      local_418 = param_3[1];
      if (local_418 != 0) {
        plVar5 = (long *)(local_418 + 8);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar2) {
            *plVar5 = *plVar5 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      local_410 = param_3[2];
      local_408 = param_3[3];
      if (local_408 != 0) {
        plVar5 = (long *)(local_408 + 8);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar2) {
            *plVar5 = *plVar5 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      local_400 = param_3[4];
      local_3f8 = param_3[5];
      if (local_3f8 != 0) {
        plVar5 = (long *)(local_3f8 + 8);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar2) {
            *plVar5 = *plVar5 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      local_3f0 = *(undefined1 *)(param_3 + 6);
      local_3e8 = *param_4;
      local_3e0 = param_4[1];
      if (local_3e0 != 0) {
        plVar5 = (long *)(local_3e0 + 8);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar2) {
            *plVar5 = *plVar5 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      local_3d8 = 0;
      local_3d0 = 0;
      local_3c8 = (void *)0x0;
      plVar5 = (long *)FUN_00612290();
      local_3c0 = plVar5;
      __n = strlen(param_5);
      if (0xffffffffffffffef < __n) {
                    /* try { // try from 006df934 to 006df93b has its CatchHandler @ 006df960 */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      if (__n < 0x17) {
        __dest = (void *)((long)&local_3d8 + 1);
        local_3d8 = CONCAT71(local_3d8._1_7_,(char)((int)__n << 1));
        if (__n != 0) goto LAB_006df634;
      }
      else {
        uVar12 = __n + 0x10 & 0xfffffffffffffff0;
        __dest = (void *)(**(code **)(*plVar5 + 0x10))(plVar5,uVar12,1);
        local_3d8 = uVar12 | 1;
        local_3d0 = __n;
        local_3c8 = __dest;
LAB_006df634:
        memcpy(__dest,param_5,__n);
      }
      *(undefined1 *)((long)__dest + __n) = 0;
                    /* try { // try from 006df650 to 006df657 has its CatchHandler @ 006df998 */
      FUN_002985e8(auStack_3b8,param_6);
      plVar11 = *(long **)(lVar14 + 0x198);
      puVar9 = *(undefined8 **)(lVar14 + 0x348);
      plVar6 = (long *)(**(code **)(*plVar11 + 0x10))(plVar11,0x138,8);
      plVar6[2] = 0;
      plVar7 = plVar6 + 1;
      *plVar7 = 0;
      puVar3 = PTR_DAT_04373098;
      plVar6[3] = (long)plVar11;
      plVar5 = plVar6 + 4;
      *plVar6 = (long)(puVar3 + 0x10);
      FUN_00782ef8(plVar5);
      plVar6[4] = (long)(PTR_DAT_043730a0 + 0x10);
      nn::os::InitializeEvent(plVar6 + 6,0,0);
      plVar6[4] = (long)(PTR_DAT_043730a8 + 0x10);
      nn::os::InitializeMutex((MutexType *)(plVar6 + 0xb),false,0);
      *(undefined1 *)(plVar6 + 0x26) = 0;
      if (plVar6 != (long *)0x0) {
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar2) {
            *plVar7 = *plVar7 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      plVar7 = (long *)(**(code **)(*plVar11 + 0x10))(plVar11,0x260,0x10);
      plVar7[2] = 0;
      plVar13 = plVar7 + 1;
      *plVar13 = 0;
      *plVar7 = (long)&PTR_LAB_0419cd28;
      plVar7[4] = (long)plVar11;
      FUN_007840dc(plVar7 + 6);
      plVar7[6] = (long)&PTR_LAB_0419cd78;
      lVar14 = (**(code **)(*plVar11 + 0x10))(plVar11,0x10000,0x10);
      if (lVar14 == 0) {
        local_160 = (long *)CONCAT44(local_160._4_4_,0x220);
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0,(Result *)&local_160,"");
      }
      FUN_00782cfc(plVar7 + 0xc,plVar5,0,lVar14,0x10000,1);
      plVar7[0x46] = (long)plVar11;
      plVar7[0x47] = 0x10000;
      plVar7[0xc] = (long)&PTR_LAB_0419cdc0;
      plVar7[0x48] = (long)plVar5;
      plVar7[0x49] = (long)plVar6;
      *(undefined1 *)((long)plVar7 + 0x251) = 1;
                    /* try { // try from 006df7bc to 006df7c7 has its CatchHandler @ 006df97c */
      FUN_006dfef8(&local_360,&local_470);
                    /* try { // try from 006df7c8 to 006df7d3 has its CatchHandler @ 006df978 */
      FUN_006dfef8(&local_260,&local_360);
                    /* try { // try from 006df7d4 to 006df7df has its CatchHandler @ 006df974 */
      FUN_006dfef8(&local_160,&local_260);
                    /* try { // try from 006df7e4 to 006df7eb has its CatchHandler @ 006df970 */
      FUN_006dfef8(plVar7 + 0x26,&local_160);
      FUN_006dfb70(&local_160);
      FUN_006dfb70(&local_260);
      FUN_006dfb70(&local_360);
      local_258 = (long *)0x0;
      local_260 = 0;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar2) {
          *plVar13 = *plVar13 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      local_160 = plVar7 + 6;
      local_158 = plVar7;
      (**(code **)*puVar9)(puVar9,&local_160,&local_260);
      if (local_158 != (long *)0x0) {
        plVar11 = local_158 + 1;
        do {
          lVar14 = *plVar11;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar2) {
            *plVar11 = lVar14 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar14 == 0) {
          (**(code **)(*local_158 + 0x10))(local_158);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (local_258 != (long *)0x0) {
        plVar11 = local_258 + 1;
        do {
          lVar14 = *plVar11;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar2) {
            *plVar11 = lVar14 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar14 == 0) {
          (**(code **)(*local_258 + 0x10))(local_258);
          std::__shared_weak_count::__release_weak();
        }
      }
      *param_1 = (long)plVar5;
      param_1[1] = (long)plVar6;
      do {
        lVar14 = *plVar13;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar2) {
          *plVar13 = lVar14 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        std::__shared_weak_count::__release_weak();
      }
      FUN_006dfb70(&local_470);
      goto LAB_006df8e4;
    }
  }
  uVar10 = *(undefined8 *)(lVar14 + 400);
  local_248 = (long *)FUN_00612290();
  local_258 = (long *)0x0;
  local_260 = 0;
  local_250 = 0;
  local_228 = (long *)FUN_00612290();
  local_238 = 0;
  local_240 = 0;
  local_230 = 0;
  local_208 = (long *)FUN_00612290();
  local_200 = 0;
  local_220 = 0;
  local_210 = 0;
  local_218 = 0;
  local_358 = 0;
  local_350 = FUN_00612290();
  uStack_348 = 0;
  local_360 = &local_358;
  FUN_002a5138(&local_160,&local_260,0x10,"Library is shutting down.",&local_360);
                    /* try { // try from 006df430 to 006df43f has its CatchHandler @ 006dfb6c */
  local_368 = uVar10;
  FUN_002a6aa4(&local_470,&local_368,&local_160);
  param_1[1] = (long)plStack_468;
  *param_1 = local_470;
  FUN_00290f08(&local_160);
  FUN_02767254(&local_360,local_358);
  if ((local_220 & 1) != 0) {
    (**(code **)(*local_208 + 0x18))(local_208,local_210,local_220 & 0xfffffffffffffffe,1);
  }
  if ((local_240 & 1) != 0) {
    (**(code **)(*local_228 + 0x18))(local_228,local_230,local_240 & 0xfffffffffffffffe,1);
  }
  if ((local_260 & 1) != 0) {
    (**(code **)(*local_248 + 0x18))(local_248,local_250,local_260 & 0xfffffffffffffffe,1);
  }
  if (plVar4 == (long *)0x0) {
    return;
  }
LAB_006df8e4:
  plVar5 = plVar4 + 1;
  do {
    lVar14 = *plVar5;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar2) {
      *plVar5 = lVar14 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar14 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    std::__shared_weak_count::__release_weak();
  }
  return;
}


