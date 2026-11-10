/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031dc798; name: FUN_031dc798
 */


void FUN_031dc798(undefined8 param_1,long *param_2,long param_3,undefined4 *param_4,
                 undefined4 *param_5,long *param_6)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  long lVar4;
  int iVar5;
  uint *puVar6;
  undefined1 *puVar7;
  undefined4 local_60 [2];
  undefined4 local_58 [2];
  
  puVar6 = (uint *)(*param_2 + ((param_3 << 0x20) >> 0x1d) + 4);
  uVar2 = *puVar6 - 0x1000000;
  if (uVar2 >> 0x16 != 0) {
    *puVar6 = uVar2;
    return;
  }
  uVar3 = *param_4;
  iVar5 = (int)param_6[1];
  lVar4 = *param_6;
  iVar1 = iVar5 + 1;
  if ((int)(*(uint *)((long)param_6 + 0xc) & 0x3fffffff) <= iVar5) {
    lVar4 = FUN_031db48c(PTR_PTR_0434a080,iVar1);
    iVar5 = (int)param_6[1];
    *param_6 = lVar4;
  }
  puVar7 = (undefined1 *)(lVar4 + (long)iVar5 * 0xc);
  *puVar7 = 3;
  *(undefined4 *)(puVar7 + 4) = uVar3;
  *(int *)(param_6 + 1) = iVar1;
  local_58[0] = *param_4;
  local_60[0] = *param_5;
  FUN_031d87ac(param_1,local_58,local_60,param_6 + 2);
  if ((uint)((ulong)param_3 >> 0x20) <= *(uint *)(param_2 + 3)) {
    lVar4 = param_2[2] + (param_3 >> 0x20) * 8;
    if (*(int *)(lVar4 + 4) == (int)param_3) goto LAB_031dc8a8;
  }
  lVar4 = FUN_031dbecc(param_2,*param_2 + (long)(int)param_3 * 8);
LAB_031dc8a8:
  FUN_031dbf4c(param_2,lVar4);
  return;
}


