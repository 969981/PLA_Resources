/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00db9920; name: FUN_00db9920
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00db9920(long *param_1)

{
  long *plVar1;
  long *plVar2;
  int *piVar3;
  long *plVar4;
  char cVar5;
  bool bVar6;
  undefined8 *puVar7;
  bool bVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  undefined8 *local_c8;
  undefined8 uStack_c0;
  undefined8 *local_b8;
  undefined8 uStack_b0;
  long *local_a8;
  undefined8 uStack_a0;
  long *local_98;
  undefined8 uStack_90;
  long *local_88;
  undefined8 uStack_80;
  long *local_78;
  undefined8 uStack_70;
  long *local_68;
  undefined8 uStack_60;
  long *local_58;
  undefined8 uStack_50;
  long *local_48;
  undefined8 uStack_40;
  long local_38;
  
  local_48 = (long *)0x0;
  uStack_40 = 0;
  plVar12 = param_1 + 0xd;
  lVar11 = *plVar12;
  switch(*(undefined4 *)(lVar11 + 0x30)) {
  case 0:
    if (*(long *)(lVar11 + 0x40) != 0) {
      FUN_00dbd99c(&local_58);
      if (local_58 == (long *)0x0) {
        lVar11 = *plVar12;
        if (*(int *)(lVar11 + 0x38) != 0) goto LAB_00db997c;
      }
      else {
        lVar11 = local_58[0xb];
        piVar3 = (int *)(lVar11 + 0xc);
        do {
          iVar9 = *piVar3;
          cVar5 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar8) {
            *piVar3 = iVar9 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar9 + -1 == 0) {
          *(undefined8 *)(lVar11 + 0x18) = 0;
          (**(code **)(*local_58 + 0x20))();
          plVar4 = local_48;
          goto joined_r0x00dba488;
        }
      }
      break;
    }
    local_58 = (long *)0x0;
    if (*(int *)(lVar11 + 0x38) == 0) break;
LAB_00db997c:
    *(undefined4 *)(lVar11 + 0x38) = 0;
    plVar4 = local_48;
    goto joined_r0x00dba488;
  case 1:
    if (*(long *)(lVar11 + 0x40) == 0) {
LAB_00db9b18:
      local_58 = (long *)0x0;
    }
    else {
      FUN_00dbd99c(&local_58);
      if (local_58 != (long *)0x0) {
        lVar11 = local_58[0xb];
        piVar3 = (int *)(lVar11 + 0xc);
        do {
          iVar9 = *piVar3;
          cVar5 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar8) {
            *piVar3 = iVar9 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar9 + -1 == 0) {
          *(undefined8 *)(lVar11 + 0x18) = 0;
          (**(code **)(*local_58 + 0x20))();
        }
        if (*(long *)(*plVar12 + 0x50) == 0) {
          local_58 = (long *)0x0;
          plVar4 = local_48;
          goto joined_r0x00dba488;
        }
        FUN_00dbd99c(&local_58);
        if (local_58 != (long *)0x0) {
          lVar11 = local_58[0xb];
          piVar3 = (int *)(lVar11 + 0xc);
          do {
            iVar9 = *piVar3;
            cVar5 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar8) {
              *piVar3 = iVar9 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar9 + -1 == 0) {
            *(undefined8 *)(lVar11 + 0x18) = 0;
            (**(code **)(*local_58 + 0x20))();
          }
          goto LAB_00db9b20;
        }
        break;
      }
LAB_00dba490:
      lVar11 = *plVar12;
    }
    *(undefined4 *)(lVar11 + 0x38) = 0;
    goto LAB_00db9b20;
  case 2:
    if (*(long *)(lVar11 + 0x40) == 0) goto LAB_00db9b18;
    FUN_00dbd99c(&local_58);
    if (local_58 == (long *)0x0) goto LAB_00dba490;
    lVar11 = local_58[0xb];
    piVar3 = (int *)(lVar11 + 0xc);
    do {
      iVar9 = *piVar3;
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar8) {
        *piVar3 = iVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*local_58 + 0x20))();
    }
    local_58 = (long *)0x0;
    uStack_50 = 0;
    FUN_00dbd99c(&local_88,*(undefined8 *)(*plVar12 + 0x40));
    local_68 = (long *)0x0;
    uStack_60 = 0;
    FUN_00dbd724(&local_68,local_88[0xd] + 0x100);
    if (local_88 != (long *)0x0) {
      lVar11 = local_88[0xb];
      piVar3 = (int *)(lVar11 + 0xc);
      do {
        iVar9 = *piVar3;
        cVar5 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar8) {
          *piVar3 = iVar9 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar9 + -1 == 0) goto LAB_00dbaf70;
    }
