/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00f2da80; name: FUN_00f2da80
 */


undefined8 FUN_00f2da80(undefined8 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  iVar1 = FUN_00150310();
  if (iVar1 == 0) {
    *param_3 = 1;
    uVar5 = 0;
    param_3[1] = param_3[1] + 1;
  }
  else {
    lVar2 = FUN_001511d0(param_1,param_2);
    *param_3 = 1;
    param_3[1] = param_3[1] + 1;
    uVar5 = *(undefined8 *)(lVar2 + ((ulong)(uint)-(int)lVar2 & 7));
    if ((*PTR_DAT_0437d560 != '\0') &&
       (iVar1 = FUN_00155630(param_1,param_2,"class_cast"), iVar1 != 0)) {
      pcVar3 = (code *)FUN_001511d0(param_1,0xffffffff);
      uVar4 = FUN_00f2db5c();
      uVar5 = (*pcVar3)(uVar5,uVar4);
      FUN_0014ff10(param_1,0xfffffffe);
    }
  }
  return uVar5;
}


