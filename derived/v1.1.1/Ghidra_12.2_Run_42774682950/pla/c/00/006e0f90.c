/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006e0f90; name: FUN_006e0f90
 */


void FUN_006e0f90(long *param_1,long param_2,undefined8 *param_3,long *param_4,char *param_5,
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
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  ulong uVar13;
  long *plVar14;
  undefined1 *local_5c0;
  long local_5b0;
  long *plStack_5a8;
  undefined8 local_5a0;
  long local_598;
  undefined1 auStack_590 [32];
  undefined1 *local_570;
  undefined1 auStack_560 [32];
  undefined1 *local_540;
  undefined8 local_530;
  long local_528;
  undefined8 local_520;
  long local_518;
  undefined8 local_510;
  long local_508;
  undefined1 local_500;
  long local_4f8;
  long local_4f0;
  undefined8 local_4e8;
  size_t local_4e0;
  void *local_4d8;
  long *local_4d0;
  undefined1 auStack_4c8 [112];
  undefined8 local_458;
  undefined8 *local_450;
  undefined8 local_448;
  undefined8 local_440;
  undefined8 uStack_438;
  ulong local_300;
  long *local_2f8;
  undefined8 local_2f0;
  long *local_2e8;
  ulong local_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  long *local_2c8;
  ulong local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  long *local_2a8;
  undefined8 local_2a0;
  undefined8 local_1b0;
  long *local_1a8;
  
  if ((*(long *)(param_2 + 0x18) == 0) ||
     (plVar4 = (long *)std::__shared_weak_count::lock(), plVar4 == (long *)0x0)) {
    lVar10 = *param_4;
    plVar4 = (long *)0x0;
  }
  else {
    lVar8 = *(long *)(param_2 + 0x10);
    lVar10 = *param_4;
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
      local_5a0 = *(undefined8 *)(param_2 + 0x20);
      local_598 = *(long *)(param_2 + 0x28);
      if (local_598 != 0) {
        plVar5 = (long *)(local_598 + 8);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar2) {
            *plVar5 = *plVar5 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      local_5b0 = lVar8;
      plStack_5a8 = plVar4;
      if (&local_5b0 == (long *)(param_2 + 0x10)) {
joined_r0x006e11f0:
        local_1b0._4_4_ = (undefined4)((ulong)local_1b0 >> 0x20);
      }
      else {
        plVar5 = *(long **)(param_2 + 0x50);
        if (plVar5 == (long *)0x0) {
          local_570 = (undefined1 *)0x0;
          goto joined_r0x006e11f0;
        }
        if (plVar5 != (long *)(param_2 + 0x30)) {
          local_570 = (undefined1 *)(**(code **)(*plVar5 + 0x30))();
          goto joined_r0x006e11f0;
        }
        local_570 = auStack_590;
        (**(code **)(*plVar5 + 0x28))();
      }
      if (&local_5b0 != (long *)(param_2 + 0x10)) {
        local_5c0 = auStack_560;
        plVar5 = *(long **)(param_2 + 0x80);
        if (plVar5 == (long *)0x0) {
          local_540 = (undefined1 *)0x0;
        }
        else if (plVar5 == (long *)(param_2 + 0x60)) {
          local_540 = local_5c0;
          (**(code **)(*plVar5 + 0x28))();
        }
        else {
          local_540 = (undefined1 *)(**(code **)(*plVar5 + 0x30))();
        }
      }
      local_530 = *param_3;
      local_528 = param_3[1];
      if (local_528 != 0) {
        plVar5 = (long *)(local_528 + 8);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar2) {
            *plVar5 = *plVar5 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      local_520 = param_3[2];
      local_518 = param_3[3];
      if (local_518 != 0) {
        plVar5 = (long *)(local_518 + 8);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar2) {
            *plVar5 = *plVar5 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      local_510 = param_3[4];
      local_508 = param_3[5];
      if (local_508 != 0) {
        plVar5 = (long *)(local_508 + 8);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar2) {
            *plVar5 = *plVar5 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      local_500 = *(undefined1 *)(param_3 + 6);
      local_4f8 = *param_4;
      local_4f0 = param_4[1];
      if (local_4f0 != 0) {
        plVar5 = (long *)(local_4f0 + 8);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar2) {
            *plVar5 = *plVar5 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      local_4e8 = 0;
      local_4e0 = 0;
      local_4d8 = (void *)0x0;
      plVar5 = (long *)FUN_00612290();
      local_4d0 = plVar5;
      __n = strlen(param_5);
      if (0xffffffffffffffef < __n) {
                    /* try { // try from 006e1660 to 006e1667 has its CatchHandler @ 006e168c */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      if (__n < 0x17) {
        __dest = (void *)((long)&local_4e8 + 1);
        local_4e8 = CONCAT71(local_4e8._1_7_,(char)((int)__n << 1));
        if (__n != 0) goto LAB_006e1360;
      }
      else {
        uVar13 = __n + 0x10 & 0xfffffffffffffff0;
        __dest = (void *)(**(code **)(*plVar5 + 0x10))(plVar5,uVar13,1);
        local_4e8 = uVar13 | 1;
        local_4e0 = __n;
        local_4d8 = __dest;
LAB_006e1360:
        memcpy(__dest,param_5,__n);
      }
      *(undefined1 *)((long)__dest + __n) = 0;
                    /* try { // try from 006e137c to 006e1383 has its CatchHandler @ 006e16c4 */
      FUN_00294ef4(auStack_4c8,param_6);
      plVar12 = *(long **)(lVar10 + 0x198);
      puVar9 = *(undefined8 **)(lVar10 + 0x348);
      plVar6 = (long *)(**(code **)(*plVar12 + 0x10))(plVar12,0x138,8);
      plVar6[2] = 0;
      plVar7 = plVar6 + 1;
      *plVar7 = 0;
      puVar3 = PTR_DAT_04373098;
      plVar6[3] = (long)plVar12;
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
      plVar7 = (long *)(**(code **)(*plVar12 + 0x10))(plVar12,0x2b0,0x10);
      plVar7[2] = 0;
      plVar14 = plVar7 + 1;
      *plVar14 = 0;
      *plVar7 = (long)&PTR_LAB_0419ce88;
      plVar7[4] = (long)plVar12;
      FUN_007840dc(plVar7 + 6);
      plVar7[6] = (long)&PTR_LAB_0419ced8;
      lVar10 = (**(code **)(*plVar12 + 0x10))(plVar12,0x10000,0x10);
      if (lVar10 == 0) {
        local_1b0 = (long *)CONCAT44(local_1b0._4_4_,0x220);
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0,(Result *)&local_1b0,"");
      }
      FUN_00782cfc(plVar7 + 0xc,plVar5,0,lVar10,0x10000,1);
      plVar7[0x50] = (long)plVar12;
      plVar7[0x51] = 0x10000;
      plVar7[0xc] = (long)&PTR_LAB_0419cf20;
      plVar7[0x52] = (long)plVar5;
      plVar7[0x53] = (long)plVar6;
      *(undefined1 *)((long)plVar7 + 0x2a1) = 1;
                    /* try { // try from 006e14e8 to 006e14f3 has its CatchHandler @ 006e16a8 */
      FUN_006e1ca8(&local_450,&local_5b0);
                    /* try { // try from 006e14f4 to 006e14ff has its CatchHandler @ 006e16a4 */
      FUN_006e1ca8(&local_300,&local_450);
                    /* try { // try from 006e1500 to 006e150b has its CatchHandler @ 006e16a0 */
      FUN_006e1ca8(&local_1b0,&local_300);
                    /* try { // try from 006e1510 to 006e1517 has its CatchHandler @ 006e169c */
      FUN_006e1ca8(plVar7 + 0x26,&local_1b0);
      FUN_006e18cc(&local_1b0);
      FUN_006e18cc(&local_300);
      FUN_006e18cc(&local_450);
      local_2f8 = (long *)0x0;
      local_300 = 0;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar2) {
          *plVar14 = *plVar14 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      local_1b0 = plVar7 + 6;
      local_1a8 = plVar7;
      (**(code **)*puVar9)(puVar9,&local_1b0,&local_300);
      if (local_1a8 != (long *)0x0) {
        plVar12 = local_1a8 + 1;
        do {
          lVar10 = *plVar12;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar2) {
            *plVar12 = lVar10 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*local_1a8 + 0x10))(local_1a8);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (local_2f8 != (long *)0x0) {
        plVar12 = local_2f8 + 1;
        do {
          lVar10 = *plVar12;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar2) {
            *plVar12 = lVar10 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*local_2f8 + 0x10))(local_2f8);
          std::__shared_weak_count::__release_weak();
        }
      }
      *param_1 = (long)plVar5;
      param_1[1] = (long)plVar6;
      do {
        lVar10 = *plVar14;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar2) {
          *plVar14 = lVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        std::__shared_weak_count::__release_weak();
      }
      FUN_006e18cc(&local_5b0);
      goto LAB_006e1610;
    }
  }
  uVar11 = *(undefined8 *)(lVar10 + 400);
  local_2e8 = (long *)FUN_00612290();
  local_2f8 = (long *)0x0;
  local_300 = 0;
  local_2f0 = 0;
  local_2c8 = (long *)FUN_00612290();
  local_2d8 = 0;
  local_2e0 = 0;
  local_2d0 = 0;
  local_2a8 = (long *)FUN_00612290();
  local_2a0 = 0;
  local_2c0 = 0;
  local_2b0 = 0;
  local_2b8 = 0;
  local_448 = 0;
  local_440 = FUN_00612290();
  uStack_438 = 0;
  local_450 = &local_448;
  FUN_002a5138(&local_1b0,&local_300,0x10,"Library is shutting down.",&local_450);
                    /* try { // try from 006e111c to 006e112b has its CatchHandler @ 006e18c8 */
  local_458 = uVar11;
  FUN_002a6aa4(&local_5b0,&local_458,&local_1b0);
  param_1[1] = (long)plStack_5a8;
  *param_1 = local_5b0;
  FUN_00290f08(&local_1b0);
  FUN_02767254(&local_450,local_448);
  if ((local_2c0 & 1) != 0) {
    (**(code **)(*local_2a8 + 0x18))(local_2a8,local_2b0,local_2c0 & 0xfffffffffffffffe,1);
  }
  if ((local_2e0 & 1) != 0) {
    (**(code **)(*local_2c8 + 0x18))(local_2c8,local_2d0,local_2e0 & 0xfffffffffffffffe,1);
  }
  if ((local_300 & 1) != 0) {
    (**(code **)(*local_2e8 + 0x18))(local_2e8,local_2f0,local_300 & 0xfffffffffffffffe,1);
  }
  if (plVar4 == (long *)0x0) {
    return;
  }
LAB_006e1610:
  plVar5 = plVar4 + 1;
  do {
    lVar10 = *plVar5;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar2) {
      *plVar5 = lVar10 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar10 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    std::__shared_weak_count::__release_weak();
  }
  return;
}


