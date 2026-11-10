/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00f4ed64; name: FUN_00f4ed64
 */


undefined8 FUN_00f4ed64(undefined8 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar2 = FUN_001511d0();
  *param_3 = 1;
  param_3[1] = param_3[1] + 1;
  uVar5 = *(undefined8 *)(lVar2 + ((ulong)(uint)-(int)lVar2 & 7));
  if ((*PTR_DAT_0437d658 != '\0') &&
     (iVar1 = FUN_00155630(param_1,param_2,"class_cast",param_3), iVar1 != 0)) {
    pcVar3 = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar4 = FUN_00f4ee48();
    uVar5 = (*pcVar3)(uVar5,uVar4);
    FUN_0014ff10(param_1,0xfffffffe);
  }
  return uVar5;
}


