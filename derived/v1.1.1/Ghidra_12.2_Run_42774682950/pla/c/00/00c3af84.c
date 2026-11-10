/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00c3af84; name: FUN_00c3af84
 */


void FUN_00c3af84(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 *local_60;
  undefined8 *local_58;
  long local_50;
  undefined8 *local_48;
  
  puVar2 = *(undefined8 **)(param_1 + 0x60);
  puVar1 = (undefined8 *)(param_1 + 0x70);
  if (puVar2 < *(undefined8 **)(param_1 + 0x68)) {
    uVar11 = *puVar1;
    if ((*PTR_DAT_04379520 & 1) == 0) {
      iVar4 = __cxa_guard_acquire(PTR_DAT_04379520);
      puVar3 = PTR_DAT_04379528;
      if (iVar4 != 0) {
        FUN_008a62a4(PTR_DAT_04379528);
        FUN_00100250(PTR_LAB_04379530,puVar3,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379520);
      }
    }
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (lVar10 == 0) {
      uVar11 = param_2[1];
      *puVar2 = *param_2;
      puVar2[1] = uVar11;
    }
    else {
      if (0xf < *(ulong *)(lVar10 + 0x80)) goto LAB_00c3b310;
      *(undefined8 *)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = uVar11;
      *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
      uVar11 = param_2[1];
      *puVar2 = *param_2;
      puVar2[1] = uVar11;
      *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
    }
    *(long *)(param_1 + 0x60) = *(long *)(param_1 + 0x60) + 0x10;
  }
  else {
    uVar8 = *(ulong *)(param_1 + 0x78);
    lVar10 = (long)puVar2 - *(long *)(param_1 + 0x58) >> 4;
    uVar5 = lVar10 + 1;
    if (0x7ffffffffffffffe < uVar8) {
      uVar8 = 0x7fffffffffffffff;
    }
    if (uVar8 < uVar5) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar6 = (long)*(undefined8 **)(param_1 + 0x68) - *(long *)(param_1 + 0x58);
    if ((ulong)(lVar6 >> 4) < uVar8 >> 1) {
      uVar7 = lVar6 >> 3;
      uVar8 = uVar5;
      if (uVar5 <= uVar7) {
        uVar8 = uVar7;
      }
    }
    local_50 = 0;
    local_48 = puVar1;
    if (uVar8 == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = (**(code **)(*(long *)*puVar1 + 0x10))((long *)*puVar1,uVar8 << 4,8);
      if (lVar6 == 0) {
        (**(code **)(*(long *)*puVar1 + 0xb8))((long *)*puVar1);
      }
    }
    puVar2 = (undefined8 *)(lVar6 + lVar10 * 0x10);
    local_50 = lVar6 + uVar8 * 0x10;
    uVar11 = *puVar1;
    local_60 = puVar2;
    local_58 = puVar2;
    if ((*PTR_DAT_04379520 & 1) == 0) {
      iVar4 = __cxa_guard_acquire(PTR_DAT_04379520);
      puVar3 = PTR_DAT_04379528;
      if (iVar4 != 0) {
        FUN_008a62a4(PTR_DAT_04379528);
        FUN_00100250(PTR_LAB_04379530,puVar3,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379520);
      }
    }
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (lVar10 == 0) {
      uVar11 = param_2[1];
      *puVar2 = *param_2;
      puVar2[1] = uVar11;
    }
    else {
      if (0xf < *(ulong *)(lVar10 + 0x80)) {
LAB_00c3b310:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = uVar11;
      *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
      uVar11 = param_2[1];
      *puVar2 = *param_2;
      puVar2[1] = uVar11;
      *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
    }
    local_58 = local_58 + 2;
    FUN_00c3b55c(puVar1,*(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x60),&local_60);
    puVar1 = *(undefined8 **)(param_1 + 0x58);
    lVar10 = *(long *)(param_1 + 0x60);
    *(undefined8 **)(param_1 + 0x58) = local_60;
    *(undefined8 **)(param_1 + 0x60) = local_58;
    lVar6 = *(long *)(param_1 + 0x68);
    *(long *)(param_1 + 0x68) = local_50;
    local_58 = (undefined8 *)lVar10;
    if (lVar10 - (long)puVar1 != 0) {
      local_58 = (undefined8 *)
                 (lVar10 + ((lVar10 - (long)puVar1) - 0x10U >> 4 ^ 0xffffffffffffffff) * 0x10);
    }
    if (puVar1 != (undefined8 *)0x0) {
      lVar10 = lVar6 - (long)puVar1;
      plVar9 = (long *)*local_48;
      local_60 = puVar1;
      local_50 = lVar6;
      uVar5 = (**(code **)(*plVar9 + 0xc0))(plVar9);
      if ((uVar5 & 1) != 0) {
        lVar6 = tpidr_el0;
        if (*(char *)(lVar6 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar6 + 0x38d488) = 1;
          *(undefined8 *)(lVar6 + 0x38d478) = 0;
          *(undefined8 *)(lVar6 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar6 + 0x38d480)) {
          FUN_02bcc824(plVar9,puVar1,lVar10,8);
          return;
        }
      }
      (**(code **)(*plVar9 + 0x18))(plVar9,puVar1,lVar10,8);
    }
  }
  return;
}


