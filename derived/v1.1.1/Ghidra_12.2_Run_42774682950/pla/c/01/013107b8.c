/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013107b8; name: FUN_013107b8
 */


void FUN_013107b8(long param_1,undefined8 param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  code *pcVar11;
  undefined4 uVar12;
  code *local_4d0;
  code *local_4c8;
  code *local_4c0;
  long *local_4b8;
  long local_4b0 [124];
  undefined1 *local_d0;
  code *local_c8;
  code *local_c0;
  undefined1 *local_b8;
  long alStack_b0 [12];
  
  *(undefined8 *)(param_1 + 0x5c0) = param_2;
  FUN_013110b0(&local_4d0,*(undefined8 *)(param_1 + 8));
  pcVar11 = local_4d0;
  local_4d0 = (code *)0x0;
  lVar9 = *(long *)(param_1 + 0x1dc0);
  *(code **)(param_1 + 0x1dc0) = pcVar11;
  if (lVar9 != 0) {
    FUN_013192f4(param_1 + 0x1dc8);
  }
  *(code **)(param_1 + 0x1dd0) = local_4c0;
  *(long **)(param_1 + 0x1dd8) = local_4b8;
  *(code **)(param_1 + 0x1dc8) = local_4c8;
  FUN_01311260(&local_4d0,*(undefined8 *)(param_1 + 8));
  pcVar11 = local_4d0;
  local_4d0 = (code *)0x0;
  lVar9 = *(long *)(param_1 + 0x1de0);
  *(code **)(param_1 + 0x1de0) = pcVar11;
  if (lVar9 == 0) {
    *(long **)(param_1 + 0x1df8) = local_4b8;
    *(code **)(param_1 + 0x1df0) = local_4c0;
    *(code **)(param_1 + 0x1de8) = local_4c8;
    local_4d0 = (code *)0x0;
  }
  else {
    FUN_0131954c(param_1 + 0x1de8);
    pcVar11 = local_4d0;
    *(long **)(param_1 + 0x1df8) = local_4b8;
    *(code **)(param_1 + 0x1df0) = local_4c0;
    *(code **)(param_1 + 0x1de8) = local_4c8;
    local_4d0 = (code *)0x0;
    if (pcVar11 != (code *)0x0) {
      FUN_0131954c(&local_4c8);
    }
  }
  local_4d0 = (code *)CONCAT44(local_4d0._4_4_,0x400);
  lVar9 = FUN_00a246f0(&local_d0,*(undefined8 *)(param_1 + 8),&local_4d0);
  if (lVar9 != 0) {
    piVar1 = (int *)(lVar9 + 0x50);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar6 = *(long **)(param_1 + 0x1e00);
  *(undefined8 *)(param_1 + 0x1e00) = 0;
  if (plVar6 != (long *)0x0) {
    plVar8 = plVar6 + 10;
    do {
      iVar5 = (int)*plVar8 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *(int *)plVar8 = iVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))();
    }
  }
  *(long *)(param_1 + 0x1e00) = lVar9;
  plVar6 = *(long **)(*(long *)(param_1 + 0x440) + 0x58);
  if (plVar6 != (long *)0x0) {
    lVar9 = plVar6[0xb];
    if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) goto LAB_0131108c;
    if (*(long *)(lVar9 + 0x10) == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
      *(undefined8 *)(lVar9 + 0x10) = uVar7;
    }
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  local_4d0 = (code *)0x8c9f5041309993d0;
  local_4c8 = (code *)0x392904d;
  local_4c0 = (code *)0xe;
  local_4b8 = (long *)0x0;
  lVar9 = FUN_00d4d2c4(plVar6,*(undefined8 *)(param_1 + 8),&local_4d0);
  if (local_4b8 != (long *)0x0) {
    (**(code **)(*local_4b8 + 0x20))();
  }
  if (plVar6 != (long *)0x0) {
    lVar10 = plVar6[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar5 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*plVar6 + 0x20))(plVar6);
    }
  }
  plVar6 = *(long **)(lVar9 + 0x318);
  *(undefined8 *)(lVar9 + 0x310) = 0;
  *(undefined8 *)(lVar9 + 0xf8) = 1;
  *(undefined1 **)(lVar9 + 0x300) = &DAT_cbf29ce484222645;
  *(undefined1 **)(lVar9 + 0x308) = &DAT_03996322;
  *(undefined8 *)(lVar9 + 0x318) = 0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x20))();
  }
  pcVar11 = *(code **)(lVar9 + 0x188);
  local_4d0 = FUN_01319960;
  local_4c8 = FUN_01319d44;
  local_4c0 = FUN_01319d48;
  local_4b8 = (long *)&LAB_01319d54;
  local_4b0[0] = param_1;
  if (pcVar11 == (code *)0x0) {
LAB_01310a00:
    (*local_4c0)(local_4b0,lVar9 + 0x1a0);
    *(code **)(lVar9 + 0x188) = local_4c8;
    *(long **)(lVar9 + 0x198) = local_4b8;
    *(code **)(lVar9 + 400) = local_4c0;
    *(undefined8 *)(lVar9 + 0x180) = local_4d0;
  }
  else {
    *(undefined8 *)(lVar9 + 400) = 0;
    *(undefined8 *)(lVar9 + 0x198) = 0;
    *(undefined8 *)(lVar9 + 0x180) = 0;
    *(undefined8 *)(lVar9 + 0x188) = 0;
    (*pcVar11)(lVar9 + 0x1a0);
    if (local_4c0 != (code *)0x0) goto LAB_01310a00;
  }
  pcVar11 = local_4c8;
  if (local_4c8 != (code *)0x0) {
    local_4c0 = (code *)0x0;
    local_4b8 = (long *)0x0;
    local_4d0 = (code *)0x0;
    local_4c8 = (code *)0x0;
    (*pcVar11)(local_4b0);
  }
  plVar6 = *(long **)(*(long *)(param_1 + 0x440) + 0x58);
  if (plVar6 != (long *)0x0) {
    lVar9 = plVar6[0xb];
    if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) goto LAB_0131108c;
    if (*(long *)(lVar9 + 0x10) == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
      *(undefined8 *)(lVar9 + 0x10) = uVar7;
    }
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  local_4d0 = (code *)0x8c9f434130997db9;
  local_4c8 = (code *)0x38fe8f3;
  local_4c0 = (code *)0xe;
  local_4b8 = (long *)0x0;
  lVar9 = FUN_00d4d2c4(plVar6,*(undefined8 *)(param_1 + 8),&local_4d0);
  if (local_4b8 != (long *)0x0) {
    (**(code **)(*local_4b8 + 0x20))();
  }
  if (plVar6 != (long *)0x0) {
    lVar10 = plVar6[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar5 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*plVar6 + 0x20))(plVar6);
    }
  }
  *(undefined8 *)(lVar9 + 0xf8) = 0x80;
  local_4d0 = (code *)&LAB_01319d60;
  local_4c8 = FUN_01319d98;
  local_4c0 = FUN_01319d9c;
  local_4b8 = (long *)&LAB_01319da8;
  local_4b0[0] = param_1;
  if (((*PTR_DAT_0437a0d0 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar5 != 0))
  {
    FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a0d0);
  }
  puVar4 = PTR_DAT_0437a0d8;
  *(undefined8 *)(lVar9 + 0x300) = *(undefined8 *)PTR_DAT_0437a0d8;
  *(undefined8 *)(lVar9 + 0x308) = *(undefined8 *)(puVar4 + 8);
  plVar6 = *(long **)(puVar4 + 0x18);
  *(undefined8 *)(lVar9 + 0x310) = *(undefined8 *)(puVar4 + 0x10);
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  plVar8 = *(long **)(lVar9 + 0x318);
  *(long **)(lVar9 + 0x318) = plVar6;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x20))();
  }
  pcVar11 = *(code **)(lVar9 + 0x188);
  if (pcVar11 != (code *)0x0) {
    *(undefined8 *)(lVar9 + 400) = 0;
    *(undefined8 *)(lVar9 + 0x198) = 0;
    *(undefined8 *)(lVar9 + 0x180) = 0;
    *(undefined8 *)(lVar9 + 0x188) = 0;
    (*pcVar11)(lVar9 + 0x1a0);
  }
  if (local_4c0 != (code *)0x0) {
    (*local_4c0)(local_4b0,lVar9 + 0x1a0);
    *(code **)(lVar9 + 0x188) = local_4c8;
    *(long **)(lVar9 + 0x198) = local_4b8;
    *(code **)(lVar9 + 400) = local_4c0;
    *(undefined8 *)(lVar9 + 0x180) = local_4d0;
  }
  pcVar11 = local_4c8;
  if (local_4c8 != (code *)0x0) {
    local_4c0 = (code *)0x0;
    local_4b8 = (long *)0x0;
    local_4d0 = (code *)0x0;
    local_4c8 = (code *)0x0;
    (*pcVar11)(local_4b0);
  }
  plVar6 = *(long **)(*(long *)(param_1 + 0x440) + 0x58);
  if (plVar6 != (long *)0x0) {
    lVar9 = plVar6[0xb];
    if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) goto LAB_0131108c;
    if (*(long *)(lVar9 + 0x10) == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
      *(undefined8 *)(lVar9 + 0x10) = uVar7;
    }
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  local_4d0 = (code *)0x8c9f4941309987eb;
  local_4c8 = (code *)0x38aed54;
  local_4c0 = (code *)0xe;
  local_4b8 = (long *)0x0;
  lVar9 = FUN_00d4d2c4(plVar6,*(undefined8 *)(param_1 + 8),&local_4d0);
  if (local_4b8 != (long *)0x0) {
    (**(code **)(*local_4b8 + 0x20))();
  }
  if (plVar6 != (long *)0x0) {
    lVar10 = plVar6[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar5 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*plVar6 + 0x20))(plVar6);
    }
  }
  pcVar11 = *(code **)(lVar9 + 0x188);
  *(undefined8 *)(lVar9 + 0xf8) = 4;
  local_4d0 = (code *)&LAB_01319db4;
  local_4c8 = FUN_01319e70;
  local_4c0 = FUN_01319e74;
  local_4b8 = (long *)&LAB_01319e80;
  local_4b0[0] = param_1;
  if (pcVar11 == (code *)0x0) {
LAB_01310cf4:
    (*local_4c0)(local_4b0,lVar9 + 0x1a0);
    *(code **)(lVar9 + 0x188) = local_4c8;
    *(long **)(lVar9 + 0x198) = local_4b8;
    *(code **)(lVar9 + 400) = local_4c0;
    *(undefined8 *)(lVar9 + 0x180) = local_4d0;
  }
  else {
    *(undefined8 *)(lVar9 + 400) = 0;
    *(undefined8 *)(lVar9 + 0x198) = 0;
    *(undefined8 *)(lVar9 + 0x180) = 0;
    *(undefined8 *)(lVar9 + 0x188) = 0;
    (*pcVar11)(lVar9 + 0x1a0);
    if (local_4c0 != (code *)0x0) goto LAB_01310cf4;
  }
  pcVar11 = local_4c8;
  if (local_4c8 != (code *)0x0) {
    local_4c0 = (code *)0x0;
    local_4b8 = (long *)0x0;
    local_4d0 = (code *)0x0;
    local_4c8 = (code *)0x0;
    (*pcVar11)(local_4b0);
  }
  plVar6 = *(long **)(*(long *)(param_1 + 0x440) + 0x58);
  if (plVar6 != (long *)0x0) {
    lVar9 = plVar6[0xb];
    if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) {
LAB_0131108c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar9 + 0x10) == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
      *(undefined8 *)(lVar9 + 0x10) = uVar7;
    }
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  local_4d0 = (code *)0x8c9f484130998638;
  local_4c8 = (code *)0x3991ec2;
  local_4c0 = (code *)0xe;
  local_4b8 = (long *)0x0;
  lVar9 = FUN_00d4d2c4(plVar6,*(undefined8 *)(param_1 + 8),&local_4d0);
  if (local_4b8 != (long *)0x0) {
    (**(code **)(*local_4b8 + 0x20))();
  }
  if (plVar6 != (long *)0x0) {
    lVar10 = plVar6[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar5 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*plVar6 + 0x20))(plVar6);
    }
  }
  pcVar11 = *(code **)(lVar9 + 0x188);
  *(undefined8 *)(lVar9 + 0xf8) = 8;
  local_d0 = &LAB_01319e8c;
  local_c8 = FUN_01319f38;
  local_c0 = FUN_01319f3c;
  local_b8 = &LAB_01319f48;
  alStack_b0[0] = param_1;
  if (pcVar11 != (code *)0x0) {
    *(undefined8 *)(lVar9 + 400) = 0;
    *(undefined8 *)(lVar9 + 0x198) = 0;
    *(undefined8 *)(lVar9 + 0x180) = 0;
    *(undefined8 *)(lVar9 + 0x188) = 0;
    (*pcVar11)(lVar9 + 0x1a0);
    if (local_c0 == (code *)0x0) goto LAB_01310e78;
  }
  (*local_c0)(alStack_b0,lVar9 + 0x1a0);
  *(code **)(lVar9 + 0x188) = local_c8;
  *(undefined1 **)(lVar9 + 0x198) = local_b8;
  *(code **)(lVar9 + 400) = local_c0;
  *(undefined8 *)(lVar9 + 0x180) = local_d0;
