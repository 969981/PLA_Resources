/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02895dd0; name: FUN_02895dd0
 */


undefined8
FUN_02895dd0(undefined4 param_1,long param_2,undefined8 *param_3,undefined8 *param_4,long *param_5,
            int param_6,undefined8 *param_7)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  undefined8 *puVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long *plVar13;
  undefined1 auVar14 [16];
  undefined8 local_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined8 local_e0;
  ulong uStack_d8;
  undefined8 local_d0;
  ulong uStack_c8;
  uint local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined *local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 local_70;
  ulong uStack_68;
  undefined8 local_60;
  
  nn::os::LockMutex((MutexType *)(param_2 + 0x158));
  puVar5 = PTR_DAT_043831e8;
  if ((*param_5 == 0) || (*(int *)(*param_5 + 0xc) == 0)) {
    uVar12 = 0;
    goto LAB_02895f84;
  }
  lVar8 = *param_5;
  if ((lVar8 == 0) || (*(int *)(lVar8 + 0xc) == 0)) {
LAB_02895e30:
    plVar13 = (long *)0x0;
  }
  else {
    piVar1 = (int *)(lVar8 + 0xc);
    puVar9 = (undefined8 *)PTR_DAT_043831f0;
    iVar10 = *(int *)(lVar8 + 0xc);
    do {
      puVar11 = *(undefined8 **)(lVar8 + 0x10);
      if ((*puVar5 & 1) == 0) {
        iVar7 = __cxa_guard_acquire(puVar5);
        puVar9 = (undefined8 *)PTR_DAT_043831f0;
        if (iVar7 != 0) {
          uVar12 = FUN_00fd7558();
          *(undefined8 *)PTR_DAT_043831f0 = uVar12;
          __cxa_guard_release(puVar5);
          puVar9 = (undefined8 *)PTR_DAT_043831f0;
        }
      }
      if (puVar11 == (undefined8 *)0x0) goto LAB_02895e30;
      while (puVar11 != puVar9) {
        puVar11 = (undefined8 *)*puVar11;
        plVar13 = (long *)0x0;
        if (puVar11 == (undefined8 *)0x0) goto LAB_02895e34;
      }
      iVar7 = *piVar1;
      if (iVar7 == iVar10) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar10 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          plVar13 = (long *)0x0;
          if (*(long *)(lVar8 + 0x18) != 0) {
            plVar13 = (long *)(*(long *)(lVar8 + 0x18) + -0x50);
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      plVar13 = (long *)0x0;
      iVar10 = iVar7;
    } while (iVar7 != 0);
  }
LAB_02895e34:
  if ((int)plVar13[0xd] == 2) {
    if ((ulong)(long)param_6 < (ulong)((plVar13[0x15] - plVar13[0x14] >> 3) * -0x3333333333333333))
    {
      local_70 = *param_3;
      local_98 = 0xffffffff;
      local_90 = 0;
      local_88 = 0;
      local_80 = 0;
      local_a0 = PTR_DAT_04387f60 + 0x10;
      local_60 = CONCAT44(param_1,param_1);
      uStack_68 = param_3[1] & 0xffffffff;
      local_e0 = *param_4;
      uStack_d8 = param_4[1] & 0xffffffff;
      local_d0 = param_4[4];
      uStack_c8 = param_4[5] & 0xffffffff;
      local_c0 = *(uint *)((long)param_4 + 0x14) | *(int *)(param_4 + 2) << 0x16;
      local_b8 = CONCAT44(*(undefined4 *)(param_4 + 6),*(undefined4 *)(param_4 + 6));
      local_b0 = CONCAT44(*(undefined4 *)((long)param_4 + 0x34),
                          *(undefined4 *)((long)param_4 + 0x34));
      uVar6 = FUN_03159d04(*(undefined8 *)
                            (*(long *)(plVar13[0x14] + (long)param_6 * 0x28 + 8) + 0xc0),
                           *(undefined8 *)(*(long *)(param_2 + 0x10) + 0x130),&local_a0,&local_e0,
                           &local_f0);
      if (uVar6 != 0xffffffff) {
        auVar4._8_4_ = uStack_e8;
        auVar4._0_8_ = local_f0;
        auVar14._8_4_ = uStack_e8;
        auVar14._0_8_ = local_f0;
        auVar14._12_4_ = uStack_e4;
        auVar4._12_4_ = uStack_e4;
        auVar14 = NEON_ext(auVar14,auVar4,8,1);
        param_7[1] = (ulong)auVar14._0_4_;
        *param_7 = local_f0;
        *(uint *)(param_7 + 2) = uVar6 >> 0x16;
        *(uint *)((long)param_7 + 0x14) = uVar6 & 0x3fffff;
        uVar12 = 1;
        goto LAB_02895f68;
      }
    }
    uVar12 = 0;
  }
  else {
    uVar12 = 0;
    if (plVar13 == (long *)0x0) goto LAB_02895f84;
  }
LAB_02895f68:
  lVar8 = plVar13[0xb];
  piVar1 = (int *)(lVar8 + 0xc);
  do {
    iVar10 = *piVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = iVar10 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar10 + -1 == 0) {
    *(undefined8 *)(lVar8 + 0x18) = 0;
    (**(code **)(*plVar13 + 0x20))(plVar13);
  }
LAB_02895f84:
  nn::os::UnlockMutex((MutexType *)(param_2 + 0x158));
  return uVar12;
}


