/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0129d114; name: FUN_0129d114
 */


void FUN_0129d114(long param_1)

{
  int *piVar1;
  byte bVar2;
  undefined1 uVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long *plVar9;
  undefined4 uVar10;
  int iVar11;
  long lVar12;
  long *local_38;
  
  uVar3 = (&DAT_03a7a660)[*(int *)(*(long *)(param_1 + 0x90) + 0x5d0)];
  FUN_00d15650(uVar3,*(undefined8 *)(param_1 + 8));
  puVar6 = PTR_DAT_04379558;
  if (((*PTR_DAT_04379558 & 1) == 0) &&
     (iVar11 = __cxa_guard_acquire(PTR_DAT_04379558), iVar11 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  puVar8 = PTR_DAT_04379568;
  puVar7 = PTR_DAT_04379560;
  *(undefined8 *)PTR_DAT_04379568 = *(undefined8 *)PTR_DAT_04379560;
  FUN_0114886c(&local_38);
  plVar9 = local_38;
  uVar10 = FUN_00d15d48(uVar3);
  FUN_010eb3e4(plVar9,uVar10);
  if (local_38 == (long *)0x0) {
LAB_0129d1b4:
    bVar2 = *puVar6;
  }
  else {
    lVar12 = local_38[0xb];
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      iVar11 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar11 + -1 != 0) goto LAB_0129d1b4;
    *(undefined8 *)(lVar12 + 0x18) = 0;
    (**(code **)(*local_38 + 0x20))();
    bVar2 = *puVar6;
  }
  if (((bVar2 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_04379558), iVar11 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  *(undefined8 *)puVar8 = *(undefined8 *)puVar7;
  FUN_01148cdc(&local_38);
  FUN_01123cf8(local_38,uVar3);
  if (local_38 == (long *)0x0) {
LAB_0129d1fc:
    bVar2 = *puVar6;
  }
  else {
    lVar12 = local_38[0xb];
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      iVar11 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar11 + -1 != 0) goto LAB_0129d1fc;
    *(undefined8 *)(lVar12 + 0x18) = 0;
    (**(code **)(*local_38 + 0x20))();
    bVar2 = *puVar6;
  }
  if (((bVar2 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_04379558), iVar11 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  *(undefined8 *)puVar8 = *(undefined8 *)puVar7;
  FUN_01148bf4(&local_38);
  FUN_010e5070(local_38);
  if (local_38 != (long *)0x0) {
    lVar12 = local_38[0xb];
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      iVar11 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*local_38 + 0x20))();
      bVar2 = *puVar6;
      goto joined_r0x0129d244;
    }
  }
  bVar2 = *puVar6;
joined_r0x0129d244:
  if (((bVar2 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_04379558), iVar11 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  *(undefined8 *)puVar8 = *(undefined8 *)puVar7;
  FUN_01148b0c(&local_38);
  FUN_0111c1cc(local_38);
  if (local_38 != (long *)0x0) {
    lVar12 = local_38[0xb];
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      iVar11 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*local_38 + 0x20))();
    }
  }
  return;
}


