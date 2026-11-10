/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01bab1a4; name: FUN_01bab1a4
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_01bab1a4(long *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  long *plVar17;
  undefined8 *local_78 [2];
  long *local_68;
  undefined8 local_58;
  
  puVar7 = PTR_DAT_043796e8;
  puVar6 = PTR_DAT_043796e0;
  puVar5 = PTR_DAT_043794d8;
  puVar4 = PTR_DAT_043794d0;
  if ((((*(char *)((long)param_1 + 0xb) != '\0') && (*(char *)((long)param_1 + 0xc) == '\0')) &&
      (lVar11 = *(long *)(*param_1 + 0x488), lVar11 != 0)) && (*(int *)(lVar11 + 0xc) != 0)) {
    piVar1 = (int *)(lVar11 + 0xc);
    iVar9 = *(int *)(lVar11 + 0xc);
    do {
      plVar17 = *(long **)(lVar11 + 0x10);
      if (((*puVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar6), iVar8 != 0)) {
        if (((*puVar4 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar4), iVar8 != 0)) {
          uVar10 = FUN_0087f8f0();
          *(undefined8 *)puVar5 = uVar10;
          __cxa_guard_release(puVar4);
        }
        *(undefined **)puVar7 = puVar5;
        __cxa_guard_release(puVar6);
      }
      while( true ) {
        if (plVar17 == (long *)0x0) {
          return;
        }
        if (plVar17 == (long *)puVar7) break;
        plVar17 = (long *)*plVar17;
      }
      iVar8 = *piVar1;
      if (iVar8 == iVar9) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar9 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar11 = *(long *)(lVar11 + 0x18);
          plVar17 = (long *)(lVar11 + -0x50);
          if (lVar11 == 0) {
            return;
          }
          FUN_019a1b5c(local_78,plVar17);
          if (local_78[0] == (undefined8 *)0x0) {
            local_68 = (long *)0x0;
          }
          else {
            FUN_016c38dc(&local_68);
            if (local_78[0] != (undefined8 *)0x0) {
              piVar1 = (int *)(local_78[0] + 1);
              do {
                iVar9 = *piVar1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                  *piVar1 = iVar9 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (iVar9 + -1 == 0) {
                local_78[0][2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar12 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar12;
                local_58 = *local_78[0];
                FUN_02a44274(lVar12 + 0xd8,&local_58);
              }
            }
          }
          if (local_68 == (long *)0x0) goto LAB_01bab498;
          if ((char)local_68[0xe] == '\0') {
            *(undefined1 *)((long)param_1 + 0xc) = 1;
            *(int *)((long)param_1 + 0x34) = (int)param_1[6];
            param_1[3] = (long)&DAT_cbf29ce484222645;
            lVar12 = *param_1;
            puVar15 = *(undefined8 **)(lVar12 + 0x3c0);
            puVar16 = *(undefined8 **)(lVar12 + 0x3c8);
            if (puVar15 != puVar16) {
              do {
                plVar14 = (long *)*puVar15;
                cVar2 = DAT_00000100;
                if (plVar14 != (long *)0x0) {
                  lVar12 = plVar14[0xb];
                  if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
                    nn::diag::detail::AbortImpl("","","",0);
                  }
                  if (*(long *)(lVar12 + 0x10) == 0) {
                    uVar10 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
                    *(undefined8 *)(lVar12 + 0x10) = uVar10;
                  }
                  piVar1 = (int *)(lVar12 + 0xc);
                  do {
                    cVar2 = '\x01';
                    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar3) {
                      *piVar1 = *piVar1 + 1;
                      cVar2 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar2 != '\0');
                  lVar13 = plVar14[0xb];
                  piVar1 = (int *)(lVar13 + 0xc);
                  lVar12 = plVar14[0x20];
                  do {
                    iVar9 = *piVar1;
                    cVar2 = '\x01';
                    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar3) {
                      *piVar1 = iVar9 + -1;
                      cVar2 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar2 != '\0');
                  cVar2 = (char)lVar12;
                  if (iVar9 + -1 == 0) {
                    *(undefined8 *)(lVar13 + 0x18) = 0;
                    (**(code **)(*plVar14 + 0x20))(plVar14);
                  }
                }
                if (cVar2 != '\0') goto LAB_01bab474;
                puVar15 = puVar15 + 1;
              } while (puVar15 != puVar16);
              lVar12 = *param_1;
            }
            *(undefined1 *)(param_1 + 1) = 0;
            *(uint *)(lVar12 + 0x4a8) = *(uint *)(lVar12 + 0x4a8) | 0x20;
          }
LAB_01bab474:
          if (local_68 != (long *)0x0) {
            lVar12 = local_68[0xb];
            piVar1 = (int *)(lVar12 + 0xc);
            do {
              iVar9 = *piVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar9 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar9 + -1 == 0) {
              *(undefined8 *)(lVar12 + 0x18) = 0;
              (**(code **)(*local_68 + 0x20))();
            }
          }
LAB_01bab498:
          lVar11 = *(long *)(lVar11 + 8);
          piVar1 = (int *)(lVar11 + 0xc);
          do {
            iVar9 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar9 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar9 + -1 == 0) {
            *(undefined8 *)(lVar11 + 0x18) = 0;
            (**(code **)(*plVar17 + 0x20))(plVar17);
            return;
          }
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar9 = iVar8;
    } while (iVar8 != 0);
  }
  return;
}


