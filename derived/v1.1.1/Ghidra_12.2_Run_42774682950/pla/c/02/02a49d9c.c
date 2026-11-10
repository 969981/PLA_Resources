/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a49d9c; name: FUN_02a49d9c
 */


void FUN_02a49d9c(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *local_38;
  
  if (*(long *)(param_1 + 0x268) == 0) {
LAB_02a49ef0:
    if (*(long *)(param_1 + 0x288) == 0) {
      return;
    }
    if (((*(int *)(*(long *)(param_1 + 0x288) + 0xc) == 0) || (*(long *)(param_1 + 0x278) == 0)) ||
       (*(int *)(*(long *)(param_1 + 0x278) + 0xc) == 0)) {
      if (*(long *)(param_1 + 0x288) == 0) {
        return;
      }
      if (*(int *)(*(long *)(param_1 + 0x288) + 0xc) == 0) {
        return;
      }
      if (*(long *)(param_1 + 0x298) == 0) {
        return;
      }
      if (*(int *)(*(long *)(param_1 + 0x298) + 0xc) == 0) {
        return;
      }
      puVar10 = (undefined8 *)0x0;
      if (*(long *)(param_1 + 0x298) != 0) {
        puVar10 = *(undefined8 **)(*(long *)(param_1 + 0x298) + 0x18);
        if (puVar10 != (undefined8 *)0x0) {
          plVar9 = (long *)(**(code **)*puVar10)(puVar10);
          lVar6 = FUN_00ad3750();
          for (; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
            if (plVar9 == (long *)lVar6) {
              puVar10 = puVar10 + -10;
              goto LAB_02a4a250;
            }
          }
        }
        puVar10 = (undefined8 *)0x0;
      }
LAB_02a4a250:
      lVar6 = FUN_01a74238(puVar10 + 0x35);
      puVar10 = (undefined8 *)0x0;
      if (*(long *)(param_1 + 0x288) != 0) {
        puVar10 = *(undefined8 **)(*(long *)(param_1 + 0x288) + 0x18);
        if (puVar10 != (undefined8 *)0x0) {
          plVar9 = (long *)(**(code **)*puVar10)(puVar10);
          lVar7 = FUN_00ad3750();
          for (; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
            if (plVar9 == (long *)lVar7) {
              puVar10 = puVar10 + -10;
              goto LAB_02a4a29c;
            }
          }
        }
        puVar10 = (undefined8 *)0x0;
      }
LAB_02a4a29c:
      lVar7 = FUN_01a74238(puVar10 + 0x35);
      if (*(long *)(lVar6 + 0x318) == 0) {
        local_38 = (long *)0x0;
      }
      else {
        FUN_00da9c7c(&local_38);
      }
      FUN_02a5cc64(local_38,*(undefined4 *)(lVar6 + 0x328),*(undefined4 *)(lVar7 + 0x328));
      if (local_38 == (long *)0x0) goto LAB_02a49fac;
      lVar6 = local_38[0xb];
      piVar1 = (int *)(lVar6 + 0xc);
      do {
        bVar4 = *piVar1 + -1 == 0;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    else {
      lVar6 = FUN_01a74238(param_1 + 0x278);
      puVar10 = (undefined8 *)0x0;
      if (*(long *)(param_1 + 0x288) != 0) {
        puVar10 = *(undefined8 **)(*(long *)(param_1 + 0x288) + 0x18);
        if (puVar10 != (undefined8 *)0x0) {
          plVar9 = (long *)(**(code **)*puVar10)(puVar10);
          lVar7 = FUN_00ad3750();
          for (; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
            if (plVar9 == (long *)lVar7) {
              puVar10 = puVar10 + -10;
              goto LAB_02a49f64;
            }
          }
        }
        puVar10 = (undefined8 *)0x0;
      }
LAB_02a49f64:
      lVar7 = FUN_01a74238(puVar10 + 0x35);
      if (*(long *)(lVar6 + 0x318) == 0) {
        local_38 = (long *)0x0;
      }
      else {
        FUN_00da9c7c(&local_38);
      }
      FUN_02a5cc64(local_38,*(undefined4 *)(lVar6 + 0x328),*(undefined4 *)(lVar7 + 0x328));
      if (local_38 == (long *)0x0) goto LAB_02a49fac;
      lVar6 = local_38[0xb];
      piVar1 = (int *)(lVar6 + 0xc);
      do {
        bVar4 = *piVar1 + -1 == 0;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
  else {
    plVar9 = (long *)(param_1 + 0x268);
    if (((*(int *)(*(long *)(param_1 + 0x268) + 0xc) == 0) || (*(long *)(param_1 + 0x278) == 0)) ||
       (*(int *)(*(long *)(param_1 + 0x278) + 0xc) == 0)) {
      if (((*plVar9 == 0) || (*(int *)(*plVar9 + 0xc) == 0)) ||
         ((*(long *)(param_1 + 0x298) == 0 || (*(int *)(*(long *)(param_1 + 0x298) + 0xc) == 0))))
      goto LAB_02a49ef0;
      puVar10 = (undefined8 *)0x0;
      if (*(long *)(param_1 + 0x298) != 0) {
        puVar10 = *(undefined8 **)(*(long *)(param_1 + 0x298) + 0x18);
        if (puVar10 != (undefined8 *)0x0) {
          plVar8 = (long *)(**(code **)*puVar10)(puVar10);
          lVar6 = FUN_00ad3750();
          for (; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
            if (plVar8 == (long *)lVar6) {
              puVar10 = puVar10 + -10;
              goto LAB_02a49e9c;
            }
          }
        }
        puVar10 = (undefined8 *)0x0;
      }
LAB_02a49e9c:
      lVar6 = FUN_01a74238(puVar10 + 0x35);
      lVar7 = FUN_01a74238(plVar9);
      if (*(long *)(lVar6 + 0x318) == 0) {
        local_38 = (long *)0x0;
      }
      else {
        FUN_00da9c7c(&local_38);
      }
      FUN_02a5cc64(local_38,*(undefined4 *)(lVar6 + 0x328),*(undefined4 *)(lVar7 + 0x328));
      if (local_38 == (long *)0x0) goto LAB_02a49fac;
      lVar6 = local_38[0xb];
      piVar1 = (int *)(lVar6 + 0xc);
      do {
        bVar4 = *piVar1 + -1 == 0;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    else {
      lVar6 = FUN_01a74238(param_1 + 0x278);
      lVar7 = FUN_01a74238(plVar9);
      if (*(long *)(lVar6 + 0x318) == 0) {
        local_38 = (long *)0x0;
      }
      else {
        FUN_00da9c7c(&local_38);
      }
      FUN_02a5cc64(local_38,*(undefined4 *)(lVar6 + 0x328),*(undefined4 *)(lVar7 + 0x328));
      if (local_38 == (long *)0x0) goto LAB_02a49fac;
      lVar6 = local_38[0xb];
      piVar1 = (int *)(lVar6 + 0xc);
      do {
        bVar4 = *piVar1 + -1 == 0;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
  if (bVar4) {
    *(undefined8 *)(lVar6 + 0x18) = 0;
    (**(code **)(*local_38 + 0x20))();
  }
LAB_02a49fac:
  puVar10 = *(undefined8 **)(param_1 + 0x288);
  *(undefined8 *)(param_1 + 0x288) = 0;
  if (puVar10 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar10 + 1);
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
      puVar10[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar6 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar6;
      local_38 = (long *)*puVar10;
      FUN_02a44274(lVar6 + 0xd8,&local_38);
    }
  }
  *(undefined8 *)(param_1 + 0x290) = 0;
  puVar10 = *(undefined8 **)(param_1 + 0x298);
  *(undefined8 *)(param_1 + 0x298) = 0;
  if (puVar10 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar10 + 1);
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
      puVar10[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar6 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar6;
      local_38 = (long *)*puVar10;
      FUN_02a44274(lVar6 + 0xd8,&local_38);
    }
  }
  *(undefined8 *)(param_1 + 0x2a0) = 0;
  puVar10 = *(undefined8 **)(param_1 + 0x268);
  *(undefined8 *)(param_1 + 0x268) = 0;
  if (puVar10 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar10 + 1);
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
      puVar10[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar6 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar6;
      local_38 = (long *)*puVar10;
      FUN_02a44274(lVar6 + 0xd8,&local_38);
    }
  }
  *(undefined8 *)(param_1 + 0x270) = 0;
  puVar10 = *(undefined8 **)(param_1 + 0x278);
  *(undefined8 *)(param_1 + 0x278) = 0;
  if (puVar10 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar10 + 1);
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
      puVar10[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar6 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar6;
      local_38 = (long *)*puVar10;
      FUN_02a44274(lVar6 + 0xd8,&local_38);
    }
  }
  *(undefined8 *)(param_1 + 0x280) = 0;
  puVar10 = *(undefined8 **)(param_1 + 0x2a8);
  *(undefined8 *)(param_1 + 0x2a8) = 0;
  if (puVar10 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar10 + 1);
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
      puVar10[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar6 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar6;
      local_38 = (long *)*puVar10;
      FUN_02a44274(lVar6 + 0xd8,&local_38);
    }
  }
  *(undefined8 *)(param_1 + 0x2b0) = 0;
  *(undefined8 *)(param_1 + 0x2b8) = 0;
  *(undefined8 *)(param_1 + 0x2c0) = 0xffffffffffffffff;
  return;
}


