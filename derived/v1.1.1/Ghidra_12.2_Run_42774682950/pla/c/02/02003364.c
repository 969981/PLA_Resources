/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02003364; name: FUN_02003364
 */


void FUN_02003364(undefined8 param_1,long *param_2)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  code *pcVar5;
  
  lVar3 = FUN_001511d0(param_1,1);
  lVar3 = *(long *)(lVar3 + ((ulong)(uint)-(int)lVar3 & 7));
  if ((*PTR_DAT_043815e8 != '\0') && (iVar2 = FUN_00155630(param_1,1,"class_cast"), iVar2 != 0)) {
    pcVar5 = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar4 = FUN_017c36bc();
    lVar3 = (*pcVar5)(lVar3,uVar4);
    FUN_0014ff10(param_1,0xfffffffe);
  }
  iVar2 = FUN_00150cc0(param_1,2);
  pcVar5 = (code *)*param_2;
  plVar1 = (long *)(lVar3 + (param_2[1] >> 1));
  if ((param_2[1] & 1U) != 0) {
    pcVar5 = *(code **)(pcVar5 + *plVar1);
  }
  (*pcVar5)(plVar1,iVar2 != 0);
  FUN_0014ff10(param_1,0);
  return;
}


