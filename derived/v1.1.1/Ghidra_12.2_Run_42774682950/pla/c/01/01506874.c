/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01506874; name: FUN_01506874
 */


void FUN_01506874(long param_1,long param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_02c61820(*(undefined8 *)(param_1 + 0x5b8),*(undefined4 *)(param_2 + 4));
  if ((uVar1 & 1) == 0) {
    if (*(int *)(param_2 + 0xc) == 0) {
      puVar2 = &DAT_03a7c2a0;
    }
    else {
      puVar2 = &DAT_03a7c2c0;
    }
    uVar3 = 2;
  }
  else {
    puVar2 = &DAT_03a7c2e0;
    uVar3 = 1;
  }
  FUN_0150755c(param_1,puVar2,uVar3);
  return;
}


