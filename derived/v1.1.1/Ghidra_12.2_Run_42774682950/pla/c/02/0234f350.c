/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0234f350; name: FUN_0234f350
 */


void FUN_0234f350(undefined8 param_1,char *param_2,int *param_3)

{
  int iVar1;
  byte *pbVar2;
  byte *pbVar3;
  code *pcVar4;
  undefined8 uVar5;
  byte *pbVar6;
  
  if (*param_2 != '\0') {
    return;
  }
  pbVar2 = (byte *)FUN_00fbf578();
  pbVar6 = *(byte **)(pbVar2 + 0x10);
  if ((*pbVar2 & 1) == 0) {
    pbVar6 = pbVar2 + 1;
  }
  pbVar3 = (byte *)FUN_00fc1e40();
  pbVar2 = *(byte **)(pbVar3 + 0x10);
  if ((*pbVar3 & 1) == 0) {
    pbVar2 = pbVar3 + 1;
  }
  FUN_00151a70(param_1,0xfff0b9d8,pbVar6);
  iVar1 = FUN_00150310(param_1,0xffffffff);
  if (iVar1 == 0) {
    uVar5 = 0xfffffffe;
  }
  else {
    FUN_00151a70(param_1,0xffffffff,&DAT_03955ac7);
    iVar1 = FUN_00150310(param_1,0xffffffff);
    if (iVar1 != 0) {
      pcVar4 = (code *)FUN_001510e0(param_1,0xffffffff);
      FUN_0014ff10(param_1,0xfffffffe);
      FUN_0014ff10(param_1,0xfffffffe);
      FUN_00151860(param_1,pbVar2);
      iVar1 = (*pcVar4)(param_1);
      if (iVar1 < 0) {
        return;
      }
      *param_2 = '\x01';
      *param_3 = iVar1;
      return;
    }
    uVar5 = 0xfffffffd;
  }
  FUN_0014ff10(param_1,uVar5);
  return;
}


