/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01290e70; name: FUN_01290e70
 */


undefined8 FUN_01290e70(undefined8 *param_1,int param_2,uint param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  uint uVar11;
  long *plVar12;
  uint uVar13;
  
  puVar6 = PTR_DAT_04379568;
  puVar5 = PTR_DAT_04379560;
  puVar4 = PTR_DAT_04379558;
  if (param_2 == 0) {
    if (((*PTR_DAT_04379558 & 1) == 0) &&
       (param_1 = (undefined8 *)__cxa_guard_acquire(PTR_DAT_04379558), (int)param_1 != 0)) {
      FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
      param_1 = (undefined8 *)__cxa_guard_release(PTR_DAT_04379558);
    }
    lVar10 = *(long *)puVar5;
    *(long *)puVar6 = lVar10;
    plVar12 = *(long **)(lVar10 + 0x280);
    if (plVar12 != (long *)0x0) {
      lVar10 = plVar12[0xb];
      param_1 = *(undefined8 **)(lVar10 + 0x18);
      if (param_1 == (undefined8 *)0x0) goto LAB_0129118c;
      if (*(long *)(lVar10 + 0x10) == 0) {
        param_1 = (undefined8 *)(**(code **)*param_1)();
        *(undefined8 **)(lVar10 + 0x10) = param_1;
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
    }
    uVar7 = FUN_010dac08(param_1,0);
    if (uVar7 <= param_3) {
      uVar13 = 0;
      uVar11 = 0;
    }
    else {
      uVar13 = *(uint *)((long)plVar12 + (ulong)param_3 * 4 + 0x68);
      uVar11 = uVar13 >> 0x10;
    }
    if (plVar12 != (long *)0x0) {
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
    }
    if (uVar7 <= param_3) {
      return 0;
    }
  }
  else {
    if (((*PTR_DAT_04379558 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_04379558), iVar8 != 0)) {
      FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379558);
    }
    lVar10 = *(long *)puVar5;
    *(long *)puVar6 = lVar10;
    plVar12 = *(long **)(lVar10 + 0x238);
    if (plVar12 != (long *)0x0) {
      lVar10 = plVar12[0xb];
      if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_0129118c;
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
    }
    uVar13 = *(uint *)((long)plVar12 + (ulong)(param_3 + (int)plVar12[0xa6] * 0x1e) * 4 + 0x68);
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
    uVar11 = uVar13 >> 0x10;
    if (iVar8 == 1) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*plVar12 + 0x20))(plVar12);
    }
  }
  if (((uVar13 & 0xffff) != 0) && (uVar11 != 0)) {
    if (((*puVar4 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379558), iVar8 != 0)) {
      FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379558);
    }
    lVar10 = *(long *)puVar5;
    *(long *)puVar6 = lVar10;
    plVar12 = *(long **)(lVar10 + 0x260);
    if (plVar12 != (long *)0x0) {
      lVar10 = plVar12[0xb];
      if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) {
LAB_0129118c:
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
    }
    uVar7 = *(uint *)((long)plVar12 + ((ulong)(uVar13 >> 3) & 0x1ffc) + 0x1a8);
    if (plVar12 != (long *)0x0) {
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
    }
    if ((uVar7 & 1 << (ulong)(uVar13 & 0x1f)) != 0) {
      return 1;
    }
  }
  return 0;
}


