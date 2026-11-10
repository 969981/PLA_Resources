/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01fdffe4; name: FUN_01fdffe4
 */


void FUN_01fdffe4(undefined8 param_1)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  
  lVar3 = FUN_001511d0(param_1,0xfff0b9d6);
  lVar4 = FUN_001511d0(param_1,1);
  lVar4 = *(long *)(lVar4 + ((ulong)(uint)-(int)lVar4 & 7));
  if ((*PTR_DAT_0437d1f8 != '\0') && (iVar2 = FUN_00155630(param_1,1,"class_cast"), iVar2 != 0)) {
    pcVar8 = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar7 = FUN_00efe95c();
    lVar4 = (*pcVar8)(lVar4,uVar7);
    FUN_0014ff10(param_1,0xfffffffe);
  }
  lVar5 = FUN_001511d0(param_1,2);
  uVar7 = *(undefined8 *)(lVar5 + ((ulong)(uint)-(int)lVar5 & 7));
  if ((*PTR_DAT_043836e0 != '\0') && (iVar2 = FUN_00155630(param_1,2,"class_cast"), iVar2 != 0)) {
    pcVar8 = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar6 = FUN_01fdf8e0();
    uVar7 = (*pcVar8)(uVar7,uVar6);
    FUN_0014ff10(param_1,0xfffffffe);
  }
  pcVar8 = *(code **)(lVar3 + 0x110);
  plVar1 = (long *)(lVar4 + ((long)*(ulong *)(lVar3 + 0x118) >> 1));
  if ((*(ulong *)(lVar3 + 0x118) & 1) != 0) {
    pcVar8 = *(code **)(pcVar8 + *plVar1);
  }
  (*pcVar8)(plVar1,uVar7);
  FUN_0014ff10(param_1,0);
  return;
}


