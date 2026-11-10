/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 016db590; name: FUN_016db590
 */


void FUN_016db590(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined8 local_40;
  undefined *puStack_38;
  
  lVar2 = FUN_001511d0(param_1,0xfff0b9d6);
  lVar3 = FUN_001511d0(param_1,1);
  uVar7 = *(undefined8 *)(lVar3 + ((ulong)(uint)-(int)lVar3 & 7));
  if ((*PTR_DAT_043801f0 != '\0') && (iVar1 = FUN_00155630(param_1,1,"class_cast"), iVar1 != 0)) {
    pcVar5 = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar6 = FUN_015cf7ec();
    uVar7 = (*pcVar5)(uVar7,uVar6);
    FUN_0014ff10(param_1,0xfffffffe);
  }
  local_40 = 0;
  auVar8 = FUN_016db44c(param_1,&local_40,lVar2 + 0x80,uVar7);
  FUN_0014ff10(param_1,0);
  FUN_016ca614();
  puStack_38 = DAT_043cc918;
  if ((DAT_043cc908 & 1) == 0) {
    puStack_38 = &DAT_043cc909;
  }
  local_40 = param_1;
  pauVar4 = (undefined1 (*) [16])FUN_016cccf0(param_1);
  *pauVar4 = auVar8;
  FUN_016ccee8(&local_40);
  return;
}


