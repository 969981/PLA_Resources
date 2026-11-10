/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c5b610; name: FUN_02c5b610
 */


void FUN_02c5b610(long param_1)

{
  long *plVar1;
  uint *puVar2;
  char cVar3;
  bool bVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 uVar10;
  long lVar11;
  int *piVar12;
  ushort uVar13;
  ulong uVar14;
  long lVar15;
  uint uVar16;
  undefined **local_70;
  uint local_68;
  ushort local_64;
  
  FUN_02c7c9c8(*(undefined8 *)(param_1 + 0x98),0,0);
  lVar15 = *(long *)(param_1 + 0x98);
  lVar11 = nn::os::GetCurrentThread();
  plVar1 = (long *)(lVar15 + 0x30);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar15 + 0x24));
        while (*plVar1 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar11;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_02c5b690;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar11;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_02c5b690:
  *(undefined8 *)(lVar15 + 0x30) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar15 + 0x24));
  FUN_02c7cd1c(*(undefined8 *)(param_1 + 0x98),0,0);
  FUN_02c7c9c8(*(undefined8 *)(param_1 + 0x98),1,0);
  lVar15 = *(long *)(param_1 + 0x98);
  lVar11 = nn::os::GetCurrentThread();
  plVar1 = (long *)(lVar15 + 0x30);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar15 + 0x24));
        while (*plVar1 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar11;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_02c5b70c;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar11;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_02c5b70c:
  *(undefined8 *)(lVar15 + 0x30) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar15 + 0x24));
  FUN_02c7cd1c(*(undefined8 *)(param_1 + 0x98),1,0);
  FUN_02c7c9c8(*(undefined8 *)(param_1 + 0x98),2,0);
  lVar15 = *(long *)(param_1 + 0x98);
  lVar11 = nn::os::GetCurrentThread();
  plVar1 = (long *)(lVar15 + 0x30);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar15 + 0x24));
        while (*plVar1 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar11;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_02c5b788;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar11;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_02c5b788:
  *(undefined8 *)(lVar15 + 0x30) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar15 + 0x24));
  FUN_02c7cd1c(*(undefined8 *)(param_1 + 0x98),2,0);
  FUN_02c7c9c8(*(undefined8 *)(param_1 + 0x98),3,0);
  lVar15 = *(long *)(param_1 + 0x98);
  lVar11 = nn::os::GetCurrentThread();
  plVar1 = (long *)(lVar15 + 0x30);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar15 + 0x24));
        while (*plVar1 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar11;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_02c5b804;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar11;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_02c5b804:
  *(undefined8 *)(lVar15 + 0x30) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar15 + 0x24));
  FUN_02c7cd1c(*(undefined8 *)(param_1 + 0x98),3,0);
  uVar6 = FUN_02c6849c(*(undefined8 *)(param_1 + 0x98));
  uVar5 = FUN_02c6f924(*(undefined8 *)(param_1 + 0x98));
  if (*(long *)(*(long *)(param_1 + 0x98) + 8) == 0) {
    uVar10 = FUN_02c6849c();
    uVar8 = FUN_02c6f924(*(undefined8 *)(param_1 + 0x98));
    uVar7 = FUN_02c68e44(*(undefined8 *)(param_1 + 0x98));
    uVar16 = 1;
    do {
      uVar9 = FUN_02c524b0(uVar10,uVar8,uVar16);
      if (uVar7 < uVar9) break;
      uVar16 = uVar16 + 1;
    } while ((uVar16 & 0xff) < 0x65);
    uVar7 = uVar16 - 1;
    if ((uVar16 & 0xff) < 2) {
      uVar7 = 1;
    }
    uVar7 = uVar7 & 0xff;
  }
  else {
    uVar7 = FUN_02c68174();
  }
  if (0x389 >= (int)uVar6 && 0x1b >= uVar5) {
    lVar11 = *(&DAT_04400660)[(ulong)uVar6 * 4];
    uVar14 = (&DAT_04400660)[(ulong)uVar6 * 4][1] - lVar11 >> 3;
    if ((uVar5 < uVar14) && (*(long *)(lVar11 + (ulong)uVar5 * 8) != 0)) {
      uVar13 = uVar5;
      goto LAB_02c5b920;
    }
  }
  uVar13 = 0;
  lVar11 = *DAT_04400660;
  uVar14 = DAT_04400660[1] - lVar11 >> 3;
LAB_02c5b920:
  if (uVar14 <= uVar13) {
LAB_02c5ba44:
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  piVar12 = *(int **)(lVar11 + (ulong)uVar13 * 8);
  puVar2 = (uint *)((long)piVar12 + (ulong)*(ushort *)((long)piVar12 + (10 - (long)*piVar12)));
  if (*(char *)((long)puVar2 + (ulong)*puVar2) != '\0') {
    uVar16 = 0;
    do {
      local_70 = &PTR_LAB_0428acc8;
      local_68 = uVar6;
      local_64 = uVar5;
      uVar9 = FUN_02c55ba0(&local_70,uVar16);
      if ((uVar7 & 0xff) < (uVar9 & 0xffff)) {
        return;
      }
      local_70 = &PTR_LAB_0428acc8;
      local_68 = uVar6;
      local_64 = uVar5;
      uVar10 = FUN_02c55e48(&local_70,uVar16);
      FUN_02c60b20(param_1,uVar10);
      if (0x389 < (int)uVar6 || 0x1b < uVar5) {
LAB_02c5b9d8:
        uVar13 = 0;
        lVar11 = *DAT_04400660;
        uVar14 = DAT_04400660[1] - lVar11 >> 3;
      }
      else {
        lVar11 = *(&DAT_04400660)[(ulong)uVar6 * 4];
        uVar14 = (&DAT_04400660)[(ulong)uVar6 * 4][1] - lVar11 >> 3;
        if ((uVar14 <= uVar5) || (*(long *)(lVar11 + (ulong)uVar5 * 8) == 0)) goto LAB_02c5b9d8;
        uVar13 = uVar5;
      }
      if (uVar14 <= uVar13) goto LAB_02c5ba44;
      piVar12 = *(int **)(lVar11 + (ulong)uVar13 * 8);
      uVar16 = uVar16 + 1;
      puVar2 = (uint *)((long)piVar12 + (ulong)*(ushort *)((long)piVar12 + (10 - (long)*piVar12)));
    } while (uVar16 < *(byte *)((long)puVar2 + (ulong)*puVar2));
  }
  return;
}


