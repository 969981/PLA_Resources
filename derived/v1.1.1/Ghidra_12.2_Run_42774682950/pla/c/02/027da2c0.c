/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027da2c0; name: FUN_027da2c0
 */


void FUN_027da2c0(long param_1)

{
  undefined8 uVar1;
  
  *(undefined4 *)(param_1 + 0xbc) = 4;
  if (*(int *)(param_1 + 0xb8) == 4) {
    *(undefined8 *)(param_1 + 200) = 0;
    *(undefined8 *)(param_1 + 0xd0) = 0;
    if (*(char *)(param_1 + 0xc0) == '\0') {
      *(undefined1 *)(param_1 + 0xc0) = 1;
    }
    nn::os::GetSystemTick();
    uVar1 = nn::os::ConvertToTimeSpan();
    *(undefined8 *)(param_1 + 200) = uVar1;
  }
  return;
}


