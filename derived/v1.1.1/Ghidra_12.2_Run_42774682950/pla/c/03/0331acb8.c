/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0331acb8; name: FUN_0331acb8
 */


int FUN_0331acb8(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  undefined8 uVar8;
  undefined8 *local_178;
  undefined8 local_170;
  undefined8 local_168 [33];
  
  puVar3 = PTR_PTR_0434a080;
  puVar7 = (uint *)((long)param_4 + 0xc);
  uVar6 = *puVar7;
  iVar5 = *(int *)(param_4 + 1);
  uVar1 = iVar5 + (int)((ulong)((long)param_3 - (long)param_2) >> 3);
  if ((int)(uVar6 & 0x3fffffff) < (int)uVar1) {
    uVar8 = *param_4;
    if (0x3fffffff < (int)uVar1) {
      FUN_032bd0a8(uVar1);
      uVar6 = *puVar7;
    }
    uVar6 = (uVar6 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar6) {
      uVar6 = 0x3fffffff;
    }
    uVar2 = uVar1;
    if ((int)uVar1 <= (int)uVar6) {
      uVar2 = uVar6;
    }
    uVar8 = FUN_032bd1d4(puVar3,uVar2,8,uVar8,iVar5,puVar7);
    *param_4 = uVar8;
  }
  if (*(int *)(param_4 + 3) * 2 < (int)((uVar1 + 1) * 3)) {
    FUN_032c2334(param_4 + 2);
  }
  puVar3 = PTR_PTR_0434a090;
  do {
    if (param_2 == param_3) {
      return 0;
    }
    param_3 = param_3 + -1;
    local_168[0] = *param_3;
    local_170 = -0x7fffffdfffffffff;
    local_178 = local_168;
    iVar5 = FUN_0331e824(param_1,&local_178,param_4);
    lVar4 = local_170;
    uVar1 = local_170._4_4_;
    local_170 = (ulong)local_170._4_4_ << 0x20;
    if ((-1 < lVar4) && (local_178 != (undefined8 *)0x0)) {
      FUN_032cf244(puVar3,local_178,8,uVar1 & 0x3fffffff);
    }
  } while (-1 < iVar5);
  return iVar5;
}


