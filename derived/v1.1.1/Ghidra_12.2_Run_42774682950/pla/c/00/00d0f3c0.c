/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d0f3c0; name: FUN_00d0f3c0
 */


undefined8 FUN_00d0f3c0(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  int iVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  long *plVar15;
  
  puVar9 = PTR_DAT_0437a130;
  puVar8 = PTR_DAT_0437a128;
  puVar7 = PTR_DAT_043795e0;
  puVar6 = PTR_DAT_043795d8;
  puVar5 = PTR_DAT_043794d8;
  puVar4 = PTR_DAT_043794d0;
  lVar14 = *(long *)(param_1 + 0xa0);
  if ((lVar14 != 0) && (*(int *)(lVar14 + 0xc) != 0)) {
    piVar1 = (int *)(lVar14 + 0xc);
    iVar11 = *(int *)(lVar14 + 0xc);
    do {
      plVar15 = *(long **)(lVar14 + 0x10);
      if (((*puVar8 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar8), iVar10 != 0)) {
        if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar6), iVar10 != 0)) {
          if (((*puVar4 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar4), iVar10 != 0)) {
            uVar13 = FUN_0087f8f0();
            *(undefined8 *)puVar5 = uVar13;
            __cxa_guard_release(puVar4);
          }
          *(undefined **)puVar7 = puVar5;
          __cxa_guard_release(puVar6);
        }
        *(undefined **)puVar9 = puVar7;
        __cxa_guard_release(puVar8);
      }
      while( true ) {
        if (plVar15 == (long *)0x0) {
          return 1;
        }
        if (plVar15 == (long *)puVar9) break;
        plVar15 = (long *)*plVar15;
      }
      iVar10 = *piVar1;
      if (iVar10 == iVar11) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar11 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar14 = *(long *)(lVar14 + 0x18);
          if (lVar14 == 0) {
            return 1;
          }
          plVar15 = (long *)(lVar14 + -0x50);
          if (((*PTR_DAT_0437a0d0 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar11 != 0)) {
            FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_0437a0d0);
          }
          uVar12 = FUN_028a0114(plVar15,PTR_DAT_0437a0d8);
          lVar14 = *(long *)(lVar14 + 8);
          piVar1 = (int *)(lVar14 + 0xc);
          do {
            iVar11 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar11 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar11 + -1 == 0) {
            *(undefined8 *)(lVar14 + 0x18) = 0;
            (**(code **)(*plVar15 + 0x20))(plVar15);
          }
          if ((uVar12 & 1) == 0) {
            return 0;
          }
          return 1;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar11 = iVar10;
    } while (iVar10 != 0);
  }
  return 1;
}


