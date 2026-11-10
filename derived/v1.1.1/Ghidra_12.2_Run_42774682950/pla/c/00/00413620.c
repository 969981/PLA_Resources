/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00413620; name: FUN_00413620
 */


void FUN_00413620(undefined4 *param_1,undefined4 *param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  iVar1 = param_3 * 2;
  iVar2 = param_3 + -1;
  puVar4 = param_1 + 1;
  param_1[iVar1 + -1] = 0;
  *param_1 = 0;
  puVar6 = param_2;
  if (0 < iVar2) {
    puVar6 = param_2 + 1;
    uVar3 = FUN_0040ee50(puVar4,puVar6,iVar2,*param_2);
    puVar4[iVar2] = uVar3;
    puVar4 = param_1 + 3;
  }
  iVar5 = param_3 + -2;
  if (0 < iVar5) {
    puVar7 = puVar4 + (long)iVar2 + -1;
    do {
      uVar3 = FUN_0040ed60(puVar4,puVar6 + 1,iVar5,*puVar6);
      iVar5 = iVar5 + -1;
      puVar4 = puVar4 + 2;
      *puVar7 = uVar3;
      puVar7 = puVar7 + 1;
      puVar6 = puVar6 + 1;
    } while (0 < iVar5);
  }
  FUN_0040f2e0(param_1,param_1,param_1,iVar1);
  FUN_0040ef80(param_4,param_2,param_3);
  FUN_0040f2e0(param_1,param_1,param_4,iVar1);
  return;
}


