/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0121fda4; name: FUN_0121fda4
 */


void FUN_0121fda4(long param_1,undefined8 param_2)

{
  int *piVar1;
  long *plVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  uint uVar15;
  long lVar16;
  undefined1 uVar17;
  long *plVar18;
  long *local_68;
  long *local_58;
  
  iVar9 = FUN_00d5294c();
  uVar11 = FUN_00d4bf2c(param_1,iVar9);
  puVar6 = PTR_DAT_04379558;
  uVar11 = uVar11 & 0xffffffff;
  if (((*PTR_DAT_04379558 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_04379558), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  puVar8 = PTR_DAT_04379568;
  puVar7 = PTR_DAT_04379560;
  lVar16 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar16;
  plVar18 = *(long **)(lVar16 + 0x248);
  if (plVar18 == (long *)0x0) {
    uVar17 = DAT_000004a9;
  }
  else {
    lVar16 = plVar18[0xb];
    if (*(undefined8 **)(lVar16 + 0x18) == (undefined8 *)0x0) goto LAB_012201a4;
    if (*(long *)(lVar16 + 0x10) == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar16 + 0x18))();
      *(undefined8 *)(lVar16 + 0x10) = uVar12;
    }
    piVar1 = (int *)(lVar16 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    lVar16 = plVar18[0xb];
    piVar1 = (int *)(lVar16 + 0xc);
    uVar17 = *(undefined1 *)((long)plVar18 + 0x4a9);
    do {
      iVar10 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar16 + 0x18) = 0;
      (**(code **)(*plVar18 + 0x20))(plVar18);
    }
  }
  uVar12 = FUN_0121fbdc(param_1,iVar9,uVar17,uVar11);
  FUN_02c5d40c(uVar12,param_2);
  FUN_0121af58(param_1,uVar12);
  if (iVar9 != 0) {
    lVar16 = *(long *)(*(long *)(*(long *)(param_1 + (long)iVar9 * 0x60 + 0x638) + 0xa8) +
                      uVar11 * 0x10);
    bVar3 = *(byte *)(*(long *)(param_1 + 0x1658) + 0x16);
    uVar15 = (uint)bVar3;
    if (bVar3 != 0) {
      lVar13 = FUN_0121fbdc(param_1,iVar9,uVar17,uVar11);
      if ((lVar13 == 0) ||
         (uVar14 = FUN_01223198(*(undefined8 *)(param_1 + 0x1658),lVar13,1), (uVar14 & 1) == 0)) {
        uVar15 = 1;
      }
      else {
        uVar15 = 0;
      }
    }
    goto LAB_0121fec4;
  }
  if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379558), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar16 = *(long *)puVar7;
  *(long *)puVar8 = lVar16;
  plVar18 = *(long **)(lVar16 + 0x240);
  if (plVar18 != (long *)0x0) {
    lVar16 = plVar18[0xb];
    if (*(undefined8 **)(lVar16 + 0x18) == (undefined8 *)0x0) {
LAB_012201a4:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar16 + 0x10) == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar16 + 0x18))();
      *(undefined8 *)(lVar16 + 0x10) = uVar12;
    }
    piVar1 = (int *)(lVar16 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  local_68 = *(long **)(param_1 + 0x1660);
  if (local_68 != (long *)0x0) {
    plVar2 = local_68 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  FUN_010e2158(plVar18,&local_68,uVar17,uVar11);
  if (local_68 != (long *)0x0) {
    plVar2 = local_68 + 10;
    do {
      iVar10 = (int)*plVar2 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = iVar10;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar10 == 0) {
      (**(code **)(*local_68 + 0x10))();
    }
  }
  if (plVar18 != (long *)0x0) {
    lVar16 = plVar18[0xb];
    piVar1 = (int *)(lVar16 + 0xc);
    do {
      iVar10 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar16 + 0x18) = 0;
      (**(code **)(*plVar18 + 0x20))(plVar18);
    }
  }
  lVar16 = *(long *)(*(long *)(*(long *)(param_1 + 0x638) + 0xa8) + uVar11 * 0x10);
  bVar3 = *(byte *)(*(long *)(param_1 + 0x1658) + 0x16);
  uVar15 = (uint)bVar3;
  if (bVar3 == 0) goto LAB_0121fec4;
  plVar18 = *(long **)(param_1 + 0x1660);
  local_58 = plVar18;
  if (plVar18 == (long *)0x0) {
    FUN_0121da04(&local_58,uVar17,uVar11);
    lVar13 = *(long *)(param_1 + 0x1660);
joined_r0x0122019c:
    if (lVar13 != 0) goto LAB_01220054;
  }
  else {
    plVar2 = plVar18 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    FUN_0121da04(&local_58,uVar17,uVar11);
    if (plVar18 != (long *)0x0) {
      plVar2 = plVar18 + 10;
      do {
        iVar10 = (int)*plVar2 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *(int *)plVar2 = iVar10;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar10 == 0) {
        (**(code **)(*plVar18 + 0x10))(plVar18);
        lVar13 = *(long *)(param_1 + 0x1660);
        goto joined_r0x0122019c;
      }
    }
    lVar13 = *(long *)(param_1 + 0x1660);
    if (lVar13 != 0) {
LAB_01220054:
      uVar14 = FUN_01223198(*(undefined8 *)(param_1 + 0x1658),lVar13,1);
      if ((uVar14 & 1) != 0) {
        uVar15 = 0;
        goto LAB_0121fec4;
      }
    }
  }
  uVar15 = 1;
LAB_0121fec4:
  *(uint *)(lVar16 + 0x48) = uVar15;
  FUN_00d53960(param_1,iVar9,uVar11,
               *(undefined4 *)
                (*(long *)(*(long *)(*(long *)(param_1 + (long)iVar9 * 0x60 + 0x638) + 0xa8) +
                          uVar11 * 0x10) + 0x48));
  return;
}


