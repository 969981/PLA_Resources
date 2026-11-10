/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0275f710; name: FUN_0275f710
 */


undefined8 FUN_0275f710(long param_1,long *param_2)

{
  undefined **ppuVar1;
  long *plVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  char *pcVar9;
  undefined *puVar10;
  long *plVar11;
  undefined **local_2b8;
  undefined **local_2b0;
  undefined1 auStack_2a8 [32];
  undefined1 auStack_288 [32];
  undefined1 auStack_268 [32];
  undefined8 local_248;
  undefined8 uStack_240;
  undefined1 auStack_238 [32];
  undefined1 auStack_218 [32];
  undefined1 auStack_1f8 [32];
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined1 auStack_1c8 [8];
  undefined1 auStack_1c0 [32];
  undefined1 auStack_1a0 [32];
  undefined1 auStack_180 [32];
  undefined8 local_160;
  undefined8 uStack_158;
  undefined1 auStack_150 [32];
  undefined1 auStack_130 [32];
  undefined1 auStack_110 [32];
  undefined8 local_f0;
  undefined8 local_e8;
  undefined1 auStack_e0 [16];
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0 [3];
  long local_a8;
  long local_a0;
  long local_98;
  long *plStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  pcVar9 = (char *)(param_1 + 0x38);
  if (*pcVar9 != '\0') {
    return 0;
  }
  local_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = FUN_00612290();
  lVar8 = *param_2;
  lVar3 = param_2[1];
  if (lVar8 != lVar3) {
    do {
      local_2b8 = (undefined **)0x200000001;
      FUN_02760f2c(&local_a8,&local_2b8,2);
      local_2b0 = (undefined **)0x1;
      local_2b8 = (undefined **)0x100000000;
      FUN_02760fdc(&local_c8,&local_2b8,2);
      uVar6 = FUN_02daaf40();
      uVar7 = FUN_02daaf50();
      FUN_02daaf60(auStack_e0,uVar6,uVar7);
      FUN_027615e4(&local_2b8,lVar8,auStack_e0);
      FUN_02761044(auStack_1c8);
      FUN_027623c8(auStack_180,local_a8,local_a0);
      uVar6 = FUN_02daaf40();
      FUN_027610e4(auStack_1c8,uVar6,local_d0);
      FUN_02762970(auStack_130,local_c8,local_c0);
      local_e8 = 0x15180;
      local_2b8 = &PTR_LAB_0426b978;
      local_2b0 = &PTR_FUN_0426b958;
      FUN_02762fb0(auStack_2a8,auStack_1c0);
      FUN_02762fb0(auStack_288,auStack_1a0);
      FUN_02763008(auStack_268,auStack_180);
      local_248 = local_160;
      uStack_240 = uStack_158;
      FUN_02762fb0(auStack_238,auStack_150);
      FUN_027630b8(auStack_218,auStack_130);
      FUN_02762fb0(auStack_1f8,auStack_110);
      local_1d8 = local_f0;
      uStack_1d0 = local_e8;
      FUN_02761168(&local_88,&local_2b8);
      local_2b8 = &PTR_LAB_0426b978;
      FUN_0276123c(&local_2b0);
      FUN_0276123c(auStack_1c8);
      FUN_02762c44(&local_c8,local_c0[0]);
      if (local_a8 != 0) {
        local_a0 = local_a8;
        (**(code **)(*plStack_90 + 0x18))(plStack_90,local_a8,local_98 - local_a8,4);
      }
      lVar8 = lVar8 + 100;
    } while (lVar3 != lVar8);
  }
  FUN_00786218(&local_2b8,param_1 + 0x10,&local_88);
  FUN_02763398(pcVar9,&local_2b8);
  if (local_2b0 != (undefined **)0x0) {
    ppuVar1 = local_2b0 + 1;
    do {
      puVar10 = *ppuVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
      if (bVar5) {
        *ppuVar1 = puVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (puVar10 == (undefined *)0x0) {
      (**(code **)(*local_2b0 + 0x10))(local_2b0);
      std::__shared_weak_count::__release_weak();
      lVar8 = *(long *)(param_1 + 0x40);
      goto joined_r0x0275f9c8;
    }
  }
  lVar8 = *(long *)(param_1 + 0x40);
joined_r0x0275f9c8:
  if (lVar8 == 0) {
    if (*pcVar9 == '\0') {
      uVar6 = 0;
    }
    else {
      plVar11 = *(long **)(param_1 + 0x48);
      if (plVar11 != (long *)0x0) {
        plVar2 = plVar11 + 1;
        do {
          lVar8 = *plVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *plVar2 = lVar8 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
          std::__shared_weak_count::__release_weak();
        }
      }
      uVar6 = 0;
      *pcVar9 = '\0';
    }
  }
  else {
    uVar6 = 1;
  }
  FUN_0276342c(&local_88);
  return uVar6;
}


