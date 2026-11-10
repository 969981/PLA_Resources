/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e53940; name: FUN_02e53940
 */


long FUN_02e53940(long *param_1,ulong param_2,ulong param_3,undefined1 *param_4)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  ulong *puVar6;
  ulong uVar7;
  
  uVar5 = *(uint *)(param_1 + 1);
  if (uVar5 == 0) {
    lVar4 = 0;
  }
  else {
    iVar3 = 0;
    do {
      iVar1 = iVar3 + (uVar5 >> 1);
      lVar4 = (long)iVar1;
      puVar6 = (ulong *)(*param_1 + (long)iVar1 * 0x38);
      uVar7 = *puVar6;
      bVar2 = param_2 <= uVar7;
      if ((uVar7 == param_2) && (uVar7 = puVar6[1], bVar2 = param_3 <= uVar7, uVar7 == param_3)) {
        *param_4 = 1;
        goto LAB_02e539b0;
      }
      if (!bVar2 != 0) {
        iVar3 = iVar1 + 1;
      }
      uVar5 = uVar5 - !bVar2 >> 1;
    } while (uVar5 != 0);
    lVar4 = (long)iVar3;
  }
  *param_4 = 0;
LAB_02e539b0:
  return *param_1 + lVar4 * 0x38;
}


