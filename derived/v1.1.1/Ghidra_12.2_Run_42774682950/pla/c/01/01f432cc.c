/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f432cc; name: FUN_01f432cc
 */


void FUN_01f432cc(long param_1,undefined8 *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long *plVar5;
  long *plVar6;
  byte *pbVar7;
  undefined8 *puVar8;
  byte *pbVar9;
  long *plVar10;
  long *plVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  int iVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long *local_88;
  undefined8 *local_80;
  undefined8 uStack_78;
  undefined4 local_6c;
  long *local_68;
  
  puVar15 = PTR_LAB_04379590;
  puVar14 = PTR_DAT_043794a8;
  puVar13 = PTR_DAT_043794a0;
  puVar12 = PTR_DAT_04379498;
  lVar20 = *(long *)(param_1 + 0x338);
  puVar4 = PTR_LAB_04379590;
  plVar5 = (long *)PTR_DAT_043794a8;
  plVar6 = (long *)PTR_DAT_043794a0;
  pbVar7 = PTR_DAT_04379498;
  for (lVar18 = *(long *)(param_1 + 0x330); lVar18 != lVar20; lVar18 = lVar18 + 0x10) {
    local_80 = (undefined8 *)0x0;
    uStack_78 = 0;
    PTR_DAT_04379498 = pbVar7;
    PTR_DAT_043794a0 = (undefined *)plVar6;
    PTR_DAT_043794a8 = (undefined *)plVar5;
    PTR_LAB_04379590 = puVar4;
    FUN_01f4e8c4(&local_80,lVar18);
    if (local_80 != (undefined8 *)0x0) {
      FUN_01f4eb34(&local_88);
      plVar5 = local_88;
      puVar8 = local_80;
      if (local_88 != (long *)0x0) {
        lVar19 = local_88[0xb];
        if (*(undefined8 **)(lVar19 + 0x18) == (undefined8 *)0x0) goto LAB_01f43948;
        if (*(long *)(lVar19 + 0x10) == 0) {
          uVar17 = (**(code **)**(undefined8 **)(lVar19 + 0x18))();
          *(undefined8 *)(lVar19 + 0x10) = uVar17;
        }
        piVar1 = (int *)(lVar19 + 0xc);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        lVar19 = plVar5[0xb];
        local_68 = plVar5;
        if (*(undefined8 **)(lVar19 + 0x18) == (undefined8 *)0x0) goto LAB_01f43948;
        if (*(long *)(lVar19 + 0x10) == 0) {
          uVar17 = (**(code **)**(undefined8 **)(lVar19 + 0x18))();
          *(undefined8 *)(lVar19 + 0x10) = uVar17;
        }
        piVar1 = (int *)(lVar19 + 0xc);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        local_6c = 0;
        (*(code *)*param_2)(param_2 + 4,&local_68,&local_6c);
        if (local_68 != (long *)0x0) {
          lVar19 = local_68[0xb];
          piVar1 = (int *)(lVar19 + 0xc);
          do {
            iVar16 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar16 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar16 + -1 == 0) {
            *(undefined8 *)(lVar19 + 0x18) = 0;
            (**(code **)(*local_68 + 0x20))();
          }
        }
        lVar19 = plVar5[0xb];
        piVar1 = (int *)(lVar19 + 0xc);
        do {
          iVar16 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar16 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar16 + -1 == 0) {
          *(undefined8 *)(lVar19 + 0x18) = 0;
          (**(code **)(*plVar5 + 0x20))(plVar5);
        }
        puVar8 = local_80;
        if (local_88 != (long *)0x0) {
          lVar19 = local_88[0xb];
          piVar1 = (int *)(lVar19 + 0xc);
          do {
            iVar16 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar16 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar16 + -1 == 0) {
            *(undefined8 *)(lVar19 + 0x18) = 0;
            (**(code **)(*local_88 + 0x20))();
            puVar8 = local_80;
          }
        }
      }
      if (puVar8 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar8 + 1);
        do {
          iVar16 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar16 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar16 + -1 == 0) {
          puVar8[2] = 0;
          local_80 = puVar8;
          if (((*puVar12 & 1) == 0) && (iVar16 = __cxa_guard_acquire(puVar12), iVar16 != 0)) {
            FUN_00100250(puVar15,puVar13,&PTR_LOOP_0411a000);
            __cxa_guard_release(puVar12);
          }
          lVar19 = *(long *)puVar13;
          *(long *)puVar14 = lVar19;
          local_68 = (long *)*puVar8;
          FUN_02a44274(lVar19 + 0xd8,&local_68);
        }
      }
    }
    puVar4 = PTR_LAB_04379590;
    plVar5 = (long *)PTR_DAT_043794a8;
    plVar6 = (long *)PTR_DAT_043794a0;
    pbVar7 = PTR_DAT_04379498;
  }
  lVar20 = *(long *)(param_1 + 0x370);
  pbVar9 = pbVar7;
  plVar10 = plVar6;
  plVar11 = plVar5;
  puVar12 = puVar4;
  for (lVar18 = *(long *)(param_1 + 0x368); PTR_DAT_04379498 = pbVar9,
      PTR_DAT_043794a0 = (undefined *)plVar10, PTR_DAT_043794a8 = (undefined *)plVar11,
      PTR_LAB_04379590 = puVar12, lVar18 != lVar20; lVar18 = lVar18 + 0x10) {
    local_80 = (undefined8 *)0x0;
    uStack_78 = 0;
    FUN_01f4e8c4(&local_80,lVar18);
    if (local_80 != (undefined8 *)0x0) {
      FUN_01f4eb34(&local_88);
      plVar10 = local_88;
      puVar8 = local_80;
      if (local_88 != (long *)0x0) {
        lVar19 = local_88[0xb];
        if (*(undefined8 **)(lVar19 + 0x18) == (undefined8 *)0x0) goto LAB_01f43948;
        if (*(long *)(lVar19 + 0x10) == 0) {
          uVar17 = (**(code **)**(undefined8 **)(lVar19 + 0x18))();
          *(undefined8 *)(lVar19 + 0x10) = uVar17;
        }
        piVar1 = (int *)(lVar19 + 0xc);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        local_68 = plVar10;
        lVar19 = plVar10[0xb];
        if (*(undefined8 **)(lVar19 + 0x18) == (undefined8 *)0x0) goto LAB_01f43948;
        if (*(long *)(lVar19 + 0x10) == 0) {
          uVar17 = (**(code **)**(undefined8 **)(lVar19 + 0x18))();
          *(undefined8 *)(lVar19 + 0x10) = uVar17;
        }
        piVar1 = (int *)(lVar19 + 0xc);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        local_6c = 1;
        (*(code *)*param_2)(param_2 + 4,&local_68,&local_6c);
        if (local_68 != (long *)0x0) {
          lVar19 = local_68[0xb];
          piVar1 = (int *)(lVar19 + 0xc);
          do {
            iVar16 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar16 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar16 + -1 == 0) {
            *(undefined8 *)(lVar19 + 0x18) = 0;
            (**(code **)(*local_68 + 0x20))();
          }
        }
        lVar19 = plVar10[0xb];
        piVar1 = (int *)(lVar19 + 0xc);
        do {
          iVar16 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar16 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar16 + -1 == 0) {
          *(undefined8 *)(lVar19 + 0x18) = 0;
          (**(code **)(*plVar10 + 0x20))();
        }
        puVar8 = local_80;
        if (local_88 != (long *)0x0) {
          lVar19 = local_88[0xb];
          piVar1 = (int *)(lVar19 + 0xc);
          do {
            iVar16 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar16 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar16 + -1 == 0) {
            *(undefined8 *)(lVar19 + 0x18) = 0;
            (**(code **)(*local_88 + 0x20))();
            puVar8 = local_80;
          }
        }
      }
      if (puVar8 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar8 + 1);
        do {
          iVar16 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar16 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar16 + -1 == 0) {
          puVar8[2] = 0;
          local_80 = puVar8;
          if (((*pbVar7 & 1) == 0) && (iVar16 = __cxa_guard_acquire(pbVar7), iVar16 != 0)) {
            FUN_00100250(puVar4,plVar6,&PTR_LOOP_0411a000);
            __cxa_guard_release(pbVar7);
          }
          lVar19 = *plVar6;
          *plVar5 = lVar19;
          local_68 = (long *)*puVar8;
          FUN_02a44274(lVar19 + 0xd8,&local_68);
        }
      }
    }
    pbVar9 = PTR_DAT_04379498;
    plVar10 = (long *)PTR_DAT_043794a0;
    plVar11 = (long *)PTR_DAT_043794a8;
    puVar12 = PTR_LAB_04379590;
  }
  lVar18 = *(long *)(param_1 + 0x3a0);
  lVar20 = *(long *)(param_1 + 0x3a8);
  do {
    if (lVar18 == lVar20) {
      return;
    }
    local_80 = (undefined8 *)0x0;
    uStack_78 = 0;
    FUN_01f4e8c4(&local_80,lVar18);
    if (local_80 != (undefined8 *)0x0) {
      FUN_01f4eb34(&local_88);
      plVar5 = local_88;
      puVar8 = local_80;
      if (local_88 != (long *)0x0) {
        lVar19 = local_88[0xb];
        if (*(undefined8 **)(lVar19 + 0x18) == (undefined8 *)0x0) {
LAB_01f43948:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl("","","",0);
        }
        if (*(long *)(lVar19 + 0x10) == 0) {
          uVar17 = (**(code **)**(undefined8 **)(lVar19 + 0x18))();
          *(undefined8 *)(lVar19 + 0x10) = uVar17;
        }
        piVar1 = (int *)(lVar19 + 0xc);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        local_68 = plVar5;
        lVar19 = plVar5[0xb];
        if (*(undefined8 **)(lVar19 + 0x18) == (undefined8 *)0x0) goto LAB_01f43948;
        if (*(long *)(lVar19 + 0x10) == 0) {
          uVar17 = (**(code **)**(undefined8 **)(lVar19 + 0x18))();
          *(undefined8 *)(lVar19 + 0x10) = uVar17;
        }
        piVar1 = (int *)(lVar19 + 0xc);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        local_6c = 2;
        (*(code *)*param_2)(param_2 + 4,&local_68,&local_6c);
        if (local_68 != (long *)0x0) {
          lVar19 = local_68[0xb];
          piVar1 = (int *)(lVar19 + 0xc);
          do {
            iVar16 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar16 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar16 + -1 == 0) {
            *(undefined8 *)(lVar19 + 0x18) = 0;
            (**(code **)(*local_68 + 0x20))();
          }
        }
        lVar19 = plVar5[0xb];
        piVar1 = (int *)(lVar19 + 0xc);
        do {
          iVar16 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar16 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar16 + -1 == 0) {
          *(undefined8 *)(lVar19 + 0x18) = 0;
          (**(code **)(*plVar5 + 0x20))();
        }
        puVar8 = local_80;
        if (local_88 != (long *)0x0) {
          lVar19 = local_88[0xb];
          piVar1 = (int *)(lVar19 + 0xc);
          do {
            iVar16 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar16 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar16 + -1 == 0) {
            *(undefined8 *)(lVar19 + 0x18) = 0;
            (**(code **)(*local_88 + 0x20))();
            puVar8 = local_80;
          }
        }
      }
      if (puVar8 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar8 + 1);
        do {
          iVar16 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar16 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar16 + -1 == 0) {
          puVar8[2] = 0;
          local_80 = puVar8;
          if (((*pbVar9 & 1) == 0) && (iVar16 = __cxa_guard_acquire(pbVar9), iVar16 != 0)) {
            FUN_00100250(puVar12,plVar10,&PTR_LOOP_0411a000);
            __cxa_guard_release(pbVar9);
          }
          lVar19 = *plVar10;
          *plVar11 = lVar19;
          local_68 = (long *)*puVar8;
          FUN_02a44274(lVar19 + 0xd8,&local_68);
        }
      }
    }
    lVar18 = lVar18 + 0x10;
  } while( true );
}


