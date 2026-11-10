/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00ac8f98; name: FUN_00ac8f98
 */


void FUN_00ac8f98(long param_1)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  long *plVar14;
  undefined8 uVar15;
  long lVar16;
  long *plVar17;
  undefined8 *local_88;
  undefined8 uStack_80;
  long *local_78 [2];
  long local_68;
  
  *(undefined1 *)(param_1 + 0x204) = 1;
  FUN_009c69bc(local_78);
  lVar13 = FUN_009b807c(local_78[0] + 0x1e,&local_88);
  if (local_78[0] != (long *)0x0) {
    lVar16 = local_78[0][0xb];
    piVar1 = (int *)(lVar16 + 0xc);
    do {
      iVar11 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar16 + 0x18) = 0;
      (**(code **)(*local_78[0] + 0x20))();
    }
  }
  if ((lVar13 != 0) &&
     (FUN_01a753b4(local_78,lVar13), plVar14 = local_78[0], puVar9 = PTR_DAT_0437a688,
     puVar8 = PTR_DAT_0437a680, puVar7 = PTR_DAT_043795e0, puVar6 = PTR_DAT_043794d8,
     puVar5 = PTR_DAT_043794d0, local_78[0] != (long *)0x0)) {
    if (*(int *)((long)local_78[0] + 0xc) != 0) {
      piVar1 = (int *)((long)local_78[0] + 0xc);
      iVar11 = *(int *)((long)local_78[0] + 0xc);
      do {
        plVar17 = (long *)plVar14[2];
        if (((*puVar8 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar8), iVar12 != 0)) {
          if (((*PTR_DAT_043795d8 & 1) == 0) &&
             (iVar12 = __cxa_guard_acquire(PTR_DAT_043795d8), iVar12 != 0)) {
            if (((*puVar5 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar5), iVar12 != 0)) {
              uVar15 = FUN_0087f8f0();
              *(undefined8 *)puVar6 = uVar15;
              __cxa_guard_release(puVar5);
            }
            *(undefined **)puVar7 = puVar6;
            __cxa_guard_release(PTR_DAT_043795d8);
          }
          *(undefined **)puVar9 = puVar7;
          __cxa_guard_release(puVar8);
        }
        while( true ) {
          if (plVar17 == (long *)0x0) goto LAB_00ac9394;
          if (plVar17 == (long *)puVar9) break;
          plVar17 = (long *)*plVar17;
        }
        iVar12 = *piVar1;
        if (iVar12 == iVar11) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar11 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lVar13 = plVar14[3];
            plVar14 = (long *)0x0;
            plVar17 = local_78[0];
            if (lVar13 != 0) {
              plVar14 = (long *)(lVar13 + -0x50);
            }
            goto joined_r0x00ac92b0;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar11 = iVar12;
      } while (iVar12 != 0);
    }
LAB_00ac9394:
    plVar14 = (long *)0x0;
    plVar17 = local_78[0];
joined_r0x00ac92b0:
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
        lVar13 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar13;
        local_88 = (undefined8 *)*plVar17;
        FUN_02a44274(lVar13 + 0xd8,&local_88);
      }
    }
    if (plVar14 != (long *)0x0) {
      (**(code **)(*plVar14 + 0x188))(plVar14);
      lVar13 = plVar14[0xb];
      piVar1 = (int *)(lVar13 + 0xc);
      do {
        iVar11 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar11 + -1 == 0) {
        *(undefined8 *)(lVar13 + 0x18) = 0;
        (**(code **)(*plVar14 + 0x20))(plVar14);
        cVar3 = *(char *)(param_1 + 0x21b);
        goto joined_r0x00ac9354;
      }
    }
  }
  cVar3 = *(char *)(param_1 + 0x21b);
joined_r0x00ac9354:
  if (cVar3 != '\0') {
    FUN_009c69bc(local_78,param_1);
    plVar14 = (long *)FUN_0095992c(local_78[0] + 0x1e,&local_88);
    if (local_78[0] != (long *)0x0) {
      lVar13 = local_78[0][0xb];
      piVar1 = (int *)(lVar13 + 0xc);
      do {
        iVar11 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar11 + -1 == 0) {
        *(undefined8 *)(lVar13 + 0x18) = 0;
        (**(code **)(*local_78[0] + 0x20))();
      }
    }
    if (plVar14 != (long *)0x0) {
      (**(code **)(*plVar14 + 0x10))(local_78,plVar14);
      local_88 = (undefined8 *)0x0;
      uStack_80 = 0;
      FUN_009cca14(&local_88,local_78);
      if (local_78[0] != (long *)0x0) {
        plVar14 = local_78[0] + 1;
        do {
          iVar11 = (int)*plVar14 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar4) {
            *(int *)plVar14 = iVar11;
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
          lVar13 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar13;
          local_68 = *local_78[0];
          FUN_02a44274(lVar13 + 0xd8,&local_68);
        }
      }
      FUN_00ac3ca4(param_1 + 0x208,&local_88);
      puVar10 = local_88;
      if (local_88 != (undefined8 *)0x0) {
        piVar1 = (int *)(local_88 + 1);
        do {
          iVar11 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar11 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar11 + -1 == 0) {
          local_88[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar13 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar13;
          local_78[0] = (long *)*puVar10;
          FUN_02a44274(lVar13 + 0xd8,local_78);
        }
      }
    }
  }
  return;
}


