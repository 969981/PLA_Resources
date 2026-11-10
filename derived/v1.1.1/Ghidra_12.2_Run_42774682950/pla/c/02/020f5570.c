/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 020f5570; name: FUN_020f5570
 */


void FUN_020f5570(undefined8 param_1,long *param_2,long param_3)

{
  long *plVar1;
  double dVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined8 uVar7;
  
  lVar4 = FUN_001511d0(param_1,2);
  uVar7 = *(undefined8 *)(lVar4 + ((ulong)(uint)-(int)lVar4 & 7));
  if ((*PTR_DAT_0437c708 != '\0') && (iVar3 = FUN_00155630(param_1,2,"class_cast"), iVar3 != 0)) {
    pcVar6 = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar5 = FUN_00ea12ac();
    uVar7 = (*pcVar6)(uVar7,uVar5);
    FUN_0014ff10(param_1,0xfffffffe);
  }
  dVar2 = (double)FUN_00150a90(param_1,3,0);
  pcVar6 = (code *)*param_2;
  plVar1 = (long *)(param_3 + (param_2[1] >> 1));
  if ((param_2[1] & 1U) != 0) {
    pcVar6 = *(code **)(pcVar6 + *plVar1);
  }
  (*pcVar6)((float)dVar2,plVar1,uVar7);
  FUN_0014ff10(param_1,0);
  return;
}


