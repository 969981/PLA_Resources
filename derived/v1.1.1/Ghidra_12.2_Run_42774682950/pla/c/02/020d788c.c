/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 020d788c; name: FUN_020d788c
 */


void FUN_020d788c(undefined8 param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  byte *pbVar3;
  long *plVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined8 local_40;
  byte *pbStack_38;
  
  lVar2 = FUN_001511d0(param_1,1);
  lVar2 = *(long *)(lVar2 + ((ulong)(uint)-(int)lVar2 & 7));
  if ((*PTR_DAT_04380660 != '\0') && (iVar1 = FUN_00155630(param_1,1,"class_cast"), iVar1 != 0)) {
    pcVar6 = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar5 = FUN_017aa43c();
    lVar2 = (*pcVar6)(lVar2,uVar5);
    FUN_0014ff10(param_1,0xfffffffe);
  }
  pcVar6 = (code *)*param_2;
  if ((param_2[1] & 1U) != 0) {
    pcVar6 = *(code **)(pcVar6 + *(long *)(lVar2 + (param_2[1] >> 1)));
  }
  lVar2 = (*pcVar6)();
  FUN_0014ff10(param_1,0);
  pbVar3 = (byte *)FUN_00faaf7c();
  pbStack_38 = *(byte **)(pbVar3 + 0x10);
  if ((*pbVar3 & 1) == 0) {
    pbStack_38 = pbVar3 + 1;
  }
  local_40 = param_1;
  if (lVar2 == 0) {
    FUN_00151490(param_1);
  }
  else {
    plVar4 = (long *)FUN_020d7460();
    *plVar4 = lVar2;
    FUN_020d75a8(&local_40);
  }
  return;
}


