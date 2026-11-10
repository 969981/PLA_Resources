/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f61e88; name: FUN_01f61e88
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f61e88(long param_1,uint param_2,uint param_3)

{
  int *piVar1;
  long *plVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long *plVar10;
  int iVar11;
  int iVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  long *local_80 [2];
  long *local_70;
  long local_68;
  
  puVar9 = PTR_DAT_043796e8;
  puVar8 = PTR_DAT_043796e0;
  puVar7 = PTR_DAT_043794d0;
  uVar3 = _DAT_043d4b04 & (param_2 ^ 0xffffffff);
  _DAT_043d4b04 = _DAT_043d4b04 | param_2;
  if ((param_3 & 1) == 0) {
    _DAT_043d4b04 = uVar3;
  }
  lVar16 = *(long *)(param_1 + 0x70);
  if ((lVar16 != 0) && (*(int *)(lVar16 + 0xc) != 0)) {
    piVar1 = (int *)(lVar16 + 0xc);
    iVar12 = *(int *)(lVar16 + 0xc);
    do {
      plVar17 = *(long **)(lVar16 + 0x10);
      if (((*puVar8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar8), iVar11 != 0)) {
        if (((*puVar7 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar7), iVar11 != 0)) {
          uVar14 = FUN_0087f8f0();
          *(undefined8 *)PTR_DAT_043794d8 = uVar14;
          __cxa_guard_release(puVar7);
        }
        *(undefined **)puVar9 = PTR_DAT_043794d8;
        __cxa_guard_release(puVar8);
      }
      while( true ) {
        if (plVar17 == (long *)0x0) {
          return;
        }
        if (plVar17 == (long *)puVar9) break;
        plVar17 = (long *)*plVar17;
      }
      iVar11 = *piVar1;
      if (iVar11 == iVar12) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar12 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') {
          lVar16 = *(long *)(lVar16 + 0x18);
          if (lVar16 == 0) {
            return;
          }
          plVar17 = (long *)(lVar16 + -0x50);
          FUN_0199ce38(plVar17,_DAT_043d4b04 != 0);
          FUN_0199d230(local_80,plVar17);
          if (local_80[0] == (long *)0x0) {
            local_70 = (long *)0x0;
            plVar6 = local_70;
          }
          else {
            FUN_01f636d8(&local_70);
            plVar10 = local_80[0];
            plVar6 = local_70;
            if (local_80[0] != (long *)0x0) {
              plVar2 = local_80[0] + 1;
              do {
                iVar12 = (int)*plVar2 + -1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                if (bVar5) {
                  *(int *)plVar2 = iVar12;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar12 == 0) {
                local_80[0][2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar15 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar15;
                local_68 = *plVar10;
                FUN_02a44274(lVar15 + 0xd8,&local_68);
                plVar6 = local_70;
              }
            }
          }
          local_70 = plVar6;
          if (plVar6 != (long *)0x0) {
            if (((param_2 == 2) || (param_2 == 0x80)) || (param_2 == 0x40)) {
              FUN_017eea24(plVar6,~param_3 & 1);
            }
            else {
              FUN_017eea24(plVar6,~param_3 & 1);
              FUN_017eea3c(plVar6,~param_3 & 1);
            }
            lVar15 = plVar6[0xb];
            piVar1 = (int *)(lVar15 + 0xc);
            do {
              iVar12 = *piVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = iVar12 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar12 + -1 == 0) {
              *(undefined8 *)(lVar15 + 0x18) = 0;
              (**(code **)(*plVar6 + 0x20))(plVar6);
            }
          }
          FUN_0199c77c(local_80,plVar17);
          if (local_80[0] == (long *)0x0) goto LAB_01f6202c;
          if (param_2 == 2) {
LAB_01f61ff4:
            uVar13 = FUN_0192a42c();
joined_r0x01f62134:
            if ((param_3 & 1) == 0) {
              if ((uVar13 & 1) != 0) {
                FUN_0192a084(local_80[0]);
              }
            }
            else if ((uVar13 & 1) == 0) {
              FUN_01929dbc(local_80[0]);
            }
joined_r0x01f62148:
            if (local_80[0] == (long *)0x0) goto LAB_01f6202c;
          }
          else if ((int)param_2 < 0x40) {
            if (param_2 == 1) {
              if (((*PTR_DAT_04379578 & 1) == 0) &&
                 (iVar12 = __cxa_guard_acquire(PTR_DAT_04379578), iVar12 != 0)) {
                FUN_00100250(PTR_LAB_043796d8,PTR_DAT_04379580,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379578);
              }
              uVar14 = *(undefined8 *)PTR_DAT_04379580;
              *(undefined8 *)PTR_DAT_04379588 = uVar14;
              uVar13 = FUN_00956f14(uVar14,0,0);
              if ((uVar13 & 1) == 0) {
                uVar13 = FUN_0192a42c(local_80[0]);
                goto joined_r0x01f62134;
              }
              goto joined_r0x01f62148;
            }
          }
          else if (((param_2 == 0x40) || (param_2 == 0x80)) || (param_2 == 0x100))
          goto LAB_01f61ff4;
          lVar15 = local_80[0][0xb];
          piVar1 = (int *)(lVar15 + 0xc);
          do {
            iVar12 = *piVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar12 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar12 + -1 == 0) {
            *(undefined8 *)(lVar15 + 0x18) = 0;
            (**(code **)(*local_80[0] + 0x20))();
          }
LAB_01f6202c:
          FUN_01f622fc(param_1);
          FUN_0199c138(local_80,plVar17);
          if ((local_80[0] != (long *)0x0) &&
             (FUN_01af9350(local_80[0],_DAT_043d4b04 != 0), local_80[0] != (long *)0x0)) {
            lVar15 = local_80[0][0xb];
            piVar1 = (int *)(lVar15 + 0xc);
            do {
              iVar12 = *piVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = iVar12 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar12 + -1 == 0) {
              *(undefined8 *)(lVar15 + 0x18) = 0;
              (**(code **)(*local_80[0] + 0x20))();
            }
          }
          lVar16 = *(long *)(lVar16 + 8);
          piVar1 = (int *)(lVar16 + 0xc);
          do {
            iVar12 = *piVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar12 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar12 + -1 == 0) {
            *(undefined8 *)(lVar16 + 0x18) = 0;
            (**(code **)(*plVar17 + 0x20))(plVar17);
            return;
          }
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar12 = iVar11;
    } while (iVar11 != 0);
  }
  return;
}


