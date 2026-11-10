/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ef2f28; name: FUN_02ef2f28
 */


void FUN_02ef2f28(undefined8 param_1,undefined8 param_2,long *param_3,uint param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  uint local_44;
  
  local_44 = param_4;
  lVar1 = FUN_02ef2a30(param_2);
  if (lVar1 != 0) {
    if (param_4 != 0) {
      uVar3 = (ulong)param_4;
      plVar4 = param_3;
      do {
        if (*plVar4 != -1) {
          FUN_02ef2fe4(param_1);
        }
        uVar3 = uVar3 - 1;
        plVar4 = plVar4 + 2;
      } while (uVar3 != 0);
    }
    FUN_02ea75b4(lVar1,param_3,&local_44);
    lVar2 = FUN_02e52664(param_2);
    if (lVar2 != 0) {
      *(byte *)(lVar2 + 0x54) = *(byte *)(lVar2 + 0x54) | 1;
      FUN_02ef2c4c(lVar2 + 0x20,lVar1 + 0xa0);
    }
  }
  return;
}


