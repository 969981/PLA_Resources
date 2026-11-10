/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01792e28; name: FUN_01792e28
 */


void FUN_01792e28(long param_1)

{
  undefined8 local_30;
  char *pcStack_28;
  undefined8 local_20;
  long *local_18;
  
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0x4000000040a00000;
  *(undefined1 *)(param_1 + 0x58) = 0;
  *(undefined1 *)(param_1 + 0x60) = 0;
  *(undefined1 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0x800000003;
  *(undefined8 *)(param_1 + 0x38) = 0x4080000040800000;
  *(undefined8 *)(param_1 + 0x40) = 0x3f4ccccd;
  *(undefined4 *)(param_1 + 0x48) = 0x43200000;
  *(undefined1 *)(param_1 + 0x4c) = 1;
  *(undefined8 *)(param_1 + 0x50) = 0x3e80000041a00000;
  *(undefined4 *)(param_1 + 0x5c) = 0x40400000;
  *(undefined8 *)(param_1 + 100) = 0x40400000;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  local_30 = 0x4e9fd5f8e749f8e3;
  pcStack_28 = "buddy";
  local_20 = 5;
  local_18 = (long *)0x0;
  FUN_01792ef8(param_1,&local_30);
  if (local_18 != (long *)0x0) {
    (**(code **)(*local_18 + 0x20))();
  }
  return;
}


