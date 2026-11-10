/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0269c364; name: FUN_0269c364
 */


void FUN_0269c364(long param_1,int *param_2)

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
  undefined *puVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  long *plVar14;
  undefined8 local_f0;
  char *pcStack_e8;
  undefined8 local_e0;
  long *local_d8;
  undefined1 *local_d0;
  code *local_c8;
  undefined1 *local_c0;
  undefined1 *puStack_b8;
  undefined1 auStack_b0 [96];
  
  local_d0 = &LAB_0269db54;
  local_c8 = FUN_0269dd1c;
  local_c0 = &LAB_0269dd20;
  puStack_b8 = &LAB_0269dd24;
  FUN_0269c688(param_1,param_2,&local_d0);
  pcVar6 = local_c8;
  if (local_c8 == (code *)0x0) {
    lVar11 = *(long *)(param_1 + 0x268);
    local_c8 = (code *)0x0;
    pbVar4 = PTR_DAT_0437f490;
    puVar5 = (undefined8 *)PTR_DAT_0437f498;
  }
  else {
    local_c0 = (undefined1 *)0x0;
    puStack_b8 = (undefined1 *)0x0;
    local_d0 = (undefined1 *)0x0;
    local_c8 = (code *)0x0;
    (*pcVar6)(auStack_b0);
    lVar11 = *(long *)(param_1 + 0x268);
    pbVar4 = PTR_DAT_0437f490;
    puVar5 = (undefined8 *)PTR_DAT_0437f498;
  }
  PTR_DAT_0437f490 = pbVar4;
  PTR_DAT_0437f498 = (undefined *)puVar5;
  if ((lVar11 != 0) && (*(int *)(lVar11 + 0xc) != 0)) {
    piVar1 = (int *)(lVar11 + 0xc);
    iVar13 = *(int *)(lVar11 + 0xc);
    do {
      plVar14 = *(long **)(lVar11 + 0x10);
      if (((*pbVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(pbVar4), iVar7 != 0)) {
        uVar8 = FUN_01443f54();
        *puVar5 = uVar8;
        __cxa_guard_release(pbVar4);
      }
      while( true ) {
        if (plVar14 == (long *)0x0) {
          return;
        }
        if (plVar14 == puVar5) break;
        plVar14 = (long *)*plVar14;
      }
      iVar7 = *piVar1;
      if (iVar7 == iVar13) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar13 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar11 = *(long *)(lVar11 + 0x18);
          if (lVar11 == 0) {
            return;
          }
          lVar12 = *(long *)(lVar11 + 0x1a0);
          if ((lVar12 == 0) || (*(int *)(lVar12 + 0xc) == 0)) goto LAB_0269c470;
          piVar1 = (int *)(lVar12 + 0xc);
          iVar13 = *(int *)(lVar12 + 0xc);
          goto LAB_0269c4f0;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar13 = iVar7;
    } while (iVar7 != 0);
  }
  return;
LAB_0269c4f0:
  plVar14 = *(long **)(lVar12 + 0x10);
  lVar9 = FUN_01091efc();
  while( true ) {
    if (plVar14 == (long *)0x0) goto LAB_0269c470;
    if (plVar14 == (long *)lVar9) break;
    plVar14 = (long *)*plVar14;
  }
  iVar7 = *piVar1;
  if (iVar7 == iVar13) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = iVar13 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') {
      lVar12 = *(long *)(lVar12 + 0x18);
      if (lVar12 != 0) {
        iVar13 = *param_2;
        plVar14 = (long *)(lVar12 + -0x50);
        if (iVar13 == 1) {
          puVar10 = &DAT_04267670;
LAB_0269c568:
          FUN_0290b66c(plVar14,puVar10,0);
        }
        else {
          if (iVar13 == 2) {
            if ((char)param_2[1] == '\0') {
              puVar10 = &DAT_042676b0;
            }
            else {
              puVar10 = &DAT_042676f0;
            }
            goto LAB_0269c568;
          }
          if (iVar13 == 3) {
            FUN_0290b66c(plVar14,&DAT_04267730,0);
            local_f0 = 0xd97d9672dfc1b69c;
            pcStack_e8 = "STOP_PV_RD_217_00_EXCITE_01";
            local_e0 = 0x1b;
            local_d8 = (long *)0x0;
            FUN_0290b66c(plVar14,&local_f0,0);
            if (local_d8 != (long *)0x0) {
              (**(code **)(*local_d8 + 0x20))();
            }
          }
        }
        lVar12 = *(long *)(lVar12 + 8);
        piVar1 = (int *)(lVar12 + 0xc);
        do {
          iVar13 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar13 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar13 + -1 == 0) {
          *(undefined8 *)(lVar12 + 0x18) = 0;
          (**(code **)(*plVar14 + 0x20))(plVar14);
        }
      }
      goto LAB_0269c470;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  iVar13 = iVar7;
  if (iVar7 == 0) {
LAB_0269c470:
    lVar12 = *(long *)(lVar11 + 8);
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      iVar13 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar13 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar13 + -1 == 0) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*(long *)(lVar11 + -0x50) + 0x20))((long *)(lVar11 + -0x50));
      return;
    }
    return;
  }
  goto LAB_0269c4f0;
}


