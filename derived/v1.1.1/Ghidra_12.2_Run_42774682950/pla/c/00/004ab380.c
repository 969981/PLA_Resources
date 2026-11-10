/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004ab380; name: FUN_004ab380
 */


void FUN_004ab380(byte *param_1,byte *param_2,long param_3,undefined8 param_4,uint *param_5,
                 uint *param_6,int param_7)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint local_48;
  uint local_44;
  
  uVar4 = *param_6;
  if (param_7 == 0) {
    for (; param_3 != 0; param_3 = param_3 + -1) {
      if (uVar4 == 0) {
        uVar3 = (*param_5 & 0xff00ff00) >> 8 | (*param_5 & 0xff00ff) << 8;
        local_48 = uVar3 >> 0x10 | uVar3 << 0x10;
        uVar3 = (param_5[1] & 0xff00ff00) >> 8 | (param_5[1] & 0xff00ff) << 8;
        local_44 = uVar3 >> 0x10 | uVar3 << 0x10;
        FUN_004aa7f0(&local_48,param_4);
        uVar3 = (local_48 & 0xff00ff00) >> 8 | (local_48 & 0xff00ff) << 8;
        *param_5 = uVar3 >> 0x10 | uVar3 << 0x10;
        uVar3 = (local_44 & 0xff00ff00) >> 8 | (local_44 & 0xff00ff) << 8;
        param_5[1] = uVar3 >> 0x10 | uVar3 << 0x10;
      }
      bVar1 = *param_1;
      bVar2 = *(byte *)((long)param_5 + (long)(int)uVar4);
      *(byte *)((long)param_5 + (long)(int)uVar4) = bVar1;
      *param_2 = bVar2 ^ bVar1;
      uVar4 = uVar4 + 1 & 7;
      param_2 = param_2 + 1;
      param_1 = param_1 + 1;
    }
  }
  else {
    for (; param_3 != 0; param_3 = param_3 + -1) {
      if (uVar4 == 0) {
        uVar3 = (*param_5 & 0xff00ff00) >> 8 | (*param_5 & 0xff00ff) << 8;
        local_48 = uVar3 >> 0x10 | uVar3 << 0x10;
        uVar3 = (param_5[1] & 0xff00ff00) >> 8 | (param_5[1] & 0xff00ff) << 8;
        local_44 = uVar3 >> 0x10 | uVar3 << 0x10;
        FUN_004aa7f0(&local_48,param_4);
        uVar3 = (local_48 & 0xff00ff00) >> 8 | (local_48 & 0xff00ff) << 8;
        *param_5 = uVar3 >> 0x10 | uVar3 << 0x10;
        uVar3 = (local_44 & 0xff00ff00) >> 8 | (local_44 & 0xff00ff) << 8;
        param_5[1] = uVar3 >> 0x10 | uVar3 << 0x10;
      }
      bVar1 = *(byte *)((long)param_5 + (long)(int)uVar4) ^ *param_1;
      *param_2 = bVar1;
      *(byte *)((long)param_5 + (long)(int)uVar4) = bVar1;
      uVar4 = uVar4 + 1 & 7;
      param_2 = param_2 + 1;
      param_1 = param_1 + 1;
    }
  }
  *param_6 = uVar4;
  return;
}


