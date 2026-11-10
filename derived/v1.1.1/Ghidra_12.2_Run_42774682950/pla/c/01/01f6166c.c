/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f6166c; name: FUN_01f6166c
 */


void FUN_01f6166c(long param_1,long param_2,int param_3)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  puVar1 = (undefined8 *)(param_1 + (long)param_3 * 0x10);
  local_78 = puVar1[1];
  uStack_70 = 0;
  local_80 = *puVar1;
  lVar5 = *(long *)(param_2 + 0x10);
  puVar1 = (undefined8 *)(param_2 + 0x20);
  if (lVar5 == *(long *)(param_2 + 0x18)) {
    uVar8 = *(ulong *)(param_2 + 0x28);
    lVar5 = lVar5 - *(long *)(param_2 + 8) >> 5;
    uVar4 = lVar5 + 1;
    if (0x7ffffffffffffffe < uVar8) {
      uVar8 = 0x7fffffffffffffff;
    }
    if (uVar8 < uVar4) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar6 = *(long *)(param_2 + 0x18) - *(long *)(param_2 + 8);
    if ((ulong)(lVar6 >> 5) < uVar8 >> 1) {
      uVar7 = lVar6 >> 4;
      uVar8 = uVar4;
      if (uVar4 <= uVar7) {
        uVar8 = uVar7;
      }
    }
    if (uVar8 == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = (**(code **)(*(long *)*puVar1 + 0x10))((long *)*puVar1,uVar8 << 5,0x10);
      if (lVar6 == 0) {
        (**(code **)(*(long *)*puVar1 + 0xb8))();
      }
    }
    lVar5 = lVar6 + lVar5 * 0x20;
    FUN_01f61bc0(puVar1,lVar5,&local_80);
    lVar10 = *(long *)(param_2 + 8);
    lVar12 = *(long *)(param_2 + 0x10);
    lVar11 = lVar5;
    if (lVar12 != lVar10) {
      do {
        uVar13 = *puVar1;
        if (((*PTR_DAT_04379520 & 1) == 0) &&
           (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), iVar2 != 0)) {
          FUN_008a62a4(PTR_DAT_04379528);
          FUN_00100250(PTR_LAB_04379530,PTR_DAT_04379528,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379520);
        }
        lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
        if (lVar3 == 0) {
          uVar13 = *(undefined8 *)(lVar12 + -8);
          *(undefined8 *)(lVar11 + -0x18) = *(undefined8 *)(lVar12 + -0x18);
          *(undefined8 *)(lVar11 + -8) = uVar13;
          uVar13 = *(undefined8 *)(lVar12 + -0x20);
          *(undefined8 *)(lVar11 + -0x10) = *(undefined8 *)(lVar12 + -0x10);
          *(undefined8 *)(lVar11 + -0x20) = uVar13;
        }
        else {
          if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(undefined8 *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = uVar13;
          *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
          uVar13 = *(undefined8 *)(lVar12 + -8);
          *(undefined8 *)(lVar11 + -0x18) = *(undefined8 *)(lVar12 + -0x18);
          *(undefined8 *)(lVar11 + -8) = uVar13;
          uVar13 = *(undefined8 *)(lVar12 + -0x20);
          *(undefined8 *)(lVar11 + -0x10) = *(undefined8 *)(lVar12 + -0x10);
          *(undefined8 *)(lVar11 + -0x20) = uVar13;
          *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
        }
        lVar12 = lVar12 + -0x20;
        lVar11 = lVar11 + -0x20;
      } while (lVar10 != lVar12);
      lVar10 = *(long *)(param_2 + 8);
    }
    *(long *)(param_2 + 8) = lVar11;
    *(long *)(param_2 + 0x10) = lVar5 + 0x20;
    lVar5 = *(long *)(param_2 + 0x18);
    *(ulong *)(param_2 + 0x18) = lVar6 + uVar8 * 0x20;
    if (lVar10 != 0) {
      plVar9 = (long *)*puVar1;
      lVar5 = lVar5 - lVar10;
      uVar4 = (**(code **)(*plVar9 + 0xc0))(plVar9);
      if ((uVar4 & 1) != 0) {
        lVar6 = tpidr_el0;
        if (*(char *)(lVar6 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar6 + 0x38d488) = 1;
          *(undefined8 *)(lVar6 + 0x38d478) = 0;
          *(undefined8 *)(lVar6 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar6 + 0x38d480)) {
          FUN_02bcc824(plVar9,lVar10,lVar5,0x10);
          return;
        }
      }
      (**(code **)(*plVar9 + 0x18))(plVar9,lVar10,lVar5,0x10);
    }
  }
  else {
    FUN_01f61bc0(puVar1,lVar5,&local_80);
    *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + 0x20;
  }
  return;
}


