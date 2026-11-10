/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e1faec; name: FUN_01e1faec
 */


void FUN_01e1faec(long *param_1,long param_2)

{
  int *piVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  int iVar12;
  long *plVar13;
  
  puVar8 = PTR_DAT_04379f80;
  puVar7 = PTR_DAT_04379f78;
  puVar6 = PTR_DAT_043794d8;
  puVar5 = PTR_DAT_043794d0;
  lVar11 = *(long *)(param_2 + 0xa0);
  if (lVar11 == 0) {
    *param_1 = 0;
  }
  else {
    if (*(int *)(lVar11 + 0xc) != 0) {
      piVar1 = (int *)(lVar11 + 0xc);
      iVar12 = *(int *)(lVar11 + 0xc);
      do {
        plVar13 = *(long **)(lVar11 + 0x10);
        if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar7), iVar9 != 0)) {
          if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar5), iVar9 != 0)) {
            uVar10 = FUN_0087f8f0();
            *(undefined8 *)puVar6 = uVar10;
            __cxa_guard_release(puVar5);
          }
          *(undefined **)puVar8 = puVar6;
          __cxa_guard_release(puVar7);
        }
        while( true ) {
          if (plVar13 == (long *)0x0) goto LAB_01e1fbec;
          if (plVar13 == (long *)puVar8) break;
          plVar13 = (long *)*plVar13;
        }
        iVar9 = *piVar1;
        if (iVar9 == iVar12) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar12 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lVar2 = 0;
            if (*(long *)(lVar11 + 0x18) != 0) {
              lVar2 = *(long *)(lVar11 + 0x18) + -0x50;
            }
            *param_1 = lVar2;
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar12 = iVar9;
      } while (iVar9 != 0);
    }
LAB_01e1fbec:
    *param_1 = 0;
  }
  return;
}


