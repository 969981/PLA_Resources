/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007ec638; name: FUN_007ec638
 */


void FUN_007ec638(undefined8 param_1,long param_2,ushort *param_3,undefined8 param_4,int param_5)

{
  long lVar1;
  ulong uVar2;
  undefined4 local_28 [4];
  undefined4 local_18 [2];
  
  *(ushort **)(param_2 + 8) = param_3;
  *(int *)(param_2 + 0x18) = param_5;
  if (param_5 == 2) {
    uVar2 = (ulong)*param_3;
    if (*param_3 != 0) {
      uVar2 = 0;
      do {
        lVar1 = uVar2 + 2;
        uVar2 = uVar2 + 2;
      } while (*(short *)((long)param_3 + lVar1) != 0);
    }
  }
  else if (param_5 == 1) {
    uVar2 = (ulong)(byte)*param_3;
    if ((byte)*param_3 != 0) {
      uVar2 = 0;
      do {
        lVar1 = uVar2 + 1;
        uVar2 = uVar2 + 1;
      } while (*(byte *)((long)param_3 + lVar1) != 0);
    }
  }
  else {
    uVar2 = 0;
  }
  *(int *)(param_2 + 0x14) = (int)uVar2;
  local_28[0] = 0;
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_28 | 4),(Result *)local_18);
  FUN_007ee578(param_1,local_28);
  return;
}


