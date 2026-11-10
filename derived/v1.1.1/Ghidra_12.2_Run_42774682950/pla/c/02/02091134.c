/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02091134; name: FUN_02091134
 */


void FUN_02091134(undefined8 param_1)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  
  lVar5 = FUN_001511d0(param_1,0xfff0b9d6);
  lVar6 = FUN_001511d0(param_1,1);
  lVar6 = *(long *)(lVar6 + ((ulong)(uint)-(int)lVar6 & 7));
  if ((*PTR_DAT_043811b8 != '\0') && (iVar3 = FUN_00155630(param_1,1,"class_cast"), iVar3 != 0)) {
    pcVar7 = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar4 = FUN_017a5d10();
    lVar6 = (*pcVar7)(lVar6,uVar4);
    FUN_0014ff10(param_1,0xfffffffe);
  }
  uVar4 = FUN_00150ba0(param_1,2,0);
  pcVar7 = *(code **)(lVar5 + 0x430);
  plVar1 = (long *)(lVar6 + ((long)*(ulong *)(lVar5 + 0x438) >> 1));
  if ((*(ulong *)(lVar5 + 0x438) & 1) != 0) {
    pcVar7 = *(code **)(pcVar7 + *plVar1);
  }
  uVar2 = (*pcVar7)(plVar1,uVar4);
  FUN_0014ff10(param_1,0);
  FUN_001517e0(param_1,uVar2 & 1);
  return;
}


