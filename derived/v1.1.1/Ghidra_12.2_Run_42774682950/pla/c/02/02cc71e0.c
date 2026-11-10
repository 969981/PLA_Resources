/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02cc71e0; name: FUN_02cc71e0
 */


undefined8
FUN_02cc71e0(long param_1,int *param_2,long *param_3,undefined8 *param_4,undefined8 *param_5)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  long *plVar8;
  size_t sVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  code *pcVar13;
  long lVar14;
  undefined8 uVar15;
  long *plVar16;
  long *plVar17;
  long *local_3d8;
  long *local_3d0;
  undefined8 local_3c8;
  ulong local_3c0;
  undefined8 local_3b8;
  undefined8 local_3b0;
  long *local_3a8;
  undefined4 local_3a0 [20];
  undefined1 auStack_350 [80];
  undefined1 auStack_300 [80];
  undefined1 auStack_2b0 [64];
  undefined1 auStack_270 [24];
  long *local_258;
  long *local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_118;
  undefined8 local_110;
  long *local_108;
  long *local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  long *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  if (((param_3 == (long *)0x0) || (*(long *)(param_1 + 0x200) != 0)) ||
     (*(char *)(param_1 + 0x1e0) != '\0')) {
    return 0;
  }
  plVar10 = *(long **)(param_1 + 0xa8);
  plVar11 = *(long **)(param_1 + 0xb0);
LAB_02cc7254:
  if (plVar11 != plVar10) {
    while( true ) {
      plVar11 = plVar11 + -1;
      plVar8 = (long *)*plVar11;
      if (plVar8 == (long *)0x0) break;
      lVar12 = plVar8[0xb];
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        iVar2 = *piVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar2 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar2 + -1 != 0) break;
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*plVar8 + 0x20))();
      if (plVar11 == plVar10) goto LAB_02cc7298;
    }
    goto LAB_02cc7254;
  }
LAB_02cc7298:
  *(long **)(param_1 + 0xb0) = plVar10;
  local_3c8 = 0;
  local_3c0 = 1;
  local_3b8 = CONCAT44(local_3b8._4_4_,0x10);
  local_3b0 = FUN_00612290();
  local_3a8 = (long *)FUN_00612330();
  FUN_0060fd9c(auStack_270);
  FUN_0060ff48(local_3a0,&local_3c8,auStack_270);
  FUN_0060fe14(auStack_270);
  FUN_0060ff48(auStack_350,&local_3c8,auStack_270);
  FUN_0060fe8c(auStack_270);
  FUN_0060ff48(auStack_300,&local_3c8,auStack_270);
  FUN_0060ff04(auStack_270);
  FUN_0060ffd0(auStack_2b0,&local_3c8,auStack_270);
  memcpy(auStack_270,&local_3c8,0x158);
  local_118 = 3;
  local_d8 = local_178;
  local_d0 = local_170;
  uStack_c8 = local_168;
  local_f8 = local_198;
  local_c0 = local_160;
  local_f0 = local_190;
  uStack_e8 = local_188;
  local_e0 = local_180;
  local_108 = local_1a8;
  local_110 = 0;
  local_100 = (long *)0x0;
  FUN_0060ff48(&local_b8,auStack_270,&local_108);
  local_178 = local_88;
  local_170 = uStack_80;
  local_168 = local_78;
  local_160 = uStack_70;
  local_198 = local_a8;
  local_190 = uStack_a0;
  local_188 = local_98;
  local_180 = uStack_90;
  local_1a8 = (long *)local_b8;
  local_1a0 = local_b0;
  if (*param_2 == 2) {
    local_3c8 = (ulong)local_3c8._4_4_ << 0x20;
  }
  else {
    if (*param_2 == 1) {
      local_3c8 = CONCAT44(local_3c8._4_4_,2);
      local_3c0 = 0;
      local_3b8 = 0;
      local_3b0 = 0;
      local_3a8 = (long *)FUN_00612290();
      sVar9 = strlen((char *)(param_2 + 1));
      FUN_027625d0(&local_3c0,param_2 + 1,sVar9);
      goto LAB_02cc7458;
    }
    local_3c8 = CONCAT44(local_3c8._4_4_,1);
  }
  local_3c0 = 0;
  local_3b8 = 0;
  local_3b0 = 0;
  local_3a8 = (long *)FUN_00612290();
  local_3c0 = local_3c0 & 0xffffffffffff0000;
