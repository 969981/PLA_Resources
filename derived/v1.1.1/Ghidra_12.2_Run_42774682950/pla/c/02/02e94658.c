/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e94658; name: FUN_02e94658
 */


int FUN_02e94658(long param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (*(int *)(param_1 + 0xe8) != 0) {
    puVar2 = *(undefined4 **)(param_1 + 0xe0);
    do {
      iVar1 = FUN_02e96ab4(param_1,puVar2);
      if (iVar1 != 1) {
        for (puVar3 = *(undefined4 **)(param_1 + 0xe0); puVar3 != puVar2; puVar3 = puVar3 + 8) {
          FUN_02e965cc(param_1,*puVar3);
        }
        return iVar1;
      }
      puVar2 = puVar2 + 8;
    } while (puVar2 != (undefined4 *)
                       (*(long *)(param_1 + 0xe0) + (ulong)*(uint *)(param_1 + 0xe8) * 0x20));
  }
  return 1;
}


