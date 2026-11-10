/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00bd0a0c; name: FUN_00bd0a0c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00bd0a0c(undefined8 param_1,undefined8 *param_2,long *param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  undefined8 *local_90 [2];
  undefined8 *local_80;
  undefined8 uStack_78;
  undefined8 *local_70;
  undefined8 uStack_68;
  undefined8 local_58;
  
  FUN_02be8650(local_90,*param_2,0);
  puVar8 = local_90[0];
  puVar7 = PTR_DAT_0437a598;
  puVar6 = PTR_DAT_0437a588;
  puVar5 = PTR_DAT_043794d8;
  puVar4 = PTR_DAT_043794d0;
  if ((local_90[0] != (undefined8 *)0x0) && (*(int *)((long)local_90[0] + 0xc) != 0)) {
    piVar1 = (int *)((long)local_90[0] + 0xc);
    iVar9 = *(int *)((long)local_90[0] + 0xc);
    do {
      plVar15 = (long *)puVar8[2];
      if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar7), iVar10 != 0)) {
        if (((*puVar4 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar4), iVar10 != 0)) {
          uVar11 = FUN_0087f8f0();
          *(undefined8 *)puVar5 = uVar11;
          __cxa_guard_release(puVar4);
        }
        *(undefined **)puVar6 = puVar5;
        __cxa_guard_release(puVar7);
      }
      while( true ) {
        if (plVar15 == (long *)0x0) goto LAB_00bd0a48;
        if (plVar15 == (long *)puVar6) break;
        plVar15 = (long *)*plVar15;
      }
      iVar10 = *piVar1;
      if (iVar10 == iVar9) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar9 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 != '\0') goto LAB_00bd0d58;
        lVar12 = puVar8[3];
        if (lVar12 != 0) {
          lVar14 = *(long *)(lVar12 + 0x70);
          lVar13 = *(long *)(lVar12 + 8);
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
          if (iVar9 + -1 != 0) goto LAB_00bd0a50;
          *(undefined8 *)(lVar13 + 0x18) = 0;
          (**(code **)(*(long *)(lVar12 + -0x50) + 0x20))();
          if (lVar14 == 0) goto LAB_00bd0bb4;
          goto LAB_00bd0a54;
        }
        break;
      }
      ClearExclusiveLocal();
LAB_00bd0d58:
      iVar9 = iVar10;
    } while (iVar10 != 0);
  }
LAB_00bd0a48:
  lVar14 = _DAT_000000c0;
LAB_00bd0a50:
  if (lVar14 != 0) {
LAB_00bd0a54:
    local_70 = (undefined8 *)0x0;
    uStack_68 = 0;
    FUN_008802f0(&local_70,*param_3 + 0x58);
    local_80 = (undefined8 *)0x0;
    uStack_78 = 0;
    FUN_00880560(&local_80,&local_70);
    puVar8 = local_70;
    if (local_70 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_70 + 1);
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
        local_70[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar12 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar12;
        local_58 = *puVar8;
        FUN_02a44274(lVar12 + 0xd8,&local_58);
      }
    }
    local_70 = (undefined8 *)0x0;
    uStack_68 = 0;
    FUN_00b5f91c(&local_70,&local_80);
    puVar8 = local_80;
    if (local_80 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_80 + 1);
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
        local_80[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar12 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar12;
        local_58 = *puVar8;
        FUN_02a44274(lVar12 + 0xd8,&local_58);
      }
    }
    FUN_00b5fc1c(lVar14 + 8,&local_70);
    puVar8 = local_70;
    if (local_70 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_70 + 1);
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
        local_70[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar12 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar12;
        local_80 = (undefined8 *)*puVar8;
        FUN_02a44274(lVar12 + 0xd8,&local_80);
      }
    }
  }
LAB_00bd0bb4:
  if (local_90[0] != (undefined8 *)0x0) {
    piVar1 = (int *)(local_90[0] + 1);
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
      local_90[0][2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar12 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar12;
      local_70 = (undefined8 *)*local_90[0];
      FUN_02a44274(lVar12 + 0xd8,&local_70);
    }
  }
  return;
}