LAB_00db9a10:
    if (local_68 != (long *)0x0) {
      while( true ) {
        FUN_00dbd99c(&local_88);
        if (local_88 == (long *)0x0) goto LAB_00db9a1c;
        lVar11 = local_88[0xb];
        piVar3 = (int *)(lVar11 + 0xc);
        do {
          iVar9 = *piVar3;
          cVar5 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar8) {
            *piVar3 = iVar9 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar9 + -1 == 0) {
          *(undefined8 *)(lVar11 + 0x18) = 0;
          (**(code **)(*local_88 + 0x20))();
        }
        FUN_00dbd724(&local_58,&local_68);
        FUN_00dbd99c(&local_88,local_68);
        FUN_00dbd724(&local_68,local_88[0xd] + 0xf0);
        if (local_88 == (long *)0x0) break;
        lVar11 = local_88[0xb];
        piVar3 = (int *)(lVar11 + 0xc);
        do {
          iVar9 = *piVar3;
          cVar5 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar8) {
            *piVar3 = iVar9 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar9 + -1 != 0) break;
LAB_00dbaf70:
        *(undefined8 *)(lVar11 + 0x18) = 0;
        (**(code **)(*local_88 + 0x20))();
        if (local_68 == (long *)0x0) goto LAB_00db9a18;
      }
      goto LAB_00db9a10;
    }
LAB_00db9a18:
    local_88 = (long *)0x0;
