/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02acd930; name: FUN_02acd930
 */


void FUN_02acd930(long *param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long *local_38;
  undefined8 *local_30;
  char local_28;
  
  FUN_02ad3ecc(&local_38);
  plVar8 = local_38;
  uVar4 = local_38[2];
  local_38[1] = uVar4;
  uVar3 = param_1[1];
  if (uVar3 != 0) {
    uVar5 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
    uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
    uVar5 = (uVar5 + (uVar5 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar5 < 2) {
      uVar6 = uVar3 - 1 & uVar4;
    }
    else {
      uVar6 = uVar4;
      if (uVar3 <= uVar4) {
        uVar6 = 0;
        if (uVar3 != 0) {
          uVar6 = uVar4 / uVar3;
        }
        uVar6 = uVar4 - uVar6 * uVar3;
      }
    }
    plVar7 = *(long **)(*param_1 + uVar6 * 8);
    if (plVar7 != (long *)0x0) {
      if (uVar5 < 2) {
        do {
          plVar7 = (long *)*plVar7;
          if ((plVar7 == (long *)0x0) || ((plVar7[1] & uVar3 - 1) != uVar6)) goto LAB_02acdacc;
        } while (plVar7[2] != uVar4);
      }
      else {
        do {
          plVar7 = (long *)*plVar7;
          if (plVar7 == (long *)0x0) goto LAB_02acdacc;
          uVar5 = plVar7[1];
          if (uVar3 <= uVar5) {
            uVar1 = 0;
            if (uVar3 != 0) {
              uVar1 = uVar5 / uVar3;
            }
            uVar5 = uVar5 - uVar1 * uVar3;
          }
          if (uVar5 != uVar6) goto LAB_02acdacc;
        } while (plVar7[2] != uVar4);
      }
      local_38 = (long *)0x0;
      if (plVar8 == (long *)0x0) {
        return;
      }
      if ((local_28 != '\0') && ((long *)plVar8[5] != (long *)0x0)) {
        (**(code **)(*(long *)plVar8[5] + 0x20))();
      }
      plVar7 = (long *)*local_30;
      uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
      if ((uVar3 & 1) != 0) {
        lVar2 = tpidr_el0;
        if (*(char *)(lVar2 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar2 + 0x38d488) = 1;
          *(undefined8 *)(lVar2 + 0x38d478) = 0;
          *(undefined8 *)(lVar2 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar2 + 0x38d480)) {
          FUN_02bcc824(plVar7,plVar8,0x38,8);
          return;
        }
      }
      (**(code **)(*plVar7 + 0x18))(plVar7,plVar8,0x38,8);
      return;
    }
  }
LAB_02acdacc:
  if ((uVar3 == 0) || (*(float *)(param_1 + 0xc) * (float)uVar3 < (float)(param_1[0xb] + 1))) {
    uVar3 = (ulong)(uVar3 < 3 || (uVar3 & uVar3 - 1) != 0) | uVar3 << 1;
    uVar4 = (ulong)((float)(param_1[0xb] + 1) / *(float *)(param_1 + 0xc));
    if (uVar4 <= uVar3) {
      uVar4 = uVar3;
    }
    FUN_02ad4084(param_1,uVar4);
    uVar3 = param_1[1];
    uVar4 = local_38[1];
  }
  uVar5 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = (uVar5 + (uVar5 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (uVar5 < 2) {
    uVar4 = uVar3 - 1 & uVar4;
  }
  else if (uVar3 <= uVar4) {
    uVar6 = 0;
    if (uVar3 != 0) {
      uVar6 = uVar4 / uVar3;
    }
    uVar4 = uVar4 - uVar6 * uVar3;
  }
  plVar8 = *(long **)(*param_1 + uVar4 * 8);
  if (plVar8 == (long *)0x0) {
    plVar8 = param_1 + 6;
    *local_38 = *plVar8;
    *plVar8 = (long)local_38;
    *(long **)(*param_1 + uVar4 * 8) = plVar8;
    if (*local_38 == 0) goto LAB_02acdbec;
    uVar4 = *(ulong *)(*local_38 + 8);
    if (uVar5 < 2) {
      uVar4 = uVar4 & uVar3 - 1;
    }
    else if (uVar3 <= uVar4) {
      uVar5 = 0;
      if (uVar3 != 0) {
        uVar5 = uVar4 / uVar3;
      }
      uVar4 = uVar4 - uVar5 * uVar3;
    }
    plVar8 = (long *)(*param_1 + uVar4 * 8);
  }
  else {
    *local_38 = *plVar8;
  }
  *plVar8 = (long)local_38;
LAB_02acdbec:
  param_1[0xb] = param_1[0xb] + 1;
  return;
}


