/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 018da4f0; name: FUN_018da4f0
 */


undefined8 FUN_018da4f0(long param_1,long param_2)

{
  long *plVar1;
  int *piVar2;
  long *plVar3;
  bool bVar4;
  char cVar5;
  bool bVar6;
  undefined8 *puVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 *local_70;
  undefined8 uStack_68;
  long *local_60;
  undefined8 uStack_58;
  long *local_50;
  long local_48;
  
  local_60 = (long *)0x0;
  uStack_58 = 0;
  FUN_00ac3fa4(&local_60,param_1 + 0x248);
  if (local_60 == (long *)0x0) {
    local_50 = (long *)0x0;
  }
  else {
    FUN_00bd915c(&local_50);
    plVar1 = local_60;
    if (local_60 != (long *)0x0) {
      plVar3 = local_60 + 1;
      do {
        iVar8 = (int)*plVar3 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar6) {
          *(int *)plVar3 = iVar8;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar8 == 0) {
        local_60[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar9 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar9;
        local_48 = *plVar1;
        FUN_02a44274(lVar9 + 0xd8,&local_48);
      }
    }
  }
  if (local_50 == (long *)0x0) {
LAB_018da6c4:
    uVar11 = 0;
  }
  else {
    plVar1 = (long *)(param_1 + 0x778);
    lVar12 = *plVar1;
    lVar9 = nn::os::GetCurrentThread();
    if (lVar9 == lVar12) {
      bVar6 = false;
      lVar9 = 0;
    }
    else {
      lVar9 = param_1 + 0x768;
      lVar12 = nn::os::GetCurrentThread();
      do {
        if (*plVar1 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x76c));
            while (*plVar1 == 0) {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar6) {
                *plVar1 = lVar12;
                cVar5 = ExclusiveMonitorsStatus();
              }
              if (cVar5 == '\0') goto LAB_018da59c;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = lVar12;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
LAB_018da59c:
      bVar6 = true;
    }
    FUN_016c24d0(&local_60,param_1 + 0x748);
    if ((local_60 == (long *)0x0) || (FUN_015916d0(local_60,0,0x10000,0), local_60 == (long *)0x0))
    {
LAB_018da5e8:
      *(undefined1 *)(param_1 + 0x780) = 0;
    }
    else {
      lVar12 = local_60[0xb];
      piVar2 = (int *)(lVar12 + 0xc);
      do {
        iVar8 = *piVar2;
        cVar5 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar8 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar8 + -1 != 0) goto LAB_018da5e8;
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*local_60 + 0x20))();
      *(undefined1 *)(param_1 + 0x780) = 0;
    }
    if (bVar6) {
      *(undefined8 *)(lVar9 + 0x10) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar9 + 4));
    }
    plVar1 = local_50;
    local_70 = (undefined8 *)0x0;
    uStack_68 = 0;
    FUN_008c4b3c(&local_70,param_2 + 8);
    FUN_01b436ec(plVar1,&local_70);
    puVar7 = local_70;
    if (local_70 != (undefined8 *)0x0) {
      piVar2 = (int *)(local_70 + 1);
      do {
        iVar8 = *piVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = iVar8 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar8 + -1 == 0) {
        local_70[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar9 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar9;
        local_60 = (long *)*puVar7;
        FUN_02a44274(lVar9 + 0xd8,&local_60);
      }
    }
    uVar10 = FUN_018da814(param_1,*(undefined4 *)(param_2 + 0x18));
    if ((uVar10 & 1) == 0) {
      bVar6 = true;
      if (local_50 != (long *)0x0) goto LAB_018da6a4;
LAB_018da6c0:
      if (bVar6) goto LAB_018da6c4;
    }
    else {
      bVar6 = false;
      *(undefined4 *)(param_1 + 0x710) = 8;
      if (local_50 == (long *)0x0) goto LAB_018da6c0;
LAB_018da6a4:
      lVar9 = local_50[0xb];
      piVar2 = (int *)(lVar9 + 0xc);
      do {
        iVar8 = *piVar2;
        cVar5 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar8 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar8 + -1 != 0) goto LAB_018da6c0;
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*local_50 + 0x20))();
      if (bVar6) goto LAB_018da6c4;
    }
    uVar11 = 1;
  }
  return uVar11;
}


