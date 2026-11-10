/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b34b24; name: FUN_01b34b24
 */


void FUN_01b34b24(undefined1 *param_1,undefined1 *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  
  *param_1 = *param_2;
  puVar5 = PTR_DAT_043826e8;
  *(undefined **)(param_1 + 8) = PTR_DAT_043826e8 + 0x10;
  FUN_009878e4(param_1 + 0x10,param_2 + 0x10);
  lVar8 = *(long *)(param_2 + 0x20);
  *(long *)(param_1 + 0x20) = lVar8;
  if (lVar8 != 0) {
    piVar1 = (int *)(lVar8 + 0x50);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar8 = *(long *)(param_2 + 0x28);
  *(long *)(param_1 + 0x28) = lVar8;
  if (lVar8 != 0) {
    piVar1 = (int *)(lVar8 + 0x50);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar8 = *(long *)(param_2 + 0x30);
  *(long *)(param_1 + 0x30) = lVar8;
  if (lVar8 != 0) {
    lVar8 = *(long *)(lVar8 + 0x58);
    if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) goto LAB_01b35168;
    if (*(long *)(lVar8 + 0x10) == 0) {
      uVar6 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
      *(undefined8 *)(lVar8 + 0x10) = uVar6;
    }
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puVar4 = PTR_DAT_043826e0;
  *(undefined **)(param_1 + 8) = PTR_DAT_043826e0 + 0x10;
  plVar7 = *(long **)(param_2 + 0x38);
  *(long **)(param_1 + 0x38) = plVar7;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x18))();
  }
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  plVar7 = *(long **)(param_2 + 0x58);
  *(long **)(param_1 + 0x58) = plVar7;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x18))();
  }
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
  *(undefined **)(param_1 + 0x68) = puVar5 + 0x10;
  FUN_009878e4(param_1 + 0x70,param_2 + 0x70);
  lVar8 = *(long *)(param_2 + 0x80);
  *(long *)(param_1 + 0x80) = lVar8;
  if (lVar8 != 0) {
    piVar1 = (int *)(lVar8 + 0x50);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar8 = *(long *)(param_2 + 0x88);
  *(long *)(param_1 + 0x88) = lVar8;
  if (lVar8 != 0) {
    piVar1 = (int *)(lVar8 + 0x50);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar8 = *(long *)(param_2 + 0x90);
  *(long *)(param_1 + 0x90) = lVar8;
  if (lVar8 != 0) {
    lVar8 = *(long *)(lVar8 + 0x58);
    if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) goto LAB_01b35168;
    if (*(long *)(lVar8 + 0x10) == 0) {
      uVar6 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
      *(undefined8 *)(lVar8 + 0x10) = uVar6;
    }
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *(undefined **)(param_1 + 0x68) = puVar4 + 0x10;
  plVar7 = *(long **)(param_2 + 0x98);
  *(long **)(param_1 + 0x98) = plVar7;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x18))();
  }
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_2 + 0xa0);
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_2 + 0xa8);
  *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_2 + 0xb0);
  plVar7 = *(long **)(param_2 + 0xb8);
  *(long **)(param_1 + 0xb8) = plVar7;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x18))();
  }
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_2 + 0xc0);
  *(undefined **)(param_1 + 200) = puVar5 + 0x10;
  FUN_009878e4(param_1 + 0xd0,param_2 + 0xd0);
  lVar8 = *(long *)(param_2 + 0xe0);
  *(long *)(param_1 + 0xe0) = lVar8;
  if (lVar8 != 0) {
    piVar1 = (int *)(lVar8 + 0x50);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar8 = *(long *)(param_2 + 0xe8);
  *(long *)(param_1 + 0xe8) = lVar8;
  if (lVar8 != 0) {
    piVar1 = (int *)(lVar8 + 0x50);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar8 = *(long *)(param_2 + 0xf0);
  *(long *)(param_1 + 0xf0) = lVar8;
  if (lVar8 != 0) {
    lVar8 = *(long *)(lVar8 + 0x58);
    if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) goto LAB_01b35168;
    if (*(long *)(lVar8 + 0x10) == 0) {
      uVar6 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
      *(undefined8 *)(lVar8 + 0x10) = uVar6;
    }
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *(undefined **)(param_1 + 200) = puVar4 + 0x10;
  plVar7 = *(long **)(param_2 + 0xf8);
  *(long **)(param_1 + 0xf8) = plVar7;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x18))();
  }
  *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)(param_2 + 0x100);
  *(undefined8 *)(param_1 + 0x108) = *(undefined8 *)(param_2 + 0x108);
  *(undefined8 *)(param_1 + 0x110) = *(undefined8 *)(param_2 + 0x110);
  plVar7 = *(long **)(param_2 + 0x118);
  *(long **)(param_1 + 0x118) = plVar7;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x18))();
  }
  *(undefined4 *)(param_1 + 0x120) = *(undefined4 *)(param_2 + 0x120);
  *(undefined **)(param_1 + 0x128) = puVar5 + 0x10;
  FUN_009878e4(param_1 + 0x130,param_2 + 0x130);
  lVar8 = *(long *)(param_2 + 0x140);
  *(long *)(param_1 + 0x140) = lVar8;
  if (lVar8 != 0) {
    piVar1 = (int *)(lVar8 + 0x50);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar8 = *(long *)(param_2 + 0x148);
  *(long *)(param_1 + 0x148) = lVar8;
  if (lVar8 != 0) {
    piVar1 = (int *)(lVar8 + 0x50);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar8 = *(long *)(param_2 + 0x150);
  *(long *)(param_1 + 0x150) = lVar8;
  if (lVar8 != 0) {
    lVar8 = *(long *)(lVar8 + 0x58);
    if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) goto LAB_01b35168;
    if (*(long *)(lVar8 + 0x10) == 0) {
      uVar6 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
      *(undefined8 *)(lVar8 + 0x10) = uVar6;
    }
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *(undefined **)(param_1 + 0x128) = puVar4 + 0x10;
  plVar7 = *(long **)(param_2 + 0x158);
  *(long **)(param_1 + 0x158) = plVar7;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x18))();
  }
  *(undefined8 *)(param_1 + 0x160) = *(undefined8 *)(param_2 + 0x160);
  *(undefined8 *)(param_1 + 0x168) = *(undefined8 *)(param_2 + 0x168);
  *(undefined8 *)(param_1 + 0x170) = *(undefined8 *)(param_2 + 0x170);
  plVar7 = *(long **)(param_2 + 0x178);
  *(long **)(param_1 + 0x178) = plVar7;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x18))();
  }
  *(undefined4 *)(param_1 + 0x180) = *(undefined4 *)(param_2 + 0x180);
  *(undefined **)(param_1 + 0x188) = puVar5 + 0x10;
  FUN_009878e4(param_1 + 400,param_2 + 400);
  lVar8 = *(long *)(param_2 + 0x1a0);
  *(long *)(param_1 + 0x1a0) = lVar8;
  if (lVar8 != 0) {
    piVar1 = (int *)(lVar8 + 0x50);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar8 = *(long *)(param_2 + 0x1a8);
  *(long *)(param_1 + 0x1a8) = lVar8;
  if (lVar8 != 0) {
    piVar1 = (int *)(lVar8 + 0x50);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar8 = *(long *)(param_2 + 0x1b0);
  *(long *)(param_1 + 0x1b0) = lVar8;
  if (lVar8 != 0) {
    lVar8 = *(long *)(lVar8 + 0x58);
    if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) goto LAB_01b35168;
    if (*(long *)(lVar8 + 0x10) == 0) {
      uVar6 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
      *(undefined8 *)(lVar8 + 0x10) = uVar6;
    }
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *(undefined **)(param_1 + 0x188) = puVar4 + 0x10;
  plVar7 = *(long **)(param_2 + 0x1b8);
  *(long **)(param_1 + 0x1b8) = plVar7;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x18))();
  }
  *(undefined8 *)(param_1 + 0x1c0) = *(undefined8 *)(param_2 + 0x1c0);
  *(undefined8 *)(param_1 + 0x1c8) = *(undefined8 *)(param_2 + 0x1c8);
  *(undefined8 *)(param_1 + 0x1d0) = *(undefined8 *)(param_2 + 0x1d0);
  plVar7 = *(long **)(param_2 + 0x1d8);
  *(long **)(param_1 + 0x1d8) = plVar7;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x18))();
  }
  *(undefined4 *)(param_1 + 0x1e0) = *(undefined4 *)(param_2 + 0x1e0);
  *(undefined **)(param_1 + 0x1e8) = puVar5 + 0x10;
  FUN_009878e4(param_1 + 0x1f0,param_2 + 0x1f0);
  lVar8 = *(long *)(param_2 + 0x200);
  *(long *)(param_1 + 0x200) = lVar8;
  if (lVar8 != 0) {
    piVar1 = (int *)(lVar8 + 0x50);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar8 = *(long *)(param_2 + 0x208);
  *(long *)(param_1 + 0x208) = lVar8;
  if (lVar8 != 0) {
    piVar1 = (int *)(lVar8 + 0x50);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar8 = *(long *)(param_2 + 0x210);
  *(long *)(param_1 + 0x210) = lVar8;
  if (lVar8 != 0) {
    lVar8 = *(long *)(lVar8 + 0x58);
    if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) {
LAB_01b35168:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar8 + 0x10) == 0) {
      uVar6 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
      *(undefined8 *)(lVar8 + 0x10) = uVar6;
    }
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *(undefined **)(param_1 + 0x1e8) = puVar4 + 0x10;
  plVar7 = *(long **)(param_2 + 0x218);
  *(long **)(param_1 + 0x218) = plVar7;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x18))();
  }
  *(undefined8 *)(param_1 + 0x220) = *(undefined8 *)(param_2 + 0x220);
  *(undefined8 *)(param_1 + 0x228) = *(undefined8 *)(param_2 + 0x228);
  *(undefined8 *)(param_1 + 0x230) = *(undefined8 *)(param_2 + 0x230);
  plVar7 = *(long **)(param_2 + 0x238);
  *(long **)(param_1 + 0x238) = plVar7;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x18))();
  }
  *(undefined4 *)(param_1 + 0x240) = *(undefined4 *)(param_2 + 0x240);
  return;
}


