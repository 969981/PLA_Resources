/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02022420; name: FUN_02022420
 */


void FUN_02022420(undefined8 param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  long local_28;
  
  lVar2 = FUN_001511d0(param_1,1);
  local_28 = *(long *)(lVar2 + ((ulong)(uint)-(int)lVar2 & 7));
  lVar2 = local_28;
  if (*PTR_DAT_04382f38 != '\0') {
    iVar1 = FUN_00155630(param_1,1,"class_cast");
    if (iVar1 == 0) {
      lVar2 = local_28;
    }
    else {
      pcVar3 = (code *)FUN_001511d0(param_1,0xffffffff);
      uVar4 = FUN_01edc69c();
      lVar2 = (*pcVar3)(local_28,uVar4);
      FUN_0014ff10(param_1,0xfffffffe);
    }
  }
  local_28 = 0;
  uVar4 = FUN_02022520(param_1,3,&local_28);
  *(undefined8 *)(lVar2 + *param_2) = uVar4;
  FUN_0014ff10(param_1,0);
  return;
}


