/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00814cc4; name: FUN_00814cc4
 */


void FUN_00814cc4(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  
  uVar1 = FUN_007e4430(param_2);
  if ((uVar1 & 1) != 0) {
    uVar1 = FUN_007e4430(param_1 + 0x88);
    uVar2 = FUN_007e45a8(param_1 + 0x88,param_2);
    if ((uVar2 & 1) == 0) {
      uVar3 = 4;
      if ((uVar1 & 1) == 0) {
        uVar3 = 0;
      }
      if ((uVar1 & 1) != 0) {
        uVar1 = FUN_007e4430(param_1 + 0xa8);
        uVar3 = 4;
        if ((uVar1 & 1) == 0) {
          uVar3 = 1;
        }
      }
      uVar1 = FUN_007e45a8(param_1 + 0xa8,param_2);
      if ((uVar1 & 1) == 0) {
        if (uVar3 == 4) {
          uVar1 = FUN_007e4430(param_1 + 200);
          uVar3 = 4;
          if ((uVar1 & 1) == 0) {
            uVar3 = 2;
          }
        }
        uVar1 = FUN_007e45a8(param_1 + 200,param_2);
        if ((uVar1 & 1) == 0) {
          if (uVar3 == 4) {
            uVar1 = FUN_007e4430(param_1 + 0xe8);
            uVar3 = 3;
            if ((uVar1 & 1) != 0) {
              uVar3 = 4;
            }
          }
          uVar1 = FUN_007e45a8(param_1 + 0xe8,param_2);
          if (((uVar1 & 1) == 0) && (uVar3 != 4)) {
            FUN_007e346c(param_1 + (ulong)uVar3 * 0x20 + 0x88,param_2);
          }
        }
      }
    }
  }
  return;
}


