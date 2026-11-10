/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01016360; name: FUN_01016360
 */


void FUN_01016360(undefined8 param_1,long *param_2,long param_3)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  float fVar7;
  
  lVar3 = FUN_001511d0(param_1,2);
  uVar5 = *(undefined8 *)(lVar3 + ((ulong)(uint)-(int)lVar3 & 7));
  if ((*PTR_DAT_0437c708 != '\0') && (iVar2 = FUN_00155630(param_1,2,"class_cast"), iVar2 != 0)) {
    pcVar6 = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar4 = FUN_00ea12ac();
    uVar5 = (*pcVar6)(uVar5,uVar4);
    FUN_0014ff10(param_1,0xfffffffe);
  }
  pcVar6 = (code *)*param_2;
  plVar1 = (long *)(param_3 + (param_2[1] >> 1));
  if ((param_2[1] & 1U) != 0) {
    pcVar6 = *(code **)(pcVar6 + *plVar1);
  }
  fVar7 = (float)(*pcVar6)(plVar1,uVar5);
  FUN_0014ff10(param_1,0);
  FUN_001514b0((double)fVar7,param_1);
  return;
}


