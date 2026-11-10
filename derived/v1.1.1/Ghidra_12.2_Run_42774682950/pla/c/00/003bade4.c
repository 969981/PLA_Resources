/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003bade4; name: FUN_003bade4
 */


undefined1 * FUN_003bade4(long param_1,undefined1 *param_2,long *param_3)

{
  uint uVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  ulong uVar4;
  byte *pbVar5;
  byte *pbVar6;
  size_t __n;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 1) == 0) goto joined_r0x003baf20;
  pbVar5 = *(byte **)(param_1 + 0x18);
  if ((*pbVar5 & 1) == 0) {
    pbVar6 = pbVar5 + 1;
    uVar4 = (ulong)(*pbVar5 >> 1);
  }
  else {
    uVar4 = *(ulong *)(pbVar5 + 8);
    pbVar6 = *(byte **)(pbVar5 + 0x10);
  }
  FUN_0033b628(pbVar6,uVar4,1,"google.protobuf.UninterpretedOption.NamePart.name_part");
  pbVar5 = *(byte **)(param_1 + 0x18);
  if ((*pbVar5 & 1) == 0) {
    __n = (size_t)(*pbVar5 >> 1);
LAB_003bae78:
    if ((long)__n <= (*param_3 - (long)param_2) + 0xe) {
      *param_2 = 10;
      param_2[1] = (char)__n;
      pbVar6 = *(byte **)(pbVar5 + 0x10);
      if ((*pbVar5 & 1) == 0) {
        pbVar6 = pbVar5 + 1;
      }
      memcpy(param_2 + 2,pbVar6,__n);
      param_2 = param_2 + 2 + __n;
      goto joined_r0x003baf20;
    }
  }
  else {
    __n = *(size_t *)(pbVar5 + 8);
    if ((long)__n < 0x80) goto LAB_003bae78;
  }
  param_2 = (undefined1 *)FUN_003112b4(param_3,1,pbVar5,param_2);
joined_r0x003baf20:
  if ((uVar1 >> 1 & 1) == 0) {
    uVar4 = *(ulong *)(param_1 + 8);
  }
  else {
    if ((undefined1 *)*param_3 <= param_2) {
      param_2 = (undefined1 *)FUN_00310ec4(param_3,param_2);
    }
    uVar2 = *(undefined1 *)(param_1 + 0x20);
    *param_2 = 0x10;
    param_2[1] = uVar2;
    param_2 = param_2 + 2;
    uVar4 = *(ulong *)(param_1 + 8);
  }
  if ((uVar4 & 1) == 0) {
    return param_2;
  }
  puVar3 = (undefined1 *)FUN_00311a94((uVar4 & 0xfffffffffffffffe) + 8,param_2,param_3);
  return puVar3;
}


