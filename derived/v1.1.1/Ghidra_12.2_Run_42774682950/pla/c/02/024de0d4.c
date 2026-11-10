/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 024de0d4; name: FUN_024de0d4
 */


void FUN_024de0d4(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  code *pcVar6;
  undefined8 local_40;
  undefined *puStack_38;
  
  lVar2 = FUN_001511d0(param_1,0xfff0b9d6);
  lVar3 = FUN_001511d0(param_1,1);
  lVar3 = *(long *)(lVar3 + ((ulong)(uint)-(int)lVar3 & 7));
  if ((DAT_043e8090 != '\0') && (iVar1 = FUN_00155630(param_1,1,"class_cast"), iVar1 != 0)) {
    pcVar6 = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar4 = FUN_024dd3bc();
    lVar3 = (*pcVar6)(lVar3,uVar4);
    FUN_0014ff10(param_1,0xfffffffe);
  }
  pcVar6 = *(code **)(lVar2 + 0x68);
  if ((*(ulong *)(lVar2 + 0x70) & 1) != 0) {
    pcVar6 = *(code **)(pcVar6 + *(long *)(lVar3 + ((long)*(ulong *)(lVar2 + 0x70) >> 1)));
  }
  uVar4 = (*pcVar6)();
  FUN_0014ff10(param_1,0);
  FUN_024d1b20();
  puStack_38 = DAT_043e7ba0;
  if ((DAT_043e7b90 & 1) == 0) {
    puStack_38 = &DAT_043e7b91;
  }
  local_40 = param_1;
  puVar5 = (undefined8 *)FUN_024dd480(param_1);
  *puVar5 = uVar4;
  FUN_024dd5c4(&local_40);
  return;
}


