/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01bc9858; name: FUN_01bc9858
 */


void FUN_01bc9858(long *param_1)

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
  long lVar13;
  int iVar14;
  long *plVar15;
  long *local_68;
  
  puVar8 = PTR_DAT_043794d8;
  puVar7 = PTR_DAT_043794d0;
  puVar6 = PTR_DAT_043794c8;
  puVar5 = PTR_DAT_043794b8;
  puVar4 = PTR_DAT_043794b0;
  lVar11 = param_1[0x35];
  if ((lVar11 != 0) && (*(int *)(lVar11 + 0xc) != 0)) {
    piVar1 = (int *)(lVar11 + 0xc);
    iVar14 = *(int *)(lVar11 + 0xc);
    do {
      plVar15 = *(long **)(lVar11 + 0x10);
      if (((*puVar4 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar4), iVar9 != 0)) {
        if (((*PTR_DAT_043794c0 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_043794c0), iVar9 != 0)) {
          if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar7), iVar9 != 0)) {
            uVar10 = FUN_0087f8f0();
            *(undefined8 *)puVar8 = uVar10;
            __cxa_guard_release(puVar7);
          }
          *(undefined **)puVar6 = puVar8;
          __cxa_guard_release(PTR_DAT_043794c0);
        }
        *(undefined **)puVar5 = puVar6;
        __cxa_guard_release(puVar4);
      }
      while( true ) {
        if (plVar15 == (long *)0x0) {
          return;
        }
        if (plVar15 == (long *)puVar5) break;
        plVar15 = (long *)*plVar15;
      }
      iVar9 = *piVar1;
      if (iVar9 == iVar14) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar14 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar11 = *(long *)(lVar11 + 0x18);
          if (lVar11 == 0) {
            return;
          }
          if (*(long *)(lVar11 + 0x2c8) == 0) {
            local_68 = (long *)0x0;
          }
          else {
            FUN_00da9c7c(&local_68);
            if (local_68 != (long *)0x0) {
              lVar12 = local_68[0xb];
              piVar1 = (int *)(lVar12 + 0xc);
              lVar13 = local_68[0xd];
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
                (**(code **)(*local_68 + 0x20))();
              }
              if (lVar13 != 0) {
                local_68 = param_1;
                FUN_01bc9a54(lVar13,&local_68);
              }
            }
          }
          lVar12 = *(long *)(lVar11 + 8);
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
            (**(code **)(*(long *)(lVar11 + -0x50) + 0x20))((long *)(lVar11 + -0x50));
            return;
          }
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar14 = iVar9;
    } while (iVar9 != 0);
  }
  return;
}


