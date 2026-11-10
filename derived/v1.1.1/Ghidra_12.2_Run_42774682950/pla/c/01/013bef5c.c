/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013bef5c; name: FUN_013bef5c
 */


undefined8 FUN_013bef5c(long param_1,uint param_2)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  undefined1 *local_110;
  char *pcStack_108;
  undefined8 local_100;
  long *local_f8;
  long *local_f0;
  long *local_e8;
  long *local_e0;
  long *local_d8;
  long *local_d0;
  long *local_c8;
  undefined6 uStack_c0;
  undefined2 local_ba;
  undefined6 uStack_b8;
  undefined2 uStack_b2;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  uint local_50;
  long *local_48;
  
  if ((*(long *)(param_1 + 0x5c0) == 0) || (*(uint *)(*(long *)(param_1 + 0x5c0) + 0xb0) <= param_2)
     ) {
    return 0;
  }
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04379558), iVar5 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar6 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar6;
  if (lVar6 == 0) {
    return 0;
  }
  FUN_01148cdc(&local_48);
  if (local_48 == (long *)0x0) {
    return 0;
  }
  plVar9 = *(long **)(param_1 + 0x2c8);
  if (plVar9 != (long *)0x0) {
    plVar10 = plVar9 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *(int *)plVar10 = (int)*plVar10 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar10 = (long *)plVar9[0x37];
  if (plVar10 != (long *)0x0) {
    lVar6 = plVar10[0xb];
    if (*(undefined8 **)(lVar6 + 0x18) == (undefined8 *)0x0) goto LAB_013bf584;
    if (*(long *)(lVar6 + 0x10) == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar6 + 0x18))();
      *(undefined8 *)(lVar6 + 0x10) = uVar7;
    }
    piVar1 = (int *)(lVar6 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lVar6 = plVar10[0xb];
    piVar1 = (int *)(lVar6 + 0xc);
    do {
      iVar5 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 == 0) {
      *(undefined8 *)(lVar6 + 0x18) = 0;
      (**(code **)(*plVar10 + 0x20))(plVar10);
    }
  }
  plVar2 = plVar9 + 10;
  do {
    iVar5 = (int)*plVar2 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar4) {
      *(int *)plVar2 = iVar5;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar5 == 0) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
  }
  FUN_02c35c98(plVar10);
  local_50 = 0;
  local_e0 = (long *)0x0;
  local_d8 = (long *)0x0;
  local_d0 = (long *)0x0;
  local_c8 = (long *)0x0;
  uStack_c0 = 0;
  local_ba = 0;
  uStack_b8 = 0;
  plVar9 = *(long **)(param_1 + 0x2c8);
  if (plVar9 != (long *)0x0) {
    plVar10 = plVar9 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *(int *)plVar10 = (int)*plVar10 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_e8 = (long *)plVar9[0x39];
  if (local_e8 == (long *)0x0) {
    local_e8 = (long *)0x0;
  }
  else {
    plVar10 = local_e8 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *(int *)plVar10 = (int)*plVar10 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    do {
      iVar5 = (int)*plVar10 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *(int *)plVar10 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*local_e8 + 0x10))();
    }
  }
  plVar10 = plVar9 + 10;
  do {
    iVar5 = (int)*plVar10 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar4) {
      *(int *)plVar10 = iVar5;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar5 == 0) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
    plVar9 = *(long **)(param_1 + 0x2c8);
  }
  else {
    plVar9 = *(long **)(param_1 + 0x2c8);
  }
  if (plVar9 != (long *)0x0) {
    plVar10 = plVar9 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *(int *)plVar10 = (int)*plVar10 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_e0 = (long *)plVar9[0x38];
  if (local_e0 == (long *)0x0) {
    local_e0 = (long *)0x0;
  }
  else {
    plVar10 = local_e0 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *(int *)plVar10 = (int)*plVar10 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    do {
      iVar5 = (int)*plVar10 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *(int *)plVar10 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*local_e0 + 0x10))();
    }
  }
  plVar10 = plVar9 + 10;
  do {
    iVar5 = (int)*plVar10 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar4) {
      *(int *)plVar10 = iVar5;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar5 == 0) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
    plVar9 = *(long **)(param_1 + 0x2c8);
  }
  else {
    plVar9 = *(long **)(param_1 + 0x2c8);
  }
  if (plVar9 != (long *)0x0) {
    plVar10 = plVar9 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *(int *)plVar10 = (int)*plVar10 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar10 = (long *)plVar9[0x37];
  if (plVar10 == (long *)0x0) {
    local_d8 = (long *)0x0;
  }
  else {
    lVar6 = plVar10[0xb];
    if (*(undefined8 **)(lVar6 + 0x18) == (undefined8 *)0x0) {
LAB_013bf584:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar6 + 0x10) == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar6 + 0x18))();
      *(undefined8 *)(lVar6 + 0x10) = uVar7;
    }
    piVar1 = (int *)(lVar6 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lVar6 = plVar10[0xb];
    piVar1 = (int *)(lVar6 + 0xc);
    do {
      iVar5 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    local_d8 = plVar10;
    if (iVar5 + -1 == 0) {
      *(undefined8 *)(lVar6 + 0x18) = 0;
      (**(code **)(*plVar10 + 0x20))(plVar10);
    }
  }
  plVar10 = plVar9 + 10;
  do {
    iVar5 = (int)*plVar10 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar4) {
      *(int *)plVar10 = iVar5;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar5 == 0) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
  }
  uVar7 = FUN_00d40878(param_1);
  local_110 = (undefined1 *)0x9bf1d120b9d1525;
  pcStack_108 = "common/mystery.dat";
  local_100 = 0x12;
  local_f8 = (long *)0x0;
  FUN_00d37bb4(&local_f0,uVar7,&local_110,10);
  local_d0 = (long *)local_f0[0xd];
  if (local_d0 == (long *)0x0) {
    local_d0 = (long *)0x0;
  }
  else {
    plVar9 = local_d0 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *(int *)plVar9 = (int)*plVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    do {
      iVar5 = (int)*plVar9 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *(int *)plVar9 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*local_d0 + 0x10))();
    }
  }
  if (local_f0 != (long *)0x0) {
    lVar6 = local_f0[0xb];
    piVar1 = (int *)(lVar6 + 0xc);
    do {
      iVar5 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 == 0) {
      *(undefined8 *)(lVar6 + 0x18) = 0;
      (**(code **)(*local_f0 + 0x20))();
    }
  }
  if (local_f8 != (long *)0x0) {
    (**(code **)(*local_f8 + 0x20))();
  }
  uVar7 = FUN_00d40878(param_1);
  local_110 = &DAT_cda5145a42cb9db6;
  pcStack_108 = "common/dressup_item_name.dat";
  local_100 = 0x1c;
  local_f8 = (long *)0x0;
  FUN_00d37bb4(&local_f0,uVar7,&local_110,10);
  local_c8 = (long *)local_f0[0xd];
  if (local_c8 == (long *)0x0) {
    local_c8 = (long *)0x0;
  }
  else {
    plVar9 = local_c8 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *(int *)plVar9 = (int)*plVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    do {
      iVar5 = (int)*plVar9 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *(int *)plVar9 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*local_c8 + 0x10))();
    }
  }
  if (local_f0 != (long *)0x0) {
    lVar6 = local_f0[0xb];
    piVar1 = (int *)(lVar6 + 0xc);
    do {
      iVar5 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 == 0) {
      *(undefined8 *)(lVar6 + 0x18) = 0;
      (**(code **)(*local_f0 + 0x20))();
    }
  }
  if (local_f8 != (long *)0x0) {
    (**(code **)(*local_f8 + 0x20))();
  }
  puVar8 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x5c0) + 0xa8) + (ulong)param_2 * 0x78);
  local_b0 = puVar8[2];
  uStack_a8 = puVar8[3];
  local_a0 = puVar8[4];
  uStack_98 = puVar8[5];
  local_90 = puVar8[6];
  uStack_88 = puVar8[7];
  local_80 = puVar8[8];
  uStack_78 = puVar8[9];
  local_70 = puVar8[10];
  uStack_68 = puVar8[0xb];
  local_60 = puVar8[0xc];
  uStack_58 = puVar8[0xd];
  uStack_c0 = (undefined6)*puVar8;
  local_ba = (undefined2)((ulong)*puVar8 >> 0x30);
  uStack_b8 = (undefined6)puVar8[1];
  uStack_b2 = (undefined2)((ulong)puVar8[1] >> 0x30);
  local_50 = FUN_01123ce8(local_48);
  local_50 = local_50 & 0xff;
  FUN_013bce00(&local_e8);
  uVar7 = FUN_02c2f268(local_e8);
  if (local_48 == (long *)0x0) {
    return uVar7;
  }
  lVar6 = local_48[0xb];
  piVar1 = (int *)(lVar6 + 0xc);
  do {
    iVar5 = *piVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = iVar5 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar5 + -1 == 0) {
    *(undefined8 *)(lVar6 + 0x18) = 0;
    (**(code **)(*local_48 + 0x20))();
    return uVar7;
  }
  return uVar7;
}


