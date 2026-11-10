/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e77240; name: FUN_02e77240
 */


undefined8
FUN_02e77240(char *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
            undefined8 param_5,int param_6,undefined8 param_7,undefined4 param_8)

{
  uint uVar1;
  size_t sVar2;
  undefined8 uVar3;
  byte *pbVar5;
  byte *pbVar4;
  size_t sVar6;
  long *plVar7;
  ulong __n;
  long local_180;
  undefined8 local_178;
  undefined4 local_170;
  byte local_16c [268];
  
  plVar7 = &local_180;
  if (param_6 == 0) {
    plVar7 = (long *)0x0;
  }
  else {
    local_178 = 0;
    local_170 = 0;
    local_180 = FUN_02e76f2c(param_6,param_7);
    if (local_180 == 0) {
      return 0;
    }
  }
  if (param_1 == (char *)0x0) {
    uVar1 = 0;
  }
  else {
    sVar2 = strlen(param_1);
    __n = sVar2 + 1;
    if (0x102 < __n) {
      __n = 0x103;
    }
    strncpy((char *)local_16c,param_1,__n);
    local_16c[__n] = 0;
    sVar2 = strlen(param_1);
    if (sVar2 != 0) {
      pbVar5 = local_16c;
      sVar6 = sVar2;
      do {
        if (*pbVar5 - 0x41 < 0x1a) {
          *pbVar5 = *pbVar5 + 0x20;
        }
        sVar6 = sVar6 - 1;
        pbVar5 = pbVar5 + 1;
      } while (sVar6 != 0);
    }
    uVar1 = 0x811c9dc5;
    if ((int)sVar2 != 0) {
      pbVar5 = local_16c;
      do {
        pbVar4 = pbVar5 + 1;
        uVar1 = uVar1 * 0x1000193 ^ (uint)*pbVar5;
        pbVar5 = pbVar4;
      } while (pbVar4 < local_16c + (sVar2 & 0xffffffff));
    }
  }
  uVar3 = FUN_02e77020(uVar1,param_2,param_3,param_4,param_5,plVar7,param_8);
  if ((param_6 != 0) && ((int)uVar3 == 0)) {
    FUN_02e771a8(local_180);
    uVar3 = 0;
  }
  return uVar3;
}


