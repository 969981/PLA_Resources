/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 023cc3dc; name: FUN_023cc3dc
 */


void FUN_023cc3dc(undefined8 param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined1 auStack_b0 [128];
  
  lVar3 = FUN_001511d0(param_1,0xfff0b9d6);
  lVar4 = FUN_001511d0(param_1,1);
  lVar4 = *(long *)(lVar4 + ((ulong)(uint)-(int)lVar4 & 7));
  if ((*PTR_DAT_04386bc0 != '\0') && (iVar1 = FUN_00155630(param_1,1,"class_cast"), iVar1 != 0)) {
    pcVar6 = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar5 = FUN_023c7a48();
    lVar4 = (*pcVar6)(lVar4,uVar5);
    FUN_0014ff10(param_1,0xfffffffe);
  }
  pcVar6 = *(code **)(lVar3 + 0x100);
  if ((*(ulong *)(lVar3 + 0x108) & 1) != 0) {
    pcVar6 = *(code **)(pcVar6 + *(long *)(lVar4 + ((long)*(ulong *)(lVar3 + 0x108) >> 1)));
  }
  lVar3 = (*pcVar6)();
  FUN_0014ff10(param_1,0);
  FUN_021f8d10();
  if (lVar3 == 0) {
    FUN_00151490(param_1);
  }
  else {
    plVar2 = (long *)FUN_021f8f10();
    *plVar2 = lVar3;
    FUN_021f9058(auStack_b0 + 0x80);
  }
  return;
}


