/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0211f13c; name: FUN_0211f13c
 */


void FUN_0211f13c(undefined8 param_1)

{
  long *plVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  code *pcVar8;
  double __x;
  
  lVar4 = FUN_001511d0(param_1,0xfff0b9d6);
  lVar5 = FUN_001511d0(param_1,1);
  lVar5 = *(long *)(lVar5 + ((ulong)(uint)-(int)lVar5 & 7));
  if ((*PTR_DAT_04384ee0 != '\0') && (iVar3 = FUN_00155630(param_1,1,"class_cast"), iVar3 != 0)) {
    pcVar8 = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar7 = FUN_0211e930();
    lVar5 = (*pcVar8)(lVar5,uVar7);
    FUN_0014ff10(param_1,0xfffffffe);
  }
  uVar2 = FUN_00150ba0(param_1,2,0);
  iVar3 = FUN_001504d0(param_1,3);
  if (iVar3 == 0) {
    __x = (double)FUN_00150a90(param_1,3,0);
    uVar6 = llround(__x);
  }
  else {
    uVar6 = FUN_00150ba0(param_1,3,0);
  }
  iVar3 = FUN_00150cc0(param_1,4);
  pcVar8 = *(code **)(lVar4 + 0x98);
  plVar1 = (long *)(lVar5 + ((long)*(ulong *)(lVar4 + 0xa0) >> 1));
  if ((*(ulong *)(lVar4 + 0xa0) & 1) != 0) {
    pcVar8 = *(code **)(pcVar8 + *plVar1);
  }
  (*pcVar8)(plVar1,uVar2,uVar6 & 0xffffffff,iVar3 != 0);
  FUN_0014ff10(param_1,0);
  return;
}


