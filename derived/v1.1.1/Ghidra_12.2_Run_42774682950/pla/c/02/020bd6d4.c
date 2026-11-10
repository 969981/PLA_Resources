/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 020bd6d4; name: FUN_020bd6d4
 */


void FUN_020bd6d4(undefined8 param_1,long *param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  code *pcVar5;
  
  lVar3 = FUN_001511d0(param_1,1);
  lVar3 = *(long *)(lVar3 + ((ulong)(uint)-(int)lVar3 & 7));
  if ((*PTR_DAT_043847e0 != '\0') && (iVar1 = FUN_00155630(param_1,1,"class_cast"), iVar1 != 0)) {
    pcVar5 = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar4 = FUN_020bd79c();
    lVar3 = (*pcVar5)(lVar3,uVar4);
    FUN_0014ff10(param_1,0xfffffffe);
  }
  pcVar5 = (code *)*param_2;
  if ((param_2[1] & 1U) != 0) {
    pcVar5 = *(code **)(pcVar5 + *(long *)(lVar3 + (param_2[1] >> 1)));
  }
  uVar2 = (*pcVar5)();
  FUN_0014ff10(param_1,0);
  FUN_001517e0(param_1,uVar2 & 1);
  return;
}


