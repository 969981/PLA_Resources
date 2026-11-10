/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028b1a78; name: FUN_028b1a78
 */


void FUN_028b1a78(long param_1,undefined8 *param_2,int param_3)

{
  long *plVar1;
  LightEventType *pLVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  ushort *puVar12;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  long *local_68;
  undefined8 local_60;
  int local_58;
  int iStack_54;
  
  lVar6 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_1 + 0x360);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x354));
        while (*plVar1 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_028b1ae8;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_028b1ae8:
  if ((ulong)((*(long *)(param_1 + 0x78) - *(long *)(param_1 + 0x70) >> 4) * -0x5555555555555555) <=
      (ulong)*(uint *)((long)param_2 + 4)) goto LAB_028b1cc0;
  iVar3 = *(int *)(*(long *)(param_1 + 0x70) + (ulong)*(uint *)((long)param_2 + 4) * 0x30 + 0x28);
  pLVar2 = (LightEventType *)(param_1 + 0x354);
  *(undefined8 *)(param_1 + 0x360) = 0;
  nn::os::SignalLightEvent(pLVar2);
  lVar6 = *(long *)(param_1 + 0x70);
  uVar8 = (ulong)*(uint *)((long)param_2 + 4);
  if ((ulong)((*(long *)(param_1 + 0x78) - lVar6 >> 4) * -0x5555555555555555) <= uVar8)
  goto LAB_028b1cc0;
  piVar11 = *(int **)(lVar6 + uVar8 * 0x30);
  puVar12 = (ushort *)((long)piVar11 - (long)*piVar11);
  if (*puVar12 < 7) {
    iVar9 = 0;
LAB_028b1b8c:
    iVar10 = 0;
  }
  else {
    iVar9 = 0;
    if ((ulong)puVar12[3] != 0) {
      iVar9 = *(int *)((long)piVar11 + (ulong)puVar12[3]);
    }
    if ((*puVar12 < 9) || ((ulong)puVar12[4] == 0)) goto LAB_028b1b8c;
    iVar10 = *(int *)((long)piVar11 + (ulong)puVar12[4]);
  }
  if (param_3 <= iVar10) {
    iVar10 = param_3;
  }
  if (iVar9 <= iVar10) {
    iVar9 = iVar10;
  }
  *(int *)(lVar6 + uVar8 * 0x30 + 0x28) = iVar9;
  lVar6 = nn::os::GetCurrentThread();
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent(pLVar2);
        while (*plVar1 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_028b1bec;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_028b1bec:
  if ((ulong)*(uint *)((long)param_2 + 4) <
      (ulong)((*(long *)(param_1 + 0x78) - *(long *)(param_1 + 0x70) >> 4) * -0x5555555555555555)) {
    iVar9 = *(int *)(*(long *)(param_1 + 0x70) + (ulong)*(uint *)((long)param_2 + 4) * 0x30 + 0x28);
    *(undefined8 *)(param_1 + 0x360) = 0;
    nn::os::SignalLightEvent(pLVar2);
    if (iVar3 != iVar9 && *(long *)(param_1 + 0x150) != 0) {
      puVar7 = (undefined8 *)FUN_028b1944(param_1,param_2);
      local_80 = *puVar7;
      local_60 = *param_2;
      local_78 = puVar7[1];
      local_70 = puVar7[2];
      local_68 = (long *)puVar7[3];
      if (local_68 != (long *)0x0) {
        (**(code **)(*local_68 + 0x18))();
      }
      local_58 = iVar3;
      iStack_54 = iVar9;
      (**(code **)(param_1 + 0x150))(param_1 + 0x170,&local_80);
      if (local_68 != (long *)0x0) {
        (**(code **)(*local_68 + 0x20))();
      }
    }
    return;
  }
LAB_028b1cc0:
                    /* WARNING: Subroutine does not return */
  std::__vector_base_common<true>::__throw_out_of_range();
}


