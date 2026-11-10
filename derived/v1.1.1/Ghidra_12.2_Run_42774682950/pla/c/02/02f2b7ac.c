/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f2b7ac; name: FUN_02f2b7ac
 */


void FUN_02f2b7ac(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  if (*(long **)(param_1 + 0x128) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x128) + 0x68))();
    puVar1 = *(undefined8 **)(param_1 + 0x128);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1);
      (*DAT_0442d150)(5,puVar1);
    }
    *(undefined8 *)(param_1 + 0x128) = 0;
  }
  lVar2 = *(long *)(param_1 + 0x138);
  if (lVar2 != 0) {
    if (*(long *)(lVar2 + 0xb0) != 0) {
      *(undefined8 *)(lVar2 + 0xc4) = 0;
      FUN_02ea6640();
    }
    *(undefined2 *)(lVar2 + 0x92) = 0;
    *(undefined8 *)(lVar2 + 0x94) = 0;
    *(undefined8 *)(lVar2 + 0xe8) = 0;
    if (*(char *)(lVar2 + 0x68) != '\0') {
      (*DAT_0442d158)(5,*(undefined8 *)(lVar2 + 0x30));
      (*DAT_0442d150)(5,*(undefined8 *)(lVar2 + 0x60));
    }
    *(undefined8 *)(lVar2 + 0x38) = 0;
    puVar1 = *(undefined8 **)(param_1 + 0x138);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1);
      (*DAT_0442d150)(5,puVar1);
    }
    *(undefined8 *)(param_1 + 0x138) = 0;
  }
  FUN_02f2b49c(param_1 + 0x68);
  *(byte *)(param_1 + 0x160) = *(byte *)(param_1 + 0x160) & 0xfd;
  if (*(long *)(param_1 + 0x148) != 0) {
    (*DAT_0442d150)(5);
    *(undefined8 *)(param_1 + 0x148) = 0;
  }
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(byte *)(param_1 + 0x50) = *(byte *)(param_1 + 0x50) | 1;
  return;
}


