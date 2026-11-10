/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008eb50c; name: FUN_008eb50c
 */


void FUN_008eb50c(undefined8 param_1,long *param_2)

{
  long *plVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  longlong lVar5;
  undefined8 uVar6;
  code *pcVar7;
  double __x;
  
  lVar4 = FUN_001511d0(param_1,1);
  lVar4 = *(long *)(lVar4 + ((ulong)(uint)-(int)lVar4 & 7));
  if ((*PTR_DAT_04379780 != '\0') && (iVar2 = FUN_00155630(param_1,1,"class_cast"), iVar2 != 0)) {
    pcVar7 = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar6 = FUN_008caebc();
    lVar4 = (*pcVar7)(lVar4,uVar6);
    FUN_0014ff10(param_1,0xfffffffe);
  }
  iVar2 = FUN_001504d0(param_1,2);
  if (iVar2 == 0) {
    __x = (double)FUN_00150a90(param_1,2,0);
    lVar5 = llround(__x);
  }
  else {
    lVar5 = FUN_00150ba0(param_1,2,0);
  }
  pcVar7 = (code *)*param_2;
  plVar1 = (long *)(lVar4 + (param_2[1] >> 1));
  if ((param_2[1] & 1U) != 0) {
    pcVar7 = *(code **)(pcVar7 + *plVar1);
  }
  uVar3 = (*pcVar7)(plVar1,lVar5);
  FUN_0014ff10(param_1,0);
  FUN_001517e0(param_1,uVar3 & 1);
  return;
}


