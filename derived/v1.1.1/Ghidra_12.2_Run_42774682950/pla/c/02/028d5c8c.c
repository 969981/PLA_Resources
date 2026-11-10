/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028d5c8c; name: FUN_028d5c8c
 */


void FUN_028d5c8c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined *puVar1;
  int *piVar2;
  undefined8 uVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  
  uVar11 = *param_1;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar7 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar7 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar8 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (lVar8 != 0) {
    if (0xf < *(ulong *)(lVar8 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = uVar11;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
  }
  puVar6 = PTR_DAT_0437ace8;
  puVar1 = PTR_DAT_0437ace8 + 0x10;
  *param_2 = &PTR_FUN_04273558;
  param_2[1] = puVar1;
  FUN_00937ea0(param_2 + 2,param_3 + 0x10);
  lVar10 = *(long *)(param_3 + 0x20);
  param_2[4] = lVar10;
  if (lVar10 != 0) {
    piVar2 = (int *)(lVar10 + 0x50);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = *piVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  lVar10 = *(long *)(param_3 + 0x28);
  param_2[5] = lVar10;
  if (lVar10 != 0) {
    piVar2 = (int *)(lVar10 + 0x50);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = *piVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  lVar10 = *(long *)(param_3 + 0x30);
  param_2[6] = lVar10;
  if (lVar10 != 0) {
    lVar10 = *(long *)(lVar10 + 0x58);
    if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_028d6204;
    if (*(long *)(lVar10 + 0x10) == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
      *(undefined8 *)(lVar10 + 0x10) = uVar11;
    }
    piVar2 = (int *)(lVar10 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = *piVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  param_2[1] = &PTR_LAB_04273598;
  param_2[7] = &PTR_LAB_04273578;
  param_2[8] = puVar6 + 0x10;
  FUN_00937ea0(param_2 + 9,param_3 + 0x48);
  lVar10 = *(long *)(param_3 + 0x58);
  param_2[0xb] = lVar10;
  if (lVar10 != 0) {
    piVar2 = (int *)(lVar10 + 0x50);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = *piVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  lVar10 = *(long *)(param_3 + 0x60);
  param_2[0xc] = lVar10;
  if (lVar10 != 0) {
    piVar2 = (int *)(lVar10 + 0x50);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = *piVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  lVar10 = *(long *)(param_3 + 0x68);
  param_2[0xd] = lVar10;
  if (lVar10 != 0) {
    lVar10 = *(long *)(lVar10 + 0x58);
    if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_028d6204;
    if (*(long *)(lVar10 + 0x10) == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
      *(undefined8 *)(lVar10 + 0x10) = uVar11;
    }
    piVar2 = (int *)(lVar10 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = *piVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  param_2[8] = &PTR_LAB_04273598;
  lVar10 = *(long *)(param_3 + 0x70);
  param_2[0xe] = lVar10;
  if (lVar10 != 0) {
    piVar2 = (int *)(lVar10 + 0x50);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = *piVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  uVar11 = *(undefined8 *)(param_3 + 0x78);
  param_2[0x11] = puVar6 + 0x10;
  param_2[0xf] = uVar11;
  param_2[0x10] = &PTR_LAB_04273578;
  FUN_00937ea0(param_2 + 0x12,param_3 + 0x90);
  lVar10 = *(long *)(param_3 + 0xa0);
  param_2[0x14] = lVar10;
  if (lVar10 != 0) {
    piVar2 = (int *)(lVar10 + 0x50);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = *piVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  lVar10 = *(long *)(param_3 + 0xa8);
  param_2[0x15] = lVar10;
  if (lVar10 != 0) {
    piVar2 = (int *)(lVar10 + 0x50);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = *piVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  lVar10 = *(long *)(param_3 + 0xb0);
  param_2[0x16] = lVar10;
  if (lVar10 != 0) {
    lVar10 = *(long *)(lVar10 + 0x58);
    if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_028d6204;
    if (*(long *)(lVar10 + 0x10) == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
      *(undefined8 *)(lVar10 + 0x10) = uVar11;
    }
    piVar2 = (int *)(lVar10 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = *piVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  param_2[0x11] = &PTR_LAB_04273598;
  lVar10 = *(long *)(param_3 + 0xb8);
  param_2[0x17] = lVar10;
  if (lVar10 != 0) {
    piVar2 = (int *)(lVar10 + 0x50);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = *piVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  uVar11 = *(undefined8 *)(param_3 + 0xc0);
  param_2[0x1a] = puVar6 + 0x10;
  param_2[0x18] = uVar11;
  param_2[0x19] = &PTR_LAB_04273578;
  FUN_00937ea0(param_2 + 0x1b,param_3 + 0xd8);
  lVar10 = *(long *)(param_3 + 0xe8);
  param_2[0x1d] = lVar10;
  if (lVar10 != 0) {
    piVar2 = (int *)(lVar10 + 0x50);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = *piVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  lVar10 = *(long *)(param_3 + 0xf0);
  param_2[0x1e] = lVar10;
  if (lVar10 != 0) {
    piVar2 = (int *)(lVar10 + 0x50);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = *piVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  lVar10 = *(long *)(param_3 + 0xf8);
  param_2[0x1f] = lVar10;
  if (lVar10 != 0) {
    lVar10 = *(long *)(lVar10 + 0x58);
    if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_028d6204;
    if (*(long *)(lVar10 + 0x10) == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
      *(undefined8 *)(lVar10 + 0x10) = uVar11;
    }
    piVar2 = (int *)(lVar10 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = *piVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  param_2[0x1a] = &PTR_LAB_04273598;
  lVar10 = *(long *)(param_3 + 0x100);
  param_2[0x20] = lVar10;
  if (lVar10 != 0) {
    piVar2 = (int *)(lVar10 + 0x50);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = *piVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  uVar11 = *(undefined8 *)(param_3 + 0x108);
  param_2[0x23] = puVar6 + 0x10;
  param_2[0x21] = uVar11;
  param_2[0x22] = &PTR_LAB_04273578;
  FUN_00937ea0(param_2 + 0x24,param_3 + 0x120);
  lVar10 = *(long *)(param_3 + 0x130);
  param_2[0x26] = lVar10;
  if (lVar10 != 0) {
    piVar2 = (int *)(lVar10 + 0x50);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = *piVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  lVar10 = *(long *)(param_3 + 0x138);
  param_2[0x27] = lVar10;
  if (lVar10 != 0) {
    piVar2 = (int *)(lVar10 + 0x50);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = *piVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  lVar10 = *(long *)(param_3 + 0x140);
  param_2[0x28] = lVar10;
  if (lVar10 != 0) {
    lVar10 = *(long *)(lVar10 + 0x58);
    if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) {
LAB_028d6204:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar10 + 0x10) == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
      *(undefined8 *)(lVar10 + 0x10) = uVar11;
    }
    piVar2 = (int *)(lVar10 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = *piVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  param_2[0x23] = &PTR_LAB_04273598;
  lVar10 = *(long *)(param_3 + 0x148);
  param_2[0x29] = lVar10;
  if (lVar10 != 0) {
    piVar2 = (int *)(lVar10 + 0x50);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = *piVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  param_2[0x2a] = *(undefined8 *)(param_3 + 0x150);
  param_2[0x2b] = *(undefined8 *)(param_3 + 0x158);
  param_2[0x2c] = *(undefined8 *)(param_3 + 0x160);
  param_2[0x2d] = *(undefined8 *)(param_3 + 0x168);
  plVar9 = *(long **)(param_3 + 0x170);
  param_2[0x2e] = plVar9;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x18))();
  }
  param_2[0x2f] = *(undefined8 *)(param_3 + 0x178);
  param_2[0x30] = *(undefined8 *)(param_3 + 0x180);
  param_2[0x31] = *(undefined8 *)(param_3 + 0x188);
  plVar9 = *(long **)(param_3 + 400);
  param_2[0x32] = plVar9;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x18))();
  }
  param_2[0x33] = *(undefined8 *)(param_3 + 0x198);
  param_2[0x34] = *(undefined8 *)(param_3 + 0x1a0);
  param_2[0x35] = *(undefined8 *)(param_3 + 0x1a8);
  plVar9 = *(long **)(param_3 + 0x1b0);
  param_2[0x36] = plVar9;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x18))();
  }
  uVar11 = *(undefined8 *)(param_3 + 0x1b8);
  uVar3 = *(undefined8 *)(param_3 + 0x1c0);
  *(undefined1 *)(param_2 + 0x39) = *(undefined1 *)(param_3 + 0x1c8);
  param_2[0x37] = uVar11;
  param_2[0x38] = uVar3;
  if (lVar8 != 0) {
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
  }
  return;
}


