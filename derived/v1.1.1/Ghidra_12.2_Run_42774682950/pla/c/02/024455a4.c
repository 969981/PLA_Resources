/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 024455a4; name: FUN_024455a4
 */


void FUN_024455a4(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 local_28;
  
  lVar2 = FUN_001511d0(param_1,0xfff0b9d6);
  lVar3 = FUN_001511d0(param_1,1);
  local_28 = *(undefined8 *)(lVar3 + ((ulong)(uint)-(int)lVar3 & 7));
  uVar5 = local_28;
  if (*PTR_DAT_04386f18 != '\0') {
    iVar1 = FUN_00155630(param_1,1,"class_cast");
    if (iVar1 == 0) {
      uVar5 = local_28;
    }
    else {
      pcVar4 = (code *)FUN_001511d0(param_1,0xffffffff);
      uVar5 = FUN_0240a4bc();
      uVar5 = (*pcVar4)(local_28,uVar5);
      FUN_0014ff10(param_1,0xfffffffe);
    }
  }
  local_28 = 0;
  iVar1 = FUN_024453b0(param_1,&local_28,lVar2 + 0xf8,uVar5);
  FUN_0014ff10(param_1,0);
  FUN_001514d0(param_1,(long)iVar1);
  return;
}


