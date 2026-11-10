/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02446224; name: FUN_02446224
 */


void FUN_02446224(undefined8 param_1)

{
  long *plVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  
  lVar4 = FUN_001511d0(param_1,0xfff0b9d6);
  lVar5 = FUN_001511d0(param_1,1);
  lVar5 = *(long *)(lVar5 + ((ulong)(uint)-(int)lVar5 & 7));
  if ((*PTR_DAT_04386f18 != '\0') && (iVar2 = FUN_00155630(param_1,1,"class_cast"), iVar2 != 0)) {
    pcVar6 = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar3 = FUN_0240a4bc();
    lVar5 = (*pcVar6)(lVar5,uVar3);
    FUN_0014ff10(param_1,0xfffffffe);
  }
  uVar3 = FUN_00150ba0(param_1,2,0);
  pcVar6 = *(code **)(lVar4 + 0x158);
  plVar1 = (long *)(lVar5 + ((long)*(ulong *)(lVar4 + 0x160) >> 1));
  if ((*(ulong *)(lVar4 + 0x160) & 1) != 0) {
    pcVar6 = *(code **)(pcVar6 + *plVar1);
  }
  (*pcVar6)(plVar1,uVar3);
  FUN_0014ff10(param_1,0);
  return;
}


