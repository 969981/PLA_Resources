/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027dcc74; name: FUN_027dcc74
 */


undefined8 FUN_027dcc74(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  undefined4 local_38c;
  undefined8 local_388;
  undefined8 local_380;
  undefined8 uStack_378;
  undefined8 local_370;
  char local_368 [377];
  undefined1 auStack_1ef [376];
  char local_77;
  long *local_70;
  long *local_68;
  
  if (param_1[1] != 0) goto LAB_027dcf44;
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379558), iVar9 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar13 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar13;
  if (lVar13 == 0) {
    return 0;
  }
  FUN_01148f20(&local_68,lVar13);
  if (local_68 == (long *)0x0) {
    return 0;
  }
  FUN_01148f94(&local_70,lVar13);
  if (local_70 == (long *)0x0) {
    bVar3 = true;
joined_r0x027dcd64:
    if (local_68 != (long *)0x0) goto LAB_027dcd28;
LAB_027dcd34:
    if (bVar3) {
      return 0;
    }
  }
  else {
    FUN_0112527c(local_368);
    if (local_368[0] == '\0') {
      bVar3 = true;
      plVar11 = local_70;
    }
    else {
      plVar11 = (long *)FUN_00e9439c(&local_388,*param_1,param_1);
      if (plVar11 != (long *)0x0) {
        plVar12 = plVar11 + 10;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar3) {
            *(int *)plVar12 = (int)*plVar12 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      FUN_02c655ac(plVar11,(ulong)local_368 | 1);
      plVar12 = (long *)FUN_00e9439c(&local_388,*param_1,param_1);
      if (plVar12 != (long *)0x0) {
        plVar1 = plVar12 + 10;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *(int *)plVar1 = (int)*plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (local_77 != '\0') {
        FUN_02c655ac(plVar12,auStack_1ef);
      }
      FUN_01125268(local_70);
      uVar10 = FUN_02c5d3a4(plVar11);
      if (((uVar10 & 1) == 0) && (uVar10 = FUN_02c62900(plVar11,1), (uVar10 & 1) == 0)) {
        uVar10 = (ulong)local_388 >> 0x20;
        local_388 = CONCAT44((uint)uVar10 & 0xffff0000,0x1000000);
        FUN_011325a0(local_68,plVar11,&local_388);
        uVar10 = FUN_02c5d3a4(plVar12);
        if (((uVar10 & 1) == 0) &&
           (uVar10 = FUN_02c62900(plVar12,1), plVar1 = local_68, (uVar10 & 1) == 0)) {
          uVar5 = FUN_02c5be48(plVar11);
          uVar6 = FUN_02c5be50(plVar11);
          uVar7 = FUN_02c5be48(plVar12);
          uVar8 = FUN_02c5be50(plVar12);
          FUN_011342b0(plVar1,uVar5,uVar6,uVar7,uVar8);
          FUN_011325a0(local_68,plVar12,&local_388);
        }
      }
      local_38c = 3;
      FUN_027dd040(&local_388,*param_1,&local_38c);
      uVar4 = local_388;
      local_388 = 0;
      lVar13 = param_1[1];
      param_1[1] = uVar4;
      if (lVar13 != 0) {
        FUN_0275e578(param_1 + 2);
      }
      param_1[3] = uStack_378;
      param_1[4] = local_370;
      param_1[2] = local_380;
      if (plVar12 != (long *)0x0) {
        plVar1 = plVar12 + 10;
        do {
          iVar9 = (int)*plVar1 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *(int *)plVar1 = iVar9;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar9 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
      if (plVar11 != (long *)0x0) {
        plVar12 = plVar11 + 10;
        do {
          iVar9 = (int)*plVar12 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar3) {
            *(int *)plVar12 = iVar9;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar9 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
        }
      }
      plVar11 = local_70;
      if (local_368[0] == '\0') {
        bVar3 = false;
      }
      else {
        bVar3 = false;
      }
    }
    local_368[0] = '\0';
    if (plVar11 != (long *)0x0) {
      local_368[0] = '\0';
      uVar10 = FUN_02a43a5c(plVar11[0xb]);
      if ((uVar10 & 1) != 0) {
        (**(code **)(*plVar11 + 0x20))(plVar11);
        goto joined_r0x027dcd64;
      }
    }
    if (local_68 == (long *)0x0) goto LAB_027dcd34;
LAB_027dcd28:
    uVar10 = FUN_02a43a5c(local_68[0xb]);
    if ((uVar10 & 1) == 0) goto LAB_027dcd34;
    (**(code **)(*local_68 + 0x20))(local_68);
    if (bVar3) {
      return 0;
    }
  }
  if (param_1[1] == 0) {
    return 1;
  }
LAB_027dcf44:
  FUN_011457e4();
  uVar10 = FUN_011458d8(param_1[1]);
  if ((uVar10 & 1) == 0) {
    return 1;
  }
  lVar13 = param_1[1];
  param_1[1] = 0;
  if (lVar13 != 0) {
    FUN_0275e578(param_1 + 2);
  }
  return 0;
}


