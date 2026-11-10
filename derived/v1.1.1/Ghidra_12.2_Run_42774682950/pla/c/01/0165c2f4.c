/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0165c2f4; name: FUN_0165c2f4
 */


undefined8 FUN_0165c2f4(void)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  undefined8 *local_78 [2];
  undefined8 local_68;
  
  FUN_0165a59c(local_78);
  puVar5 = local_78[0];
  puVar9 = PTR_DAT_0437c670;
  puVar8 = PTR_DAT_0437c668;
  puVar7 = PTR_DAT_043794d8;
  puVar6 = PTR_DAT_043794d0;
  if (local_78[0] == (undefined8 *)0x0) {
    return 0;
  }
  if (*(int *)((long)local_78[0] + 0xc) != 0) {
    piVar1 = (int *)((long)local_78[0] + 0xc);
    iVar11 = *(int *)((long)local_78[0] + 0xc);
    do {
      plVar15 = (long *)puVar5[2];
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
        if (plVar15 == (long *)0x0) goto LAB_0165c550;
        if (plVar15 == (long *)puVar9) break;
        plVar15 = (long *)*plVar15;
      }
      iVar10 = *piVar1;
      if (iVar10 == iVar11) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar11 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar13 = puVar5[3];
          plVar15 = (long *)0x0;
          puVar5 = local_78[0];
          if (lVar13 != 0) {
            plVar15 = (long *)(lVar13 + -0x50);
          }
          goto joined_r0x0165c404;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar11 = iVar10;
    } while (iVar10 != 0);
  }
LAB_0165c550:
  plVar15 = (long *)0x0;
  puVar5 = local_78[0];
joined_r0x0165c404:
  local_78[0] = puVar5;
  if (puVar5 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar5 + 1);
    do {
      iVar11 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar11 + -1 == 0) {
      puVar5[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar13 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar13;
      local_68 = *puVar5;
      FUN_02a44274(lVar13 + 0xd8,&local_68);
    }
  }
  if (plVar15 == (long *)0x0) {
    return 0;
  }
  plVar14 = (long *)plVar15[0xe];
  if (plVar14 != (long *)0x0) {
    lVar13 = plVar14[0xb];
    if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar13 + 0x10) == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
      *(undefined8 *)(lVar13 + 0x10) = uVar12;
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
    if (((int)plVar14[0x42] == 2) &&
       (FUN_0199eeac(local_78,plVar14), puVar5 = local_78[0], puVar9 = PTR_DAT_0437ee90,
       puVar8 = PTR_DAT_0437ee88, local_78[0] != (undefined8 *)0x0)) {
      if (*(int *)((long)local_78[0] + 0xc) != 0) {
        piVar1 = (int *)((long)local_78[0] + 0xc);
        iVar11 = *(int *)((long)local_78[0] + 0xc);
        do {
          plVar16 = (long *)puVar5[2];
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
            if (plVar16 == (long *)0x0) goto LAB_0165c738;
            if (plVar16 == (long *)puVar9) break;
            plVar16 = (long *)*plVar16;
          }
          iVar10 = *piVar1;
          if (iVar10 == iVar11) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar11 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') {
              lVar13 = puVar5[3];
              plVar16 = (long *)0x0;
              puVar5 = local_78[0];
              if (lVar13 != 0) {
                plVar16 = (long *)(lVar13 + -0x50);
              }
              goto joined_r0x0165c644;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          iVar11 = iVar10;
        } while (iVar10 != 0);
      }
LAB_0165c738:
      plVar16 = (long *)0x0;
      puVar5 = local_78[0];
joined_r0x0165c644:
      if (puVar5 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar5 + 1);
        do {
          iVar11 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar11 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar11 + -1 == 0) {
          puVar5[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar13 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar13;
          local_68 = *puVar5;
          FUN_02a44274(lVar13 + 0xd8,&local_68);
        }
      }
      bVar3 = false;
      if (plVar16 != (long *)0x0) {
        FUN_019c7f44(plVar16);
        lVar13 = plVar16[0xb];
        piVar1 = (int *)(lVar13 + 0xc);
        do {
          iVar11 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar11 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar11 == 1) {
          *(undefined8 *)(lVar13 + 0x18) = 0;
          (**(code **)(*plVar16 + 0x20))(plVar16);
        }
        bVar3 = true;
      }
    }
    else {
      bVar3 = false;
    }
    lVar13 = plVar14[0xb];
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      iVar11 = *piVar1;
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar13 + 0x18) = 0;
      (**(code **)(*plVar14 + 0x20))(plVar14);
    }
    if (bVar3) {
      uVar12 = 1;
      goto joined_r0x0165c518;
    }
  }
  uVar12 = 0;
joined_r0x0165c518:
  if (plVar15 == (long *)0x0) {
    return uVar12;
  }
  lVar13 = plVar15[0xb];
  piVar1 = (int *)(lVar13 + 0xc);
  do {
    iVar11 = *piVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = iVar11 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar11 + -1 == 0) {
    *(undefined8 *)(lVar13 + 0x18) = 0;
    (**(code **)(*plVar15 + 0x20))();
    return uVar12;
  }
  return uVar12;
}


