/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 015e3340; name: FUN_015e3340
 */


void FUN_015e3340(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  byte *pbVar5;
  undefined8 *puVar6;
  code *pcVar7;
  undefined8 local_40;
  byte *pbStack_38;
  
  lVar2 = FUN_001511d0(param_1,0xfff0b9d6);
  lVar3 = FUN_001511d0(param_1,1);
  lVar3 = *(long *)(lVar3 + ((ulong)(uint)-(int)lVar3 & 7));
  if ((*PTR_DAT_04380368 != '\0') && (iVar1 = FUN_00155630(param_1,1,"class_cast"), iVar1 != 0)) {
    pcVar7 = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar4 = FUN_015e3270();
    lVar3 = (*pcVar7)(lVar3,uVar4);
    FUN_0014ff10(param_1,0xfffffffe);
  }
  pcVar7 = *(code **)(lVar2 + 0x68);
  if ((*(ulong *)(lVar2 + 0x70) & 1) != 0) {
    pcVar7 = *(code **)(pcVar7 + *(long *)(lVar3 + ((long)*(ulong *)(lVar2 + 0x70) >> 1)));
  }
  uVar4 = (*pcVar7)();
  FUN_0014ff10(param_1,0);
  pbVar5 = (byte *)FUN_00e193bc();
  pbStack_38 = *(byte **)(pbVar5 + 0x10);
  if ((*pbVar5 & 1) == 0) {
    pbStack_38 = pbVar5 + 1;
  }
  local_40 = param_1;
  puVar6 = (undefined8 *)FUN_00e337a0(param_1);
  *puVar6 = uVar4;
  FUN_00e339b4(&local_40);
  return;
}


