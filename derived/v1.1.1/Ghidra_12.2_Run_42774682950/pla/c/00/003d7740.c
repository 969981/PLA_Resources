/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003d7740; name: FUN_003d7740
 */


ulong FUN_003d7740(undefined4 param_1,undefined8 param_2,undefined8 param_3,long *param_4,
                  ulong param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  ulong param_9)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  uint local_68;
  uint uStack_64;
  
  *(ulong *)(param_9 + 0x88) = param_5;
  lVar11 = ((ulong)((int)param_5 * 0x18 + 0xf) & 0xfffffff0) + 0x90;
  FUN_003d5de0(param_9,param_1,param_2,param_3,param_8);
  uVar3 = (ulong)(uint)((int)param_5 << 4);
  uVar12 = param_9 + uVar3 + 0xa0;
  if (param_5 == 0) {
    uVar8 = 0;
    lVar11 = 0x90;
  }
  else {
    lVar9 = 0;
    uVar8 = 0;
    uVar10 = 0;
    plVar7 = param_4;
    do {
      local_80 = param_9;
      local_68 = (uint)(uVar10 == 0);
      uStack_64 = (uint)(param_5 - 1 == uVar10);
      lVar4 = *plVar7;
      plVar1 = (long *)(param_9 + lVar9 + 0xa0);
      *plVar1 = lVar4;
      *(ulong *)(param_9 + lVar9 + 0xa8) = uVar12;
      uStack_78 = param_6;
      local_70 = param_7;
      uVar2 = (**(code **)(lVar4 + 0x38))(plVar1,&local_80);
      if (uVar2 != 0) {
        if (uVar8 == 0) {
          uVar8 = uVar2;
        }
        else if (4 < uVar2) {
          FUN_002f0430(uVar2,"external/com_google_grpc_base/src/core/lib/channel/channel_stack.cc",
                       0x7d);
        }
      }
      uVar10 = uVar10 + 1;
      uVar12 = uVar12 + ((ulong)(*(int *)(*plVar7 + 0x30) + 0xf) & 0xfffffff0);
      lVar11 = ((ulong)(*(int *)(*plVar7 + 0x10) + 0xf) & 0xfffffff0) + lVar11;
      lVar9 = lVar9 + 0x10;
      plVar7 = plVar7 + 1;
    } while (param_5 != uVar10);
  }
  if (uVar12 <= param_9) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/channel/channel_stack.cc",0x85,2,
                 "assertion failed: %s","user_data > (char*)stack");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar9 = uVar3 + 0xa0;
  if (param_5 != 0) {
    if (param_5 < 4) {
      uVar10 = 0;
      uVar3 = 0xffffffffffffffff;
    }
    else {
      uVar10 = param_5 & 0xfffffffffffffffc;
      lVar6 = 0;
      lVar5 = 0;
      lVar4 = 0;
      plVar7 = param_4 + 2;
      uVar3 = uVar10;
      do {
        uVar3 = uVar3 - 4;
        lVar4 = ((ulong)(*(int *)(plVar7[1] + 0x30) + 0xf) & 0xfffffff0) + lVar4;
        lVar9 = ((ulong)(*(int *)(plVar7[-2] + 0x30) + 0xf) & 0xfffffff0) + lVar9;
        lVar6 = ((ulong)(*(int *)(plVar7[-1] + 0x30) + 0xf) & 0xfffffff0) + lVar6;
        lVar5 = ((ulong)(*(int *)(*plVar7 + 0x30) + 0xf) & 0xfffffff0) + lVar5;
        plVar7 = plVar7 + 4;
      } while (uVar3 != 0);
      lVar9 = lVar4 + lVar5 + lVar6 + lVar9;
      if (uVar10 == param_5) goto LAB_003d796c;
      uVar3 = ~uVar10;
    }
    if ((param_5 & 1) != 0) {
      plVar7 = param_4 + uVar10;
      uVar10 = uVar10 | 1;
      lVar9 = ((ulong)(*(int *)(*plVar7 + 0x30) + 0xf) & 0xfffffff0) + lVar9;
    }
    if (uVar3 + param_5 != 0) {
      lVar4 = param_5 - uVar10;
      param_4 = param_4 + uVar10 + 1;
      do {
        lVar4 = lVar4 + -2;
        lVar9 = ((ulong)(*(int *)(*param_4 + 0x30) + 0xf) & 0xfffffff0) +
                ((ulong)(*(int *)(param_4[-1] + 0x30) + 0xf) & 0xfffffff0) + lVar9;
        param_4 = param_4 + 2;
      } while (lVar4 != 0);
    }
  }
LAB_003d796c:
  if (uVar12 - param_9 != lVar9) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/channel/channel_stack.cc",0x87,2,
                 "assertion failed: %s",
                 "(uintptr_t)(user_data - (char*)stack) == grpc_channel_stack_size(filters, filter_count)"
                );
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long *)(param_9 + 0x90) = lVar11;
  return uVar8;
}


