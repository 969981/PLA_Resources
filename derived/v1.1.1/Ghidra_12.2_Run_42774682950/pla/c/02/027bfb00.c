/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027bfb00; name: FUN_027bfb00
 */


void FUN_027bfb00(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_02cbb620(*(undefined1 *)(param_1 + 0x5a0));
  if (lVar1 != 0) {
    lVar2 = FUN_02cbb620(0);
    if ((((lVar2 != 0) && (*(char *)(param_1 + 0x1a8) == '\0')) &&
        (*(char *)(param_1 + 0x1aa) != '\0')) &&
       (((*(char *)(param_1 + 0x1a9) != '\0' && (*(int *)(lVar2 + 0x78) == 6)) &&
        (*(char *)(lVar1 + 0xca) == 'd')))) {
      *(undefined1 *)(param_1 + 0x1a8) = 1;
      FUN_027bff9c(param_1,*(undefined8 *)(param_1 + 0x1a0),0,param_1 + 0x120);
    }
    lVar2 = FUN_02cbb620(1);
    if (((lVar2 != 0) && (*(char *)(param_1 + 0x238) == '\0')) &&
       ((*(char *)(param_1 + 0x23a) != '\0' &&
        (((*(char *)(param_1 + 0x239) != '\0' && (*(int *)(lVar2 + 0x78) == 6)) &&
         (*(char *)(lVar1 + 0xca) == 'd')))))) {
      *(undefined1 *)(param_1 + 0x238) = 1;
      FUN_027bff9c(param_1,*(undefined8 *)(param_1 + 0x230),1,param_1 + 0x1b0);
      return;
    }
  }
  return;
}


