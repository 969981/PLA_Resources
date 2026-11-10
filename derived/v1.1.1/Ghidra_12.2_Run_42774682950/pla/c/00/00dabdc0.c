/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00dabdc0; name: FUN_00dabdc0
 */


void FUN_00dabdc0(void)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  byte bVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  ulong uVar18;
  long lVar19;
  long *local_38;
  
  puVar4 = PTR_DAT_04379558;
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379558), iVar9 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  puVar6 = PTR_DAT_04379568;
  puVar5 = PTR_DAT_04379560;
  *(undefined8 *)PTR_DAT_04379568 = *(undefined8 *)PTR_DAT_04379560;
  FUN_01148c68(&local_38);
  uVar8 = FUN_011171a4(local_38);
  FUN_00db0abc("end_money",uVar8);
  if (local_38 == (long *)0x0) {
LAB_00dabe40:
    bVar7 = *puVar4;
  }
  else {
    lVar19 = local_38[0xb];
    piVar1 = (int *)(lVar19 + 0xc);
    do {
      iVar9 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar9 + -1 != 0) goto LAB_00dabe40;
    *(undefined8 *)(lVar19 + 0x18) = 0;
    (**(code **)(*local_38 + 0x20))();
    bVar7 = *puVar4;
  }
  if (((bVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379558), iVar9 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  *(undefined8 *)puVar6 = *(undefined8 *)puVar5;
  FUN_01148a24(&local_38);
  uVar18 = FUN_0112bca4(local_38);
  bVar7 = FUN_0112bcac(local_38);
  FUN_00db0abc("end_time",(uVar18 & 0xffff) * 0x3c + (ulong)bVar7);
  if (local_38 == (long *)0x0) {
LAB_00dabea8:
    bVar7 = *puVar4;
  }
  else {
    lVar19 = local_38[0xb];
    piVar1 = (int *)(lVar19 + 0xc);
    do {
      iVar9 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar9 + -1 != 0) goto LAB_00dabea8;
    *(undefined8 *)(lVar19 + 0x18) = 0;
    (**(code **)(*local_38 + 0x20))();
    bVar7 = *puVar4;
  }
  if (((bVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379558), iVar9 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  *(undefined8 *)puVar6 = *(undefined8 *)puVar5;
  FUN_01148e38(&local_38);
  iVar9 = FUN_010da868(local_38,0x6ae);
  iVar10 = FUN_010da868(local_38,0x6af);
  iVar11 = FUN_010da868(local_38,0x6b0);
  iVar12 = FUN_010da868(local_38,0x6b1);
  iVar13 = FUN_010da868(local_38,0x6d2);
  iVar14 = FUN_010da868(local_38,0x6d3);
  iVar15 = FUN_010da868(local_38,0x6d4);
  iVar16 = FUN_010da868(local_38,0x6d5);
  iVar17 = FUN_010da868(local_38,0x6d6);
  FUN_00db0abc("end_ball",
               iVar10 + iVar9 + iVar11 + iVar12 + iVar13 + iVar14 + iVar15 + iVar16 + iVar17);
  if (local_38 != (long *)0x0) {
    lVar19 = local_38[0xb];
    piVar1 = (int *)(lVar19 + 0xc);
    do {
      iVar9 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar19 + 0x18) = 0;
      (**(code **)(*local_38 + 0x20))();
      bVar7 = *puVar4;
      goto joined_r0x00dabf84;
    }
  }
  bVar7 = *puVar4;
joined_r0x00dabf84:
  if (((bVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379558), iVar9 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  *(undefined8 *)puVar6 = *(undefined8 *)puVar5;
  FUN_01148f20(&local_38);
  uVar8 = FUN_0112eb4c(local_38);
  FUN_00db0abc("dex_faund",uVar8);
  uVar8 = FUN_01133924(local_38);
  FUN_00db0abc("dex_capture",uVar8);
  uVar8 = FUN_0112ec50(local_38);
  FUN_00db0abc("dex_complete",uVar8);
  if (local_38 != (long *)0x0) {
    lVar19 = local_38[0xb];
    piVar1 = (int *)(lVar19 + 0xc);
    do {
      iVar9 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar19 + 0x18) = 0;
      (**(code **)(*local_38 + 0x20))();
    }
  }
  return;
}


