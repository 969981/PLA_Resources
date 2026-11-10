/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f23748; name: FUN_02f23748
 */


void FUN_02f23748(long *param_1,long *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ushort uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar7 = *param_1;
  if ((lVar7 != 0) && (param_1[5] != 0)) {
    uVar5 = *(ushort *)((long)param_2 + 0x12);
    if (1 < uVar5) {
      lVar9 = *param_2 + (ulong)param_3 * (ulong)*(ushort *)(param_2 + 2) * 4;
      uVar2 = *(uint *)((long)param_1 + 0x1c);
      uVar3 = *(undefined4 *)(lVar9 + (ulong)(uVar5 - 1) * 4);
      uVar4 = *(undefined4 *)(lVar9 + (ulong)(uVar5 - 2) * 4);
      uVar6 = param_3 >> 2;
      uVar1 = param_3 & 3;
      if ((uVar2 - 1 == param_3) && ((uVar2 & 1) != 0)) {
        lVar9 = (ulong)((uVar6 + (1 < uVar1 && uVar2 != 1)) * 0x10) * 4;
        *(undefined4 *)(lVar7 + lVar9) = uVar3;
        *(undefined4 *)(*param_1 + lVar9 + 4) = uVar4;
        *(undefined4 *)(*param_1 + lVar9 + 8) = uVar3;
        lVar9 = *param_1 + lVar9;
        lVar7 = 3;
      }
      else {
        lVar8 = (ulong)(uVar6 << 4) * 4;
        lVar9 = (ulong)uVar1 * 4;
        *(undefined4 *)(lVar7 + lVar8 + lVar9) = uVar3;
        *(undefined4 *)(*param_1 + lVar8 + lVar9 + 0x10) = uVar4;
        *(undefined4 *)(*param_1 + lVar8 + lVar9 + 0x20) = uVar3;
        lVar7 = 0xc;
        lVar9 = *param_1 + lVar8 + lVar9;
      }
      *(undefined4 *)(lVar9 + lVar7 * 4) = uVar4;
      uVar2 = *(uint *)((long)param_1 + 0x44);
      if ((uVar2 - 1 == param_3) && ((uVar2 & 1) != 0)) {
        lVar7 = (ulong)((uVar6 + (1 < uVar1 && uVar2 != 1)) * 0x10) * 4;
        *(undefined4 *)(param_1[5] + lVar7) = uVar3;
        *(undefined4 *)(param_1[5] + lVar7 + 4) = uVar4;
        *(undefined4 *)(param_1[5] + lVar7 + 8) = uVar3;
        *(undefined4 *)(param_1[5] + lVar7 + 0xc) = uVar4;
        return;
      }
      lVar9 = (ulong)(uVar6 << 4) * 4;
      lVar7 = (ulong)uVar1 * 4;
      *(undefined4 *)(param_1[5] + lVar9 + lVar7) = uVar3;
      *(undefined4 *)(param_1[5] + lVar9 + lVar7 + 0x10) = uVar4;
      *(undefined4 *)(param_1[5] + lVar9 + lVar7 + 0x20) = uVar3;
      *(undefined4 *)(param_1[5] + lVar9 + lVar7 + 0x30) = uVar4;
    }
  }
  return;
}


