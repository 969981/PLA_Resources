/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0158c240; name: FUN_0158c240
 */


void FUN_0158c240(undefined8 *param_1)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long local_80;
  long *local_78 [2];
  long local_68;
  
  if (((*PTR_DAT_04379678 & 1) == 0) &&
     (iVar11 = __cxa_guard_acquire(PTR_DAT_04379678), iVar11 != 0)) {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  lVar14 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar14;
  plVar16 = *(long **)(lVar14 + 0xc0);
  if (plVar16 != (long *)0x0) {
    lVar14 = plVar16[0xb];
    if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) goto LAB_0158c6c4;
    if (*(long *)(lVar14 + 0x10) == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar14 + 0x18))();
      *(undefined8 *)(lVar14 + 0x10) = uVar12;
    }
    piVar1 = (int *)(lVar14 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_68 = plVar16[0x18];
  local_80 = local_68 + plVar16[0x19] * 8;
  FUN_0158dd80(local_78,&local_68,&local_80);
  if (local_78[0] != (long *)(plVar16[0x18] + plVar16[0x19] * 8)) {
    plVar17 = (long *)*local_78[0];
    puVar13 = (undefined8 *)(**(code **)plVar17[10])(plVar17 + 10);
    if (((*PTR_DAT_0437c678 & 1) == 0) &&
       (iVar11 = __cxa_guard_acquire(PTR_DAT_0437c678), iVar11 != 0)) {
      uVar12 = FUN_009311a8();
      *(undefined8 *)PTR_DAT_0437c680 = uVar12;
      __cxa_guard_release(PTR_DAT_0437c678);
    }
    if (puVar13 != (undefined8 *)0x0) {
LAB_0158c330:
      if (puVar13 != (undefined8 *)PTR_DAT_0437c680) goto LAB_0158c430;
      lVar14 = plVar17[0xb];
      if (*(undefined8 **)(lVar14 + 0x18) != (undefined8 *)0x0) {
        if (*(long *)(lVar14 + 0x10) == 0) {
          uVar12 = (**(code **)**(undefined8 **)(lVar14 + 0x18))();
          *(undefined8 *)(lVar14 + 0x10) = uVar12;
        }
        piVar1 = (int *)(lVar14 + 0xc);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          plVar15 = plVar17;
        } while (cVar3 != '\0');
        goto joined_r0x0158c374;
      }
      goto LAB_0158c6c4;
    }
  }
  plVar15 = (long *)0x0;
joined_r0x0158c374:
  if (plVar16 == (long *)0x0) {
LAB_0158c394:
    if (plVar15 == (long *)0x0) goto LAB_0158c3ac;
LAB_0158c398:
    FUN_01e564f8(local_78,plVar15);
    plVar16 = local_78[0];
    puVar9 = PTR_DAT_0437c670;
    puVar8 = PTR_DAT_0437c668;
    puVar7 = PTR_DAT_043794d8;
    puVar6 = PTR_DAT_043794d0;
    if (local_78[0] == (long *)0x0) goto LAB_0158c3ac;
    if (*(int *)((long)local_78[0] + 0xc) != 0) {
      piVar1 = (int *)((long)local_78[0] + 0xc);
      iVar11 = *(int *)((long)local_78[0] + 0xc);
      do {
        plVar17 = (long *)plVar16[2];
        if (((*puVar8 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar8), iVar10 != 0)) {
          if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar6), iVar10 != 0)) {
            uVar12 = FUN_0087f8f0();
            *(undefined8 *)puVar7 = uVar12;
            __cxa_guard_release(puVar6);
          }
          *(undefined **)puVar9 = puVar7;
          __cxa_guard_release(puVar8);
        }
        while( true ) {
          if (plVar17 == (long *)0x0) goto LAB_0158c740;
          if (plVar17 == (long *)puVar9) break;
          plVar17 = (long *)*plVar17;
        }
        iVar10 = *piVar1;
        if (iVar10 == iVar11) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar11 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lVar14 = plVar16[3];
            plVar16 = (long *)0x0;
            plVar17 = local_78[0];
            if (lVar14 != 0) {
              plVar16 = (long *)(lVar14 + -0x50);
            }
            goto joined_r0x0158c550;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar11 = iVar10;
      } while (iVar10 != 0);
    }
