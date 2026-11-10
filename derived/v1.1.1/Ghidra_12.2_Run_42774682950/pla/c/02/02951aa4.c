/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02951aa4; name: FUN_02951aa4
 */


uint FUN_02951aa4(long param_1,undefined4 param_2,uint param_3,byte param_4)

{
  uint uVar1;
  byte *pbVar2;
  char *pcVar3;
  uint uVar4;
  
  switch(param_2) {
  case 1:
  case 3:
    pcVar3 = (char *)(param_1 + 0x2e4);
    pbVar2 = (byte *)(param_1 + 0x2e7);
    break;
  case 2:
  case 4:
    pcVar3 = (char *)(param_1 + 0x2e5);
    pbVar2 = (byte *)(param_1 + 0x2e8);
    break;
  case 5:
  case 6:
  case 7:
    pcVar3 = (char *)(param_1 + 0x2e6);
    pbVar2 = (byte *)(param_1 + 0x2e9);
    break;
  default:
    return 0;
  }
  if (*pcVar3 < '\x01') {
    uVar1 = 0;
  }
  else {
    uVar4 = (uint)*pcVar3;
    uVar1 = uVar4;
    if ((int)(param_3 & 0xff) <= (int)uVar4) {
      uVar1 = param_3;
    }
    *pcVar3 = (char)(uVar4 - uVar1);
    if ((uVar4 - uVar1 & 0xff) == 1) {
      *pbVar2 = 0;
      return uVar1;
    }
  }
  if ((int)(char)*pbVar2 < (int)(uint)param_4) {
    *pbVar2 = param_4;
  }
  return uVar1;
}


