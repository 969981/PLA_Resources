/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e76930; name: FUN_02e76930
 */


undefined8 FUN_02e76930(char *param_1,undefined8 param_2)

{
  size_t sVar1;
  size_t sVar2;
  undefined8 uVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte local_144 [260];
  
  if (param_1 == (char *)0x0) {
LAB_02e76a14:
    uVar3 = 0xf;
  }
  else {
    sVar1 = strlen(param_1);
    sVar2 = 0x103;
    if (sVar1 + 1 < 0x103) {
      sVar2 = sVar1 + 1;
    }
    strncpy((char *)local_144,param_1,sVar2);
    local_144[sVar2] = 0;
    sVar2 = strlen(param_1);
    if (sVar2 != 0) {
      pbVar5 = local_144;
      sVar1 = sVar2;
      do {
        if (*pbVar5 - 0x41 < 0x1a) {
          *pbVar5 = *pbVar5 + 0x20;
        }
        sVar1 = sVar1 - 1;
        pbVar5 = pbVar5 + 1;
      } while (sVar1 != 0);
    }
    uVar4 = 0x811c9dc5;
    if ((int)sVar2 != 0) {
      pbVar5 = local_144;
      do {
        pbVar6 = pbVar5 + 1;
        uVar4 = uVar4 * 0x1000193 ^ (uint)*pbVar5;
        pbVar5 = pbVar6;
      } while (pbVar6 < local_144 + (sVar2 & 0xffffffff));
      if (uVar4 == 0) goto LAB_02e76a14;
    }
    FUN_02e768c0(uVar4,param_2);
    uVar3 = 1;
  }
  return uVar3;
}


