/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029e54ac; name: FUN_029e54ac
 */


void FUN_029e54ac(long param_1,undefined8 param_2,byte *param_3)

{
  bool bVar1;
  long lVar2;
  
  if ((ulong)*param_3 == 0x1f) {
    bVar1 = false;
    lVar2 = 0;
  }
  else {
    lVar2 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 8) + (ulong)*param_3 * 8 + 0x120);
    bVar1 = lVar2 != 0;
    if (bVar1 && param_3[1] != 0) {
      if (*(char *)(lVar2 + 0x7d) != '\x1f') {
        FUN_02a3e6b8(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x99,*(char *)(lVar2 + 0x7d),
                     0);
      }
      bVar1 = true;
    }
  }
  FUN_02a3a6c4(*(undefined8 *)(param_1 + 0x20),param_3 + 4);
  if (((bVar1 && param_3[1] != 0) && (lVar2 != 0)) && (*(char *)(lVar2 + 0x7d) != '\x1f')) {
    FUN_02a3e6b8(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x9a);
  }
  if (*(short *)(param_3 + 6) < 0) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x40) + 8);
    *(undefined1 *)(lVar2 + (ulong)*(byte *)(lVar2 + 0x1c8) * 0x40 + 0x43) = 1;
  }
  return;
}


