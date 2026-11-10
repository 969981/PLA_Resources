/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0060acec; name: FUN_0060acec
 */


undefined1 * FUN_0060acec(long param_1,undefined1 *param_2,long *param_3)

{
  byte bVar1;
  undefined1 *puVar2;
  byte *pbVar3;
  ulong uVar4;
  byte *pbVar5;
  ulong uVar6;
  size_t __n;
  
  pbVar3 = *(byte **)(param_1 + 0x10);
  bVar1 = *pbVar3;
  if ((bVar1 & 1) == 0) {
    if (bVar1 >> 1 == 0) goto LAB_0060ad30;
LAB_0060ad18:
    if ((bVar1 & 1) == 0) {
      pbVar3 = pbVar3 + 1;
      uVar4 = (ulong)(bVar1 >> 1);
    }
    else {
      uVar4 = *(ulong *)(pbVar3 + 8);
      pbVar3 = *(byte **)(pbVar3 + 0x10);
    }
    FUN_0033b628(pbVar3,uVar4,1,"google.protobuf.Any.type_url");
    pbVar3 = *(byte **)(param_1 + 0x10);
    if ((*pbVar3 & 1) != 0) {
      __n = *(size_t *)(pbVar3 + 8);
      if ((long)__n < 0x80) goto LAB_0060ade0;
LAB_0060ae90:
      param_2 = (undefined1 *)FUN_003112b4(param_3,1,pbVar3,param_2);
      pbVar3 = *(byte **)(param_1 + 0x18);
      bVar1 = *pbVar3;
      goto joined_r0x0060aeac;
    }
    __n = (size_t)(*pbVar3 >> 1);
LAB_0060ade0:
    if ((*param_3 - (long)param_2) + 0xe < (long)__n) goto LAB_0060ae90;
    *param_2 = 10;
    param_2[1] = (char)__n;
    pbVar5 = *(byte **)(pbVar3 + 0x10);
    if ((*pbVar3 & 1) == 0) {
      pbVar5 = pbVar3 + 1;
    }
    memcpy(param_2 + 2,pbVar5,__n);
    param_2 = param_2 + 2 + __n;
    pbVar3 = *(byte **)(param_1 + 0x18);
    uVar4 = (ulong)*pbVar3;
    if ((*pbVar3 & 1) != 0) goto LAB_0060ae30;
LAB_0060ad3c:
    uVar6 = uVar4 >> 1;
  }
  else {
    if (*(long *)(pbVar3 + 8) != 0) goto LAB_0060ad18;
LAB_0060ad30:
    pbVar3 = *(byte **)(param_1 + 0x18);
    bVar1 = *pbVar3;
joined_r0x0060aeac:
    uVar4 = (ulong)bVar1;
    if ((bVar1 & 1) == 0) goto LAB_0060ad3c;
LAB_0060ae30:
    uVar6 = *(ulong *)(pbVar3 + 8);
  }
  if (uVar6 == 0) {
    uVar4 = *(ulong *)(param_1 + 8);
    goto joined_r0x0060adcc;
  }
  if ((uVar4 & 1) == 0) {
    uVar4 = uVar4 >> 1;
LAB_0060ad84:
    if ((long)uVar4 <= (*param_3 - (long)param_2) + 0xe) {
      *param_2 = 0x12;
      param_2[1] = (char)uVar4;
      pbVar5 = *(byte **)(pbVar3 + 0x10);
      if ((*pbVar3 & 1) == 0) {
        pbVar5 = pbVar3 + 1;
      }
      memcpy(param_2 + 2,pbVar5,uVar4);
      param_2 = param_2 + 2 + uVar4;
      uVar4 = *(ulong *)(param_1 + 8);
      goto joined_r0x0060adcc;
    }
  }
  else {
    uVar4 = *(ulong *)(pbVar3 + 8);
    if ((long)uVar4 < 0x80) goto LAB_0060ad84;
  }
  param_2 = (undefined1 *)FUN_003112b4(param_3,2,pbVar3,param_2);
  uVar4 = *(ulong *)(param_1 + 8);
joined_r0x0060adcc:
  if ((uVar4 & 1) == 0) {
    return param_2;
  }
  puVar2 = (undefined1 *)FUN_00311a94((uVar4 & 0xfffffffffffffffe) + 8,param_2,param_3);
  return puVar2;
}


