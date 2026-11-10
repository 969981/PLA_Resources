/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f42a54; name: FUN_02f42a54
 */


int FUN_02f42a54(long param_1,int param_2,int param_3,uint param_4,undefined4 *param_5)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  ulong uVar8;
  ulong uVar9;
  int *piVar10;
  
  uVar3 = param_4 & 1;
  uVar1 = *(uint *)(param_1 + 0x108) - 1;
  puVar2 = *(undefined4 **)(param_1 + 0x100);
  if (uVar3 < uVar1) {
    puVar7 = puVar2 + ((ulong)param_4 & 1) * 4 + 1;
    do {
      if ((uint)(puVar2[1] + param_2) <= *puVar7) break;
      uVar3 = uVar3 + 1;
      puVar7 = puVar7 + 4;
    } while (uVar1 != uVar3);
  }
  if (param_3 == 0) {
    uVar4 = uVar1 - uVar3;
  }
  else {
    uVar6 = uVar3;
    if (uVar3 == 0) {
      uVar6 = 1;
    }
    uVar4 = (uint)(uVar3 == 0);
    if (uVar6 < uVar1) {
      uVar8 = (ulong)uVar6;
      uVar9 = uVar8;
      if (((uVar1 - uVar6 & 1) != 0) && (uVar9 = uVar8 + 1, puVar2[uVar8 * 4] == param_3)) {
        uVar4 = uVar4 + 1;
      }
      if (~uVar8 + (ulong)uVar1 != 0) {
        piVar10 = puVar2 + uVar9 * 4 + 4;
        do {
          if (piVar10[-4] == param_3) {
            uVar4 = uVar4 + 1;
          }
          uVar9 = uVar9 + 2;
          if (*piVar10 == param_3) {
            uVar4 = uVar4 + 1;
          }
          piVar10 = piVar10 + 8;
        } while (uVar9 < uVar1);
      }
    }
  }
  if (uVar4 == 0) {
    *param_5 = *puVar2;
    return 0;
  }
  DAT_0440a190 = DAT_0440a190 * 0x5851f42d4c957f2d + 1;
  uVar1 = 0;
  uVar6 = (uint)((ulong)DAT_0440a190 >> 0x21);
  if (uVar4 != 0) {
    uVar1 = uVar6 / uVar4;
  }
  iVar5 = uVar6 - uVar1 * uVar4;
  if (param_3 == 0) {
    uVar3 = iVar5 + uVar3;
    goto LAB_02f42ba4;
  }
  if (uVar3 == 0) {
    if (iVar5 != 0) {
      iVar5 = iVar5 + -1;
      uVar3 = 1;
      goto LAB_02f42b6c;
    }
  }
  else {
LAB_02f42b6c:
    do {
      if (puVar2[(ulong)uVar3 * 4] == param_3) {
        if (iVar5 == 0) goto LAB_02f42ba4;
        iVar5 = iVar5 + -1;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 0x108));
  }
  uVar3 = 0;
LAB_02f42ba4:
  *param_5 = puVar2[(ulong)uVar3 * 4];
  return *(int *)(*(long *)(param_1 + 0x100) + (ulong)uVar3 * 0x10 + 4) -
         *(int *)(*(long *)(param_1 + 0x100) + 4);
}


