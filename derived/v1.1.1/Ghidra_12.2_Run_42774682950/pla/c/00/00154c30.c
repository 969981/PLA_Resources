/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00154c30; name: FUN_00154c30
 */


long FUN_00154c30(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  int iVar2;
  void *__dest;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  uVar4 = param_1[2];
  if (param_1[1] - uVar4 < param_2) {
    uVar5 = param_1[1] * 2;
    uVar6 = param_1[3];
    uVar1 = uVar4 + param_2;
    if (param_2 <= uVar5 - uVar4) {
      uVar1 = uVar5;
    }
    if (uVar1 < uVar4 || uVar1 - uVar4 < param_2) {
      FUN_00154110(uVar6,"buffer too large");
    }
    if ((undefined8 *)*param_1 == param_1 + 4) {
      puVar3 = (undefined8 *)FUN_00153520(uVar6,0x10);
      *puVar3 = 0;
      puVar3[1] = 0;
      iVar2 = FUN_00154450(uVar6,"LUABOX");
      if (iVar2 != 0) {
        FUN_001516f0(uVar6,&LAB_001560f0,0);
        FUN_00152550(uVar6,0xfffffffe,&DAT_0392da3c);
      }
      FUN_00152ae0(uVar6,0xfffffffe);
      __dest = (void *)FUN_00154d50(uVar6,0xffffffff,uVar1);
      memcpy(__dest,(void *)*param_1,param_1[2]);
    }
    else {
      __dest = (void *)FUN_00154d50(uVar6,0xffffffff,uVar1);
    }
    uVar4 = param_1[2];
    *param_1 = __dest;
    param_1[1] = uVar1;
  }
  else {
    __dest = (void *)*param_1;
  }
  return (long)__dest + uVar4;
}


