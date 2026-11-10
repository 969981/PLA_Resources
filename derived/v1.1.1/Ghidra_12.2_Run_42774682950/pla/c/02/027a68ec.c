/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027a68ec; name: FUN_027a68ec
 */


void FUN_027a68ec(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0xc40) != 0) {
    uVar1 = FUN_02cc40dc();
    while ((uVar1 & 1) != 0) {
      nn::os::SleepThread(1000000);
      uVar1 = FUN_02cc40dc(*(undefined8 *)(param_1 + 0xc40));
    }
  }
  if (*(char *)(param_1 + 0x1ff8) != '\0') {
    *(undefined1 *)(param_1 + 0x1ff8) = 0;
  }
  if (*(char *)(param_1 + 0x1fe8) != '\0') {
    if (*(char *)(param_1 + 0x1ff0) != '\0') {
      *(undefined1 *)(param_1 + 0x1ff0) = 0;
    }
    *(char *)(param_1 + 0x1fe8) = '\0';
  }
  lVar2 = *(long *)(param_1 + 0xc40);
  *(undefined8 *)(param_1 + 0xc40) = 0;
  if (lVar2 == 0) {
    return;
  }
  FUN_027a7010(param_1 + 0xc48);
  return;
}


