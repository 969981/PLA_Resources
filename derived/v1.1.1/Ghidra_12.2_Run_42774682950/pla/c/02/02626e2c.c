/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02626e2c; name: FUN_02626e2c
 */


void FUN_02626e2c(long param_1,uint param_2)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  byte *pbVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  undefined8 uVar15;
  long lVar16;
  long *plVar17;
  long *local_78;
  undefined8 uStack_70;
  long local_68;
  
  local_78 = (long *)0x0;
  uStack_70 = 0;
  FUN_00cf98c8(&local_78,param_1 + 0x260);
  plVar7 = local_78;
  puVar11 = PTR_DAT_0437a668;
  puVar10 = PTR_DAT_0437a660;
  puVar9 = PTR_DAT_043794d8;
  puVar8 = PTR_DAT_043794d0;
  if (local_78 == (long *)0x0) {
    return;
  }
  if (*(int *)((long)local_78 + 0xc) != 0) {
    piVar1 = (int *)((long)local_78 + 0xc);
    iVar13 = *(int *)((long)local_78 + 0xc);
    do {
      plVar17 = (long *)plVar7[2];
      if (((*puVar11 & 1) == 0) && (iVar14 = __cxa_guard_acquire(puVar11), iVar14 != 0)) {
        if (((*puVar8 & 1) == 0) && (iVar14 = __cxa_guard_acquire(puVar8), iVar14 != 0)) {
          uVar15 = FUN_0087f8f0();
          *(undefined8 *)puVar9 = uVar15;
          __cxa_guard_release(puVar8);
        }
        *(undefined **)puVar10 = puVar9;
        __cxa_guard_release(puVar11);
      }
      while( true ) {
        if (plVar17 == (long *)0x0) goto LAB_02627120;
        if (plVar17 == (long *)puVar10) break;
        plVar17 = (long *)*plVar17;
      }
      iVar14 = *piVar1;
      if (iVar14 == iVar13) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar13 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar16 = plVar7[3];
          plVar7 = (long *)0x0;
          plVar17 = local_78;
          if (lVar16 != 0) {
            plVar7 = (long *)(lVar16 + -0x50);
          }
          goto joined_r0x02626f10;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar13 = iVar14;
    } while (iVar14 != 0);
  }
LAB_02627120:
  plVar7 = (long *)0x0;
  plVar17 = local_78;
joined_r0x02626f10:
  local_78 = plVar17;
  if (plVar17 != (long *)0x0) {
    plVar2 = plVar17 + 1;
    do {
      iVar13 = (int)*plVar2 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar13;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar13 == 0) {
      plVar17[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar16 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar16;
      local_68 = *plVar17;
      FUN_02a44274(lVar16 + 0xd8,&local_68);
    }
  }
  if (plVar7 == (long *)0x0) {
    return;
  }
  FUN_01e42f90(1,0xc,param_2 & 1);
  FUN_01e42f90(1,0x18,param_2 & 1);
  if (*(long *)(param_1 + 0x658) == 0) {
    local_78 = (long *)0x0;
  }
  else {
    FUN_00a75da4(&local_78);
    plVar17 = local_78;
    if (local_78 != (long *)0x0) {
      if ((param_2 & 1) == 0) {
        uVar12 = FUN_01e481f0();
      }
      else {
        uVar12 = FUN_01e48200();
      }
      FUN_01a2b6dc(plVar17,uVar12);
      if (local_78 != (long *)0x0) {
        lVar16 = local_78[0xb];
        piVar1 = (int *)(lVar16 + 0xc);
        do {
          iVar13 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar13 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar13 + -1 == 0) {
          *(undefined8 *)(lVar16 + 0x18) = 0;
          (**(code **)(*local_78 + 0x20))();
          lVar16 = *(long *)(param_1 + 0x668);
          pbVar5 = PTR_DAT_04382548;
          puVar6 = (undefined8 *)PTR_DAT_04382550;
          goto joined_r0x02627068;
        }
      }
    }
  }
  lVar16 = *(long *)(param_1 + 0x668);
  pbVar5 = PTR_DAT_04382548;
  puVar6 = (undefined8 *)PTR_DAT_04382550;
joined_r0x02627068:
  PTR_DAT_04382548 = pbVar5;
  PTR_DAT_04382550 = (undefined *)puVar6;
  if ((lVar16 != 0) && (*(int *)(lVar16 + 0xc) != 0)) {
    piVar1 = (int *)(lVar16 + 0xc);
    iVar13 = *(int *)(lVar16 + 0xc);
    do {
      plVar17 = *(long **)(lVar16 + 0x10);
      if (((*pbVar5 & 1) == 0) && (iVar14 = __cxa_guard_acquire(pbVar5), iVar14 != 0)) {
        if (((*PTR_DAT_043795d8 & 1) == 0) &&
           (iVar14 = __cxa_guard_acquire(PTR_DAT_043795d8), iVar14 != 0)) {
          if (((*puVar8 & 1) == 0) && (iVar14 = __cxa_guard_acquire(puVar8), iVar14 != 0)) {
            uVar15 = FUN_0087f8f0();
            *(undefined8 *)puVar9 = uVar15;
            __cxa_guard_release(puVar8);
          }
          *(undefined **)PTR_DAT_043795e0 = puVar9;
          __cxa_guard_release(PTR_DAT_043795d8);
        }
        *puVar6 = PTR_DAT_043795e0;
        __cxa_guard_release(pbVar5);
      }
      while( true ) {
        if (plVar17 == (long *)0x0) goto LAB_02626fa8;
        if (plVar17 == puVar6) break;
        plVar17 = (long *)*plVar17;
      }
      iVar14 = *piVar1;
      if (iVar14 == iVar13) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar13 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar16 = *(long *)(lVar16 + 0x18);
          if (lVar16 != 0) {
            plVar17 = (long *)(lVar16 + -0x50);
            if ((param_2 & 1) == 0) {
              uVar12 = FUN_01e481f0();
            }
            else {
              uVar12 = FUN_01e48200();
            }
            FUN_01b50bcc(plVar17,uVar12);
            lVar16 = *(long *)(lVar16 + 8);
            piVar1 = (int *)(lVar16 + 0xc);
            do {
              iVar13 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar13 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar13 + -1 == 0) {
              *(undefined8 *)(lVar16 + 0x18) = 0;
              (**(code **)(*plVar17 + 0x20))(plVar17);
            }
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar13 = iVar14;
    } while (iVar14 != 0);
  }
LAB_02626fa8:
  lVar16 = plVar7[0xb];
  piVar1 = (int *)(lVar16 + 0xc);
  do {
    iVar13 = *piVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = iVar13 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar13 + -1 == 0) {
    *(undefined8 *)(lVar16 + 0x18) = 0;
    (**(code **)(*plVar7 + 0x20))(plVar7);
  }
  return;
}


