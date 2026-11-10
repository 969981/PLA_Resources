/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02444b1c; name: FUN_02444b1c
 */


void FUN_02444b1c(undefined8 param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  code *pcVar4;
  float fVar5;
  
  lVar2 = FUN_001511d0(param_1,1);
  lVar2 = *(long *)(lVar2 + ((ulong)(uint)-(int)lVar2 & 7));
  if ((*PTR_DAT_04386f18 != '\0') && (iVar1 = FUN_00155630(param_1,1,"class_cast"), iVar1 != 0)) {
    pcVar4 = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar3 = FUN_0240a4bc();
    lVar2 = (*pcVar4)(lVar2,uVar3);
    FUN_0014ff10(param_1,0xfffffffe);
  }
  pcVar4 = (code *)*param_2;
  if ((param_2[1] & 1U) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(long *)(lVar2 + (param_2[1] >> 1)));
  }
  fVar5 = (float)(*pcVar4)();
  FUN_0014ff10(param_1,0);
  FUN_001514b0((double)fVar5,param_1);
  return;
}


