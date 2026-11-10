/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006e9560; name: FUN_006e9560
 */


/* WARNING: Removing unreachable block (ram,0x006e9ddc) */
/* WARNING: Removing unreachable block (ram,0x006e9de0) */
/* WARNING: Removing unreachable block (ram,0x006e9de8) */
/* WARNING: Removing unreachable block (ram,0x006e9df0) */
/* WARNING: Removing unreachable block (ram,0x006e9df4) */

void FUN_006e9560(undefined8 *param_1,long *param_2,long param_3,undefined8 param_4,long *param_5,
                 long *param_6)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  undefined1 auStack_2a0 [64];
  undefined1 local_260;
  long local_258;
  long *plStack_250;
  long local_248;
  long *local_240;
  undefined1 auStack_238 [64];
  long *local_1f8;
  long *local_1f0;
  long local_1e8;
  long *plStack_1e0;
  undefined1 auStack_1d8 [64];
  undefined1 local_198;
  long local_190;
  long *plStack_188;
  long local_180;
  long *local_178;
  long *local_170;
  long *local_168;
  long local_160;
  long *plStack_158;
  undefined1 auStack_150 [64];
  undefined1 local_110;
  long local_108;
  long *plStack_100;
  long local_f8;
  long *local_f0;
  long *local_e8;
  long *local_e0;
  long local_d8;
  long *plStack_d0;
  undefined1 auStack_c8 [64];
  undefined1 local_88;
  long local_80;
  long *plStack_78;
  long local_70;
  long *local_68;
  
  FUN_00704548(auStack_238,param_3,param_4);
  lVar7 = *param_2;
  lVar12 = *(long *)(*(long *)(lVar7 + 8) + 0x48);
  plVar10 = (long *)*param_6;
  plVar11 = (long *)param_6[1];
  if (plVar11 != (long *)0x0) {
    plVar1 = plVar11 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    lVar7 = *param_2;
  }
  lVar8 = param_2[1];
  if (lVar8 != 0) {
    plVar1 = (long *)(lVar8 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_006e9ed8(auStack_2a0,auStack_238);
  local_260 = *(undefined1 *)(param_3 + 0xa0);
  local_258 = *(long *)(param_3 + 0xa8);
  plStack_250 = *(long **)(param_3 + 0xb0);
  if (plStack_250 != (long *)0x0) {
    plVar1 = (long *)((long)plStack_250 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  local_248 = *param_5;
  local_240 = (long *)param_5[1];
  if (local_240 != (long *)0x0) {
    plVar1 = local_240 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar14 = *(long **)(lVar12 + 0x198);
  puVar9 = *(undefined8 **)(lVar12 + 0x348);
  plVar5 = (long *)(**(code **)(*plVar14 + 0x10))(plVar14,0xe0,8);
  plVar5[2] = 0;
  plVar6 = plVar5 + 1;
  *plVar6 = 0;
  puVar4 = PTR_DAT_043758d0;
  plVar5[3] = (long)plVar14;
  plVar1 = plVar5 + 4;
  *plVar5 = (long)(puVar4 + 0x10);
  FUN_00782ef8(plVar1);
  plVar5[4] = (long)(PTR_DAT_043758d8 + 0x10);
  nn::os::InitializeEvent(plVar5 + 6,0,0);
  plVar5[4] = (long)(PTR_DAT_043758e0 + 0x10);
  nn::os::InitializeMutex((MutexType *)(plVar5 + 0xb),false,0);
  *(undefined1 *)(plVar5 + 0x1b) = 0;
  if (plVar5 != (long *)0x0) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar6 = (long *)(**(code **)(*plVar14 + 0x10))(plVar14,0x1c8,8);
  plVar6[2] = 0;
  plVar13 = plVar6 + 1;
  *plVar13 = 0;
  *plVar6 = (long)&PTR_LAB_0419d1b8;
  plVar6[3] = (long)plVar14;
  FUN_007840dc();
  plVar6[4] = (long)&PTR_LAB_0419d208;
  lVar12 = (**(code **)(*plVar14 + 0x10))(plVar14,0x10000,0x10);
  if (lVar12 == 0) {
    local_e8 = (long *)CONCAT44(local_e8._4_4_,0x220);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0,(Result *)&local_e8,"");
  }
  FUN_00782cfc(plVar6 + 10,plVar1,0,lVar12,0x10000,1);
  plVar6[10] = (long)&PTR_LAB_0419d250;
  plVar6[0x34] = (long)plVar14;
  plVar6[0x35] = 0x10000;
  *(undefined1 *)((long)plVar6 + 0x1c1) = 1;
  plVar6[0x36] = (long)plVar1;
  plVar6[0x37] = (long)plVar5;
  if (plVar11 != (long *)0x0) {
    plVar14 = plVar11 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar3) {
        *plVar14 = *plVar14 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  local_1f8 = plVar10;
  local_1f0 = plVar11;
  local_1e8 = lVar7;
  plStack_1e0 = (long *)lVar8;
  FUN_006e9ed8(auStack_1d8,auStack_2a0);
  plStack_158 = plStack_1e0;
  local_160 = local_1e8;
  plStack_188 = plStack_250;
  local_190 = local_258;
  local_198 = local_260;
  local_258 = 0;
  plStack_250 = (long *)0x0;
  local_180 = local_248;
  local_178 = local_240;
  if (local_240 != (long *)0x0) {
    plVar10 = local_240 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = *plVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  local_170 = local_1f8;
  local_168 = local_1f0;
  if (local_1f0 != (long *)0x0) {
    plVar10 = local_1f0 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = *plVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  local_1e8 = 0;
  plStack_1e0 = (long *)0x0;
  FUN_006e9ed8(auStack_150,auStack_1d8);
  plStack_d0 = plStack_158;
  local_d8 = local_160;
  plStack_100 = plStack_188;
  local_108 = local_190;
  local_110 = local_198;
  local_190 = 0;
  plStack_188 = (long *)0x0;
  local_f8 = local_180;
  local_f0 = local_178;
  if (local_178 != (long *)0x0) {
    plVar10 = local_178 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = *plVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  local_e8 = local_170;
  local_e0 = local_168;
  if (local_168 != (long *)0x0) {
    plVar10 = local_168 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = *plVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  local_160 = 0;
  plStack_158 = (long *)0x0;
  FUN_006e9ed8(auStack_c8,auStack_150);
  plStack_78 = plStack_100;
  local_80 = local_108;
  local_88 = local_110;
  local_108 = 0;
  plStack_100 = (long *)0x0;
  local_68 = local_f0;
  local_70 = local_f8;
  if (local_f0 != (long *)0x0) {
    plVar10 = local_f0 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = *plVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar6[0x23] = (long)local_e8;
  plVar6[0x24] = (long)local_e0;
  if (local_e0 != (long *)0x0) {
    plVar10 = local_e0 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = *plVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar6[0x26] = (long)plStack_d0;
  plVar6[0x25] = local_d8;
  local_d8 = 0;
  plStack_d0 = (long *)0x0;
  FUN_006e9ed8(plVar6 + 0x27,auStack_c8);
  *(undefined1 *)(plVar6 + 0x2f) = local_88;
  plVar6[0x31] = (long)plStack_78;
  plVar6[0x30] = local_80;
  local_80 = 0;
  plStack_78 = (long *)0x0;
  plVar6[0x32] = local_70;
  plVar6[0x33] = (long)local_68;
  if (local_68 != (long *)0x0) {
    plVar10 = local_68 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = *plVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (local_68 != (long *)0x0) {
      plVar10 = local_68 + 1;
      do {
        lVar7 = *plVar10;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar3) {
          *plVar10 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*local_68 + 0x10))(local_68);
        std::__shared_weak_count::__release_weak();
      }
    }
  }
  if (plStack_78 != (long *)0x0) {
    plVar10 = plStack_78 + 1;
    do {
      lVar7 = *plVar10;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_78 + 0x10))(plStack_78);
      std::__shared_weak_count::__release_weak();
    }
  }
  FUN_00713674(auStack_c8);
  if (plStack_d0 != (long *)0x0) {
    plVar10 = plStack_d0 + 1;
    do {
      lVar7 = *plVar10;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_d0 + 0x10))(plStack_d0);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_e0 != (long *)0x0) {
    plVar10 = local_e0 + 1;
    do {
      lVar7 = *plVar10;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*local_e0 + 0x10))(local_e0);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_f0 != (long *)0x0) {
    plVar10 = local_f0 + 1;
    do {
      lVar7 = *plVar10;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*local_f0 + 0x10))(local_f0);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (plStack_100 != (long *)0x0) {
    plVar10 = plStack_100 + 1;
    do {
      lVar7 = *plVar10;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_100 + 0x10))(plStack_100);
      std::__shared_weak_count::__release_weak();
    }
  }
  FUN_00713674(auStack_150);
  if (plStack_158 != (long *)0x0) {
    plVar10 = plStack_158 + 1;
    do {
      lVar7 = *plVar10;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_158 + 0x10))(plStack_158);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_168 != (long *)0x0) {
    plVar10 = local_168 + 1;
    do {
      lVar7 = *plVar10;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*local_168 + 0x10))(local_168);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_178 != (long *)0x0) {
    plVar10 = local_178 + 1;
    do {
      lVar7 = *plVar10;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*local_178 + 0x10))(local_178);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (plStack_188 != (long *)0x0) {
    plVar10 = plStack_188 + 1;
    do {
      lVar7 = *plVar10;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_188 + 0x10))(plStack_188);
      std::__shared_weak_count::__release_weak();
    }
  }
  FUN_00713674(auStack_1d8);
  if (plStack_1e0 != (long *)0x0) {
    plVar10 = plStack_1e0 + 1;
    do {
      lVar7 = *plVar10;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_1e0 + 0x10))(plStack_1e0);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_1f0 != (long *)0x0) {
    plVar10 = local_1f0 + 1;
    do {
      lVar7 = *plVar10;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*local_1f0 + 0x10))(local_1f0);
      std::__shared_weak_count::__release_weak();
    }
  }
  local_170 = (long *)0x0;
  local_168 = (long *)0x0;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar3) {
      *plVar13 = *plVar13 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  local_e8 = plVar6 + 4;
  local_e0 = plVar6;
  (**(code **)*puVar9)(puVar9,&local_e8,&local_170);
  if (local_e0 != (long *)0x0) {
    plVar10 = local_e0 + 1;
    do {
      lVar7 = *plVar10;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*local_e0 + 0x10))(local_e0);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_168 != (long *)0x0) {
    plVar10 = local_168 + 1;
    do {
      lVar7 = *plVar10;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*local_168 + 0x10))(local_168);
      std::__shared_weak_count::__release_weak();
    }
  }
  *param_1 = plVar1;
  param_1[1] = plVar5;
  do {
    lVar7 = *plVar13;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar3) {
      *plVar13 = lVar7 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar7 == 0) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    std::__shared_weak_count::__release_weak();
  }
  if (local_240 != (long *)0x0) {
    plVar10 = local_240 + 1;
    do {
      lVar7 = *plVar10;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*local_240 + 0x10))(local_240);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (plStack_250 != (long *)0x0) {
    plVar10 = plStack_250 + 1;
    do {
      lVar7 = *plVar10;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_250 + 0x10))(plStack_250);
      std::__shared_weak_count::__release_weak();
    }
  }
  FUN_00713674(auStack_2a0);
  if (plVar11 != (long *)0x0) {
    plVar10 = plVar11 + 1;
    do {
      lVar7 = *plVar10;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      std::__shared_weak_count::__release_weak();
    }
  }
  FUN_00713674(auStack_238);
  return;
}


