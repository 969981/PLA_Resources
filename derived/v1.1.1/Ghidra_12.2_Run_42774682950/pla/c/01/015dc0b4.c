/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 015dc0b4; name: FUN_015dc0b4
 */


void FUN_015dc0b4(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  code *pcVar6;
  undefined1 auStack_b0 [128];
  
  lVar2 = FUN_001511d0(param_1,0xfff0b9d6);
  lVar3 = FUN_001511d0(param_1,1);
  lVar3 = *(long *)(lVar3 + ((ulong)(uint)-(int)lVar3 & 7));
  if ((*PTR_DAT_0437fd68 != '\0') && (iVar1 = FUN_00155630(param_1,1,"class_cast"), iVar1 != 0)) {
    pcVar6 = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar4 = FUN_015be36c();
    lVar3 = (*pcVar6)(lVar3,uVar4);
    FUN_0014ff10(param_1,0xfffffffe);
  }
  pcVar6 = *(code **)(lVar2 + 0x130);
  if ((*(ulong *)(lVar2 + 0x138) & 1) != 0) {
    pcVar6 = *(code **)(pcVar6 + *(long *)(lVar3 + ((long)*(ulong *)(lVar2 + 0x138) >> 1)));
  }
  uVar4 = (*pcVar6)();
  FUN_0014ff10(param_1,0);
  FUN_00e193bc();
  puVar5 = (undefined8 *)FUN_00e337a0(param_1);
  *puVar5 = uVar4;
  FUN_00e339b4(auStack_b0 + 0x80);
  return;
}


