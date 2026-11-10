/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 022bdf60; name: FUN_022bdf60
 */


void FUN_022bdf60(undefined8 param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  
  lVar2 = FUN_001511d0(param_1,1);
  lVar2 = *(long *)(lVar2 + ((ulong)(uint)-(int)lVar2 & 7));
  if ((*PTR_DAT_043865d8 != '\0') && (iVar1 = FUN_00155630(param_1,1,"class_cast"), iVar1 != 0)) {
    pcVar3 = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar4 = FUN_022bd9b4();
    lVar2 = (*pcVar3)(lVar2,uVar4);
    FUN_0014ff10(param_1,0xfffffffe);
  }
  pcVar3 = (code *)*param_2;
  if ((param_2[1] & 1U) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(lVar2 + (param_2[1] >> 1)));
  }
  (*pcVar3)();
  FUN_0014ff10(param_1,0);
  return;
}


