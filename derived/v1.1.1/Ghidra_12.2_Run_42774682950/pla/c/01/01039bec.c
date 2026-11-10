/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01039bec; name: FUN_01039bec
 */


void FUN_01039bec(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_001511d0(param_1,0xfff0b9d6);
  lVar2 = FUN_001511d0(param_1,0xffffffff);
  if (*PTR_DAT_0437d560 != '\0') {
    uVar5 = *(undefined8 *)(lVar2 + ((ulong)(uint)-(int)lVar2 & 7));
    iVar1 = FUN_00155630(param_1,0xffffffff,"class_cast");
    if (iVar1 != 0) {
      pcVar3 = (code *)FUN_001511d0(param_1,0xffffffff);
      uVar4 = FUN_00f2db5c();
      (*pcVar3)(uVar5,uVar4);
      FUN_0014ff10(param_1,0xfffffffe);
      return;
    }
  }
  return;
}


