/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b70fc8; name: FUN_01b70fc8
 */


void FUN_01b70fc8(long param_1)

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
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  long *plVar15;
  long *local_68;
  
  puVar9 = PTR_DAT_0437a880;
  puVar8 = PTR_DAT_0437a878;
  puVar7 = PTR_DAT_043795e0;
  puVar6 = PTR_DAT_043795d8;
  puVar5 = PTR_DAT_043794d8;
  puVar4 = PTR_DAT_043794d0;
  lVar12 = *(long *)(param_1 + 0x390);
  if ((lVar12 != 0) && (*(int *)(lVar12 + 0xc) != 0)) {
    piVar1 = (int *)(lVar12 + 0xc);
    iVar14 = *(int *)(lVar12 + 0xc);
    do {
      plVar15 = *(long **)(lVar12 + 0x10);
      if (((*puVar8 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar8), iVar10 != 0)) {
        if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar6), iVar10 != 0)) {
          if (((*puVar4 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar4), iVar10 != 0)) {
            uVar11 = FUN_0087f8f0();
            *(undefined8 *)puVar5 = uVar11;
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
          return;
        }
        if (plVar15 == (long *)puVar9) break;
        plVar15 = (long *)*plVar15;
      }
      iVar10 = *piVar1;
      if (iVar10 == iVar14) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar14 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar12 = *(long *)(lVar12 + 0x18);
          if (lVar12 == 0) {
            return;
          }
          plVar15 = (long *)(lVar12 + -0x50);
          local_68 = (long *)0x0;
          FUN_00d7e99c(plVar15,&local_68,1);
          if (local_68 != (long *)0x0) {
            lVar13 = local_68[0xb];
            piVar1 = (int *)(lVar13 + 0xc);
            do {
              iVar14 = *piVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar14 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar14 + -1 == 0) {
              *(undefined8 *)(lVar13 + 0x18) = 0;
              (**(code **)(*local_68 + 0x20))();
            }
          }
          lVar12 = *(long *)(lVar12 + 8);
          piVar1 = (int *)(lVar12 + 0xc);
          do {
            iVar14 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar14 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar14 + -1 == 0) {
            *(undefined8 *)(lVar12 + 0x18) = 0;
            (**(code **)(*plVar15 + 0x20))(plVar15);
            return;
          }
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar14 = iVar10;
    } while (iVar10 != 0);
  }
  return;
}


