/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0086ebc4; name: FUN_0086ebc4
 */


undefined8 FUN_0086ebc4(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_60 [16];
  undefined4 local_50 [4];
  int local_40 [4];
  undefined4 local_28;
  undefined4 local_24;
  
  if (*(int *)(param_1 + 0x40) == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = 0;
    if (*(long *)(param_1 + 0x38) != 0) {
      lVar2 = *(long *)(param_1 + 0x38) + 0x10;
    }
  }
  local_24 = 0;
  local_40[0] = 0;
  local_50[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_50);
  FUN_0086fb04(auStack_60,lVar2 + 0x20,local_50,&local_28,0x10);
  FUN_007ee660(local_40,auStack_60);
  uVar1 = 0;
  if (local_40[0] == 0) {
    FUN_007ebf54(auStack_60,*(undefined8 *)(param_1 + 0x20),local_50,local_28,lVar2,&local_24);
    FUN_007ee660(local_40,auStack_60);
    if (local_40[0] == 0) {
      FUN_007e34a4(lVar2);
      FUN_007e8fec(param_1 + 0x30,lVar2 + -0x10);
      FUN_007e8fc4(param_1 + 0x48,param_1 + 0x48,lVar2 + -0x10 + (long)*(int *)(param_1 + 0x5c));
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}


