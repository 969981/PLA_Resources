/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d840e0; name: FUN_00d840e0
 */


void FUN_00d840e0(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  int *piVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  long local_68;
  long local_60;
  long lStack_58;
  long local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 auStack_38 [8];
  
  puVar1 = PTR_DAT_043796d0;
  param_1[7] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  puVar1 = PTR_DAT_04379520;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  local_40 = param_2;
  if (((*puVar1 & 1) == 0) &&
     (iVar6 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar6 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar7 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (lVar7 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = 0;
    if (*(long *)(lVar7 + 0x80) != 0) {
      lVar11 = *(long *)(lVar7 + *(long *)(lVar7 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(param_1 + 10) = 0;
  *param_1 = (long)&PTR_FUN_041ec788;
  param_1[1] = lVar11;
  param_1[9] = (long)&PTR_LAB_041ec7c0;
  plVar10 = param_1 + 0xb;
  *plVar10 = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  puVar1 = PTR_DAT_0437b4c0 + 0x10;
  param_1[0x12] = (long)&PTR_FUN_041ec7f0;
  param_1[0x13] = (long)puVar1;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = (long)puVar1;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  puVar1 = PTR_DAT_0437a508 + 0x10;
  *(undefined1 *)(param_1 + 0x3a) = 0;
  param_1[0x20] = 0;
  param_1[0x21] = (long)puVar1;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = (long)puVar1;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  lVar7 = FUN_008c43ec(&local_68,local_40,&local_40);
  if (lVar7 != 0) {
    piVar2 = (int *)(lVar7 + 0x50);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = *piVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar8 = (long *)*plVar10;
  *plVar10 = 0;
  if (plVar8 != (long *)0x0) {
    plVar3 = plVar8 + 10;
    do {
      iVar6 = (int)*plVar3 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *(int *)plVar3 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar8 + 0x10))();
    }
  }
  *plVar10 = lVar7;
  local_68 = CONCAT44(local_68._4_4_,1);
  local_48 = CONCAT44(local_48._4_4_,1);
  lVar7 = FUN_00d86a90(auStack_38,local_40,&local_68,&local_48,&local_40);
  if (lVar7 != 0) {
    lVar11 = *(long *)(lVar7 + 0x58);
    if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar11 + 0x10) == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
      *(undefined8 *)(lVar11 + 0x10) = uVar9;
    }
    piVar2 = (int *)(lVar11 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = *piVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar10 = (long *)param_1[0xf];
  param_1[0xf] = 0;
  if (plVar10 != (long *)0x0) {
    lVar11 = plVar10[0xb];
    piVar2 = (int *)(lVar11 + 0xc);
    do {
      iVar6 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar6 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 + -1 == 0) {
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*plVar10 + 0x20))();
    }
  }
  param_1[0xf] = lVar7;
  local_68 = CONCAT44(local_68._4_4_,0x800);
  lVar7 = FUN_00a246f0(&local_48,local_40,&local_68);
  if (lVar7 != 0) {
    piVar2 = (int *)(lVar7 + 0x50);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = *piVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar10 = (long *)param_1[0x10];
  param_1[0x10] = 0;
  if (plVar10 != (long *)0x0) {
    plVar8 = plVar10 + 10;
    do {
      iVar6 = (int)*plVar8 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *(int *)plVar8 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar10 + 0x10))();
    }
  }
  param_1[0x10] = lVar7;
  local_68 = CONCAT44(local_68._4_4_,0x800);
  lVar7 = FUN_00a246f0(&local_48,local_40,&local_68);
  if (lVar7 != 0) {
    piVar2 = (int *)(lVar7 + 0x50);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = *piVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar10 = (long *)param_1[0x11];
  param_1[0x11] = 0;
  if (plVar10 != (long *)0x0) {
    plVar8 = plVar10 + 10;
    do {
      iVar6 = (int)*plVar8 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *(int *)plVar8 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar10 + 0x10))();
    }
  }
  param_1[0x11] = lVar7;
  lVar7 = FUN_00d86bbc(local_40);
  if (lVar7 != 0) {
    piVar2 = (int *)(lVar7 + 0x50);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = *piVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar10 = (long *)param_1[0xc];
  param_1[0xc] = 0;
  if (plVar10 != (long *)0x0) {
    plVar8 = plVar10 + 10;
    do {
      iVar6 = (int)*plVar8 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *(int *)plVar8 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar10 + 0x10))();
    }
  }
  param_1[0xc] = lVar7;
  lVar7 = FUN_00d86cf4(local_40);
  if (lVar7 != 0) {
    piVar2 = (int *)(lVar7 + 0x50);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = *piVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar10 = (long *)param_1[0xd];
  param_1[0xd] = 0;
  if (plVar10 != (long *)0x0) {
    plVar8 = plVar10 + 10;
    do {
      iVar6 = (int)*plVar8 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *(int *)plVar8 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar10 + 0x10))();
    }
  }
  param_1[0xd] = lVar7;
  FUN_00d846d0(&local_68,local_40);
  plVar10 = (long *)param_1[0xe];
  param_1[0xe] = 0;
  if (plVar10 != (long *)0x0) {
    lVar7 = plVar10[0xb];
    piVar2 = (int *)(lVar7 + 0xc);
    do {
      iVar6 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar6 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 + -1 == 0) {
      *(undefined8 *)(lVar7 + 0x18) = 0;
      (**(code **)(*plVar10 + 0x20))();
    }
  }
  param_1[0xe] = local_68;
  uVar9 = *(undefined8 *)(*(long *)PTR_DAT_0437b160 + 0x328);
  local_48 = uVar9;
  FUN_00d84750(&local_68,uVar9);
  lVar7 = local_68;
  local_68 = 0;
  lVar11 = param_1[0x2d];
  param_1[0x2d] = lVar7;
  if (lVar11 == 0) {
    param_1[0x2f] = lStack_58;
    param_1[0x30] = local_50;
  }
  else {
    FUN_00d86070(param_1 + 0x2e);
    param_1[0x2f] = lStack_58;
    param_1[0x30] = local_50;
    lVar7 = param_1[0x2d];
  }
  param_1[0x2e] = local_60;
  FUN_00d3e3fc(lVar7,uVar9);
  FUN_00d84870(&local_68,uVar9);
  lVar7 = local_68;
  local_68 = 0;
  lVar11 = param_1[0x31];
  param_1[0x31] = lVar7;
  if (lVar11 == 0) {
    param_1[0x33] = lStack_58;
    param_1[0x34] = local_50;
  }
  else {
    FUN_00d8644c(param_1 + 0x32);
    param_1[0x33] = lStack_58;
    param_1[0x34] = local_50;
    lVar7 = param_1[0x31];
  }
  param_1[0x32] = local_60;
  FUN_00d3e200(lVar7,uVar9);
  FUN_00d84990(&local_68,uVar9);
  lVar7 = local_68;
  local_68 = 0;
  lVar11 = param_1[0x35];
  param_1[0x35] = lVar7;
  if (lVar11 != 0) {
    FUN_00d86828(param_1 + 0x36);
  }
  param_1[0x36] = local_60;
  param_1[0x37] = lStack_58;
  param_1[0x38] = local_50;
  lVar7 = FUN_00d86f64(uVar9,&local_48);
  if (lVar7 != 0) {
    piVar2 = (int *)(lVar7 + 0x50);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = *piVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar10 = (long *)param_1[0x39];
  param_1[0x39] = 0;
  if (plVar10 != (long *)0x0) {
    plVar8 = plVar10 + 10;
    do {
      iVar6 = (int)*plVar8 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *(int *)plVar8 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar10 + 0x10))();
    }
  }
  param_1[0x39] = lVar7;
  FUN_013e2328(lVar7,local_48);
  return;
}


