/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013aab54; name: FUN_013aab54
 */


void FUN_013aab54(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  code *pcVar6;
  int iVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 *puVar11;
  long *local_d0;
  code *local_c8;
  undefined1 *local_c0;
  long *local_b8;
  long local_b0;
  undefined4 local_a8;
  undefined8 local_48;
  long *local_40;
  undefined8 local_38;
  
  if (*(long *)(param_1 + 0xa8) == 0) {
    puVar11 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x18);
    plVar8 = (long *)(**(code **)*puVar11)(puVar11);
    puVar5 = PTR_DAT_04379ca8;
    puVar4 = PTR_DAT_04379c98;
    if (((*PTR_DAT_04379ca8 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_04379ca8), iVar7 != 0)) {
      uVar9 = FUN_009311a8();
      *(undefined8 *)puVar4 = uVar9;
      __cxa_guard_release(PTR_DAT_04379ca8);
    }
    if (plVar8 != (long *)puVar4) {
      for (plVar8 = (long *)*plVar8; plVar8 != (long *)puVar4; plVar8 = (long *)*plVar8) {
      }
    }
    local_d0 = (long *)&DAT_f736fd1edafce6e;
    local_c8 = (code *)0x3908b7e;
    local_c0 = (undefined1 *)0x11;
    local_b8 = (long *)0x0;
    local_38 = FUN_011994dc(puVar11[0x8f],&local_d0);
    if (local_b8 != (long *)0x0) {
      (**(code **)(*local_b8 + 0x20))();
    }
    puVar11 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x18);
    plVar8 = (long *)(**(code **)*puVar11)(puVar11);
    if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379ca8), iVar7 != 0)) {
      uVar9 = FUN_009311a8();
      *(undefined8 *)puVar4 = uVar9;
      __cxa_guard_release(PTR_DAT_04379ca8);
    }
    if (plVar8 != (long *)puVar4) {
      for (plVar8 = (long *)*plVar8; plVar8 != (long *)puVar4; plVar8 = (long *)*plVar8) {
      }
    }
    FUN_00d37c90(&local_d0,*(undefined8 *)(puVar11[0x8f] + 0xb0),0);
    local_40 = (long *)local_d0[0xd];
    if (local_40 != (long *)0x0) {
      plVar8 = local_40 + 10;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar3) {
          *(int *)plVar8 = (int)*plVar8 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (local_d0 != (long *)0x0) {
      lVar10 = local_d0[0xb];
      piVar1 = (int *)(lVar10 + 0xc);
      do {
        iVar7 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar7 + -1 == 0) {
        *(undefined8 *)(lVar10 + 0x18) = 0;
        (**(code **)(*local_d0 + 0x20))();
      }
    }
    local_d0 = (long *)0x219bb977a3899644;
    local_c8 = (code *)0x219bbc77a3899b5d;
    local_c0 = (undefined1 *)0xf9d992dafe4a6d;
    local_b8 = (long *)0xf64a92dafb2199;
    local_b0 = 0xf64992dafb1fe6;
    FUN_013aaedc(&local_48,*(undefined8 *)(param_1 + 8),&local_38,&local_40,&local_d0);
    plVar8 = *(long **)(param_1 + 0xa8);
    *(undefined8 *)(param_1 + 0xa8) = 0;
    if (plVar8 != (long *)0x0) {
      lVar10 = plVar8[0xb];
      piVar1 = (int *)(lVar10 + 0xc);
      do {
        iVar7 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar7 + -1 == 0) {
        *(undefined8 *)(lVar10 + 0x18) = 0;
        (**(code **)(*plVar8 + 0x20))();
      }
    }
    *(undefined8 *)(param_1 + 0xa8) = local_48;
    local_a8 = 4;
    local_d0 = (long *)&LAB_013ab28c;
    local_c8 = FUN_013ab29c;
    local_c0 = &LAB_013ab2a0;
    local_b8 = (long *)&LAB_013ab2ac;
    local_b0 = param_1;
    FUN_027b8c80(local_48,&local_d0);
    pcVar6 = local_c8;
    if (local_c8 != (code *)0x0) {
      local_c0 = (undefined1 *)0x0;
      local_b8 = (long *)0x0;
      local_d0 = (long *)0x0;
      local_c8 = (code *)0x0;
      (*pcVar6)(&local_b0);
    }
    if (local_40 != (long *)0x0) {
      plVar8 = local_40 + 10;
      do {
        iVar7 = (int)*plVar8 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar3) {
          *(int *)plVar8 = iVar7;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar7 == 0) {
        (**(code **)(*local_40 + 0x10))();
      }
    }
  }
  return;
}


