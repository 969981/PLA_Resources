/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02aecee4; name: FUN_02aecee4
 */


void FUN_02aecee4(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  code *pcVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  code *local_d0;
  code *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  undefined8 auStack_b0 [12];
  
  auStack_b0[0] = *param_2;
  local_d0 = FUN_02aed1cc;
  local_c8 = FUN_02aed1e8;
  local_c0 = &LAB_02aed1ec;
  local_b8 = &LAB_02aed1f8;
  uVar1 = param_1[1];
  plVar6 = param_1 + 3;
  if (uVar1 < (ulong)param_1[2]) {
    FUN_00d9361c(plVar6,uVar1,&local_d0);
    param_1[1] = param_1[1] + 0x80;
    pcVar4 = local_c8;
  }
  else {
    uVar5 = param_1[4];
    lVar9 = (long)(uVar1 - *param_1) >> 7;
    uVar1 = lVar9 + 1;
    if (0x7ffffffffffffffe < uVar5) {
      uVar5 = 0x7fffffffffffffff;
    }
    if (uVar5 < uVar1) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar2 = param_1[2] - *param_1;
    if ((ulong)(lVar2 >> 7) < uVar5 >> 1) {
      uVar3 = lVar2 >> 6;
      uVar5 = uVar1;
      if (uVar1 <= uVar3) {
        uVar5 = uVar3;
      }
    }
    if (uVar5 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = (**(code **)(*(long *)*plVar6 + 0x10))((long *)*plVar6,uVar5 << 7,0x10);
      if (lVar2 == 0) {
        (**(code **)(*(long *)*plVar6 + 0xb8))();
      }
    }
    lVar10 = lVar2 + lVar9 * 0x80;
    FUN_00d9361c(plVar6,lVar10,&local_d0);
    lVar8 = *param_1;
    lVar7 = param_1[1];
    lVar9 = lVar10 + 0x80;
    if (lVar7 == lVar8) {
      lVar7 = lVar8;
    }
    else {
      do {
        lVar10 = lVar10 + -0x80;
        lVar7 = lVar7 + -0x80;
        FUN_00d9361c(plVar6,lVar10,lVar7);
      } while (lVar8 != lVar7);
      lVar8 = *param_1;
      lVar7 = param_1[1];
    }
    *param_1 = lVar10;
    param_1[1] = lVar9;
    lVar9 = param_1[2];
    param_1[2] = lVar2 + uVar5 * 0x80;
    while (lVar2 = lVar7, lVar2 != lVar8) {
      pcVar4 = *(code **)(lVar2 + -0x78);
      lVar7 = lVar2 + -0x80;
      if (pcVar4 != (code *)0x0) {
        *(undefined8 *)(lVar2 + -0x70) = 0;
        *(undefined8 *)(lVar2 + -0x68) = 0;
        *(undefined8 *)(lVar2 + -0x80) = 0;
        *(undefined8 *)(lVar2 + -0x78) = 0;
        (*pcVar4)(lVar2 + -0x60);
      }
    }
    pcVar4 = local_c8;
    if (lVar8 != 0) {
      plVar6 = (long *)*plVar6;
      uVar1 = (**(code **)(*plVar6 + 0xc0))(plVar6);
      if ((uVar1 & 1) != 0) {
        lVar2 = tpidr_el0;
        if (*(char *)(lVar2 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar2 + 0x38d488) = 1;
          *(undefined8 *)(lVar2 + 0x38d478) = 0;
          *(undefined8 *)(lVar2 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar2 + 0x38d480)) {
          FUN_02bcc824(plVar6,lVar8,lVar9 - lVar8,0x10);
          pcVar4 = local_c8;
          goto joined_r0x02aed14c;
        }
      }
      (**(code **)(*plVar6 + 0x18))(plVar6,lVar8,lVar9 - lVar8,0x10);
      pcVar4 = local_c8;
    }
  }
joined_r0x02aed14c:
  if (pcVar4 != (code *)0x0) {
    local_c0 = (undefined1 *)0x0;
    local_b8 = (undefined1 *)0x0;
    local_d0 = (code *)0x0;
    local_c8 = (code *)0x0;
    (*pcVar4)(auStack_b0);
  }
  *(undefined1 *)(param_1 + 7) = 1;
  return;
}


