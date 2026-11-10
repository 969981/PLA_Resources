/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c4cb98; name: FUN_01c4cb98
 */


void FUN_01c4cb98(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 local_b8;
  char *pcStack_b0;
  undefined8 local_a8;
  long *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  long *local_80;
  long *local_78;
  
  FUN_01abb2f4();
  *param_1 = &PTR_LAB_0424be40;
  param_1[9] = &PTR_LAB_0424bf48;
  param_1[10] = &PTR_LAB_0424c028;
  param_1[0x3e] = &PTR_LAB_0424c050;
  puVar5 = PTR_DAT_04379660;
  local_88 = 10;
  local_80 = (long *)0x0;
  local_98 = &DAT_ba08f9c76f8154b7;
  local_90 = "field_item";
  local_b8 = 0xbcdd7b58c983097d;
  pcStack_b0 = "whRimColorR";
  local_a8 = 0xb;
  local_a0 = (long *)0x0;
  if (((*PTR_DAT_04379660 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379660), iVar8 != 0))
  {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  puVar7 = PTR_DAT_04379670;
  puVar6 = PTR_DAT_04379668;
  uVar9 = *(undefined8 *)PTR_DAT_04379668;
  *(undefined8 *)PTR_DAT_04379670 = uVar9;
  FUN_00d7d9e4(&local_78,uVar9,&local_98);
  if (local_78 == (long *)0x0) {
    fVar11 = 0.0;
  }
  else {
    iVar8 = FUN_00d78f50(local_78,&local_b8);
    if (local_78 != (long *)0x0) {
      plVar1 = local_78 + 10;
      do {
        iVar4 = (int)*plVar1 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*local_78 + 0x10))();
      }
    }
    fVar11 = (float)iVar8;
  }
  if (local_a0 != (long *)0x0) {
    (**(code **)(*local_a0 + 0x20))();
  }
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  local_88 = 10;
  local_80 = (long *)0x0;
  local_b8 = 0xbcdd8658c9831c2e;
  pcStack_b0 = "whRimColorG";
  local_98 = &DAT_ba08f9c76f8154b7;
  local_90 = "field_item";
  local_a8 = 0xb;
  local_a0 = (long *)0x0;
  if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379660), iVar8 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  uVar9 = *(undefined8 *)puVar6;
  *(undefined8 *)puVar7 = uVar9;
  FUN_00d7d9e4(&local_78,uVar9,&local_98);
  if (local_78 == (long *)0x0) {
    fVar12 = 0.0;
  }
  else {
    iVar8 = FUN_00d78f50(local_78,&local_b8);
    if (local_78 != (long *)0x0) {
      plVar1 = local_78 + 10;
      do {
        iVar4 = (int)*plVar1 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*local_78 + 0x10))();
      }
    }
    fVar12 = (float)iVar8;
  }
  if (local_a0 != (long *)0x0) {
    (**(code **)(*local_a0 + 0x20))();
  }
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  local_88 = 10;
  local_80 = (long *)0x0;
  local_b8 = 0xbcdd8b58c98324ad;
  pcStack_b0 = "whRimColorB";
  local_98 = &DAT_ba08f9c76f8154b7;
  local_90 = "field_item";
  local_a8 = 0xb;
  local_a0 = (long *)0x0;
  if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379660), iVar8 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  uVar9 = *(undefined8 *)puVar6;
  *(undefined8 *)puVar7 = uVar9;
  FUN_00d7d9e4(&local_78,uVar9,&local_98);
  if (local_78 == (long *)0x0) {
    fVar13 = 0.0;
  }
  else {
    iVar8 = FUN_00d78f50(local_78,&local_b8);
    if (local_78 != (long *)0x0) {
      plVar1 = local_78 + 10;
      do {
        iVar4 = (int)*plVar1 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*local_78 + 0x10))();
      }
    }
    fVar13 = (float)iVar8;
  }
  if (local_a0 != (long *)0x0) {
    (**(code **)(*local_a0 + 0x20))();
  }
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  local_88 = 10;
  local_80 = (long *)0x0;
  local_b8 = 0xbcdd8858c9831f94;
  pcStack_b0 = "whRimColorA";
  local_98 = &DAT_ba08f9c76f8154b7;
  local_90 = "field_item";
  local_a8 = 0xb;
  local_a0 = (long *)0x0;
  if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379660), iVar8 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  uVar9 = *(undefined8 *)puVar6;
  *(undefined8 *)puVar7 = uVar9;
  FUN_00d7d9e4(&local_78,uVar9,&local_98);
  if (local_78 == (long *)0x0) {
    fVar14 = 0.0;
  }
  else {
    iVar8 = FUN_00d78f50(local_78,&local_b8);
    if (local_78 != (long *)0x0) {
      plVar1 = local_78 + 10;
      do {
        iVar4 = (int)*plVar1 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*local_78 + 0x10))();
      }
    }
    fVar14 = (float)iVar8;
  }
  if (local_a0 != (long *)0x0) {
    (**(code **)(*local_a0 + 0x20))();
  }
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  local_98 = &DAT_ba08f9c76f8154b7;
  local_90 = "field_item";
  local_88 = 10;
  local_80 = (long *)0x0;
  local_b8 = 0x1b75c087ff216bbb;
  pcStack_b0 = "whRimPower";
  local_a8 = 10;
  local_a0 = (long *)0x0;
  if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379660), iVar8 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  uVar9 = *(undefined8 *)puVar6;
  *(undefined8 *)puVar7 = uVar9;
  FUN_00d7d9e4(&local_78,uVar9,&local_98);
  if (local_78 == (long *)0x0) {
    uVar10 = 0;
  }
  else {
    uVar10 = FUN_00d7905c(local_78,&local_b8);
    if (local_78 != (long *)0x0) {
      plVar1 = local_78 + 10;
      do {
        iVar8 = (int)*plVar1 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar8;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar8 == 0) {
        (**(code **)(*local_78 + 0x10))();
      }
    }
  }
  if (local_a0 != (long *)0x0) {
    (**(code **)(*local_a0 + 0x20))();
  }
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  local_88 = CONCAT44(local_88._4_4_,uVar10);
  local_98 = (undefined1 *)CONCAT44(fVar12 / 255.0,fVar11 / 255.0);
  local_90 = (char *)CONCAT44(fVar14 / 255.0,fVar13 / 255.0);
  FUN_01abf5d4(param_1,&local_98);
  return;
}


