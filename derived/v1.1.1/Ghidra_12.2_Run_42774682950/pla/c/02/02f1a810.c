/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f1a810; name: FUN_02f1a810
 */


void FUN_02f1a810(int param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  ulong uVar11;
  
  if ((param_2 >> 0xf & 1) == 0) {
    uVar11 = (ulong)(param_2 & 0xff);
    if ((param_2 & 0xff) != 0) {
      uVar5 = uVar11 & 3;
      if (uVar11 - 1 < 3) {
        lVar7 = 0;
      }
      else {
        iVar8 = 0;
        lVar7 = 0;
        piVar10 = param_3 + 2;
        do {
          iVar1 = param_1 * 2 + iVar8;
          piVar10[-2] = iVar8;
          piVar10[-1] = param_1 + iVar8;
          iVar2 = param_1 * 3 + iVar8;
          lVar7 = lVar7 + 4;
          iVar8 = iVar8 + param_1 * 4;
          *piVar10 = iVar1;
          piVar10[1] = iVar2;
          piVar10 = piVar10 + 4;
        } while (uVar11 - uVar5 != lVar7);
      }
      if ((param_2 & 3) != 0) {
        iVar8 = param_1 * (int)lVar7;
        piVar10 = param_3 + lVar7;
        do {
          *piVar10 = iVar8;
          uVar5 = uVar5 - 1;
          iVar8 = iVar8 + param_1;
          piVar10 = piVar10 + 1;
        } while (uVar5 != 0);
      }
    }
  }
  else {
    *param_3 = 0;
    param_3[1] = param_1;
    uVar4 = 2;
    if ((param_2 & 0x4000) != 0) {
      uVar4 = 3;
    }
    uVar11 = (ulong)uVar4;
    if ((param_2 >> 0xe & 1) != 0) {
      param_3[2] = param_1 << 1;
    }
    uVar3 = param_2 & 0xff;
    param_3[uVar11] = (uVar3 - 1) * param_1;
    uVar9 = uVar4 + 1;
    if (uVar9 < uVar3) {
      uVar6 = uVar4;
      if ((~uVar4 + param_2 & 1) != 0) {
        uVar11 = uVar11 + 1;
        param_3[uVar11] = uVar4 * param_1;
        uVar6 = uVar9;
        uVar9 = uVar4 + 2;
      }
      if (uVar3 - 2 != uVar4) {
        iVar8 = uVar9 * param_1;
        piVar10 = param_3 + uVar11;
        do {
          iVar1 = uVar6 * param_1;
          uVar6 = uVar9 + 1;
          uVar9 = uVar9 + 2;
          piVar10[1] = iVar1;
          piVar10[2] = iVar8;
          iVar8 = iVar8 + param_1 * 2;
          piVar10 = piVar10 + 2;
        } while (uVar3 != uVar9);
      }
    }
  }
  return;
}


