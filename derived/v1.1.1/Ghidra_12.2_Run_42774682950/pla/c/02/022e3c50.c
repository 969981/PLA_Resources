/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 022e3c50; name: FUN_022e3c50
 */


void FUN_022e3c50(undefined8 param_1,long *param_2,long param_3)

{
  double dVar1;
  int iVar2;
  long lVar3;
  byte *pbVar4;
  long *plVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 local_50;
  byte *pbStack_48;
  
  lVar3 = FUN_001511d0(param_1,2);
  uVar8 = *(undefined8 *)(lVar3 + ((ulong)(uint)-(int)lVar3 & 7));
  if ((*PTR_DAT_0437c708 != '\0') && (iVar2 = FUN_00155630(param_1,2,"class_cast"), iVar2 != 0)) {
    pcVar7 = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar6 = FUN_00ea12ac();
    uVar8 = (*pcVar7)(uVar8,uVar6);
    FUN_0014ff10(param_1,0xfffffffe);
  }
  dVar1 = (double)FUN_00150a90(param_1,3,0);
  pcVar7 = (code *)*param_2;
  plVar5 = (long *)(param_3 + (param_2[1] >> 1));
  if ((param_2[1] & 1U) != 0) {
    pcVar7 = *(code **)(pcVar7 + *plVar5);
  }
  lVar3 = (*pcVar7)((float)dVar1,plVar5,uVar8);
  FUN_0014ff10(param_1,0);
  pbVar4 = (byte *)FUN_00fb7358();
  pbStack_48 = *(byte **)(pbVar4 + 0x10);
  if ((*pbVar4 & 1) == 0) {
    pbStack_48 = pbVar4 + 1;
  }
  local_50 = param_1;
  if (lVar3 == 0) {
    FUN_00151490(param_1);
  }
  else {
    plVar5 = (long *)FUN_00fc1700();
    *plVar5 = lVar3;
    FUN_00fc1848(&local_50);
  }
  return;
}


