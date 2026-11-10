/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01906830; name: FUN_01906830
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_01906830(long *param_1,long *param_2,long param_3)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  long *plVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined2 uVar12;
  short sVar13;
  long *plVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  long *local_220;
  long *local_218 [10];
  undefined4 local_1c4;
  long *local_1a0;
  long *local_180;
  long *local_160;
  long *local_140;
  long *local_120;
  long *local_100;
  long *local_a0;
  long *local_98;
  long *local_90;
  long *local_88;
  long *local_80;
  long *local_78;
  long local_70 [2];
  
  if (((*PTR_DAT_04379678 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04379678), iVar5 != 0))
  {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  lVar17 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar17;
  if ((lVar17 == 0) || (local_220 = *(long **)(lVar17 + 0xd0), local_220 == (long *)0x0)) {
    local_220 = (long *)0x0;
    plVar14 = (long *)0x0;
  }
  else {
    plVar14 = local_220 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar4) {
        *(int *)plVar14 = (int)*plVar14 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar14 = (long *)local_220[0xb];
    if (plVar14 != (long *)0x0) {
      plVar16 = plVar14 + 10;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar4) {
          *(int *)plVar16 = (int)*plVar16 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
  }
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04379558), iVar5 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar15 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar15;
  if (lVar15 == 0) {
    local_88 = (long *)0x0;
    local_80 = (long *)0x0;
    local_98 = (long *)0x0;
    local_90 = (long *)0x0;
  }
  else {
    FUN_01148b80(&local_80,lVar15);
    FUN_01148f20(&local_88,lVar15);
    FUN_01148eac(&local_90,lVar15);
    FUN_01148a98(&local_98,lVar15);
  }
  if (((*PTR_DAT_04379690 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04379690), iVar5 != 0))
  {
    FUN_00100250(PTR_LAB_043796a8,PTR_DAT_04379698,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379690);
  }
  lVar15 = *(long *)PTR_DAT_04379698;
  *(long *)PTR_DAT_043796a0 = lVar15;
  if (lVar15 == 0) {
    local_a0 = (long *)0x0;
  }
  else {
    FUN_0286b878(&local_a0);
  }
  if (((*PTR_DAT_04379c28 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04379c28), iVar5 != 0))
  {
    FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379c28);
  }
  lVar15 = *(long *)PTR_DAT_04379c30;
  *(long *)PTR_DAT_04379c38 = lVar15;
  if (lVar17 == 0) {
    plVar19 = (long *)0x0;
    plVar16 = (long *)0x0;
    plVar20 = (long *)0x0;
    plVar18 = (long *)0x0;
LAB_0190692c:
    lVar17 = *param_2;
  }
  else {
    plVar16 = *(long **)(lVar17 + 0xc0);
    if (plVar16 == (long *)0x0) {
      plVar19 = (long *)0x0;
      plVar18 = (long *)0x0;
    }
    else {
      lVar17 = plVar16[0xb];
      if (*(undefined8 **)(lVar17 + 0x18) == (undefined8 *)0x0) goto LAB_01907674;
      if (*(long *)(lVar17 + 0x10) == 0) {
        uVar10 = (**(code **)**(undefined8 **)(lVar17 + 0x18))();
        *(undefined8 *)(lVar17 + 0x10) = uVar10;
      }
      piVar2 = (int *)(lVar17 + 0xc);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = *piVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      local_70[0] = plVar16[0x18];
      local_78 = (long *)(local_70[0] + plVar16[0x19] * 8);
      FUN_01908d10(local_218,local_70,&local_78);
      if (local_218[0] != (long *)(plVar16[0x18] + plVar16[0x19] * 8)) {
        plVar19 = (long *)*local_218[0];
        puVar11 = (undefined8 *)(**(code **)plVar19[10])(plVar19 + 10);
        if (((*PTR_DAT_0437c678 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_0437c678), iVar5 != 0)) {
          uVar10 = FUN_009311a8();
          *(undefined8 *)PTR_DAT_0437c680 = uVar10;
          __cxa_guard_release(PTR_DAT_0437c678);
        }
        if (puVar11 != (undefined8 *)0x0) {
LAB_01907258:
          if (puVar11 != (undefined8 *)PTR_DAT_0437c680) goto LAB_0190743c;
          lVar17 = plVar19[0xb];
          if (*(undefined8 **)(lVar17 + 0x18) == (undefined8 *)0x0) goto LAB_01907674;
          if (*(long *)(lVar17 + 0x10) == 0) {
            uVar10 = (**(code **)**(undefined8 **)(lVar17 + 0x18))();
            *(undefined8 *)(lVar17 + 0x10) = uVar10;
          }
          piVar2 = (int *)(lVar17 + 0xc);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar4) {
              *piVar2 = *piVar2 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            plVar18 = plVar19;
          } while (cVar3 != '\0');
LAB_0190729c:
          if (plVar18 == (long *)0x0) goto LAB_019074f8;
          FUN_01e564f8(local_218,plVar18);
          plVar19 = local_218[0];
          if (local_218[0] == (long *)0x0) {
            plVar19 = (long *)0x0;
            lVar17 = *param_2;
            goto joined_r0x019072bc;
          }
          if (*(int *)((long)local_218[0] + 0xc) == 0) {
LAB_019076e4:
            plVar19 = (long *)0x0;
            plVar20 = local_218[0];
          }
          else {
            piVar2 = (int *)((long)local_218[0] + 0xc);
            iVar5 = *(int *)((long)local_218[0] + 0xc);
            while( true ) {
              plVar20 = (long *)plVar19[2];
              if (((*PTR_DAT_0437c668 & 1) == 0) &&
                 (iVar7 = __cxa_guard_acquire(PTR_DAT_0437c668), iVar7 != 0)) {
                if (((*PTR_DAT_043794d0 & 1) == 0) &&
                   (iVar7 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar7 != 0)) {
                  uVar10 = FUN_0087f8f0();
                  *(undefined8 *)PTR_DAT_043794d8 = uVar10;
                  __cxa_guard_release(PTR_DAT_043794d0);
                }
                *(undefined **)PTR_DAT_0437c670 = PTR_DAT_043794d8;
                __cxa_guard_release(PTR_DAT_0437c668);
              }
              while( true ) {
                if (plVar20 == (long *)0x0) goto LAB_019076e4;
                if (plVar20 == (long *)PTR_DAT_0437c670) break;
                plVar20 = (long *)*plVar20;
              }
              iVar7 = *piVar2;
              if (iVar7 == iVar5) break;
              ClearExclusiveLocal();
LAB_0190756c:
              iVar5 = iVar7;
              if (iVar7 == 0) goto LAB_019076e4;
            }
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar4) {
              *piVar2 = iVar5 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 != '\0') goto LAB_0190756c;
            lVar17 = plVar19[3];
            plVar19 = (long *)0x0;
            plVar20 = local_218[0];
            if (lVar17 != 0) {
              plVar19 = (long *)(lVar17 + -0x50);
            }
          }
          local_218[0] = plVar20;
          if (plVar20 != (long *)0x0) {
            plVar8 = plVar20 + 1;
            do {
              iVar5 = (int)*plVar8 + -1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
              if (bVar4) {
                *(int *)plVar8 = iVar5;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar5 == 0) {
              plVar20[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar17 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar17;
              local_70[0] = *plVar20;
              FUN_02a44274(lVar17 + 0xd8,local_70);
            }
          }
          if (plVar19 == (long *)0x0) goto LAB_01907508;
          plVar20 = (long *)plVar19[0xe];
          if (plVar20 != (long *)0x0) {
            lVar17 = plVar20[0xb];
            if (*(undefined8 **)(lVar17 + 0x18) == (undefined8 *)0x0) goto LAB_01907674;
            if (*(long *)(lVar17 + 0x10) == 0) {
              uVar10 = (**(code **)**(undefined8 **)(lVar17 + 0x18))();
              *(undefined8 *)(lVar17 + 0x10) = uVar10;
            }
            piVar2 = (int *)(lVar17 + 0xc);
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar4) {
                *piVar2 = *piVar2 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          goto LAB_0190692c;
        }
      }
      plVar18 = (long *)0x0;
LAB_019074f8:
      plVar19 = (long *)0x0;
    }
LAB_01907508:
    lVar17 = *param_2;
joined_r0x019072bc:
    plVar20 = (long *)0x0;
  }
  if (lVar17 != 0) {
    piVar2 = (int *)(lVar17 + 0x50);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = *piVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar8 = (long *)*param_1;
  *param_1 = lVar17;
  if (plVar8 == (long *)0x0) {
LAB_01906958:
    param_1[1] = param_3;
  }
  else {
    plVar9 = plVar8 + 10;
    do {
      iVar5 = (int)*plVar9 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *(int *)plVar9 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 != 0) goto LAB_01906958;
    (**(code **)(*plVar8 + 0x10))();
    param_1[1] = param_3;
  }
  if (plVar14 != (long *)0x0) {
    plVar8 = plVar14 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *(int *)plVar8 = (int)*plVar8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar9 = (long *)param_1[2];
  param_1[2] = (long)plVar14;
  plVar8 = local_80;
  if (plVar9 != (long *)0x0) {
    plVar1 = plVar9 + 10;
    do {
      iVar5 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar9 + 0x10))();
      plVar8 = local_80;
    }
  }
  local_80 = plVar8;
  if (plVar8 != (long *)0x0) {
    lVar17 = plVar8[0xb];
    if (*(undefined8 **)(lVar17 + 0x18) == (undefined8 *)0x0) goto LAB_01907674;
    if (*(long *)(lVar17 + 0x10) == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar17 + 0x18))();
      *(undefined8 *)(lVar17 + 0x10) = uVar10;
    }
    piVar2 = (int *)(lVar17 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = *piVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar9 = (long *)param_1[3];
  param_1[3] = (long)plVar8;
  plVar8 = local_88;
  if (plVar9 != (long *)0x0) {
    lVar17 = plVar9[0xb];
    piVar2 = (int *)(lVar17 + 0xc);
    do {
      iVar5 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 == 0) {
      *(undefined8 *)(lVar17 + 0x18) = 0;
      (**(code **)(*plVar9 + 0x20))();
      plVar8 = local_88;
    }
  }
  local_88 = plVar8;
  if (plVar8 != (long *)0x0) {
    lVar17 = plVar8[0xb];
    if (*(undefined8 **)(lVar17 + 0x18) == (undefined8 *)0x0) goto LAB_01907674;
    if (*(long *)(lVar17 + 0x10) == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar17 + 0x18))();
      *(undefined8 *)(lVar17 + 0x10) = uVar10;
    }
    piVar2 = (int *)(lVar17 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = *piVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar9 = (long *)param_1[4];
  param_1[4] = (long)plVar8;
  plVar8 = local_90;
  if (plVar9 != (long *)0x0) {
    lVar17 = plVar9[0xb];
    piVar2 = (int *)(lVar17 + 0xc);
    do {
      iVar5 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 == 0) {
      *(undefined8 *)(lVar17 + 0x18) = 0;
      (**(code **)(*plVar9 + 0x20))();
      plVar8 = local_90;
    }
  }
  local_90 = plVar8;
  if (plVar8 != (long *)0x0) {
    lVar17 = plVar8[0xb];
    if (*(undefined8 **)(lVar17 + 0x18) == (undefined8 *)0x0) goto LAB_01907674;
    if (*(long *)(lVar17 + 0x10) == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar17 + 0x18))();
      *(undefined8 *)(lVar17 + 0x10) = uVar10;
    }
    piVar2 = (int *)(lVar17 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = *piVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar9 = (long *)param_1[5];
  param_1[5] = (long)plVar8;
  plVar8 = local_98;
  if (plVar9 != (long *)0x0) {
    lVar17 = plVar9[0xb];
    piVar2 = (int *)(lVar17 + 0xc);
    do {
      iVar5 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 == 0) {
      *(undefined8 *)(lVar17 + 0x18) = 0;
      (**(code **)(*plVar9 + 0x20))();
      plVar8 = local_98;
    }
  }
  local_98 = plVar8;
  if (plVar8 != (long *)0x0) {
    lVar17 = plVar8[0xb];
    if (*(undefined8 **)(lVar17 + 0x18) == (undefined8 *)0x0) goto LAB_01907674;
    if (*(long *)(lVar17 + 0x10) == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar17 + 0x18))();
      *(undefined8 *)(lVar17 + 0x10) = uVar10;
    }
    piVar2 = (int *)(lVar17 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = *piVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar9 = (long *)param_1[6];
  param_1[6] = (long)plVar8;
  plVar8 = local_a0;
  if (plVar9 != (long *)0x0) {
    lVar17 = plVar9[0xb];
    piVar2 = (int *)(lVar17 + 0xc);
    do {
      iVar5 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 == 0) {
      *(undefined8 *)(lVar17 + 0x18) = 0;
      (**(code **)(*plVar9 + 0x20))();
      plVar8 = local_a0;
    }
  }
  local_a0 = plVar8;
  if (plVar8 != (long *)0x0) {
    lVar17 = plVar8[0xb];
    if (*(undefined8 **)(lVar17 + 0x18) == (undefined8 *)0x0) goto LAB_01907674;
    if (*(long *)(lVar17 + 0x10) == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar17 + 0x18))();
      *(undefined8 *)(lVar17 + 0x10) = uVar10;
    }
    piVar2 = (int *)(lVar17 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = *piVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar9 = (long *)param_1[7];
  param_1[7] = (long)plVar8;
  if (plVar9 == (long *)0x0) {
LAB_01906ba0:
    param_1[8] = lVar15;
  }
  else {
    lVar17 = plVar9[0xb];
    piVar2 = (int *)(lVar17 + 0xc);
    do {
      iVar5 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 != 0) goto LAB_01906ba0;
    *(undefined8 *)(lVar17 + 0x18) = 0;
    (**(code **)(*plVar9 + 0x20))();
    param_1[8] = lVar15;
  }
  if (plVar20 != (long *)0x0) {
    lVar17 = plVar20[0xb];
    if (*(undefined8 **)(lVar17 + 0x18) == (undefined8 *)0x0) {
LAB_01907674:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar17 + 0x10) == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar17 + 0x18))();
      *(undefined8 *)(lVar17 + 0x10) = uVar10;
    }
    piVar2 = (int *)(lVar17 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = *piVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar8 = (long *)param_1[9];
  param_1[9] = (long)plVar20;
  if (plVar8 == (long *)0x0) {
LAB_01906c08:
    lVar17 = *param_2;
    if (lVar17 == 0) goto joined_r0x01907040;
LAB_01906ebc:
    if (plVar20 == (long *)0x0) {
LAB_01907008:
      plVar8 = local_88;
      if ((local_88 != (long *)0x0) && (local_90 != (long *)0x0)) {
        uVar6 = FUN_02c6849c(*(undefined8 *)(lVar17 + 0x98));
        if ((int)uVar6 < 0x3d5) {
          sVar13 = *(short *)((long)plVar8 + (ulong)uVar6 * 0x58 + 0xe6);
        }
        else {
          sVar13 = 0;
        }
        *(bool *)(param_1 + 0xc) = sVar13 != 0;
      }
      goto joined_r0x01907040;
    }
    FUN_0199d60c(local_218,plVar20);
    if (local_218[0] == (long *)0x0) {
      local_78 = (long *)0x0;
LAB_01906ed8:
      if (local_78 == (long *)0x0) goto LAB_01907000;
LAB_01906ee0:
      iVar5 = FUN_02c73a80(*(undefined8 *)(*param_2 + 0x98));
      plVar8 = local_78;
      if (((*PTR_DAT_043795f8 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_043795f8), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_0437b168,PTR_DAT_04379600,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_043795f8);
      }
      lVar17 = *(long *)PTR_DAT_04379600;
      *(long *)PTR_DAT_04379608 = lVar17;
      if (iVar5 == 0) {
LAB_01906f50:
        uVar12 = 0;
      }
      else {
        lVar17 = *(long *)(lVar17 + 0x80);
        if ((uint)*(byte *)(lVar17 + 0x19) <= (iVar5 - 1U & 0xff)) goto LAB_01906f50;
        uVar12 = *(undefined2 *)
                  (lVar17 + (ulong)*(ushort *)(lVar17 + 2) * 2 + (ulong)*(byte *)(lVar17 + 8) * 2 +
                   (ulong)(byte)(iVar5 - 1U) * 2 + 0x36c);
      }
      FUN_01918414(local_218,plVar8,uVar12);
      *(int *)(param_1 + 10) = iVar5;
      *(undefined4 *)((long)param_1 + 0x54) = local_1c4;
      if (local_100 != (long *)0x0) {
        (**(code **)(*local_100 + 0x20))();
      }
      if (local_120 != (long *)0x0) {
        (**(code **)(*local_120 + 0x20))();
      }
      if (local_140 != (long *)0x0) {
        (**(code **)(*local_140 + 0x20))();
      }
      if (local_160 != (long *)0x0) {
        (**(code **)(*local_160 + 0x20))();
      }
      if (local_180 != (long *)0x0) {
        (**(code **)(*local_180 + 0x20))();
      }
      if (local_1a0 != (long *)0x0) {
        (**(code **)(*local_1a0 + 0x20))();
      }
      if (local_78 == (long *)0x0) goto LAB_01907000;
      lVar17 = local_78[0xb];
      piVar2 = (int *)(lVar17 + 0xc);
      do {
        iVar5 = *piVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar5 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 + -1 != 0) goto LAB_01907000;
      *(undefined8 *)(lVar17 + 0x18) = 0;
      (**(code **)(*local_78 + 0x20))();
      lVar17 = *param_2;
    }
    else {
      FUN_011a5e18(&local_78);
      if (local_218[0] == (long *)0x0) goto LAB_01906ed8;
      plVar8 = local_218[0] + 1;
      do {
        iVar5 = (int)*plVar8 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar4) {
          *(int *)plVar8 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 != 0) goto LAB_01906ed8;
      local_218[0][2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar17 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar17;
      local_70[0] = *local_218[0];
      FUN_02a44274(lVar17 + 0xd8,local_70);
      if (local_78 != (long *)0x0) goto LAB_01906ee0;
LAB_01907000:
      lVar17 = *param_2;
    }
    if (lVar17 != 0) goto LAB_01907008;
  }
  else {
    lVar17 = plVar8[0xb];
    piVar2 = (int *)(lVar17 + 0xc);
    do {
      iVar5 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 != 0) goto LAB_01906c08;
    *(undefined8 *)(lVar17 + 0x18) = 0;
    (**(code **)(*plVar8 + 0x20))();
    lVar17 = *param_2;
    if (lVar17 != 0) goto LAB_01906ebc;
joined_r0x01907040:
    if (plVar20 == (long *)0x0) goto joined_r0x01906c30;
  }
  lVar17 = plVar20[0xb];
  piVar2 = (int *)(lVar17 + 0xc);
  do {
    iVar5 = *piVar2;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
    if (bVar4) {
      *piVar2 = iVar5 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar5 + -1 == 0) {
    *(undefined8 *)(lVar17 + 0x18) = 0;
    (**(code **)(*plVar20 + 0x20))(plVar20);
  }
joined_r0x01906c30:
  if (plVar19 != (long *)0x0) {
    lVar17 = plVar19[0xb];
    piVar2 = (int *)(lVar17 + 0xc);
    do {
      iVar5 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 == 0) {
      *(undefined8 *)(lVar17 + 0x18) = 0;
      (**(code **)(*plVar19 + 0x20))(plVar19);
    }
  }
  if (plVar18 != (long *)0x0) {
    lVar17 = plVar18[0xb];
    piVar2 = (int *)(lVar17 + 0xc);
    do {
      iVar5 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 == 0) {
      *(undefined8 *)(lVar17 + 0x18) = 0;
      (**(code **)(*plVar18 + 0x20))(plVar18);
    }
  }
  if (plVar16 != (long *)0x0) {
    lVar17 = plVar16[0xb];
    piVar2 = (int *)(lVar17 + 0xc);
    do {
      iVar5 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 == 0) {
      *(undefined8 *)(lVar17 + 0x18) = 0;
      (**(code **)(*plVar16 + 0x20))(plVar16);
    }
  }
  if (local_a0 != (long *)0x0) {
    lVar17 = *(long *)((long)local_a0 + 0x58);
    piVar2 = (int *)(lVar17 + 0xc);
    do {
      iVar5 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 == 0) {
      *(undefined8 *)(lVar17 + 0x18) = 0;
      (**(code **)(*local_a0 + 0x20))();
    }
  }
  if (local_98 != (long *)0x0) {
    lVar17 = *(long *)((long)local_98 + 0x58);
    piVar2 = (int *)(lVar17 + 0xc);
    do {
      iVar5 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 == 0) {
      *(undefined8 *)(lVar17 + 0x18) = 0;
      (**(code **)(*local_98 + 0x20))();
    }
  }
  if (local_90 != (long *)0x0) {
    lVar17 = *(long *)((long)local_90 + 0x58);
    piVar2 = (int *)(lVar17 + 0xc);
    do {
      iVar5 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 == 0) {
      *(undefined8 *)(lVar17 + 0x18) = 0;
      (**(code **)(*local_90 + 0x20))();
    }
  }
  if (local_88 != (long *)0x0) {
    lVar17 = local_88[0xb];
    piVar2 = (int *)(lVar17 + 0xc);
    do {
      iVar5 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 == 0) {
      *(undefined8 *)(lVar17 + 0x18) = 0;
      (**(code **)(*local_88 + 0x20))();
    }
  }
  if (local_80 != (long *)0x0) {
    lVar17 = local_80[0xb];
    piVar2 = (int *)(lVar17 + 0xc);
    do {
      iVar5 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 == 0) {
      *(undefined8 *)(lVar17 + 0x18) = 0;
      (**(code **)(*local_80 + 0x20))();
    }
  }
  if (plVar14 != (long *)0x0) {
    plVar16 = plVar14 + 10;
    do {
      iVar5 = (int)*plVar16 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar4) {
        *(int *)plVar16 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
    }
  }
  if (local_220 != (long *)0x0) {
    plVar14 = local_220 + 10;
    do {
      iVar5 = (int)*plVar14 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar4) {
        *(int *)plVar14 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*local_220 + 0x10))();
    }
  }
  return;
LAB_0190743c:
  puVar11 = (undefined8 *)*puVar11;
  plVar18 = (long *)0x0;
  if (puVar11 == (undefined8 *)0x0) goto LAB_0190729c;
  goto LAB_01907258;
}