LAB_0158c740:
    plVar16 = (long *)0x0;
    plVar17 = local_78[0];
joined_r0x0158c550:
    local_78[0] = plVar17;
    if (plVar17 != (long *)0x0) {
      plVar2 = plVar17 + 1;
      do {
        iVar11 = (int)*plVar2 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *(int *)plVar2 = iVar11;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar11 == 0) {
        plVar17[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar14 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar14;
        local_68 = *plVar17;
        FUN_02a44274(lVar14 + 0xd8,&local_68);
      }
    }
    if (plVar16 == (long *)0x0) goto LAB_0158c3ac;
    plVar17 = (long *)plVar16[0xe];
    bVar4 = false;
    if (plVar17 != (long *)0x0) {
      lVar14 = plVar17[0xb];
      if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) {
LAB_0158c6c4:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar14 + 0x10) == 0) {
        uVar12 = (**(code **)**(undefined8 **)(lVar14 + 0x18))();
        *(undefined8 *)(lVar14 + 0x10) = uVar12;
      }
      piVar1 = (int *)(lVar14 + 0xc);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      (**(code **)(*plVar17 + 0x10))(local_78,plVar17);
      *param_1 = 0;
      param_1[1] = 0;
      FUN_0109c02c(param_1,local_78);
      if (local_78[0] != (long *)0x0) {
        plVar2 = local_78[0] + 1;
        do {
          iVar11 = (int)*plVar2 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *(int *)plVar2 = iVar11;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar11 == 0) {
          local_78[0][2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar14 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar14;
          local_68 = *local_78[0];
          FUN_02a44274(lVar14 + 0xd8,&local_68);
        }
      }
      lVar14 = plVar17[0xb];
      piVar1 = (int *)(lVar14 + 0xc);
      do {
        iVar11 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar11 == 1) {
        *(undefined8 *)(lVar14 + 0x18) = 0;
        (**(code **)(*plVar17 + 0x20))(plVar17);
      }
      bVar4 = true;
    }
    lVar14 = plVar16[0xb];
    piVar1 = (int *)(lVar14 + 0xc);
    do {
      iVar11 = *piVar1;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar14 + 0x18) = 0;
      (**(code **)(*plVar16 + 0x20))(plVar16);
    }
    if (!bVar4) goto LAB_0158c3ac;
    bVar4 = true;
  }
  else {
    lVar14 = plVar16[0xb];
    piVar1 = (int *)(lVar14 + 0xc);
    do {
      iVar11 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar11 + -1 != 0) goto LAB_0158c394;
    *(undefined8 *)(lVar14 + 0x18) = 0;
    (**(code **)(*plVar16 + 0x20))(plVar16);
    if (plVar15 != (long *)0x0) goto LAB_0158c398;
LAB_0158c3ac:
    bVar4 = false;
  }
  if (plVar15 != (long *)0x0) {
    lVar14 = plVar15[0xb];
    piVar1 = (int *)(lVar14 + 0xc);
    do {
      iVar11 = *piVar1;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar14 + 0x18) = 0;
      (**(code **)(*plVar15 + 0x20))(plVar15);
      if (bVar4) {
        return;
      }
      goto LAB_0158c3d4;
    }
  }
  if (bVar4) {
    return;
  }
LAB_0158c3d4:
  *param_1 = 0;
  param_1[1] = 0;
  return;
LAB_0158c430:
  puVar13 = (undefined8 *)*puVar13;
  plVar15 = (long *)0x0;
  if (puVar13 == (undefined8 *)0x0) goto joined_r0x0158c374;
  goto LAB_0158c330;
}


