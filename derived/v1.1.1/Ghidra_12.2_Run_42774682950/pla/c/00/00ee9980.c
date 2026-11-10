/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00ee9980; name: FUN_00ee9980
 */


undefined8 FUN_00ee9980(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  byte *pbVar2;
  undefined8 uVar3;
  byte *pbVar4;
  undefined8 uVar5;
  
  pbVar2 = (byte *)FUN_00eeafb0();
  pbVar4 = *(byte **)(pbVar2 + 0x10);
  if ((*pbVar2 & 1) == 0) {
    pbVar4 = pbVar2 + 1;
  }
  FUN_00151a70(param_1,0xfff0b9d8,pbVar4);
  iVar1 = FUN_00150310(param_1,0xffffffff);
  if ((iVar1 == 0) || (iVar1 = FUN_00150750(param_1,0xffffffff,param_2), iVar1 != 1)) {
    uVar5 = 0;
    uVar3 = 0xfffffffe;
  }
  else {
    uVar5 = 1;
    uVar3 = 0xfffffffd;
  }
  FUN_0014ff10(param_1,uVar3);
  return uVar5;
}


