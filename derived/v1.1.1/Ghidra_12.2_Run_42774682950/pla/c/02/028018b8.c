/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028018b8; name: FUN_028018b8
 */


void FUN_028018b8(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x68);
  if ((((lVar2 != 0) && (uVar1 = *(ulong *)(param_1 + 0x78), (uVar1 & 0xff) != 0)) &&
      ((uVar1 & 6) == 2)) && (*(char *)(lVar2 + 0x7e0) != '\0')) {
    uVar1 = uVar1 | 4;
    *(ulong *)(param_1 + 0x78) = uVar1;
    if (*(char *)(lVar2 + 0x7e0) == '\x03') {
      FUN_027fcc94(lVar2,1);
      *(undefined1 *)(lVar2 + 0x7e0) = 4;
      uVar1 = *(ulong *)(param_1 + 0x78);
    }
    if (((uint)uVar1 >> 7 & 1) != 0) {
      *(undefined1 *)(*(long *)(param_1 + 0x68) + 0x7e2) = 1;
    }
  }
  return;
}


