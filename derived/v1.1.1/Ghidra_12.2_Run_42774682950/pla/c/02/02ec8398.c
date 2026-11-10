/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ec8398; name: FUN_02ec8398
 */


void FUN_02ec8398(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x158);
  if (lVar2 != 0) {
    if (((*(long *)(lVar2 + 0x28) == 0) &&
        (((*(long *)(lVar2 + 0x68) == 0 || (*(long *)(*(long *)(lVar2 + 0x68) + 0x88) == 0)) &&
         (lVar1 = FUN_02eca560(lVar2 + 0x68), lVar1 != 0)))) &&
       ((*(long *)(lVar1 + 0x158) == lVar2 || (*(long *)(lVar1 + 0x158) == 0)))) {
      *(undefined1 *)(lVar1 + 0x164) = 0;
      *(undefined8 *)(lVar1 + 0x158) = 0;
    }
    FUN_02f28c70(lVar2);
    FUN_02f59e60(5,lVar2);
  }
  *(undefined1 *)(param_1 + 0x164) = 1;
  return;
}


