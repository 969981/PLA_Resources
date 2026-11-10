/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 019223e8; name: FUN_019223e8
 */


undefined4 FUN_019223e8(long param_1,ulong param_2)

{
  int *piVar1;
  ushort uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  uint *puVar6;
  ulong uVar7;
  long *plVar8;
  undefined4 uVar9;
  
  uVar7 = *(ulong *)(param_1 + 0x2e8);
  uVar4 = 0;
  if (uVar7 != 0) {
    uVar4 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
    uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
    uVar4 = (uVar4 + (uVar4 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar4 < 2) {
      uVar5 = uVar7 - 1 & param_2;
    }
    else {
      uVar5 = param_2;
      if (uVar7 <= param_2) {
        uVar5 = 0;
        if (uVar7 != 0) {
          uVar5 = param_2 / uVar7;
        }
        uVar5 = param_2 - uVar5 * uVar7;
      }
    }
    plVar8 = *(long **)(*(long *)(param_1 + 0x2e0) + uVar5 * 8);
    if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
      if (uVar4 < 2) {
        do {
          if (plVar8[1] == param_2) {
            if (plVar8[2] == param_2) goto LAB_01922494;
          }
          else if ((plVar8[1] & uVar7 - 1) != uVar5) goto LAB_019225a0;
          plVar8 = (long *)*plVar8;
          uVar4 = 0;
        } while (plVar8 != (long *)0x0);
        goto LAB_01922498;
      }
      do {
        uVar4 = plVar8[1];
        if (uVar4 == param_2) {
          if (plVar8[2] == param_2) goto LAB_01922494;
        }
        else {
          if (uVar7 <= uVar4) {
            uVar3 = 0;
            if (uVar7 != 0) {
              uVar3 = uVar4 / uVar7;
            }
            uVar4 = uVar4 - uVar3 * uVar7;
          }
          if (uVar4 != uVar5) break;
        }
        plVar8 = (long *)*plVar8;
      } while (plVar8 != (long *)0x0);
    }
LAB_019225a0:
    uVar4 = 0;
  }
  goto LAB_01922498;
LAB_01922494:
  uVar4 = (ulong)*(uint *)(plVar8 + 3);
LAB_01922498:
  puVar6 = *(uint **)(*(long *)(param_1 + 0x100) + 0x250);
  piVar1 = (int *)((long)puVar6 + (ulong)*puVar6);
  puVar6 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
  puVar6 = (uint *)((long)puVar6 + uVar4 * 4 + (ulong)*puVar6 + 4);
  piVar1 = (int *)((long)puVar6 + (ulong)*puVar6);
  uVar2 = *(ushort *)((long)piVar1 - (long)*piVar1);
  if (uVar2 < 7) {
    uVar9 = 0;
  }
  else {
    uVar4 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3];
    uVar9 = 0;
    if (uVar4 != 0) {
      uVar9 = *(undefined4 *)((long)piVar1 + uVar4);
    }
    if (8 < uVar2) {
      if (uVar2 < 0xb) {
        return uVar9;
      }
      return uVar9;
    }
  }
  return uVar9;
}


