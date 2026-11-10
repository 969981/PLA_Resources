/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f3ff1c; name: FUN_02f3ff1c
 */


bool FUN_02f3ff1c(long param_1)

{
  long lVar1;
  int local_2c;
  undefined1 local_28 [4];
  char local_24 [4];
  
  if (*(long **)(param_1 + 0x40) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x40) + 0x18))();
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  FUN_02f4a8e8(*(undefined8 *)(param_1 + 0xc0),local_24,&local_2c,local_28);
  lVar1 = *(long *)(*(long *)(param_1 + 0xc0) + 0x80);
  if (lVar1 != 0 && local_24[0] == '\0') {
    do {
      FUN_02f3ade8(lVar1,local_24,&local_2c,local_28);
      lVar1 = *(long *)(lVar1 + 0x80);
      if (lVar1 == 0) break;
    } while (local_24[0] == '\0');
  }
  *(undefined1 *)(param_1 + 0x48) = local_28[0];
  *(int *)(param_1 + 0x3c) = local_2c;
  if (local_2c == 0) {
    lVar1 = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  else {
    lVar1 = FUN_02e7d2ec(DAT_0440a120);
    *(long *)(param_1 + 0x40) = lVar1;
    if (lVar1 == 0) {
      *(undefined4 *)(param_1 + 0x3c) = 0;
    }
  }
  return lVar1 != 0;
}


