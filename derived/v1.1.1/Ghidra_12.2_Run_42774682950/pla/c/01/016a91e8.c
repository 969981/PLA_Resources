/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 016a91e8; name: FUN_016a91e8
 */


void FUN_016a91e8(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 *local_38;
  
  uVar2 = *(ulong *)(param_1 + 0xf0);
  if ((int)uVar2 != 0) {
    uVar3 = 0;
    do {
      if (uVar3 < (ulong)(*(long *)(param_1 + 0x108) - *(long *)(param_1 + 0x100) >> 3)) {
        local_38 = *(undefined1 **)(*(long *)(param_1 + 0x100) + uVar3 * 8);
      }
      else {
        local_38 = &DAT_cbf29ce484222645;
      }
      uVar1 = FUN_016a864c(param_1,&local_38,1);
      if ((uVar1 & 1) != 0) {
        FUN_016a9288(param_1,&local_38);
      }
      uVar3 = uVar3 + 1;
    } while ((uVar2 & 0xffffffff) != uVar3);
  }
  FUN_016a9724(param_1);
  return;
}


