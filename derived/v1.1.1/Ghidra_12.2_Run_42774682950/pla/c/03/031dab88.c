/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031dab88; name: FUN_031dab88
 */


void FUN_031dab88(long param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  long lVar5;
  int *piVar6;
  int *piVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_50 = 0;
  uStack_48 = 0x8000000000000000;
  iVar3 = FUN_031da494(param_1 + 0x50,param_2,&local_50);
  lVar8 = *(long *)(param_1 + 0x50) + (long)iVar3 * 0x18;
  puVar9 = (undefined8 *)(lVar8 + 8);
  piVar4 = (int *)*puVar9;
  piVar7 = (int *)(lVar8 + 0x10);
  iVar1 = *piVar7;
  lVar8 = (long)iVar1;
  if (iVar1 != 0) {
    lVar5 = lVar8 << 3;
    piVar6 = piVar4;
    do {
      if (*piVar6 != -2) {
        bVar2 = false;
        goto joined_r0x031dac14;
      }
      lVar5 = lVar5 + -8;
      piVar6 = piVar6 + 2;
    } while (lVar5 != 0);
  }
  bVar2 = true;
joined_r0x031dac14:
  if (param_3 < iVar1) {
    piVar4 = piVar4 + (long)param_3 * 2;
  }
  else {
    if ((int)(*(uint *)(*(long *)(param_1 + 0x50) + (long)iVar3 * 0x18 + 0x14) & 0x3fffffff) <=
        iVar1) {
      piVar4 = (int *)FUN_031dd6d0(PTR_PTR_0434a080,iVar1 + 1);
      *puVar9 = piVar4;
      lVar8 = (long)*piVar7;
    }
    piVar4 = piVar4 + lVar8 * 2;
    *piVar7 = iVar1 + 1;
  }
  piVar4[0] = -1;
  piVar4[1] = -1;
  if (bVar2) {
    local_58[0] = *param_2;
    FUN_031da604(param_1,local_58);
  }
  return;
}


