/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 009815d0; name: FUN_009815d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009815d0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long *plVar2;
  int *piVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  int iVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  undefined8 *local_38;
  undefined8 uStack_30;
  long *local_28;
  
  local_38 = (undefined8 *)0x0;
  uStack_30 = 0;
  FUN_00963eb8(&local_38);
  FUN_00982c5c(param_1,&local_38);
  puVar6 = local_38;
  if (local_38 != (undefined8 *)0x0) {
    piVar3 = (int *)(local_38 + 1);
    do {
      iVar7 = *piVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar5) {
        *piVar3 = iVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 + -1 == 0) {
      local_38[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar11 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar11;
      local_28 = (long *)*puVar6;
      FUN_02a44274(lVar11 + 0xd8,&local_28);
    }
  }
  *param_1 = &PTR_LAB_041c3b40;
  param_1[9] = &PTR_LAB_041c3b88;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  FUN_009630f4(param_1 + 0xd,param_3);
  *(undefined1 *)(param_1 + 0xf) = 0x1f;
  if (param_1[0xb] == 0) {
    local_28 = (long *)0x0;
    lVar11 = _DAT_00000690;
  }
  else {
    FUN_00931034(&local_28);
    lVar11 = local_28[0xd2];
    if (local_28 != (long *)0x0) {
      lVar10 = local_28[0xb];
      piVar3 = (int *)(lVar10 + 0xc);
      do {
        iVar7 = *piVar3;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar5) {
          *piVar3 = iVar7 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar7 + -1 == 0) {
        *(undefined8 *)(lVar10 + 0x18) = 0;
        (**(code **)(*local_28 + 0x20))();
        plVar8 = *(long **)(lVar11 + 0x2c8);
        goto joined_r0x009817f4;
      }
    }
  }
  plVar8 = *(long **)(lVar11 + 0x2c8);
joined_r0x009817f4:
  if (plVar8 != (long *)0x0) {
    plVar9 = plVar8 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *(int *)plVar9 = (int)*plVar9 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar9 = (long *)plVar8[0x29];
  lVar11 = plVar8[0x2a];
  if ((lVar11 != 0) && (*plVar9 != DAT_041f9a18)) {
    plVar12 = plVar9 + lVar11 * 6;
    lVar11 = lVar11 * 0x30;
    do {
      lVar11 = lVar11 + -0x30;
      if (lVar11 == 0) {
        plVar9 = plVar12;
        break;
      }
      plVar2 = plVar9 + 6;
      plVar1 = plVar9 + 6;
      plVar9 = plVar2;
    } while (*plVar1 != DAT_041f9a18);
  }
  *(byte *)(plVar9[4] + 0x58) = *(byte *)(plVar9[4] + 0x58) & 0xfe;
  if (plVar8 != (long *)0x0) {
    plVar9 = plVar8 + 10;
    do {
      iVar7 = (int)*plVar9 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *(int *)plVar9 = iVar7;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar8 + 0x10))();
    }
  }
  return;
}


