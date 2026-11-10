/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00cceb4c; name: FUN_00cceb4c
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00cceb4c(long param_1)

{
  int *piVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  long *local_88;
  long *local_80;
  long *local_78;
  undefined8 uStack_70;
  long local_68;
  
  local_78 = (long *)0x0;
  uStack_70 = 0;
  FUN_0095e898(&local_78,*(long *)(param_1 + 0xa0) + 0x70);
  plVar6 = local_78;
  puVar10 = PTR_DAT_043796e8;
  puVar9 = PTR_DAT_043796e0;
  puVar8 = PTR_DAT_043794d8;
  puVar7 = PTR_DAT_043794d0;
  if (local_78 == (long *)0x0) {
    return;
  }
  if (*(int *)((long)local_78 + 0xc) != 0) {
    piVar1 = (int *)((long)local_78 + 0xc);
    iVar11 = *(int *)((long)local_78 + 0xc);
    do {
      plVar16 = (long *)plVar6[2];
      if (((*puVar9 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar9), iVar12 != 0)) {
        if (((*puVar7 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar7), iVar12 != 0)) {
          uVar13 = FUN_0087f8f0();
          *(undefined8 *)puVar8 = uVar13;
          __cxa_guard_release(puVar7);
        }
        *(undefined **)puVar10 = puVar8;
        __cxa_guard_release(puVar9);
      }
      while( true ) {
        if (plVar16 == (long *)0x0) goto LAB_00ccef70;
        if (plVar16 == (long *)puVar10) break;
        plVar16 = (long *)*plVar16;
      }
      iVar12 = *piVar1;
      if (iVar12 == iVar11) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar11 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') {
          lVar14 = plVar6[3];
          plVar6 = (long *)0x0;
          plVar16 = local_78;
          if (lVar14 != 0) {
            plVar6 = (long *)(lVar14 + -0x50);
          }
          goto joined_r0x00ccec28;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar11 = iVar12;
    } while (iVar12 != 0);
  }
LAB_00ccef70:
  plVar6 = (long *)0x0;
  plVar16 = local_78;
joined_r0x00ccec28:
  local_78 = plVar16;
  if (plVar16 != (long *)0x0) {
    plVar2 = plVar16 + 1;
    do {
      iVar11 = (int)*plVar2 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = iVar11;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar11 == 0) {
      plVar16[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar14 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar14;
      local_68 = *plVar16;
      FUN_02a44274(lVar14 + 0xd8,&local_68);
    }
  }
  if (plVar6 == (long *)0x0) {
    return;
  }
  FUN_0199d14c(&local_78,plVar6);
  if (local_78 == (long *)0x0) {
    local_80 = (long *)0x0;
  }
  else {
    FUN_00959d38(&local_80);
    plVar16 = local_78;
    if (local_78 != (long *)0x0) {
      plVar2 = local_78 + 1;
      do {
        iVar11 = (int)*plVar2 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *(int *)plVar2 = iVar11;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar11 == 0) {
        local_78[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar14 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar14;
        local_68 = *plVar16;
        FUN_02a44274(lVar14 + 0xd8,&local_68);
      }
    }
  }
  if (local_80 != (long *)0x0) {
    FUN_02605ea4(local_80,1);
    FUN_026077a0(local_80);
    if (local_80 != (long *)0x0) {
      lVar14 = local_80[0xb];
      piVar1 = (int *)(lVar14 + 0xc);
      do {
        iVar11 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar11 + -1 == 0) {
        *(undefined8 *)(lVar14 + 0x18) = 0;
        (**(code **)(*local_80 + 0x20))();
        plVar16 = (long *)plVar6[0x13];
        goto joined_r0x00ccece0;
      }
    }
  }
  plVar16 = (long *)plVar6[0x13];
joined_r0x00ccece0:
  if (plVar16 != (long *)0x0) {
    lVar14 = plVar16[0xb];
    if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar14 + 0x10) == 0) {
      uVar13 = (**(code **)**(undefined8 **)(lVar14 + 0x18))();
      *(undefined8 *)(lVar14 + 0x10) = uVar13;
    }
    piVar1 = (int *)(lVar14 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    local_78 = (long *)0x0;
    uStack_70 = 0;
    FUN_01b0043c(&local_78,plVar16 + 0xcd);
    plVar2 = local_78;
    puVar10 = PTR_DAT_04379e70;
    puVar9 = PTR_DAT_04379e68;
    if (local_78 != (long *)0x0) {
      if (*(int *)((long)local_78 + 0xc) != 0) {
        piVar1 = (int *)((long)local_78 + 0xc);
        iVar11 = *(int *)((long)local_78 + 0xc);
        do {
          plVar15 = (long *)plVar2[2];
          if (((*puVar9 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar9), iVar12 != 0)) {
            if (((*PTR_DAT_043795d8 & 1) == 0) &&
               (iVar12 = __cxa_guard_acquire(PTR_DAT_043795d8), iVar12 != 0)) {
              if (((*puVar7 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar7), iVar12 != 0)) {
                uVar13 = FUN_0087f8f0();
                *(undefined8 *)puVar8 = uVar13;
                __cxa_guard_release(puVar7);
              }
              *(undefined **)PTR_DAT_043795e0 = puVar8;
              __cxa_guard_release(PTR_DAT_043795d8);
            }
            *(undefined **)puVar10 = PTR_DAT_043795e0;
            __cxa_guard_release(puVar9);
          }
          while( true ) {
            if (plVar15 == (long *)0x0) goto LAB_00ccf2c0;
            if (plVar15 == (long *)puVar10) break;
            plVar15 = (long *)*plVar15;
          }
          iVar12 = *piVar1;
          if (iVar12 == iVar11) {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar11 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') {
              lVar14 = plVar2[3];
              plVar2 = (long *)0x0;
              plVar15 = local_78;
              if (lVar14 != 0) {
                plVar2 = (long *)(lVar14 + -0x50);
              }
              goto joined_r0x00ccf238;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          iVar11 = iVar12;
        } while (iVar12 != 0);
      }
LAB_00ccf2c0:
      plVar2 = (long *)0x0;
      plVar15 = local_78;
joined_r0x00ccf238:
      local_78 = plVar15;
      if (plVar15 != (long *)0x0) {
        plVar3 = plVar15 + 1;
        do {
          iVar11 = (int)*plVar3 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar5) {
            *(int *)plVar3 = iVar11;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar11 == 0) {
          plVar15[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar14 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar14;
          local_68 = *plVar15;
          FUN_02a44274(lVar14 + 0xd8,&local_68);
        }
      }
      if (plVar2 != (long *)0x0) {
        local_78 = (long *)CONCAT44(local_78._4_4_,1);
        FUN_025eb1cc(plVar2,&local_78,1);
        lVar14 = plVar2[0xb];
        piVar1 = (int *)(lVar14 + 0xc);
        do {
          iVar11 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar11 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar11 + -1 == 0) {
          *(undefined8 *)(lVar14 + 0x18) = 0;
          (**(code **)(*plVar2 + 0x20))(plVar2);
        }
      }
    }
    FUN_01aef8a8(&local_78,plVar16);
    plVar2 = local_78;
    puVar10 = PTR_DAT_0437b0a0;
    puVar9 = PTR_DAT_0437b098;
    if (local_78 != (long *)0x0) {
      if (*(int *)((long)local_78 + 0xc) != 0) {
        piVar1 = (int *)((long)local_78 + 0xc);
        iVar11 = *(int *)((long)local_78 + 0xc);
        do {
          plVar15 = (long *)plVar2[2];
          if (((*puVar9 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar9), iVar12 != 0)) {
            if (((*PTR_DAT_043795d8 & 1) == 0) &&
               (iVar12 = __cxa_guard_acquire(PTR_DAT_043795d8), iVar12 != 0)) {
              if (((*puVar7 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar7), iVar12 != 0)) {
                uVar13 = FUN_0087f8f0();
                *(undefined8 *)puVar8 = uVar13;
                __cxa_guard_release(puVar7);
              }
              *(undefined **)PTR_DAT_043795e0 = puVar8;
              __cxa_guard_release(PTR_DAT_043795d8);
            }
            *(undefined **)puVar10 = PTR_DAT_043795e0;
            __cxa_guard_release(puVar9);
          }
          while( true ) {
            if (plVar15 == (long *)0x0) goto LAB_00ccf52c;
            if (plVar15 == (long *)puVar10) break;
            plVar15 = (long *)*plVar15;
          }
          iVar12 = *piVar1;
          if (iVar12 == iVar11) {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar11 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') {
              lVar14 = plVar2[3];
              plVar2 = (long *)0x0;
              plVar15 = local_78;
              if (lVar14 != 0) {
                plVar2 = (long *)(lVar14 + -0x50);
              }
              goto joined_r0x00ccf400;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          iVar11 = iVar12;
        } while (iVar12 != 0);
      }
LAB_00ccf52c:
      plVar2 = (long *)0x0;
      plVar15 = local_78;
joined_r0x00ccf400:
      local_78 = plVar15;
      if (plVar15 != (long *)0x0) {
        plVar3 = plVar15 + 1;
        do {
          iVar11 = (int)*plVar3 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar5) {
            *(int *)plVar3 = iVar11;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar11 == 0) {
          plVar15[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar14 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar14;
          local_68 = *plVar15;
          FUN_02a44274(lVar14 + 0xd8,&local_68);
        }
      }
      if (plVar2 != (long *)0x0) {
        FUN_025cc5b4(plVar2,0);
        lVar14 = plVar2[0xb];
        piVar1 = (int *)(lVar14 + 0xc);
        do {
          iVar11 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar11 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar11 + -1 == 0) {
          *(undefined8 *)(lVar14 + 0x18) = 0;
          (**(code **)(*plVar2 + 0x20))(plVar2);
        }
      }
    }
    lVar14 = plVar16[0xb];
    piVar1 = (int *)(lVar14 + 0xc);
    do {
      iVar11 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar14 + 0x18) = 0;
      (**(code **)(*plVar16 + 0x20))(plVar16);
    }
  }
  FUN_0199c048(&local_78,plVar6);
  if (local_78 == (long *)0x0) {
    local_80 = (long *)0x0;
  }
  else {
    FUN_00ccf754(&local_80);
    plVar16 = local_78;
    if (local_78 != (long *)0x0) {
      plVar2 = local_78 + 1;
      do {
        iVar11 = (int)*plVar2 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *(int *)plVar2 = iVar11;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar11 == 0) {
        local_78[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar14 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar14;
        local_68 = *plVar16;
        FUN_02a44274(lVar14 + 0xd8,&local_68);
      }
    }
  }
  if (local_80 != (long *)0x0) {
    FUN_019bbbdc(&local_78);
    if (local_78 == (long *)0x0) {
      local_88 = (long *)0x0;
    }
    else {
      FUN_00ccf8c8(&local_88);
      plVar16 = local_78;
      if (local_78 != (long *)0x0) {
        plVar2 = local_78 + 1;
        do {
          iVar11 = (int)*plVar2 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *(int *)plVar2 = iVar11;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar11 == 0) {
          local_78[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar14 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar14;
          local_68 = *plVar16;
          FUN_02a44274(lVar14 + 0xd8,&local_68);
        }
      }
    }
    if (local_88 != (long *)0x0) {
      FUN_0195298c(&local_78,local_88,0x15);
      if ((local_78 != (long *)0x0) && (FUN_01951200(), local_78 != (long *)0x0)) {
        lVar14 = local_78[0xb];
        piVar1 = (int *)(lVar14 + 0xc);
        do {
          iVar11 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar11 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar11 + -1 == 0) {
          *(undefined8 *)(lVar14 + 0x18) = 0;
          (**(code **)(*local_78 + 0x20))();
        }
      }
      if (local_88 != (long *)0x0) {
        lVar14 = local_88[0xb];
        piVar1 = (int *)(lVar14 + 0xc);
        do {
          iVar11 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar11 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar11 + -1 == 0) {
          *(undefined8 *)(lVar14 + 0x18) = 0;
          (**(code **)(*local_88 + 0x20))();
        }
      }
    }
    if (local_80 != (long *)0x0) {
      lVar14 = local_80[0xb];
      piVar1 = (int *)(lVar14 + 0xc);
      do {
        iVar11 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar11 + -1 == 0) {
        *(undefined8 *)(lVar14 + 0x18) = 0;
        (**(code **)(*local_80 + 0x20))();
      }
    }
  }
  lVar14 = plVar6[0xb];
  piVar1 = (int *)(lVar14 + 0xc);
  do {
    iVar11 = *piVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar5) {
      *piVar1 = iVar11 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar11 + -1 == 0) {
    *(undefined8 *)(lVar14 + 0x18) = 0;
    (**(code **)(*plVar6 + 0x20))(plVar6);
  }
  return;
}


