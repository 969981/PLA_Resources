/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c5dcdc; name: FUN_02c5dcdc
 */


void FUN_02c5dcdc(long param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_02c5dc80();
  uVar1 = FUN_02c5de2c(param_1,uVar1,param_3);
  switch(param_2) {
  case 0:
    FUN_02c7b648(*(undefined8 *)(param_1 + 0x98));
    FUN_02c5dba8(param_1,1);
    return;
  case 1:
    FUN_02c7b988(*(undefined8 *)(param_1 + 0x98));
    uVar1 = FUN_02c5e59c(param_1);
    FUN_02c78bfc(*(undefined8 *)(param_1 + 0x98),uVar1);
    return;
  case 2:
    FUN_02c7bcc8(*(undefined8 *)(param_1 + 0x98));
    uVar1 = FUN_02c5e850(param_1);
    FUN_02c78f24(*(undefined8 *)(param_1 + 0x98),uVar1);
    return;
  case 3:
    FUN_02c7c008(*(undefined8 *)(param_1 + 0x98));
    uVar1 = FUN_02c5eb08(param_1);
    FUN_02c7924c(*(undefined8 *)(param_1 + 0x98),uVar1);
    return;
  case 4:
    FUN_02c7c348(*(undefined8 *)(param_1 + 0x98));
    uVar1 = FUN_02c5edc0(param_1);
    FUN_02c79574(*(undefined8 *)(param_1 + 0x98),uVar1);
    return;
  case 5:
    FUN_02c7c688(*(undefined8 *)(param_1 + 0x98),uVar1);
    uVar1 = FUN_02c5f078(param_1);
    FUN_02c7989c(*(undefined8 *)(param_1 + 0x98),uVar1);
    return;
  default:
    return;
  }
}


