/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e8512c; name: FUN_01e8512c
 */


void FUN_01e8512c(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  long local_50;
  long *plStack_48;
  
  plVar7 = param_1 + 3;
  lVar4 = FUN_01e853c8(param_1,(param_1[1] - *param_1 >> 3) + 1);
  lVar8 = *param_1;
  lVar5 = param_1[1];
  local_50 = 0;
  plStack_48 = plVar7;
  if (lVar4 == 0) {
    local_68 = 0;
  }
  else {
    local_68 = (**(code **)(*(long *)*plVar7 + 0x10))((long *)*plVar7,lVar4 << 3,8);
    if (local_68 == 0) {
      (**(code **)(*(long *)*plVar7 + 0xb8))();
    }
  }
  puVar1 = (undefined8 *)(local_68 + (lVar5 - lVar8 >> 3) * 8);
  local_50 = local_68 + lVar4 * 8;
  lVar8 = *plVar7;
  local_60 = puVar1;
  local_58 = puVar1;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_DAT_04379520), puVar2 = PTR_DAT_04379528, iVar3 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar2,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (lVar5 == 0) {
    *puVar1 = *param_2;
  }
  else {
    if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = lVar8;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
    *puVar1 = *param_2;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
  }
  local_58 = local_58 + 1;
  FUN_01e8445c(param_1,&local_68);
  lVar8 = local_68;
  if ((long)local_58 - (long)local_60 != 0) {
    local_58 = local_58 + (((long)local_58 - (long)local_60) - 8U >> 3 ^ 0xffffffffffffffff);
  }
  if (local_68 != 0) {
    lVar5 = local_50 - local_68;
    plVar7 = (long *)*plStack_48;
    uVar6 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar6 & 1) != 0) {
      lVar4 = tpidr_el0;
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar4 + 0x38d480)) {
        FUN_02bcc824(plVar7,lVar8,lVar5,8);
        return;
      }
    }
    (**(code **)(*plVar7 + 0x18))(plVar7,lVar8,lVar5,8);
  }
  return;
}


