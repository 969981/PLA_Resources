/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f29f20; name: FUN_02f29f20
 */


void FUN_02f29f20(undefined4 param_1,long param_2,long param_3)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = *(uint *)(param_3 + 0x4c);
  uVar2 = 0;
  if (*(short *)(param_2 + 0x12) != 0) {
    uVar2 = param_1;
  }
  if ((uVar1 & 1) != 0) {
    FUN_02f2aa1c(uVar2,param_3,param_2);
  }
  if ((uVar1 >> 2 & 1) != 0) {
    FUN_02f2aac8(uVar2,param_3,param_2);
  }
  if ((uVar1 >> 1 & 1) != 0) {
    FUN_02f2ab74(uVar2,param_3,param_2);
  }
  if ((uVar1 >> 4 & 1) != 0) {
    FUN_02f2ac2c(uVar2,param_3,param_2);
  }
  if ((uVar1 >> 5 & 1) == 0) {
    return;
  }
  FUN_02f2afe4(uVar2,param_3,param_2);
  return;
}


