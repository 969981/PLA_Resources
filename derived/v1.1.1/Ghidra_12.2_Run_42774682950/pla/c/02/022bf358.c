/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 022bf358; name: FUN_022bf358
 */


void FUN_022bf358(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined8 uVar5;
  byte *pbVar6;
  undefined8 *puVar7;
  undefined8 local_40;
  byte *pbStack_38;
  
  lVar2 = FUN_001511d0(param_1,0xfff0b9d6);
  lVar3 = FUN_001511d0(param_1,1);
  lVar3 = *(long *)(lVar3 + ((ulong)(uint)-(int)lVar3 & 7));
  if ((*PTR_DAT_043865d8 != '\0') && (iVar1 = FUN_00155630(param_1,1,"class_cast"), iVar1 != 0)) {
    pcVar4 = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar5 = FUN_022bd9b4();
    lVar3 = (*pcVar4)(lVar3,uVar5);
    FUN_0014ff10(param_1,0xfffffffe);
  }
  pcVar4 = *(code **)(lVar2 + 0x1d0);
  if ((*(ulong *)(lVar2 + 0x1d8) & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(long *)(lVar3 + ((long)*(ulong *)(lVar2 + 0x1d8) >> 1)));
  }
  uVar5 = (*pcVar4)();
  FUN_0014ff10(param_1,0);
  pbVar6 = (byte *)FUN_00e193bc();
  pbStack_38 = *(byte **)(pbVar6 + 0x10);
  if ((*pbVar6 & 1) == 0) {
    pbStack_38 = pbVar6 + 1;
  }
  local_40 = param_1;
  puVar7 = (undefined8 *)FUN_00e337a0(param_1);
  *puVar7 = uVar5;
  FUN_00e339b4(&local_40);
  return;
}


