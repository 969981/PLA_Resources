/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006997e0; name: FUN_006997e0
 */


undefined1 * FUN_006997e0(long param_1,undefined1 *param_2,long *param_3)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  byte *pbVar4;
  undefined1 *puVar5;
  void *__src;
  ulong uVar6;
  ulong uVar7;
  byte *pbVar8;
  int iVar9;
  size_t sVar10;
  
  iVar2 = *(int *)(param_1 + 0x18);
  if (0 < iVar2) {
    iVar9 = 0;
    do {
      while( true ) {
        pbVar4 = (byte *)FUN_0032b79c(param_1 + 0x10,iVar9);
        pbVar8 = *(byte **)(pbVar4 + 0x10);
        bVar3 = (*pbVar4 & 1) == 0;
        if (bVar3) {
          pbVar8 = pbVar4 + 1;
        }
        uVar1 = (uint)(*pbVar4 >> 1);
        if (!bVar3) {
          uVar1 = *(uint *)(pbVar4 + 8);
        }
        FUN_0033b628(pbVar8,uVar1,1,"nn.npln.gamesync.v1.DocumentsTarget.documents");
        if ((*pbVar4 & 1) == 0) break;
        sVar10 = *(size_t *)(pbVar4 + 8);
        if ((long)sVar10 < 0x80) goto LAB_00699878;
LAB_006998cc:
        param_2 = (undefined1 *)FUN_00311488(param_3,1,pbVar4,param_2);
        iVar9 = iVar9 + 1;
        if (iVar2 == iVar9) goto LAB_006998f0;
      }
      sVar10 = (size_t)(*pbVar4 >> 1);
LAB_00699878:
      if ((*param_3 - (long)param_2) + 0xe < (long)sVar10) goto LAB_006998cc;
      *param_2 = 10;
      param_2[1] = (char)sVar10;
      pbVar8 = pbVar4 + 1;
      if ((*pbVar4 & 1) != 0) {
        pbVar8 = *(byte **)(pbVar4 + 0x10);
      }
      memcpy(param_2 + 2,pbVar8,sVar10);
      param_2 = param_2 + 2 + sVar10;
      iVar9 = iVar9 + 1;
    } while (iVar2 != iVar9);
  }
LAB_006998f0:
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar7 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    if ((*(byte *)(uVar7 + 8) & 1) == 0) {
      __src = (void *)(uVar7 + 9);
      uVar6 = (ulong)(*(byte *)(uVar7 + 8) >> 1);
    }
    else {
      uVar6 = *(ulong *)(uVar7 + 0x10);
      __src = *(void **)(uVar7 + 0x18);
    }
    sVar10 = (size_t)(int)uVar6;
    if (*param_3 - (long)param_2 < (long)sVar10) {
      puVar5 = (undefined1 *)FUN_00310fe4(param_3,__src,uVar6,param_2);
      return puVar5;
    }
    memcpy(param_2,__src,sVar10);
    param_2 = param_2 + sVar10;
  }
  return param_2;
}


