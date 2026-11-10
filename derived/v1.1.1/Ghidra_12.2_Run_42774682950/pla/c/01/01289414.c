/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01289414; name: FUN_01289414
 */


void FUN_01289414(long param_1,ulong param_2,ulong param_3)

{
  int *piVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  
  puVar9 = PTR_DAT_04379568;
  puVar8 = PTR_DAT_04379560;
  puVar7 = PTR_DAT_04379558;
  if ((param_2 & 1) != 0) {
    if (((*PTR_DAT_04379558 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_04379558), iVar10 != 0)) {
      FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379558);
    }
    lVar13 = *(long *)puVar8;
    *(long *)puVar9 = lVar13;
    plVar14 = *(long **)(lVar13 + 0x280);
    if (plVar14 != (long *)0x0) {
      lVar13 = plVar14[0xb];
      if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) goto LAB_012896b0;
      if (*(long *)(lVar13 + 0x10) == 0) {
        uVar11 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
        *(undefined8 *)(lVar13 + 0x10) = uVar11;
      }
      piVar1 = (int *)(lVar13 + 0xc);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    *(undefined1 *)(param_1 + 0x1785) = 0;
    uVar12 = FUN_010dac08(plVar14,0);
    if ((int)uVar12 != 0) {
      uVar15 = 0;
      do {
        uVar12 = FUN_010dac08(uVar12,0);
        if ((uVar15 < (uVar12 & 0xffffffff)) &&
           (uVar2 = *(uint *)((long)plVar14 + uVar15 * 4 + 0x68),
           0xffff < uVar2 && (uVar2 & 0xffff) != 0)) {
          *(undefined1 *)(param_1 + 0x1785) = 1;
          break;
        }
        uVar15 = uVar15 + 1;
        uVar12 = FUN_010dac08(plVar14,0);
      } while (uVar15 < (uVar12 & 0xffffffff));
    }
    if (plVar14 != (long *)0x0) {
      lVar13 = plVar14[0xb];
      piVar1 = (int *)(lVar13 + 0xc);
      do {
        iVar10 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar10 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar10 + -1 == 0) {
        *(undefined8 *)(lVar13 + 0x18) = 0;
        (**(code **)(*plVar14 + 0x20))(plVar14);
      }
    }
  }
  if ((param_3 & 1) != 0) {
    if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379558), iVar10 != 0)) {
      FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379558);
    }
    lVar13 = *(long *)puVar8;
    *(long *)puVar9 = lVar13;
    plVar14 = *(long **)(lVar13 + 0x238);
    if (plVar14 != (long *)0x0) {
      lVar13 = plVar14[0xb];
      if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) {
LAB_012896b0:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar13 + 0x10) == 0) {
        uVar11 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
        *(undefined8 *)(lVar13 + 0x10) = uVar11;
      }
      piVar1 = (int *)(lVar13 + 0xc);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    lVar6 = plVar14[0xa6];
    lVar13 = 0;
    *(undefined1 *)(param_1 + 0x1786) = 0;
    do {
      lVar5 = lVar13 + (ulong)(uint)((int)lVar6 * 0x1e) * 4;
      if ((*(short *)((long)plVar14 + lVar5 + 0x68) != 0) &&
         (*(short *)((long)plVar14 + lVar5 + 0x6a) != 0)) {
        *(undefined1 *)(param_1 + 0x1786) = 1;
        break;
      }
      lVar13 = lVar13 + 4;
    } while (lVar13 != 0x78);
    lVar13 = plVar14[0xb];
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      iVar10 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar13 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x01289634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar14 + 0x20))(plVar14);
      return;
    }
  }
  return;
}


