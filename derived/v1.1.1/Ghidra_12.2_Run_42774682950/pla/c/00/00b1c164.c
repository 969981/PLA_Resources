/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00b1c164; name: FUN_00b1c164
 */


undefined8 FUN_00b1c164(long param_1,long param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  if (**(char **)(param_2 + 8) == '\0') {
    return 0;
  }
  lVar3 = *(long *)(param_1 + 0x210);
  puVar1 = (undefined8 *)(param_1 + 0x220);
  if (lVar3 == *(long *)(param_1 + 0x218)) {
    uVar6 = *(ulong *)(param_1 + 0x228);
    lVar3 = lVar3 - *(long *)(param_1 + 0x208) >> 3;
    if (0x7ffffffffffffffe < uVar6) {
      uVar6 = 0x7fffffffffffffff;
    }
    uVar2 = lVar3 * 0x4ec4ec4ec4ec4ec5 + 1;
    if (uVar6 < uVar2) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar4 = *(long *)(param_1 + 0x218) - *(long *)(param_1 + 0x208) >> 3;
    uVar5 = lVar4 * -0x6276276276276276;
    if (uVar2 <= uVar5) {
      uVar2 = uVar5;
    }
    if ((ulong)(lVar4 * 0x4ec4ec4ec4ec4ec5) < uVar6 >> 1) {
      uVar6 = uVar2;
    }
    if (uVar6 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = (**(code **)(*(long *)*puVar1 + 0x10))((long *)*puVar1,uVar6 * 0x68,8);
      if (lVar4 == 0) {
        (**(code **)(*(long *)*puVar1 + 0xb8))((long *)*puVar1);
      }
    }
    lVar8 = lVar4 + lVar3 * 8;
    FUN_00b1c958(puVar1,lVar8,param_2);
    lVar9 = *(long *)(param_1 + 0x208);
    lVar3 = lVar8 + 0x68;
    lVar10 = *(long *)(param_1 + 0x210);
    if (lVar10 == lVar9) {
      lVar10 = lVar9;
    }
    else {
      lVar8 = lVar8 + -0x68;
      FUN_00b1c958(puVar1,lVar8,lVar10 + -0x68);
      if (lVar10 + -0x68 != lVar9) {
        do {
          lVar8 = lVar8 + -0x68;
          FUN_00b1c958(puVar1,lVar8,lVar10 + -0xd0);
          lVar10 = lVar10 + -0x68;
        } while (lVar9 + 0x68 != lVar10);
      }
      lVar9 = *(long *)(param_1 + 0x208);
      lVar10 = *(long *)(param_1 + 0x210);
    }
    *(long *)(param_1 + 0x208) = lVar8;
    lVar8 = *(long *)(param_1 + 0x218);
    *(long *)(param_1 + 0x210) = lVar3;
    *(ulong *)(param_1 + 0x218) = lVar4 + uVar6 * 0x68;
    if (lVar10 != lVar9) {
      if (*(long **)(lVar10 + -0x50) != (long *)0x0) {
        (**(code **)(**(long **)(lVar10 + -0x50) + 0x20))();
      }
      if (lVar10 + -0x68 != lVar9) {
        do {
          if (*(long **)(lVar10 + -0xb8) != (long *)0x0) {
            (**(code **)(**(long **)(lVar10 + -0xb8) + 0x20))();
          }
          lVar10 = lVar10 + -0x68;
        } while (lVar9 + 0x68 != lVar10);
      }
    }
    if (lVar9 != 0) {
      plVar7 = (long *)*puVar1;
      lVar8 = lVar8 - lVar9;
      uVar6 = (**(code **)(*plVar7 + 0xc0))(plVar7);
      if ((uVar6 & 1) != 0) {
        lVar3 = tpidr_el0;
        if (*(char *)(lVar3 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar3 + 0x38d488) = 1;
          *(undefined8 *)(lVar3 + 0x38d478) = 0;
          *(undefined8 *)(lVar3 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar3 + 0x38d480)) {
          FUN_02bcc824(plVar7,lVar9,lVar8,8);
          goto LAB_00b1c3a0;
        }
      }
      (**(code **)(*plVar7 + 0x18))(plVar7,lVar9,lVar8,8);
    }
  }
  else {
    FUN_00b1c958(puVar1,lVar3,param_2);
    *(long *)(param_1 + 0x210) = *(long *)(param_1 + 0x210) + 0x68;
  }
LAB_00b1c3a0:
  *(undefined4 *)(param_1 + 0x200) = 1;
  return 1;
}


