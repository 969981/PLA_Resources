/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bf2c6c; name: FUN_02bf2c6c
 */


void FUN_02bf2c6c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 local_68;
  
  local_68 = param_2;
  nn::os::LockMutex((MutexType *)(param_1 + 0x128));
  *(undefined1 *)(param_1 + 0x108) = 1;
  plVar9 = *(long **)(param_1 + 0xa8);
  lVar11 = plVar9[1];
  plVar10 = plVar9 + 3;
  if (lVar11 == plVar9[2]) {
    uVar8 = plVar9[4];
    lVar11 = lVar11 - *plVar9 >> 3;
    uVar5 = lVar11 + 1;
    if (0x7ffffffffffffffe < uVar8) {
      uVar8 = 0x7fffffffffffffff;
    }
    if (uVar8 < uVar5) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar6 = plVar9[2] - *plVar9;
    uVar7 = lVar6 >> 2;
    if (uVar5 <= uVar7) {
      uVar5 = uVar7;
    }
    if ((ulong)(lVar6 >> 3) < uVar8 >> 1) {
      uVar8 = uVar5;
    }
    if (uVar8 == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = (**(code **)(*(long *)*plVar10 + 0x10))((long *)*plVar10,uVar8 << 3,8);
      if (lVar6 == 0) {
        (**(code **)(*(long *)*plVar10 + 0xb8))();
      }
    }
    lVar11 = lVar6 + lVar11 * 8;
    FUN_02bfbf88(plVar10,lVar11,&local_68);
    puVar2 = PTR_DAT_04379528;
    puVar1 = PTR_DAT_04379520;
    lVar12 = *plVar9;
    lVar15 = plVar9[1];
    lVar14 = lVar11;
    if (lVar15 != lVar12) {
      do {
        lVar13 = *plVar10;
        if (((*puVar1 & 1) == 0) && (iVar3 = __cxa_guard_acquire(puVar1), iVar3 != 0)) {
          FUN_008a62a4(puVar2);
          FUN_00100250(PTR_LAB_04379530,puVar2,&PTR_LOOP_0411a000);
          __cxa_guard_release(puVar1);
        }
        lVar4 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
        if (lVar4 == 0) {
          *(undefined8 *)(lVar14 + -8) = *(undefined8 *)(lVar15 + -8);
        }
        else {
          if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar13;
          *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
          *(undefined8 *)(lVar14 + -8) = *(undefined8 *)(lVar15 + -8);
          *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
        }
        lVar15 = lVar15 + -8;
        lVar14 = lVar14 + -8;
      } while (lVar12 != lVar15);
      lVar12 = *plVar9;
    }
    *plVar9 = lVar14;
    plVar9[1] = lVar11 + 8;
    lVar11 = plVar9[2];
    plVar9[2] = lVar6 + uVar8 * 8;
    if (lVar12 != 0) {
      plVar10 = (long *)*plVar10;
      uVar5 = (**(code **)(*plVar10 + 0xc0))(plVar10);
      if ((uVar5 & 1) != 0) {
        lVar6 = tpidr_el0;
        if (*(char *)(lVar6 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar6 + 0x38d488) = 1;
          *(undefined8 *)(lVar6 + 0x38d478) = 0;
          *(undefined8 *)(lVar6 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar6 + 0x38d480)) {
          FUN_02bcc824(plVar10,lVar12,lVar11 - lVar12,8);
          goto LAB_02bf2ed4;
        }
      }
      (**(code **)(*plVar10 + 0x18))(plVar10,lVar12,lVar11 - lVar12,8);
    }
  }
  else {
    FUN_02bfbf88(plVar10,lVar11,&local_68);
    plVar9[1] = plVar9[1] + 8;
  }
LAB_02bf2ed4:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x128));
  return;
}


