/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00239cd0; name: FUN_00239cd0
 */


void FUN_00239cd0(long param_1,ulong param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x78);
  if (lVar1 != 0) {
    FUN_00227738(lVar1,0);
    *(undefined4 *)(lVar1 + 0x3c) = 0;
  }
  if ((param_2 & 1) != 0) {
    for (lVar1 = *(long *)(param_1 + 0x50); lVar1 != param_1 + 0x48; lVar1 = *(long *)(lVar1 + 8)) {
      FUN_00239cd0(*(undefined8 *)(lVar1 + 0x10),1);
    }
  }
  return;
}


