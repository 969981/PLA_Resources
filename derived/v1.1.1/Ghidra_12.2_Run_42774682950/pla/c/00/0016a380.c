/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0016a380; name: FUN_0016a380
 */


void FUN_0016a380(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5)

{
  undefined8 uVar1;
  
  param_2[8] = 0x121;
  param_2[4] = 0;
  *param_2 = param_5;
  *(undefined8 *)(param_2 + 0x10) = param_3;
  *(undefined8 *)(param_2 + 1) = 0x100000001;
  *(undefined8 *)(param_2 + 0x18) = param_4;
  *(undefined8 *)(param_2 + 0xc) = 0;
  *(undefined8 *)(param_2 + 0xe) = param_1;
  uVar1 = FUN_0016d720(param_1,&DAT_0392da6a,4);
  *(undefined8 *)(param_2 + 0x1a) = uVar1;
  uVar1 = FUN_00161510(*(undefined8 *)(param_2 + 0xe),**(undefined8 **)(param_2 + 0x12),
                       (*(undefined8 **)(param_2 + 0x12))[2],0x20);
  **(undefined8 **)(param_2 + 0x12) = uVar1;
  *(undefined8 *)(*(long *)(param_2 + 0x12) + 0x10) = 0x20;
  return;
}


