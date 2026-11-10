/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02785bd0; name: FUN_02785bd0
 */


void FUN_02785bd0(undefined1 *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 uVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  undefined1 uVar18;
  long *plVar19;
  undefined8 uVar20;
  undefined4 uVar21;
  undefined1 in_q3 [16];
  undefined8 uVar22;
  long *local_88;
  long *local_80 [2];
  long local_70;
  long local_68;
  
  uVar22 = in_q3._8_8_;
  uVar20 = in_q3._0_8_;
  if (((*PTR_DAT_04379678 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379678), iVar9 != 0))
  {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  lVar14 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar14;
  plVar15 = *(long **)(lVar14 + 0xc0);
  if (plVar15 == (long *)0x0) {
LAB_02785e14:
    bVar3 = false;
  }
  else {
    lVar14 = plVar15[0xb];
    if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) {
LAB_02786020:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar14 + 0x10) == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar14 + 0x18))();
      *(undefined8 *)(lVar14 + 0x10) = uVar11;
    }
    piVar1 = (int *)(lVar14 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    local_68 = plVar15[0x18];
    local_70 = local_68 + plVar15[0x19] * 8;
    FUN_02793df0(local_80,&local_68,&local_70);
    if (local_80[0] != (long *)(plVar15[0x18] + plVar15[0x19] * 8)) {
      plVar17 = (long *)*local_80[0];
      puVar12 = (undefined8 *)(**(code **)plVar17[10])(plVar17 + 10);
      if (((*PTR_DAT_0437c678 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_0437c678), iVar9 != 0)) {
        uVar11 = FUN_009311a8();
        *(undefined8 *)PTR_DAT_0437c680 = uVar11;
        __cxa_guard_release(PTR_DAT_0437c678);
      }
      if (puVar12 != (undefined8 *)0x0) {
LAB_02785cc4:
        if (puVar12 != (undefined8 *)PTR_DAT_0437c680) goto LAB_02785e20;
        lVar14 = plVar17[0xb];
        if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) goto LAB_02786020;
        if (*(long *)(lVar14 + 0x10) == 0) {
          uVar11 = (**(code **)**(undefined8 **)(lVar14 + 0x18))();
          *(undefined8 *)(lVar14 + 0x10) = uVar11;
        }
        piVar1 = (int *)(lVar14 + 0xc);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          plVar16 = plVar17;
        } while (cVar2 != '\0');
LAB_02785d08:
        if (plVar16 == (long *)0x0) goto LAB_02785d6c;
        FUN_01e564f8(local_80,plVar16);
        plVar17 = local_80[0];
        puVar7 = PTR_DAT_0437c670;
        puVar6 = PTR_DAT_0437c668;
        puVar5 = PTR_DAT_043794d0;
        if (local_80[0] == (long *)0x0) {
LAB_02785d20:
          bVar3 = false;
        }
        else {
          if (*(int *)((long)local_80[0] + 0xc) == 0) {
LAB_027860e4:
            local_88 = (long *)0x0;
            plVar17 = local_80[0];
          }
          else {
            piVar1 = (int *)((long)local_80[0] + 0xc);
            iVar9 = *(int *)((long)local_80[0] + 0xc);
            while( true ) {
              plVar19 = (long *)plVar17[2];
              if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar6), iVar10 != 0)) {
                if (((*puVar5 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar5), iVar10 != 0)) {
                  uVar11 = FUN_0087f8f0();
                  *(undefined8 *)PTR_DAT_043794d8 = uVar11;
                  __cxa_guard_release(puVar5);
                }
                *(undefined **)puVar7 = PTR_DAT_043794d8;
                __cxa_guard_release(puVar6);
              }
              while( true ) {
                if (plVar19 == (long *)0x0) goto LAB_027860e4;
                if (plVar19 == (long *)puVar7) break;
                plVar19 = (long *)*plVar19;
              }
              iVar10 = *piVar1;
              if (iVar10 == iVar9) break;
              ClearExclusiveLocal();
LAB_02785ed4:
              iVar9 = iVar10;
              if (iVar10 == 0) goto LAB_027860e4;
            }
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar9 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 != '\0') goto LAB_02785ed4;
            lVar14 = plVar17[3];
            local_88 = (long *)0x0;
            plVar17 = local_80[0];
            if (lVar14 != 0) {
              local_88 = (long *)(lVar14 + -0x50);
            }
          }
          local_80[0] = plVar17;
          if (plVar17 != (long *)0x0) {
            plVar19 = plVar17 + 1;
            do {
              iVar9 = (int)*plVar19 + -1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar19,0x10);
              if (bVar3) {
                *(int *)plVar19 = iVar9;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar9 == 0) {
              plVar17[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar14 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar14;
              local_68 = *plVar17;
              FUN_02a44274(lVar14 + 0xd8,&local_68);
            }
          }
          if (local_88 == (long *)0x0) goto LAB_02785d20;
          plVar17 = (long *)local_88[0xe];
          if (plVar17 == (long *)0x0) {
LAB_0278604c:
            bVar3 = false;
            if (plVar17 == (long *)0x0) goto LAB_02786070;
LAB_02786054:
            lVar14 = plVar17[0xb];
            piVar1 = (int *)(lVar14 + 0xc);
            do {
              iVar9 = *piVar1;
              cVar2 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar9 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar9 + -1 != 0) goto LAB_02786070;
            *(undefined8 *)(lVar14 + 0x18) = 0;
            (**(code **)(*plVar17 + 0x20))(plVar17);
            if (bVar3) goto LAB_02786074;
LAB_0278609c:
            bVar3 = false;
          }
          else {
            lVar14 = plVar17[0xb];
            if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) goto LAB_02786020;
            if (*(long *)(lVar14 + 0x10) == 0) {
              uVar11 = (**(code **)**(undefined8 **)(lVar14 + 0x18))();
              *(undefined8 *)(lVar14 + 0x10) = uVar11;
            }
            piVar1 = (int *)(lVar14 + 0xc);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = *piVar1 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            FUN_0199c138(local_80,plVar17);
            puVar5 = PTR_DAT_043794b8;
            if (local_80[0] == (long *)0x0) goto LAB_0278604c;
            lVar14 = local_80[0][0x35];
            if (lVar14 == 0) {
LAB_02785fec:
              bVar3 = false;
            }
            else {
              if (*(int *)(lVar14 + 0xc) != 0) {
                piVar1 = (int *)(lVar14 + 0xc);
                iVar9 = *(int *)(lVar14 + 0xc);
                while( true ) {
                  puVar12 = *(undefined8 **)(lVar14 + 0x10);
                  if (((*PTR_DAT_043794b0 & 1) == 0) &&
                     (iVar10 = __cxa_guard_acquire(PTR_DAT_043794b0), iVar10 != 0)) {
                    if (((*PTR_DAT_043794c0 & 1) == 0) &&
                       (iVar10 = __cxa_guard_acquire(PTR_DAT_043794c0), iVar10 != 0)) {
                      if (((*PTR_DAT_043794d0 & 1) == 0) &&
                         (iVar10 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar10 != 0)) {
                        uVar11 = FUN_0087f8f0();
                        *(undefined8 *)PTR_DAT_043794d8 = uVar11;
                        __cxa_guard_release(PTR_DAT_043794d0);
                      }
                      *(undefined **)PTR_DAT_043794c8 = PTR_DAT_043794d8;
                      __cxa_guard_release(PTR_DAT_043794c0);
                    }
                    *(undefined **)puVar5 = PTR_DAT_043794c8;
                    __cxa_guard_release(PTR_DAT_043794b0);
                  }
                  uVar21 = (undefined4)uVar22;
                  if (puVar12 == (undefined8 *)0x0) break;
                  while (puVar12 != (undefined8 *)puVar5) {
                    puVar12 = (undefined8 *)*puVar12;
                    if (puVar12 == (undefined8 *)0x0) goto LAB_02785fec;
                  }
                  iVar10 = *piVar1;
                  if (iVar10 == iVar9) {
                    cVar2 = '\x01';
                    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar3) {
                      *piVar1 = iVar9 + 1;
                      cVar2 = ExclusiveMonitorsStatus();
                    }
                    if (cVar2 != '\0') goto LAB_02786174;
                    lVar14 = *(long *)(lVar14 + 0x18);
                    if (lVar14 == 0) break;
                    plVar19 = (long *)(lVar14 + -0x50);
                    lVar14 = *(long *)(lVar14 + 8);
                    piVar1 = (int *)(lVar14 + 0xc);
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
                      *(undefined8 *)(lVar14 + 0x18) = 0;
                      (**(code **)(*plVar19 + 0x20))(plVar19);
                    }
                    plVar13 = (long *)FUN_0196bd20(local_88);
                    if (*plVar13 == 0) {
                      plVar13 = (long *)PTR_DAT_04379c88;
                    }
                    else {
                      plVar13 = (long *)(*plVar13 + 0x58);
                    }
                    local_68 = *plVar13;
                    if (local_68 < -0x1c4413fb859baafc) {
                      if (local_68 == -0x1c4415fb859bae62) {
                        uVar18 = 4;
                        goto LAB_0278641c;
                      }
                      if (local_68 == -0x1c4414fb859bacaf) {
                        uVar18 = 5;
                        goto LAB_0278641c;
                      }
LAB_02786294:
                      if (((*PTR_DAT_0437b4d0 & 1) == 0) &&
                         (iVar9 = __cxa_guard_acquire(PTR_DAT_0437b4d0), iVar9 != 0)) {
                        FUN_00100250(PTR_LAB_0437e718,PTR_DAT_0437b4d8,&PTR_LOOP_0411a000);
                        __cxa_guard_release(PTR_DAT_0437b4d0);
                      }
                      lVar14 = *(long *)PTR_DAT_0437b4d8;
                      *(long *)PTR_DAT_0437b4e0 = lVar14;
                      if (lVar14 == 0) break;
                      FUN_02786610(param_1,lVar14,&local_68);
                      bVar3 = true;
                    }
                    else {
                      if (local_68 == -0x1c4410fb859ba5e3) {
                        uVar18 = 1;
                      }
                      else if (local_68 == -0x1c4413fb859baafc) {
                        uVar18 = 2;
                      }
                      else {
                        if (local_68 != -0x1c4412fb859ba949) goto LAB_02786294;
                        uVar18 = 3;
                      }
LAB_0278641c:
                      (**(code **)(*plVar19 + 0x40))(plVar19);
                      uVar8 = FUN_02786460();
                      bVar3 = true;
                      param_1[5] = uVar18;
                      param_1[4] = uVar8;
                      *(undefined8 *)(param_1 + 8) = uVar20;
                      *(undefined4 *)(param_1 + 0x10) = uVar21;
                      *param_1 = 1;
                    }
                    goto joined_r0x02786458;
                  }
                  ClearExclusiveLocal();
LAB_02786174:
                  iVar9 = iVar10;
                  if (iVar10 == 0) goto LAB_02785fec;
                }
              }
              bVar3 = false;
            }
