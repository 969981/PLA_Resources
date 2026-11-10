/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c2fa40; name: FUN_01c2fa40
 */


void FUN_01c2fa40(long param_1,uint param_2)

{
  uint uVar1;
  
  if (*(char *)(param_1 + 0x204) != '\0') {
    if ((param_2 & 1) == 0) {
      uVar1 = *(uint *)(param_1 + 0x200);
      *(uint *)(param_1 + 0x200) = uVar1 & 0xfffffffe;
      *(undefined1 *)(param_1 + 0x204) = 0;
      if (*(char *)(param_1 + 0x2a8) != '\0') {
        *(undefined4 *)(param_1 + 800) = 0x3f800000;
        *(undefined8 *)(param_1 + 0x2f8) = 0;
        *(undefined8 *)(param_1 + 0x2f0) = 0;
        *(undefined8 *)(param_1 + 0x2e8) = 0;
        *(undefined8 *)(param_1 + 0x2e0) = 0;
        *(undefined1 *)(param_1 + 0x2a8) = 0;
        *(undefined8 *)(param_1 + 0x324) = 0;
        *(undefined8 *)(param_1 + 0x329) = 0;
        *(uint *)(param_1 + 0x200) = uVar1 & 0xfffffffc;
        *(undefined8 *)(param_1 + 0x334) = 0;
        return;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x28c) = 1;
      if (*(char *)(param_1 + 0x2a8) != '\0') {
        uVar1 = *(uint *)(param_1 + 0x224) >> 1;
        if (uVar1 == 0) {
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
        *(uint *)(param_1 + 0x2c0) = uVar1;
        *(uint *)(param_1 + 0x2c4) = uVar1;
        *(undefined4 *)(param_1 + 0x334) = 1;
        return;
      }
    }
  }
  return;
}


