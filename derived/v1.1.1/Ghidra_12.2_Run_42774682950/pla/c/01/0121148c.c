/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0121148c; name: FUN_0121148c
 */


undefined8 FUN_0121148c(long param_1,undefined8 param_2,uint *param_3,uint *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  uint uVar4;
  
  if (*(int *)(param_1 + 0x5d8) == 3) {
    uVar3 = FUN_0284ce2c(*(undefined8 *)(param_1 + 0x5c0),param_2,param_3,param_4);
    if (((uVar3 & 1) != 0) && (uVar4 = *param_3, uVar4 <= *param_4)) {
      do {
        uVar1 = FUN_0284ce00(*(undefined8 *)(param_1 + 0x5c0),uVar4);
        uVar3 = FUN_0284d2dc(*(undefined8 *)(param_1 + 0x5c0),uVar1);
        if ((uVar3 & 1) == 0) {
          return 1;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 <= *param_4);
    }
  }
  else if (*(int *)(param_1 + 0x5d8) == 0) {
    uVar2 = FUN_0284ce2c(*(undefined8 *)(param_1 + 0x5b8),param_2,param_3,param_4);
    return uVar2;
  }
  return 0;
}


