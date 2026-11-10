/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02366ee0; name: FUN_02366ee0
 */


void FUN_02366ee0(undefined8 param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  code *pcVar4;
  
  lVar2 = FUN_001511d0(param_1,1);
  lVar2 = *(long *)(lVar2 + ((ulong)(uint)-(int)lVar2 & 7));
  if ((*PTR_DAT_04385ff8 != '\0') && (iVar1 = FUN_00155630(param_1,1,"class_cast"), iVar1 != 0)) {
    pcVar4 = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar3 = FUN_0221bb6c();
    lVar2 = (*pcVar4)(lVar2,uVar3);
    FUN_0014ff10(param_1,0xfffffffe);
  }
  pcVar4 = (code *)*param_2;
  if ((param_2[1] & 1U) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(long *)(lVar2 + (param_2[1] >> 1)));
  }
  (*pcVar4)();
  FUN_0014ff10(param_1,0);
  return;
}


