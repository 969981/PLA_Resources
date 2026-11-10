/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f25758; name: FUN_01f25758
 */


void FUN_01f25758(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  long local_68;
  long local_60;
  long local_58;
  long local_50;
  long *plStack_48;
  
  puVar8 = (undefined8 *)param_1[1];
  if (puVar8 < (undefined8 *)param_1[2]) {
    if (param_2 == puVar8) {
      FUN_01f27f68(param_1 + 3,param_2,param_3);
      param_1[1] = param_1[1] + 0x10;
    }
    else {
      FUN_01f27b60(param_1,param_2,puVar8,param_2 + 2);
      puVar8 = param_3;
      if ((param_2 <= param_3) && (puVar8 = param_3 + 2, (undefined8 *)param_1[1] <= param_3)) {
        puVar8 = param_3;
      }
      uVar5 = *puVar8;
      *(undefined4 *)(param_2 + 1) = *(undefined4 *)(puVar8 + 1);
      *param_2 = uVar5;
    }
  }
  else {
    lVar7 = *param_1;
    uVar2 = ((long)puVar8 - lVar7 >> 4) + 1;
    uVar6 = param_1[4];
    if (0x7ffffffffffffffe < uVar6) {
      uVar6 = 0x7fffffffffffffff;
    }
    if (uVar6 < uVar2) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar3 = param_1[2] - lVar7;
    plVar9 = param_1 + 3;
    if ((ulong)(lVar3 >> 4) < uVar6 >> 1) {
      uVar4 = lVar3 >> 3;
      uVar6 = uVar2;
      if (uVar2 <= uVar4) {
        uVar6 = uVar4;
      }
    }
    local_50 = 0;
    plStack_48 = plVar9;
    if (uVar6 == 0) {
      local_68 = 0;
    }
    else {
      local_68 = (**(code **)(*(long *)*plVar9 + 0x10))((long *)*plVar9,uVar6 << 4,8);
      if (local_68 == 0) {
        (**(code **)(*(long *)*plVar9 + 0xb8))((long *)*plVar9);
      }
    }
    local_60 = local_68 + ((long)param_2 - lVar7 >> 4) * 0x10;
    local_50 = local_68 + uVar6 * 0x10;
    local_58 = local_60;
    FUN_01f27c10(&local_68,param_3);
    FUN_01f27e4c(param_1,&local_68,param_2);
    lVar7 = local_68;
    if (local_58 - local_60 != 0) {
      local_58 = local_58 + ((local_58 - local_60) - 0x10U >> 4 ^ 0xffffffffffffffff) * 0x10;
    }
    if (local_68 != 0) {
      lVar3 = local_50 - local_68;
      plVar9 = (long *)*plStack_48;
      uVar2 = (**(code **)(*plVar9 + 0xc0))(plVar9);
      if ((uVar2 & 1) != 0) {
        lVar1 = tpidr_el0;
        if (*(char *)(lVar1 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar1 + 0x38d488) = 1;
          *(undefined8 *)(lVar1 + 0x38d478) = 0;
          *(undefined8 *)(lVar1 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar1 + 0x38d480)) {
          FUN_02bcc824(plVar9,lVar7,lVar3,8);
          return;
        }
      }
      (**(code **)(*plVar9 + 0x18))(plVar9,lVar7,lVar3,8);
    }
  }
  return;
}


