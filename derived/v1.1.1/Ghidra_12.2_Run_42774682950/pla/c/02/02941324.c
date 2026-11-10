/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02941324; name: FUN_02941324
 */


undefined8 FUN_02941324(long param_1,uint param_2,ulong *param_3)

{
  long lVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  uint *puVar10;
  
  lVar1 = param_1 + (ulong)param_2 * 4;
  if (*(int *)(lVar1 + 0x1a8) != 0) {
    return 0;
  }
  piVar2 = (int *)(lVar1 + 0x1a8);
  *piVar2 = 1;
  uVar6 = (ulong)param_2;
  *(ulong *)(param_1 + uVar6 * 8 + 0x18) = *param_3;
  lVar1 = param_1 + uVar6 * 4;
  *(undefined4 *)(lVar1 + 0x68) = 0;
  *(undefined4 *)(lVar1 + 0x180) = 0;
  *(undefined2 *)(param_1 + uVar6 * 2 + 0x1d0) = 0;
  lVar7 = param_1 + uVar6 * 0x18;
  *(undefined8 *)(lVar7 + 0x90) = 0x1f0000001f;
  *(undefined8 *)(lVar7 + 0x98) = 0x1f0000001f;
  *(undefined8 *)(lVar7 + 0xa0) = 0x1f0000001f;
  uVar3 = (uint)*param_3 & 7;
  if (uVar3 == 3) {
    lVar7 = 8;
  }
  else {
    if (uVar3 != 4) {
      return 1;
    }
    lVar7 = 0xe;
  }
  if ((((int)param_2 < 10) && (uVar3 = (uint)(*param_3 >> lVar7) & 0x3f, uVar3 != 0x1f)) &&
     (*piVar2 != 0)) {
    uVar4 = *(uint *)(lVar1 + 0x180);
    uVar8 = (ulong)uVar4;
    if (uVar4 < 6) {
      if (uVar4 == 0) {
        uVar8 = 0;
LAB_02941418:
        *(uint *)(param_1 + uVar6 * 0x18 + uVar8 * 4 + 0x90) = uVar3;
        *(uint *)(lVar1 + 0x180) = uVar4 + 1;
      }
      else if (uVar3 != 0x1f) {
        puVar10 = (uint *)(param_1 + uVar6 * 0x18 + 0x94);
        uVar9 = uVar8;
        do {
          uVar9 = uVar9 - 1;
          if (uVar9 == 0) goto LAB_02941418;
          uVar5 = *puVar10;
          puVar10 = puVar10 + 1;
        } while (uVar5 != uVar3);
      }
    }
  }
  return 1;
}


