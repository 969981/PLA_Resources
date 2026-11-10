/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f36178; name: FUN_01f36178
 */


void FUN_01f36178(ulong *param_1)

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
  ulong local_88;
  ulong local_80;
  ulong local_78;
  ulong local_70;
  ulong *local_68;
  long local_58;
  
  if (param_1[8] < 0x66) {
    uVar10 = (long)(param_1[2] - param_1[1]) >> 3;
    lVar6 = param_1[3] - *param_1;
    if ((ulong)(lVar6 >> 3) <= uVar10) {
      puVar1 = param_1 + 4;
      local_70 = 0;
      uVar5 = lVar6 >> 2;
      if (lVar6 == 0) {
        uVar5 = 1;
      }
      local_68 = puVar1;
      uVar3 = (**(code **)(*(long *)param_1[4] + 0x10))((long *)param_1[4],uVar5 << 3,8);
      if (uVar3 == 0) {
        (**(code **)(*(long *)*puVar1 + 0xb8))();
      }
      uVar7 = uVar3 + uVar10 * 8;
      uVar9 = uVar3 + uVar5 * 8;
      local_88 = uVar3;
      local_80 = uVar7;
      local_78 = uVar7;
      local_70 = uVar9;
      local_58 = (**(code **)(*(long *)param_1[10] + 0x10))((long *)param_1[10],0xff0,8);
      if (local_58 == 0) {
        (**(code **)(*(long *)param_1[10] + 0xb8))();
      }
      uVar4 = uVar3;
      if (uVar10 == uVar5) {
        if (uVar7 < uVar3 || uVar7 - uVar3 == 0) {
          lVar6 = uVar9 - uVar3;
          uVar10 = lVar6 >> 2;
          if (lVar6 == 0) {
            uVar10 = 1;
          }
          uVar4 = (**(code **)(*(long *)*puVar1 + 0x10))((long *)*puVar1,uVar10 << 3,8);
          if (uVar4 == 0) {
            (**(code **)(*(long *)*puVar1 + 0xb8))();
          }
          uVar9 = uVar4 + uVar10 * 8;
          uVar7 = uVar4 + (uVar10 >> 2) * 8;
          local_88 = uVar4;
          local_80 = uVar7;
          local_78 = uVar7;
          local_70 = uVar9;
          if (uVar3 != 0) {
            plVar8 = (long *)*puVar1;
            uVar10 = (**(code **)(*plVar8 + 0xc0))(plVar8);
            if ((uVar10 & 1) != 0) {
              lVar2 = tpidr_el0;
              if (*(char *)(lVar2 + 0x38d488) == '\0') {
                *(undefined1 *)(lVar2 + 0x38d488) = 1;
                *(undefined8 *)(lVar2 + 0x38d478) = 0;
                *(undefined8 *)(lVar2 + 0x38d480) = 0;
                __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
              }
              if (0 < *(int *)(lVar2 + 0x38d480)) {
                FUN_02bcc824(plVar8,uVar3,lVar6,8);
                goto LAB_01f36238;
              }
            }
            (**(code **)(*plVar8 + 0x18))(plVar8,uVar3,lVar6,8);
          }
        }
        else {
          lVar6 = (long)(uVar7 - uVar3) >> 3;
          uVar10 = lVar6 + 2;
          if (-1 < lVar6 + 1) {
            uVar10 = lVar6 + 1;
          }
          uVar7 = uVar7 + (uVar10 & 0x3ffffffffffffffe) * -4;
          local_80 = uVar7;
          local_78 = uVar7;
        }
      }
      else {
      }
LAB_01f36238:
      FUN_01f36f48(puVar1,uVar7,&local_58);
      local_78 = uVar7 + 8;
      uVar10 = param_1[2];
      uVar5 = uVar10;
      if (uVar10 == param_1[1]) {
        local_80 = uVar7;
        local_88 = uVar4;
        local_70 = uVar9;
      }
      else {
        do {
          uVar5 = uVar5 - 8;
          FUN_01f36d04(&local_88,uVar5);
        } while (uVar5 != param_1[1]);
        uVar10 = param_1[2];
      }
      uVar7 = *param_1;
      *param_1 = local_88;
      param_1[1] = local_80;
      param_1[2] = local_78;
      uVar3 = param_1[3];
      param_1[3] = local_70;
      local_78 = uVar10;
      if (uVar5 != uVar10) {
        local_78 = uVar10 + ((uVar10 - uVar5) - 8 >> 3 ^ 0xffffffffffffffff) * 8;
      }
      if (uVar7 == 0) {
        return;
      }
      lVar6 = uVar3 - uVar7;
      plVar8 = (long *)*local_68;
      local_88 = uVar7;
      local_80 = uVar5;
      local_70 = uVar3;
      uVar10 = (**(code **)(*plVar8 + 0xc0))(plVar8);
      if ((uVar10 & 1) != 0) {
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
      local_88 = (**(code **)(*(long *)param_1[10] + 0x10))((long *)param_1[10],0xff0,8);
      if (local_88 == 0) {
        (**(code **)(*(long *)param_1[10] + 0xb8))();
      }
      FUN_01f36880(param_1,&local_88);
      return;
    }
    local_88 = (**(code **)(*(long *)param_1[10] + 0x10))((long *)param_1[10],0xff0,8);
    if (local_88 == 0) {
      (**(code **)(*(long *)param_1[10] + 0xb8))();
    }
    FUN_01f36ac0(param_1,&local_88);
  }
  else {
    param_1[8] = param_1[8] - 0x66;
  }
  local_88 = *(ulong *)param_1[1];
  param_1[1] = (ulong)((ulong *)param_1[1] + 1);
  FUN_01f36640(param_1,&local_88);
  return;
}


