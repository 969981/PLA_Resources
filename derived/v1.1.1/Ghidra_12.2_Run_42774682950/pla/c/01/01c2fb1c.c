/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c2fb1c; name: FUN_01c2fb1c
 */


void FUN_01c2fb1c(long param_1,int param_2)

{
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 800) = 0x3f800000;
    *(undefined8 *)(param_1 + 0x2f8) = 0;
    *(undefined8 *)(param_1 + 0x2f0) = 0;
    *(undefined8 *)(param_1 + 0x2e8) = 0;
    *(undefined8 *)(param_1 + 0x2e0) = 0;
    *(undefined4 *)(param_1 + 0x338) = 0;
    *(undefined1 *)(param_1 + 0x2a8) = 0;
    *(undefined8 *)(param_1 + 0x324) = 0;
    *(undefined8 *)(param_1 + 0x329) = 0;
    *(uint *)(param_1 + 0x200) = *(uint *)(param_1 + 0x200) & 0xfffffffd;
    *(undefined4 *)(param_1 + 0x334) = 0;
    return;
  }
  *(int *)(param_1 + 0x2c0) = param_2;
  *(int *)(param_1 + 0x2c4) = param_2;
  *(undefined4 *)(param_1 + 0x334) = 1;
  return;
}


