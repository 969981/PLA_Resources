/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0061687c; name: FUN_0061687c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0061687c(undefined8 *param_1,long *param_2)

{
  undefined *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long *local_d0;
  long lStack_c8;
  long local_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long local_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long *local_80;
  long *plStack_78;
  char *local_70;
  long *local_68;
  long *local_58;
  long *local_50;
  MutexType *local_48;
  char *local_38;
  
  lVar9 = FUN_0061217c();
  lStack_c8 = param_2[1];
  local_d0 = (long *)*param_2;
  local_48 = (MutexType *)(lVar9 + 0x20);
  lStack_b8 = param_2[3];
  local_c0 = param_2[2];
  lStack_a8 = param_2[5];
  lStack_b0 = param_2[4];
  lStack_98 = param_2[7];
  local_a0 = param_2[6];
  lStack_88 = param_2[9];
  lStack_90 = param_2[8];
  local_38 = "nn::npln::SharedThreadPool";
  nn::os::LockMutex(local_48);
  local_58 = (long *)0x0;
  local_50 = (long *)0x0;
  local_70 = (char *)0x0;
  local_68 = (long *)FUN_00612290();
  local_70 = (char *)(**(code **)(*local_68 + 0x10))(local_68,0x20,1);
  uVar8 = s_nn__npln__SharedThreadPool_038fb775._18_8_;
  uVar7 = s_nn__npln__SharedThreadPool_038fb775._0_8_;
  uVar6 = CONCAT26(s_nn__npln__SharedThreadPool_038fb775._16_2_,
                   s_nn__npln__SharedThreadPool_038fb775._10_6_);
  plStack_78 = _UNK_038897f8;
  local_80 = _DAT_038897f0;
  uVar5 = CONCAT62(s_nn__npln__SharedThreadPool_038fb775._10_6_,
                   s_nn__npln__SharedThreadPool_038fb775._8_2_);
  local_70[0x1a] = '\0';
  *(undefined8 *)(local_70 + 0x12) = uVar8;
  *(undefined8 *)(local_70 + 10) = uVar6;
  *(undefined8 *)(local_70 + 8) = uVar5;
  *(undefined8 *)local_70 = uVar7;
                    /* try { // try from 00616918 to 00616923 has its CatchHandler @ 00616b80 */
  lVar10 = FUN_00616c8c(lVar9,&local_80);
  if (((ulong)local_80 & 1) != 0) {
    (**(code **)(*local_68 + 0x18))(local_68,local_70,(ulong)local_80 & 0xfffffffffffffffe,1);
  }
  plVar2 = local_d0;
  if (lVar9 + 8 == lVar10) {
    plVar11 = (long *)(**(code **)(*local_d0 + 0x10))(local_d0,0x38,8);
    *plVar11 = (long)(PTR_DAT_04375468 + 0x10);
    plVar11[1] = 0;
    puVar1 = PTR_DAT_04375460;
    plVar11[2] = 0;
    plVar11[3] = (long)plVar2;
    plVar11[4] = (long)(puVar1 + 0x10);
    plVar12 = (long *)(**(code **)(*plVar2 + 0x10))(plVar2,0xe8,8);
    puVar1 = PTR_DAT_04375470 + 0x10;
    plVar12[2] = 0;
    plVar12[3] = (long)plVar2;
    *plVar12 = (long)puVar1;
    plVar12[1] = 0;
    FUN_006172f4(plVar12 + 4,&local_d0);
    plVar11[5] = (long)(plVar12 + 4);
    plVar11[6] = (long)plVar12;
                    /* try { // try from 00616a28 to 00616a37 has its CatchHandler @ 00616b40 */
    local_80 = plVar11 + 4;
    plStack_78 = plVar11;
    FUN_00616ec4(lVar9,&local_38,&local_80);
    plVar2 = local_50;
    if (plStack_78 != (long *)0x0) {
      plVar11 = plStack_78 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar4) {
          *plVar11 = *plVar11 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    local_58 = local_80;
    local_50 = plStack_78;
    if (plVar2 != (long *)0x0) {
      plVar11 = plVar2 + 1;
      do {
        lVar9 = *plVar11;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar4) {
          *plVar11 = lVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
        std::__shared_weak_count::__release_weak();
      }
    }
    plVar2 = local_50;
    if (plStack_78 == (long *)0x0) goto LAB_00616ac8;
    plVar11 = plStack_78 + 1;
    do {
      lVar9 = *plVar11;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar4) {
        *plVar11 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      plVar12 = plStack_78;
    } while (cVar3 != '\0');
  }
  else {
    local_58 = *(long **)(lVar10 + 0x40);
    plVar2 = *(long **)(lVar10 + 0x48);
    if (plVar2 != (long *)0x0) {
      plVar11 = plVar2 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar4) {
          *plVar11 = *plVar11 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (local_50 == (long *)0x0) goto LAB_00616ac8;
    plVar11 = local_50 + 1;
    do {
      lVar9 = *plVar11;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar4) {
        *plVar11 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      plVar12 = local_50;
    } while (cVar3 != '\0');
  }
  local_50 = plVar2;
  plVar2 = local_50;
  if (lVar9 == 0) {
    (**(code **)(*plVar12 + 0x10))(plVar12);
    std::__shared_weak_count::__release_weak();
    plVar2 = local_50;
  }
LAB_00616ac8:
  local_50 = plVar2;
  *param_1 = local_58;
  param_1[1] = local_50;
  if (local_50 != (long *)0x0) {
    plVar2 = local_50 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = *plVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (local_50 != (long *)0x0) {
      plVar2 = local_50 + 1;
      do {
        lVar9 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*local_50 + 0x10))(local_50);
        std::__shared_weak_count::__release_weak();
      }
    }
  }
  nn::os::UnlockMutex(local_48);
  return;
}


