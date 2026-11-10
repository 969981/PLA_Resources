/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0191632c; name: FUN_0191632c
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_0191632c(long *param_1,byte param_2,ulong param_3)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  long lVar15;
  undefined8 uVar16;
  bool bVar17;
  long lVar18;
  long *plVar19;
  undefined8 *local_78 [2];
  undefined8 local_68;
  
  puVar11 = PTR_DAT_043794c8;
  puVar10 = PTR_DAT_043794c0;
  puVar9 = PTR_DAT_043794b8;
  puVar8 = PTR_DAT_043794b0;
  lVar18 = *param_1;
  if (lVar18 == 0) {
    return;
  }
  if (*(int *)(lVar18 + 0xc) == 0) {
    return;
  }
  piVar1 = (int *)(lVar18 + 0xc);
  iVar14 = *(int *)(lVar18 + 0xc);
  do {
    plVar19 = *(long **)(lVar18 + 0x10);
    if (((*puVar8 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar8), iVar13 != 0)) {
      if (((*puVar10 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar10), iVar13 != 0)) {
        if (((*PTR_DAT_043794d0 & 1) == 0) &&
           (iVar13 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar13 != 0)) {
          uVar16 = FUN_0087f8f0();
          *(undefined8 *)PTR_DAT_043794d8 = uVar16;
          __cxa_guard_release(PTR_DAT_043794d0);
        }
        *(undefined **)puVar11 = PTR_DAT_043794d8;
        __cxa_guard_release(puVar10);
      }
      *(undefined **)puVar9 = puVar11;
      __cxa_guard_release(puVar8);
    }
    while( true ) {
      if (plVar19 == (long *)0x0) {
        return;
      }
      if (plVar19 == (long *)puVar9) break;
      plVar19 = (long *)*plVar19;
    }
    iVar13 = *piVar1;
    if (iVar13 == iVar14) {
      cVar4 = '\x01';
      bVar17 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar17) {
        *piVar1 = iVar14 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 == '\0') {
        lVar18 = *(long *)(lVar18 + 0x18);
        if (lVar18 == 0) {
          return;
        }
        if ((param_3 & 1) == 0) {
          lVar15 = FUN_00a3e9dc(lVar18 + 0xa0,local_78);
          if (lVar15 != 0) {
            FUN_02a9d180(lVar15,param_2 & 1);
          }
          goto LAB_0191641c;
        }
        lVar15 = FUN_009b807c();
        if ((lVar15 == 0) ||
           (FUN_01a73640(local_78), puVar7 = local_78[0], puVar10 = PTR_DAT_04379e90,
           puVar9 = PTR_DAT_04379e88, puVar8 = PTR_DAT_043795d8, local_78[0] == (undefined8 *)0x0))
        goto LAB_0191641c;
        if (*(int *)((long)local_78[0] + 0xc) == 0) goto LAB_01916624;
        piVar1 = (int *)((long)local_78[0] + 0xc);
        iVar14 = *(int *)((long)local_78[0] + 0xc);
        break;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    iVar14 = iVar13;
    if (iVar13 == 0) {
      return;
    }
  } while( true );
  while (iVar14 = iVar13, iVar13 != 0) {
    plVar19 = (long *)puVar7[2];
    if (((*puVar9 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar9), iVar13 != 0)) {
      if (((*puVar8 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar8), iVar13 != 0)) {
        if (((*PTR_DAT_043794d0 & 1) == 0) &&
           (iVar13 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar13 != 0)) {
          uVar16 = FUN_0087f8f0();
          *(undefined8 *)PTR_DAT_043794d8 = uVar16;
          __cxa_guard_release(PTR_DAT_043794d0);
        }
        *(undefined **)PTR_DAT_043795e0 = PTR_DAT_043794d8;
        __cxa_guard_release(puVar8);
      }
      *(undefined **)puVar10 = PTR_DAT_043795e0;
      __cxa_guard_release(puVar9);
    }
    plVar5 = (long *)0x0;
    puVar6 = local_78[0];
    if (plVar19 == (long *)0x0) goto joined_r0x0191657c;
    while (plVar19 != (long *)puVar10) {
      plVar19 = (long *)*plVar19;
      if (plVar19 == (long *)0x0) {
        plVar5 = (long *)0x0;
        goto joined_r0x0191657c;
      }
    }
    iVar13 = *piVar1;
    if (iVar13 == iVar14) {
      cVar4 = '\x01';
      bVar17 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar17) {
        *piVar1 = iVar14 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 == '\0') {
        lVar15 = puVar7[3];
        plVar5 = (long *)0x0;
        if (lVar15 != 0) {
          plVar5 = (long *)(lVar15 + -0x50);
        }
        goto joined_r0x0191657c;
      }
    }
    else {
      ClearExclusiveLocal();
    }
  }
LAB_01916624:
  plVar5 = (long *)0x0;
  puVar6 = local_78[0];
