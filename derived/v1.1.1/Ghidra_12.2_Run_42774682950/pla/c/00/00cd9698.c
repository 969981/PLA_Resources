/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00cd9698; name: FUN_00cd9698
 */


undefined4 FUN_00cd9698(long *param_1)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  undefined8 uVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  int iVar16;
  long *plVar17;
  undefined4 local_6c;
  long *local_68;
  
  puVar10 = PTR_DAT_043795e0;
  puVar9 = PTR_DAT_043795d8;
  puVar8 = PTR_DAT_043795d0;
  puVar7 = PTR_DAT_043795c8;
  puVar6 = PTR_DAT_043794d8;
  puVar5 = PTR_DAT_043794d0;
  lVar13 = *param_1;
  if ((lVar13 != 0) && (*(int *)(lVar13 + 0xc) != 0)) {
    piVar1 = (int *)(lVar13 + 0xc);
    iVar16 = *(int *)(lVar13 + 0xc);
    do {
      plVar17 = *(long **)(lVar13 + 0x10);
      if (((*puVar7 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar7), iVar11 != 0)) {
        if (((*puVar9 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar9), iVar11 != 0)) {
          if (((*puVar5 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar5), iVar11 != 0)) {
            uVar12 = FUN_0087f8f0();
            *(undefined8 *)puVar6 = uVar12;
            __cxa_guard_release(puVar5);
          }
          *(undefined **)puVar10 = puVar6;
          __cxa_guard_release(puVar9);
        }
        *(undefined **)puVar8 = puVar10;
        __cxa_guard_release(puVar7);
      }
      while( true ) {
        if (plVar17 == (long *)0x0) {
          return 0x3f800000;
        }
        if (plVar17 == (long *)puVar8) break;
        plVar17 = (long *)*plVar17;
      }
      iVar11 = *piVar1;
      if (iVar11 == iVar16) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar16 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar13 = *(long *)(lVar13 + 0x18);
          plVar17 = (long *)(lVar13 + -0x50);
          if (lVar13 == 0) {
            return 0x3f800000;
          }
          FUN_01a71da0(&local_68,plVar17);
          if (local_68 == (long *)0x0) {
            bVar4 = false;
          }
          else {
            if ((int)local_68[0x50] == 3) {
              plVar14 = local_68 + 0x5e;
LAB_00cd97b0:
              local_6c = (undefined4)*plVar14;
              bVar4 = true;
            }
            else {
              if ((int)local_68[0x50] == 1) {
                plVar14 = local_68 + 0x56;
                goto LAB_00cd97b0;
              }
              bVar4 = false;
            }
            lVar15 = local_68[0xb];
            piVar1 = (int *)(lVar15 + 0xc);
            do {
              iVar16 = *piVar1;
              cVar3 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar2) {
                *piVar1 = iVar16 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar16 + -1 == 0) {
              *(undefined8 *)(lVar15 + 0x18) = 0;
              (**(code **)(*local_68 + 0x20))();
            }
          }
          lVar13 = *(long *)(lVar13 + 8);
          piVar1 = (int *)(lVar13 + 0xc);
          do {
            iVar16 = *piVar1;
            cVar3 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar2) {
              *piVar1 = iVar16 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar16 + -1 == 0) {
            *(undefined8 *)(lVar13 + 0x18) = 0;
            (**(code **)(*plVar17 + 0x20))(plVar17);
          }
          if (bVar4) {
            return local_6c;
          }
          return 0x3f800000;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar16 = iVar11;
    } while (iVar11 != 0);
  }
  return 0x3f800000;
}


