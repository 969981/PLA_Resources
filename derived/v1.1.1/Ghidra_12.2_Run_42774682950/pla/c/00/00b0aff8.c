/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00b0aff8; name: FUN_00b0aff8
 */


void FUN_00b0aff8(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  
  lVar4 = param_1[1];
  plVar6 = param_1 + 3;
  if (lVar4 == param_1[2]) {
    uVar5 = param_1[4];
    lVar4 = lVar4 - *param_1 >> 4;
    if (0x7ffffffffffffffe < uVar5) {
      uVar5 = 0x7fffffffffffffff;
    }
    uVar1 = lVar4 * 0x6db6db6db6db6db7 + 1;
    if (uVar5 < uVar1) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar2 = param_1[2] - *param_1 >> 4;
    uVar3 = lVar2 * -0x2492492492492492;
    if (uVar1 <= uVar3) {
      uVar1 = uVar3;
    }
    if ((ulong)(lVar2 * 0x6db6db6db6db6db7) < uVar5 >> 1) {
      uVar5 = uVar1;
    }
    if (uVar5 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = (**(code **)(*(long *)*plVar6 + 0x10))((long *)*plVar6,uVar5 * 0x70,8);
      if (lVar2 == 0) {
        (**(code **)(*(long *)*plVar6 + 0xb8))((long *)*plVar6);
      }
    }
    lVar9 = lVar2 + lVar4 * 0x10;
    FUN_00b14700(plVar6,lVar9,param_2);
    plVar7 = (long *)*param_1;
    plVar10 = (long *)param_1[1];
    lVar4 = lVar9 + 0x70;
    if (plVar10 == plVar7) {
      plVar10 = plVar7;
    }
    else {
      lVar9 = lVar9 + -0x70;
      FUN_00b14700(plVar6,lVar9,plVar10 + -0xe);
      if (plVar10 + -0xe != plVar7) {
        do {
          lVar9 = lVar9 + -0x70;
          FUN_00b14700(plVar6,lVar9,plVar10 + -0x1c);
          plVar10 = plVar10 + -0xe;
        } while (plVar7 + 0xe != plVar10);
      }
      plVar7 = (long *)*param_1;
      plVar10 = (long *)param_1[1];
    }
    *param_1 = lVar9;
    param_1[1] = lVar4;
    lVar4 = param_1[2];
    param_1[2] = lVar2 + uVar5 * 0x70;
    if (plVar10 != plVar7) {
      if ((long *)plVar10[-1] != (long *)0x0) {
        (**(code **)(*(long *)plVar10[-1] + 0x20))();
      }
      plVar8 = plVar10 + -0xe;
      if ((long *)plVar10[-5] != (long *)0x0) {
        (**(code **)(*(long *)plVar10[-5] + 0x20))();
      }
      if ((long *)plVar10[-10] != (long *)0x0) {
        (**(code **)(*(long *)plVar10[-10] + 0x20))();
      }
      if ((long *)*plVar8 != (long *)0x0) {
        (**(code **)(*(long *)*plVar8 + 0x20))();
      }
      while (plVar8 != plVar7) {
        if ((long *)plVar8[-1] != (long *)0x0) {
          (**(code **)(*(long *)plVar8[-1] + 0x20))();
        }
        if ((long *)plVar8[-5] != (long *)0x0) {
          (**(code **)(*(long *)plVar8[-5] + 0x20))();
        }
        if ((long *)plVar8[-10] != (long *)0x0) {
          (**(code **)(*(long *)plVar8[-10] + 0x20))();
        }
        plVar10 = plVar8 + -0xe;
        plVar8 = plVar8 + -0xe;
        if ((long *)*plVar10 != (long *)0x0) {
          (**(code **)(*(long *)*plVar10 + 0x20))();
        }
      }
    }
    if (plVar7 != (long *)0x0) {
      plVar6 = (long *)*plVar6;
      uVar5 = (**(code **)(*plVar6 + 0xc0))(plVar6);
      if ((uVar5 & 1) != 0) {
        lVar2 = tpidr_el0;
        if (*(char *)(lVar2 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar2 + 0x38d488) = 1;
          *(undefined8 *)(lVar2 + 0x38d478) = 0;
          *(undefined8 *)(lVar2 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar2 + 0x38d480)) {
          FUN_02bcc824(plVar6,plVar7,lVar4 - (long)plVar7,8);
          return;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x00b0b284. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar6 + 0x18))(plVar6,plVar7,lVar4 - (long)plVar7,8);
      return;
    }
  }
  else {
    FUN_00b14700(plVar6,lVar4,param_2);
    param_1[1] = param_1[1] + 0x70;
  }
  return;
}


