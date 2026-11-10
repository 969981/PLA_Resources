/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01244dec; name: FUN_01244dec
 */


void FUN_01244dec(long param_1,long *param_2)

{
  long lVar1;
  long *local_28;
  
  lVar1 = *(long *)(param_1 + (ulong)*(byte *)(param_1 + 0x1b0) * 8 + 0x70);
  if (lVar1 != 0) {
    local_28 = (long *)*param_2;
    if (local_28 != (long *)0x0) {
      (**(code **)(*local_28 + 0x18))();
    }
    if (*(long *)(lVar1 + 0xb0) == *(long *)(lVar1 + 0xb8)) {
      FUN_0135a560(lVar1 + 0xa8,&local_28);
    }
    else {
      FUN_00e8dc78(lVar1 + 0xc0,*(long *)(lVar1 + 0xb0),&local_28);
      *(long *)(lVar1 + 0xb0) = *(long *)(lVar1 + 0xb0) + 8;
    }
    if (local_28 != (long *)0x0) {
      (**(code **)(*local_28 + 0x20))();
    }
  }
  *(undefined1 *)(param_1 + 0x1b1) = 1;
  return;
}


