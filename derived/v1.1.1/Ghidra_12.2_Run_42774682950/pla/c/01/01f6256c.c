/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f6256c; name: FUN_01f6256c
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f6256c(long param_1)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  long *plVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long *plVar11;
  int iVar12;
  int iVar13;
  undefined8 uVar14;
  ulong uVar15;
  long lVar16;
  uint uVar17;
  long lVar18;
  long *plVar19;
  long *local_70 [2];
  long *local_60;
  long local_58;
  
  puVar10 = PTR_DAT_043796e8;
  puVar9 = PTR_DAT_043796e0;
  puVar8 = PTR_DAT_043794d8;
  puVar7 = PTR_DAT_043794d0;
  lVar18 = *(long *)(param_1 + 0x70);
  if ((lVar18 != 0) && (*(int *)(lVar18 + 0xc) != 0)) {
    piVar1 = (int *)(lVar18 + 0xc);
    iVar13 = *(int *)(lVar18 + 0xc);
    do {
      plVar19 = *(long **)(lVar18 + 0x10);
      if (((*puVar9 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar9), iVar12 != 0)) {
        if (((*puVar7 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar7), iVar12 != 0)) {
          uVar14 = FUN_0087f8f0();
          *(undefined8 *)puVar8 = uVar14;
          __cxa_guard_release(puVar7);
        }
        *(undefined **)puVar10 = puVar8;
        __cxa_guard_release(puVar9);
      }
      while( true ) {
        if (plVar19 == (long *)0x0) {
          return;
        }
        if (plVar19 == (long *)puVar10) break;
        plVar19 = (long *)*plVar19;
      }
      iVar12 = *piVar1;
      if (iVar12 == iVar13) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar13 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar18 = *(long *)(lVar18 + 0x18);
          if (lVar18 == 0) {
            return;
          }
          plVar19 = (long *)(lVar18 + -0x50);
          if (_DAT_043d4b04 == 0) {
            FUN_0199ce38(plVar19,0);
            FUN_0199ce4c(plVar19,0);
          }
          else {
            FUN_0199ce38(plVar19,1);
          }
          FUN_0199d230(local_70,plVar19);
          if (local_70[0] == (long *)0x0) {
            local_60 = (long *)0x0;
            uVar5 = _DAT_043d4b04;
            plVar6 = local_60;
          }
          else {
            FUN_01f636d8(&local_60);
            plVar11 = local_70[0];
            uVar5 = _DAT_043d4b04;
            plVar6 = local_60;
            if (local_70[0] != (long *)0x0) {
              plVar2 = local_70[0] + 1;
              do {
                iVar13 = (int)*plVar2 + -1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                if (bVar4) {
                  *(int *)plVar2 = iVar13;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              uVar5 = _DAT_043d4b04;
              if (iVar13 == 0) {
                local_70[0][2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar16 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar16;
                local_58 = *plVar11;
                FUN_02a44274(lVar16 + 0xd8,&local_58);
                uVar5 = _DAT_043d4b04;
                plVar6 = local_60;
              }
            }
          }
          _DAT_043d4b04 = uVar5;
          local_60 = plVar6;
          if (plVar6 != (long *)0x0) {
            FUN_017eea24(plVar6,uVar5 == 0);
            if ((uVar5 & 0xc2) == 0) {
              FUN_017eea3c(plVar6,uVar5 == 0);
            }
            lVar16 = plVar6[0xb];
            piVar1 = (int *)(lVar16 + 0xc);
            do {
              iVar13 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar13 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar13 + -1 == 0) {
              *(undefined8 *)(lVar16 + 0x18) = 0;
              (**(code **)(*plVar6 + 0x20))(plVar6);
            }
          }
          FUN_0199c77c(local_70,plVar19);
          uVar5 = _DAT_043d4b04;
          if (local_70[0] != (long *)0x0) {
            if (((*PTR_DAT_04379578 & 1) == 0) &&
               (iVar13 = __cxa_guard_acquire(PTR_DAT_04379578), iVar13 != 0)) {
              FUN_00100250(PTR_LAB_043796d8,PTR_DAT_04379580,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379578);
            }
            uVar14 = *(undefined8 *)PTR_DAT_04379580;
            *(undefined8 *)PTR_DAT_04379588 = uVar14;
            uVar15 = FUN_00956f14(uVar14,0,0);
            if ((uVar15 & 1) == 0) {
              uVar17 = _DAT_043d4b04 & 1;
            }
            else {
              uVar17 = 0;
            }
            if (((((_DAT_043d4b04 >> 1 & 1) != 0 || uVar17 != 0) || (_DAT_043d4b04 >> 6 & 1) != 0)
                || (_DAT_043d4b04 >> 7 & 1) != 0) || (_DAT_043d4b04 >> 8 & 1) != 0) {
              uVar15 = FUN_0192a42c(local_70[0]);
              if (uVar5 == 0) {
                if ((uVar15 & 1) != 0) {
                  FUN_0192a084(local_70[0]);
                }
              }
              else if ((uVar15 & 1) == 0) {
                FUN_01929dbc(local_70[0]);
              }
            }
            if (local_70[0] != (long *)0x0) {
              lVar16 = local_70[0][0xb];
              piVar1 = (int *)(lVar16 + 0xc);
              do {
                iVar13 = *piVar1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                  *piVar1 = iVar13 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar13 + -1 == 0) {
                *(undefined8 *)(lVar16 + 0x18) = 0;
                (**(code **)(*local_70[0] + 0x20))();
              }
            }
          }
          FUN_01f622fc(param_1);
          FUN_0199c138(local_70,plVar19);
          if ((local_70[0] != (long *)0x0) &&
             (FUN_01af9350(local_70[0],_DAT_043d4b04 != 0), local_70[0] != (long *)0x0)) {
            lVar16 = local_70[0][0xb];
            piVar1 = (int *)(lVar16 + 0xc);
            do {
              iVar13 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar13 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar13 + -1 == 0) {
              *(undefined8 *)(lVar16 + 0x18) = 0;
              (**(code **)(*local_70[0] + 0x20))();
            }
          }
          lVar18 = *(long *)(lVar18 + 8);
          piVar1 = (int *)(lVar18 + 0xc);
          do {
            iVar13 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar13 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar13 + -1 == 0) {
            *(undefined8 *)(lVar18 + 0x18) = 0;
            (**(code **)(*plVar19 + 0x20))(plVar19);
            return;
          }
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar13 = iVar12;
    } while (iVar12 != 0);
  }
  return;
}


