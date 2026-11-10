/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ee0f5c; name: FUN_02ee0f5c
 */


undefined4 FUN_02ee0f5c(long param_1,undefined4 *param_2,undefined4 *param_3,long *param_4)

{
  undefined4 *puVar1;
  long lVar2;
  
  if (param_2 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(param_1 + 0x10);
    if (param_3 != (undefined4 *)0x0) {
      puVar1 = param_3;
    }
    return *puVar1;
  }
  lVar2 = *(long *)(param_1 + 0x40);
  if (lVar2 != 0) {
    do {
      if ((((*(long *)(lVar2 + 0x20) == *param_4) && (*(int *)(lVar2 + 0x28) == 0)) &&
          (*(int *)(lVar2 + 0x30) == 0)) &&
         (((*(char *)(lVar2 + 0x38) == -1 && (*(char *)(lVar2 + 0x40) == -1)) &&
          (*(long *)(lVar2 + 0x48) == 0)))) {
        return *(undefined4 *)(*(long *)(lVar2 + 0x10) + 0xc);
      }
      lVar2 = *(long *)(lVar2 + 8);
    } while (lVar2 != 0);
  }
  return *param_2;
}


