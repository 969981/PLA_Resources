/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0278ed7c; name: FUN_0278ed7c
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_0278ed7c(char param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  byte bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  undefined8 local_a18;
  long lStack_a10;
  undefined4 local_a08;
  char local_a00 [124];
  char local_984 [124];
  char local_908 [124];
  char local_88c [124];
  char local_810;
  char local_794;
  char local_718;
  char local_69c;
  char local_620;
  char local_5a4;
  char local_528;
  char local_4ac;
  char local_430;
  char local_3b4;
  char local_338;
  char local_2bc;
  char local_240;
  char local_1c4;
  char local_148;
  char local_cc;
  
  puVar5 = PTR_DAT_04379558;
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379558), iVar8 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  puVar7 = PTR_DAT_04379568;
  puVar6 = PTR_DAT_04379560;
  lVar10 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar10;
  plVar11 = *(long **)(lVar10 + 0x2a8);
  if (plVar11 == (long *)0x0) {
    return 0;
  }
  lVar10 = plVar11[0xb];
  if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) {
LAB_0278f1b0:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  if (*(long *)(lVar10 + 0x10) == 0) {
    uVar9 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
    *(undefined8 *)(lVar10 + 0x10) = uVar9;
  }
  piVar1 = (int *)(lVar10 + 0xc);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = *piVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379558), iVar8 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar10 = *(long *)puVar6;
  *(long *)puVar7 = lVar10;
  plVar12 = *(long **)(lVar10 + 0x220);
  if (plVar12 == (long *)0x0) {
    uVar9 = 0;
    goto LAB_0278efc4;
  }
  lVar10 = plVar12[0xb];
  if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_0278f1b0;
  if (*(long *)(lVar10 + 0x10) == 0) {
    uVar9 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
    *(undefined8 *)(lVar10 + 0x10) = uVar9;
  }
  piVar1 = (int *)(lVar10 + 0xc);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = *piVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  bVar4 = param_1 - 1;
  if (bVar4 < 5) {
    FUN_0110c3e4(local_a00,plVar11 + 0x22b5);
    lVar10 = (ulong)bVar4 * 0x1f0;
    if (((local_a00[lVar10] == '\0' || local_984[lVar10] == '\0') || local_908[lVar10] == '\0') ||
        local_88c[lVar10] == '\0') {
      local_a08 = (int)plVar11[0x2558];
      lVar10 = (ulong)bVar4 * 4;
      local_a18 = plVar11[0x2556];
      lStack_a10 = plVar11[0x2557];
      iVar8 = (uint)*(ushort *)(local_a00 + lVar10 + -0x16) +
              (uint)*(ushort *)(local_a00 + lVar10 + -0x18) * 0x3c;
      if ((iVar8 != 0) &&
         ((uint)*(byte *)((long)plVar12 + 0x11a) + (uint)*(ushort *)(plVar12 + 0x23) * 0x3c <
          iVar8 + 0x78U)) goto LAB_0278ef04;
      uVar9 = 1;
    }
    else {
LAB_0278ef04:
      uVar9 = 0;
    }
    local_cc = '\0';
    local_148 = '\0';
    local_1c4 = '\0';
    local_240 = '\0';
    local_2bc = '\0';
    local_338 = '\0';
    local_3b4 = '\0';
    local_430 = '\0';
    local_4ac = '\0';
    local_528 = '\0';
    local_5a4 = '\0';
    local_620 = '\0';
    local_69c = '\0';
    local_718 = '\0';
    local_794 = '\0';
    local_810 = '\0';
    local_88c[0] = '\0';
    local_908[0] = '\0';
    local_984[0] = '\0';
    if (local_a00[0] != '\0') {
      local_a00[0] = '\0';
    }
  }
  else {
    uVar9 = 0;
  }
  lVar10 = plVar12[0xb];
  piVar1 = (int *)(lVar10 + 0xc);
  do {
    iVar8 = *piVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = iVar8 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar8 + -1 == 0) {
    *(undefined8 *)(lVar10 + 0x18) = 0;
    (**(code **)(*plVar12 + 0x20))(plVar12);
  }
LAB_0278efc4:
  lVar10 = plVar11[0xb];
  piVar1 = (int *)(lVar10 + 0xc);
  do {
    iVar8 = *piVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = iVar8 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar8 + -1 == 0) {
    *(undefined8 *)(lVar10 + 0x18) = 0;
    (**(code **)(*plVar11 + 0x20))(plVar11);
  }
  return uVar9;
}


