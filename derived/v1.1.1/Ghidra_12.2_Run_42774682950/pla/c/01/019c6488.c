/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 019c6488; name: FUN_019c6488
 */


uint FUN_019c6488(long param_1,undefined1 *param_2,undefined1 (*param_3) [16])

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  int iVar11;
  ulong uVar12;
  undefined8 uVar13;
  ulong uVar14;
  ulong uVar15;
  uint uVar16;
  long lVar17;
  long *plVar18;
  long lVar19;
  long *plVar20;
  long lVar21;
  undefined1 auVar22 [16];
  long *local_80 [2];
  long *local_70;
  long local_68;
  
  puVar8 = PTR_DAT_04380750;
  puVar7 = PTR_DAT_04380748;
  lVar17 = *(long *)(param_1 + 0x250);
  if ((lVar17 != 0) && (*(int *)(lVar17 + 0xc) != 0)) {
    piVar1 = (int *)(lVar17 + 0xc);
    iVar10 = *(int *)(lVar17 + 0xc);
    do {
      plVar18 = *(long **)(lVar17 + 0x10);
      if (((*puVar7 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar7), iVar11 != 0)) {
        if (((*PTR_DAT_043794d0 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar11 != 0)) {
          uVar13 = FUN_0087f8f0();
          *(undefined8 *)PTR_DAT_043794d8 = uVar13;
          __cxa_guard_release(PTR_DAT_043794d0);
        }
        *(undefined **)puVar8 = PTR_DAT_043794d8;
        __cxa_guard_release(puVar7);
      }
      while( true ) {
        if (plVar18 == (long *)0x0) goto LAB_019c64b0;
        if (plVar18 == (long *)puVar8) break;
        plVar18 = (long *)*plVar18;
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
          lVar17 = *(long *)(lVar17 + 0x18);
          if (lVar17 != 0) {
            if ((param_2 == &DAT_cbf29ce484222645) || (param_2 == (undefined1 *)0xae652fb65c121b9b))
            {
              local_70 = (long *)0x0;
              goto LAB_019c6584;
            }
            uVar12 = *(ulong *)(lVar17 + 0x20);
            if (uVar12 == 0) goto LAB_019c6944;
            uVar14 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
            uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
            uVar14 = (uVar14 + (uVar14 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
            if (uVar14 < 2) {
              uVar15 = (ulong)((uint)uVar12 - 1) & 0x18;
            }
            else {
              uVar15 = 0x18;
              if (uVar12 < 0x19) {
                uVar16 = (uint)uVar12 & 0xff;
                uVar5 = 0;
                if ((uVar12 & 0xff) != 0) {
                  uVar5 = 0x18 / uVar16;
                }
                uVar15 = (ulong)(0x18 - uVar5 * uVar16);
              }
            }
            plVar18 = *(long **)(*(long *)(lVar17 + 0x18) + uVar15 * 8);
            if ((plVar18 == (long *)0x0) || (plVar18 = (long *)*plVar18, plVar18 == (long *)0x0))
            goto LAB_019c6944;
            if (1 < uVar14) goto LAB_019c6648;
            goto LAB_019c674c;
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar10 = iVar11;
    } while (iVar11 != 0);
  }
  goto LAB_019c64b0;
LAB_019c6648:
  do {
    uVar14 = plVar18[1];
    if (uVar14 == 0x18) {
      if ((int)plVar18[2] == 0x18) goto LAB_019c6660;
    }
    else {
      if (uVar12 <= uVar14) {
        uVar6 = 0;
        if (uVar12 != 0) {
          uVar6 = uVar14 / uVar12;
        }
        uVar14 = uVar14 - uVar6 * uVar12;
      }
      if (uVar14 != uVar15) break;
    }
    plVar18 = (long *)*plVar18;
  } while (plVar18 != (long *)0x0);
  goto LAB_019c6944;
  while (plVar18 = (long *)*plVar18, plVar18 != (long *)0x0) {
LAB_019c674c:
    if (plVar18[1] == 0x18) {
      if ((int)plVar18[2] == 0x18) goto LAB_019c6660;
    }
    else if ((plVar18[1] & uVar12 - 1) != uVar15) break;
  }
LAB_019c6944:
                    /* WARNING: Subroutine does not return */
  FUN_019c8c40();
LAB_019c6660:
  plVar18 = (long *)plVar18[3];
  if (plVar18 != (long *)0x0) {
    lVar19 = plVar18[0xb];
    if (*(undefined8 **)(lVar19 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar19 + 0x10) == 0) {
      uVar13 = (**(code **)**(undefined8 **)(lVar19 + 0x18))();
      *(undefined8 *)(lVar19 + 0x10) = uVar13;
    }
    piVar1 = (int *)(lVar19 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar20 = (long *)(**(code **)plVar18[10])(plVar18 + 10);
  if (((*PTR_DAT_04381e28 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_04381e28), puVar7 = PTR_DAT_0437b018, iVar10 != 0)) {
    if (((*PTR_DAT_0437b010 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_0437b010), iVar10 != 0)) {
      if (((*PTR_DAT_043794d0 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar10 != 0)) {
        uVar13 = FUN_0087f8f0();
        *(undefined8 *)PTR_DAT_043794d8 = uVar13;
        __cxa_guard_release(PTR_DAT_043794d0);
      }
      *(undefined **)puVar7 = PTR_DAT_043794d8;
      __cxa_guard_release(PTR_DAT_0437b010);
    }
    *(undefined **)PTR_DAT_04381e30 = puVar7;
    __cxa_guard_release(PTR_DAT_04381e28);
  }
  for (; plVar20 != (long *)0x0; plVar20 = (long *)*plVar20) {
    if (plVar20 == (long *)PTR_DAT_04381e30) {
      iVar10 = (**(code **)(*plVar18 + 0x48))(plVar18);
      if (0 < iVar10) {
        FUN_0197449c(&local_70,plVar18,param_2);
        goto joined_r0x019c6704;
      }
      break;
    }
  }
  local_70 = (long *)0x0;
joined_r0x019c6704:
  if (plVar18 != (long *)0x0) {
    lVar19 = plVar18[0xb];
    piVar1 = (int *)(lVar19 + 0xc);
    do {
      iVar10 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar19 + 0x18) = 0;
      (**(code **)(*plVar18 + 0x20))(plVar18);
    }
  }
LAB_019c6584:
  plVar18 = (long *)(lVar17 + -0x50);
  if (local_70 == (long *)0x0) {
    FUN_019c7bd4(local_80,plVar18,0x1a,param_2);
    puVar9 = PTR_DAT_043794c0;
    puVar8 = PTR_DAT_043794b8;
    puVar7 = PTR_DAT_043794b0;
    if (local_80[0] == (long *)0x0) {
      bVar4 = false;
    }
    else {
      lVar19 = local_80[0][0x35];
      piVar1 = (int *)(lVar19 + 0xc);
      iVar10 = *(int *)(lVar19 + 0xc);
      do {
        while( true ) {
          plVar20 = *(long **)(lVar19 + 0x10);
          if (((*puVar7 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar7), iVar11 != 0)) {
            if (((*puVar9 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar9), iVar11 != 0)) {
              if (((*PTR_DAT_043794d0 & 1) == 0) &&
                 (iVar11 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar11 != 0)) {
                uVar13 = FUN_0087f8f0();
                *(undefined8 *)PTR_DAT_043794d8 = uVar13;
                __cxa_guard_release(PTR_DAT_043794d0);
              }
              *(undefined **)PTR_DAT_043794c8 = PTR_DAT_043794d8;
              __cxa_guard_release(puVar9);
            }
            *(undefined **)puVar8 = PTR_DAT_043794c8;
            __cxa_guard_release(puVar7);
          }
          for (; plVar20 != (long *)puVar8; plVar20 = (long *)*plVar20) {
          }
          iVar11 = *piVar1;
          if (iVar11 == iVar10) break;
          ClearExclusiveLocal();
          iVar10 = iVar11;
        }
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        iVar10 = iVar11;
      } while (cVar3 != '\0');
      lVar19 = *(long *)(lVar19 + 0x18);
      plVar20 = (long *)0x0;
      if (lVar19 != 0) {
        plVar20 = (long *)(lVar19 + -0x50);
      }
      lVar21 = plVar20[0x1a];
      *(long *)(*param_3 + 8) = plVar20[0x1b];
      *(long *)*param_3 = lVar21;
      if (lVar19 != 0) {
        lVar19 = plVar20[0xb];
        piVar1 = (int *)(lVar19 + 0xc);
        do {
          iVar10 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar10 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar10 + -1 == 0) {
          *(undefined8 *)(lVar19 + 0x18) = 0;
          (**(code **)(*plVar20 + 0x20))();
        }
      }
      param_3[1][8] = 0;
      *(undefined1 **)param_3[1] = param_2;
      if (local_80[0] != (long *)0x0) {
        lVar19 = local_80[0][0xb];
        piVar1 = (int *)(lVar19 + 0xc);
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
          *(undefined8 *)(lVar19 + 0x18) = 0;
          (**(code **)(*local_80[0] + 0x20))();
        }
      }
      bVar4 = true;
      param_3 = (undefined1 (*) [16])0x1;
    }
  }
  else {
    uVar12 = FUN_01b4c4b4();
    if ((uVar12 & 1) == 0) {
      auVar22 = FUN_01b4c2b0(local_70);
      param_3[1][8] = 1;
      *param_3 = auVar22;
      FUN_019c7af4(local_80,local_70);
      FUN_019c96f0(param_3 + 2,local_80);
      if (local_80[0] != (long *)0x0) {
        plVar20 = local_80[0] + 1;
        do {
          iVar10 = (int)*plVar20 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar4) {
            *(int *)plVar20 = iVar10;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar10 == 0) {
          local_80[0][2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar19 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar19;
          local_68 = *local_80[0];
          FUN_02a44274(lVar19 + 0xd8,&local_68);
        }
      }
      *(undefined1 **)param_3[1] = param_2;
      param_3 = (undefined1 (*) [16])0x1;
    }
    else {
      param_3 = (undefined1 (*) [16])0x0;
    }
    if (local_70 != (long *)0x0) {
      lVar19 = local_70[0xb];
      piVar1 = (int *)(lVar19 + 0xc);
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
        *(undefined8 *)(lVar19 + 0x18) = 0;
        (**(code **)(*local_70 + 0x20))();
        bVar4 = true;
        goto LAB_019c6adc;
      }
    }
    bVar4 = true;
  }
LAB_019c6adc:
  uVar16 = (uint)param_3;
  lVar17 = *(long *)(lVar17 + 8);
  piVar1 = (int *)(lVar17 + 0xc);
  do {
    iVar10 = *piVar1;
    cVar3 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar2) {
      *piVar1 = iVar10 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar10 + -1 == 0) {
    *(undefined8 *)(lVar17 + 0x18) = 0;
    (**(code **)(*plVar18 + 0x20))(plVar18);
  }
  if (bVar4) goto LAB_019c64b4;
LAB_019c64b0:
  uVar16 = 0;
LAB_019c64b4:
  return uVar16 & 1;
}


