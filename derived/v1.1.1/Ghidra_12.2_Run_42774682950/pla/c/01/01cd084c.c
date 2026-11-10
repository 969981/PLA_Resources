/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01cd084c; name: FUN_01cd084c
 */


void FUN_01cd084c(undefined8 *param_1,char *param_2)

{
  int *piVar1;
  char cVar2;
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
  
  puVar8 = PTR_DAT_0437a258;
  puVar7 = PTR_DAT_0437a250;
  puVar6 = PTR_DAT_043795e0;
  puVar5 = PTR_DAT_043794d0;
  lVar11 = param_1[1];
  if (lVar11 != 0) {
    cVar2 = *param_2;
    if (*(int *)(lVar11 + 0xc) != 0) {
      piVar1 = (int *)(lVar11 + 0xc);
      iVar12 = *(int *)(lVar11 + 0xc);
      do {
        plVar13 = *(long **)(lVar11 + 0x10);
        if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar7), iVar9 != 0)) {
          if (((*PTR_DAT_043795d8 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_043795d8), iVar9 != 0)) {
            if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar5), iVar9 != 0)) {
              uVar10 = FUN_0087f8f0();
              *(undefined8 *)PTR_DAT_043794d8 = uVar10;
              __cxa_guard_release(puVar5);
            }
            *(undefined **)puVar6 = PTR_DAT_043794d8;
            __cxa_guard_release(PTR_DAT_043795d8);
          }
          *(undefined **)puVar8 = puVar6;
          __cxa_guard_release(puVar7);
        }
        while( true ) {
          if (plVar13 == (long *)0x0) {
            return;
          }
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
            lVar11 = *(long *)(lVar11 + 0x18);
            if (lVar11 == 0) {
              return;
            }
            plVar13 = (long *)(lVar11 + -0x50);
            FUN_018d6ef0(plVar13,*param_1,cVar2 == '\0',0x20);
            lVar11 = *(long *)(lVar11 + 8);
            piVar1 = (int *)(lVar11 + 0xc);
            do {
              iVar12 = *piVar1;
              cVar2 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar12 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar12 + -1 == 0) {
              *(undefined8 *)(lVar11 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x01cd0984. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(*plVar13 + 0x20))(plVar13);
              return;
            }
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar12 = iVar9;
      } while (iVar9 != 0);
    }
  }
  return;
}


