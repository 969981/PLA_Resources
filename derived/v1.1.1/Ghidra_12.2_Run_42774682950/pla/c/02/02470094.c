/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02470094; name: FUN_02470094
 */


void FUN_02470094(undefined8 param_1)

{
  int iVar1;
  undefined1 (*pauVar2) [16];
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  undefined1 auStack_b0 [128];
  
  lVar3 = FUN_001511d0(param_1,0xfff0b9d6);
  lVar4 = FUN_001511d0(param_1,1);
  lVar4 = *(long *)(lVar4 + ((ulong)(uint)-(int)lVar4 & 7));
  if ((*PTR_DAT_04387418 != '\0') && (iVar1 = FUN_00155630(param_1,1,"class_cast"), iVar1 != 0)) {
    pcVar6 = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar5 = FUN_0246e0dc();
    lVar4 = (*pcVar6)(lVar4,uVar5);
    FUN_0014ff10(param_1,0xfffffffe);
  }
  pcVar6 = *(code **)(lVar3 + 0x248);
  if ((*(ulong *)(lVar3 + 0x250) & 1) != 0) {
    pcVar6 = *(code **)(pcVar6 + *(long *)(lVar4 + ((long)*(ulong *)(lVar3 + 0x250) >> 1)));
  }
  auVar7 = (*pcVar6)();
  FUN_0014ff10(param_1,0);
  FUN_00fae7c8();
  pauVar2 = (undefined1 (*) [16])FUN_00faea20(param_1);
  *pauVar2 = auVar7;
  FUN_00faec34(auStack_b0 + 0x80);
  return;
}


