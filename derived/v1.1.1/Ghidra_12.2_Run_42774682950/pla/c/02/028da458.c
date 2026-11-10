/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028da458; name: FUN_028da458
 */


void FUN_028da458(undefined8 param_1,long param_2,long *param_3)

{
  ulong uVar1;
  undefined *puVar2;
  uint uVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  undefined4 local_54;
  
  puVar2 = PTR_PTR_04387fe0;
  uVar3 = *(uint *)(param_2 + 0x48);
  if (uVar3 == 0) {
    return;
  }
  uVar10 = 0;
LAB_028da4c4:
  uVar5 = *(ulong *)(*(long *)(param_2 + 0x10) + uVar10 * 0x38 + 0x28);
  if ((uVar5 != 0) && (uVar6 = param_3[1], uVar6 != 0)) {
    uVar7 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
    uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
    uVar7 = (uVar7 + (uVar7 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar7 < 2) {
      uVar9 = uVar6 - 1 & uVar5;
    }
    else if (uVar5 < uVar6) {
      uVar9 = uVar5;
    }
    else {
      uVar9 = 0;
      if (uVar6 != 0) {
        uVar9 = uVar5 / uVar6;
      }
      uVar9 = uVar5 - uVar9 * uVar6;
    }
    plVar8 = *(long **)(*param_3 + uVar9 * 8);
    if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
      if (uVar7 < 2) {
        do {
          if (plVar8[1] == uVar5) {
            if (plVar8[2] == uVar5) goto LAB_028da5c4;
          }
          else if ((plVar8[1] & uVar6 - 1) != uVar9) break;
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
      else {
        do {
          uVar7 = plVar8[1];
          if (uVar7 == uVar5) {
            if (plVar8[2] == uVar5) goto LAB_028da5c4;
          }
          else {
            if (uVar6 <= uVar7) {
              uVar1 = 0;
              if (uVar6 != 0) {
                uVar1 = uVar7 / uVar6;
              }
              uVar7 = uVar7 - uVar1 * uVar6;
            }
            if (uVar7 != uVar9) break;
          }
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
    }
  }
  goto LAB_028da4b8;
LAB_028da5c4:
  local_54 = 0;
  if (*(char *)(*(long *)(param_2 + 0x10) + uVar10 * 0x38 + 0x30) != '\0') {
    local_54 = 0x3f800000;
  }
  pcVar4 = *(code **)(puVar2 + (ulong)*(uint *)(plVar8 + 3) * 0x10);
  uVar5 = *(ulong *)((long)(puVar2 + (ulong)*(uint *)(plVar8 + 3) * 0x10) + 8);
  plVar8 = (long *)((long)(plVar8 + 3) + ((long)uVar5 >> 1));
  if ((uVar5 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *plVar8);
  }
  (*pcVar4)(param_1,plVar8,&local_54);
  uVar3 = *(uint *)(param_2 + 0x48);
LAB_028da4b8:
  uVar10 = uVar10 + 1;
  if (uVar3 <= uVar10) {
    return;
  }
  goto LAB_028da4c4;
}


