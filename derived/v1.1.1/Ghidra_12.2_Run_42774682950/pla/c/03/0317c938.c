/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0317c938; name: FUN_0317c938
 */


void FUN_0317c938(long *param_1,uint *param_2)

{
  uint *puVar1;
  long lVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  
  lVar8 = (long)(int)param_1[1] + -1;
  uVar6 = param_2[1];
  if (uVar6 == (uint)lVar8) {
    *(uint *)(param_1 + 1) = uVar6;
  }
  else {
    lVar8 = FUN_0317c8b8(param_1,*param_1 + lVar8 * 8);
    *(uint *)(lVar8 + 4) = uVar6;
    lVar8 = (long)(int)param_1[1] + -1;
    uVar7 = (uint)lVar8;
    *(uint *)(param_1 + 1) = uVar7;
    if (uVar7 != uVar6) {
      puVar3 = (undefined4 *)(*param_1 + lVar8 * 8);
      puVar4 = (undefined4 *)(*param_1 + (long)(int)uVar6 * 8);
      uVar5 = puVar3[1];
      *puVar4 = *puVar3;
      puVar4[1] = uVar5;
    }
  }
  lVar8 = param_1[2];
  uVar9 = (ulong)(int)param_1[3];
  uVar10 = ((long)param_2 - lVar8 >> 3) + 1U & uVar9;
  while (puVar1 = (uint *)(lVar8 + uVar10 * 8), -1 < (int)puVar1[1]) {
    lVar2 = lVar8 + ((ulong)*puVar1 & uVar9 & 0xffffffff) * 8;
    uVar10 = (ulong)(int)uVar9;
    if ((uVar10 & (long)param_2 - lVar2 >> 3) < (uVar10 & (long)puVar1 - lVar2 >> 3)) {
      *(undefined8 *)param_2 = *(undefined8 *)puVar1;
      uVar9 = (ulong)*(uint *)(param_1 + 3);
      lVar8 = param_1[2];
      uVar10 = (ulong)(int)*(uint *)(param_1 + 3);
      param_2 = puVar1;
    }
    uVar10 = ((ulong)((long)puVar1 - lVar8) >> 3) + 1 & uVar10;
  }
  param_2[1] = 0xffffffff;
  return;
}