LAB_02cc7458:
  local_3a0[0] = 0;
  plVar10 = (long *)FUN_00612290();
  plVar11 = (long *)(**(code **)(*plVar10 + 0x10))(plVar10,0x50,8);
  plVar11[2] = 0;
  plVar8 = plVar11 + 1;
  *plVar8 = 0;
  *plVar11 = (long)&PTR_LAB_04296d10;
  puVar7 = PTR_DAT_04388348;
  plVar11[3] = (long)plVar10;
  plVar10 = plVar11 + 4;
  *plVar10 = (long)(puVar7 + 0x10);
  plVar11[5] = 0;
  plVar11[6] = 0;
  lVar14 = param_3[2];
  lVar12 = param_3[1];
  plVar11[7] = *param_3;
  plVar11[8] = lVar12;
  plVar11[9] = lVar14;
  *plVar10 = (long)&PTR_LAB_04296d48;
  if (plVar11 != (long *)0x0) {
    plVar16 = plVar11 + 2;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar6) {
        *plVar8 = *plVar8 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar6) {
        *plVar16 = *plVar16 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar11[5] = (long)plVar10;
  plVar11[6] = (long)plVar11;
  do {
    lVar12 = *plVar8;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar6) {
      *plVar8 = lVar12 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (lVar12 == 0) {
    (**(code **)(*plVar11 + 0x10))(plVar11);
    std::__shared_weak_count::__release_weak();
  }
  plVar8 = local_258;
  local_108 = plVar10;
  local_100 = plVar11;
  plVar11 = (long *)(**(code **)(*local_258 + 0x10))(local_258,0x60,8);
  *plVar11 = (long)&PTR_LAB_04296d70;
  plVar11[1] = 0;
  plVar11[2] = 0;
  plVar11[3] = (long)plVar8;
  plVar8 = (long *)(**(code **)(*local_258 + 0x10))(local_258,0x670,8);
  plVar16 = plVar8 + 1;
  *plVar16 = 0;
  plVar17 = plVar8 + 2;
  *plVar17 = 0;
  plVar8[3] = (long)local_258;
  *plVar8 = (long)&PTR_LAB_04296da8;
  plVar10 = plVar8 + 4;
  FUN_00610024(plVar10,auStack_270);
  lVar12 = plVar8[5];
  if ((lVar12 == 0) || (*(long *)(lVar12 + 8) == -1)) {
    if (plVar8 != (long *)0x0) {
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar6) {
          *plVar16 = *plVar16 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar6) {
          *plVar17 = *plVar17 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    plVar8[4] = (long)plVar10;
    plVar8[5] = (long)plVar8;
    if (lVar12 != 0) {
      std::__shared_weak_count::__release_weak();
    }
    do {
      lVar12 = *plVar16;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar6) {
        *plVar16 = lVar12 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      std::__shared_weak_count::__release_weak();
    }
  }
  plVar11[4] = (long)plVar10;
  plVar11[5] = (long)plVar8;
  plVar11[6] = 0;
  plVar11[7] = 0;
  nn::os::InitializeMutex((MutexType *)(plVar11 + 8),false,0);
  local_3d8 = plVar11 + 4;
  local_3d0 = plVar11;
  FUN_00291234(&local_b8,"e047112f",&local_108,&local_3c8,&local_3d8);
  plVar10 = local_b0;
  uVar15 = local_b8;
  local_b8 = 0;
  local_b0 = (long *)0x0;
  plVar11 = *(long **)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0x98) = uVar15;
  *(long **)(param_1 + 0xa0) = plVar10;
  if (plVar11 != (long *)0x0) {
    plVar10 = plVar11 + 1;
    do {
      lVar12 = *plVar10;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar6) {
        *plVar10 = lVar12 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_b0 != (long *)0x0) {
    plVar10 = local_b0 + 1;
    do {
      lVar12 = *plVar10;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar6) {
        *plVar10 = lVar12 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*local_b0 + 0x10))(local_b0);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_3d0 != (long *)0x0) {
    plVar10 = local_3d0 + 1;
    do {
      lVar12 = *plVar10;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar6) {
        *plVar10 = lVar12 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*local_3d0 + 0x10))(local_3d0);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_100 != (long *)0x0) {
    plVar10 = local_100 + 1;
    do {
      lVar12 = *plVar10;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar6) {
        *plVar10 = lVar12 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*local_100 + 0x10))(local_100);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (*(long *)(param_1 + 0x98) == 0) {
    uVar15 = 0;
  }
  else {
    FUN_00290d74(&local_b8);
    plVar10 = local_b0;
    uVar15 = local_b8;
    local_b8 = 0;
    local_b0 = (long *)0x0;
    plVar11 = *(long **)(param_1 + 0x208);
    *(undefined8 *)(param_1 + 0x200) = uVar15;
    *(long **)(param_1 + 0x208) = plVar10;
    if (plVar11 != (long *)0x0) {
      plVar10 = plVar11 + 1;
      do {
        lVar12 = *plVar10;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar6) {
          *plVar10 = lVar12 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar12 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
        std::__shared_weak_count::__release_weak();
      }
    }
    if (local_b0 != (long *)0x0) {
      plVar10 = local_b0 + 1;
      do {
        lVar12 = *plVar10;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar6) {
          *plVar10 = lVar12 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar12 == 0) {
        (**(code **)(*local_b0 + 0x10))(local_b0);
        std::__shared_weak_count::__release_weak();
      }
    }
    pcVar13 = *(code **)(param_1 + 0xe8);
    if (pcVar13 != (code *)0x0) {
      *(undefined8 *)(param_1 + 0xf0) = 0;
      *(undefined8 *)(param_1 + 0xf8) = 0;
      *(undefined8 *)(param_1 + 0xe0) = 0;
      *(undefined8 *)(param_1 + 0xe8) = 0;
      (*pcVar13)(param_1 + 0x100);
    }
    if ((code *)param_4[2] != (code *)0x0) {
      (*(code *)param_4[2])(param_4 + 4,param_1 + 0x100);
      uVar15 = *param_4;
      uVar3 = param_4[1];
      uVar4 = param_4[3];
      *(undefined8 *)(param_1 + 0xf0) = param_4[2];
      *(undefined8 *)(param_1 + 0xf8) = uVar4;
      *(undefined8 *)(param_1 + 0xe0) = uVar15;
      *(undefined8 *)(param_1 + 0xe8) = uVar3;
    }
    pcVar13 = *(code **)(param_1 + 0x168);
    if (pcVar13 != (code *)0x0) {
      *(undefined8 *)(param_1 + 0x170) = 0;
      *(undefined8 *)(param_1 + 0x178) = 0;
      *(undefined8 *)(param_1 + 0x160) = 0;
      *(undefined8 *)(param_1 + 0x168) = 0;
      (*pcVar13)(param_1 + 0x180);
    }
    if ((code *)param_5[2] != (code *)0x0) {
      (*(code *)param_5[2])(param_5 + 4,param_1 + 0x180);
      uVar15 = *param_5;
      uVar3 = param_5[1];
      uVar4 = param_5[3];
      *(undefined8 *)(param_1 + 0x170) = param_5[2];
      *(undefined8 *)(param_1 + 0x178) = uVar4;
      *(undefined8 *)(param_1 + 0x160) = uVar15;
      *(undefined8 *)(param_1 + 0x168) = uVar3;
    }
    uVar15 = 1;
  }
  if ((local_3c0 & 1) != 0) {
    (**(code **)(*local_3a8 + 0x18))(local_3a8,local_3b0,local_3c0 & 0xfffffffffffffffe,1);
  }
  return uVar15;
}