joined_r0x02786458:
            if (local_80[0] != (long *)0x0) {
              lVar14 = local_80[0][0xb];
              piVar1 = (int *)(lVar14 + 0xc);
              do {
                iVar9 = *piVar1;
                cVar2 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                  *piVar1 = iVar9 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (iVar9 + -1 == 0) {
                *(undefined8 *)(lVar14 + 0x18) = 0;
                (**(code **)(*local_80[0] + 0x20))();
              }
            }
            if (!bVar3) goto LAB_0278604c;
            bVar3 = true;
            if (plVar17 != (long *)0x0) goto LAB_02786054;
LAB_02786070:
            if (!bVar3) goto LAB_0278609c;
LAB_02786074:
            bVar3 = true;
          }
          if (local_88 != (long *)0x0) {
            lVar14 = local_88[0xb];
            piVar1 = (int *)(lVar14 + 0xc);
            do {
              iVar9 = *piVar1;
              cVar2 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar9 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar9 + -1 == 0) {
              *(undefined8 *)(lVar14 + 0x18) = 0;
              (**(code **)(*local_88 + 0x20))();
            }
          }
        }
        if (!bVar3) goto LAB_02785d6c;
        bVar3 = true;
        goto joined_r0x02785d50;
      }
    }
    plVar16 = (long *)0x0;
