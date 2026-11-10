/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0181b500; name: FUN_0181b500
 */


undefined1  [16] FUN_0181b500(long param_1)

{
  undefined1 (*pauVar1) [16];
  long *plVar2;
  int *piVar3;
  long *plVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined1 auVar12 [16];
  long lVar13;
  undefined8 local_80;
  ulong uStack_78;
  long *local_70;
  long *local_68;
  long *local_60;
  undefined8 uStack_58;
  undefined1 local_40 [16];
  
  local_60 = (long *)0x0;
  uStack_58 = 0;
  FUN_00ac3fa4(&local_60,param_1 + 0x1f0);
  FUN_0099c748(&local_70,&local_60);
  plVar4 = local_60;
  if (local_60 != (long *)0x0) {
    plVar2 = local_60 + 1;
    do {
      iVar8 = (int)*plVar2 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar7) {
        *(int *)plVar2 = iVar8;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar8 == 0) {
      local_60[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar9 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar9;
      local_68 = (long *)*plVar4;
      FUN_02a44274(lVar9 + 0xd8,&local_68);
    }
  }
  if (local_70 == (long *)0x0) {
    uStack_78 = *(ulong *)(param_1 + 0x3b8);
    local_80 = *(undefined8 *)(param_1 + 0x3b0);
    goto LAB_0181b6c0;
  }
  FUN_009c69bc(&local_60);
  lVar11 = local_60[0x1b];
  lVar9 = local_60[0x1a];
  if (local_60 != (long *)0x0) {
    lVar10 = local_60[0xb];
    piVar3 = (int *)(lVar10 + 0xc);
    do {
      iVar8 = *piVar3;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar7) {
        *piVar3 = iVar8 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*local_60 + 0x20))();
    }
  }
  plVar4 = local_70 + 0x15a;
  FUN_01839c8c(&local_68,plVar4);
  if (local_68 == (long *)0x0) {
    uStack_78 = 0;
    local_80 = 0;
  }
  else {
    FUN_01839c8c(&local_60,plVar4);
    if (local_60 == (long *)0x0) {
LAB_0181b6f8:
      local_80 = 0;
      uStack_78 = 0;
    }
    else {
      lVar10 = local_60[0xb];
      piVar3 = (int *)(lVar10 + 0xc);
      iVar8 = *(int *)((long)local_60 + 0x7c);
      do {
        iVar5 = *piVar3;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar7) {
          *piVar3 = iVar5 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar5 + -1 == 0) {
        *(undefined8 *)(lVar10 + 0x18) = 0;
        (**(code **)(*local_60 + 0x20))();
      }
      if (iVar8 != 2) goto LAB_0181b6f8;
      if (local_68[0x1a] == 0) {
        uStack_78 = 0;
        local_80 = 0;
      }
      else {
        pauVar1 = (undefined1 (*) [16])(local_68[0x1a] + 0xc0);
        local_80 = *(undefined8 *)*pauVar1;
        auVar12 = NEON_ext(*pauVar1,*pauVar1,8,1);
        uStack_78 = (ulong)auVar12._0_4_;
      }
    }
    if (local_68 != (long *)0x0) {
      lVar10 = local_68[0xb];
      piVar3 = (int *)(lVar10 + 0xc);
      do {
        iVar8 = *piVar3;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar7) {
          *piVar3 = iVar8 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar8 + -1 == 0) {
        *(undefined8 *)(lVar10 + 0x18) = 0;
        (**(code **)(*local_68 + 0x20))();
      }
    }
  }
  FUN_01a88b48(&local_60,local_70);
  lVar10 = lVar9;
  lVar13 = lVar11;
  if (*(char *)(param_1 + 0x240) != '\0') {
    lVar13 = *(long *)(param_1 + 600);
    lVar10 = *(long *)(param_1 + 0x250);
  }
  *(ulong *)(param_1 + 0x3b8) = uStack_78;
  *(undefined8 *)(param_1 + 0x3b0) = local_80;
  *(long *)(param_1 + 0x3c8) = local_40._8_8_;
  *(long *)(param_1 + 0x3c0) = local_40._0_8_;
  *(long *)(param_1 + 0x3d8) = lVar11;
  *(long *)(param_1 + 0x3d0) = lVar9;
  *(long *)(param_1 + 1000) = lVar13;
  *(long *)(param_1 + 0x3e0) = lVar10;
  if (local_70 != (long *)0x0) {
    lVar9 = local_70[0xb];
    piVar3 = (int *)(lVar9 + 0xc);
    do {
      iVar8 = *piVar3;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar7) {
        *piVar3 = iVar8 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*local_70 + 0x20))();
    }
  }
LAB_0181b6c0:
  auVar12._8_8_ = uStack_78;
  auVar12._0_8_ = local_80;
  return auVar12;
}


