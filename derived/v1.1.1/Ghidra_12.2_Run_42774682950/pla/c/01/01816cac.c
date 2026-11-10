/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01816cac; name: FUN_01816cac
 */


void FUN_01816cac(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  byte *pbVar8;
  undefined *puVar9;
  int iVar10;
  long *plVar11;
  long lVar12;
  
  puVar4 = PTR_DAT_043794c8;
  lVar7 = *(long *)(param_1 + 0x1a8);
  piVar1 = (int *)(lVar7 + 0xc);
  pbVar8 = PTR_DAT_043794b0;
  puVar9 = PTR_DAT_043794b8;
  iVar10 = *(int *)(lVar7 + 0xc);
  do {
    while( true ) {
      plVar11 = *(long **)(lVar7 + 0x10);
      if (((*pbVar8 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_043794b0), pbVar8 = PTR_DAT_043794b0,
         puVar9 = PTR_DAT_043794b8, iVar5 != 0)) {
        if (((*PTR_DAT_043794c0 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_043794c0), iVar5 != 0)) {
          if (((*PTR_DAT_043794d0 & 1) == 0) &&
             (iVar5 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar5 != 0)) {
            uVar6 = FUN_0087f8f0();
            *(undefined8 *)PTR_DAT_043794d8 = uVar6;
            __cxa_guard_release(PTR_DAT_043794d0);
          }
          *(undefined **)puVar4 = PTR_DAT_043794d8;
          __cxa_guard_release(PTR_DAT_043794c0);
        }
        puVar9 = PTR_DAT_043794b8;
        *(undefined **)PTR_DAT_043794b8 = puVar4;
        pbVar8 = PTR_DAT_043794b0;
        __cxa_guard_release(PTR_DAT_043794b0);
      }
      for (; plVar11 != (long *)puVar9; plVar11 = (long *)*plVar11) {
      }
      iVar5 = *piVar1;
      if (iVar5 == iVar10) break;
      ClearExclusiveLocal();
      iVar10 = iVar5;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = iVar10 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
    iVar10 = iVar5;
  } while (cVar2 != '\0');
  lVar7 = *(long *)(lVar7 + 0x18);
  plVar11 = (long *)0x0;
  if (lVar7 != 0) {
    plVar11 = (long *)(lVar7 + -0x50);
  }
  lVar12 = plVar11[0x18];
  *(long *)(param_1 + 0x268) = plVar11[0x19];
  *(long *)(param_1 + 0x260) = lVar12;
  if (lVar7 != 0) {
    lVar7 = plVar11[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      iVar10 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar7 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x01816d8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar11 + 0x20))(plVar11);
      return;
    }
  }
  return;
}


