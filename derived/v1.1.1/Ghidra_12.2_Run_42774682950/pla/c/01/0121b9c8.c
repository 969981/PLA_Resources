/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0121b9c8; name: FUN_0121b9c8
 */


void FUN_0121b9c8(long param_1)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  uint uVar9;
  undefined8 uVar10;
  long lVar11;
  code *pcVar12;
  long *plVar13;
  long *plVar14;
  undefined8 uVar15;
  long *plVar16;
  
  iVar8 = FUN_00d5294c();
  uVar9 = FUN_00d4bf2c(param_1,iVar8);
  puVar5 = PTR_DAT_04379558;
  if (iVar8 == 0) {
    if (((*PTR_DAT_04379558 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_04379558), iVar8 != 0)) {
      FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379558);
    }
    puVar7 = PTR_DAT_04379568;
    puVar6 = PTR_DAT_04379560;
    lVar11 = *(long *)PTR_DAT_04379560;
    *(long *)PTR_DAT_04379568 = lVar11;
    plVar13 = *(long **)(lVar11 + 0x248);
    if (plVar13 != (long *)0x0) {
      lVar11 = plVar13[0xb];
      if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) goto LAB_0121bd78;
      if (*(long *)(lVar11 + 0x10) == 0) {
        uVar10 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
        *(undefined8 *)(lVar11 + 0x10) = uVar10;
      }
      piVar1 = (int *)(lVar11 + 0xc);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379558), iVar8 != 0)) {
      FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379558);
    }
    lVar11 = *(long *)puVar6;
    *(long *)puVar7 = lVar11;
    plVar14 = *(long **)(lVar11 + 0x240);
    if (plVar14 != (long *)0x0) {
      lVar11 = plVar14[0xb];
      if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) {
LAB_0121bd78:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar11 + 0x10) == 0) {
        uVar10 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
        *(undefined8 *)(lVar11 + 0x10) = uVar10;
      }
      piVar1 = (int *)(lVar11 + 0xc);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plVar16 = *(long **)(param_1 + 0x1660);
    if (plVar16 != (long *)0x0) {
      plVar2 = plVar16 + 10;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *(int *)plVar2 = (int)*plVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if ((uVar9 < 0x1e) && (*(byte *)((long)plVar13 + 0x4a9) < 0x20)) {
      (**(code **)(*plVar16 + 0x28))
                (plVar16,plVar14 + (ulong)*(byte *)((long)plVar13 + 0x4a9) * 0x546 +
                                   (ulong)uVar9 * 0x2d + 0xd);
    }
    if (plVar16 != (long *)0x0) {
      plVar2 = plVar16 + 10;
      do {
        iVar8 = (int)*plVar2 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *(int *)plVar2 = iVar8;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar8 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
      }
    }
    if (plVar14 != (long *)0x0) {
      lVar11 = plVar14[0xb];
      piVar1 = (int *)(lVar11 + 0xc);
      do {
        iVar8 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar8 + -1 == 0) {
        *(undefined8 *)(lVar11 + 0x18) = 0;
        (**(code **)(*plVar14 + 0x20))(plVar14);
      }
    }
    lVar11 = plVar13[0xb];
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 + -1 != 0) goto LAB_0121bb64;
    *(undefined8 *)(lVar11 + 0x18) = 0;
    pcVar12 = *(code **)(*plVar13 + 0x20);
  }
  else {
    if (((*PTR_DAT_04379678 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_04379678), iVar8 != 0)) {
      FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379678);
    }
    lVar11 = *(long *)PTR_DAT_04379680;
    *(long *)PTR_DAT_04379688 = lVar11;
    plVar14 = *(long **)(lVar11 + 0xd0);
    if (plVar14 != (long *)0x0) {
      plVar13 = plVar14 + 10;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar4) {
          *(int *)plVar13 = (int)*plVar13 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plVar13 = (long *)plVar14[0xb];
    if (plVar13 != (long *)0x0) {
      plVar16 = plVar13 + 10;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar4) {
          *(int *)plVar16 = (int)*plVar16 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plVar16 = plVar14 + 10;
    do {
      iVar8 = (int)*plVar16 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar4) {
        *(int *)plVar16 = iVar8;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar14 + 0x10))();
    }
    uVar15 = *(undefined8 *)(param_1 + 0x1660);
    uVar10 = (**(code **)(*plVar13 + 0x58))(plVar13,(ulong)uVar9);
    FUN_02c653d0(uVar15,uVar10);
    if (plVar13 == (long *)0x0) goto LAB_0121bb64;
    plVar14 = plVar13 + 10;
    do {
      iVar8 = (int)*plVar14 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar4) {
        *(int *)plVar14 = iVar8;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 != 0) goto LAB_0121bb64;
    pcVar12 = *(code **)(*plVar13 + 0x10);
  }
  (*pcVar12)(plVar13);
LAB_0121bb64:
  iVar8 = FUN_02c6849c(*(undefined8 *)(*(long *)(param_1 + 0x1660) + 0x98));
  if (iVar8 == 0) {
    FUN_0121b8e8(param_1);
    return;
  }
  return;
}


