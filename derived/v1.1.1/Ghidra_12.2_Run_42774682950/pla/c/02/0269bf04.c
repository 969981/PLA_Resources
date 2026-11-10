/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0269bf04; name: FUN_0269bf04
 */


void FUN_0269bf04(long param_1,int *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  byte *pbVar4;
  undefined8 *puVar5;
  code *pcVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  long *plVar13;
  undefined8 local_f0;
  char *pcStack_e8;
  undefined8 local_e0;
  long *local_d8;
  code *local_d0;
  code *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  int *apiStack_b0 [12];
  
  *(undefined4 *)(param_1 + 500) = 0;
  local_d0 = FUN_0269d900;
  local_c8 = FUN_0269db38;
  local_c0 = &LAB_0269db3c;
  local_b8 = &LAB_0269db48;
  apiStack_b0[0] = param_2;
  FUN_0269c688(param_1,param_2,&local_d0);
  pcVar6 = local_c8;
  if (local_c8 == (code *)0x0) {
    lVar10 = *(long *)(param_1 + 0x268);
    local_c8 = (code *)0x0;
    pbVar4 = PTR_DAT_0437f490;
    puVar5 = (undefined8 *)PTR_DAT_0437f498;
  }
  else {
    local_c0 = (undefined1 *)0x0;
    local_b8 = (undefined1 *)0x0;
    local_d0 = (code *)0x0;
    local_c8 = (code *)0x0;
    (*pcVar6)(apiStack_b0);
    lVar10 = *(long *)(param_1 + 0x268);
    pbVar4 = PTR_DAT_0437f490;
    puVar5 = (undefined8 *)PTR_DAT_0437f498;
  }
  if (lVar10 == 0) {
    PTR_DAT_0437f490 = pbVar4;
    PTR_DAT_0437f498 = (undefined *)puVar5;
    return;
  }
  if (*(int *)(lVar10 + 0xc) == 0) {
    PTR_DAT_0437f490 = pbVar4;
    PTR_DAT_0437f498 = (undefined *)puVar5;
    return;
  }
  piVar1 = (int *)(lVar10 + 0xc);
  iVar12 = *(int *)(lVar10 + 0xc);
  PTR_DAT_0437f490 = pbVar4;
  PTR_DAT_0437f498 = (undefined *)puVar5;
  do {
    plVar13 = *(long **)(lVar10 + 0x10);
    if (((*pbVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(pbVar4), iVar7 != 0)) {
      uVar8 = FUN_01443f54();
      *puVar5 = uVar8;
      __cxa_guard_release(pbVar4);
    }
    while( true ) {
      if (plVar13 == (long *)0x0) {
        return;
      }
      if (plVar13 == puVar5) break;
      plVar13 = (long *)*plVar13;
    }
    iVar7 = *piVar1;
    if (iVar7 == iVar12) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar12 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        lVar10 = *(long *)(lVar10 + 0x18);
        if (lVar10 == 0) {
          return;
        }
        lVar11 = *(long *)(lVar10 + 0x1a0);
        if ((lVar11 == 0) || (*(int *)(lVar11 + 0xc) == 0)) goto LAB_0269c018;
        piVar1 = (int *)(lVar11 + 0xc);
        iVar12 = *(int *)(lVar11 + 0xc);
        break;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    iVar12 = iVar7;
    if (iVar7 == 0) {
      return;
    }
  } while( true );
LAB_0269c098:
  plVar13 = *(long **)(lVar11 + 0x10);
  lVar9 = FUN_01091efc();
  while( true ) {
    if (plVar13 == (long *)0x0) goto LAB_0269c018;
    if (plVar13 == (long *)lVar9) break;
    plVar13 = (long *)*plVar13;
  }
  iVar7 = *piVar1;
  if (iVar7 == iVar12) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = iVar12 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') {
      lVar11 = *(long *)(lVar11 + 0x18);
      if (lVar11 != 0) {
        plVar13 = (long *)(lVar11 + -0x50);
        if (*param_2 == 3) {
          FUN_0290b66c(plVar13,&DAT_04267710,0);
          local_f0 = 0xa3621f1c450340e4;
          pcStack_e8 = "PLAY_PM_RIDE_STRENGTH_EXCLAMATION";
          local_e0 = 0x21;
          local_d8 = (long *)0x0;
          FUN_0290b66c(plVar13,&local_f0,0);
          if (local_d8 != (long *)0x0) {
            (**(code **)(*local_d8 + 0x20))();
          }
          local_f0 = 0x760e75b182a2057a;
          pcStack_e8 = "PLAY_PV_RD_217_00_EXCITE_01";
          local_e0 = 0x1b;
          local_d8 = (long *)0x0;
          FUN_0290b66c(plVar13,&local_f0,0);
          if (local_d8 != (long *)0x0) {
            (**(code **)(*local_d8 + 0x20))();
          }
        }
        lVar11 = *(long *)(lVar11 + 8);
        piVar1 = (int *)(lVar11 + 0xc);
        do {
          iVar12 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar12 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar12 + -1 == 0) {
          *(undefined8 *)(lVar11 + 0x18) = 0;
          (**(code **)(*plVar13 + 0x20))(plVar13);
        }
      }
      goto LAB_0269c018;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  iVar12 = iVar7;
  if (iVar7 == 0) {
LAB_0269c018:
    lVar11 = *(long *)(lVar10 + 8);
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      iVar12 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar12 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar12 + -1 == 0) {
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*(long *)(lVar10 + -0x50) + 0x20))((long *)(lVar10 + -0x50));
    }
    return;
  }
  goto LAB_0269c098;
}


