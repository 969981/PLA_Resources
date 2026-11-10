/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0126b7ac; name: FUN_0126b7ac
 */


void FUN_0126b7ac(long param_1,long *param_2)

{
  long lVar1;
  long *local_28;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x70) + 0x90);
  if ((((lVar1 != 0) && (*(int *)(lVar1 + 0x27b8) == 1)) &&
      (*(long *)(lVar1 + 0x27c8) == *(long *)(lVar1 + 0x27c0))) &&
     ((*(byte *)(*(long *)(param_1 + 0x70) + 0x188) & 0xfe) != 4)) {
    lVar1 = *(long *)(*(long *)(param_1 + 0x78) + 0x90);
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x27b8) == 1)) &&
       ((*(long *)(lVar1 + 0x27c8) == *(long *)(lVar1 + 0x27c0) &&
        ((*(byte *)(*(long *)(param_1 + 0x78) + 0x188) & 0xfe) != 4)))) {
      lVar1 = *(long *)(param_1 + (ulong)*(byte *)(param_1 + 0x1a8) * 8 + 0x70);
      if (lVar1 != 0) {
        local_28 = (long *)*param_2;
        if (local_28 != (long *)0x0) {
          (**(code **)(*local_28 + 0x18))();
        }
        FUN_013520e8(lVar1,&local_28);
        if (local_28 != (long *)0x0) {
          (**(code **)(*local_28 + 0x20))();
        }
      }
      *(undefined1 *)(param_1 + 0x1a9) = 1;
    }
  }
  return;
}


