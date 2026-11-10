/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02374ec0; name: FUN_02374ec0
 */


void FUN_02374ec0(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 local_40;
  byte *pbStack_38;
  
  lVar2 = FUN_001511d0(param_1,1);
  uVar3 = *(undefined8 *)(lVar2 + ((ulong)(uint)-(int)lVar2 & 7));
  if ((*PTR_DAT_04382aa0 != '\0') && (iVar1 = FUN_00155630(param_1,1,"class_cast"), iVar1 != 0)) {
    pcVar5 = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar6 = FUN_01e18dfc();
    uVar3 = (*pcVar5)(uVar3,uVar6);
    FUN_0014ff10(param_1,0xfffffffe);
  }
  lVar2 = (*(code *)*param_2)(uVar3);
  FUN_0014ff10(param_1,0);
  pbStack_38 = (byte *)FUN_01038008();
  if ((*pbStack_38 & 1) == 0) {
    pbStack_38 = pbStack_38 + 1;
  }
  else {
    pbStack_38 = *(byte **)(pbStack_38 + 0x10);
  }
  local_40 = param_1;
  if (lVar2 == 0) {
    FUN_00151490(param_1);
  }
  else {
    plVar4 = (long *)FUN_021c68d0();
    *plVar4 = lVar2;
    FUN_021c6a1c(&local_40);
  }
  return;
}


