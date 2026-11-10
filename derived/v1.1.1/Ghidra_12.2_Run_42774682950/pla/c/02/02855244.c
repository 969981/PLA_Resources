/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02855244; name: FUN_02855244
 */


void FUN_02855244(long param_1,long *param_2,undefined8 *param_3)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  
  lVar10 = *param_2;
  if (lVar10 != 0) {
    piVar1 = (int *)(lVar10 + 0x50);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar7 = *(long **)(param_1 + 8);
  *(long *)(param_1 + 8) = lVar10;
  if (plVar7 == (long *)0x0) {
LAB_028552a4:
    lVar10 = param_2[1];
  }
  else {
    plVar9 = plVar7 + 10;
    do {
      iVar6 = (int)*plVar9 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *(int *)plVar9 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 != 0) goto LAB_028552a4;
    (**(code **)(*plVar7 + 0x10))();
    lVar10 = param_2[1];
  }
  if (lVar10 != 0) {
    lVar11 = *(long *)(lVar10 + 0x58);
    if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar11 + 0x10) == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
      *(undefined8 *)(lVar11 + 0x10) = uVar8;
    }
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar7 = *(long **)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar10;
  if (plVar7 == (long *)0x0) {
LAB_0285530c:
    lVar10 = param_2[2];
  }
  else {
    lVar10 = plVar7[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar6 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar6 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 + -1 != 0) goto LAB_0285530c;
    *(undefined8 *)(lVar10 + 0x18) = 0;
    (**(code **)(*plVar7 + 0x20))();
    lVar10 = param_2[2];
  }
  if (lVar10 != 0) {
    piVar1 = (int *)(lVar10 + 0x50);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar7 = *(long **)(param_1 + 0x18);
  *(long *)(param_1 + 0x18) = lVar10;
  if (plVar7 == (long *)0x0) {
LAB_0285534c:
    lVar10 = param_2[3];
  }
  else {
    plVar9 = plVar7 + 10;
    do {
      iVar6 = (int)*plVar9 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *(int *)plVar9 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 != 0) goto LAB_0285534c;
    (**(code **)(*plVar7 + 0x10))();
    lVar10 = param_2[3];
  }
  if (lVar10 != 0) {
    piVar1 = (int *)(lVar10 + 0x50);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar7 = *(long **)(param_1 + 0x20);
  *(long *)(param_1 + 0x20) = lVar10;
  if (plVar7 != (long *)0x0) {
    plVar9 = plVar7 + 10;
    do {
      iVar6 = (int)*plVar9 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *(int *)plVar9 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))();
      lVar10 = param_2[4];
      goto joined_r0x02855390;
    }
  }
  lVar10 = param_2[4];
joined_r0x02855390:
  if (lVar10 != 0) {
    piVar1 = (int *)(lVar10 + 0x50);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar7 = *(long **)(param_1 + 0x28);
  *(long *)(param_1 + 0x28) = lVar10;
  if (plVar7 != (long *)0x0) {
    plVar9 = plVar7 + 10;
    do {
      iVar6 = (int)*plVar9 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *(int *)plVar9 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  lVar10 = param_2[5];
  lVar11 = param_2[7];
  *(long *)(param_1 + 0x38) = param_2[6];
  *(long *)(param_1 + 0x40) = lVar11;
  *(long *)(param_1 + 0x30) = lVar10;
  *(undefined8 *)(param_1 + 0x48) = *param_3;
  *(undefined8 *)(param_1 + 0x50) = param_3[1];
  *(undefined8 *)(param_1 + 0x58) = param_3[2];
  plVar7 = (long *)param_3[3];
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x18))(plVar7);
  }
  plVar9 = *(long **)(param_1 + 0x60);
  *(long **)(param_1 + 0x60) = plVar7;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x20))();
  }
  *(undefined8 *)(param_1 + 0x68) = param_3[4];
  *(undefined8 *)(param_1 + 0x70) = param_3[5];
  *(undefined8 *)(param_1 + 0x78) = param_3[6];
  plVar7 = (long *)param_3[7];
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x18))(plVar7);
  }
  plVar9 = *(long **)(param_1 + 0x80);
  *(long **)(param_1 + 0x80) = plVar7;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x20))();
  }
  *(undefined8 *)(param_1 + 0x88) = param_3[8];
  *(undefined8 *)(param_1 + 0x90) = param_3[9];
  *(undefined8 *)(param_1 + 0x98) = param_3[10];
  plVar7 = (long *)param_3[0xb];
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x18))(plVar7);
  }
  plVar9 = *(long **)(param_1 + 0xa0);
  *(long **)(param_1 + 0xa0) = plVar7;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x20))();
  }
  *(undefined8 *)(param_1 + 0xa8) = param_3[0xc];
  *(undefined8 *)(param_1 + 0xb0) = param_3[0xd];
  *(undefined8 *)(param_1 + 0xb8) = param_3[0xe];
  plVar7 = (long *)param_3[0xf];
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x18))(plVar7);
  }
  plVar9 = *(long **)(param_1 + 0xc0);
  *(long **)(param_1 + 0xc0) = plVar7;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x20))();
  }
  *(undefined8 *)(param_1 + 200) = param_3[0x10];
  uVar8 = param_3[0x11];
  uVar2 = param_3[0x12];
  uVar3 = param_3[0x14];
  *(undefined8 *)(param_1 + 0xe0) = param_3[0x13];
  *(undefined8 *)(param_1 + 0xe8) = uVar3;
  *(undefined8 *)(param_1 + 0xd0) = uVar8;
  *(undefined8 *)(param_1 + 0xd8) = uVar2;
  uVar8 = param_3[0x15];
  uVar2 = param_3[0x16];
  uVar3 = param_3[0x18];
  *(undefined8 *)(param_1 + 0x100) = param_3[0x17];
  *(undefined8 *)(param_1 + 0x108) = uVar3;
  *(undefined8 *)(param_1 + 0xf0) = uVar8;
  *(undefined8 *)(param_1 + 0xf8) = uVar2;
  FUN_028555f4(param_1);
  FUN_0285645c(param_1);
  FUN_028565b4(param_1);
  FUN_0283b1e8(*(undefined8 *)(param_1 + 8),param_1 + 0x2f8);
  return;
}


