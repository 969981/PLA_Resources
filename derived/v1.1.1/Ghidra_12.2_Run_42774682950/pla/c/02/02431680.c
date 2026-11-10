/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02431680; name: FUN_02431680
 */


void FUN_02431680(undefined8 param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  byte *pbVar3;
  long *plVar4;
  code *pcVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 local_40;
  byte *pbStack_38;
  
  lVar2 = FUN_001511d0(param_1,1);
  lVar2 = *(long *)(lVar2 + ((ulong)(uint)-(int)lVar2 & 7));
  if ((*PTR_DAT_04387190 != '\0') && (iVar1 = FUN_00155630(param_1,1,"class_cast"), iVar1 != 0)) {
    pcVar5 = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar6 = FUN_024311f8();
    lVar2 = (*pcVar5)(lVar2,uVar6);
    FUN_0014ff10(param_1,0xfffffffe);
  }
  lVar7 = *param_2;
  FUN_0014ff10(param_1,0);
  pbVar3 = (byte *)FUN_00ea1364();
  pbStack_38 = *(byte **)(pbVar3 + 0x10);
  if ((*pbVar3 & 1) == 0) {
    pbStack_38 = pbVar3 + 1;
  }
  local_40 = param_1;
  plVar4 = (long *)FUN_01051f00(param_1);
  *plVar4 = lVar2 + lVar7;
  FUN_01052048(&local_40);
  return;
}