LAB_01310e78:
  memset(&local_4d0,0,0x400);
  lVar9 = 0;
  do {
    snprintf((char *)&local_4d0,0x400,"%s%03d",*(char **)(param_1 + 0x1e10),(int)lVar9);
    lVar10 = FUN_01306260(param_1 + 0x180,&local_4d0);
    *(long *)(param_1 + 0xd80 + lVar9 * 8) = lVar10;
    lVar9 = lVar9 + 1;
    *(byte *)(lVar10 + 0x58) = *(byte *)(lVar10 + 0x58) | 1;
  } while (lVar9 != 0x100);
  lVar9 = 0;
  do {
    snprintf((char *)&local_4d0,0x400,"%s%02d",*(char **)(param_1 + 0x1e18),(int)lVar9);
    lVar10 = FUN_01306260(param_1 + 0x180,&local_4d0);
    *(long *)(param_1 + 0x1580 + lVar9 * 8) = lVar10;
    lVar9 = lVar9 + 1;
    *(byte *)(lVar10 + 0x58) = *(byte *)(lVar10 + 0x58) | 1;
  } while (lVar9 != 0x24);
  uVar12 = 0x41a00000;
  if (*(char *)(param_1 + 0x1e08) != '\0') {
    uVar12 = 0x41f00000;
  }
  FUN_01305e3c(uVar12,param_1 + 0xd68);
  pcVar11 = local_c8;
  if (local_c8 != (code *)0x0) {
    local_c0 = (code *)0x0;
    local_b8 = (undefined1 *)0x0;
    local_d0 = (undefined1 *)0x0;
    local_c8 = (code *)0x0;
    (*pcVar11)(alStack_b0);
  }
  return;
}


