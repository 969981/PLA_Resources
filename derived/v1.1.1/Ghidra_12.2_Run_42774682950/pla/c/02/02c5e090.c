/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c5e090; name: FUN_02c5e090
 */


void FUN_02c5e090(long param_1,undefined4 param_2,uint param_3)

{
  undefined4 uVar1;
  
  if (9 < param_3) {
    param_3 = 10;
  }
  switch(param_2) {
  case 0:
    FUN_02c87e8c(*(undefined8 *)(param_1 + 0x98));
    FUN_02c5dba8(param_1,1);
    return;
  case 1:
    FUN_02c881cc(*(undefined8 *)(param_1 + 0x98));
    uVar1 = FUN_02c5e59c(param_1);
    FUN_02c78bfc(*(undefined8 *)(param_1 + 0x98),uVar1);
    return;
  case 2:
    FUN_02c8850c(*(undefined8 *)(param_1 + 0x98));
    uVar1 = FUN_02c5e850(param_1);
    FUN_02c78f24(*(undefined8 *)(param_1 + 0x98),uVar1);
    return;
  case 3:
    FUN_02c88b8c(*(undefined8 *)(param_1 + 0x98));
    uVar1 = FUN_02c5eb08(param_1);
    FUN_02c7924c(*(undefined8 *)(param_1 + 0x98),uVar1);
    return;
  case 4:
    FUN_02c88ecc(*(undefined8 *)(param_1 + 0x98));
    uVar1 = FUN_02c5edc0(param_1);
    FUN_02c79574(*(undefined8 *)(param_1 + 0x98),uVar1);
    return;
  case 5:
    FUN_02c8884c(*(undefined8 *)(param_1 + 0x98),param_3);
    uVar1 = FUN_02c5f078(param_1);
    FUN_02c7989c(*(undefined8 *)(param_1 + 0x98),uVar1);
    return;
  default:
    return;
  }
}


