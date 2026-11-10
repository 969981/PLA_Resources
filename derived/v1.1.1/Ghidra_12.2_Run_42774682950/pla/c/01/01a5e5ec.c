/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a5e5ec; name: FUN_01a5e5ec
 */


void FUN_01a5e5ec(long param_1,undefined8 *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  int iVar11;
  long *plVar12;
  long lVar13;
  undefined8 *local_80;
  undefined8 uStack_78;
  long *local_70;
  undefined8 local_68;
  
  if (*(char *)(param_1 + 0x8a4) == '\0') {
    lVar13 = *(long *)(param_1 + 0x938);
    lVar9 = nn::os::GetCurrentThread();
    plVar12 = (long *)(lVar13 + 0xf8);
    do {
      if (*plVar12 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(lVar13 + 0xec));
          while (*plVar12 == 0) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar3) {
              *plVar12 = lVar9;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') goto LAB_01a5e668;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar3) {
        *plVar12 = lVar9;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_01a5e668:
    plVar12 = *(long **)(lVar13 + 0xb0);
    if (plVar12 != (long *)0x0) {
      local_80 = (undefined8 *)0x0;
      uStack_78 = 0;
      FUN_008802f0(&local_80,plVar12 + 3);
      local_70 = (long *)plVar12[5];
      if ((local_80 == (undefined8 *)0x0) || (*(int *)((long)local_80 + 0xc) == 0)) {
        plVar12 = (long *)FUN_01a6b3e4(lVar13 + 0x80,plVar12);
      }
      else {
        (**(code **)(*local_70 + 0x30))(local_70,param_2);
        plVar12 = (long *)*plVar12;
      }
      puVar4 = local_80;
      puVar7 = PTR_DAT_043794a8;
      puVar6 = PTR_DAT_043794a0;
      puVar5 = PTR_DAT_04379498;
      if (local_80 != (undefined8 *)0x0) {
        piVar1 = (int *)(local_80 + 1);
        do {
          iVar8 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar8 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar8 + -1 == 0) {
          local_80[2] = 0;
          if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar9 = *(long *)puVar6;
          *(long *)puVar7 = lVar9;
          local_68 = *puVar4;
          FUN_02a44274(lVar9 + 0xd8,&local_68);
        }
      }
      while (plVar12 != (long *)0x0) {
        local_80 = (undefined8 *)0x0;
        uStack_78 = 0;
        FUN_008802f0(&local_80,plVar12 + 3);
        local_70 = (long *)plVar12[5];
        if ((local_80 == (undefined8 *)0x0) || (*(int *)((long)local_80 + 0xc) == 0)) {
          plVar12 = (long *)FUN_01a6b3e4(lVar13 + 0x80,plVar12);
          puVar4 = local_80;
        }
        else {
          (**(code **)(*local_70 + 0x30))(local_70,param_2);
          plVar12 = (long *)*plVar12;
          puVar4 = local_80;
        }
        local_80 = puVar4;
        if (puVar4 != (undefined8 *)0x0) {
          piVar1 = (int *)(puVar4 + 1);
          do {
            iVar8 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar8 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar8 + -1 == 0) {
            puVar4[2] = 0;
            if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar5), iVar8 != 0)) {
              FUN_00100250(PTR_LAB_04379590,puVar6,&PTR_LOOP_0411a000);
              __cxa_guard_release(puVar5);
            }
            lVar9 = *(long *)puVar6;
            *(long *)puVar7 = lVar9;
            local_68 = *puVar4;
            FUN_02a44274(lVar9 + 0xd8,&local_68);
          }
        }
      }
    }
    *(undefined8 *)(lVar13 + 0xf8) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar13 + 0xec));
    plVar12 = (long *)(**(code **)(*(long *)*param_2 + 0x88))();
    plVar10 = (long *)(**(code **)(*plVar12 + 0x18))();
    if (*plVar10 == *(long *)(param_1 + 0x4d0)) {
LAB_01a5e9f4:
      *(undefined1 *)(param_1 + 0x869) = 1;
    }
    else {
      lVar9 = *(long *)(param_1 + 0x468);
      iVar8 = (**(code **)(*plVar12 + 0x20))(plVar12);
      if (iVar8 != 0) {
        iVar11 = 0;
        do {
          plVar10 = (long *)(**(code **)(*plVar12 + 0x28))(plVar12,iVar11);
          if (lVar9 == *plVar10) goto LAB_01a5e9f4;
          iVar11 = iVar11 + 1;
        } while (iVar8 != iVar11);
      }
    }
    plVar10 = (long *)(**(code **)(*plVar12 + 0x18))(plVar12);
    if (*plVar10 == *(long *)(param_1 + 0x4e8)) {
LAB_01a5ea00:
      *(undefined1 *)(param_1 + 0x86a) = 1;
    }
    else {
      lVar9 = *(long *)(param_1 + 0x480);
      iVar8 = (**(code **)(*plVar12 + 0x20))(plVar12);
      if (iVar8 != 0) {
        iVar11 = 0;
        do {
          plVar10 = (long *)(**(code **)(*plVar12 + 0x28))(plVar12,iVar11);
          if (lVar9 == *plVar10) goto LAB_01a5ea00;
          iVar11 = iVar11 + 1;
        } while (iVar8 != iVar11);
      }
    }
    plVar10 = (long *)(**(code **)(*plVar12 + 0x18))(plVar12);
    if (*plVar10 == *(long *)(param_1 + 0x500)) {
LAB_01a5e9e8:
      *(undefined1 *)(param_1 + 0x868) = 1;
    }
    else {
      lVar9 = *(long *)(param_1 + 0x498);
      iVar8 = (**(code **)(*plVar12 + 0x20))(plVar12);
      if (iVar8 != 0) {
        iVar11 = 0;
        do {
          plVar10 = (long *)(**(code **)(*plVar12 + 0x28))(plVar12,iVar11);
          if (lVar9 == *plVar10) goto LAB_01a5e9e8;
          iVar11 = iVar11 + 1;
        } while (iVar8 != iVar11);
      }
    }
    lVar9 = *(long *)(param_1 + 0x3d0);
    iVar8 = (**(code **)(*plVar12 + 0x20))(plVar12);
    if (iVar8 != 0) {
      iVar11 = 0;
      do {
        plVar10 = (long *)(**(code **)(*plVar12 + 0x28))(plVar12,iVar11);
        if (lVar9 == *plVar10) {
          *(undefined1 *)(param_1 + 0x86b) = 1;
          break;
        }
        iVar11 = iVar11 + 1;
      } while (iVar8 != iVar11);
    }
    lVar9 = *(long *)(param_1 + 0x570);
    iVar8 = (**(code **)(*plVar12 + 0x20))(plVar12);
    if (iVar8 != 0) {
      iVar11 = 0;
      do {
        plVar10 = (long *)(**(code **)(*plVar12 + 0x28))(plVar12,iVar11);
        if (lVar9 == *plVar10) {
          *(undefined1 *)(param_1 + 0x86c) = 1;
          return;
        }
        iVar11 = iVar11 + 1;
      } while (iVar8 != iVar11);
    }
  }
  return;
}


