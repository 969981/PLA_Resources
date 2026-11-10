/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d207fc; name: FUN_00d207fc
 */


void FUN_00d207fc(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long *local_50;
  long *local_48;
  long local_40;
  undefined8 local_38;
  
  *(undefined4 *)(param_1 + 0x504) = 1;
  lVar8 = param_1 + 0x3e0;
  local_38 = 0x438078000000000;
  FUN_02c39e5c(lVar8,&local_38);
  FUN_02c39e0c(lVar8,&DAT_03a78308,&DAT_03a848b0);
  lVar5 = FUN_00d25c98(&local_38,*(undefined8 *)(param_1 + 0x3b8));
  if (lVar5 != 0) {
    lVar10 = *(long *)(lVar5 + 0x58);
    if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar10 + 0x10) == 0) {
      uVar6 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
      *(undefined8 *)(lVar10 + 0x10) = uVar6;
    }
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar7 = *(long **)(param_1 + 0x4f8);
  *(undefined8 *)(param_1 + 0x4f8) = 0;
  if (plVar7 != (long *)0x0) {
    lVar10 = plVar7[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*plVar7 + 0x20))();
    }
  }
  local_50 = *(long **)(param_1 + 0x4f0);
  *(long *)(param_1 + 0x4f8) = lVar5;
  if (local_50 != (long *)0x0) {
    plVar7 = local_50 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *(int *)plVar7 = (int)*plVar7 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_02c41570(lVar5,&local_50,0x21,"fade_common_00.bflyt",0,0);
  if (local_50 != (long *)0x0) {
    plVar7 = local_50 + 10;
    do {
      iVar2 = (int)*plVar7 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *(int *)plVar7 = iVar2;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 == 0) {
      (**(code **)(*local_50 + 0x10))();
    }
  }
  FUN_02c436c0(*(undefined8 *)(param_1 + 0x4f8),lVar8);
  FUN_02c41480(*(undefined8 *)(param_1 + 0x4f8),param_1 + 0x3c0);
  FUN_02c444d4(*(undefined8 *)(param_1 + 0x4f8),0xfa);
  FUN_00d231b4(param_1);
  FUN_02c3bc38(*(undefined8 *)(param_1 + 0x4f0));
  lVar8 = *(long *)(param_1 + 0x4f8);
  lVar5 = *(long *)(lVar8 + 0x88);
  if (*(code **)(lVar8 + 0x560) == (code *)0x0) {
    plVar7 = *(long **)(lVar5 + 0x18);
    lVar8 = (**(code **)(*plVar7 + 0x78))(plVar7,*(undefined8 *)(param_1 + 0x60),1);
  }
  else {
    local_40 = lVar8;
    local_38 = *(undefined8 *)(param_1 + 0x60);
    (**(code **)(lVar8 + 0x560))(&local_48,lVar8 + 0x580,&local_38,&local_40);
    plVar7 = *(long **)(lVar5 + 0x18);
    if (local_48 == (long *)0x0) {
      plVar9 = (long *)PTR_PTR_04379d00;
    }
    else {
      plVar9 = local_48 + 0xc;
    }
    lVar8 = (**(code **)(*plVar7 + 0x78))(plVar7,*plVar9,1);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
  }
  if (lVar8 != 0) {
    *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) & 0xfe;
  }
  lVar8 = *(long *)(param_1 + 0x4f8);
  lVar5 = *(long *)(lVar8 + 0x88);
  if (*(code **)(lVar8 + 0x560) == (code *)0x0) {
    plVar7 = *(long **)(lVar5 + 0x18);
    lVar8 = (**(code **)(*plVar7 + 0x78))(plVar7,*(undefined8 *)(param_1 + 0x68),1);
  }
  else {
    local_40 = lVar8;
    local_38 = *(undefined8 *)(param_1 + 0x68);
    (**(code **)(lVar8 + 0x560))(&local_48,lVar8 + 0x580,&local_38,&local_40);
    plVar7 = *(long **)(lVar5 + 0x18);
    if (local_48 == (long *)0x0) {
      plVar9 = (long *)PTR_PTR_04379d00;
    }
    else {
      plVar9 = local_48 + 0xc;
    }
    lVar8 = (**(code **)(*plVar7 + 0x78))(plVar7,*plVar9,1);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
  }
  if (lVar8 != 0) {
    *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) & 0xfe;
  }
  lVar8 = *(long *)(param_1 + 0x4f8);
  lVar5 = *(long *)(lVar8 + 0x88);
  if (*(code **)(lVar8 + 0x560) == (code *)0x0) {
    plVar7 = *(long **)(lVar5 + 0x18);
    lVar8 = (**(code **)(*plVar7 + 0x78))(plVar7,*(undefined8 *)(param_1 + 0x70),1);
  }
  else {
    local_40 = lVar8;
    local_38 = *(undefined8 *)(param_1 + 0x70);
    (**(code **)(lVar8 + 0x560))(&local_48,lVar8 + 0x580,&local_38,&local_40);
    plVar7 = *(long **)(lVar5 + 0x18);
    if (local_48 == (long *)0x0) {
      plVar9 = (long *)PTR_PTR_04379d00;
    }
    else {
      plVar9 = local_48 + 0xc;
    }
    lVar8 = (**(code **)(*plVar7 + 0x78))(plVar7,*plVar9,1);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
  }
  if (lVar8 != 0) {
    *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) & 0xfe;
  }
  lVar8 = *(long *)(param_1 + 0x4f8);
  lVar5 = *(long *)(lVar8 + 0x88);
  if (*(code **)(lVar8 + 0x560) == (code *)0x0) {
    plVar7 = *(long **)(lVar5 + 0x18);
    lVar8 = (**(code **)(*plVar7 + 0x78))(plVar7,*(undefined8 *)(param_1 + 0x78),1);
  }
  else {
    local_40 = lVar8;
    local_38 = *(undefined8 *)(param_1 + 0x78);
    (**(code **)(lVar8 + 0x560))(&local_48,lVar8 + 0x580,&local_38,&local_40);
    plVar7 = *(long **)(lVar5 + 0x18);
    if (local_48 == (long *)0x0) {
      plVar9 = (long *)PTR_PTR_04379d00;
    }
    else {
      plVar9 = local_48 + 0xc;
    }
    lVar8 = (**(code **)(*plVar7 + 0x78))(plVar7,*plVar9,1);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
  }
  if (lVar8 != 0) {
    *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) & 0xfe;
  }
  lVar8 = *(long *)(param_1 + 0x4f8);
  lVar5 = *(long *)(lVar8 + 0x88);
  if (*(code **)(lVar8 + 0x560) == (code *)0x0) {
    plVar7 = *(long **)(lVar5 + 0x18);
    lVar8 = (**(code **)(*plVar7 + 0x78))(plVar7,*(undefined8 *)(param_1 + 0x80),1);
  }
  else {
    local_40 = lVar8;
    local_38 = *(undefined8 *)(param_1 + 0x80);
    (**(code **)(lVar8 + 0x560))(&local_48,lVar8 + 0x580,&local_38,&local_40);
    plVar7 = *(long **)(lVar5 + 0x18);
    if (local_48 == (long *)0x0) {
      plVar9 = (long *)PTR_PTR_04379d00;
    }
    else {
      plVar9 = local_48 + 0xc;
    }
    lVar8 = (**(code **)(*plVar7 + 0x78))(plVar7,*plVar9,1);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
  }
  if (lVar8 != 0) {
    *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) & 0xfe;
  }
  lVar8 = *(long *)(param_1 + 0x4f8);
  lVar5 = *(long *)(lVar8 + 0x88);
  if (*(code **)(lVar8 + 0x560) == (code *)0x0) {
    plVar7 = *(long **)(lVar5 + 0x18);
    lVar8 = (**(code **)(*plVar7 + 0x78))(plVar7,*(undefined8 *)(param_1 + 0x88),1);
  }
  else {
    local_40 = lVar8;
    local_38 = *(undefined8 *)(param_1 + 0x88);
    (**(code **)(lVar8 + 0x560))(&local_48,lVar8 + 0x580,&local_38,&local_40);
    plVar7 = *(long **)(lVar5 + 0x18);
    if (local_48 == (long *)0x0) {
      plVar9 = (long *)PTR_PTR_04379d00;
    }
    else {
      plVar9 = local_48 + 0xc;
    }
    lVar8 = (**(code **)(*plVar7 + 0x78))(plVar7,*plVar9,1);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
  }
  if (lVar8 != 0) {
    *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) & 0xfe;
  }
  lVar8 = *(long *)(param_1 + 0x4f8);
  lVar5 = *(long *)(lVar8 + 0x88);
  if (*(code **)(lVar8 + 0x560) == (code *)0x0) {
    plVar7 = *(long **)(lVar5 + 0x18);
    lVar8 = (**(code **)(*plVar7 + 0x78))(plVar7,*(undefined8 *)(param_1 + 0x90),1);
  }
  else {
    local_40 = lVar8;
    local_38 = *(undefined8 *)(param_1 + 0x90);
    (**(code **)(lVar8 + 0x560))(&local_48,lVar8 + 0x580,&local_38,&local_40);
    plVar7 = *(long **)(lVar5 + 0x18);
    if (local_48 == (long *)0x0) {
      plVar9 = (long *)PTR_PTR_04379d00;
    }
    else {
      plVar9 = local_48 + 0xc;
    }
    lVar8 = (**(code **)(*plVar7 + 0x78))(plVar7,*plVar9,1);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
  }
  if (lVar8 != 0) {
    *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) & 0xfe;
  }
  lVar8 = *(long *)(param_1 + 0x4f8);
  lVar5 = *(long *)(lVar8 + 0x88);
  if (*(code **)(lVar8 + 0x560) == (code *)0x0) {
    plVar7 = *(long **)(lVar5 + 0x18);
    lVar8 = (**(code **)(*plVar7 + 0x78))(plVar7,*(undefined8 *)(param_1 + 0x98),1);
  }
  else {
    local_40 = lVar8;
    local_38 = *(undefined8 *)(param_1 + 0x98);
    (**(code **)(lVar8 + 0x560))(&local_48,lVar8 + 0x580,&local_38,&local_40);
    plVar7 = *(long **)(lVar5 + 0x18);
    if (local_48 == (long *)0x0) {
      plVar9 = (long *)PTR_PTR_04379d00;
    }
    else {
      plVar9 = local_48 + 0xc;
    }
    lVar8 = (**(code **)(*plVar7 + 0x78))(plVar7,*plVar9,1);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
  }
  if (lVar8 != 0) {
    *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) & 0xfe;
  }
  lVar8 = *(long *)(param_1 + 0x4f8);
  lVar5 = *(long *)(lVar8 + 0x88);
  if (*(code **)(lVar8 + 0x560) == (code *)0x0) {
    plVar7 = *(long **)(lVar5 + 0x18);
    lVar8 = (**(code **)(*plVar7 + 0x78))(plVar7,*(undefined8 *)(param_1 + 0xa0),1);
  }
  else {
    local_40 = lVar8;
    local_38 = *(undefined8 *)(param_1 + 0xa0);
    (**(code **)(lVar8 + 0x560))(&local_48,lVar8 + 0x580,&local_38,&local_40);
    plVar7 = *(long **)(lVar5 + 0x18);
    if (local_48 == (long *)0x0) {
      plVar9 = (long *)PTR_PTR_04379d00;
    }
    else {
      plVar9 = local_48 + 0xc;
    }
    lVar8 = (**(code **)(*plVar7 + 0x78))(plVar7,*plVar9,1);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
  }
  if (lVar8 != 0) {
    *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) & 0xfe;
  }
  lVar8 = *(long *)(param_1 + 0x4f8);
  lVar5 = *(long *)(lVar8 + 0x88);
  if (*(code **)(lVar8 + 0x560) == (code *)0x0) {
    plVar7 = *(long **)(lVar5 + 0x18);
    lVar8 = (**(code **)(*plVar7 + 0x78))(plVar7,*(undefined8 *)(param_1 + 0xa8),1);
  }
  else {
    local_40 = lVar8;
    local_38 = *(undefined8 *)(param_1 + 0xa8);
    (**(code **)(lVar8 + 0x560))(&local_48,lVar8 + 0x580,&local_38,&local_40);
    plVar7 = *(long **)(lVar5 + 0x18);
    if (local_48 == (long *)0x0) {
      plVar9 = (long *)PTR_PTR_04379d00;
    }
    else {
      plVar9 = local_48 + 0xc;
    }
    lVar8 = (**(code **)(*plVar7 + 0x78))(plVar7,*plVar9,1);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
  }
  if (lVar8 != 0) {
    *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) & 0xfe;
  }
  lVar8 = *(long *)(param_1 + 0x4f8);
  lVar5 = *(long *)(lVar8 + 0x88);
  if (*(code **)(lVar8 + 0x560) == (code *)0x0) {
    plVar7 = *(long **)(lVar5 + 0x18);
    lVar8 = (**(code **)(*plVar7 + 0x78))(plVar7,*(undefined8 *)(param_1 + 0xb0),1);
  }
  else {
    local_40 = lVar8;
    local_38 = *(undefined8 *)(param_1 + 0xb0);
    (**(code **)(lVar8 + 0x560))(&local_48,lVar8 + 0x580,&local_38,&local_40);
    plVar7 = *(long **)(lVar5 + 0x18);
    if (local_48 == (long *)0x0) {
      plVar9 = (long *)PTR_PTR_04379d00;
    }
    else {
      plVar9 = local_48 + 0xc;
    }
    lVar8 = (**(code **)(*plVar7 + 0x78))(plVar7,*plVar9,1);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
  }
  if (lVar8 != 0) {
    *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) & 0xfe;
  }
  lVar8 = *(long *)(param_1 + 0x4f8);
  lVar5 = *(long *)(lVar8 + 0x88);
  if (*(code **)(lVar8 + 0x560) == (code *)0x0) {
    plVar7 = *(long **)(lVar5 + 0x18);
    lVar8 = (**(code **)(*plVar7 + 0x78))(plVar7,*(undefined8 *)(param_1 + 0xb8),1);
  }
  else {
    local_40 = lVar8;
    local_38 = *(undefined8 *)(param_1 + 0xb8);
    (**(code **)(lVar8 + 0x560))(&local_48,lVar8 + 0x580,&local_38,&local_40);
    plVar7 = *(long **)(lVar5 + 0x18);
    if (local_48 == (long *)0x0) {
      plVar9 = (long *)PTR_PTR_04379d00;
    }
    else {
      plVar9 = local_48 + 0xc;
    }
    lVar8 = (**(code **)(*plVar7 + 0x78))(plVar7,*plVar9,1);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
  }
  if (lVar8 != 0) {
    *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) & 0xfe;
  }
  lVar8 = *(long *)(param_1 + 0x4f8);
  lVar5 = *(long *)(lVar8 + 0x88);
  if (*(code **)(lVar8 + 0x560) == (code *)0x0) {
    plVar7 = *(long **)(lVar5 + 0x18);
    lVar8 = (**(code **)(*plVar7 + 0x78))(plVar7,*(undefined8 *)(param_1 + 0xc0),1);
  }
  else {
    local_40 = lVar8;
    local_38 = *(undefined8 *)(param_1 + 0xc0);
    (**(code **)(lVar8 + 0x560))(&local_48,lVar8 + 0x580,&local_38,&local_40);
    plVar7 = *(long **)(lVar5 + 0x18);
    if (local_48 == (long *)0x0) {
      plVar9 = (long *)PTR_PTR_04379d00;
    }
    else {
      plVar9 = local_48 + 0xc;
    }
    lVar8 = (**(code **)(*plVar7 + 0x78))(plVar7,*plVar9,1);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
  }
  if (lVar8 != 0) {
    *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) & 0xfe;
  }
  lVar8 = *(long *)(param_1 + 0x4f8);
  lVar5 = *(long *)(lVar8 + 0x88);
  if (*(code **)(lVar8 + 0x560) == (code *)0x0) {
    plVar7 = *(long **)(lVar5 + 0x18);
    lVar8 = (**(code **)(*plVar7 + 0x78))(plVar7,*(undefined8 *)(param_1 + 200),1);
  }
  else {
    local_40 = lVar8;
    local_38 = *(undefined8 *)(param_1 + 200);
    (**(code **)(lVar8 + 0x560))(&local_48,lVar8 + 0x580,&local_38,&local_40);
    plVar7 = *(long **)(lVar5 + 0x18);
    if (local_48 == (long *)0x0) {
      plVar9 = (long *)PTR_PTR_04379d00;
    }
    else {
      plVar9 = local_48 + 0xc;
    }
    lVar8 = (**(code **)(*plVar7 + 0x78))(plVar7,*plVar9,1);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
  }
  if (lVar8 != 0) {
    *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) & 0xfe;
  }
  lVar8 = *(long *)(param_1 + 0x4f8);
  lVar5 = *(long *)(lVar8 + 0x88);
  if (*(code **)(lVar8 + 0x560) == (code *)0x0) {
    plVar7 = *(long **)(lVar5 + 0x18);
    lVar8 = (**(code **)(*plVar7 + 0x78))(plVar7,*(undefined8 *)(param_1 + 0xd0),1);
  }
  else {
    local_40 = lVar8;
    local_38 = *(undefined8 *)(param_1 + 0xd0);
    (**(code **)(lVar8 + 0x560))(&local_48,lVar8 + 0x580,&local_38,&local_40);
    plVar7 = *(long **)(lVar5 + 0x18);
    if (local_48 == (long *)0x0) {
      plVar9 = (long *)PTR_PTR_04379d00;
    }
    else {
      plVar9 = local_48 + 0xc;
    }
    lVar8 = (**(code **)(*plVar7 + 0x78))(plVar7,*plVar9,1);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
  }
  if (lVar8 != 0) {
    *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) & 0xfe;
  }
  lVar8 = *(long *)(param_1 + 0x4f8);
  lVar5 = *(long *)(lVar8 + 0x88);
  if (*(code **)(lVar8 + 0x560) == (code *)0x0) {
    plVar7 = *(long **)(lVar5 + 0x18);
    lVar8 = (**(code **)(*plVar7 + 0x78))(plVar7,*(undefined8 *)(param_1 + 0xd8),1);
  }
  else {
    local_40 = lVar8;
    local_38 = *(undefined8 *)(param_1 + 0xd8);
    (**(code **)(lVar8 + 0x560))(&local_48,lVar8 + 0x580,&local_38,&local_40);
    plVar7 = *(long **)(lVar5 + 0x18);
    if (local_48 == (long *)0x0) {
      plVar9 = (long *)PTR_PTR_04379d00;
    }
    else {
      plVar9 = local_48 + 0xc;
    }
    lVar8 = (**(code **)(*plVar7 + 0x78))(plVar7,*plVar9,1);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
  }
  if (lVar8 != 0) {
    *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) & 0xfe;
  }
  lVar8 = *(long *)(param_1 + 0x4f8);
  lVar5 = *(long *)(lVar8 + 0x88);
  if (*(code **)(lVar8 + 0x560) == (code *)0x0) {
    plVar7 = *(long **)(lVar5 + 0x18);
    lVar8 = (**(code **)(*plVar7 + 0x78))(plVar7,*(undefined8 *)(param_1 + 0xe0),1);
  }
  else {
    local_40 = lVar8;
    local_38 = *(undefined8 *)(param_1 + 0xe0);
    (**(code **)(lVar8 + 0x560))(&local_48,lVar8 + 0x580,&local_38,&local_40);
    plVar7 = *(long **)(lVar5 + 0x18);
    if (local_48 == (long *)0x0) {
      plVar9 = (long *)PTR_PTR_04379d00;
    }
    else {
      plVar9 = local_48 + 0xc;
    }
    lVar8 = (**(code **)(*plVar7 + 0x78))(plVar7,*plVar9,1);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
  }
  if (lVar8 != 0) {
    *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) & 0xfe;
  }
  return;
}


