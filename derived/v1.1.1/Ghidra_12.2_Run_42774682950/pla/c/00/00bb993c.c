/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00bb993c; name: FUN_00bb993c
 */


void FUN_00bb993c(long *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long local_b8;
  uint local_b0;
  long local_a8;
  undefined4 local_a0;
  long local_98;
  long lStack_90;
  long local_88;
  long *local_80;
  ulong local_78;
  long local_70;
  undefined4 local_68;
  long *local_60;
  long lStack_58;
  long local_50;
  long local_48;
  
  if ((ulong)(param_1[2] * 0x40) < param_2) {
    plVar7 = param_1 + 3;
    plVar4 = (long *)*plVar7;
    local_78 = param_1[4];
    local_88 = 0;
    local_98 = 0;
    lStack_90 = 0;
    local_68 = 0;
    local_70 = 0;
    local_80 = plVar4;
    if (local_78 < 0x1ffffffffffffff) {
      if (local_78 << 6 < param_2) goto LAB_00bb9b30;
    }
    else if (0x7fffffffffffffff < param_2) {
LAB_00bb9b30:
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar3 = (param_2 - 1 >> 6) + 1;
    lVar1 = (**(code **)(*plVar4 + 0x10))(plVar4,lVar3 * 8,1);
    if (lVar1 == 0) {
      (**(code **)(*plVar4 + 0xb8))(plVar4);
    }
    lStack_90 = 0;
    local_a8 = *param_1;
    local_b0 = (uint)param_1[1] & 0x3f;
    local_b8 = local_a8 + ((ulong)param_1[1] >> 3 & 0x1ffffffffffffff8);
    local_a0 = 0;
    local_98 = lVar1;
    local_88 = lVar3;
    FUN_00bb9e8c(&local_98,&local_a8,&local_b8);
    lVar5 = *param_1;
    *param_1 = local_98;
    lVar3 = param_1[1];
    param_1[1] = lStack_90;
    lVar1 = param_1[2];
    param_1[2] = local_88;
    plVar4 = (long *)*plVar7;
    lStack_58 = param_1[4];
    local_50 = param_1[5];
    local_48 = param_1[6];
    *(undefined4 *)(param_1 + 6) = local_68;
    param_1[4] = local_78;
    param_1[5] = local_70;
    *plVar7 = (long)local_80;
    local_68 = (undefined4)local_48;
    if (lVar5 != 0) {
      lVar6 = lVar1 << 3;
      local_98 = lVar5;
      lStack_90 = lVar3;
      local_88 = lVar1;
      local_80 = plVar4;
      local_78 = lStack_58;
      local_70 = local_50;
      local_60 = plVar4;
      uVar2 = (**(code **)(*plVar4 + 0xc0))(plVar4);
      if ((uVar2 & 1) != 0) {
        lVar3 = tpidr_el0;
        if (*(char *)(lVar3 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar3 + 0x38d488) = 1;
          *(undefined8 *)(lVar3 + 0x38d478) = 0;
          *(undefined8 *)(lVar3 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar3 + 0x38d480)) {
          FUN_02bcc824(plVar4,lVar5,lVar6,1);
          return;
        }
      }
      (**(code **)(*plVar4 + 0x18))(plVar4,lVar5,lVar6,1);
    }
  }
  return;
}


