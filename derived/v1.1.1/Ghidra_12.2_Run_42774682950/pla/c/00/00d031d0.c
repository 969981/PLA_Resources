/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d031d0; name: FUN_00d031d0
 */


long * FUN_00d031d0(long *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong unaff_x24;
  
  uVar6 = *param_2;
  uVar5 = param_1[1];
  if (uVar5 != 0) {
    uVar2 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
    uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
    uVar2 = (uVar2 + (uVar2 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar2 < 2) {
      unaff_x24 = uVar5 - 1 & uVar6;
    }
    else {
      unaff_x24 = uVar6;
      if (uVar5 <= uVar6) {
        uVar1 = 0;
        if (uVar5 != 0) {
          uVar1 = uVar6 / uVar5;
        }
        unaff_x24 = uVar6 - uVar1 * uVar5;
      }
    }
    plVar4 = *(long **)(*param_1 + unaff_x24 * 8);
    if (plVar4 != (long *)0x0) {
      if (uVar2 < 2) {
        do {
          plVar4 = (long *)*plVar4;
          if ((plVar4 == (long *)0x0) ||
             (plVar4[1] != uVar6 && (plVar4[1] & uVar5 - 1) != unaff_x24)) goto LAB_00d03290;
        } while (plVar4[2] != uVar6);
      }
      else {
        do {
          plVar4 = (long *)*plVar4;
          if (plVar4 == (long *)0x0) goto LAB_00d03290;
          uVar2 = plVar4[1];
          if (uVar2 != uVar6) {
            if (uVar5 <= uVar2) {
              uVar1 = 0;
              if (uVar5 != 0) {
                uVar1 = uVar2 / uVar5;
              }
              uVar2 = uVar2 - uVar1 * uVar5;
            }
            if (uVar2 != unaff_x24) goto LAB_00d03290;
          }
        } while (plVar4[2] != uVar6);
      }
      goto LAB_00d03278;
    }
  }
LAB_00d03290:
  plVar4 = (long *)(**(code **)(*(long *)param_1[6] + 0x10))((long *)param_1[6],0x290,0x10);
  if (plVar4 == (long *)0x0) {
    (**(code **)(*(long *)param_1[6] + 0xb8))();
  }
  plVar4[2] = *param_2;
  memset(plVar4 + 4,0,0x270);
  *(undefined1 *)(plVar4 + 0x50) = 1;
  *plVar4 = 0;
  plVar4[1] = uVar6;
  if ((uVar5 == 0) || (*(float *)(param_1 + 10) * (float)uVar5 < (float)(param_1[9] + 1))) {
    uVar5 = (ulong)(uVar5 < 3 || (uVar5 & uVar5 - 1) != 0) | uVar5 << 1;
    uVar2 = (ulong)((float)(param_1[9] + 1) / *(float *)(param_1 + 10));
    if (uVar2 <= uVar5) {
      uVar2 = uVar5;
    }
    FUN_00d042c4(param_1,uVar2);
    uVar5 = param_1[1];
    if ((uVar5 & uVar5 - 1) == 0) {
      unaff_x24 = uVar5 - 1 & uVar6;
    }
    else if (uVar6 < uVar5) {
      unaff_x24 = uVar6;
    }
    else {
      uVar2 = 0;
      if (uVar5 != 0) {
        uVar2 = uVar6 / uVar5;
      }
      unaff_x24 = uVar6 - uVar2 * uVar5;
    }
  }
  plVar3 = *(long **)(*param_1 + unaff_x24 * 8);
  if (plVar3 == (long *)0x0) {
    plVar3 = param_1 + 5;
    *plVar4 = *plVar3;
    *plVar3 = (long)plVar4;
    *(long **)(*param_1 + unaff_x24 * 8) = plVar3;
    if (*plVar4 != 0) {
      uVar6 = *(ulong *)(*plVar4 + 8);
      if ((uVar5 & uVar5 - 1) == 0) {
        uVar6 = uVar6 & uVar5 - 1;
      }
      else if (uVar5 <= uVar6) {
        uVar2 = 0;
        if (uVar5 != 0) {
          uVar2 = uVar6 / uVar5;
        }
        uVar6 = uVar6 - uVar2 * uVar5;
      }
      plVar3 = (long *)(*param_1 + uVar6 * 8);
      goto LAB_00d03360;
    }
  }
  else {
    *plVar4 = *plVar3;
LAB_00d03360:
    *plVar3 = (long)plVar4;
  }
  param_1[9] = param_1[9] + 1;
LAB_00d03278:
  return plVar4 + 4;
}


