/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0096d008; name: FUN_0096d008
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0096d008(long param_1,undefined4 param_2)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long *local_a8;
  undefined8 local_a0;
  undefined2 local_98;
  undefined1 local_96;
  undefined8 local_90;
  undefined2 local_88;
  undefined1 local_86;
  undefined8 local_80;
  undefined2 local_78;
  undefined1 local_76;
  undefined8 local_70;
  undefined2 local_68;
  undefined1 local_66;
  undefined8 local_60;
  undefined2 local_58;
  undefined1 local_56;
  undefined8 local_50;
  undefined2 local_48;
  undefined1 local_46;
  
  puVar5 = PTR_DAT_04379578;
  local_a0 = 0;
  local_98 = 0xff01;
  local_96 = 0;
  local_90 = 0;
  local_88 = 0xff01;
  local_86 = 0;
  local_80 = 0;
  local_78 = 0xff01;
  local_76 = 0;
  local_70 = 0;
  local_68 = 0xff01;
  local_66 = 0;
  local_60 = 0;
  local_58 = 0xff01;
  local_56 = 0;
  local_50 = 0;
  local_48 = 0xff01;
  local_46 = 0;
  if (((*PTR_DAT_04379578 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379578), iVar8 != 0))
  {
    FUN_00100250(PTR_LAB_043796d8,PTR_DAT_04379580,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379578);
  }
  puVar7 = PTR_DAT_04379588;
  puVar6 = PTR_DAT_04379580;
  lVar10 = *(long *)PTR_DAT_04379580;
  *(long *)PTR_DAT_04379588 = lVar10;
  plVar9 = *(long **)(lVar10 + 0xb0);
  if (plVar9 == (long *)0x0) {
    lVar10 = _DAT_000000e0;
  }
  else {
    plVar1 = plVar9 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lVar10 = plVar9[0x1c];
    do {
      iVar8 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar8;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar9 + 0x10))();
    }
  }
  lVar10 = *(long *)(lVar10 + 0x110);
  if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379578), iVar8 != 0)) {
    FUN_00100250(PTR_LAB_043796d8,PTR_DAT_04379580,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379578);
  }
  lVar11 = *(long *)puVar6;
  *(long *)puVar7 = lVar11;
  plVar9 = *(long **)(lVar11 + 0xb0);
  if (plVar9 == (long *)0x0) {
    lVar11 = _DAT_000000e0;
  }
  else {
    plVar1 = plVar9 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lVar11 = plVar9[0x1c];
    do {
      iVar8 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar8;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar9 + 0x10))();
    }
  }
  FUN_009671f0(&local_a0,lVar11,lVar10 + 0x70,0x1f,param_2);
  if (((*(long *)(param_1 + 0x58) != 0) && (FUN_00931034(&local_a8), local_a8 != (long *)0x0)) &&
     (FUN_011db4f8(local_a8[0xd4],&local_a0), local_a8 != (long *)0x0)) {
    lVar10 = local_a8[0xb];
    piVar2 = (int *)(lVar10 + 0xc);
    do {
      iVar8 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*local_a8 + 0x20))();
    }
  }
  return;
}


