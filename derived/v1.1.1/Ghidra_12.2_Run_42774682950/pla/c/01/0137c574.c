/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0137c574; name: FUN_0137c574
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0137c574(long param_1,undefined8 param_2)

{
  long *plVar1;
  int *piVar2;
  byte bVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  byte *pbVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  undefined1 *puVar18;
  byte local_890 [1024];
  long *local_490;
  undefined1 *local_488;
  undefined1 *local_480;
  size_t local_478;
  long *local_470;
  undefined1 *local_88;
  undefined1 **ppuStack_80;
  size_t local_78;
  undefined8 uStack_70;
  
  if (((*PTR_DAT_04379678 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379678), iVar9 != 0))
  {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  lVar12 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar12;
  plVar16 = *(long **)(lVar12 + 0x100);
  if (plVar16 != (long *)0x0) {
    plVar17 = plVar16 + 10;
    do {
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar7) {
        *(int *)plVar17 = (int)*plVar17 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar17 = (long *)plVar16[0x20];
  if (plVar17 != (long *)0x0) {
    plVar10 = plVar17 + 10;
    do {
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar7) {
        *(int *)plVar10 = (int)*plVar10 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar10 = (long *)plVar17[0xe];
  if (plVar10 != (long *)0x0) {
    plVar15 = plVar10 + 10;
    do {
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar7) {
        *(int *)plVar15 = (int)*plVar15 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar15 = (long *)plVar10[0xb];
  if (plVar15 != (long *)0x0) {
    plVar1 = plVar15 + 10;
    do {
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar1 = plVar10 + 10;
  do {
    iVar9 = (int)*plVar1 + -1;
    cVar5 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *(int *)plVar1 = iVar9;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (iVar9 == 0) {
    (**(code **)(*plVar10 + 0x10))();
  }
  plVar10 = plVar17 + 10;
  do {
    iVar9 = (int)*plVar10 + -1;
    cVar5 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar7) {
      *(int *)plVar10 = iVar9;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (iVar9 == 0) {
    (**(code **)(*plVar17 + 0x10))(plVar17);
  }
  plVar17 = plVar16 + 10;
  do {
    iVar9 = (int)*plVar17 + -1;
    cVar5 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar17,0x10);
    if (bVar7) {
      *(int *)plVar17 = iVar9;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (iVar9 == 0) {
    (**(code **)(*plVar16 + 0x10))(plVar16);
  }
  FUN_016a50f0(&local_490,plVar15,(long *)(param_1 + 0x28),param_2);
  if (local_490 == (long *)0x0) {
    bVar8 = false;
    bVar7 = false;
  }
  else {
    if (((*PTR_DAT_04379558 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_04379558), iVar9 != 0)) {
      FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379558);
    }
    lVar12 = *(long *)PTR_DAT_04379560;
    *(long *)PTR_DAT_04379568 = lVar12;
    plVar16 = *(long **)(lVar12 + 0x290);
    if (plVar16 == (long *)0x0) {
      lVar12 = _DAT_000000d0;
    }
    else {
      lVar12 = plVar16[0xb];
      if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar12 + 0x10) == 0) {
        uVar11 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
        *(undefined8 *)(lVar12 + 0x10) = uVar11;
      }
      piVar2 = (int *)(lVar12 + 0xc);
      do {
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar7) {
          *piVar2 = *piVar2 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      lVar13 = plVar16[0xb];
      piVar2 = (int *)(lVar13 + 0xc);
      lVar12 = plVar16[0x1a];
      do {
        iVar9 = *piVar2;
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar7) {
          *piVar2 = iVar9 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar9 + -1 == 0) {
        *(undefined8 *)(lVar13 + 0x18) = 0;
        (**(code **)(*plVar16 + 0x20))(plVar16);
      }
    }
    bVar7 = *(long *)(param_1 + 0x28) == lVar12;
    bVar8 = *(int *)((long)local_490 + 100) == 0;
  }
  lVar12 = *(long *)(param_1 + 0x10);
  plVar16 = *(long **)(lVar12 + 0x2c8);
  if (plVar16 != (long *)0x0) {
    plVar17 = plVar16 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar6) {
        *(int *)plVar17 = (int)*plVar17 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  puVar18 = &DAT_cbf29ce484222645;
  memset(local_890,0,0x400);
  snprintf((char *)local_890,0x400,"list_button_%02d",*(int *)(param_1 + 8));
  local_478 = strlen((char *)local_890);
  local_488 = &DAT_cbf29ce484222645;
  if (local_890[0] != 0) {
    local_488 = &DAT_cbf29ce484222645;
    pbVar14 = (byte *)((ulong)local_890 | 1);
    do {
      local_488 = (undefined1 *)(((ulong)local_488 ^ (ulong)local_890[0]) * 0x100000001b3);
      local_890[0] = *pbVar14;
      pbVar14 = pbVar14 + 1;
    } while (local_890[0] != 0);
  }
  local_470 = (long *)0x0;
  local_480 = local_890;
  lVar12 = FUN_00d2e944(lVar12 + 0x180,&local_488);
  if (local_470 != (long *)0x0) {
    (**(code **)(*local_470 + 0x20))();
  }
  if (lVar12 != 0) {
    *(byte *)(lVar12 + 0x2aa) = bVar8 & bVar7 ^ 1;
  }
  uVar4 = *(uint *)(param_1 + 0x30);
  if (bVar7) {
    if (1 < uVar4) goto joined_r0x0137c830;
    lVar12 = *(long *)(param_1 + 0x10);
    memset(&local_488,0,0x400);
    snprintf((char *)&local_488,0x400,"anime_L_button_list_%02d_%s",*(int *)(param_1 + 8),
             (&PTR_s_pguide_off_state_04207cd8)[(int)uVar4]);
    local_78 = strlen((char *)&local_488);
    local_88 = &DAT_cbf29ce484222645;
    if ((byte)local_488 != 0) {
      local_88 = &DAT_cbf29ce484222645;
      pbVar14 = (byte *)((ulong)&local_488 | 1);
      bVar3 = (byte)local_488;
      do {
        local_88 = (undefined1 *)(((ulong)local_88 ^ (ulong)bVar3) * 0x100000001b3);
        bVar3 = *pbVar14;
        pbVar14 = pbVar14 + 1;
      } while (bVar3 != 0);
    }
    uStack_70 = 0;
    ppuStack_80 = &local_488;
    if (*(long *)(lVar12 + 0x2c8) != 0) {
      FUN_0283b430(*(long *)(lVar12 + 0x2c8),&local_88);
    }
    *(undefined4 *)(param_1 + 0x30) = 3;
    snprintf((char *)&local_488,0x400,"anime_L_button_list_%02d_%s",*(int *)(param_1 + 8),
             "pguide_on");
    local_78 = strlen((char *)&local_488);
    if ((byte)local_488 != 0) {
      pbVar14 = (byte *)((ulong)&local_488 | 1);
      bVar3 = (byte)local_488;
      do {
        puVar18 = (undefined1 *)(((ulong)puVar18 ^ (ulong)bVar3) * 0x100000001b3);
        bVar3 = *pbVar14;
        pbVar14 = pbVar14 + 1;
      } while (bVar3 != 0);
    }
  }
  else {
    if ((uVar4 & 0xfffffffe) != 2) goto joined_r0x0137c830;
    lVar12 = *(long *)(param_1 + 0x10);
    memset(&local_488,0,0x400);
    snprintf((char *)&local_488,0x400,"anime_L_button_list_%02d_%s",*(int *)(param_1 + 8),
             (&PTR_s_pguide_off_state_04207cd8)[(int)uVar4]);
    local_78 = strlen((char *)&local_488);
    local_88 = &DAT_cbf29ce484222645;
    if ((byte)local_488 != 0) {
      local_88 = &DAT_cbf29ce484222645;
      pbVar14 = (byte *)((ulong)&local_488 | 1);
      bVar3 = (byte)local_488;
      do {
        local_88 = (undefined1 *)(((ulong)local_88 ^ (ulong)bVar3) * 0x100000001b3);
        bVar3 = *pbVar14;
        pbVar14 = pbVar14 + 1;
      } while (bVar3 != 0);
    }
    uStack_70 = 0;
    ppuStack_80 = &local_488;
    if (*(long *)(lVar12 + 0x2c8) != 0) {
      FUN_0283b430(*(long *)(lVar12 + 0x2c8),&local_88);
    }
    *(undefined4 *)(param_1 + 0x30) = 1;
    snprintf((char *)&local_488,0x400,"anime_L_button_list_%02d_%s",*(int *)(param_1 + 8),
             "pguide_off");
    local_78 = strlen((char *)&local_488);
    if ((byte)local_488 != 0) {
      pbVar14 = (byte *)((ulong)&local_488 | 1);
      bVar3 = (byte)local_488;
      do {
        puVar18 = (undefined1 *)(((ulong)puVar18 ^ (ulong)bVar3) * 0x100000001b3);
        bVar3 = *pbVar14;
        pbVar14 = pbVar14 + 1;
      } while (bVar3 != 0);
    }
  }
  ppuStack_80 = &local_488;
  uStack_70 = 0;
  local_88 = puVar18;
  if (*(long *)(lVar12 + 0x2c8) != 0) {
    FUN_0283b1e8(*(long *)(lVar12 + 0x2c8),&local_88);
  }
joined_r0x0137c830:
  if (plVar16 != (long *)0x0) {
    plVar17 = plVar16 + 10;
    do {
      iVar9 = (int)*plVar17 + -1;
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar7) {
        *(int *)plVar17 = iVar9;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
    }
  }
  if (local_490 != (long *)0x0) {
    plVar16 = local_490 + 10;
    do {
      iVar9 = (int)*plVar16 + -1;
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar7) {
        *(int *)plVar16 = iVar9;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*local_490 + 0x10))();
    }
  }
  if (plVar15 != (long *)0x0) {
    plVar16 = plVar15 + 10;
    do {
      iVar9 = (int)*plVar16 + -1;
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar7) {
        *(int *)plVar16 = iVar9;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
    }
  }
  return;
}


