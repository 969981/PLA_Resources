/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0287bd2c; name: FUN_0287bd2c
 */


void FUN_0287bd2c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  *param_1 = param_2;
  param_1[1] = 0x6000000;
  param_1[2] = &LAB_02b00000;
  param_1[3] = 0x780;
  param_1[4] = 0x438;
  uVar2 = nn::os::GetHostArgc();
  *(undefined4 *)(param_1 + 5) = uVar2;
  uVar1 = nn::os::GetHostArgv();
  param_1[6] = uVar1;
  return;
}


