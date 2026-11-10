/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ff396c; name: FUN_02ff396c
 */


void FUN_02ff396c(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_40 [32];
  
  if (*(int *)(param_2 + 0x18) == 0) {
    (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(param_1 + 0x18) * 0x200 + 0x18))
              (param_1,&DAT_03aae430,auStack_40);
    FUN_02ffbd5c(param_2,auStack_40,param_3);
    return;
  }
  lVar2 = *(long *)(param_1 + 0x40);
  lVar1 = 0;
  if (lVar2 != 0) {
    lVar1 = lVar2 + param_1 + 0x40;
  }
  lVar3 = *(long *)(param_1 + 0x48);
  lVar2 = 0;
  if (lVar3 != 0) {
    lVar2 = lVar3 + param_1 + 0x48;
  }
  FUN_02f6f07c(lVar1,param_2,lVar2,param_3);
  return;
}


