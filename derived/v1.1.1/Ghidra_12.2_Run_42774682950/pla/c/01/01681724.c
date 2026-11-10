/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01681724; name: FUN_01681724
 */


undefined8 FUN_01681724(undefined8 *param_1,int *param_2,long param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  int iVar11;
  undefined1 uVar12;
  long *local_90;
  long *local_88;
  undefined8 local_80;
  undefined8 local_78;
  long *local_70;
  long local_68;
  
  uVar9 = 0;
  if (param_1 != (undefined8 *)0x0) {
    FUN_01668fcc(&local_88,param_3,0);
    plVar3 = local_70;
    *param_1 = local_88;
    param_1[1] = local_80;
    param_1[2] = local_78;
    if (local_70 != (long *)0x0) {
      (**(code **)(*local_70 + 0x18))(local_70);
    }
    plVar7 = (long *)param_1[3];
    param_1[3] = plVar3;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x20))();
    }
    if (local_70 != (long *)0x0) {
      (**(code **)(*local_70 + 0x20))();
    }
    param_1[4] = *(undefined8 *)(*(long *)PTR_DAT_0437b160 + 0x388);
    FUN_0158c240(&local_88);
    FUN_0125d688(param_1 + 0xab,&local_88);
    plVar3 = local_88;
    if (local_88 != (long *)0x0) {
      plVar7 = local_88 + 1;
      do {
        iVar6 = (int)*plVar7 + -1;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar2) {
          *(int *)plVar7 = iVar6;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (iVar6 == 0) {
        local_88[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar10 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar10;
        local_68 = *plVar3;
        FUN_02a44274(lVar10 + 0xd8,&local_68);
      }
    }
    FUN_0158c7e8(&local_88);
    FUN_0125d988(param_1 + 0xad,&local_88);
    plVar3 = local_88;
    if (local_88 != (long *)0x0) {
      plVar7 = local_88 + 1;
      do {
        iVar6 = (int)*plVar7 + -1;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar2) {
          *(int *)plVar7 = iVar6;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (iVar6 == 0) {
        local_88[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar10 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar10;
        local_68 = *plVar3;
        FUN_02a44274(lVar10 + 0xd8,&local_68);
      }
    }
    FUN_0158cb9c(&local_88);
    FUN_0159825c(param_1 + 0xaf,&local_88);
    plVar3 = local_88;
    if (local_88 != (long *)0x0) {
      plVar7 = local_88 + 1;
      do {
        iVar6 = (int)*plVar7 + -1;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar2) {
          *(int *)plVar7 = iVar6;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (iVar6 == 0) {
        local_88[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar10 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar10;
        local_68 = *plVar3;
        FUN_02a44274(lVar10 + 0xd8,&local_68);
      }
    }
    if ((ulong)(*(long *)(param_3 + 0x80) - *(long *)(param_3 + 0x78) >> 3) < 2) {
      iVar11 = 0;
    }
    else {
      uVar8 = 1;
      iVar6 = 0;
      do {
        iVar5 = FUN_016780c8(param_3,uVar8 & 0xffffffff);
        FUN_01668fcc(&local_88,param_3,(int)uVar8 + 1);
        uVar12 = 1;
        if (((local_88 != (long *)0x20d2b0e5f112fec5) && (local_88 != (long *)0xf644afd9efa28ae5))
           && (local_88 != (long *)0xbe0efda8cfefbc5)) {
          uVar12 = 0;
        }
        if (local_70 != (long *)0x0) {
          (**(code **)(*local_70 + 0x20))();
        }
        uVar8 = uVar8 + 2;
        iVar11 = iVar6;
        if ((iVar6 < 0x2d) && (iVar5 + 1000 < 0x3f8)) {
          iVar11 = iVar6 + 1;
          *(int *)(param_1 + (long)iVar6 + 0x7d) = iVar5 + 1000;
          *(undefined1 *)((long)param_1 + (long)iVar6 * 8 + 0x3ec) = uVar12;
        }
        iVar6 = iVar11;
      } while (uVar8 < (ulong)(*(long *)(param_3 + 0x80) - *(long *)(param_3 + 0x78) >> 3));
    }
    FUN_0165a260(&local_88);
    if (local_88 == (long *)0x0) {
      local_90 = (long *)0x0;
    }
    else {
      FUN_015196f8(&local_90);
      plVar3 = local_88;
      if (local_88 != (long *)0x0) {
        plVar7 = local_88 + 1;
        do {
          iVar6 = (int)*plVar7 + -1;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar2) {
            *(int *)plVar7 = iVar6;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (iVar6 == 0) {
          local_88[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar10 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar10;
          local_68 = *plVar3;
          FUN_02a44274(lVar10 + 0xd8,&local_68);
        }
      }
    }
    if (local_90 != (long *)0x0) {
      FUN_019cb7ec(&local_88);
      plVar3 = local_90;
      if (local_88 != (long *)0x0) {
        uVar4 = FUN_025acbdc();
        iVar6 = iVar11;
        if (uVar4 < 4) {
          iVar6 = iVar11 + 1;
          *(uint *)(param_1 + (long)iVar11 + 0x7d) = uVar4 + 0x3f8;
          *(undefined1 *)((long)param_1 + (long)iVar11 * 8 + 0x3ec) = 1;
        }
        iVar11 = iVar6;
        plVar3 = local_90;
        if ((local_88 != (long *)0x0) &&
           (uVar8 = FUN_02a43a5c(local_88[0xb]), plVar3 = local_90, (uVar8 & 1) != 0)) {
          (**(code **)(*local_88 + 0x20))(local_88);
          plVar3 = local_90;
        }
      }
      if ((plVar3 != (long *)0x0) &&
         (local_90 = plVar3, uVar8 = FUN_02a43a5c(plVar3[0xb]), (uVar8 & 1) != 0)) {
        (**(code **)(*plVar3 + 0x20))(plVar3);
      }
    }
    if (param_2 != (int *)0x0) {
      *param_2 = iVar11;
    }
    uVar9 = 1;
  }
  return uVar9;
}


