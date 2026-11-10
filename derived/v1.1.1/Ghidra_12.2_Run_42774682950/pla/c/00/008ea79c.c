/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008ea79c; name: FUN_008ea79c
 */


void FUN_008ea79c(undefined8 param_1,long *param_2)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  longlong lVar4;
  undefined8 uVar5;
  code *pcVar6;
  double __x;
  
  lVar3 = FUN_001511d0(param_1,1);
  lVar3 = *(long *)(lVar3 + ((ulong)(uint)-(int)lVar3 & 7));
  if ((*PTR_DAT_04379780 != '\0') && (iVar2 = FUN_00155630(param_1,1,"class_cast"), iVar2 != 0)) {
    pcVar6 = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar5 = FUN_008caebc();
    lVar3 = (*pcVar6)(lVar3,uVar5);
    FUN_0014ff10(param_1,0xfffffffe);
  }
  iVar2 = FUN_001504d0(param_1,2);
  if (iVar2 == 0) {
    __x = (double)FUN_00150a90(param_1,2,0);
    lVar4 = llround(__x);
  }
  else {
    lVar4 = FUN_00150ba0(param_1,2,0);
  }
  pcVar6 = (code *)*param_2;
  plVar1 = (long *)(lVar3 + (param_2[1] >> 1));
  if ((param_2[1] & 1U) != 0) {
    pcVar6 = *(code **)(pcVar6 + *plVar1);
  }
  (*pcVar6)(plVar1,lVar4);
  FUN_0014ff10(param_1,0);
  return;
}


