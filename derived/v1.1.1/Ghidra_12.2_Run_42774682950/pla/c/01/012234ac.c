/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 012234ac; name: FUN_012234ac
 */


void FUN_012234ac(long param_1)

{
  int *piVar1;
  long *plVar2;
  undefined1 uVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  ulong uVar15;
  undefined4 uVar16;
  long *local_48;
  
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379558), iVar7 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar11 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar11;
  plVar14 = *(long **)(lVar11 + 0x248);
  if (plVar14 != (long *)0x0) {
    lVar11 = plVar14[0xb];
    if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar11 + 0x10) == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
      *(undefined8 *)(lVar11 + 0x10) = uVar8;
    }
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = *piVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  uVar3 = *(undefined1 *)((long)plVar14 + 0x4a9);
  uVar15 = 0;
  do {
    lVar11 = *(long *)(*(long *)(*(long *)(param_1 + 0x638) + 0xa8) + uVar15 * 0x10);
    bVar4 = *(byte *)(*(long *)(param_1 + 0x1658) + 0x16);
    uVar10 = (uint)bVar4;
    if (bVar4 != 0) {
      plVar13 = *(long **)(param_1 + 0x1660);
      local_48 = plVar13;
      if (plVar13 == (long *)0x0) {
        FUN_0121da04(&local_48,uVar3,uVar15 & 0xffffffff);
        lVar9 = *(long *)(param_1 + 0x1660);
      }
      else {
        plVar2 = plVar13 + 10;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar6) {
            *(int *)plVar2 = (int)*plVar2 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        FUN_0121da04(&local_48,uVar3,uVar15 & 0xffffffff);
        if (plVar13 != (long *)0x0) {
          plVar2 = plVar13 + 10;
          do {
            iVar7 = (int)*plVar2 + -1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar6) {
              *(int *)plVar2 = iVar7;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar7 == 0) {
            (**(code **)(*plVar13 + 0x10))(plVar13);
            lVar9 = *(long *)(param_1 + 0x1660);
            goto joined_r0x0122399c;
          }
        }
        lVar9 = *(long *)(param_1 + 0x1660);
      }
joined_r0x0122399c:
      if ((lVar9 == 0) ||
         (uVar12 = FUN_01223198(*(undefined8 *)(param_1 + 0x1658),lVar9,1), (uVar12 & 1) == 0)) {
        uVar10 = 1;
      }
      else {
        uVar10 = 0;
      }
    }
    *(uint *)(lVar11 + 0x48) = uVar10;
    FUN_00d53960(param_1,0,uVar15 & 0xffffffff,
                 *(undefined4 *)
                  (*(long *)(*(long *)(*(long *)(param_1 + 0x638) + 0xa8) + uVar15 * 0x10) + 0x48));
    uVar15 = uVar15 + 1;
  } while (uVar15 != 0x1e);
  if (*(int *)(param_1 + 0x167c) != 0) {
    if ((char)plVar14[0x95] == ' ') {
      iVar7 = FUN_010e630c();
      if (iVar7 == -0x1d) goto LAB_01223708;
    }
    else if ((char)plVar14[0x95] == '\0') goto LAB_01223708;
    lVar11 = 0;
    uVar15 = 0;
    do {
      FUN_012160fc(param_1,uVar15 & 0xffffffff);
      FUN_00d53960(param_1,1,uVar15 & 0xffffffff,
                   *(undefined4 *)
                    (*(long *)(*(long *)(*(long *)(param_1 + 0x698) + 0xa8) + lVar11) + 0x48));
      uVar12 = (ulong)*(byte *)(plVar14 + 0x95);
      uVar15 = uVar15 + 1;
      if (*(byte *)(plVar14 + 0x95) == 0x20) {
        iVar7 = FUN_010e630c();
        uVar12 = (ulong)(iVar7 + 0x1d);
      }
      lVar11 = lVar11 + 0x10;
    } while (uVar15 < uVar12);
    goto LAB_01223708;
  }
  lVar11 = **(long **)(*(long *)(param_1 + 0x698) + 0xa8);
  bVar4 = *(byte *)(*(long *)(param_1 + 0x1658) + 0x16);
  uVar10 = (uint)bVar4;
  if (bVar4 != 0) {
    lVar9 = FUN_0121fbdc(param_1,1,0,0);
    if ((lVar9 == 0) ||
       (uVar15 = FUN_01223198(*(undefined8 *)(param_1 + 0x1658),lVar9,1), (uVar15 & 1) == 0)) {
      uVar10 = 1;
    }
    else {
      uVar10 = 0;
    }
  }
  *(uint *)(lVar11 + 0x48) = uVar10;
  FUN_00d53960(param_1,1,0,*(undefined4 *)(**(long **)(*(long *)(param_1 + 0x698) + 0xa8) + 0x48));
  lVar11 = *(long *)(*(long *)(*(long *)(param_1 + 0x698) + 0xa8) + 0x10);
  if (*(char *)(*(long *)(param_1 + 0x1658) + 0x16) == '\0') {
LAB_012235e0:
    uVar16 = 0;
  }
  else {
    uVar16 = 1;
    lVar9 = FUN_0121fbdc(param_1,1,0,1);
    if (lVar9 != 0) {
      uVar16 = 1;
      uVar15 = FUN_01223198(*(undefined8 *)(param_1 + 0x1658),lVar9,1);
      if ((uVar15 & 1) != 0) goto LAB_012235e0;
    }
  }
  *(undefined4 *)(lVar11 + 0x48) = uVar16;
  FUN_00d53960(param_1,1,1,
               *(undefined4 *)
                (*(long *)(*(long *)(*(long *)(param_1 + 0x698) + 0xa8) + 0x10) + 0x48));
  lVar11 = *(long *)(*(long *)(*(long *)(param_1 + 0x698) + 0xa8) + 0x20);
  if (*(char *)(*(long *)(param_1 + 0x1658) + 0x16) == '\0') {
LAB_01223620:
    uVar16 = 0;
  }
  else {
    uVar16 = 1;
    lVar9 = FUN_0121fbdc(param_1,1,0,2);
    if (lVar9 != 0) {
      uVar16 = 1;
      uVar15 = FUN_01223198(*(undefined8 *)(param_1 + 0x1658),lVar9,1);
      if ((uVar15 & 1) != 0) goto LAB_01223620;
    }
  }
  *(undefined4 *)(lVar11 + 0x48) = uVar16;
  FUN_00d53960(param_1,1,2,
               *(undefined4 *)
                (*(long *)(*(long *)(*(long *)(param_1 + 0x698) + 0xa8) + 0x20) + 0x48));
  lVar11 = *(long *)(*(long *)(*(long *)(param_1 + 0x698) + 0xa8) + 0x30);
  if (*(char *)(*(long *)(param_1 + 0x1658) + 0x16) == '\0') {
LAB_01223660:
    uVar16 = 0;
  }
  else {
    uVar16 = 1;
    lVar9 = FUN_0121fbdc(param_1,1,0,3);
    if (lVar9 != 0) {
      uVar16 = 1;
      uVar15 = FUN_01223198(*(undefined8 *)(param_1 + 0x1658),lVar9,1);
      if ((uVar15 & 1) != 0) goto LAB_01223660;
    }
  }
  *(undefined4 *)(lVar11 + 0x48) = uVar16;
  FUN_00d53960(param_1,1,3,
               *(undefined4 *)
                (*(long *)(*(long *)(*(long *)(param_1 + 0x698) + 0xa8) + 0x30) + 0x48));
  lVar11 = *(long *)(*(long *)(*(long *)(param_1 + 0x698) + 0xa8) + 0x40);
  if (*(char *)(*(long *)(param_1 + 0x1658) + 0x16) == '\0') {
LAB_012236a0:
    uVar16 = 0;
  }
  else {
    uVar16 = 1;
    lVar9 = FUN_0121fbdc(param_1,1,0,4);
    if (lVar9 != 0) {
      uVar16 = 1;
      uVar15 = FUN_01223198(*(undefined8 *)(param_1 + 0x1658),lVar9,1);
      if ((uVar15 & 1) != 0) goto LAB_012236a0;
    }
  }
  *(undefined4 *)(lVar11 + 0x48) = uVar16;
  FUN_00d53960(param_1,1,4,
               *(undefined4 *)
                (*(long *)(*(long *)(*(long *)(param_1 + 0x698) + 0xa8) + 0x40) + 0x48));
  lVar11 = *(long *)(*(long *)(*(long *)(param_1 + 0x698) + 0xa8) + 0x50);
  if (*(char *)(*(long *)(param_1 + 0x1658) + 0x16) == '\0') {
LAB_012236e0:
    uVar16 = 0;
  }
  else {
    uVar16 = 1;
    lVar9 = FUN_0121fbdc(param_1,1,0,5);
    if (lVar9 != 0) {
      uVar16 = 1;
      uVar15 = FUN_01223198(*(undefined8 *)(param_1 + 0x1658),lVar9,1);
      if ((uVar15 & 1) != 0) goto LAB_012236e0;
    }
  }
  *(undefined4 *)(lVar11 + 0x48) = uVar16;
  FUN_00d53960(param_1,1,5,
               *(undefined4 *)
                (*(long *)(*(long *)(*(long *)(param_1 + 0x698) + 0xa8) + 0x50) + 0x48));
LAB_01223708:
  if (plVar14 != (long *)0x0) {
    lVar11 = plVar14[0xb];
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      iVar7 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar7 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar11 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x01223838. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar14 + 0x20))(plVar14);
      return;
    }
  }
  return;
}


