/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03392ec4; name: FUN_03392ec4
 */


void FUN_03392ec4(long param_1,undefined8 param_2,undefined8 param_3,byte param_4,undefined8 param_5
                 )

{
  FUN_0331f604();
  *(undefined1 **)(param_1 + 0x130) = &LAB_0331f954;
  *(undefined8 *)(param_1 + 0x288) = param_2;
  *(undefined8 *)(param_1 + 0x290) = 0;
  *(code **)(param_1 + 0xb0) = FUN_0331f870;
  *(undefined1 **)(param_1 + 0xb8) = &LAB_0331f8e8;
  *(undefined1 **)(param_1 + 0x148) = &LAB_0331f9d0;
  *(undefined1 **)(param_1 + 0x178) = &LAB_0331fb18;
  *(undefined1 **)(param_1 + 0x188) = &LAB_0331fb8c;
  *(undefined8 *)(param_1 + 0x298) = 0x8000000000000000;
  *(undefined8 *)(param_1 + 0x2a0) = param_3;
  *(byte *)(param_1 + 0x2a8) = param_4 & 1;
  *(undefined8 *)(param_1 + 0x2b0) = param_5;
  return;
}


