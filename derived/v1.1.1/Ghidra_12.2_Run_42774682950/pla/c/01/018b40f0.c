/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 018b40f0; name: FUN_018b40f0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_018b40f0(long param_1)

{
  int *piVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined8 *puVar13;
  undefined8 *local_40 [2];
  long *local_30;
  undefined8 local_28;
  
  FUN_018b39c0(local_40);
  if (local_40[0] == (undefined8 *)0x0) {
    local_30 = (long *)0x0;
    lVar7 = _DAT_00000070;
    puVar9 = local_40[0];
  }
  else {
    FUN_018bacec(&local_30);
    lVar7 = local_30[0xe];
    puVar9 = local_40[0];
    if (local_30 != (long *)0x0) {
      lVar8 = local_30[0xb];
      piVar1 = (int *)(lVar8 + 0xc);
      do {
        iVar6 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar6 + -1 == 0) {
        *(undefined8 *)(lVar8 + 0x18) = 0;
        (**(code **)(*local_30 + 0x20))();
        puVar9 = local_40[0];
      }
    }
  }
  if (puVar9 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar9 + 1);
    do {
      iVar6 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 + -1 == 0) {
      puVar9[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar8 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar8;
      local_28 = *puVar9;
      FUN_02a44274(lVar8 + 0xd8,&local_28);
    }
  }
  puVar2 = (ulong *)PTR_DAT_04379c88;
  if (*(long *)(param_1 + 0x68) != 0) {
    puVar2 = (ulong *)(*(long *)(param_1 + 0x68) + 0x58);
  }
  local_40[0] = (undefined8 *)*puVar2;
  puVar9 = *(undefined8 **)(lVar7 + 0x148);
  if (puVar9 != (undefined8 *)0x0) {
    uVar10 = (long)puVar9 - ((ulong)puVar9 >> 1 & 0x5555555555555555);
    uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
    uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar10 < 2) {
      puVar11 = (undefined8 *)((long)puVar9 - 1U & (ulong)local_40[0]);
    }
    else if (local_40[0] < puVar9) {
      puVar11 = local_40[0];
    }
    else {
      uVar5 = 0;
      if (puVar9 != (undefined8 *)0x0) {
        uVar5 = (ulong)local_40[0] / (ulong)puVar9;
      }
      puVar11 = (undefined8 *)((long)local_40[0] - uVar5 * (long)puVar9);
    }
    plVar12 = *(long **)(*(long *)(lVar7 + 0x140) + (long)puVar11 * 8);
    if ((plVar12 != (long *)0x0) && (plVar12 = (long *)*plVar12, plVar12 != (long *)0x0)) {
      if (uVar10 < 2) {
        do {
          if ((undefined8 *)plVar12[1] == local_40[0]) {
            if ((undefined8 *)plVar12[2] == local_40[0]) goto LAB_018b4298;
          }
          else if ((undefined8 *)((ulong)plVar12[1] & (long)puVar9 - 1U) != puVar11) break;
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
      else {
        do {
          puVar13 = (undefined8 *)plVar12[1];
          if (puVar13 == local_40[0]) {
            if ((undefined8 *)plVar12[2] == local_40[0]) {
LAB_018b4298:
              lVar7 = FUN_018b434c((long *)(lVar7 + 0x140),local_40);
              return lVar7;
            }
          }
          else {
            if (puVar9 <= puVar13) {
              uVar10 = 0;
              if (puVar9 != (undefined8 *)0x0) {
                uVar10 = (ulong)puVar13 / (ulong)puVar9;
              }
              puVar13 = (undefined8 *)((long)puVar13 - uVar10 * (long)puVar9);
            }
            if (puVar13 != puVar11) break;
          }
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
    }
  }
  return param_1 + 0x110;
}


