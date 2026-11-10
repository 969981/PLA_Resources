/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f4dd70; name: FUN_02f4dd70
 */


void FUN_02f4dd70(undefined8 *param_1,short param_2)

{
  short *psVar1;
  short *psVar2;
  short *psVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  short *psVar8;
  short *psVar9;
  
  psVar8 = (short *)*param_1;
  uVar5 = *(uint *)(param_1 + 1);
  uVar6 = (ulong)uVar5;
  psVar2 = psVar8 + uVar6;
  psVar3 = psVar8;
  if ((uVar5 != 0) && (*psVar8 != param_2)) {
    lVar4 = uVar6 * 2;
    psVar9 = psVar8;
    do {
      lVar4 = lVar4 + -2;
      if (lVar4 == 0) {
        return;
      }
      psVar3 = psVar9 + 1;
      psVar1 = psVar9 + 1;
      psVar9 = psVar3;
    } while (*psVar1 != param_2);
  }
  if (psVar2 != psVar3) {
    if (psVar3 < psVar2 + -1) {
      uVar7 = (long)psVar8 + ~(ulong)psVar3 + uVar6 * 2 + -2;
      uVar5 = ((uint)(uVar7 >> 1) & 0x7fffffff) + 1;
      uVar6 = (ulong)uVar5 & 3;
      if ((uVar5 & 3) != 0) {
        psVar8 = psVar3;
        do {
          psVar3 = psVar8 + 1;
          *psVar8 = *psVar3;
          uVar6 = uVar6 - 1;
          psVar8 = psVar3;
        } while (uVar6 != 0);
      }
      if (5 < uVar7) {
        do {
          psVar8 = psVar3 + 4;
          *(undefined8 *)psVar3 = *(undefined8 *)(psVar3 + 1);
          psVar3 = psVar8;
        } while (psVar8 < psVar2 + -1);
      }
      uVar5 = *(uint *)(param_1 + 1);
    }
    *(uint *)(param_1 + 1) = uVar5 - 1;
  }
  return;
}


