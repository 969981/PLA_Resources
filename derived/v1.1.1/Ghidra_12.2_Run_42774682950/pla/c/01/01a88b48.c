/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a88b48; name: FUN_01a88b48
 */


void FUN_01a88b48(long *param_1,long param_2)

{
  long *plVar1;
  int *piVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  char cVar6;
  bool bVar7;
  long *plVar8;
  int iVar9;
  long lVar10;
  long *local_48;
  undefined8 uStack_40;
  long *local_38;
  long local_28;
  
  local_48 = (long *)0x0;
  uStack_40 = 0;
  FUN_01a0703c(&local_48,param_2 + 0xad0);
  FUN_01839c8c(&local_38,&local_48);
  plVar8 = local_48;
  if (local_48 != (long *)0x0) {
    plVar1 = local_48 + 1;
    do {
      iVar9 = (int)*plVar1 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *(int *)plVar1 = iVar9;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar9 == 0) {
      local_48[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar10 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar10;
      local_28 = *plVar8;
      FUN_02a44274(lVar10 + 0xd8,&local_28);
    }
  }
  if ((local_38 != (long *)0x0) &&
     (FUN_01839c8c(&local_48,param_2 + 0xad0), local_48 != (long *)0x0)) {
    lVar10 = local_48[0xb];
    piVar2 = (int *)(lVar10 + 0xc);
    iVar9 = *(int *)((long)local_48 + 0x7c);
    do {
      iVar3 = *piVar2;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar7) {
        *piVar2 = iVar3 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar3 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*local_48 + 0x20))();
    }
    if (iVar9 == 2) {
      lVar10 = local_38[0x28];
      lVar4 = local_38[0x29];
      lVar5 = local_38[0x2b];
      param_1[2] = local_38[0x2a];
      param_1[3] = lVar5;
      *param_1 = lVar10;
      param_1[1] = lVar4;
      lVar10 = local_38[0x2c];
      lVar4 = local_38[0x2d];
      lVar5 = local_38[0x2f];
      param_1[6] = local_38[0x2e];
      param_1[7] = lVar5;
      param_1[4] = lVar10;
      param_1[5] = lVar4;
      goto joined_r0x01a88cdc;
    }
  }
  lVar10 = *(long *)(param_2 + 0x748);
  param_1[5] = *(long *)(param_2 + 0x738);
  param_1[7] = lVar10;
  lVar10 = *(long *)(param_2 + 0x728);
  param_1[1] = *(long *)(param_2 + 0x718);
  param_1[3] = lVar10;
  lVar10 = *(long *)(param_2 + 0x710);
  param_1[2] = *(long *)(param_2 + 0x720);
  *param_1 = lVar10;
  lVar10 = *(long *)(param_2 + 0x730);
  param_1[6] = *(long *)(param_2 + 0x740);
  param_1[4] = lVar10;
joined_r0x01a88cdc:
  if (local_38 != (long *)0x0) {
    lVar10 = local_38[0xb];
    piVar2 = (int *)(lVar10 + 0xc);
    do {
      iVar9 = *piVar2;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar7) {
        *piVar2 = iVar9 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*local_38 + 0x20))();
    }
  }
  return;
}


