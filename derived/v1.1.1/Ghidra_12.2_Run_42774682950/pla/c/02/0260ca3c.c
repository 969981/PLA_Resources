/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0260ca3c; name: FUN_0260ca3c
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_0260ca3c(long param_1)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  long *local_b0;
  long *local_a8;
  long *local_a0;
  long *local_98;
  long *local_90;
  long *local_88;
  long *local_80;
  undefined8 uStack_78;
  long *local_70;
  long *local_68;
  long *local_60 [2];
  long local_48;
  
  puVar6 = PTR_DAT_04379e80;
  puVar5 = PTR_DAT_04379e78;
  lVar11 = *(long *)(param_1 + 0x3b0);
  if (lVar11 == 0) {
    return;
  }
  if (*(int *)(lVar11 + 0xc) == 0) {
    return;
  }
  piVar1 = (int *)(lVar11 + 0xc);
  iVar8 = *(int *)(lVar11 + 0xc);
  do {
    plVar13 = *(long **)(lVar11 + 0x10);
    if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar5), iVar7 != 0)) {
      uVar9 = FUN_0095a420();
      *(undefined8 *)puVar6 = uVar9;
      __cxa_guard_release(puVar5);
    }
    while( true ) {
      if (plVar13 == (long *)0x0) {
        return;
      }
      if (plVar13 == (long *)puVar6) break;
      plVar13 = (long *)*plVar13;
    }
    iVar7 = *piVar1;
    if (iVar7 == iVar8) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') {
        lVar11 = *(long *)(lVar11 + 0x18);
        if (lVar11 == 0) {
          return;
        }
        plVar10 = (long *)(lVar11 + -0x50);
        FUN_00aae1c0(local_60,plVar10);
        plVar13 = local_60[0];
        if (local_60[0] == (long *)0x0) goto LAB_0260cb10;
        if (*(int *)((long)local_60[0] + 0xc) == 0) goto LAB_0260ce64;
        piVar1 = (int *)((long)local_60[0] + 0xc);
        iVar8 = *(int *)((long)local_60[0] + 0xc);
        break;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    iVar8 = iVar7;
    if (iVar7 == 0) {
      return;
    }
  } while( true );
