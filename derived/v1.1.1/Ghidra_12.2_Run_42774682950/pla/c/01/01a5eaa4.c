/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a5eaa4; name: FUN_01a5eaa4
 */


void FUN_01a5eaa4(long param_1,undefined8 *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  long lVar10;
  long *plVar11;
  int iVar12;
  long *plVar13;
  long lVar14;
  undefined8 *local_80;
  undefined8 uStack_78;
  long *local_70;
  undefined8 local_68;
  
  if (*(char *)(param_1 + 0x8a4) == '\0') {
    lVar14 = *(long *)(param_1 + 0x940);
    lVar10 = nn::os::GetCurrentThread();
    plVar13 = (long *)(lVar14 + 0xf8);
    do {
      if (*plVar13 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(lVar14 + 0xec));
          while (*plVar13 == 0) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar3) {
              *plVar13 = lVar10;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') goto LAB_01a5eb20;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar3) {
        *plVar13 = lVar10;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_01a5eb20:
    puVar8 = PTR_LAB_04379590;
    puVar7 = PTR_DAT_043794a8;
    puVar6 = PTR_DAT_043794a0;
    puVar5 = PTR_DAT_04379498;
    plVar13 = *(long **)(lVar14 + 0xb0);
    while (plVar13 != (long *)0x0) {
      local_80 = (undefined8 *)0x0;
      uStack_78 = 0;
      FUN_008802f0(&local_80,plVar13 + 3);
      local_70 = (long *)plVar13[5];
      if ((local_80 == (undefined8 *)0x0) || (*(int *)((long)local_80 + 0xc) == 0)) {
        plVar13 = (long *)FUN_01a6b778(lVar14 + 0x80,plVar13);
        puVar4 = local_80;
      }
      else {
        (**(code **)(*local_70 + 0x30))(local_70,param_2);
        plVar13 = (long *)*plVar13;
        puVar4 = local_80;
      }
      local_80 = puVar4;
      if (puVar4 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar4 + 1);
        do {
          iVar9 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar9 + -1 == 0) {
          puVar4[2] = 0;
          if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar5), iVar9 != 0)) {
            FUN_00100250(puVar8,puVar6,&PTR_LOOP_0411a000);
            __cxa_guard_release(puVar5);
          }
          lVar10 = *(long *)puVar6;
          *(long *)puVar7 = lVar10;
          local_68 = *puVar4;
          FUN_02a44274(lVar10 + 0xd8,&local_68);
        }
      }
    }
    *(undefined8 *)(lVar14 + 0xf8) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar14 + 0xec));
    plVar13 = (long *)(**(code **)(*(long *)*param_2 + 0x88))();
    plVar11 = (long *)(**(code **)(*plVar13 + 0x18))();
    if (*plVar11 == *(long *)(param_1 + 0x4d0)) {
LAB_01a5ed5c:
      *(undefined1 *)(param_1 + 0x869) = 0;
    }
    else {
      lVar10 = *(long *)(param_1 + 0x468);
      iVar9 = (**(code **)(*plVar13 + 0x20))(plVar13);
      if (iVar9 != 0) {
        iVar12 = 0;
        do {
          plVar11 = (long *)(**(code **)(*plVar13 + 0x28))(plVar13,iVar12);
          if (lVar10 == *plVar11) goto LAB_01a5ed5c;
          iVar12 = iVar12 + 1;
        } while (iVar9 != iVar12);
      }
    }
    plVar11 = (long *)(**(code **)(*plVar13 + 0x18))(plVar13);
    if (*plVar11 == *(long *)(param_1 + 0x4e8)) {
LAB_01a5ed64:
      *(undefined1 *)(param_1 + 0x86a) = 0;
    }
    else {
      lVar10 = *(long *)(param_1 + 0x480);
      iVar9 = (**(code **)(*plVar13 + 0x20))(plVar13);
      if (iVar9 != 0) {
        iVar12 = 0;
        do {
          plVar11 = (long *)(**(code **)(*plVar13 + 0x28))(plVar13,iVar12);
          if (lVar10 == *plVar11) goto LAB_01a5ed64;
          iVar12 = iVar12 + 1;
        } while (iVar9 != iVar12);
      }
    }
    plVar11 = (long *)(**(code **)(*plVar13 + 0x18))(plVar13);
    if (*plVar11 == *(long *)(param_1 + 0x500)) {
LAB_01a5ed54:
      *(undefined1 *)(param_1 + 0x868) = 0;
    }
    else {
      lVar10 = *(long *)(param_1 + 0x498);
      iVar9 = (**(code **)(*plVar13 + 0x20))(plVar13);
      if (iVar9 != 0) {
        iVar12 = 0;
        do {
          plVar11 = (long *)(**(code **)(*plVar13 + 0x28))(plVar13,iVar12);
          if (lVar10 == *plVar11) goto LAB_01a5ed54;
          iVar12 = iVar12 + 1;
        } while (iVar9 != iVar12);
      }
    }
    lVar10 = *(long *)(param_1 + 0x3d0);
    iVar9 = (**(code **)(*plVar13 + 0x20))(plVar13);
    if (iVar9 != 0) {
      iVar12 = 0;
      do {
        plVar11 = (long *)(**(code **)(*plVar13 + 0x28))(plVar13,iVar12);
        if (lVar10 == *plVar11) {
          *(undefined1 *)(param_1 + 0x86b) = 0;
          break;
        }
        iVar12 = iVar12 + 1;
      } while (iVar9 != iVar12);
    }
    lVar10 = *(long *)(param_1 + 0x570);
    iVar9 = (**(code **)(*plVar13 + 0x20))(plVar13);
    if (iVar9 != 0) {
      iVar12 = 0;
      do {
        plVar11 = (long *)(**(code **)(*plVar13 + 0x28))(plVar13,iVar12);
        if (lVar10 == *plVar11) {
          *(undefined1 *)(param_1 + 0x86c) = 0;
          return;
        }
        iVar12 = iVar12 + 1;
      } while (iVar9 != iVar12);
    }
  }
  return;
}


