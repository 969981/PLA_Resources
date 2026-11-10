/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b2b2a0; name: FUN_01b2b2a0
 */


void FUN_01b2b2a0(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  lVar4 = param_1[1];
  plVar6 = param_1 + 3;
  if (lVar4 == param_1[2]) {
    uVar5 = param_1[4];
    lVar4 = lVar4 - *param_1 >> 3;
    if (0x7ffffffffffffffe < uVar5) {
      uVar5 = 0x7fffffffffffffff;
    }
    uVar1 = lVar4 * -0x4e6a171024e6a171 + 1;
    if (uVar5 < uVar1) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar2 = param_1[2] - *param_1 >> 3;
    uVar3 = lVar2 * 0x632bd1dfb632bd1e;
    if (uVar1 <= uVar3) {
      uVar1 = uVar3;
    }
    if ((ulong)(lVar2 * -0x4e6a171024e6a171) < uVar5 >> 1) {
      uVar5 = uVar1;
    }
    if (uVar5 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = (**(code **)(*(long *)*plVar6 + 0x10))((long *)*plVar6,uVar5 * 0x378,8);
      if (lVar2 == 0) {
        (**(code **)(*(long *)*plVar6 + 0xb8))();
      }
    }
    lVar8 = lVar2 + lVar4 * 8;
    FUN_01b36634(plVar6,lVar8,param_2);
    lVar7 = *param_1;
    lVar11 = param_1[1];
    lVar10 = lVar8 + 0x378;
    if (lVar11 == lVar7) {
      lVar4 = lVar7;
    }
    else {
      lVar9 = lVar8 + -0x378;
      FUN_01b36634(plVar6,lVar9,lVar11 + -0x378);
      if (lVar11 + -0x378 != lVar7) {
        lVar9 = lVar8 + -0x6f0;
        FUN_01b36634(plVar6,lVar9,lVar11 + -0x6f0);
        if (lVar11 + -0x6f0 != lVar7) {
          lVar9 = lVar8 + -0xa68;
          FUN_01b36634(plVar6,lVar9,lVar11 + -0xa68);
          if (lVar11 + -0xa68 != lVar7) {
            lVar4 = lVar2 + lVar4 * 8 + -0xde0;
            do {
              lVar9 = lVar4;
              FUN_01b36634(plVar6,lVar9,lVar11 + -0xde0);
              lVar11 = lVar11 + -0x378;
              lVar4 = lVar9 + -0x378;
            } while (lVar7 + 0xa68 != lVar11);
          }
        }
      }
      lVar7 = *param_1;
      lVar8 = lVar9;
      lVar4 = param_1[1];
    }
    *param_1 = lVar8;
    param_1[1] = lVar10;
    lVar10 = param_1[2];
    param_1[2] = lVar2 + uVar5 * 0x378;
    if ((((lVar4 != lVar7) && (FUN_01b2b604(lVar4 + -0x378), lVar4 + -0x378 != lVar7)) &&
        (FUN_01b2b604(lVar4 + -0x6f0), lVar4 + -0x6f0 != lVar7)) &&
       (FUN_01b2b604(lVar4 + -0xa68), lVar4 + -0xa68 != lVar7)) {
      do {
        FUN_01b2b604(lVar4 + -0xde0);
        lVar4 = lVar4 + -0x378;
      } while (lVar7 + 0xa68 != lVar4);
    }
    if (lVar7 != 0) {
      plVar6 = (long *)*plVar6;
      uVar5 = (**(code **)(*plVar6 + 0xc0))(plVar6);
      if ((uVar5 & 1) != 0) {
        lVar4 = tpidr_el0;
        if (*(char *)(lVar4 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar4 + 0x38d488) = 1;
          *(undefined8 *)(lVar4 + 0x38d478) = 0;
          *(undefined8 *)(lVar4 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar4 + 0x38d480)) {
          FUN_02bcc824(plVar6,lVar7,lVar10 - lVar7,8);
          return;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x01b2b500. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar6 + 0x18))(plVar6,lVar7,lVar10 - lVar7,8);
      return;
    }
  }
  else {
    FUN_01b36634(plVar6,lVar4,param_2);
    param_1[1] = param_1[1] + 0x378;
  }
  return;
}


