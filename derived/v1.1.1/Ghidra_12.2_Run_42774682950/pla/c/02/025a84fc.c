/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 025a84fc; name: FUN_025a84fc
 */


undefined4 FUN_025a84fc(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  int iVar11;
  long *plVar12;
  undefined4 uVar13;
  undefined4 extraout_s0;
  
  puVar7 = PTR_DAT_0437a668;
  puVar6 = PTR_DAT_0437a660;
  puVar5 = PTR_DAT_043794d8;
  puVar4 = PTR_DAT_043794d0;
  lVar10 = *(long *)(param_1 + 0x70);
  uVar13 = 0;
  if ((lVar10 != 0) && (*(int *)(lVar10 + 0xc) != 0)) {
    piVar1 = (int *)(lVar10 + 0xc);
    iVar11 = *(int *)(lVar10 + 0xc);
    do {
      plVar12 = *(long **)(lVar10 + 0x10);
      if (((*puVar7 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(uVar13,puVar7), uVar13 = extraout_s0, iVar8 != 0)) {
        if (((*puVar4 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar4), iVar8 != 0)) {
          uVar9 = FUN_0087f8f0();
          *(undefined8 *)puVar5 = uVar9;
          __cxa_guard_release(puVar4);
        }
        *(undefined **)puVar6 = puVar5;
        uVar13 = __cxa_guard_release(puVar7);
      }
      while( true ) {
        if (plVar12 == (long *)0x0) {
          return 0;
        }
        if (plVar12 == (long *)puVar6) break;
        plVar12 = (long *)*plVar12;
      }
      iVar8 = *piVar1;
      if (iVar8 == iVar11) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar11 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar10 = *(long *)(lVar10 + 0x18);
          if (lVar10 == 0) {
            return 0;
          }
          plVar12 = (long *)(lVar10 + -0x50);
          uVar13 = FUN_01e431d0(0,plVar12);
          lVar10 = *(long *)(lVar10 + 8);
          piVar1 = (int *)(lVar10 + 0xc);
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
            *(undefined8 *)(lVar10 + 0x18) = 0;
            (**(code **)(*plVar12 + 0x20))(plVar12);
          }
          return uVar13;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar11 = iVar8;
    } while (iVar8 != 0);
  }
  return 0;
}


