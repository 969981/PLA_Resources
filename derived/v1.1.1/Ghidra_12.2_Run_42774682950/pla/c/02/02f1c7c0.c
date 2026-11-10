/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f1c7c0; name: FUN_02f1c7c0
 */


void FUN_02f1c7c0(long param_1,byte *param_2,code *param_3)

{
  undefined1 uVar1;
  ulong uVar2;
  
  if (*param_2 != 0) {
    uVar1 = (*param_3)(param_2,0);
    **(undefined1 **)(param_1 + 0x50) = uVar1;
    if ((*param_2 & 0xfe) != 0) {
      uVar2 = 1;
      do {
        uVar1 = (*param_3)(param_2,uVar2 & 0xffffffff);
        *(undefined1 *)(*(long *)(param_1 + 0x50) + uVar2) = uVar1;
        uVar2 = uVar2 + 1;
      } while (uVar2 < *param_2);
    }
  }
  return;
}


