/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02760b48; name: FUN_02760b48
 */


undefined8 FUN_02760b48(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  code *pcVar6;
  long lVar7;
  char *pcVar8;
  undefined8 uVar9;
  char *pcVar10;
  long *plVar11;
  byte *local_c0;
  long *local_b8;
  long local_b0;
  undefined **local_a8;
  long *local_a0;
  undefined8 local_98;
  long *plStack_90;
  byte local_80;
  undefined7 uStack_7f;
  long *local_78;
  undefined8 local_70;
  long *plStack_68;
  undefined8 *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  pcVar10 = (char *)(param_1 + 0x50);
  if ((*pcVar10 == '\0') && (pcVar8 = (char *)(param_1 + 0x38), *pcVar8 == '\0')) {
    local_58 = 0;
    local_50 = FUN_00612290();
    uStack_48 = 0;
    lVar7 = *param_2;
    lVar2 = param_2[1];
    local_60 = &local_58;
    if (lVar7 != lVar2) {
      do {
        FUN_027635a8(&local_a8,lVar7 + 0x18);
        FUN_027635a8(&local_80,lVar7);
        local_c0 = &local_80;
        lVar5 = FUN_027654d0(&local_60,&local_80,&local_c0);
        FUN_02762668(lVar5 + 0x40,&local_a8);
        if ((local_80 & 1) != 0) {
          (**(code **)(*plStack_68 + 0x18))
                    (plStack_68,local_70,CONCAT71(uStack_7f,local_80) & 0xfffffffffffffffe,1);
        }
        if (((ulong)local_a8 & 1) != 0) {
          (**(code **)(*plStack_90 + 0x18))
                    (plStack_90,local_98,(ulong)local_a8 & 0xfffffffffffffffe,1);
        }
        lVar7 = lVar7 + 0x30;
      } while (lVar2 != lVar7);
    }
    uVar9 = FUN_00612290();
    FUN_00783f38(&local_a8,uVar9);
    FUN_02765714(pcVar8,&local_a8);
    if (local_a0 != (long *)0x0) {
      plVar11 = local_a0 + 1;
      do {
        lVar7 = *plVar11;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar4) {
          *plVar11 = lVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*local_a0 + 0x10))(local_a0);
        std::__shared_weak_count::__release_weak();
      }
    }
    local_a8 = &PTR_LAB_0426ba68;
    FUN_02766d04(&local_a0,&local_60);
    local_b0 = param_1;
    FUN_00783fac(&local_c0,param_1 + 0x40);
    FUN_02765444(&local_80,param_1 + 0x10,&local_a8,&local_b0,&local_c0);
    FUN_027671c0(pcVar10,&local_80);
    if (local_78 != (long *)0x0) {
      plVar11 = local_78 + 1;
      do {
        lVar7 = *plVar11;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar4) {
          *plVar11 = lVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*local_78 + 0x10))(local_78);
        std::__shared_weak_count::__release_weak();
      }
    }
    if (local_b8 != (long *)0x0) {
      plVar11 = local_b8 + 1;
      do {
        lVar7 = *plVar11;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar4) {
          *plVar11 = lVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*local_b8 + 0x10))(local_b8);
        std::__shared_weak_count::__release_weak();
      }
    }
    local_a8 = &PTR_LAB_0426ba68;
    FUN_02767254(&local_a0,local_98);
    if (*(long *)(param_1 + 0x58) == 0) {
      if (*pcVar10 != '\0') {
        plVar11 = *(long **)(param_1 + 0x60);
        if (plVar11 != (long *)0x0) {
          plVar1 = plVar11 + 1;
          do {
            lVar7 = *plVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = lVar7 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar7 == 0) {
            (**(code **)(*plVar11 + 0x10))(plVar11);
            std::__shared_weak_count::__release_weak();
          }
        }
        *pcVar10 = '\0';
      }
      if (*pcVar8 == '\0') {
        uVar9 = 0;
      }
      else {
        plVar11 = *(long **)(param_1 + 0x48);
        if (plVar11 != (long *)0x0) {
          plVar1 = plVar11 + 1;
          do {
            lVar7 = *plVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = lVar7 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar7 == 0) {
            (**(code **)(*plVar11 + 0x10))(plVar11);
            std::__shared_weak_count::__release_weak();
          }
        }
        uVar9 = 0;
        *pcVar8 = '\0';
      }
    }
    else {
      pcVar6 = *(code **)(param_1 + 0x70);
      if (pcVar6 != (code *)0x0) {
        (*pcVar6)(param_1 + 0x90);
        pcVar6 = *(code **)(param_1 + 0x78);
        if (pcVar6 != (code *)0x0) {
          *(undefined8 *)(param_1 + 0x80) = 0;
          *(undefined8 *)(param_1 + 0x88) = 0;
          *(undefined8 *)(param_1 + 0x70) = 0;
          *(undefined8 *)(param_1 + 0x78) = 0;
          (*pcVar6)(param_1 + 0x90);
        }
      }
      uVar9 = 1;
    }
    FUN_02767254(&local_60,local_58);
  }
  else {
    uVar9 = 0;
  }
  return uVar9;
}