LAB_0260ce10:
  plVar14 = (long *)plVar13[2];
  lVar12 = FUN_00a3edb8();
  while( true ) {
    if (plVar14 == (long *)0x0) goto LAB_0260ce64;
    if (plVar14 == (long *)lVar12) break;
    plVar14 = (long *)*plVar14;
  }
  iVar7 = *piVar1;
  if (iVar7 == iVar8) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = iVar8 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') {
      lVar12 = plVar13[3];
      plVar13 = (long *)0x0;
      plVar14 = local_60[0];
      if (lVar12 != 0) {
        plVar13 = (long *)(lVar12 + -0x50);
      }
      goto joined_r0x0260ce5c;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  iVar8 = iVar7;
  if (iVar7 == 0) {
LAB_0260ce64:
    plVar13 = (long *)0x0;
    plVar14 = local_60[0];
joined_r0x0260ce5c:
    local_60[0] = plVar14;
    if (plVar14 != (long *)0x0) {
      plVar2 = plVar14 + 1;
      do {
        iVar8 = (int)*plVar2 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *(int *)plVar2 = iVar8;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar8 == 0) {
        plVar14[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar12 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar12;
        local_80 = (long *)*plVar14;
        FUN_02a44274(lVar12 + 0xd8,&local_80);
      }
    }
    if (plVar13 != (long *)0x0) {
      FUN_009c69bc(&local_70,plVar13);
      FUN_017d31f8(&local_68,&DAT_03a7da40,&local_70);
      if (local_70 != (long *)0x0) {
        lVar12 = local_70[0xb];
        piVar1 = (int *)(lVar12 + 0xc);
        do {
          iVar8 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar8 + -1 == 0) {
          *(undefined8 *)(lVar12 + 0x18) = 0;
          (**(code **)(*local_70 + 0x20))();
        }
      }
      FUN_02c90b3c(local_68);
      (**(code **)(*local_68 + 0x10))(local_60);
      local_80 = (undefined8 *)0x0;
      uStack_78 = 0;
      FUN_00ad3450(&local_80,local_60);
      plVar14 = local_60[0];
      if (local_60[0] != (long *)0x0) {
        plVar2 = local_60[0] + 1;
        do {
          iVar8 = (int)*plVar2 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *(int *)plVar2 = iVar8;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar8 == 0) {
          local_60[0][2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar12 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar12;
          local_48 = *plVar14;
          FUN_02a44274(lVar12 + 0xd8,&local_48);
        }
      }
      FUN_00ad52f4(param_1 + 0x318,&local_80);
      plVar14 = local_80;
      if (local_80 != (undefined8 *)0x0) {
        piVar1 = (int *)(local_80 + 1);
        do {
          iVar8 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar8 + -1 == 0) {
          local_80[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar12 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar12;
          local_60[0] = (long *)*plVar14;
          FUN_02a44274(lVar12 + 0xd8,local_60);
        }
      }
      FUN_009c69bc(&local_88,plVar13);
      FUN_017d31f8(local_60,&DAT_03a7da48,&local_88);
      plVar14 = local_68;
      local_68 = (long *)0x0;
      if (plVar14 != (long *)0x0) {
        lVar12 = plVar14[0xb];
        piVar1 = (int *)(lVar12 + 0xc);
        do {
          iVar8 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar8 + -1 == 0) {
          *(undefined8 *)(lVar12 + 0x18) = 0;
          (**(code **)(*plVar14 + 0x20))();
        }
      }
      local_68 = local_60[0];
      local_60[0] = (long *)0x0;
      if (local_88 != (long *)0x0) {
        lVar12 = local_88[0xb];
        piVar1 = (int *)(lVar12 + 0xc);
        do {
          iVar8 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar8 + -1 == 0) {
          *(undefined8 *)(lVar12 + 0x18) = 0;
          (**(code **)(*local_88 + 0x20))();
        }
      }
      FUN_02c90b3c(local_68);
      (**(code **)(*local_68 + 0x10))(local_60);
      local_80 = (undefined8 *)0x0;
      uStack_78 = 0;
      FUN_00ad3450(&local_80,local_60);
      plVar14 = local_60[0];
      if (local_60[0] != (long *)0x0) {
        plVar2 = local_60[0] + 1;
        do {
          iVar8 = (int)*plVar2 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *(int *)plVar2 = iVar8;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar8 == 0) {
          local_60[0][2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar12 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar12;
          local_48 = *plVar14;
          FUN_02a44274(lVar12 + 0xd8,&local_48);
        }
      }
      FUN_00ad52f4(param_1 + 0x348,&local_80);
      plVar14 = local_80;
      if (local_80 != (undefined8 *)0x0) {
        piVar1 = (int *)(local_80 + 1);
        do {
          iVar8 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar8 + -1 == 0) {
          local_80[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar12 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar12;
          local_60[0] = (long *)*plVar14;
          FUN_02a44274(lVar12 + 0xd8,local_60);
        }
      }
      FUN_009c69bc(&local_90,plVar13);
      FUN_017d31f8(local_60,&DAT_03a7da50,&local_90);
      plVar14 = local_68;
      local_68 = (long *)0x0;
      if (plVar14 != (long *)0x0) {
        lVar12 = plVar14[0xb];
        piVar1 = (int *)(lVar12 + 0xc);
        do {
          iVar8 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar8 + -1 == 0) {
          *(undefined8 *)(lVar12 + 0x18) = 0;
          (**(code **)(*plVar14 + 0x20))();
        }
      }
      local_68 = local_60[0];
      local_60[0] = (long *)0x0;
      if (local_90 != (long *)0x0) {
        lVar12 = local_90[0xb];
        piVar1 = (int *)(lVar12 + 0xc);
        do {
          iVar8 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar8 + -1 == 0) {
          *(undefined8 *)(lVar12 + 0x18) = 0;
          (**(code **)(*local_90 + 0x20))();
        }
      }
      FUN_02c90b3c(local_68);
      (**(code **)(*local_68 + 0x10))(local_60);
      local_80 = (undefined8 *)0x0;
      uStack_78 = 0;
      FUN_00ad3450(&local_80,local_60);
      plVar14 = local_60[0];
      if (local_60[0] != (long *)0x0) {
        plVar2 = local_60[0] + 1;
        do {
          iVar8 = (int)*plVar2 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *(int *)plVar2 = iVar8;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar8 == 0) {
          local_60[0][2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar12 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar12;
          local_48 = *plVar14;
          FUN_02a44274(lVar12 + 0xd8,&local_48);
        }
      }
      FUN_00ad52f4(param_1 + 0x328,&local_80);
      plVar14 = local_80;
      if (local_80 != (undefined8 *)0x0) {
        piVar1 = (int *)(local_80 + 1);
        do {
          iVar8 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar8 + -1 == 0) {
          local_80[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar12 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar12;
          local_60[0] = (long *)*plVar14;
          FUN_02a44274(lVar12 + 0xd8,local_60);
        }
      }
      FUN_009c69bc(&local_98,plVar13);
      FUN_017d31f8(local_60,&DAT_03a7da58,&local_98);
      plVar14 = local_68;
      local_68 = (long *)0x0;
      if (plVar14 != (long *)0x0) {
        lVar12 = plVar14[0xb];
        piVar1 = (int *)(lVar12 + 0xc);
        do {
          iVar8 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar8 + -1 == 0) {
          *(undefined8 *)(lVar12 + 0x18) = 0;
          (**(code **)(*plVar14 + 0x20))();
        }
      }
      local_68 = local_60[0];
      local_60[0] = (long *)0x0;
      if (local_98 != (long *)0x0) {
        lVar12 = local_98[0xb];
        piVar1 = (int *)(lVar12 + 0xc);
        do {
          iVar8 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar8 + -1 == 0) {
          *(undefined8 *)(lVar12 + 0x18) = 0;
          (**(code **)(*local_98 + 0x20))();
        }
      }
      FUN_02c90b3c(local_68);
      (**(code **)(*local_68 + 0x10))(local_60);
      local_80 = (undefined8 *)0x0;
      uStack_78 = 0;
      FUN_00ad3450(&local_80,local_60);
      plVar14 = local_60[0];
      if (local_60[0] != (long *)0x0) {
        plVar2 = local_60[0] + 1;
        do {
          iVar8 = (int)*plVar2 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *(int *)plVar2 = iVar8;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar8 == 0) {
          local_60[0][2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar12 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar12;
          local_48 = *plVar14;
          FUN_02a44274(lVar12 + 0xd8,&local_48);
        }
      }
      FUN_00ad52f4(param_1 + 0x338,&local_80);
      plVar14 = local_80;
      if (local_80 != (undefined8 *)0x0) {
        piVar1 = (int *)(local_80 + 1);
        do {
          iVar8 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar8 + -1 == 0) {
          local_80[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar12 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar12;
          local_60[0] = (long *)*plVar14;
          FUN_02a44274(lVar12 + 0xd8,local_60);
        }
      }
      FUN_009c69bc(&local_a0,plVar13);
      FUN_017d31f8(local_60,&DAT_03a7da60,&local_a0);
      plVar14 = local_68;
      local_68 = (long *)0x0;
      if (plVar14 != (long *)0x0) {
        lVar12 = plVar14[0xb];
        piVar1 = (int *)(lVar12 + 0xc);
        do {
          iVar8 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar8 + -1 == 0) {
          *(undefined8 *)(lVar12 + 0x18) = 0;
          (**(code **)(*plVar14 + 0x20))();
        }
      }
      local_68 = local_60[0];
      local_60[0] = (long *)0x0;
      if (local_a0 != (long *)0x0) {
        lVar12 = local_a0[0xb];
        piVar1 = (int *)(lVar12 + 0xc);
        do {
          iVar8 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar8 + -1 == 0) {
          *(undefined8 *)(lVar12 + 0x18) = 0;
          (**(code **)(*local_a0 + 0x20))();
        }
      }
      FUN_02c90b3c(local_68);
      FUN_02c90b44(local_68);
      (**(code **)(*local_68 + 0x10))(local_60);
      local_80 = (long *)0x0;
      uStack_78 = 0;
      FUN_00ad3450(&local_80,local_60);
      plVar14 = local_60[0];
      if (local_60[0] != (long *)0x0) {
        plVar2 = local_60[0] + 1;
        do {
          iVar8 = (int)*plVar2 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *(int *)plVar2 = iVar8;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar8 == 0) {
          local_60[0][2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar12 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar12;
          local_48 = *plVar14;
          FUN_02a44274(lVar12 + 0xd8,&local_48);
        }
      }
      FUN_00ad52f4(param_1 + 0x358,&local_80);
      plVar14 = local_80;
      if (local_80 != (long *)0x0) {
        plVar2 = local_80 + 1;
        do {
          iVar8 = (int)*plVar2 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *(int *)plVar2 = iVar8;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar8 == 0) {
          local_80[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar12 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar12;
          local_60[0] = (long *)*plVar14;
          FUN_02a44274(lVar12 + 0xd8,local_60);
        }
      }
      if (local_68 != (long *)0x0) {
        lVar12 = local_68[0xb];
        piVar1 = (int *)(lVar12 + 0xc);
        do {
          iVar8 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar8 + -1 == 0) {
          *(undefined8 *)(lVar12 + 0x18) = 0;
          (**(code **)(*local_68 + 0x20))();
        }
      }
      lVar12 = plVar13[0xb];
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        iVar8 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar8 + -1 == 0) {
        *(undefined8 *)(lVar12 + 0x18) = 0;
        (**(code **)(*plVar13 + 0x20))(plVar13);
      }
    }
LAB_0260cb10:
    FUN_009c69bc(&local_68,param_1);
    if (local_68 != (long *)0x0) {
      local_b0 = local_68;
      lVar12 = local_68[0xb];
      if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar12 + 0x10) == 0) {
        uVar9 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
        *(undefined8 *)(lVar12 + 0x10) = uVar9;
      }
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      FUN_017d31f8(&local_a8,&DAT_03a7da68,&local_b0);
      if (local_b0 != (long *)0x0) {
        lVar12 = local_b0[0xb];
        piVar1 = (int *)(lVar12 + 0xc);
        do {
          iVar8 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar8 + -1 == 0) {
          *(undefined8 *)(lVar12 + 0x18) = 0;
          (**(code **)(*local_b0 + 0x20))();
        }
      }
      FUN_02c90b3c(local_a8);
      FUN_02c90b44(local_a8);
      (**(code **)(*local_a8 + 0x10))(local_60);
      local_80 = (long *)0x0;
      uStack_78 = 0;
      FUN_00ad3450(&local_80,local_60);
      plVar13 = local_60[0];
      if (local_60[0] != (long *)0x0) {
        plVar14 = local_60[0] + 1;
        do {
          iVar8 = (int)*plVar14 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar4) {
            *(int *)plVar14 = iVar8;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar8 == 0) {
          local_60[0][2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar12 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar12;
          local_48 = *plVar13;
          FUN_02a44274(lVar12 + 0xd8,&local_48);
        }
      }
      FUN_00ad52f4(param_1 + 0x368,&local_80);
      plVar13 = local_80;
      if (local_80 != (long *)0x0) {
        plVar14 = local_80 + 1;
        do {
          iVar8 = (int)*plVar14 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar4) {
            *(int *)plVar14 = iVar8;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar8 == 0) {
          local_80[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar12 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar12;
          local_60[0] = (long *)*plVar13;
          FUN_02a44274(lVar12 + 0xd8,local_60);
        }
      }
      if (local_a8 != (long *)0x0) {
        lVar12 = local_a8[0xb];
        piVar1 = (int *)(lVar12 + 0xc);
        do {
          iVar8 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar8 + -1 == 0) {
          *(undefined8 *)(lVar12 + 0x18) = 0;
          (**(code **)(*local_a8 + 0x20))();
        }
      }
      if (local_68 != (long *)0x0) {
        lVar12 = local_68[0xb];
        piVar1 = (int *)(lVar12 + 0xc);
        do {
          iVar8 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar8 + -1 == 0) {
          *(undefined8 *)(lVar12 + 0x18) = 0;
          (**(code **)(*local_68 + 0x20))();
        }
      }
    }
    lVar11 = *(long *)(lVar11 + 8);
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*plVar10 + 0x20))(plVar10);
    }
    return;
  }
  goto LAB_0260ce10;
}


