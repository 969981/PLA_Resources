/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 021e5c5c; name: FUN_021e5c5c
 */


void FUN_021e5c5c(undefined8 param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 local_28;
  
  lVar3 = FUN_001511d0(param_1,0xfff0b9d6);
  lVar4 = FUN_001511d0(param_1,1);
  local_28 = *(undefined8 *)(lVar4 + ((ulong)(uint)-(int)lVar4 & 7));
  uVar6 = local_28;
  if (*PTR_DAT_04384ca0 != '\0') {
    iVar1 = FUN_00155630(param_1,1,"class_cast");
    if (iVar1 == 0) {
      uVar6 = local_28;
    }
    else {
      pcVar5 = (code *)FUN_001511d0(param_1,0xffffffff);
      uVar6 = FUN_020fa72c();
      uVar6 = (*pcVar5)(local_28,uVar6);
      FUN_0014ff10(param_1,0xfffffffe);
    }
  }
  local_28 = 0;
  uVar2 = FUN_021e5d94(param_1,&local_28,lVar3 + 0x110,uVar6);
  FUN_0014ff10(param_1,0);
  FUN_001517e0(param_1,uVar2 & 1);
  return;
}


