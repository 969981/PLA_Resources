/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d3ccc8; name: FUN_00d3ccc8
 */


void FUN_00d3ccc8(ulong *param_1)

{
  ulong *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  long local_80;
  ulong local_78;
  ulong local_70;
  ulong local_68;
  ulong local_60;
  ulong *local_58;
  
  if (param_1[8] < 0x200) {
    uVar9 = (long)(param_1[2] - param_1[1]) >> 3;
    lVar6 = param_1[3] - *param_1;
    if ((ulong)(lVar6 >> 3) <= uVar9) {
      puVar1 = param_1 + 4;
      local_60 = 0;
      uVar5 = lVar6 >> 2;
      if (lVar6 == 0) {
        uVar5 = 1;
      }
      local_58 = puVar1;
      uVar3 = (**(code **)(*(long *)param_1[4] + 0x10))((long *)param_1[4],uVar5 << 3,8);
      if (uVar3 == 0) {
        (**(code **)(*(long *)*puVar1 + 0xb8))();
      }
      uVar7 = uVar3 + uVar9 * 8;
      uVar10 = uVar3 + uVar5 * 8;
      local_78 = uVar3;
      local_70 = uVar7;
      local_68 = uVar7;
      local_60 = uVar10;
      local_80 = (**(code **)(*(long *)param_1[10] + 0x10))((long *)param_1[10],0x1000,8);
      if (local_80 == 0) {
        (**(code **)(*(long *)param_1[10] + 0xb8))();
      }
      uVar4 = uVar3;
      if (uVar9 == uVar5) {
        if (uVar7 < uVar3 || uVar7 - uVar3 == 0) {
          lVar6 = uVar10 - uVar3;
          uVar9 = lVar6 >> 2;
          if (lVar6 == 0) {
            uVar9 = 1;
          }
          uVar4 = (**(code **)(*(long *)*puVar1 + 0x10))((long *)*puVar1,uVar9 << 3,8);
          if (uVar4 == 0) {
            (**(code **)(*(long *)*puVar1 + 0xb8))();
          }
          uVar7 = uVar4 + (uVar9 >> 2) * 8;
          uVar10 = uVar4 + uVar9 * 8;
          local_78 = uVar4;
          local_70 = uVar7;
          local_68 = uVar7;
          local_60 = uVar10;
          if (uVar3 != 0) {
            plVar8 = (long *)*puVar1;
            uVar9 = (**(code **)(*plVar8 + 0xc0))(plVar8);
            if ((uVar9 & 1) != 0) {
              lVar2 = tpidr_el0;
              if (*(char *)(lVar2 + 0x38d488) == '\0') {
                *(undefined1 *)(lVar2 + 0x38d488) = 1;
                *(undefined8 *)(lVar2 + 0x38d478) = 0;
                *(undefined8 *)(lVar2 + 0x38d480) = 0;
                __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
              }
              if (0 < *(int *)(lVar2 + 0x38d480)) {
                FUN_02bcc824(plVar8,uVar3,lVar6,8);
                goto LAB_00d3cd84;
              }
            }
            (**(code **)(*plVar8 + 0x18))(plVar8,uVar3,lVar6,8);
          }
        }
        else {
          lVar6 = (long)(uVar7 - uVar3) >> 3;
          uVar9 = lVar6 + 2;
          if (-1 < lVar6 + 1) {
            uVar9 = lVar6 + 1;
          }
          uVar7 = uVar7 + (uVar9 & 0x3ffffffffffffffe) * -4;
          local_70 = uVar7;
          local_68 = uVar7;
        }
      }
      else {
      }
LAB_00d3cd84:
      FUN_00d3da90(puVar1,uVar7,&local_80);
      local_68 = uVar7 + 8;
      uVar9 = param_1[2];
      uVar5 = uVar9;
      if (uVar9 == param_1[1]) {
        local_70 = uVar7;
        local_78 = uVar4;
        local_60 = uVar10;
      }
      else {
        do {
          uVar5 = uVar5 - 8;
          FUN_00d3d84c(&local_78,uVar5);
        } while (uVar5 != param_1[1]);
        uVar9 = param_1[2];
      }
      uVar7 = *param_1;
      *param_1 = local_78;
      param_1[1] = local_70;
      param_1[2] = local_68;
      uVar3 = param_1[3];
      param_1[3] = local_60;
      local_68 = uVar9;
      if (uVar5 != uVar9) {
        local_68 = uVar9 + ((uVar9 - uVar5) - 8 >> 3 ^ 0xffffffffffffffff) * 8;
      }
      if (uVar7 == 0) {
        return;
      }
      lVar6 = uVar3 - uVar7;
      plVar8 = (long *)*local_58;
      local_78 = uVar7;
      local_70 = uVar5;
      local_60 = uVar3;
      uVar9 = (**(code **)(*plVar8 + 0xc0))(plVar8);
      if ((uVar9 & 1) != 0) {
        lVar2 = tpidr_el0;
        if (*(char *)(lVar2 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar2 + 0x38d488) = 1;
          *(undefined8 *)(lVar2 + 0x38d478) = 0;
          *(undefined8 *)(lVar2 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar2 + 0x38d480)) {
          FUN_02bcc824(plVar8,uVar7,lVar6,8);
          return;
        }
      }
      (**(code **)(*plVar8 + 0x18))(plVar8,uVar7,lVar6,8);
      return;
    }
    if (param_1[3] != param_1[2]) {
      local_78 = (**(code **)(*(long *)param_1[10] + 0x10))((long *)param_1[10],0x1000,8);
      if (local_78 == 0) {
        (**(code **)(*(long *)param_1[10] + 0xb8))();
      }
      FUN_00d3d3c8(param_1,&local_78);
      return;
    }
    local_78 = (**(code **)(*(long *)param_1[10] + 0x10))((long *)param_1[10],0x1000,8);
    if (local_78 == 0) {
      (**(code **)(*(long *)param_1[10] + 0xb8))();
    }
    FUN_00d3d608(param_1,&local_78);
  }
  else {
    param_1[8] = param_1[8] - 0x200;
  }
  local_78 = *(ulong *)param_1[1];
  param_1[1] = (ulong)((ulong *)param_1[1] + 1);
  FUN_00d3d188(param_1,&local_78);
  return;
}


