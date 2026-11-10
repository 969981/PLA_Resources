/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01819ff0; name: FUN_01819ff0
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_01819ff0(long *param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *local_78;
  undefined8 uStack_70;
  long *local_68;
  undefined8 *local_60 [2];
  undefined8 local_48;
  
  if ((param_2 != 0) && (puVar11 = *(undefined8 **)(param_2 + 0x18), puVar11 != (undefined8 *)0x0))
  {
    plVar8 = (long *)(**(code **)*puVar11)(puVar11);
    if (((*PTR_DAT_04379e88 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_04379e88), puVar4 = PTR_DAT_043795e0, iVar6 != 0)) {
      if (((*PTR_DAT_043795d8 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_043795d8), puVar5 = PTR_DAT_043794d8, iVar6 != 0)) {
        if (((*PTR_DAT_043794d0 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar6 != 0)) {
          uVar9 = FUN_0087f8f0();
          *(undefined8 *)puVar5 = uVar9;
          __cxa_guard_release(PTR_DAT_043794d0);
        }
        *(undefined **)puVar4 = puVar5;
        __cxa_guard_release(PTR_DAT_043795d8);
      }
      *(undefined **)PTR_DAT_04379e90 = puVar4;
      __cxa_guard_release(PTR_DAT_04379e88);
    }
    for (; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
      if (plVar8 == (long *)PTR_DAT_04379e90) {
        puVar11 = puVar11 + -10;
        goto LAB_0181a064;
      }
    }
  }
  puVar11 = (undefined8 *)0x0;
LAB_0181a064:
  plVar8 = (long *)0x0;
  if (puVar11 != (undefined8 *)0x0) {
    plVar8 = puVar11 + 0x42;
  }
  (**(code **)(*plVar8 + 0x20))(local_60,plVar8);
  local_78 = (undefined8 *)0x0;
  uStack_70 = 0;
  FUN_01800100(&local_78,local_60);
  if (local_60[0] != (undefined8 *)0x0) {
    piVar1 = (int *)(local_60[0] + 1);
    do {
      iVar6 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 + -1 == 0) {
      local_60[0][2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar10 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar10;
      local_48 = *local_60[0];
      FUN_02a44274(lVar10 + 0xd8,&local_48);
    }
  }
  puVar11 = local_78;
  puVar5 = PTR_DAT_043794d8;
  puVar4 = PTR_DAT_043794d0;
  local_68 = plVar8;
  if ((local_78 != (undefined8 *)0x0) && (*(int *)((long)local_78 + 0xc) != 0)) {
    piVar1 = (int *)((long)local_78 + 0xc);
    iVar6 = *(int *)((long)local_78 + 0xc);
    do {
      plVar8 = (long *)puVar11[2];
      if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar4), iVar7 != 0)) {
        uVar9 = FUN_0087f8f0();
        *(undefined8 *)puVar5 = uVar9;
        __cxa_guard_release(puVar4);
      }
      while( true ) {
        if (plVar8 == (long *)0x0) goto LAB_0181a100;
        if (plVar8 == (long *)puVar5) break;
        plVar8 = (long *)*plVar8;
      }
      iVar7 = *piVar1;
      if (iVar7 == iVar6) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar10 = puVar11[3];
          if (lVar10 != 0) {
            plVar8 = (long *)(lVar10 + -8);
            *param_1 = (long)local_68;
            if (local_68 != (long *)0x0) {
              (**(code **)(*local_68 + 0x10))();
            }
            (**(code **)(*plVar8 + 0x18))(plVar8);
            puVar11 = local_78;
            goto joined_r0x0181a324;
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar6 = iVar7;
    } while (iVar7 != 0);
  }
LAB_0181a100:
  *param_1 = 0;
  puVar11 = local_78;
joined_r0x0181a324:
  if (puVar11 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar11 + 1);
    do {
      iVar6 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 + -1 == 0) {
      puVar11[2] = 0;
      local_78 = puVar11;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar10 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar10;
      local_60[0] = (undefined8 *)*puVar11;
      FUN_02a44274(lVar10 + 0xd8,local_60);
    }
  }
  return;
}


