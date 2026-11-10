/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031daa04; name: FUN_031daa04
 */


void FUN_031daa04(long *param_1,undefined4 *param_2,long *param_3)

{
  int iVar1;
  long *plVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  uint *puVar6;
  undefined4 *puVar7;
  
  iVar4 = FUN_031dd408();
  puVar3 = PTR_PTR_0434a080;
  if ((int)param_1[1] == iVar4) {
    lVar5 = *param_1;
    iVar1 = iVar4 + 1;
    if ((int)(*(uint *)((long)param_1 + 0xc) & 0x3fffffff) <= iVar4) {
      lVar5 = FUN_031dd4f4(PTR_PTR_0434a080,iVar1);
      iVar4 = (int)param_1[1];
      *param_1 = lVar5;
    }
    puVar7 = (undefined4 *)(lVar5 + (long)iVar4 * 0x18);
    *puVar7 = *param_2;
    *(long *)(puVar7 + 2) = 0;
    *(undefined8 *)(puVar7 + 4) = 0x8000000000000000;
    if (*(int *)((long)param_3 + 0xc) < 0) {
      FUN_032bcf84(puVar3,param_3,8);
    }
    *(long *)(puVar7 + 2) = *param_3;
    puVar7[4] = (int)param_3[1];
    puVar7[5] = *(undefined4 *)((long)param_3 + 0xc);
    *param_3 = 0;
    param_3[1] = 0;
    *(int *)(param_1 + 1) = iVar1;
  }
  else {
    plVar2 = (long *)(*param_1 + (long)iVar4 * 0x18 + 8);
    if (plVar2 != param_3) {
      lVar5 = *param_1 + (long)iVar4 * 0x18;
      puVar6 = (uint *)(lVar5 + 0x14);
      puVar7 = (undefined4 *)(lVar5 + 0x10);
      *puVar7 = 0;
      if ((-1 < (int)*puVar6) && (*plVar2 != 0)) {
        FUN_032cf244(puVar3,*plVar2,8,*puVar6 & 0x3fffffff);
      }
      *plVar2 = 0;
      *puVar7 = 0;
      *puVar6 = 0x80000000;
      if (*(int *)((long)param_3 + 0xc) < 0) {
        FUN_032bcf84(puVar3,param_3,8);
      }
      *plVar2 = *param_3;
      *puVar7 = (int)param_3[1];
      *puVar6 = *(uint *)((long)param_3 + 0xc);
      *param_3 = 0;
      param_3[1] = 0;
    }
  }
  return;
}