joined_r0x0191657c:
  local_78[0] = puVar6;
  if (puVar6 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar6 + 1);
    do {
      iVar14 = *piVar1;
      cVar4 = '\x01';
      bVar17 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar17) {
        *piVar1 = iVar14 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar14 + -1 == 0) {
      puVar6[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar14 = __cxa_guard_acquire(PTR_DAT_04379498), iVar14 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar15 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar15;
      local_68 = *puVar6;
      FUN_02a44274(lVar15 + 0xd8,&local_68);
    }
  }
  if (plVar5 != (long *)0x0) {
    FUN_01a8b908(local_78,plVar5);
    puVar7 = local_78[0];
    puVar9 = PTR_DAT_04379e80;
    puVar8 = PTR_DAT_04379e78;
    if (local_78[0] != (undefined8 *)0x0) {
      if (*(int *)((long)local_78[0] + 0xc) != 0) {
        piVar1 = (int *)((long)local_78[0] + 0xc);
        iVar14 = *(int *)((long)local_78[0] + 0xc);
        do {
          plVar19 = (long *)puVar7[2];
          if (((*puVar8 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar8), iVar13 != 0)) {
            uVar16 = FUN_0095a420();
            *(undefined8 *)puVar9 = uVar16;
            __cxa_guard_release(puVar8);
          }
          while( true ) {
            if (plVar19 == (long *)0x0) goto LAB_01916790;
            if (plVar19 == (long *)puVar9) break;
            plVar19 = (long *)*plVar19;
          }
          iVar13 = *piVar1;
          if (iVar13 == iVar14) {
            cVar4 = '\x01';
            bVar17 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar17) {
              *piVar1 = iVar14 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') {
              lVar15 = puVar7[3];
              plVar19 = (long *)0x0;
              puVar7 = local_78[0];
              if (lVar15 != 0) {
                plVar19 = (long *)(lVar15 + -0x50);
              }
              goto joined_r0x019167b4;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          iVar14 = iVar13;
        } while (iVar13 != 0);
      }
LAB_01916790:
      plVar19 = (long *)0x0;
      puVar7 = local_78[0];
joined_r0x019167b4:
      if (puVar7 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar7 + 1);
        do {
          iVar14 = *piVar1;
          cVar4 = '\x01';
          bVar17 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar17) {
            *piVar1 = iVar14 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar14 + -1 == 0) {
          puVar7[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar14 = __cxa_guard_acquire(PTR_DAT_04379498), iVar14 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar15 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar15;
          local_68 = *puVar7;
          FUN_02a44274(lVar15 + 0xd8,&local_68);
        }
      }
      if (plVar19 != (long *)0x0) {
        uVar3 = *(uint *)((long)plVar19 + 0x214);
        uVar2 = uVar3 & 0xffffdfff;
        if ((param_2 & 1) == 0) {
          uVar2 = uVar3 | 0x2000;
        }
        bVar17 = (uVar3 != 0) != (uVar2 != 0);
        if ((((uVar2 != uVar3) && (((uVar2 != 0 ^ param_2) & 1) != 0)) &&
            (iVar14 = *(int *)((long)plVar19 + 0x21c), iVar14 != 0)) &&
           (*(int *)((long)plVar19 + 0x224) != 0)) {
          if ((param_2 & 1) == 0) {
            bVar12 = iVar14 == 2;
          }
          else {
            bVar12 = (bool)(iVar14 == 1 & param_2);
          }
          bVar17 = (bool)(bVar17 | bVar12);
        }
        if (bVar17 == false) {
          *(uint *)((long)plVar19 + 0x214) = uVar2;
          if ((*(uint *)(plVar19 + 0x42) != uVar2) && (*(int *)((long)plVar19 + 0x21c) == 0)) {
            *(uint *)(plVar19 + 0x42) = uVar2;
          }
        }
        else {
          FUN_01bdbf3c(plVar19,uVar2);
          *(uint *)((long)plVar19 + 0x214) = uVar2;
        }
        lVar15 = plVar19[0xb];
        piVar1 = (int *)(lVar15 + 0xc);
        do {
          iVar14 = *piVar1;
          cVar4 = '\x01';
          bVar17 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar17) {
            *piVar1 = iVar14 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar14 + -1 == 0) {
          *(undefined8 *)(lVar15 + 0x18) = 0;
          (**(code **)(*plVar19 + 0x20))(plVar19);
        }
      }
    }
    lVar15 = plVar5[0xb];
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      iVar14 = *piVar1;
      cVar4 = '\x01';
      bVar17 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar17) {
        *piVar1 = iVar14 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar14 + -1 == 0) {
      *(undefined8 *)(lVar15 + 0x18) = 0;
      (**(code **)(*plVar5 + 0x20))(plVar5);
    }
  }
LAB_0191641c:
  lVar15 = *(long *)(lVar18 + 8);
  piVar1 = (int *)(lVar15 + 0xc);
  do {
    iVar14 = *piVar1;
    cVar4 = '\x01';
    bVar17 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar17) {
      *piVar1 = iVar14 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar14 + -1 == 0) {
    *(undefined8 *)(lVar15 + 0x18) = 0;
    (**(code **)(*(long *)(lVar18 + -0x50) + 0x20))((long *)(lVar18 + -0x50));
  }
  return;
}


