/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0305db4c; name: FUN_0305db4c
 */


void FUN_0305db4c(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  FUN_032beab0(param_1 + 4);
  FUN_032beab0(param_1 + 0x24,param_2);
  FUN_032beab0(param_1 + 0x44,param_2);
  FUN_032beab0(param_1 + 100,param_2);
  FUN_032beab0(param_1 + 0x84,param_2);
  FUN_032beab0(param_1 + 0xa8,param_2);
  FUN_032beab0(param_1 + 200,param_2);
  FUN_032beab0(param_1 + 0xe8,param_2);
  FUN_032beab0(param_1 + 0x108,param_2);
  FUN_032beab0(param_1 + 0x134,param_2);
  FUN_032beab0(param_1 + 0x156,param_2);
  if (0 < (int)param_1[1]) {
    lVar1 = 0;
    lVar2 = 0;
    do {
      lVar3 = *param_1;
      *(undefined8 *)(lVar3 + lVar1) = 0;
      *(undefined4 *)(lVar3 + lVar1 + 0xc) = 0;
      lVar3 = *param_1 + lVar1;
      lVar1 = lVar1 + 0x10;
      *(long *)(param_1[2] + lVar2 * 8) = lVar3;
      lVar2 = lVar2 + 1;
    } while (lVar2 < (int)param_1[1]);
  }
  if (0 < (int)param_1[0xa5]) {
    lVar1 = 0;
    lVar2 = 0;
    do {
      lVar3 = param_1[0xa4];
      *(undefined8 *)(lVar3 + lVar1) = 0;
      *(undefined4 *)(lVar3 + lVar1 + 0xc) = 0;
      lVar3 = param_1[0xa4] + lVar1;
      lVar1 = lVar1 + 0x10;
      *(long *)(param_1[0xa6] + lVar2 * 8) = lVar3;
      lVar2 = lVar2 + 1;
    } while (lVar2 < (int)param_1[0xa5]);
  }
  return;
}


