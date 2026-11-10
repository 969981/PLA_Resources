/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0190a264; name: FUN_0190a264
 */


void FUN_0190a264(long param_1,long *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined8 *local_58;
  undefined8 uStack_50;
  undefined8 *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  if (*param_2 != 0) {
    lVar6 = FUN_009aff90(*param_2 + 0xf0,&local_48);
    if ((((*param_2 != 0) &&
         (plVar7 = (long *)FUN_00b9c600(*param_2 + 0xf0,&local_48), plVar7 != (long *)0x0)) &&
        (lVar6 != 0)) && ((long *)*param_2 != (long *)0x0)) {
      (**(code **)(*(long *)*param_2 + 0x18))(&local_48);
      local_58 = (undefined8 *)0x0;
      uStack_50 = 0;
      FUN_0087f944(&local_58,&local_48);
      if (local_48 != (undefined8 *)0x0) {
        piVar1 = (int *)(local_48 + 1);
        do {
          iVar5 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar5 + -1 == 0) {
          local_48[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar8 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar8;
          local_38 = *local_48;
          FUN_02a44274(lVar8 + 0xd8,&local_38);
        }
      }
      FUN_0087fcf0(param_1,&local_58);
      puVar4 = local_58;
      if (local_58 != (undefined8 *)0x0) {
        piVar1 = (int *)(local_58 + 1);
        do {
          iVar5 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar5 + -1 == 0) {
          local_58[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar8 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar8;
          local_48 = (undefined8 *)*puVar4;
          FUN_02a44274(lVar8 + 0xd8,&local_48);
        }
      }
      local_48 = (undefined8 *)0x0;
      uStack_40 = 0;
      FUN_008802f0(&local_48,lVar6 + 0x58);
      local_58 = (undefined8 *)0x0;
      uStack_50 = 0;
      FUN_00880560(&local_58,&local_48);
      puVar4 = local_48;
      if (local_48 != (undefined8 *)0x0) {
        piVar1 = (int *)(local_48 + 1);
        do {
          iVar5 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar5 + -1 == 0) {
          local_48[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar6 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar6;
          local_38 = *puVar4;
          FUN_02a44274(lVar6 + 0xd8,&local_38);
        }
      }
      local_48 = (undefined8 *)0x0;
      uStack_40 = 0;
      FUN_00b5f91c(&local_48,&local_58);
      puVar4 = local_58;
      if (local_58 != (undefined8 *)0x0) {
        piVar1 = (int *)(local_58 + 1);
        do {
          iVar5 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar5 + -1 == 0) {
          local_58[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar6 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar6;
          local_38 = *puVar4;
          FUN_02a44274(lVar6 + 0xd8,&local_38);
        }
      }
      FUN_00b5fc1c(param_1 + 0x10,&local_48);
      puVar4 = local_48;
      if (local_48 != (undefined8 *)0x0) {
        piVar1 = (int *)(local_48 + 1);
        do {
          iVar5 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar5 + -1 == 0) {
          local_48[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar6 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar6;
          local_58 = (undefined8 *)*puVar4;
          FUN_02a44274(lVar6 + 0xd8,&local_58);
        }
      }
      (**(code **)(*plVar7 + 0x18))(&local_48,plVar7);
      local_58 = (undefined8 *)0x0;
      uStack_50 = 0;
      FUN_0191257c(&local_58,&local_48);
      puVar4 = local_48;
      if (local_48 != (undefined8 *)0x0) {
        piVar1 = (int *)(local_48 + 1);
        do {
          iVar5 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar5 + -1 == 0) {
          local_48[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar6 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar6;
          local_38 = *puVar4;
          FUN_02a44274(lVar6 + 0xd8,&local_38);
        }
      }
      FUN_0191287c(param_1 + 0x20,&local_58);
      puVar4 = local_58;
      if (local_58 != (undefined8 *)0x0) {
        piVar1 = (int *)(local_58 + 1);
        do {
          iVar5 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar5 + -1 == 0) {
          local_58[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar6 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar6;
          local_48 = (undefined8 *)*puVar4;
          FUN_02a44274(lVar6 + 0xd8,&local_48);
        }
      }
    }
  }
  return;
}


