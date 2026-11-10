/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 018d6bd0; name: FUN_018d6bd0
 */


void FUN_018d6bd0(long *param_1,long *param_2)

{
  int *piVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  int iVar14;
  
  puVar9 = PTR_DAT_043795e0;
  puVar8 = PTR_DAT_043795d0;
  puVar7 = PTR_DAT_043795c8;
  puVar6 = PTR_DAT_043794d8;
  puVar5 = PTR_DAT_043794d0;
  lVar12 = *param_2;
  if (lVar12 == 0) {
    *param_1 = 0;
  }
  else {
    if (*(int *)(lVar12 + 0xc) != 0) {
      piVar1 = (int *)(lVar12 + 0xc);
      iVar14 = *(int *)(lVar12 + 0xc);
      do {
        plVar13 = *(long **)(lVar12 + 0x10);
        if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar7), iVar10 != 0)) {
          if (((*PTR_DAT_043795d8 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_043795d8), iVar10 != 0)) {
            if (((*puVar5 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar5), iVar10 != 0)) {
              uVar11 = FUN_0087f8f0();
              *(undefined8 *)puVar6 = uVar11;
              __cxa_guard_release(puVar5);
            }
            *(undefined **)puVar9 = puVar6;
            __cxa_guard_release(PTR_DAT_043795d8);
          }
          *(undefined **)puVar8 = puVar9;
          __cxa_guard_release(puVar7);
        }
        while( true ) {
          if (plVar13 == (long *)0x0) goto LAB_018d6c9c;
          if (plVar13 == (long *)puVar8) break;
          plVar13 = (long *)*plVar13;
        }
        iVar10 = *piVar1;
        if (iVar10 == iVar14) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar14 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lVar2 = 0;
            if (*(long *)(lVar12 + 0x18) != 0) {
              lVar2 = *(long *)(lVar12 + 0x18) + -0x50;
            }
            *param_1 = lVar2;
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar14 = iVar10;
      } while (iVar10 != 0);
    }
LAB_018d6c9c:
    *param_1 = 0;
  }
  return;
}


