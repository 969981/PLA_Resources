/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02895b2c; name: FUN_02895b2c
 */


undefined8
FUN_02895b2c(undefined4 param_1,long param_2,undefined1 (*param_3) [16],long *param_4,int param_5,
            undefined8 *param_6)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  int iVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long *plVar14;
  undefined1 auVar15 [16];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 local_60;
  ulong uStack_58;
  undefined8 local_50;
  
  nn::os::LockMutex((MutexType *)(param_2 + 0x158));
  puVar5 = PTR_DAT_043831e8;
  if ((*param_4 == 0) || (*(int *)(*param_4 + 0xc) == 0)) {
    uVar13 = 0;
    goto LAB_02895c8c;
  }
  lVar9 = *param_4;
  if ((lVar9 == 0) || (*(int *)(lVar9 + 0xc) == 0)) {
LAB_02895b80:
    plVar14 = (long *)0x0;
  }
  else {
    piVar1 = (int *)(lVar9 + 0xc);
    puVar10 = (undefined8 *)PTR_DAT_043831f0;
    iVar11 = *(int *)(lVar9 + 0xc);
    do {
      puVar12 = *(undefined8 **)(lVar9 + 0x10);
      if ((*puVar5 & 1) == 0) {
        iVar7 = __cxa_guard_acquire(puVar5);
        puVar10 = (undefined8 *)PTR_DAT_043831f0;
        if (iVar7 != 0) {
          uVar13 = FUN_00fd7558();
          *(undefined8 *)PTR_DAT_043831f0 = uVar13;
          __cxa_guard_release(puVar5);
          puVar10 = (undefined8 *)PTR_DAT_043831f0;
        }
      }
      if (puVar12 == (undefined8 *)0x0) goto LAB_02895b80;
      while (puVar12 != puVar10) {
        puVar12 = (undefined8 *)*puVar12;
        plVar14 = (long *)0x0;
        if (puVar12 == (undefined8 *)0x0) goto LAB_02895b84;
      }
      iVar7 = *piVar1;
      if (iVar7 == iVar11) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar11 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          plVar14 = (long *)0x0;
          if (*(long *)(lVar9 + 0x18) != 0) {
            plVar14 = (long *)(*(long *)(lVar9 + 0x18) + -0x50);
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      plVar14 = (long *)0x0;
      iVar11 = iVar7;
    } while (iVar7 != 0);
  }
LAB_02895b84:
  if ((int)plVar14[0xd] == 2) {
    if ((ulong)(long)param_5 < (ulong)((plVar14[0x15] - plVar14[0x14] >> 3) * -0x3333333333333333))
    {
      plVar8 = *(long **)(*(long *)(plVar14[0x14] + (long)param_5 * 0x28 + 8) + 0xc0);
      local_88 = 0xffffffff;
      local_80 = 0;
      local_78 = 0;
      local_70 = 0;
      local_60 = *(undefined8 *)*param_3;
      puStack_90 = PTR_DAT_04387f60 + 0x10;
      auVar15 = NEON_ext(*param_3,*param_3,8,1);
      uStack_98 = 0;
      local_a0 = 0;
      uStack_58 = (ulong)auVar15._0_4_;
      local_50 = CONCAT44(param_1,param_1);
      uVar6 = (**(code **)(*plVar8 + 0x20))(plVar8,&puStack_90,&local_a0);
      if (uVar6 != 0xffffffff) {
        auVar4._8_8_ = uStack_98;
        auVar4._0_8_ = local_a0;
        auVar15._8_8_ = uStack_98;
        auVar15._0_8_ = local_a0;
        auVar15 = NEON_ext(auVar15,auVar4,8,1);
        param_6[1] = (ulong)auVar15._0_4_;
        *param_6 = local_a0;
        *(uint *)(param_6 + 2) = uVar6 >> 0x16;
        *(uint *)((long)param_6 + 0x14) = uVar6 & 0x3fffff;
        uVar13 = 1;
        goto LAB_02895c70;
      }
    }
    uVar13 = 0;
  }
  else {
    uVar13 = 0;
    if (plVar14 == (long *)0x0) goto LAB_02895c8c;
  }
LAB_02895c70:
  lVar9 = plVar14[0xb];
  piVar1 = (int *)(lVar9 + 0xc);
  do {
    iVar11 = *piVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = iVar11 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar11 + -1 == 0) {
    *(undefined8 *)(lVar9 + 0x18) = 0;
    (**(code **)(*plVar14 + 0x20))(plVar14);
  }
LAB_02895c8c:
  nn::os::UnlockMutex((MutexType *)(param_2 + 0x158));
  return uVar13;
}


