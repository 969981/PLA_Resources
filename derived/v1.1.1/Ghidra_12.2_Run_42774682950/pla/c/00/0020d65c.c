/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0020d65c; name: FUN_0020d65c
 */


undefined8 FUN_0020d65c(long param_1,long param_2)

{
  uint uVar1;
  uint *puVar2;
  
  if (param_2 != 0) {
    puVar2 = (uint *)(param_1 + 4);
    do {
      switch(puVar2[-1]) {
      case 2:
        uVar1 = *puVar2;
        goto joined_r0x0020d6c8;
      case 4:
        if ((int)*puVar2 < 0) {
          return 0;
        }
        break;
      case 5:
        if (0x3fe < *puVar2 - 0x4000 >> 0xe) {
          return 0;
        }
        break;
      case 8:
        uVar1 = *puVar2;
joined_r0x0020d6c8:
        if (1 < uVar1) {
          return 0;
        }
      }
      param_2 = param_2 + -1;
      puVar2 = puVar2 + 2;
    } while (param_2 != 0);
  }
  return 1;
}


