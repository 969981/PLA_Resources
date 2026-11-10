/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 022be9c4; name: FUN_022be9c4
 */


void FUN_022be9c4(undefined8 param_1)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  undefined8 uVar6;
  
  lVar3 = FUN_001511d0(param_1,0xfff0b9d6);
  lVar4 = FUN_001511d0(param_1,1);
  lVar4 = *(long *)(lVar4 + ((ulong)(uint)-(int)lVar4 & 7));
  if ((*PTR_DAT_043865d8 != '\0') && (iVar2 = FUN_00155630(param_1,1,"class_cast"), iVar2 != 0)) {
    pcVar5 = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar6 = FUN_022bd9b4();
    lVar4 = (*pcVar5)(lVar4,uVar6);
    FUN_0014ff10(param_1,0xfffffffe);
  }
  uVar6 = FUN_00150ba0(param_1,2,0);
  pcVar5 = *(code **)(lVar3 + 0x110);
  plVar1 = (long *)(lVar4 + ((long)*(ulong *)(lVar3 + 0x118) >> 1));
  if ((*(ulong *)(lVar3 + 0x118) & 1) != 0) {
    pcVar5 = *(code **)(pcVar5 + *plVar1);
  }
  (*pcVar5)(plVar1,uVar6);
  FUN_0014ff10(param_1,0);
  return;
}