LAB_00db9a1c:
    FUN_00dbd724(*plVar12 + 0x50,&local_58);
    plVar4 = local_68;
    if (local_68 != (long *)0x0) {
      plVar1 = local_68 + 1;
      do {
        iVar9 = (int)*plVar1 + -1;
        cVar5 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar8) {
          *(int *)plVar1 = iVar9;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar9 == 0) {
        local_68[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar11 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar11;
        local_88 = (long *)*plVar4;
        FUN_02a44274(lVar11 + 0xd8,&local_88);
      }
    }
    plVar4 = local_58;
    if (local_58 != (long *)0x0) {
      plVar1 = local_58 + 1;
      do {
        iVar9 = (int)*plVar1 + -1;
        cVar5 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar8) {
          *(int *)plVar1 = iVar9;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar9 == 0) {
        local_58[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar11 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar11;
        local_68 = (long *)*plVar4;
        FUN_02a44274(lVar11 + 0xd8,&local_68);
        plVar4 = local_48;
        goto joined_r0x00dba488;
      }
    }
    break;
  case 3:
    *(undefined4 *)(lVar11 + 0x38) = 0;
    FUN_00dbd724(*plVar12 + 0x40,&local_48);
LAB_00db9b20:
    FUN_00dbd724(*plVar12 + 0x50,&local_48);
  }
  plVar4 = local_48;
joined_r0x00dba488:
  local_48 = plVar4;
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
    do {
      iVar9 = (int)*plVar1 + -1;
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *(int *)plVar1 = iVar9;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar9 == 0) {
      plVar4[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar11 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar11;
      local_58 = (long *)*plVar4;
      FUN_02a44274(lVar11 + 0xd8,&local_58);
    }
  }
  if ((*(long *)*plVar12 != 0) && (uVar10 = FUN_02a43a8c(), (uVar10 & 1) == 0)) {
    if (*(long *)*plVar12 == 0) {
      local_68 = (long *)0x0;
    }
    else {
      FUN_00dbdb10(&local_68);
    }
    plVar4 = local_68;
    (**(code **)(*param_1 + 0x10))(&local_48,param_1);
    local_78 = (long *)0x0;
    uStack_70 = 0;
    FUN_00dbc824(&local_78,&local_48);
    plVar1 = local_48;
    if (local_48 != (long *)0x0) {
      plVar2 = local_48 + 1;
      do {
        iVar9 = (int)*plVar2 + -1;
        cVar5 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar8) {
          *(int *)plVar2 = iVar9;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar9 == 0) {
        local_48[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar11 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar11;
        local_58 = (long *)*plVar1;
        FUN_02a44274(lVar11 + 0xd8,&local_58);
      }
    }
    FUN_00dc18c8(plVar4,&local_78);
    plVar4 = local_78;
    if (local_78 != (long *)0x0) {
      plVar1 = local_78 + 1;
      do {
        iVar9 = (int)*plVar1 + -1;
        cVar5 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar8) {
          *(int *)plVar1 = iVar9;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar9 == 0) {
        local_78[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar11 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar11;
        local_48 = (long *)*plVar4;
        FUN_02a44274(lVar11 + 0xd8,&local_48);
      }
    }
    if (local_68 != (long *)0x0) {
      lVar11 = local_68[0xb];
      piVar3 = (int *)(lVar11 + 0xc);
      do {
        iVar9 = *piVar3;
        cVar5 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar8) {
          *piVar3 = iVar9 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar9 + -1 == 0) {
        *(undefined8 *)(lVar11 + 0x18) = 0;
        (**(code **)(*local_68 + 0x20))();
      }
    }
  }
  if (((long *)*plVar12)[8] == 0) {
    local_48 = (long *)0x0;
    lVar11 = *(long *)*plVar12;
joined_r0x00dba2fc:
    if ((lVar11 != 0) && (uVar10 = FUN_02a43a8c(), (uVar10 & 1) == 0)) {
      if (*(long *)*plVar12 == 0) {
        local_68 = (long *)0x0;
      }
      else {
        FUN_00dbdb10(&local_68);
      }
      plVar4 = local_68;
      (**(code **)(*param_1 + 0x10))(&local_48,param_1);
      local_c8 = (undefined8 *)0x0;
      uStack_c0 = 0;
      FUN_00dbc824(&local_c8,&local_48);
      plVar1 = local_48;
      if (local_48 != (long *)0x0) {
        plVar2 = local_48 + 1;
        do {
          iVar9 = (int)*plVar2 + -1;
          cVar5 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar8) {
            *(int *)plVar2 = iVar9;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar9 == 0) {
          local_48[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar11 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar11;
          local_58 = (long *)*plVar1;
          FUN_02a44274(lVar11 + 0xd8,&local_58);
        }
      }
      FUN_00dc23c4(plVar4,&local_c8);
      puVar7 = local_c8;
      if (local_c8 != (undefined8 *)0x0) {
        piVar3 = (int *)(local_c8 + 1);
        do {
          iVar9 = *piVar3;
          cVar5 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar8) {
            *piVar3 = iVar9 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar9 + -1 == 0) {
          local_c8[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar11 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar11;
          local_48 = (long *)*puVar7;
          FUN_02a44274(lVar11 + 0xd8,&local_48);
        }
      }
      if (local_68 != (long *)0x0) {
        lVar11 = local_68[0xb];
        piVar3 = (int *)(lVar11 + 0xc);
        do {
          iVar9 = *piVar3;
          cVar5 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar8) {
            *piVar3 = iVar9 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar9 + -1 == 0) {
          *(undefined8 *)(lVar11 + 0x18) = 0;
          (**(code **)(*local_68 + 0x20))();
        }
      }
    }
  }
  else {
    FUN_00dbd99c(&local_48);
    if (local_48 == (long *)0x0) {
      lVar11 = *(long *)*plVar12;
      goto joined_r0x00dba2fc;
    }
    lVar11 = local_48[0xb];
    piVar3 = (int *)(lVar11 + 0xc);
    do {
      iVar9 = *piVar3;
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar8) {
        *piVar3 = iVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*local_48 + 0x20))();
    }
    local_58 = (long *)0x0;
    uStack_50 = 0;
    FUN_00dbd99c(&local_68,*(undefined8 *)(*plVar12 + 0x40));
    if (*(long *)(local_68[0xd] + 0x100) == 0) {
      local_48 = (long *)0x0;
LAB_00db9f18:
      bVar8 = true;
      if (local_68 == (long *)0x0) goto LAB_00db9f40;
LAB_00db9f24:
      lVar11 = local_68[0xb];
      piVar3 = (int *)(lVar11 + 0xc);
      do {
        iVar9 = *piVar3;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar6) {
          *piVar3 = iVar9 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar9 + -1 != 0) goto LAB_00db9f40;
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*local_68 + 0x20))();
      if (!bVar8) goto LAB_00dba4e4;
LAB_00db9f44:
      (**(code **)(*param_1 + 0x10))(&local_48,param_1);
      local_68 = (long *)0x0;
      uStack_60 = 0;
      FUN_00dbc824(&local_68,&local_48);
      plVar4 = local_48;
      if (local_48 != (long *)0x0) {
        plVar1 = local_48 + 1;
        do {
          iVar9 = (int)*plVar1 + -1;
          cVar5 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar8) {
            *(int *)plVar1 = iVar9;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar9 == 0) {
          local_48[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar11 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar11;
          local_88 = (long *)*plVar4;
          FUN_02a44274(lVar11 + 0xd8,&local_88);
        }
      }
      FUN_00dbd99c(&local_48,*(undefined8 *)(*plVar12 + 0x40));
      FUN_00dbdc54(local_48[0xd] + 0x100,&local_68);
      plVar4 = local_68;
      if (local_48 != (long *)0x0) {
        lVar11 = local_48[0xb];
        piVar3 = (int *)(lVar11 + 0xc);
        do {
          iVar9 = *piVar3;
          cVar5 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar8) {
            *piVar3 = iVar9 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar9 + -1 == 0) {
          *(undefined8 *)(lVar11 + 0x18) = 0;
          (**(code **)(*local_48 + 0x20))();
          plVar4 = local_68;
        }
      }
      local_68 = plVar4;
      if (plVar4 != (long *)0x0) {
        plVar1 = plVar4 + 1;
        do {
          iVar9 = (int)*plVar1 + -1;
          cVar5 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar8) {
            *(int *)plVar1 = iVar9;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar9 == 0) {
          plVar4[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar11 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar11;
          local_48 = (long *)*plVar4;
          FUN_02a44274(lVar11 + 0xd8,&local_48);
        }
      }
      (**(code **)(*param_1 + 0x10))(&local_48,param_1);
      local_68 = (long *)0x0;
      uStack_60 = 0;
      FUN_00dbc824(&local_68,&local_48);
      plVar4 = local_48;
      if (local_48 != (long *)0x0) {
        plVar1 = local_48 + 1;
        do {
          iVar9 = (int)*plVar1 + -1;
          cVar5 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar8) {
            *(int *)plVar1 = iVar9;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar9 == 0) {
          local_48[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar11 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar11;
          local_88 = (long *)*plVar4;
          FUN_02a44274(lVar11 + 0xd8,&local_88);
        }
      }
      FUN_00dbd99c(&local_48,*(undefined8 *)(*plVar12 + 0x40));
      FUN_00dbdc54(local_48[0xd] + 0x110,&local_68);
      plVar4 = local_68;
      if (local_48 != (long *)0x0) {
        lVar11 = local_48[0xb];
        piVar3 = (int *)(lVar11 + 0xc);
        do {
          iVar9 = *piVar3;
          cVar5 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar8) {
            *piVar3 = iVar9 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar9 + -1 == 0) {
          *(undefined8 *)(lVar11 + 0x18) = 0;
          (**(code **)(*local_48 + 0x20))();
          plVar4 = local_68;
        }
      }
      local_68 = plVar4;
      if (plVar4 != (long *)0x0) {
        plVar1 = plVar4 + 1;
        do {
          iVar9 = (int)*plVar1 + -1;
          cVar5 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar8) {
            *(int *)plVar1 = iVar9;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar9 == 0) {
          plVar4[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar11 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar11;
          local_48 = (long *)*plVar4;
          FUN_02a44274(lVar11 + 0xd8,&local_48);
        }
      }
      FUN_00dbd724(*plVar12 + 0xd0,*plVar12 + 0x40);
      FUN_00dbd724(*plVar12 + 0xe0,&local_58);
      FUN_00dbd724(*plVar12 + 0xf0,&local_58);
      plVar4 = local_58;
    }
    else {
      FUN_00dbd99c(&local_48);
      if (local_48 == (long *)0x0) goto LAB_00db9f18;
      lVar11 = local_48[0xb];
      piVar3 = (int *)(lVar11 + 0xc);
      do {
        iVar9 = *piVar3;
        cVar5 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar8) {
          *piVar3 = iVar9 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar9 == 1) {
        *(undefined8 *)(lVar11 + 0x18) = 0;
        (**(code **)(*local_48 + 0x20))();
      }
      bVar8 = false;
      if (local_68 != (long *)0x0) goto LAB_00db9f24;
LAB_00db9f40:
      if (bVar8) goto LAB_00db9f44;
LAB_00dba4e4:
      if (*(long *)(*plVar12 + 0x50) == 0) {
        local_48 = (long *)0x0;
LAB_00dba4f4:
        (**(code **)(*param_1 + 0x10))(&local_48,param_1);
        local_68 = (long *)0x0;
        uStack_60 = 0;
        FUN_00dbc824(&local_68,&local_48);
        plVar4 = local_48;
        if (local_48 != (long *)0x0) {
          plVar1 = local_48 + 1;
          do {
            iVar9 = (int)*plVar1 + -1;
            cVar5 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar8) {
              *(int *)plVar1 = iVar9;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar9 == 0) {
            local_48[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar11 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar11;
            local_88 = (long *)*plVar4;
            FUN_02a44274(lVar11 + 0xd8,&local_88);
          }
        }
        FUN_00dbd99c(&local_88,*(undefined8 *)(*plVar12 + 0x40));
        FUN_00dbd99c(&local_48,*(undefined8 *)(local_88[0xd] + 0x100));
        FUN_00dbdc54(local_48[0xd] + 0xe0,&local_68);
        if (local_48 != (long *)0x0) {
          lVar11 = local_48[0xb];
          piVar3 = (int *)(lVar11 + 0xc);
          do {
            iVar9 = *piVar3;
            cVar5 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar8) {
              *piVar3 = iVar9 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar9 + -1 == 0) {
            *(undefined8 *)(lVar11 + 0x18) = 0;
            (**(code **)(*local_48 + 0x20))();
          }
        }
        plVar4 = local_68;
        if (local_88 != (long *)0x0) {
          lVar11 = local_88[0xb];
          piVar3 = (int *)(lVar11 + 0xc);
          do {
            iVar9 = *piVar3;
            cVar5 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar8) {
              *piVar3 = iVar9 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar9 + -1 == 0) {
            *(undefined8 *)(lVar11 + 0x18) = 0;
            (**(code **)(*local_88 + 0x20))();
            plVar4 = local_68;
          }
        }
        local_68 = plVar4;
        if (plVar4 != (long *)0x0) {
          plVar1 = plVar4 + 1;
          do {
            iVar9 = (int)*plVar1 + -1;
            cVar5 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar8) {
              *(int *)plVar1 = iVar9;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar9 == 0) {
            plVar4[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar11 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar11;
            local_48 = (long *)*plVar4;
            FUN_02a44274(lVar11 + 0xd8,&local_48);
          }
        }
        FUN_00dbd724(*plVar12 + 0xd0,*plVar12 + 0x40);
        FUN_00dbd724(*plVar12 + 0xe0,&local_58);
        FUN_00dbd99c(&local_48,*(undefined8 *)(*plVar12 + 0x40));
        FUN_00dbd724(*plVar12 + 0xf0,local_48[0xd] + 0x100);
        if (local_48 != (long *)0x0) {
          lVar11 = local_48[0xb];
          piVar3 = (int *)(lVar11 + 0xc);
          do {
            iVar9 = *piVar3;
            cVar5 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar8) {
              *piVar3 = iVar9 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar9 + -1 == 0) {
            *(undefined8 *)(lVar11 + 0x18) = 0;
            (**(code **)(*local_48 + 0x20))();
          }
        }
        (**(code **)(*param_1 + 0x10))(&local_48,param_1);
        local_68 = (long *)0x0;
        uStack_60 = 0;
        FUN_00dbc824(&local_68,&local_48);
        plVar4 = local_48;
        if (local_48 != (long *)0x0) {
          plVar1 = local_48 + 1;
          do {
            iVar9 = (int)*plVar1 + -1;
            cVar5 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar8) {
              *(int *)plVar1 = iVar9;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar9 == 0) {
            local_48[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar11 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar11;
            local_88 = (long *)*plVar4;
            FUN_02a44274(lVar11 + 0xd8,&local_88);
          }
        }
        FUN_00dbd99c(&local_48,*(undefined8 *)(*plVar12 + 0x40));
        FUN_00dbdc54(local_48[0xd] + 0x100,&local_68);
        if (local_48 != (long *)0x0) {
          lVar11 = local_48[0xb];
          piVar3 = (int *)(lVar11 + 0xc);
          do {
            iVar9 = *piVar3;
            cVar5 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar8) {
              *piVar3 = iVar9 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar9 + -1 == 0) {
            *(undefined8 *)(lVar11 + 0x18) = 0;
            (**(code **)(*local_48 + 0x20))();
          }
        }
        plVar4 = local_58;
        if (local_68 != (long *)0x0) {
          plVar4 = local_68 + 1;
          do {
            iVar9 = (int)*plVar4 + -1;
            cVar5 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar4,0x10);
            if (bVar8) {
              *(int *)plVar4 = iVar9;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
LAB_00dba7ac:
          plVar1 = local_68;
          plVar4 = local_58;
          if (iVar9 == 0) {
            local_68[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar11 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar11;
            local_48 = (long *)*plVar1;
            FUN_02a44274(lVar11 + 0xd8,&local_48);
            plVar4 = local_58;
          }
        }
      }
      else {
        FUN_00dbd99c(&local_48);
        if (local_48 == (long *)0x0) goto LAB_00dba4f4;
        lVar11 = local_48[0xb];
        piVar3 = (int *)(lVar11 + 0xc);
        do {
          iVar9 = *piVar3;
          cVar5 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar8) {
            *piVar3 = iVar9 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar9 + -1 == 0) {
          *(undefined8 *)(lVar11 + 0x18) = 0;
          (**(code **)(*local_48 + 0x20))();
        }
        local_68 = (long *)0x0;
        uStack_60 = 0;
        FUN_00dbd99c(&local_48,*(undefined8 *)(*plVar12 + 0x40));
        local_88 = (long *)0x0;
        uStack_80 = 0;
        FUN_00dbd724(&local_88,local_48[0xd] + 0x100);
        if (local_48 != (long *)0x0) {
          lVar11 = local_48[0xb];
          piVar3 = (int *)(lVar11 + 0xc);
          do {
            iVar9 = *piVar3;
            cVar5 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar8) {
              *piVar3 = iVar9 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar9 + -1 == 0) goto LAB_00dbb01c;
        }
LAB_00dba9fc:
        if (local_88 != (long *)0x0) {
          while( true ) {
            FUN_00dbd99c(&local_48);
            if (local_48 == (long *)0x0) goto joined_r0x00dbb188;
            lVar11 = local_48[0xb];
            piVar3 = (int *)(lVar11 + 0xc);
            do {
              iVar9 = *piVar3;
              cVar5 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(piVar3,0x10);
              if (bVar8) {
                *piVar3 = iVar9 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar9 + -1 == 0) {
              *(undefined8 *)(lVar11 + 0x18) = 0;
              (**(code **)(*local_48 + 0x20))();
            }
            if (local_88 == (long *)0x0) {
              local_48 = (long *)0x0;
            }
            else {
              FUN_00dbd99c(&local_48);
            }
            if (*(long *)(*plVar12 + 0x50) == 0) {
              bVar8 = local_48 == (long *)0x0;
              local_98 = (long *)0x0;
            }
            else {
              FUN_00dbd99c(&local_98);
              bVar8 = local_48 == local_98;
              if (local_98 != (long *)0x0) {
                lVar11 = local_98[0xb];
                piVar3 = (int *)(lVar11 + 0xc);
                do {
                  iVar9 = *piVar3;
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
                  if (bVar6) {
                    *piVar3 = iVar9 + -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (iVar9 + -1 == 0) {
                  *(undefined8 *)(lVar11 + 0x18) = 0;
                  (**(code **)(*local_98 + 0x20))(local_98);
                }
              }
            }
            if (local_48 != (long *)0x0) {
              lVar11 = local_48[0xb];
              piVar3 = (int *)(lVar11 + 0xc);
              do {
                iVar9 = *piVar3;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
                if (bVar6) {
                  *piVar3 = iVar9 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (iVar9 + -1 == 0) {
                *(undefined8 *)(lVar11 + 0x18) = 0;
                (**(code **)(*local_48 + 0x20))();
              }
            }
            if (bVar8) {
              FUN_00dbd724(&local_68,&local_88);
              goto joined_r0x00dbb188;
            }
            FUN_00dbd99c(&local_48,local_88);
            FUN_00dbd724(&local_88,local_48[0xd] + 0xf0);
            if (local_48 == (long *)0x0) break;
            lVar11 = local_48[0xb];
            piVar3 = (int *)(lVar11 + 0xc);
            do {
              iVar9 = *piVar3;
              cVar5 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(piVar3,0x10);
              if (bVar8) {
                *piVar3 = iVar9 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar9 + -1 != 0) break;
LAB_00dbb01c:
            *(undefined8 *)(lVar11 + 0x18) = 0;
            (**(code **)(*local_48 + 0x20))();
            if (local_88 == (long *)0x0) goto LAB_00dbaa04;
          }
          goto LAB_00dba9fc;
        }
LAB_00dbaa04:
        local_48 = (long *)0x0;
joined_r0x00dbb188:
        if (local_68 == (long *)0x0) {
          local_48 = (long *)0x0;
LAB_00dbaa14:
          if ((*(long *)*plVar12 != 0) && (uVar10 = FUN_02a43a8c(), (uVar10 & 1) == 0)) {
            if (*(long *)*plVar12 == 0) {
              local_a8 = (long *)0x0;
            }
            else {
              FUN_00dbdb10(&local_a8);
            }
            plVar4 = local_a8;
            (**(code **)(*param_1 + 0x10))(&local_48,param_1);
            local_b8 = (undefined8 *)0x0;
            uStack_b0 = 0;
            FUN_00dbc824(&local_b8,&local_48);
            plVar1 = local_48;
            if (local_48 != (long *)0x0) {
              plVar2 = local_48 + 1;
              do {
                iVar9 = (int)*plVar2 + -1;
                cVar5 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                if (bVar8) {
                  *(int *)plVar2 = iVar9;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (iVar9 == 0) {
                local_48[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar11 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar11;
                local_98 = (long *)*plVar1;
                FUN_02a44274(lVar11 + 0xd8,&local_98);
              }
            }
            FUN_00dc23c4(plVar4,&local_b8);
            puVar7 = local_b8;
            if (local_b8 != (undefined8 *)0x0) {
              piVar3 = (int *)(local_b8 + 1);
              do {
                iVar9 = *piVar3;
                cVar5 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(piVar3,0x10);
                if (bVar8) {
                  *piVar3 = iVar9 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (iVar9 + -1 == 0) {
                local_b8[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar11 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar11;
                local_48 = (long *)*puVar7;
                FUN_02a44274(lVar11 + 0xd8,&local_48);
              }
            }
            if (local_a8 != (long *)0x0) {
              lVar11 = local_a8[0xb];
              piVar3 = (int *)(lVar11 + 0xc);
              do {
                iVar9 = *piVar3;
                cVar5 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(piVar3,0x10);
                if (bVar8) {
                  *piVar3 = iVar9 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (iVar9 + -1 == 0) {
                *(undefined8 *)(lVar11 + 0x18) = 0;
                (**(code **)(*local_a8 + 0x20))();
              }
            }
          }
          *(undefined4 *)(*plVar12 + 0x38) = 0;
          plVar1 = local_88;
        }
        else {
          FUN_00dbd99c(&local_48);
          if (local_48 == (long *)0x0) goto LAB_00dbaa14;
          lVar11 = local_48[0xb];
          piVar3 = (int *)(lVar11 + 0xc);
          do {
            iVar9 = *piVar3;
            cVar5 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar8) {
              *piVar3 = iVar9 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar9 + -1 == 0) {
            *(undefined8 *)(lVar11 + 0x18) = 0;
            (**(code **)(*local_48 + 0x20))();
          }
          FUN_00dbd99c(&local_48,local_68);
          local_98 = (long *)0x0;
          uStack_90 = 0;
          FUN_00dbd724(&local_98,local_48[0xd] + 0xf0);
          if (local_48 != (long *)0x0) {
            lVar11 = local_48[0xb];
            piVar3 = (int *)(lVar11 + 0xc);
            do {
              iVar9 = *piVar3;
              cVar5 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(piVar3,0x10);
              if (bVar8) {
                *piVar3 = iVar9 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar9 + -1 == 0) {
              *(undefined8 *)(lVar11 + 0x18) = 0;
              (**(code **)(*local_48 + 0x20))();
            }
          }
          (**(code **)(*param_1 + 0x10))(&local_48,param_1);
          local_a8 = (long *)0x0;
          uStack_a0 = 0;
          FUN_00dbc824(&local_a8,&local_48);
          plVar4 = local_48;
          if (local_48 != (long *)0x0) {
            plVar1 = local_48 + 1;
            do {
              iVar9 = (int)*plVar1 + -1;
              cVar5 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar8) {
                *(int *)plVar1 = iVar9;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar9 == 0) {
              local_48[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar11 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar11;
              local_38 = *plVar4;
              FUN_02a44274(lVar11 + 0xd8,&local_38);
            }
          }
          FUN_00dbd99c(&local_48,local_68);
          FUN_00dbdc54(local_48[0xd] + 0xf0,&local_a8);
          if (local_48 != (long *)0x0) {
            lVar11 = local_48[0xb];
            piVar3 = (int *)(lVar11 + 0xc);
            do {
              iVar9 = *piVar3;
              cVar5 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(piVar3,0x10);
              if (bVar8) {
                *piVar3 = iVar9 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar9 + -1 == 0) {
              *(undefined8 *)(lVar11 + 0x18) = 0;
              (**(code **)(*local_48 + 0x20))();
            }
          }
          plVar4 = local_a8;
          if (local_a8 != (long *)0x0) {
            plVar1 = local_a8 + 1;
            do {
              iVar9 = (int)*plVar1 + -1;
              cVar5 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar8) {
                *(int *)plVar1 = iVar9;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar9 == 0) {
              local_a8[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar11 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar11;
              local_48 = (long *)*plVar4;
              FUN_02a44274(lVar11 + 0xd8,&local_48);
            }
          }
          FUN_00dbd724(*plVar12 + 0xd0,*plVar12 + 0x40);
          FUN_00dbd724(*plVar12 + 0xe0,&local_68);
          FUN_00dbd724(*plVar12 + 0xf0,&local_98);
          if (local_98 == (long *)0x0) {
            local_48 = (long *)0x0;
LAB_00dbb450:
            (**(code **)(*param_1 + 0x10))(&local_48,param_1);
            local_a8 = (long *)0x0;
            uStack_a0 = 0;
            FUN_00dbc824(&local_a8,&local_48);
            plVar4 = local_48;
            if (local_48 != (long *)0x0) {
              plVar1 = local_48 + 1;
              do {
                iVar9 = (int)*plVar1 + -1;
                cVar5 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar8) {
                  *(int *)plVar1 = iVar9;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (iVar9 == 0) {
                local_48[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar11 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar11;
                local_38 = *plVar4;
                FUN_02a44274(lVar11 + 0xd8,&local_38);
              }
            }
            FUN_00dbd99c(&local_48,*(undefined8 *)(*plVar12 + 0x40));
            FUN_00dbdc54(local_48[0xd] + 0x110,&local_a8);
            if (local_48 != (long *)0x0) {
              lVar11 = local_48[0xb];
              piVar3 = (int *)(lVar11 + 0xc);
              do {
                iVar9 = *piVar3;
                cVar5 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(piVar3,0x10);
                if (bVar8) {
                  *piVar3 = iVar9 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (iVar9 + -1 == 0) {
                *(undefined8 *)(lVar11 + 0x18) = 0;
                (**(code **)(*local_48 + 0x20))();
              }
            }
            plVar1 = local_a8;
            plVar4 = local_98;
            if (local_a8 != (long *)0x0) {
              plVar2 = local_a8 + 1;
              do {
                iVar9 = (int)*plVar2 + -1;
                cVar5 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                if (bVar8) {
                  *(int *)plVar2 = iVar9;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (iVar9 == 0) {
                local_a8[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar11 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar11;
                local_48 = (long *)*plVar1;
                FUN_02a44274(lVar11 + 0xd8,&local_48);
                plVar4 = local_98;
              }
            }
          }
          else {
            FUN_00dbd99c(&local_48);
            if (local_48 == (long *)0x0) goto LAB_00dbb450;
            lVar11 = local_48[0xb];
            piVar3 = (int *)(lVar11 + 0xc);
            do {
              iVar9 = *piVar3;
              cVar5 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(piVar3,0x10);
              if (bVar8) {
                *piVar3 = iVar9 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            plVar4 = local_98;
            if (iVar9 + -1 == 0) {
              *(undefined8 *)(lVar11 + 0x18) = 0;
              (**(code **)(*local_48 + 0x20))();
              plVar4 = local_98;
            }
          }
          local_98 = plVar4;
          plVar1 = local_88;
          if (plVar4 != (long *)0x0) {
            plVar2 = plVar4 + 1;
            do {
              iVar9 = (int)*plVar2 + -1;
              cVar5 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar8) {
                *(int *)plVar2 = iVar9;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar9 == 0) {
              plVar4[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar11 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar11;
              local_48 = (long *)*plVar4;
              FUN_02a44274(lVar11 + 0xd8,&local_48);
              plVar1 = local_88;
            }
          }
        }
        local_88 = plVar1;
        if (plVar1 != (long *)0x0) {
          plVar4 = plVar1 + 1;
          do {
            iVar9 = (int)*plVar4 + -1;
            cVar5 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar4,0x10);
            if (bVar8) {
              *(int *)plVar4 = iVar9;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar9 == 0) {
            plVar1[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar11 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar11;
            local_48 = (long *)*plVar1;
            FUN_02a44274(lVar11 + 0xd8,&local_48);
          }
        }
        plVar4 = local_58;
        if (local_68 != (long *)0x0) {
          plVar4 = local_68 + 1;
          do {
            iVar9 = (int)*plVar4 + -1;
            cVar5 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar4,0x10);
            if (bVar8) {
              *(int *)plVar4 = iVar9;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          goto LAB_00dba7ac;
        }
      }
    }
    local_58 = plVar4;
    if (plVar4 != (long *)0x0) {
      plVar1 = plVar4 + 1;
      do {
        iVar9 = (int)*plVar1 + -1;
        cVar5 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar8) {
          *(int *)plVar1 = iVar9;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar9 == 0) {
        plVar4[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar11 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar11;
        local_48 = (long *)*plVar4;
        FUN_02a44274(lVar11 + 0xd8,&local_48);
      }
    }
  }
  *(undefined1 *)(*plVar12 + 0x28) = 0;
  *(undefined4 *)(*plVar12 + 100) = 1;
  *(undefined4 *)(*plVar12 + 0x6c) = *(undefined4 *)(*plVar12 + 0x34);
  *(undefined4 *)(*plVar12 + 0x70) = *(undefined4 *)(*plVar12 + 0x38);
  if (*(long *)(*plVar12 + 0xd0) != 0) {
    FUN_00dbd99c(&local_48);
    if (local_48 == (long *)0x0) goto LAB_00db9c00;
    lVar11 = local_48[0xb];
    piVar3 = (int *)(lVar11 + 0xc);
    do {
      iVar9 = *piVar3;
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar8) {
        *piVar3 = iVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*local_48 + 0x20))();
    }
    if (*(long *)(*plVar12 + 0xe0) == 0) {
      local_48 = (long *)0x0;
    }
    else {
      FUN_00dbd99c(&local_48);
      if (local_48 != (long *)0x0) {
        lVar11 = local_48[0xb];
        piVar3 = (int *)(lVar11 + 0xc);
        do {
          iVar9 = *piVar3;
          cVar5 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar8) {
            *piVar3 = iVar9 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar9 + -1 == 0) {
          *(undefined8 *)(lVar11 + 0x18) = 0;
          (**(code **)(*local_48 + 0x20))();
        }
      }
    }
    if (*(long *)(*plVar12 + 0xf0) != 0) {
      FUN_00dbd99c(&local_48);
      if (local_48 != (long *)0x0) {
        lVar11 = local_48[0xb];
        piVar3 = (int *)(lVar11 + 0xc);
        do {
          iVar9 = *piVar3;
          cVar5 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar8) {
            *piVar3 = iVar9 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar9 + -1 == 0) {
          *(undefined8 *)(lVar11 + 0x18) = 0;
          (**(code **)(*local_48 + 0x20))();
        }
      }
      goto LAB_00db9c00;
    }
  }
  local_48 = (long *)0x0;
LAB_00db9c00:
  (**(code **)(*param_1 + 0x58))(param_1,*(undefined4 *)(param_1[0xd] + 0x6c));
  return;
}


