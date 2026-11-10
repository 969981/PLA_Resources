/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01603458; name: FUN_01603458
 */


void FUN_01603458(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  iVar1 = param_2[1];
  lVar2 = FUN_001511d0(param_1,iVar1 + 2);
  *param_2 = 1;
  param_2[1] = param_2[1] + 1;
  uVar5 = *(undefined8 *)(lVar2 + ((ulong)(uint)-(int)lVar2 & 7));
  if ((*PTR_DAT_0437acb0 != '\0') &&
     (iVar1 = FUN_00155630(param_1,iVar1 + 2,"class_cast"), iVar1 != 0)) {
    pcVar3 = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar6 = FUN_00b4fc10();
    uVar5 = (*pcVar3)(uVar5,uVar6);
    FUN_0014ff10(param_1,0xfffffffe);
  }
  iVar1 = param_2[1];
  lVar2 = FUN_001511d0(param_1,iVar1 + 2);
  *param_2 = 1;
  param_2[1] = param_2[1] + 1;
  uVar6 = *(undefined8 *)(lVar2 + ((ulong)(uint)-(int)lVar2 & 7));
  if ((*PTR_DAT_0437acb0 != '\0') &&
     (iVar1 = FUN_00155630(param_1,iVar1 + 2,"class_cast"), iVar1 != 0)) {
    pcVar3 = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar7 = FUN_00b4fc10();
    uVar6 = (*pcVar3)(uVar6,uVar7);
    FUN_0014ff10(param_1,0xfffffffe);
  }
  iVar1 = param_2[1];
  lVar2 = FUN_001511d0(param_1,iVar1 + 2);
  *param_2 = 1;
  param_2[1] = param_2[1] + 1;
  uVar7 = *(undefined8 *)(lVar2 + ((ulong)(uint)-(int)lVar2 & 7));
  if ((*PTR_DAT_0437acb0 != '\0') &&
     (iVar1 = FUN_00155630(param_1,iVar1 + 2,"class_cast"), iVar1 != 0)) {
    pcVar3 = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar8 = FUN_00b4fc10();
    uVar7 = (*pcVar3)(uVar7,uVar8);
    FUN_0014ff10(param_1,0xfffffffe);
  }
  iVar1 = param_2[1];
  lVar2 = FUN_001511d0(param_1,iVar1 + 2);
  *param_2 = 1;
  param_2[1] = param_2[1] + 1;
  uVar8 = *(undefined8 *)(lVar2 + ((ulong)(uint)-(int)lVar2 & 7));
  if ((*PTR_DAT_0437acb0 != '\0') &&
     (iVar1 = FUN_00155630(param_1,iVar1 + 2,"class_cast"), iVar1 != 0)) {
    pcVar3 = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar9 = FUN_00b4fc10();
    uVar8 = (*pcVar3)(uVar8,uVar9);
    FUN_0014ff10(param_1,0xfffffffe);
  }
  iVar1 = param_2[1];
  lVar2 = FUN_001511d0(param_1,iVar1 + 2);
  *param_2 = 1;
  param_2[1] = param_2[1] + 1;
  uVar9 = *(undefined8 *)(lVar2 + ((ulong)(uint)-(int)lVar2 & 7));
  if ((*PTR_DAT_0437acb0 != '\0') &&
     (iVar1 = FUN_00155630(param_1,iVar1 + 2,"class_cast"), iVar1 != 0)) {
    pcVar3 = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar4 = FUN_00b4fc10();
    uVar9 = (*pcVar3)(uVar9,uVar4);
    FUN_0014ff10(param_1,0xfffffffe);
  }
  FUN_0160395c(param_1,param_2,param_3,param_4,uVar5,uVar6,uVar7,uVar8,uVar9);
  return;
}


