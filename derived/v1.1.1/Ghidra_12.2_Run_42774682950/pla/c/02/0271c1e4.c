/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0271c1e4; name: FUN_0271c1e4
 */


void FUN_0271c1e4(long *param_1,long *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  long *plVar14;
  
  puVar8 = PTR_DAT_04379e90;
  puVar7 = PTR_DAT_04379e88;
  puVar6 = PTR_DAT_043795e0;
  puVar5 = PTR_DAT_043794d8;
  puVar4 = PTR_DAT_043794d0;
  lVar11 = *param_2;
  if ((lVar11 != 0) && (*(int *)(lVar11 + 0xc) != 0)) {
    piVar1 = (int *)(lVar11 + 0xc);
    iVar13 = *(int *)(lVar11 + 0xc);
    do {
      plVar14 = *(long **)(lVar11 + 0x10);
      if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar7), iVar9 != 0)) {
        if (((*PTR_DAT_043795d8 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_043795d8), iVar9 != 0)) {
          if (((*puVar4 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar4), iVar9 != 0)) {
            uVar10 = FUN_0087f8f0();
            *(undefined8 *)puVar5 = uVar10;
            __cxa_guard_release(puVar4);
          }
          *(undefined **)puVar6 = puVar5;
          __cxa_guard_release(PTR_DAT_043795d8);
        }
        *(undefined **)puVar8 = puVar6;
        __cxa_guard_release(puVar7);
      }
      while( true ) {
        if (plVar14 == (long *)0x0) goto LAB_0271c208;
        if (plVar14 == (long *)puVar8) break;
        plVar14 = (long *)*plVar14;
      }
      iVar9 = *piVar1;
      if (iVar9 == iVar13) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar13 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar12 = *(long *)(lVar11 + 0x18);
          lVar11 = 0;
          if (lVar12 != 0) {
            lVar11 = lVar12 + -0x50;
          }
          *param_1 = lVar11;
          if (lVar12 != 0) {
            return;
          }
          goto LAB_0271c20c;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar13 = iVar9;
    } while (iVar9 != 0);
  }
LAB_0271c208:
  *param_1 = 0;
LAB_0271c20c:
  *param_1 = 0;
  return;
}