LAB_02785d6c:
    bVar3 = false;
joined_r0x02785d50:
    if (plVar16 != (long *)0x0) {
      lVar14 = plVar16[0xb];
      piVar1 = (int *)(lVar14 + 0xc);
      do {
        iVar9 = *piVar1;
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar9 + -1 == 0) {
        *(undefined8 *)(lVar14 + 0x18) = 0;
        (**(code **)(*plVar16 + 0x20))(plVar16);
      }
    }
    if (!bVar3) goto LAB_02785e14;
    bVar3 = true;
  }
  if (plVar15 != (long *)0x0) {
    lVar14 = plVar15[0xb];
    piVar1 = (int *)(lVar14 + 0xc);
    do {
      iVar9 = *piVar1;
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar14 + 0x18) = 0;
      (**(code **)(*plVar15 + 0x20))(plVar15);
      if (bVar3) {
        return;
      }
      goto LAB_02785dbc;
    }
  }
  if (bVar3) {
    return;
  }
LAB_02785dbc:
  *param_1 = 0;
  return;
LAB_02785e20:
  puVar12 = (undefined8 *)*puVar12;
  plVar16 = (long *)0x0;
  if (puVar12 == (undefined8 *)0x0) goto LAB_02785d08;
  goto LAB_02785cc4;
}


