/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013a4550; name: FUN_013a4550
 */


undefined8 * FUN_013a4550(long param_1,long param_2,undefined8 *param_3)

{
  long lVar1;
  void *__src;
  
  if (param_1 != param_2) {
    __src = (void *)(param_1 + 0x48);
    do {
      *param_3 = *(undefined8 *)((long)__src + -0x48);
      FUN_013a47d4(param_3 + 1,(long)__src + -0x40);
      if (*(char *)(param_3 + 8) == '\0') {
        if (*(char *)((long)__src + -8) != '\0') {
          memcpy(param_3 + 9,__src,0x2c8);
          *(undefined1 *)(param_3 + 8) = 1;
        }
      }
      else if (*(char *)((long)__src + -8) == '\0') {
        *(undefined1 *)(param_3 + 8) = 0;
      }
      else {
        memcpy(param_3 + 9,__src,0x2c8);
      }
      param_3[0x62] = *(undefined8 *)((long)__src + 0x2c8);
      lVar1 = (long)__src + 0x2d0;
      param_3 = param_3 + 99;
      __src = (void *)((long)__src + 0x318);
    } while (lVar1 != param_2);
  }
  return param_3;
}


