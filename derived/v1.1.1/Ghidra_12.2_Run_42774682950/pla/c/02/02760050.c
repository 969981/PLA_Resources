/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02760050; name: FUN_02760050
 */


undefined8 FUN_02760050(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char *pcVar7;
  long lVar8;
  long *plVar9;
  undefined **local_1d0;
  long *local_1c8 [4];
  undefined1 auStack_1a8 [16];
  undefined **local_198;
  undefined1 auStack_190 [32];
  undefined1 auStack_170 [16];
  undefined **local_160;
  undefined1 auStack_158 [32];
  undefined1 auStack_138 [16];
  undefined1 auStack_128 [32];
  undefined1 auStack_108 [104];
  undefined1 auStack_a0 [16];
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  pcVar7 = (char *)(param_1 + 0x70);
  if (*pcVar7 != '\0') {
    return 0;
  }
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  local_70 = FUN_00612290();
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_1 + 0x38);
  lVar8 = *param_2;
  lVar2 = param_2[1];
  if (lVar8 != lVar2) {
    do {
      uVar5 = FUN_02daaf40();
      uVar6 = FUN_02daaf50();
      FUN_02daaf60(auStack_a0,uVar5,uVar6);
      FUN_027615e4(&local_1d0,lVar8,auStack_a0);
      FUN_0079c848(&local_1d0,1,1);
      FUN_0079ca54(&local_198,0x278d00);
      uVar5 = FUN_02daaf40();
      FUN_0079c640(&local_160,uVar5,local_90);
      FUN_02763f58(auStack_128,&local_1d0,3);
      FUN_02763fc4(auStack_108,lVar8 + 100,auStack_128,lVar8 + 0x7c);
      FUN_02764720(auStack_128);
      local_160 = &PTR_LAB_0426b9b8;
      FUN_006e4b9c(auStack_138);
      FUN_027647a4(auStack_158);
      local_198 = &PTR_LAB_0426b9b8;
      FUN_006e4b9c(auStack_170);
      FUN_027647a4(auStack_190);
      local_1d0 = &PTR_LAB_0426b9b8;
      FUN_006e4b9c(auStack_1a8);
      FUN_027647a4(local_1c8);
      FUN_02764050(&local_88,auStack_108);
      FUN_027640dc((undefined8 *)(param_1 + 0x38),lVar8 + 100);
      FUN_02764130(auStack_108);
      lVar8 = lVar8 + 0x94;
    } while (lVar8 != lVar2);
  }
  FUN_00788ed4(&local_1d0,param_1 + 0x10,&local_88);
  FUN_0276508c(pcVar7,&local_1d0);
  if (local_1c8[0] != (long *)0x0) {
    plVar9 = local_1c8[0] + 1;
    do {
      lVar8 = *plVar9;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *plVar9 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*local_1c8[0] + 0x10))(local_1c8[0]);
      std::__shared_weak_count::__release_weak();
      lVar8 = *(long *)(param_1 + 0x78);
      goto joined_r0x0276024c;
    }
  }
  lVar8 = *(long *)(param_1 + 0x78);
joined_r0x0276024c:
  if (lVar8 == 0) {
    if (*pcVar7 == '\0') {
      uVar5 = 0;
    }
    else {
      plVar9 = *(long **)(param_1 + 0x80);
      if (plVar9 != (long *)0x0) {
        plVar1 = plVar9 + 1;
        do {
          lVar8 = *plVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
          std::__shared_weak_count::__release_weak();
        }
      }
      uVar5 = 0;
      *pcVar7 = '\0';
    }
  }
  else {
    uVar5 = 1;
  }
  FUN_02765120(&local_88);
  return uVar5;
}


