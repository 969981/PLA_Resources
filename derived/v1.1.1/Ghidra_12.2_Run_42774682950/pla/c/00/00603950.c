/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00603950; name: FUN_00603950
 */


undefined1 * FUN_00603950(long param_1,undefined1 *param_2,long *param_3)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  byte *pbVar4;
  undefined1 *puVar5;
  byte *pbVar6;
  int iVar7;
  size_t __n;
  
  iVar2 = *(int *)(param_1 + 0x18);
  if (0 < iVar2) {
    iVar7 = 0;
    do {
      while( true ) {
        pbVar4 = (byte *)FUN_0032b79c(param_1 + 0x10,iVar7);
        pbVar6 = *(byte **)(pbVar4 + 0x10);
        bVar3 = (*pbVar4 & 1) == 0;
        if (bVar3) {
          pbVar6 = pbVar4 + 1;
        }
        uVar1 = (uint)(*pbVar4 >> 1);
        if (!bVar3) {
          uVar1 = *(uint *)(pbVar4 + 8);
        }
        FUN_0033b628(pbVar6,uVar1,1,"google.protobuf.FieldMask.paths");
        if ((*pbVar4 & 1) == 0) break;
        __n = *(size_t *)(pbVar4 + 8);
        if ((long)__n < 0x80) goto LAB_006039e8;
LAB_00603a3c:
        param_2 = (undefined1 *)FUN_00311488(param_3,1,pbVar4,param_2);
        iVar7 = iVar7 + 1;
        if (iVar2 == iVar7) goto LAB_00603a60;
      }
      __n = (size_t)(*pbVar4 >> 1);
LAB_006039e8:
      if ((*param_3 - (long)param_2) + 0xe < (long)__n) goto LAB_00603a3c;
      *param_2 = 10;
      param_2[1] = (char)__n;
      pbVar6 = pbVar4 + 1;
      if ((*pbVar4 & 1) != 0) {
        pbVar6 = *(byte **)(pbVar4 + 0x10);
      }
      memcpy(param_2 + 2,pbVar6,__n);
      param_2 = param_2 + 2 + __n;
      iVar7 = iVar7 + 1;
    } while (iVar2 != iVar7);
  }
LAB_00603a60:
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  puVar5 = (undefined1 *)
           FUN_00311a94((*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) + 8,param_2,param_3);
  return puVar5;
}


