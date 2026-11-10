/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00fae550; name: FUN_00fae550
 */


void FUN_00fae550(undefined8 param_1)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  
  lVar3 = FUN_001511d0(param_1,0xfff0b9d6);
  lVar4 = FUN_001511d0(param_1,1);
  lVar4 = *(long *)(lVar4 + ((ulong)(uint)-(int)lVar4 & 7));
  if ((*PTR_DAT_0437da50 != '\0') && (iVar2 = FUN_00155630(param_1,1,"class_cast"), iVar2 != 0)) {
    pcVar5 = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar6 = FUN_00fad1e8();
    lVar4 = (*pcVar5)(lVar4,uVar6);
    FUN_0014ff10(param_1,0xfffffffe);
  }
  lVar7 = FUN_001511d0(param_1,2);
  uVar6 = *(undefined8 *)(lVar7 + ((ulong)(uint)-(int)lVar7 & 7));
  if ((*PTR_DAT_0437da68 != '\0') && (iVar2 = FUN_00155630(param_1,2,"class_cast"), iVar2 != 0)) {
    pcVar5 = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar8 = FUN_00fadcb8();
    uVar6 = (*pcVar5)(uVar6,uVar8);
    FUN_0014ff10(param_1,0xfffffffe);
  }
  pcVar5 = *(code **)(lVar3 + 200);
  plVar1 = (long *)(lVar4 + ((long)*(ulong *)(lVar3 + 0xd0) >> 1));
  if ((*(ulong *)(lVar3 + 0xd0) & 1) != 0) {
    pcVar5 = *(code **)(pcVar5 + *plVar1);
  }
  (*pcVar5)(plVar1,uVar6);
  FUN_0014ff10(param_1,0);
  return;
}


