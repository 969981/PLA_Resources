/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00120860; name: FUN_00120860
 */


long FUN_00120860(byte *param_1,long param_2,long param_3,long param_4,undefined8 param_5,
                 undefined8 param_6)

{
  uint uVar1;
  long lVar2;
  byte *pbVar3;
  uint uVar4;
  undefined1 auStack_68 [8];
  long local_60;
  long local_58;
  
  if (5 < param_2) {
    uVar1 = *param_1 & 0x7f;
    if (1 < uVar1) {
      if ((char)*param_1 < '\0') {
        lVar2 = FUN_0011f790(param_1,param_1 + param_2,param_3,param_3 + param_4,&local_58,&local_60
                             ,1,auStack_68,1,param_5,param_6);
        if (-1 < lVar2) {
          if (local_60 != param_4) {
            lVar2 = -1;
          }
          return lVar2;
        }
      }
      else {
        uVar4 = 0;
        pbVar3 = param_1 + 1;
        local_58 = param_3;
        while (lVar2 = FUN_00120660(&local_58,pbVar3,param_1 + param_2,&local_60,
                                    (param_3 + param_4) - local_58,1,param_5,param_6), -1 < lVar2) {
          uVar4 = uVar4 + 1;
          pbVar3 = pbVar3 + lVar2;
          local_58 = local_58 + local_60;
          if (uVar1 <= uVar4) {
            lVar2 = -1;
            if (local_58 == param_3 + param_4) {
              lVar2 = (long)pbVar3 - (long)param_1;
            }
            return lVar2;
          }
        }
      }
    }
  }
  return -1;
}


