/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02919b34; name: FUN_02919b34
 */


undefined8 FUN_02919b34(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  
  if ((1 < *(int *)(param_1 + 0x448) - 3U) || (*(char *)(param_1 + 0x4a2) != '\0')) {
    return 0;
  }
  plVar8 = *(long **)(param_1 + 0x478);
  if (plVar8 == (long *)0x0) {
    plVar10 = *(long **)(param_1 + 8);
    plVar8 = (long *)(**(code **)(*plVar10 + 0x10))(plVar10,0x38,8);
    if (plVar8 == (long *)0x0) {
      plVar10 = (long *)0x0;
      uVar14 = 0;
      uVar12 = 0;
    }
    else {
      if (((*PTR_DAT_04379520 & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
        FUN_008a62a4(PTR_DAT_04379528);
        FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379520);
      }
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
      if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar10;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
      plVar8[5] = 0;
      plVar8[6] = 0;
      plVar8[3] = 0;
      plVar8[4] = 0;
      *plVar8 = 0;
      plVar8[1] = 0;
      plVar8[2] = 0;
      FUN_01c76810(plVar8);
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
      uVar12 = 8;
      uVar14 = 0x38;
    }
    lVar3 = *(long *)(param_1 + 0x478);
    *(long **)(param_1 + 0x478) = plVar8;
    if (lVar3 != 0) {
      FUN_0291ae40(param_1 + 0x480);
      plVar8 = *(long **)(param_1 + 0x478);
    }
    *(long **)(param_1 + 0x480) = plVar10;
    *(undefined8 *)(param_1 + 0x488) = uVar14;
    *(undefined8 *)(param_1 + 0x490) = uVar12;
  }
  uVar4 = plVar8[1];
  plVar10 = plVar8 + 3;
  if (uVar4 < (ulong)plVar8[2]) {
    FUN_0291b184(plVar10,uVar4,param_2);
    plVar8[1] = plVar8[1] + 0x10;
  }
  else {
    uVar7 = plVar8[4];
    lVar3 = (long)(uVar4 - *plVar8) >> 4;
    uVar4 = lVar3 + 1;
    if (0x7ffffffffffffffe < uVar7) {
      uVar7 = 0x7fffffffffffffff;
    }
    if (uVar7 < uVar4) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar5 = plVar8[2] - *plVar8;
    uVar6 = lVar5 >> 3;
    if (uVar4 <= uVar6) {
      uVar4 = uVar6;
    }
    if ((ulong)(lVar5 >> 4) < uVar7 >> 1) {
      uVar7 = uVar4;
    }
    if (uVar7 == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = (**(code **)(*(long *)*plVar10 + 0x10))((long *)*plVar10,uVar7 << 4,0x10);
      if (lVar5 == 0) {
        (**(code **)(*(long *)*plVar10 + 0xb8))();
      }
    }
    lVar11 = lVar5 + lVar3 * 0x10;
    FUN_0291b184(plVar10,lVar11,param_2);
    lVar9 = *plVar8;
    lVar13 = plVar8[1];
    lVar3 = lVar11 + 0x10;
    if (lVar13 != lVar9) {
      do {
        lVar11 = lVar11 + -0x10;
        lVar13 = lVar13 + -0x10;
        FUN_01c7fa78(plVar10,lVar11,lVar13);
      } while (lVar9 != lVar13);
      lVar9 = *plVar8;
    }
    lVar13 = plVar8[2];
    *plVar8 = lVar11;
    plVar8[1] = lVar3;
    plVar8[2] = lVar5 + uVar7 * 0x10;
    if (lVar9 != 0) {
      plVar10 = (long *)*plVar10;
      uVar4 = (**(code **)(*plVar10 + 0xc0))(plVar10);
      if ((uVar4 & 1) != 0) {
        lVar3 = tpidr_el0;
        if (*(char *)(lVar3 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar3 + 0x38d488) = 1;
          *(undefined8 *)(lVar3 + 0x38d478) = 0;
          *(undefined8 *)(lVar3 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar3 + 0x38d480)) {
          FUN_02bcc824(plVar10,lVar9,lVar13 - lVar9,0x10);
          return 1;
        }
      }
      (**(code **)(*plVar10 + 0x18))(plVar10,lVar9,lVar13 - lVar9,0x10);
    }
  }
  return 1;
}


