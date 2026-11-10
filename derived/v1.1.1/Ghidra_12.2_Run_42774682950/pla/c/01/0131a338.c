/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0131a338; name: FUN_0131a338
 */


undefined4 FUN_0131a338(void)

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
  undefined8 *puVar11;
  undefined4 uVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long *local_78;
  undefined8 uStack_70;
  long local_68;
  long local_58;
  
  if (((*PTR_DAT_04379678 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379678), iVar9 != 0))
  {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  lVar13 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar13;
  plVar15 = *(long **)(lVar13 + 0xc0);
  if (plVar15 != (long *)0x0) {
    lVar13 = plVar15[0xb];
    if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) {
LAB_0131a600:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar13 + 0x10) == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
      *(undefined8 *)(lVar13 + 0x10) = uVar10;
    }
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  local_58 = plVar15[0x18];
  local_68 = local_58 + plVar15[0x19] * 8;
  FUN_0131bcb0(&local_78,&local_58,&local_68);
  if (local_78 != (long *)(plVar15[0x18] + plVar15[0x19] * 8)) {
    plVar16 = (long *)*local_78;
    puVar11 = (undefined8 *)(**(code **)plVar16[10])(plVar16 + 10);
    if (((*PTR_DAT_0437c678 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_0437c678), iVar9 != 0)) {
      uVar10 = FUN_009311a8();
      *(undefined8 *)PTR_DAT_0437c680 = uVar10;
      __cxa_guard_release(PTR_DAT_0437c678);
    }
    if (puVar11 != (undefined8 *)0x0) {
LAB_0131a424:
      if (puVar11 != (undefined8 *)PTR_DAT_0437c680) goto LAB_0131a528;
      lVar13 = plVar16[0xb];
      if (*(undefined8 **)(lVar13 + 0x18) != (undefined8 *)0x0) {
        if (*(long *)(lVar13 + 0x10) == 0) {
          uVar10 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
          *(undefined8 *)(lVar13 + 0x10) = uVar10;
        }
        piVar1 = (int *)(lVar13 + 0xc);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          plVar14 = plVar16;
        } while (cVar2 != '\0');
        goto joined_r0x0131a468;
      }
      goto LAB_0131a600;
    }
  }
  plVar14 = (long *)0x0;
joined_r0x0131a468:
  if (plVar15 != (long *)0x0) {
    lVar13 = plVar15[0xb];
    piVar1 = (int *)(lVar13 + 0xc);
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
      *(undefined8 *)(lVar13 + 0x18) = 0;
      (**(code **)(*plVar15 + 0x20))(plVar15);
    }
  }
  if (plVar14 == (long *)0x0) {
    return 7;
  }
  if (plVar14[0x1a] == 0) {
    local_78 = (long *)0x0;
    uStack_70 = 0;
  }
  else {
    local_78 = (long *)0x0;
    uStack_70 = 0;
    FUN_019d08dc(&local_78,plVar14[0x1a] + 0x1c0);
    plVar15 = local_78;
    puVar7 = PTR_DAT_0437c670;
    puVar6 = PTR_DAT_0437c668;
    puVar5 = PTR_DAT_043794d8;
    puVar4 = PTR_DAT_043794d0;
    if (local_78 != (long *)0x0) {
      if (*(int *)((long)local_78 + 0xc) != 0) {
        piVar1 = (int *)((long)local_78 + 0xc);
        iVar9 = *(int *)((long)local_78 + 0xc);
        do {
          plVar16 = (long *)plVar15[2];
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
            if (plVar16 == (long *)0x0) goto LAB_0131a890;
            if (plVar16 == (long *)puVar7) break;
            plVar16 = (long *)*plVar16;
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
              lVar13 = plVar15[3];
              plVar15 = (long *)0x0;
              plVar16 = local_78;
              if (lVar13 != 0) {
                plVar15 = (long *)(lVar13 + -0x50);
              }
              goto joined_r0x0131a668;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          iVar9 = iVar8;
        } while (iVar8 != 0);
      }
LAB_0131a890:
      plVar15 = (long *)0x0;
      plVar16 = local_78;
joined_r0x0131a668:
      local_78 = plVar16;
      if (plVar16 != (long *)0x0) {
        plVar17 = plVar16 + 1;
        do {
          iVar9 = (int)*plVar17 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar3) {
            *(int *)plVar17 = iVar9;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar9 == 0) {
          plVar16[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar13 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar13;
          local_58 = *plVar16;
          FUN_02a44274(lVar13 + 0xd8,&local_58);
        }
      }
      if (plVar15 != (long *)0x0) {
        puVar11 = (undefined8 *)FUN_0196bd2c(plVar15);
        plVar17 = (long *)*puVar11;
        plVar16 = (long *)PTR_DAT_04379c88;
        if (plVar17 != (long *)0x0) {
          (**(code **)(*plVar17 + 0x18))(plVar17);
          plVar16 = plVar17 + 0xb;
        }
        lVar13 = *plVar16;
        if (lVar13 < -0x1c4412fb859ba949) {
          if (lVar13 == -0x1c4413fb859baafc) {
            uVar12 = 1;
          }
          else if (lVar13 == -0x1c4415fb859bae62) {
            uVar12 = 3;
          }
          else {
            if (lVar13 != -0x1c4414fb859bacaf) goto LAB_0131a7f8;
            uVar12 = 4;
          }
        }
        else if (lVar13 == -0x1c4410fb859ba5e3) {
          uVar12 = 0;
        }
        else if (lVar13 == -0x1c4412fb859ba949) {
          uVar12 = 2;
        }
        else if (lVar13 == -0x1c4411fb859ba796) {
          uVar12 = 5;
        }
        else {
LAB_0131a7f8:
          uVar12 = 6;
          if (lVar13 != -0x1c4417fb859bb1c8) {
            uVar12 = 7;
          }
        }
        if (plVar17 != (long *)0x0) {
          (**(code **)(*plVar17 + 0x20))(plVar17);
        }
        lVar13 = plVar15[0xb];
        piVar1 = (int *)(lVar13 + 0xc);
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
          *(undefined8 *)(lVar13 + 0x18) = 0;
          (**(code **)(*plVar15 + 0x20))(plVar15);
        }
        goto LAB_0131a4b0;
      }
    }
  }
  uVar12 = 7;
LAB_0131a4b0:
  lVar13 = plVar14[0xb];
  piVar1 = (int *)(lVar13 + 0xc);
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
    *(undefined8 *)(lVar13 + 0x18) = 0;
    (**(code **)(*plVar14 + 0x20))(plVar14);
  }
  return uVar12;
LAB_0131a528:
  puVar11 = (undefined8 *)*puVar11;
  plVar14 = (long *)0x0;
  if (puVar11 == (undefined8 *)0x0) goto joined_r0x0131a468;
  goto LAB_0131a424;
}


