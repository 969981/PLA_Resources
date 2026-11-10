/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ae991c; name: FUN_02ae991c
 */


void FUN_02ae991c(long *param_1,long *param_2)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  long *local_48;
  
  param_1[7] = 0;
  puVar6 = PTR_DAT_043796d0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (long)(puVar6 + 0x10);
  param_1[4] = 0;
  param_1[5] = 0;
  puVar6 = PTR_DAT_04379520;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar9 = __cxa_guard_acquire(PTR_DAT_04379520), puVar7 = PTR_DAT_04379528, iVar9 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar7,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  puVar7 = PTR_DAT_04379528;
  lVar10 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (lVar10 == 0) {
    lVar14 = 0;
  }
  else {
    lVar14 = 0;
    if (*(long *)(lVar10 + 0x80) != 0) {
      lVar14 = *(long *)(lVar10 + *(long *)(lVar10 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(param_1 + 10) = 0;
  *param_1 = (long)&PTR_FUN_042830e0;
  param_1[1] = lVar14;
  param_1[9] = (long)&PTR_LAB_04283140;
  plVar15 = param_1 + 0xb;
  *plVar15 = (long)&PTR_LAB_04283170;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = (long)param_2;
  param_1[0x10] = 0x1fffffffffffffff;
  param_1[0x11] = 0;
  FUN_02aed21c(param_1 + 0x14,param_2);
  puVar8 = PTR_DAT_0437e470;
  param_1[0x68] = 0;
  param_1[0x6c] = 0;
  param_1[0x6a] = (long)(puVar8 + 0x10);
  param_1[0x7e] = 0x78000000500;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  param_1[0x7f] = 0x438000002d0;
  param_1[0x80] = 0;
  lVar10 = FUN_02ad0f00(&local_48,param_2,&DAT_043ef568);
  if (lVar10 != 0) {
    piVar1 = (int *)(lVar10 + 0x50);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  lVar14 = DAT_043ef568;
  plVar16 = *(long **)(lVar10 + 0x58);
  if (plVar16 == (long *)0x0) {
    *(undefined8 *)(DAT_043ef568 + 0x140) = 0x1f;
  }
  else {
    plVar11 = plVar16 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar4) {
        *(int *)plVar11 = (int)*plVar11 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    *(undefined8 *)(lVar14 + 0x140) = 0x1f;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar4) {
        *(int *)plVar11 = (int)*plVar11 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar11 = *(long **)(lVar14 + 0x148);
  *(long **)(lVar14 + 0x148) = plVar16;
  if (plVar11 != (long *)0x0) {
    plVar2 = plVar11 + 10;
    do {
      iVar9 = (int)*plVar2 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar9;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*plVar11 + 0x10))();
    }
  }
  if (plVar16 != (long *)0x0) {
    plVar11 = plVar16 + 10;
    do {
      iVar9 = (int)*plVar11 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar4) {
        *(int *)plVar11 = iVar9;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
    }
  }
  plVar16 = (long *)param_1[0x68];
  param_1[0x68] = 0;
  if (plVar16 != (long *)0x0) {
    plVar11 = plVar16 + 10;
    do {
      iVar9 = (int)*plVar11 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar4) {
        *(int *)plVar11 = iVar9;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*plVar16 + 0x10))();
    }
  }
  param_1[0x68] = lVar10;
  uVar12 = (**(code **)(param_1[0xb] + 0x28))(plVar15);
  if (((*puVar6 & 1) == 0) &&
     (iVar9 = __cxa_guard_acquire(PTR_DAT_04379520), puVar8 = PTR_DAT_04379528, iVar9 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar8,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar10 = nn::os::GetTlsValue(*(undefined4 *)puVar7);
  if (*(ulong *)(lVar10 + 0x80) < 0x10) {
    *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = param_2;
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
    plVar16 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x3b0,8);
    if (plVar16 == (long *)0x0) {
      (**(code **)(*param_2 + 0xb8))(param_2);
    }
    FUN_02aec8fc(plVar16,uVar12);
    plVar16[0x75] = 0;
    *plVar16 = (long)&PTR_LAB_04283920;
    plVar16[1] = (long)param_2;
    plVar16[2] = (long)plVar16;
    plVar16[3] = 0x3b0;
    plVar16[4] = 8;
    plVar16[9] = (long)&PTR_LAB_042839c0;
    plVar16[10] = (long)&PTR_LAB_04283a08;
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
    plVar16[0x3c] = plVar16[0x3c] | 8;
    if (plVar16 == (long *)0x0) {
      local_48 = (long *)0x0;
    }
    else {
      lVar10 = plVar16[0xb];
      if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_02aeaa40;
      if (*(long *)(lVar10 + 0x10) == 0) {
        uVar12 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
        *(undefined8 *)(lVar10 + 0x10) = uVar12;
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
      lVar10 = plVar16[0xb];
      local_48 = plVar16;
      if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_02aeaa40;
      if (*(long *)(lVar10 + 0x10) == 0) {
        uVar12 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
        *(undefined8 *)(lVar10 + 0x10) = uVar12;
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
    (**(code **)(*plVar15 + 0x30))(plVar15,&local_48);
    if (local_48 != (long *)0x0) {
      lVar10 = local_48[0xb];
      piVar1 = (int *)(lVar10 + 0xc);
      do {
        iVar9 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar9 + -1 == 0) {
        *(undefined8 *)(lVar10 + 0x18) = 0;
        (**(code **)(*local_48 + 0x20))();
      }
    }
    if (plVar16 != (long *)0x0) {
      lVar10 = plVar16[0xb];
      piVar1 = (int *)(lVar10 + 0xc);
      do {
        iVar9 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar9 + -1 == 0) {
        *(undefined8 *)(lVar10 + 0x18) = 0;
        (**(code **)(*plVar16 + 0x20))(plVar16);
      }
    }
    uVar12 = (**(code **)(*plVar15 + 0x28))(plVar15);
    if (((*puVar6 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_04379520), puVar8 = PTR_DAT_04379528, iVar9 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)puVar7);
    if (0xf < *(ulong *)(lVar10 + 0x80)) goto LAB_02aeaa58;
    *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = param_2;
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
    plVar16 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x5d0,8);
    if (plVar16 == (long *)0x0) {
      (**(code **)(*param_2 + 0xb8))(param_2);
    }
    FUN_02aec8fc(plVar16,uVar12);
    *plVar16 = (long)&PTR_LAB_042833a0;
    *(undefined1 *)(plVar16 + 0xb5) = 0;
    *(undefined1 *)(plVar16 + 0xb6) = 0;
    plVar16[9] = (long)&PTR_LAB_04283440;
    plVar16[10] = (long)&PTR_LAB_04283488;
    memset(plVar16 + 0x75,0,0x15c);
    plVar16[0xb8] = (long)&PTR_LAB_04283368;
    plVar16[0xa1] = 0;
    plVar16[0xa2] = 0;
    plVar16[0xa3] = 0;
    plVar16[0xa4] = 0;
    plVar16[0xa5] = 0;
    plVar16[0xa6] = 0;
    plVar16[0xa7] = 0;
    plVar16[0xa8] = 0;
    plVar16[0xa9] = 0;
    plVar16[0xaa] = 0;
    plVar16[0xab] = 0;
    plVar16[0xac] = 0;
    plVar16[0xad] = 0;
    plVar16[0xae] = 0;
    plVar16[0xaf] = 0;
    plVar16[0xb0] = 0;
    plVar16[0xb1] = 0;
    plVar16[0xb2] = 0;
    plVar16[0xb3] = 0;
    *(undefined1 *)(plVar16 + 0xb4) = 0;
    plVar16[0xb9] = 0;
    plVar16[1] = (long)param_2;
    plVar16[2] = (long)plVar16;
    plVar16[3] = 0x5d0;
    plVar16[4] = 8;
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
    plVar16[0x3c] = plVar16[0x3c] | 8;
    if (plVar16 == (long *)0x0) {
      local_48 = (long *)0x0;
    }
    else {
      lVar10 = plVar16[0xb];
      if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_02aeaa40;
      if (*(long *)(lVar10 + 0x10) == 0) {
        uVar12 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
        *(undefined8 *)(lVar10 + 0x10) = uVar12;
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
      lVar10 = plVar16[0xb];
      local_48 = plVar16;
      if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_02aeaa40;
      if (*(long *)(lVar10 + 0x10) == 0) {
        uVar12 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
        *(undefined8 *)(lVar10 + 0x10) = uVar12;
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
    (**(code **)(*plVar15 + 0x30))(plVar15,&local_48);
    if (local_48 != (long *)0x0) {
      lVar10 = local_48[0xb];
      piVar1 = (int *)(lVar10 + 0xc);
      do {
        iVar9 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar9 + -1 == 0) {
        *(undefined8 *)(lVar10 + 0x18) = 0;
        (**(code **)(*local_48 + 0x20))();
      }
    }
    if (plVar16 != (long *)0x0) {
      lVar10 = plVar16[0xb];
      piVar1 = (int *)(lVar10 + 0xc);
      do {
        iVar9 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar9 + -1 == 0) {
        *(undefined8 *)(lVar10 + 0x18) = 0;
        (**(code **)(*plVar16 + 0x20))(plVar16);
      }
    }
    uVar12 = (**(code **)(*plVar15 + 0x28))(plVar15);
    if (((*puVar6 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_04379520), puVar8 = PTR_DAT_04379528, iVar9 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)puVar7);
    if (0xf < *(ulong *)(lVar10 + 0x80)) goto LAB_02aeaa58;
    *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = param_2;
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
    plVar16 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x560,8);
    if (plVar16 == (long *)0x0) {
      (**(code **)(*param_2 + 0xb8))(param_2);
    }
    FUN_02aec8fc(plVar16,uVar12);
    plVar16[0x75] = 0;
    plVar16[0x76] = 0;
    plVar16[9] = (long)&PTR_LAB_042810e0;
    plVar16[10] = (long)&PTR_LAB_04281128;
    *(undefined1 *)(plVar16 + 0x9e) = 1;
    plVar16[0xa4] = 0x3f8000003f800000;
    plVar16[0x77] = 0;
    plVar16[0x78] = 0;
    plVar16[0x79] = 0;
    plVar16[0x7a] = 0;
    plVar16[0x7b] = 0;
    plVar16[0x7c] = 0;
    plVar16[0x7d] = 0;
    plVar16[0x7e] = 0;
    plVar16[0x7f] = 0;
    plVar16[0x80] = 0;
    plVar16[0x81] = 0;
    plVar16[0x82] = 0;
    plVar16[0x83] = 0;
    plVar16[0x84] = 0;
    plVar16[0x85] = 0;
    plVar16[0x86] = 0;
    plVar16[0x87] = 0;
    plVar16[0x88] = 0;
    plVar16[0x89] = 0;
    plVar16[0x8a] = 0;
    plVar16[0x8b] = 0;
    plVar16[0x8c] = 0;
    plVar16[0x8d] = 0;
    plVar16[0x8e] = 0;
    plVar16[0x8f] = 0;
    plVar16[0x90] = 0;
    plVar16[0x91] = 0;
    plVar16[0x92] = 0;
    *(undefined4 *)(plVar16 + 0x93) = 0;
    plVar16[0x9d] = 0;
    plVar16[0x9c] = 0;
    plVar16[0x9b] = 0;
    plVar16[0x9a] = 0;
    plVar16[0x99] = 0;
    plVar16[0x98] = 0;
    plVar16[0x97] = 0;
    plVar16[0x96] = 0;
    plVar16[0x95] = 0;
    plVar16[0x94] = 0;
    *(undefined1 *)(plVar16 + 0x9f) = 0;
    plVar16[0xa5] = 0x200000000;
    plVar16[0xa6] = 0;
    plVar16[0xa7] = 0;
    plVar16[0xa8] = 0;
    plVar16[0xa9] = 0;
    plVar16[0xaa] = 0;
    *(undefined4 *)(plVar16 + 0xab) = 0;
    *plVar16 = (long)&PTR_LAB_04281040;
    plVar16[1] = (long)param_2;
    plVar16[2] = (long)plVar16;
    plVar16[3] = 0x560;
    plVar16[4] = 8;
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
    plVar16[0x3c] = plVar16[0x3c] | 8;
    if (plVar16 == (long *)0x0) {
      local_48 = (long *)0x0;
    }
    else {
      lVar10 = plVar16[0xb];
      if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_02aeaa40;
      if (*(long *)(lVar10 + 0x10) == 0) {
        uVar12 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
        *(undefined8 *)(lVar10 + 0x10) = uVar12;
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
      lVar10 = plVar16[0xb];
      local_48 = plVar16;
      if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_02aeaa40;
      if (*(long *)(lVar10 + 0x10) == 0) {
        uVar12 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
        *(undefined8 *)(lVar10 + 0x10) = uVar12;
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
    (**(code **)(*plVar15 + 0x30))(plVar15,&local_48);
    if (local_48 != (long *)0x0) {
      lVar10 = local_48[0xb];
      piVar1 = (int *)(lVar10 + 0xc);
      do {
        iVar9 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar9 + -1 == 0) {
        *(undefined8 *)(lVar10 + 0x18) = 0;
        (**(code **)(*local_48 + 0x20))();
      }
    }
    if (plVar16 != (long *)0x0) {
      lVar10 = plVar16[0xb];
      piVar1 = (int *)(lVar10 + 0xc);
      do {
        iVar9 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar9 + -1 == 0) {
        *(undefined8 *)(lVar10 + 0x18) = 0;
        (**(code **)(*plVar16 + 0x20))(plVar16);
      }
    }
    uVar12 = (**(code **)(*plVar15 + 0x28))(plVar15);
    if (((*puVar6 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_04379520), puVar8 = PTR_DAT_04379528, iVar9 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)puVar7);
    if (*(ulong *)(lVar10 + 0x80) < 0x10) {
      *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = param_2;
      *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
      plVar16 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x400,8);
      if (plVar16 == (long *)0x0) {
        (**(code **)(*param_2 + 0xb8))(param_2);
      }
      FUN_02aec8fc(plVar16,uVar12);
      *plVar16 = (long)&PTR_LAB_04283a30;
      plVar16[0x75] = 0;
      plVar16[9] = (long)&PTR_LAB_04283ad0;
      plVar16[10] = (long)&PTR_LAB_04283b18;
      plVar16[0x76] = 0;
      plVar16[0x77] = 0;
      plVar16[0x78] = 0;
      if (((*puVar6 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_04379520), puVar8 = PTR_DAT_04379528, iVar9 != 0)) {
        FUN_008a62a4(PTR_DAT_04379528);
        FUN_00100250(PTR_LAB_04379530,puVar8,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379520);
      }
      lVar13 = nn::os::GetTlsValue(*(undefined4 *)puVar7);
      lVar14 = DAT_043f1798;
      if (((lVar13 == 0) || (*(long *)(lVar13 + 0x80) == 0)) ||
         (lVar13 = *(long *)(lVar13 + *(long *)(lVar13 + 0x80) * 8 + -8), lVar13 == 0)) {
        lVar5 = tpidr_el0;
        lVar13 = *(long *)(lVar5 + 0x20);
        if (*(long *)(lVar5 + 0x20) == 0) {
          *(long *)(lVar5 + 0x20) = DAT_043f1798;
          lVar13 = lVar14;
        }
      }
      plVar16[0x79] = lVar13;
      plVar16[0x7a] = 0x1fffffffffffffff;
      plVar16[1] = (long)param_2;
      plVar16[2] = (long)plVar16;
      plVar16[0x7f] = 0x40000000001;
      plVar16[0x7b] = 0;
      *(undefined4 *)(plVar16 + 0x7c) = 0;
      plVar16[0x7d] = 0;
      plVar16[0x7e] = 0;
      plVar16[3] = 0x400;
      plVar16[4] = 8;
      *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
      lVar10 = plVar16[0xb];
      plVar16[0x3c] = plVar16[0x3c] | 8;
      if (*(undefined8 **)(lVar10 + 0x18) != (undefined8 *)0x0) {
        if (*(long *)(lVar10 + 0x10) == 0) {
          uVar12 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
          *(undefined8 *)(lVar10 + 0x10) = uVar12;
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
        lVar10 = plVar16[0xb];
        local_48 = plVar16;
        if (*(undefined8 **)(lVar10 + 0x18) != (undefined8 *)0x0) {
          if (*(long *)(lVar10 + 0x10) == 0) {
            uVar12 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
            *(undefined8 *)(lVar10 + 0x10) = uVar12;
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
          (**(code **)(*plVar15 + 0x30))(plVar15,&local_48);
          if (local_48 != (long *)0x0) {
            lVar10 = local_48[0xb];
            piVar1 = (int *)(lVar10 + 0xc);
            do {
              iVar9 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar9 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar9 + -1 == 0) {
              *(undefined8 *)(lVar10 + 0x18) = 0;
              (**(code **)(*local_48 + 0x20))();
            }
          }
          lVar10 = plVar16[0xb];
          piVar1 = (int *)(lVar10 + 0xc);
          do {
            iVar9 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar9 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar9 + -1 == 0) {
            *(undefined8 *)(lVar10 + 0x18) = 0;
            (**(code **)(*plVar16 + 0x20))(plVar16);
          }
          uVar12 = (**(code **)(*plVar15 + 0x28))(plVar15);
          if (((*puVar6 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_04379520), puVar8 = PTR_DAT_04379528, iVar9 != 0))
          {
            FUN_008a62a4(PTR_DAT_04379528);
            FUN_00100250(PTR_LAB_04379530,puVar8,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379520);
          }
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)puVar7);
          if (0xf < *(ulong *)(lVar10 + 0x80)) goto LAB_02aeaa58;
          *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = param_2;
          *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
          plVar16 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x400,0x10);
          if (plVar16 == (long *)0x0) {
            (**(code **)(*param_2 + 0xb8))(param_2);
          }
          FUN_02aec8fc(plVar16,uVar12);
          plVar16[0x75] = 0;
          plVar16[0x76] = 0;
          *plVar16 = (long)&PTR_LAB_04283bb0;
          plVar16[1] = (long)param_2;
          plVar16[0x77] = 0;
          plVar16[0x78] = 0;
          plVar16[0x79] = 0;
          plVar16[0x7a] = 0;
          plVar16[0x7c] = 0;
          plVar16[0x7d] = 0;
          plVar16[9] = (long)&PTR_LAB_04283c50;
          plVar16[10] = (long)&PTR_LAB_04283c98;
          plVar16[0x7e] = 6;
          plVar16[2] = (long)plVar16;
          plVar16[3] = 0x400;
          plVar16[4] = 0x10;
          *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
          plVar16[0x3c] = plVar16[0x3c] | 8;
          if (plVar16 == (long *)0x0) {
            local_48 = (long *)0x0;
          }
          else {
            lVar10 = plVar16[0xb];
            if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_02aeaa40;
            if (*(long *)(lVar10 + 0x10) == 0) {
              uVar12 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
              *(undefined8 *)(lVar10 + 0x10) = uVar12;
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
            lVar10 = plVar16[0xb];
            local_48 = plVar16;
            if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_02aeaa40;
            if (*(long *)(lVar10 + 0x10) == 0) {
              uVar12 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
              *(undefined8 *)(lVar10 + 0x10) = uVar12;
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
          (**(code **)(*plVar15 + 0x30))(plVar15,&local_48);
          if (local_48 != (long *)0x0) {
            lVar10 = local_48[0xb];
            piVar1 = (int *)(lVar10 + 0xc);
            do {
              iVar9 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar9 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar9 + -1 == 0) {
              *(undefined8 *)(lVar10 + 0x18) = 0;
              (**(code **)(*local_48 + 0x20))();
            }
          }
          if (plVar16 != (long *)0x0) {
            lVar10 = plVar16[0xb];
            piVar1 = (int *)(lVar10 + 0xc);
            do {
              iVar9 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar9 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar9 + -1 == 0) {
              *(undefined8 *)(lVar10 + 0x18) = 0;
              (**(code **)(*plVar16 + 0x20))(plVar16);
            }
          }
          uVar12 = (**(code **)(*plVar15 + 0x28))(plVar15);
          if (((*puVar6 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_04379520), puVar6 = PTR_DAT_04379528, iVar9 != 0))
          {
            FUN_008a62a4(PTR_DAT_04379528);
            FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379520);
          }
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)puVar7);
          if (0xf < *(ulong *)(lVar10 + 0x80)) goto LAB_02aeaa58;
          *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = param_2;
          *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
          plVar16 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x3c0,8);
          if (plVar16 == (long *)0x0) {
            (**(code **)(*param_2 + 0xb8))(param_2);
          }
          FUN_02aec8fc(plVar16,uVar12);
          plVar16[0x75] = 0;
          plVar16[0x76] = 0;
          *plVar16 = (long)&PTR_LAB_04283cc0;
          plVar16[1] = (long)param_2;
          plVar16[9] = (long)&PTR_LAB_04283d60;
          plVar16[10] = (long)&PTR_LAB_04283da8;
          *(undefined4 *)(plVar16 + 0x77) = 0x100;
          plVar16[2] = (long)plVar16;
          plVar16[3] = 0x3c0;
          plVar16[4] = 8;
          *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
          plVar16[0x3c] = plVar16[0x3c] | 8;
          if (plVar16 == (long *)0x0) {
            local_48 = (long *)0x0;
LAB_02aea63c:
            (**(code **)(*plVar15 + 0x30))(plVar15,&local_48);
            if (local_48 != (long *)0x0) {
              lVar10 = local_48[0xb];
              piVar1 = (int *)(lVar10 + 0xc);
              do {
                iVar9 = *piVar1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                  *piVar1 = iVar9 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar9 + -1 == 0) {
                *(undefined8 *)(lVar10 + 0x18) = 0;
                (**(code **)(*local_48 + 0x20))();
              }
            }
            if (plVar16 != (long *)0x0) {
              lVar10 = plVar16[0xb];
              piVar1 = (int *)(lVar10 + 0xc);
              do {
                iVar9 = *piVar1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                  *piVar1 = iVar9 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar9 + -1 == 0) {
                *(undefined8 *)(lVar10 + 0x18) = 0;
                (**(code **)(*plVar16 + 0x20))(plVar16);
              }
            }
            return;
          }
          lVar10 = plVar16[0xb];
          if (*(undefined8 **)(lVar10 + 0x18) != (undefined8 *)0x0) {
            if (*(long *)(lVar10 + 0x10) == 0) {
              uVar12 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
              *(undefined8 *)(lVar10 + 0x10) = uVar12;
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
            lVar10 = plVar16[0xb];
            local_48 = plVar16;
            if (*(undefined8 **)(lVar10 + 0x18) != (undefined8 *)0x0) {
              if (*(long *)(lVar10 + 0x10) == 0) {
                uVar12 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
                *(undefined8 *)(lVar10 + 0x10) = uVar12;
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
              goto LAB_02aea63c;
            }
          }
        }
      }
LAB_02aeaa40:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
  }
LAB_02aeaa58:
                    /* WARNING: Subroutine does not return */
  abort();
}


