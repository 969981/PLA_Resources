/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02346e18; name: FUN_02346e18
 */


void FUN_02346e18(undefined8 param_1)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  code *pcVar6;
  
  lVar3 = FUN_001511d0(param_1,0xfff0b9d6);
  lVar4 = FUN_001511d0(param_1,1);
  lVar4 = *(long *)(lVar4 + ((ulong)(uint)-(int)lVar4 & 7));
  if ((*PTR_DAT_04385ee8 != '\0') && (iVar2 = FUN_00155630(param_1,1,"class_cast"), iVar2 != 0)) {
    pcVar6 = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar5 = FUN_0220a16c();
    lVar4 = (*pcVar6)(lVar4,uVar5);
    FUN_0014ff10(param_1,0xfffffffe);
  }
  iVar2 = FUN_00150cc0(param_1,2);
  pcVar6 = *(code **)(lVar3 + 0xe0);
  plVar1 = (long *)(lVar4 + ((long)*(ulong *)(lVar3 + 0xe8) >> 1));
  if ((*(ulong *)(lVar3 + 0xe8) & 1) != 0) {
    pcVar6 = *(code **)(pcVar6 + *plVar1);
  }
  (*pcVar6)(plVar1,iVar2 != 0);
  FUN_0014ff10(param_1,0);
  return;
}


