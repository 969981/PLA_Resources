/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 021ceb38; name: FUN_021ceb38
 */


void FUN_021ceb38(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  long lVar3;
  code *pcVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  double __x;
  undefined4 local_44;
  
  iVar1 = param_2[1];
  lVar3 = FUN_001511d0(param_1,iVar1 + 2);
  *param_2 = 1;
  param_2[1] = param_2[1] + 1;
  uVar7 = *(undefined8 *)(lVar3 + ((ulong)(uint)-(int)lVar3 & 7));
  if ((*PTR_DAT_0437acb0 != '\0') &&
     (iVar1 = FUN_00155630(param_1,iVar1 + 2,"class_cast"), iVar1 != 0)) {
    pcVar4 = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar5 = FUN_00b4fc10();
    uVar7 = (*pcVar4)(uVar7,uVar5);
    FUN_0014ff10(param_1,0xfffffffe);
  }
  iVar1 = param_2[1] + 2;
  *param_2 = 1;
  param_2[1] = param_2[1] + 1;
  iVar2 = FUN_001504d0(param_1,iVar1);
  if (iVar2 == 0) {
    __x = (double)FUN_00150a90(param_1,iVar1,0);
    lVar6 = llround(__x);
    local_44 = (undefined4)lVar6;
  }
  else {
    local_44 = FUN_00150ba0(param_1,iVar1,0);
  }
  FUN_021cecc8(param_1,param_2,param_3,param_4,uVar7,&local_44);
  return;
}


