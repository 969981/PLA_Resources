/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03398be8; name: FUN_03398be8
 */


void FUN_03398be8(long *param_1,undefined4 param_2,uint param_3)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  uint local_48 [2];
  undefined4 local_38 [2];
  
  plVar6 = (long *)param_1[0x22];
  iVar5 = (int)param_1[1];
  lVar8 = plVar6[2];
  lVar9 = *plVar6;
  lVar7 = plVar6[4];
  lVar4 = *param_1;
  iVar2 = iVar5 + 1;
  if ((int)(*(uint *)((long)param_1 + 0xc) & 0x3fffffff) <= iVar5) {
    lVar4 = FUN_03398d68(PTR_PTR_0434a080,iVar2);
    iVar5 = (int)param_1[1];
    *param_1 = lVar4;
  }
  puVar1 = (undefined4 *)(lVar4 + (long)iVar5 * 0x10);
  *puVar1 = param_2;
  *(long *)(puVar1 + 2) = (lVar9 - lVar8) + lVar7;
  *(int *)(param_1 + 1) = iVar2;
  local_38[0] = 0xffffffff;
  FUN_032afb80(param_1[0x22],local_38,4);
  uVar3 = (param_3 & 0xff00ff00) >> 8 | (param_3 & 0xff00ff) << 8;
  local_48[0] = uVar3 >> 0x10 | uVar3 << 0x10;
  FUN_032afb80(param_1[0x22],local_48,4);
  return;
}


