/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 025778f0; name: FUN_025778f0
 */


void FUN_025778f0(long param_1)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  int iVar8;
  undefined8 uVar9;
  
  lVar4 = *(long *)(param_1 + 0x5c8);
  lVar6 = *(long *)(param_1 + 0x5c0);
  if (lVar4 == lVar6) {
    return;
  }
  iVar8 = *(int *)(param_1 + 0x700);
  lVar3 = (long)iVar8 * 0x30;
  puVar2 = (&PTR_s_anime_shift_left_02_0425d340)[(long)iVar8 * 6];
  uVar9 = *(undefined8 *)(&DAT_0425d348 + lVar3);
  *(undefined8 *)(param_1 + 0x710) = *(undefined8 *)(&DAT_0425d338 + lVar3);
  *(undefined **)(param_1 + 0x718) = puVar2;
  *(undefined8 *)(param_1 + 0x720) = uVar9;
  if (*(long *)(param_1 + 0x2c8) != 0) {
    FUN_0283b1e8(*(long *)(param_1 + 0x2c8),param_1 + 0x710);
    iVar8 = *(int *)(param_1 + 0x700);
    lVar4 = *(long *)(param_1 + 0x5c8);
    lVar6 = *(long *)(param_1 + 0x5c0);
  }
  iVar5 = 4;
  if (0 < iVar8) {
    iVar5 = -1;
  }
  iVar5 = iVar5 + iVar8;
  iVar8 = iVar5 + -5;
  if (iVar5 < 5) {
    iVar8 = iVar5;
  }
  *(int *)(param_1 + 0x700) = iVar8;
  iVar8 = 0;
  if (lVar4 - lVar6 != 0) {
    uVar7 = (lVar4 - lVar6 >> 1) * -0x5555555555555555;
    iVar8 = *(int *)(param_1 + 0x6f8) + 1;
    iVar5 = (int)uVar7;
    do {
      iVar8 = iVar8 + iVar5;
    } while (iVar8 - iVar5 < 0);
    do {
      iVar1 = iVar8 - iVar5;
      iVar8 = iVar8 - iVar5;
    } while (uVar7 <= (ulong)(long)iVar1);
  }
  *(int *)(param_1 + 0x6f8) = iVar8;
  FUN_02577adc(param_1);
  FUN_02577d38(param_1);
  return;
}


