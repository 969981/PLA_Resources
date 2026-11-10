/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01915e78; name: FUN_01915e78
 */


void FUN_01915e78(long *param_1,uint param_2)

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
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  int iVar13;
  long *plVar14;
  undefined1 auStack_68 [8];
  
  puVar8 = PTR_DAT_043794d8;
  puVar7 = PTR_DAT_043794d0;
  puVar6 = PTR_DAT_043794c8;
  puVar5 = PTR_DAT_043794b8;
  puVar4 = PTR_DAT_043794b0;
  lVar12 = *param_1;
  if ((lVar12 != 0) && (*(int *)(lVar12 + 0xc) != 0)) {
    piVar1 = (int *)(lVar12 + 0xc);
    iVar13 = *(int *)(lVar12 + 0xc);
    do {
      plVar14 = *(long **)(lVar12 + 0x10);
      if (((*puVar4 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar4), iVar9 != 0)) {
        if (((*PTR_DAT_043794c0 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_043794c0), iVar9 != 0)) {
          if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar7), iVar9 != 0)) {
            uVar11 = FUN_0087f8f0();
            *(undefined8 *)puVar8 = uVar11;
            __cxa_guard_release(puVar7);
          }
          *(undefined **)puVar6 = puVar8;
          __cxa_guard_release(PTR_DAT_043794c0);
        }
        *(undefined **)puVar5 = puVar6;
        __cxa_guard_release(puVar4);
      }
      while( true ) {
        if (plVar14 == (long *)0x0) {
          return;
        }
        if (plVar14 == (long *)puVar5) break;
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
          lVar12 = *(long *)(lVar12 + 0x18);
          if (lVar12 == 0) {
            return;
          }
          lVar10 = FUN_009cd42c(lVar12 + 0xa0,auStack_68);
          if (lVar10 != 0) {
            FUN_019f79bc(lVar10,param_2 & 1);
          }
          lVar10 = *(long *)(lVar12 + 8);
          piVar1 = (int *)(lVar10 + 0xc);
          do {
            iVar13 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar13 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar13 + -1 == 0) {
            *(undefined8 *)(lVar10 + 0x18) = 0;
            (**(code **)(*(long *)(lVar12 + -0x50) + 0x20))((long *)(lVar12 + -0x50));
            return;
          }
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar13 = iVar9;
    } while (iVar9 != 0);
  }
  return;
}


