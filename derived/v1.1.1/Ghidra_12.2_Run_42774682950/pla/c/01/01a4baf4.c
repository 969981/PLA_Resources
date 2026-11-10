/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a4baf4; name: FUN_01a4baf4
 */


void FUN_01a4baf4(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[5];
  *(undefined8 *)(param_1 + 0x358) = param_2[3];
  *(undefined8 *)(param_1 + 0x368) = uVar1;
  *(undefined8 *)(param_1 + 0x348) = param_2[1];
  uVar1 = *param_2;
  *(undefined8 *)(param_1 + 0x350) = param_2[2];
  *(undefined8 *)(param_1 + 0x340) = uVar1;
  uVar1 = param_2[4];
  *(undefined8 *)(param_1 + 0x370) = param_2[6];
  *(undefined8 *)(param_1 + 0x360) = uVar1;
  return;
}


