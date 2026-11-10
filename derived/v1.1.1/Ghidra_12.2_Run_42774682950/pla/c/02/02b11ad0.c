/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b11ad0; name: FUN_02b11ad0
 */


ulong FUN_02b11ad0(long param_1,ulong *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  uVar9 = *(ulong *)(param_1 + 0xa0);
  if (uVar9 != 0) {
    uVar6 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
    uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
    uVar5 = *param_2;
    uVar6 = (uVar6 + (uVar6 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar6 < 2) {
      uVar8 = uVar9 - 1 & uVar5;
    }
    else {
      uVar8 = uVar5;
      if (uVar9 <= uVar5) {
        uVar8 = 0;
        if (uVar9 != 0) {
          uVar8 = uVar5 / uVar9;
        }
        uVar8 = uVar5 - uVar8 * uVar9;
      }
    }
    plVar7 = *(long **)(*(long *)(param_1 + 0x98) + uVar8 * 8);
    if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
      if (uVar6 < 2) {
        do {
          if (plVar7[1] == uVar5) {
            if (plVar7[2] == uVar5) goto LAB_02b11c00;
          }
          else if ((plVar7[1] & uVar9 - 1) != uVar8) goto LAB_02b11b5c;
          plVar7 = (long *)*plVar7;
          uVar3 = 0;
          uVar6 = 0;
        } while (plVar7 != (long *)0x0);
      }
      else {
        do {
          uVar6 = plVar7[1];
          if (uVar6 == uVar5) {
            if (plVar7[2] == uVar5) goto LAB_02b11c00;
          }
          else {
            if (uVar9 <= uVar6) {
              uVar3 = 0;
              if (uVar9 != 0) {
                uVar3 = uVar6 / uVar9;
              }
              uVar6 = uVar6 - uVar3 * uVar9;
            }
            if (uVar6 != uVar8) goto LAB_02b11b5c;
          }
          plVar7 = (long *)*plVar7;
          uVar3 = 0;
          uVar6 = 0;
        } while (plVar7 != (long *)0x0);
      }
      goto LAB_02b11db8;
    }
  }
LAB_02b11b5c:
  uVar3 = 0;
  uVar6 = 0;
  goto LAB_02b11db8;
LAB_02b11c00:
  lVar4 = *(long *)(param_1 + 0x100);
  lVar2 = *(long *)(param_1 + 0x108);
  lVar11 = lVar2;
  if (lVar2 - lVar4 != 0) {
    uVar6 = 0;
    do {
      if (*(int *)(lVar4 + uVar6 * 4) < 0) {
        *(int *)(lVar4 + uVar6 * 4) = (int)plVar7[6];
        goto LAB_02b11db4;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < (ulong)(lVar2 - lVar4 >> 2));
    lVar11 = lVar4;
  }
  puVar1 = (undefined8 *)(param_1 + 0x118);
  if (*(long *)(param_1 + 0x110) == lVar2) {
    uVar6 = *(ulong *)(param_1 + 0x120);
    uVar5 = lVar2 - lVar11 >> 2;
    uVar9 = uVar5 + 1;
    if (0x7ffffffffffffffe < uVar6) {
      uVar6 = 0x7fffffffffffffff;
    }
    if (uVar6 < uVar9) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar5 < uVar6 >> 1) {
      uVar8 = lVar2 - lVar11 >> 1;
      uVar6 = uVar9;
      if (uVar9 <= uVar8) {
        uVar6 = uVar8;
      }
    }
    if (uVar6 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = (**(code **)(*(long *)*puVar1 + 0x10))((long *)*puVar1,uVar6 << 2,4);
      if (lVar4 == 0) {
        (**(code **)(*(long *)*puVar1 + 0xb8))();
      }
    }
    lVar11 = lVar4 + uVar5 * 4;
    FUN_018c2c08(puVar1,lVar11,plVar7 + 6);
    lVar10 = *(long *)(param_1 + 0x100);
    lVar12 = *(long *)(param_1 + 0x108);
    lVar2 = lVar11 + 4;
    if (lVar12 != lVar10) {
      do {
        lVar11 = lVar11 + -4;
        lVar12 = lVar12 + -4;
        FUN_018c2ce0(puVar1,lVar11,lVar12);
      } while (lVar10 != lVar12);
      lVar10 = *(long *)(param_1 + 0x100);
    }
    lVar12 = *(long *)(param_1 + 0x110);
    *(long *)(param_1 + 0x100) = lVar11;
    *(long *)(param_1 + 0x108) = lVar2;
    *(ulong *)(param_1 + 0x110) = lVar4 + uVar6 * 4;
    if (lVar10 != 0) {
      plVar7 = (long *)*puVar1;
      lVar12 = lVar12 - lVar10;
      uVar9 = (**(code **)(*plVar7 + 0xc0))(plVar7);
      if ((uVar9 & 1) != 0) {
        lVar4 = tpidr_el0;
        if (*(char *)(lVar4 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar4 + 0x38d488) = 1;
          *(undefined8 *)(lVar4 + 0x38d478) = 0;
          *(undefined8 *)(lVar4 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar4 + 0x38d480)) {
          FUN_02bcc824(plVar7,lVar10,lVar12,4);
          goto LAB_02b11d98;
        }
      }
      (**(code **)(*plVar7 + 0x18))(plVar7,lVar10,lVar12,4);
    }
  }
  else {
    FUN_018c2c08(puVar1,lVar2,plVar7 + 6);
    *(long *)(param_1 + 0x108) = *(long *)(param_1 + 0x108) + 4;
  }
LAB_02b11d98:
  uVar6 = (*(long *)(param_1 + 0x108) - *(long *)(param_1 + 0x100) >> 2) + 0xffffffff;
LAB_02b11db4:
  uVar3 = 1;
LAB_02b11db8:
  return uVar3 | uVar6 << 0x20;
}


