/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01908528; name: FUN_01908528
 */


void FUN_01908528(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined4 uVar9;
  long lVar10;
  undefined8 local_c8;
  undefined8 uStack_c0;
  long *local_b8;
  long *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined2 local_68;
  undefined1 local_60;
  undefined1 *local_58;
  undefined1 *puStack_50;
  undefined2 local_48;
  long local_40;
  undefined4 local_38 [2];
  undefined8 local_28;
  
  local_78 = 0x100000000;
  uStack_70 = 0;
  local_60 = 0;
  local_68 = 0;
  local_48 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_28 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = (long *)0x0;
  local_b0 = (long *)0x0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_58 = &DAT_cbf29ce484222645;
  puStack_50 = &DAT_cbf29ce484222645;
  FUN_01906830(&local_c8,&local_28,0);
  param_2 = (long *)*param_2;
  plVar6 = local_b8;
  if (param_2 != (long *)0x0) {
    plVar6 = param_2 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar6 = param_2;
    if (local_b8 != (long *)0x0) {
      plVar1 = local_b8 + 10;
      do {
        iVar5 = (int)*plVar1 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 == 0) {
        lVar10 = *local_b8;
        local_b8 = param_2;
        (**(code **)(lVar10 + 0x10))();
        param_3 = (long *)*param_3;
        goto joined_r0x019085dc;
      }
    }
  }
  local_b8 = plVar6;
  param_3 = (long *)*param_3;
joined_r0x019085dc:
  plVar6 = local_b8;
  plVar1 = local_b0;
  if (param_3 != (long *)0x0) {
    lVar10 = param_3[0xb];
    if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar10 + 0x10) == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
      *(undefined8 *)(lVar10 + 0x10) = uVar7;
    }
    piVar2 = (int *)(lVar10 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = *piVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar6 = local_b8;
    plVar1 = param_3;
    if (local_b0 != (long *)0x0) {
      lVar10 = local_b0[0xb];
      piVar2 = (int *)(lVar10 + 0xc);
      do {
        iVar5 = *piVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar5 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 + -1 == 0) {
        *(undefined8 *)(lVar10 + 0x18) = 0;
        lVar10 = *local_b0;
        local_b0 = param_3;
        (**(code **)(lVar10 + 0x20))();
        plVar6 = local_b8;
        plVar1 = local_b0;
      }
    }
  }
  local_b8 = plVar6;
  local_b0 = plVar1;
  if ((plVar6 != (long *)0x0) && (plVar1 != (long *)0x0)) {
    local_40 = 2;
    local_38[0] = 0;
    uVar8 = (**(code **)(*plVar6 + 0x60))(plVar6);
    if ((uVar8 & 1) == 0) {
      local_40 = (ulong)(*(byte *)(plVar6 + 0x11) - 1) << 0x20;
    }
    else {
      uVar8 = FUN_010e3608(plVar1,local_38,(ulong)&local_40 | 4);
      if ((uVar8 & 1) == 0) {
        if ((local_b8 == (long *)0x0) && (local_b0 == (long *)0x0)) {
          uVar9 = 4;
        }
        else {
          uVar9 = 3;
        }
      }
      else {
        uVar9 = 1;
      }
      local_40 = CONCAT44(local_40._4_4_,uVar9);
    }
    if ((uint)local_40 < 2) {
      uVar8 = *(ulong *)(param_1 + 0x10) & 0xfffffffffffffffb;
    }
    else {
      uVar8 = *(ulong *)(param_1 + 0x10) | 4;
    }
    *(ulong *)(param_1 + 0x10) = uVar8;
  }
  FUN_008a7624(&local_c8);
  return;
}


