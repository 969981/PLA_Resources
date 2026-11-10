/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 017707e0; name: FUN_017707e0
 */


void FUN_017707e0(undefined8 param_1,long *param_2,long param_3)

{
  long *plVar1;
  undefined1 uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  
  lVar4 = FUN_001511d0(param_1,2);
  uVar6 = *(undefined8 *)(lVar4 + ((ulong)(uint)-(int)lVar4 & 7));
  if ((*PTR_DAT_0437acb0 != '\0') && (iVar3 = FUN_00155630(param_1,2,"class_cast"), iVar3 != 0)) {
    pcVar7 = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar5 = FUN_00b4fc10();
    uVar6 = (*pcVar7)(uVar6,uVar5);
    FUN_0014ff10(param_1,0xfffffffe);
  }
  pcVar7 = (code *)*param_2;
  plVar1 = (long *)(param_3 + (param_2[1] >> 1));
  if ((param_2[1] & 1U) != 0) {
    pcVar7 = *(code **)(pcVar7 + *plVar1);
  }
  uVar2 = (*pcVar7)(plVar1,uVar6);
  FUN_0014ff10(param_1,0);
  FUN_001514d0(param_1,uVar2);
  return;
}


