/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 009af878; name: FUN_009af878
 */


void FUN_009af878(long *param_1,long *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  undefined1 local_58 [4];
  undefined4 local_54;
  
  plVar13 = (long *)*param_2;
  lVar14 = *param_1;
  puVar9 = (undefined8 *)(**(code **)plVar13[10])(plVar13 + 10);
  puVar6 = PTR_DAT_043794b8;
  puVar5 = PTR_DAT_043794b0;
  if (((*PTR_DAT_043794b0 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_043794b0), iVar8 != 0))
  {
    if (((*PTR_DAT_043794c0 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_043794c0), iVar8 != 0)) {
      if (((*PTR_DAT_043794d0 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar8 != 0)) {
        uVar10 = FUN_0087f8f0();
        *(undefined8 *)PTR_DAT_043794d8 = uVar10;
        __cxa_guard_release(PTR_DAT_043794d0);
      }
      *(undefined **)PTR_DAT_043794c8 = PTR_DAT_043794d8;
      __cxa_guard_release(PTR_DAT_043794c0);
    }
    *(undefined **)puVar6 = PTR_DAT_043794c8;
    __cxa_guard_release(PTR_DAT_043794b0);
  }
  if (puVar9 != (undefined8 *)0x0) {
LAB_009af8d4:
    if (puVar9 != (undefined8 *)puVar6) goto LAB_009afb04;
    lVar15 = plVar13[0xb];
    if (*(undefined8 **)(lVar15 + 0x18) != (undefined8 *)0x0) {
      if (*(long *)(lVar15 + 0x10) == 0) {
        uVar10 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
        *(undefined8 *)(lVar15 + 0x10) = uVar10;
      }
      piVar1 = (int *)(lVar15 + 0xc);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar15 = plVar13[0xb];
      if (*(undefined8 **)(lVar15 + 0x18) != (undefined8 *)0x0) {
        if (*(long *)(lVar15 + 0x10) == 0) {
          uVar10 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
          *(undefined8 *)(lVar15 + 0x10) = uVar10;
        }
        piVar1 = (int *)(lVar15 + 0xc);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        bVar3 = false;
        goto LAB_009af954;
      }
    }
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
LAB_009afaa4:
  plVar13 = (long *)0x0;
  bVar3 = true;
LAB_009af954:
  local_54 = (undefined4)param_1[1];
  plVar11 = (long *)FUN_00993d60(lVar14 + 0xd0,&local_54);
  plVar12 = (long *)*plVar11;
  *plVar11 = 0;
  if (plVar12 != (long *)0x0) {
    lVar15 = plVar12[0xb];
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar15 + 0x18) = 0;
      (**(code **)(*plVar12 + 0x20))();
      *plVar11 = (long)plVar13;
      goto joined_r0x009af998;
    }
  }
  *plVar11 = (long)plVar13;
joined_r0x009af998:
  if (!bVar3) {
    lVar15 = plVar13[0xb];
    piVar1 = (int *)(lVar15 + 0xc);
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
      *(undefined8 *)(lVar15 + 0x18) = 0;
      (**(code **)(*plVar13 + 0x20))(plVar13);
    }
  }
  lVar15 = *param_2;
  plVar13 = (long *)(*(code *)**(undefined8 **)(lVar15 + 0x50))((undefined8 *)(lVar15 + 0x50));
  if (((*puVar5 & 1) == 0) &&
     (iVar8 = __cxa_guard_acquire(PTR_DAT_043794b0), puVar5 = PTR_DAT_043794c8, iVar8 != 0)) {
    if (((*PTR_DAT_043794c0 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_043794c0), puVar7 = PTR_DAT_043794d8, iVar8 != 0)) {
      if (((*PTR_DAT_043794d0 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar8 != 0)) {
        uVar10 = FUN_0087f8f0();
        *(undefined8 *)puVar7 = uVar10;
        __cxa_guard_release(PTR_DAT_043794d0);
      }
      *(undefined **)puVar5 = puVar7;
      __cxa_guard_release(PTR_DAT_043794c0);
    }
    *(undefined **)puVar6 = puVar5;
    __cxa_guard_release(PTR_DAT_043794b0);
  }
  while( true ) {
    if (plVar13 == (long *)0x0) {
      return;
    }
    if (plVar13 == (long *)puVar6) break;
    plVar13 = (long *)*plVar13;
  }
  local_58[0] = 0;
  FUN_009ad21c(lVar15,*(undefined8 *)(lVar15 + 8),local_58);
  if (*(int *)(lVar14 + 0x55c) == 1) {
    FUN_009afbf4(lVar15,*(undefined8 *)(lVar15 + 8));
    return;
  }
  return;
LAB_009afb04:
  puVar9 = (undefined8 *)*puVar9;
  if (puVar9 == (undefined8 *)0x0) goto LAB_009afaa4;
  goto LAB_009af8d4;
}


