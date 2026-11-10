/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0275fc50; name: FUN_0275fc50
 */


undefined8 FUN_0275fc50(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  char *pcVar8;
  undefined **local_e8;
  long *local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  
  pcVar8 = (char *)(param_1 + 0x70);
  if (*pcVar8 != '\0') {
    return 0;
  }
  local_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = FUN_00612290();
  lVar5 = *param_2;
  lVar2 = param_2[1];
  if (lVar5 != lVar2) {
    do {
      local_e8 = &PTR_FUN_0426b998;
      FUN_027635a8(&local_e0,lVar5);
      FUN_027635a8(&local_c0,&DAT_03996322);
      FUN_027634b0(&local_a0,&local_e8);
      FUN_02763530(&local_e8);
      lVar5 = lVar5 + 0x18;
    } while (lVar2 != lVar5);
  }
  FUN_00786b68(&local_e8,param_1 + 0x10,&local_a0);
  FUN_027639e4(pcVar8,&local_e8);
  if (local_e0 != (long *)0x0) {
    plVar7 = local_e0 + 1;
    do {
      lVar5 = *plVar7;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*local_e0 + 0x10))(local_e0);
      std::__shared_weak_count::__release_weak();
      lVar5 = *(long *)(param_1 + 0x78);
      goto joined_r0x0275fd60;
    }
  }
  lVar5 = *(long *)(param_1 + 0x78);
joined_r0x0275fd60:
  if (lVar5 == 0) {
    if (*pcVar8 == '\0') {
      uVar6 = 0;
    }
    else {
      plVar7 = *(long **)(param_1 + 0x80);
      if (plVar7 != (long *)0x0) {
        plVar1 = plVar7 + 1;
        do {
          lVar5 = *plVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar5 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar5 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
          std::__shared_weak_count::__release_weak();
        }
      }
      uVar6 = 0;
      *pcVar8 = '\0';
    }
  }
  else {
    local_80 = *(undefined8 *)(param_1 + 8);
    local_68 = 0;
    local_78 = 0xaaaaaaaaaaaaaaa;
    uStack_70 = 0;
    FUN_02763a78(&local_e8,param_2,&local_80);
    FUN_02763c84(param_1 + 0x38);
    *(undefined4 *)(param_1 + 0x68) = local_b8;
    *(undefined8 *)(param_1 + 0x58) = uStack_c8;
    *(undefined8 *)(param_1 + 0x60) = local_c0;
    *(undefined8 *)(param_1 + 0x50) = local_d0;
    *(undefined ***)(param_1 + 0x38) = local_e8;
    *(long **)(param_1 + 0x40) = local_e0;
    *(undefined8 *)(param_1 + 0x48) = local_d8;
    local_e0 = (long *)0x0;
    local_d8 = 0;
    local_e8 = (undefined **)0x0;
    FUN_02763dac(&local_e8);
    uVar6 = 1;
  }
  FUN_02763ed4(&local_a0);
  return uVar6;
}


