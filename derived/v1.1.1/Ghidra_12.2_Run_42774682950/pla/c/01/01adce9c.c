/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01adce9c; name: FUN_01adce9c
 */


void FUN_01adce9c(long param_1,int *param_2,uint param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  uint *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *local_40 [2];
  long *local_30;
  undefined8 local_28;
  
  *(uint *)(param_1 + 0x728) = param_3;
  puVar5 = (uint *)((long)param_2 + (ulong)*(ushort *)((long)param_2 + (0xe - (long)*param_2)));
  puVar5 = (uint *)((long)puVar5 + (ulong)param_3 * 4 + (ulong)*puVar5 + 4);
  piVar1 = (int *)((long)puVar5 + (ulong)*puVar5);
  if (((*(ushort *)((long)piVar1 - (long)*piVar1) < 0x1d) ||
      (uVar6 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0xe], uVar6 == 0)) ||
     (*(char *)((long)piVar1 + uVar6) == '\0')) {
    uVar6 = *(ulong *)(param_1 + 0x710) & 0xfffffffffffffffe;
  }
  else {
    uVar6 = *(ulong *)(param_1 + 0x710) | 1;
  }
  *(ulong *)(param_1 + 0x710) = uVar6;
  if (((*(ushort *)((long)piVar1 - (long)*piVar1) < 0x21) ||
      (uVar8 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0x10], uVar8 == 0)) ||
     (*(char *)((long)piVar1 + uVar8) == '\0')) {
    uVar6 = uVar6 & 0xfffffffffffffffd;
  }
  else {
    uVar6 = uVar6 | 2;
  }
  *(ulong *)(param_1 + 0x710) = uVar6;
  if (((*(ushort *)((long)piVar1 - (long)*piVar1) < 0x1f) ||
      (uVar8 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0xf], uVar8 == 0)) ||
     (*(char *)((long)piVar1 + uVar8) == '\0')) {
    uVar6 = uVar6 & 0xfffffffffffffffb;
  }
  else {
    uVar6 = uVar6 | 4;
  }
  *(ulong *)(param_1 + 0x710) = uVar6;
  uVar6 = FUN_018580f4(*(undefined8 *)(param_1 + 0x600));
  if ((uVar6 & 1) != 0) {
    FUN_01adda34(local_40,param_1);
    if (local_40[0] == (undefined8 *)0x0) {
      local_30 = (long *)0x0;
    }
    else {
      FUN_00ba1e00(&local_30);
      if (local_40[0] != (undefined8 *)0x0) {
        piVar1 = (int *)(local_40[0] + 1);
        do {
          iVar4 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar4 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar4 + -1 == 0) {
          local_40[0][2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar4 = __cxa_guard_acquire(PTR_DAT_04379498), iVar4 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar7 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar7;
          local_28 = *local_40[0];
          FUN_02a44274(lVar7 + 0xd8,&local_28);
        }
      }
    }
    if (local_30 != (long *)0x0) {
      FUN_01c00ab4();
      FUN_01c00a74(local_30);
      if (local_30 != (long *)0x0) {
        lVar7 = local_30[0xb];
        piVar1 = (int *)(lVar7 + 0xc);
        do {
          iVar4 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar4 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar4 + -1 == 0) {
          *(undefined8 *)(lVar7 + 0x18) = 0;
          (**(code **)(*local_30 + 0x20))();
        }
      }
    }
  }
  FUN_01addd60(param_1);
  return;
}


