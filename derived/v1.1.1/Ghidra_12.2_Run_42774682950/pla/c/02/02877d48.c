/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02877d48; name: FUN_02877d48
 */


void FUN_02877d48(undefined8 *param_1)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  code *pcVar8;
  undefined8 *puVar9;
  undefined8 local_38;
  
  lVar7 = param_1[0x5f4];
  *param_1 = &PTR_FUN_04271200;
  param_1[0x5f4] = 0;
  if (lVar7 == 0) {
    plVar6 = (long *)param_1[0x5f3];
    if (plVar6 == (long *)0x0) goto LAB_02877d9c;
LAB_02877d80:
    lVar7 = plVar6[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      iVar5 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 != 0) goto LAB_02877d9c;
    *(undefined8 *)(lVar7 + 0x18) = 0;
    (**(code **)(*plVar6 + 0x20))();
    plVar6 = (long *)param_1[0x5f2];
  }
  else {
    FUN_00d3c348(param_1 + 0x5f5);
    plVar6 = (long *)param_1[0x5f3];
    if (plVar6 != (long *)0x0) goto LAB_02877d80;
LAB_02877d9c:
    plVar6 = (long *)param_1[0x5f2];
  }
  if (plVar6 != (long *)0x0) {
    plVar2 = plVar6 + 10;
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
      (**(code **)(*plVar6 + 0x10))();
    }
  }
  FUN_009848d0(param_1 + 0x5ec);
  FUN_009848d0(param_1 + 0x5e6);
  plVar6 = (long *)param_1[0x5e5];
  if (plVar6 == (long *)0x0) {
LAB_02877df8:
    plVar6 = (long *)param_1[0x5dd];
    if (plVar6 == (long *)0x0) goto LAB_02877e1c;
LAB_02877e00:
    lVar7 = plVar6[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      iVar5 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 != 0) goto LAB_02877e1c;
    *(undefined8 *)(lVar7 + 0x18) = 0;
    (**(code **)(*plVar6 + 0x20))();
    plVar6 = (long *)param_1[0x5d7];
    if (plVar6 != (long *)0x0) goto LAB_02877e24;
LAB_02877e3c:
    plVar6 = (long *)param_1[0x5d4];
    if (plVar6 == (long *)0x0) goto LAB_02877e60;
LAB_02877e44:
    lVar7 = plVar6[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      iVar5 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 != 0) goto LAB_02877e60;
    *(undefined8 *)(lVar7 + 0x18) = 0;
    (**(code **)(*plVar6 + 0x20))();
    puVar9 = (undefined8 *)param_1[0x5a6];
  }
  else {
    lVar7 = plVar6[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      iVar5 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 != 0) goto LAB_02877df8;
    *(undefined8 *)(lVar7 + 0x18) = 0;
    (**(code **)(*plVar6 + 0x20))();
    plVar6 = (long *)param_1[0x5dd];
    if (plVar6 != (long *)0x0) goto LAB_02877e00;
LAB_02877e1c:
    plVar6 = (long *)param_1[0x5d7];
    if (plVar6 == (long *)0x0) goto LAB_02877e3c;
LAB_02877e24:
    plVar2 = plVar6 + 10;
    do {
      iVar5 = (int)*plVar2 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 != 0) goto LAB_02877e3c;
    (**(code **)(*plVar6 + 0x10))();
    plVar6 = (long *)param_1[0x5d4];
    if (plVar6 != (long *)0x0) goto LAB_02877e44;
LAB_02877e60:
    puVar9 = (undefined8 *)param_1[0x5a6];
  }
  if (puVar9 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar9 + 1);
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
      puVar9[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar7 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar7;
      local_38 = *puVar9;
      FUN_02a44274(lVar7 + 0xd8,&local_38);
    }
  }
  lVar7 = param_1[0x5a2];
  param_1[0x5a2] = 0;
  if (lVar7 == 0) {
    plVar6 = (long *)param_1[0x5a0];
    if (plVar6 == (long *)0x0) goto LAB_02877ef0;
LAB_02877ed4:
    lVar7 = plVar6[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      iVar5 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 != 0) goto LAB_02877ef0;
    *(undefined8 *)(lVar7 + 0x18) = 0;
    (**(code **)(*plVar6 + 0x20))();
    plVar6 = (long *)param_1[0x59f];
    if (plVar6 != (long *)0x0) goto LAB_02877ef8;
LAB_02877f14:
    plVar6 = (long *)param_1[0x59e];
    if (plVar6 == (long *)0x0) goto LAB_02877f38;
LAB_02877f1c:
    lVar7 = plVar6[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      iVar5 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 != 0) goto LAB_02877f38;
    *(undefined8 *)(lVar7 + 0x18) = 0;
    (**(code **)(*plVar6 + 0x20))();
    plVar6 = (long *)param_1[0x59d];
    if (plVar6 != (long *)0x0) goto LAB_02877f40;
LAB_02877f5c:
    plVar6 = (long *)param_1[0x59c];
  }
  else {
    FUN_028786f0(param_1 + 0x5a3);
    plVar6 = (long *)param_1[0x5a0];
    if (plVar6 != (long *)0x0) goto LAB_02877ed4;
LAB_02877ef0:
    plVar6 = (long *)param_1[0x59f];
    if (plVar6 == (long *)0x0) goto LAB_02877f14;
LAB_02877ef8:
    lVar7 = plVar6[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      iVar5 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 != 0) goto LAB_02877f14;
    *(undefined8 *)(lVar7 + 0x18) = 0;
    (**(code **)(*plVar6 + 0x20))();
    plVar6 = (long *)param_1[0x59e];
    if (plVar6 != (long *)0x0) goto LAB_02877f1c;
LAB_02877f38:
    plVar6 = (long *)param_1[0x59d];
    if (plVar6 == (long *)0x0) goto LAB_02877f5c;
LAB_02877f40:
    lVar7 = plVar6[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      iVar5 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 != 0) goto LAB_02877f5c;
    *(undefined8 *)(lVar7 + 0x18) = 0;
    (**(code **)(*plVar6 + 0x20))();
    plVar6 = (long *)param_1[0x59c];
  }
  if (plVar6 != (long *)0x0) {
    lVar7 = plVar6[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
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
      *(undefined8 *)(lVar7 + 0x18) = 0;
      (**(code **)(*plVar6 + 0x20))();
    }
  }
  pcVar8 = (code *)param_1[0x58b];
  puVar9 = param_1 + 0x59c;
  while( true ) {
    if (pcVar8 != (code *)0x0) {
      puVar9[-0x10] = 0;
      puVar9[-0xf] = 0;
      puVar9[-0x12] = 0;
      puVar9[-0x11] = 0;
      (*pcVar8)(puVar9 + -0xe);
    }
    pcVar8 = (code *)puVar9[-0x21];
    if (pcVar8 != (code *)0x0) {
      puVar9[-0x20] = 0;
      puVar9[-0x1f] = 0;
      puVar9[-0x21] = 0;
      puVar9[-0x22] = 0;
      (*pcVar8)(puVar9 + -0x1e);
    }
    plVar6 = (long *)puVar9[-0x23];
    if (plVar6 != (long *)0x0) {
      lVar7 = plVar6[0xb];
      piVar1 = (int *)(lVar7 + 0xc);
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
        *(undefined8 *)(lVar7 + 0x18) = 0;
        (**(code **)(*plVar6 + 0x20))();
      }
    }
    if (puVar9 + -0x24 == param_1 + 0x20) break;
    pcVar8 = (code *)puVar9[-0x35];
    puVar9 = puVar9 + -0x24;
  }
  if ((long *)param_1[0x1e] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x1e] + 0x20))();
  }
  plVar6 = (long *)param_1[0x1a];
  if (plVar6 == (long *)0x0) {
LAB_028781e0:
    pcVar8 = (code *)param_1[0xb];
  }
  else {
    lVar7 = plVar6[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      iVar5 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 != 0) goto LAB_028781e0;
    *(undefined8 *)(lVar7 + 0x18) = 0;
    (**(code **)(*plVar6 + 0x20))();
    pcVar8 = (code *)param_1[0xb];
  }
  if (pcVar8 != (code *)0x0) {
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    (*pcVar8)(param_1 + 0xe);
  }
  plVar6 = (long *)param_1[9];
  if (plVar6 == (long *)0x0) {
LAB_0287821c:
    plVar6 = (long *)param_1[8];
    if (plVar6 == (long *)0x0) goto LAB_02878240;
LAB_02878224:
    lVar7 = plVar6[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      iVar5 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 != 0) goto LAB_02878240;
    *(undefined8 *)(lVar7 + 0x18) = 0;
    (**(code **)(*plVar6 + 0x20))();
    plVar6 = (long *)param_1[7];
    if (plVar6 != (long *)0x0) goto LAB_02878248;
LAB_02878264:
    plVar6 = (long *)param_1[6];
    if (plVar6 == (long *)0x0) goto LAB_02878288;
LAB_0287826c:
    lVar7 = plVar6[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      iVar5 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 != 0) goto LAB_02878288;
    *(undefined8 *)(lVar7 + 0x18) = 0;
    (**(code **)(*plVar6 + 0x20))();
    plVar6 = (long *)param_1[5];
    if (plVar6 != (long *)0x0) goto LAB_02878290;
LAB_028782ac:
    plVar6 = (long *)param_1[4];
    if (plVar6 == (long *)0x0) goto LAB_028782d0;
LAB_028782b4:
    lVar7 = plVar6[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      iVar5 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 != 0) goto LAB_028782d0;
    *(undefined8 *)(lVar7 + 0x18) = 0;
    (**(code **)(*plVar6 + 0x20))();
    plVar6 = (long *)param_1[3];
  }
  else {
    lVar7 = plVar6[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      iVar5 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 != 0) goto LAB_0287821c;
    *(undefined8 *)(lVar7 + 0x18) = 0;
    (**(code **)(*plVar6 + 0x20))();
    plVar6 = (long *)param_1[8];
    if (plVar6 != (long *)0x0) goto LAB_02878224;
LAB_02878240:
    plVar6 = (long *)param_1[7];
    if (plVar6 == (long *)0x0) goto LAB_02878264;
LAB_02878248:
    lVar7 = plVar6[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      iVar5 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 != 0) goto LAB_02878264;
    *(undefined8 *)(lVar7 + 0x18) = 0;
    (**(code **)(*plVar6 + 0x20))();
    plVar6 = (long *)param_1[6];
    if (plVar6 != (long *)0x0) goto LAB_0287826c;
LAB_02878288:
    plVar6 = (long *)param_1[5];
    if (plVar6 == (long *)0x0) goto LAB_028782ac;
LAB_02878290:
    lVar7 = plVar6[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      iVar5 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 != 0) goto LAB_028782ac;
    *(undefined8 *)(lVar7 + 0x18) = 0;
    (**(code **)(*plVar6 + 0x20))();
    plVar6 = (long *)param_1[4];
    if (plVar6 != (long *)0x0) goto LAB_028782b4;
LAB_028782d0:
    plVar6 = (long *)param_1[3];
  }
  if (plVar6 != (long *)0x0) {
    lVar7 = plVar6[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
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
      *(undefined8 *)(lVar7 + 0x18) = 0;
      (**(code **)(*plVar6 + 0x20))();
      plVar6 = (long *)param_1[2];
      goto joined_r0x028782f8;
    }
  }
  plVar6 = (long *)param_1[2];
joined_r0x028782f8:
  if (plVar6 != (long *)0x0) {
    lVar7 = plVar6[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
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
      *(undefined8 *)(lVar7 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x02878428. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar6 + 0x20))();
      return;
    }
  }
  return;
}


