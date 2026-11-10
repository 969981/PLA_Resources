/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001e3c70; name: FUN_001e3c70
 */


undefined8 FUN_001e3c70(long param_1,char *param_2,size_t param_3)

{
  void *__dest;
  undefined8 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0x2b;
  }
  else {
    if (*(code **)(param_1 + 0x38) != (code *)0x0) {
      (**(code **)(param_1 + 0x38))(*(undefined8 *)(param_1 + 0x40));
    }
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x78) = 0;
    *(undefined8 *)(param_1 + 0xb8) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(long *)(param_1 + 0x40) = param_1;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0xa8) = 0;
    *(undefined8 *)(param_1 + 0xb0) = 0;
    if (param_2 == (char *)0x0) {
      uVar1 = 0;
    }
    else {
      if (param_3 == 0xffffffffffffffff) {
        param_3 = strlen(param_2);
      }
      __dest = (void *)FUN_002044c4(param_3 + 1);
      *(void **)(param_1 + 0x20) = __dest;
      if (__dest == (void *)0x0) {
        uVar1 = 0x1b;
      }
      else {
        *(size_t *)(param_1 + 0x78) = param_3;
        if (param_3 != 0) {
          memcpy(__dest,param_2,param_3);
          __dest = *(void **)(param_1 + 0x20);
        }
        *(undefined1 *)((long)__dest + param_3) = 0;
        *(code **)(param_1 + 0x28) = FUN_001e41f4;
        *(undefined1 **)(param_1 + 0x30) = &LAB_001e4248;
        uVar1 = 0;
        *(undefined1 **)(param_1 + 0x38) = &LAB_001e4294;
        *(undefined4 *)(param_1 + 0x18) = 1;
      }
    }
  }
  return uVar1;
}


