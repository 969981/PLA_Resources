/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00aa9b50; name: FUN_00aa9b50
 */


void FUN_00aa9b50(long *param_1,long *param_2)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  long *plVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  undefined8 uVar13;
  long *plVar14;
  long *plVar15;
  long *local_80;
  undefined8 uStack_78;
  long *local_70;
  long local_68;
  
  lVar12 = FUN_009b807c(*param_2 + 0xf0,&local_80);
  if (lVar12 == 0) goto LAB_00aa9c88;
  local_80 = (long *)0x0;
  uStack_78 = 0;
  FUN_00ac3fa4(&local_80,lVar12 + 0x248);
  FUN_0099c748(&local_70,&local_80);
  plVar6 = local_80;
  if (local_80 != (long *)0x0) {
    plVar15 = local_80 + 1;
    do {
      iVar10 = (int)*plVar15 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar4) {
        *(int *)plVar15 = iVar10;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 == 0) {
      local_80[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar12 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar12;
      local_68 = *plVar6;
      FUN_02a44274(lVar12 + 0xd8,&local_68);
    }
  }
  if (local_70 == (long *)0x0) {
LAB_00aa9c28:
    bVar4 = false;
  }
  else {
    local_80 = (long *)0x0;
    uStack_78 = 0;
    FUN_00af7e30(&local_80,local_70 + 0x46);
    plVar6 = local_80;
    puVar8 = PTR_DAT_0437a558;
    puVar7 = PTR_DAT_0437a550;
    if (local_80 == (long *)0x0) goto LAB_00aa9c28;
    if (*(int *)((long)local_80 + 0xc) != 0) {
      piVar1 = (int *)((long)local_80 + 0xc);
      iVar10 = *(int *)((long)local_80 + 0xc);
      do {
        plVar15 = (long *)plVar6[2];
        if (((*puVar7 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar7), iVar11 != 0)) {
          uVar13 = FUN_00aa0310();
          *(undefined8 *)puVar8 = uVar13;
          __cxa_guard_release(puVar7);
        }
        while( true ) {
          if (plVar15 == (long *)0x0) goto LAB_00aa9e68;
          if (plVar15 == (long *)puVar8) break;
          plVar15 = (long *)*plVar15;
        }
        iVar11 = *piVar1;
        if (iVar11 == iVar10) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar10 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lVar12 = plVar6[3];
            plVar6 = (long *)0x0;
            plVar15 = local_80;
            if (lVar12 != 0) {
              plVar6 = (long *)(lVar12 + -0x50);
            }
            goto joined_r0x00aa9d78;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar10 = iVar11;
      } while (iVar11 != 0);
    }
LAB_00aa9e68:
    plVar6 = (long *)0x0;
    plVar15 = local_80;
joined_r0x00aa9d78:
    local_80 = plVar15;
    if (plVar15 != (long *)0x0) {
      plVar14 = plVar15 + 1;
      do {
        iVar10 = (int)*plVar14 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar4) {
          *(int *)plVar14 = iVar10;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar10 == 0) {
        plVar15[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar12 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar12;
        local_68 = *plVar15;
        FUN_02a44274(lVar12 + 0xd8,&local_68);
      }
    }
    if (plVar6 == (long *)0x0) goto LAB_00aa9c28;
    FUN_00a9ecd4(&local_80,plVar6);
    plVar15 = local_80;
    puVar9 = PTR_DAT_0437a130;
    puVar8 = PTR_DAT_0437a128;
    puVar7 = PTR_DAT_043794d0;
    if (local_80 == (long *)0x0) {
      bVar4 = false;
    }
    else {
      if (*(int *)((long)local_80 + 0xc) != 0) {
        piVar1 = (int *)((long)local_80 + 0xc);
        iVar10 = *(int *)((long)local_80 + 0xc);
        do {
          plVar14 = (long *)plVar15[2];
          if (((*puVar8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar8), iVar11 != 0)) {
            if (((*PTR_DAT_043795d8 & 1) == 0) &&
               (iVar11 = __cxa_guard_acquire(PTR_DAT_043795d8), iVar11 != 0)) {
              if (((*puVar7 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar7), iVar11 != 0)) {
                uVar13 = FUN_0087f8f0();
                *(undefined8 *)PTR_DAT_043794d8 = uVar13;
                __cxa_guard_release(puVar7);
              }
              *(undefined **)PTR_DAT_043795e0 = PTR_DAT_043794d8;
              __cxa_guard_release(PTR_DAT_043795d8);
            }
            *(undefined **)puVar9 = PTR_DAT_043795e0;
            __cxa_guard_release(puVar8);
          }
          while( true ) {
            if (plVar14 == (long *)0x0) goto LAB_00aaa104;
            if (plVar14 == (long *)puVar9) break;
            plVar14 = (long *)*plVar14;
          }
          iVar11 = *piVar1;
          if (iVar11 == iVar10) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar10 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') {
              lVar12 = plVar15[3];
              plVar15 = (long *)0x0;
              plVar14 = local_80;
              if (lVar12 != 0) {
                plVar15 = (long *)(lVar12 + -0x50);
              }
              goto joined_r0x00aa9f3c;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          iVar10 = iVar11;
        } while (iVar11 != 0);
      }
LAB_00aaa104:
      plVar15 = (long *)0x0;
      plVar14 = local_80;
joined_r0x00aa9f3c:
      local_80 = plVar14;
      if (plVar14 != (long *)0x0) {
        plVar2 = plVar14 + 1;
        do {
          iVar10 = (int)*plVar2 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *(int *)plVar2 = iVar10;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar10 == 0) {
          plVar14[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar12 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar12;
          local_68 = *plVar14;
          FUN_02a44274(lVar12 + 0xd8,&local_68);
        }
      }
      bVar4 = false;
      if (plVar15 != (long *)0x0) {
        FUN_028a17c4(&local_80,plVar15);
        plVar14 = local_80;
        if (((*PTR_DAT_0437a570 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_0437a570), iVar10 != 0)) {
          FUN_00100250(&LAB_00aaa178,PTR_DAT_0437a578,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_0437a570);
        }
        plVar2 = (long *)PTR_DAT_0437a578;
        if (plVar14[0x19] != 0) {
          plVar2 = (long *)(plVar14[0x19] + 0x88);
        }
        lVar12 = *plVar2;
        *param_1 = lVar12;
        if (lVar12 != 0) {
          piVar1 = (int *)(lVar12 + 0x50);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = *piVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        if (local_80 != (long *)0x0) {
          plVar14 = local_80 + 10;
          do {
            iVar10 = (int)*plVar14 + -1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar4) {
              *(int *)plVar14 = iVar10;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar10 == 0) {
            (**(code **)(*local_80 + 0x10))();
          }
        }
        lVar12 = plVar15[0xb];
        piVar1 = (int *)(lVar12 + 0xc);
        do {
          iVar10 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar10 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar10 == 1) {
          *(undefined8 *)(lVar12 + 0x18) = 0;
          (**(code **)(*plVar15 + 0x20))(plVar15);
        }
        bVar4 = true;
      }
    }
    lVar12 = plVar6[0xb];
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      iVar10 = *piVar1;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*plVar6 + 0x20))(plVar6);
    }
    if (!bVar4) goto LAB_00aa9c28;
    bVar4 = true;
  }
  if (local_70 != (long *)0x0) {
    lVar12 = local_70[0xb];
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      iVar10 = *piVar1;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*local_70 + 0x20))();
    }
  }
  if (bVar4) {
    return;
  }
LAB_00aa9c88:
  lVar12 = FUN_00ab4364(*param_2 + 0xf0,&local_80);
  if (lVar12 == 0) {
    *param_1 = 0;
  }
  else {
    lVar12 = *(long *)(*(long *)(lVar12 + 0x208) + 0x88);
    *param_1 = lVar12;
    if (lVar12 != 0) {
      piVar1 = (int *)(lVar12 + 0x50);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
  }
  return;
}


