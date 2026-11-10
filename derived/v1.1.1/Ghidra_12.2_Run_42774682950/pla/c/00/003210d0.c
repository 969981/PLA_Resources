/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003210d0; name: FUN_003210d0
 */


undefined8 FUN_003210d0(ulong *param_1,int *param_2)

{
  byte *pbVar1;
  uint uVar2;
  ulong uVar3;
  int iVar4;
  undefined8 uVar5;
  void *__src;
  byte *pbVar6;
  ulong uVar7;
  ulong local_50;
  ulong uStack_48;
  byte *local_40;
  char local_34 [4];
  
  *param_2 = 0;
  uVar3 = FUN_00321ef0(param_1,local_34);
  if ((uVar3 & 1) == 0) {
    return 0;
  }
  if (local_34[0] != '\0') {
    uVar3 = (ulong)(byte)((byte)*param_1 >> 1);
    pbVar6 = (byte *)param_1[2];
    if (((byte)*param_1 & 1) == 0) {
      pbVar6 = (byte *)((long)param_1 + 1);
    }
    else {
      uVar3 = param_1[1];
    }
    if ((long)uVar3 < 1) {
      iVar4 = 0;
    }
    else {
      iVar4 = 0;
      pbVar1 = pbVar6 + uVar3;
      do {
        uVar2 = *pbVar6 - 0x30;
        if (9 < uVar2) {
          *param_2 = iVar4;
          return 0;
        }
        if ((iVar4 < -0xccccccc) || (iVar4 * 10 < (int)(*pbVar6 + 0x7fffffd0))) {
          *param_2 = -0x80000000;
          return 0;
        }
        pbVar6 = pbVar6 + 1;
        iVar4 = iVar4 * 10 - uVar2;
      } while (pbVar6 < pbVar1);
    }
    *param_2 = iVar4;
    return 1;
  }
  uStack_48 = 0;
  local_40 = (byte *)0x0;
  local_50 = 0;
  if ((*param_1 & 1) == 0) {
    uStack_48 = param_1[1];
    local_50 = *param_1;
    local_40 = (byte *)param_1[2];
    goto LAB_00321238;
  }
  uVar3 = param_1[1];
  if (0xffffffffffffffef < uVar3) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  __src = (void *)param_1[2];
  if (uVar3 < 0x17) {
    local_50 = (ulong)(byte)((int)uVar3 << 1);
    pbVar6 = (byte *)((ulong)&local_50 | 1);
    if (uVar3 != 0) goto LAB_00321224;
  }
  else {
    uVar7 = uVar3 + 0x10 & 0xfffffffffffffff0;
    pbVar6 = (byte *)FUN_002e2e80(PTR_FUN_04373078,uVar7);
    local_50 = uVar7 | 1;
    uStack_48 = uVar3;
    local_40 = pbVar6;
LAB_00321224:
    memcpy(pbVar6,__src,uVar3);
  }
  pbVar6[uVar3] = 0;
LAB_00321238:
  pbVar6 = (byte *)((ulong)&local_50 | 1);
  uVar3 = local_50 >> 1 & 0x7f;
  if ((local_50 & 1) != 0) {
    pbVar6 = local_40;
    uVar3 = uStack_48;
  }
  if ((long)uVar3 < 1) {
    iVar4 = 0;
  }
  else {
    iVar4 = 0;
    pbVar1 = pbVar6 + uVar3;
    do {
      uVar2 = *pbVar6 - 0x30;
      if (9 < uVar2) {
        *param_2 = iVar4;
joined_r0x0032130c:
        uVar5 = 0;
        goto joined_r0x0032130c;
      }
      if ((0xccccccc < iVar4) || ((int)(-0x7fffffd1 - (uint)*pbVar6) < iVar4 * 10)) {
        *param_2 = 0x7fffffff;
        goto joined_r0x0032130c;
      }
      pbVar6 = pbVar6 + 1;
      iVar4 = uVar2 + iVar4 * 10;
    } while (pbVar6 < pbVar1);
  }
  uVar5 = 1;
  *param_2 = iVar4;
joined_r0x0032130c:
  if ((local_50 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088);
  }
  return uVar5;
}


