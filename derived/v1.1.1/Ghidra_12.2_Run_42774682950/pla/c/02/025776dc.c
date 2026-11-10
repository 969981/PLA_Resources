/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 025776dc; name: FUN_025776dc
 */


void FUN_025776dc(long param_1)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  
  lVar5 = *(long *)(param_1 + 0x638);
  lVar6 = *(long *)(param_1 + 0x630);
  if (lVar5 == lVar6) {
    return;
  }
  iVar7 = *(int *)(param_1 + 0x700);
  lVar3 = (long)iVar7 * 0x30;
  puVar2 = (&PTR_s_anime_shift_right_03_0425d358)[(long)iVar7 * 6];
  uVar9 = *(undefined8 *)(&DAT_0425d360 + lVar3);
  *(undefined8 *)(param_1 + 0x710) = *(undefined8 *)(&DAT_0425d350 + lVar3);
  *(undefined **)(param_1 + 0x718) = puVar2;
  *(undefined8 *)(param_1 + 0x720) = uVar9;
  if (*(long *)(param_1 + 0x2c8) != 0) {
    FUN_0283b1e8(*(long *)(param_1 + 0x2c8),param_1 + 0x710);
    iVar7 = *(int *)(param_1 + 0x700);
    lVar5 = *(long *)(param_1 + 0x638);
    lVar6 = *(long *)(param_1 + 0x630);
  }
  iVar8 = iVar7 + 6;
  if (-1 < iVar7 + 1) {
    iVar8 = iVar7 + 1;
  }
  iVar7 = iVar8 + -5;
  if (iVar8 < 5) {
    iVar7 = iVar8;
  }
  uVar4 = lVar5 - lVar6;
  *(int *)(param_1 + 0x700) = iVar7;
  iVar7 = 0;
  if (uVar4 != 0) {
    iVar7 = *(int *)(param_1 + 0x6fc) + -1;
    iVar8 = (int)(uVar4 >> 3);
    do {
      iVar7 = iVar7 + iVar8;
    } while (iVar7 - iVar8 < 0);
    do {
      iVar1 = iVar7 - iVar8;
      iVar7 = iVar7 - iVar8;
    } while ((ulong)((long)uVar4 >> 3) <= (ulong)(long)iVar1);
  }
  *(int *)(param_1 + 0x6fc) = iVar7;
  uVar9 = FUN_025786c0(param_1);
  uVar9 = FUN_025788d4(uVar9,*(undefined4 *)
                              (*(long *)(param_1 + 0x630) + (ulong)*(uint *)(param_1 + 0x6fc) * 8));
  *(undefined8 *)(param_1 + 0x748) = uVar9;
  FUN_02578a10(param_1);
  FUN_02579328(param_1);
  return;
}


