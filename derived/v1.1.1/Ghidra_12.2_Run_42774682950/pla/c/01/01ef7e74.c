/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ef7e74; name: FUN_01ef7e74
 */


void FUN_01ef7e74(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  long *plVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  undefined8 local_80;
  char *pcStack_78;
  long *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  long *local_38;
  
  *(undefined1 *)(param_1 + 0x254) = 1;
  if (((*PTR_DAT_04379678 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04379678), iVar5 != 0))
  {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  lVar9 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar9;
  plVar6 = *(long **)(lVar9 + 0x100);
  if (plVar6 != (long *)0x0) {
    plVar10 = plVar6 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *(int *)plVar10 = (int)*plVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar10 = (long *)plVar6[0x20];
  if (plVar10 != (long *)0x0) {
    plVar1 = plVar10 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar1 = plVar6 + 10;
  do {
    iVar5 = (int)*plVar1 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar5;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar5 == 0) {
    (**(code **)(*plVar6 + 0x10))();
  }
  FUN_0165ddcc(&local_38,plVar10);
  puVar7 = (undefined1 *)FUN_016b05e0(local_38);
  if (puVar7 == &DAT_cbf29ce484222645) {
    if (((*PTR_DAT_0437a780 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_0437a780), iVar5 != 0)) {
      FUN_00100250(PTR_LAB_0437a8a0,PTR_DAT_0437a788,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a780);
    }
    uVar8 = *(undefined8 *)PTR_DAT_0437a788;
    *(undefined8 *)PTR_DAT_0437a790 = uVar8;
    lVar9 = FUN_01e65c40(uVar8,param_1 + 400);
    puVar4 = PTR_DAT_04379570;
    *(undefined8 *)(param_1 + 0x1a8) = *(undefined8 *)(lVar9 + 0xb8);
    *(undefined8 *)(param_1 + 0x1a0) = *(undefined8 *)(lVar9 + 0xb0);
    uVar8 = *(undefined8 *)(puVar4 + 8);
    *(undefined8 *)(param_1 + 0x1b0) = *(undefined8 *)puVar4;
    *(undefined8 *)(param_1 + 0x1b8) = uVar8;
  }
  else {
    FUN_016b0960(local_38,puVar7);
    FUN_016b0d4c(&local_80,local_38,puVar7);
    plVar6 = local_68;
    if (local_68 == (long *)0x0) {
      strncpy((char *)(param_1 + 0x1c0),pcStack_78,0x80);
      *(undefined8 *)(param_1 + 400) = local_80;
    }
    else {
      (**(code **)(*local_68 + 0x18))(local_68);
      strncpy((char *)(param_1 + 0x1c0),pcStack_78,0x80);
      *(undefined8 *)(param_1 + 400) = local_80;
      (**(code **)(*plVar6 + 0x20))(plVar6);
    }
    *(undefined8 *)(param_1 + 0x1a8) = local_58;
    *(undefined8 *)(param_1 + 0x1a0) = uStack_60;
    *(undefined8 *)(param_1 + 0x1b8) = local_48;
    *(undefined8 *)(param_1 + 0x1b0) = local_50;
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x20))();
    }
  }
  if (local_38 != (long *)0x0) {
    plVar6 = local_38 + 10;
    do {
      iVar5 = (int)*plVar6 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *(int *)plVar6 = iVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*local_38 + 0x10))();
    }
  }
  if (plVar10 != (long *)0x0) {
    plVar6 = plVar10 + 10;
    do {
      iVar5 = (int)*plVar6 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *(int *)plVar6 = iVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
  }
  return;
}


