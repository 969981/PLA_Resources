/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0192279c; name: FUN_0192279c
 */


ulong FUN_0192279c(long param_1,ulong param_2)

{
  int *piVar1;
  int iVar2;
  ushort uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  uint *puVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  ushort *puVar11;
  
  uVar8 = *(ulong *)(param_1 + 0x4f0);
  uVar5 = 0;
  if (uVar8 != 0) {
    uVar5 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
    uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
    uVar5 = (uVar5 + (uVar5 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar5 < 2) {
      uVar6 = uVar8 - 1 & param_2;
    }
    else {
      uVar6 = param_2;
      if (uVar8 <= param_2) {
        uVar6 = 0;
        if (uVar8 != 0) {
          uVar6 = param_2 / uVar8;
        }
        uVar6 = param_2 - uVar6 * uVar8;
      }
    }
    plVar9 = *(long **)(*(long *)(param_1 + 0x4e8) + uVar6 * 8);
    if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
      if (uVar5 < 2) {
        do {
          if (plVar9[1] == param_2) {
            if (plVar9[2] == param_2) goto LAB_01922848;
          }
          else if ((plVar9[1] & uVar8 - 1) != uVar6) goto LAB_0192299c;
          plVar9 = (long *)*plVar9;
          uVar5 = 0;
        } while (plVar9 != (long *)0x0);
        goto LAB_0192284c;
      }
      do {
        uVar5 = plVar9[1];
        if (uVar5 == param_2) {
          if (plVar9[2] == param_2) goto LAB_01922848;
        }
        else {
          if (uVar8 <= uVar5) {
            uVar10 = 0;
            if (uVar8 != 0) {
              uVar10 = uVar5 / uVar8;
            }
            uVar5 = uVar5 - uVar10 * uVar8;
          }
          if (uVar5 != uVar6) break;
        }
        plVar9 = (long *)*plVar9;
      } while (plVar9 != (long *)0x0);
    }
LAB_0192299c:
    uVar5 = 0;
  }
  goto LAB_0192284c;
LAB_01922848:
  uVar5 = (ulong)*(uint *)(plVar9 + 3);
LAB_0192284c:
  puVar7 = *(uint **)(*(long *)(param_1 + 0x1c0) + 0x250);
  piVar1 = (int *)((long)puVar7 + (ulong)*puVar7);
  puVar7 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
  puVar7 = (uint *)((long)puVar7 + uVar5 * 4 + (ulong)*puVar7 + 4);
  piVar1 = (int *)((long)puVar7 + (ulong)*puVar7);
  puVar11 = (ushort *)((long)piVar1 - (long)*piVar1);
  uVar3 = *puVar11;
  if (uVar3 < 7) {
    uVar8 = 0;
    uVar5 = 0;
    uVar10 = 0;
    uVar6 = 2;
    goto LAB_01922928;
  }
  if ((ulong)puVar11[3] == 0) {
    uVar6 = 2;
    if (uVar3 < 9) goto LAB_0192291c;
LAB_019228a8:
    uVar5 = 0;
    if ((ulong)puVar11[4] != 0) {
      uVar5 = (ulong)(*(char *)((long)piVar1 + (ulong)puVar11[4]) != '\0');
    }
    if (uVar3 < 0xb) {
      uVar8 = 0;
    }
    else {
      uVar8 = 0;
      if ((ulong)puVar11[5] != 0) {
        uVar8 = (ulong)(*(char *)((long)piVar1 + (ulong)puVar11[5]) != '\0');
      }
      if ((0xc < uVar3) && ((ulong)puVar11[6] != 0)) {
        uVar10 = (ulong)(*(char *)((long)piVar1 + (ulong)puVar11[6]) != '\0') << 0x30;
        goto LAB_01922928;
      }
    }
  }
  else {
    iVar2 = *(int *)((long)piVar1 + (ulong)puVar11[3]);
    uVar4 = (uint)(iVar2 != 1) << 1;
    if (iVar2 == 2) {
      uVar4 = 1;
    }
    uVar6 = (ulong)uVar4;
    if (8 < uVar3) goto LAB_019228a8;
LAB_0192291c:
    uVar8 = 0;
    uVar5 = 0;
  }
  uVar10 = 0;
LAB_01922928:
  return uVar6 | uVar8 << 0x28 | uVar10 | uVar5 << 0x20;
}


