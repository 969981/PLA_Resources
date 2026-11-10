/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006971dc; name: FUN_006971dc
 */


long FUN_006971dc(long param_1)

{
  int iVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  byte *pbVar5;
  
  pbVar5 = *(byte **)(param_1 + 0x10);
  bVar2 = *pbVar5;
  if ((bVar2 & 1) == 0) {
    if (bVar2 >> 1 == 0) {
LAB_00697288:
      lVar3 = 0;
      iVar1 = *(int *)(param_1 + 0x24);
      goto joined_r0x00697298;
    }
  }
  else if (*(long *)(pbVar5 + 8) == 0) goto LAB_00697288;
  uVar4 = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    uVar4 = *(ulong *)(pbVar5 + 8);
  }
  lVar3 = uVar4 + (((uint)LZCOUNT((uint)uVar4 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
  iVar1 = *(int *)(param_1 + 0x24);
joined_r0x00697298:
  if (iVar1 - 2U < 7) {
                    /* WARNING: Could not recover jumptable at 0x00697250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar3 = (*(code *)(&UNK_00697254 + (ulong)(byte)(&DAT_03a518cf)[iVar1 - 2U] * 4))();
    return lVar3;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    bVar2 = *(byte *)(uVar4 + 8);
    if ((bVar2 & 1) == 0) {
      uVar4 = (ulong)(bVar2 >> 1);
    }
    else {
      uVar4 = *(ulong *)(uVar4 + 0x10);
    }
    lVar3 = uVar4 + lVar3;
  }
  *(int *)(param_1 + 0x20) = (int)lVar3;
  return lVar3;
}


