/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 015db280; name: FUN_015db280
 */


void FUN_015db280(undefined8 param_1)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  longlong lVar5;
  undefined8 uVar6;
  code *pcVar7;
  double __x;
  
  lVar3 = FUN_001511d0(param_1,0xfff0b9d6);
  lVar4 = FUN_001511d0(param_1,1);
  lVar4 = *(long *)(lVar4 + ((ulong)(uint)-(int)lVar4 & 7));
  if ((*PTR_DAT_0437fd68 != '\0') && (iVar2 = FUN_00155630(param_1,1,"class_cast"), iVar2 != 0)) {
    pcVar7 = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar6 = FUN_015be36c();
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
  pcVar7 = *(code **)(lVar3 + 0xa0);
  plVar1 = (long *)(lVar4 + ((long)*(ulong *)(lVar3 + 0xa8) >> 1));
  if ((*(ulong *)(lVar3 + 0xa8) & 1) != 0) {
    pcVar7 = *(code **)(pcVar7 + *plVar1);
  }
  iVar2 = (*pcVar7)(plVar1,lVar5);
  FUN_0014ff10(param_1,0);
  FUN_001514d0(param_1,(long)iVar2);
  return;
}


