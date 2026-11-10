/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003234c0; name: FUN_003234c0
 */


byte * FUN_003234c0(undefined8 param_1,byte *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  byte *pbVar3;
  
  pbVar3 = param_2 + 1;
  uVar1 = (uint)*param_2;
  if ((char)*param_2 < '\0') {
    uVar1 = (uVar1 + (uint)*pbVar3 * 0x80) - 0x80;
    if ((char)*pbVar3 < '\0') {
      uVar1 = (uVar1 + (uint)param_2[2] * 0x4000) - 0x4000;
      if ((char)param_2[2] < '\0') {
        uVar1 = (uVar1 + (uint)param_2[3] * 0x200000) - 0x200000;
        if ((char)param_2[3] < '\0') {
          if ((7 < param_2[4]) ||
             (uVar1 = uVar1 + (uint)param_2[4] * 0x10000000 + 0xf0000000, 0x7fffffef < uVar1)) {
            return (byte *)0x0;
          }
          pbVar3 = param_2 + 5;
          goto LAB_003234fc;
        }
        lVar2 = 3;
      }
      else {
        lVar2 = 2;
      }
    }
    else {
      lVar2 = 1;
    }
    pbVar3 = param_2 + lVar2 + 1;
  }
LAB_003234fc:
  lVar2 = (long)(int)uVar1;
  if ((*(long *)(param_3 + 8) - (long)pbVar3) + 0x10 < lVar2) {
    pbVar3 = (byte *)FUN_00322ab0(param_3,pbVar3,uVar1);
    return pbVar3;
  }
  FUN_00291910(param_1,pbVar3,lVar2);
  return pbVar3 + lVar2;
}


