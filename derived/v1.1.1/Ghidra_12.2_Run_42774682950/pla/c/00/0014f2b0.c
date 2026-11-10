/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0014f2b0; name: FUN_0014f2b0
 */


long FUN_0014f2b0(long param_1)

{
  size_t __len;
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  
  lVar3 = 0;
  puVar2 = (undefined8 *)(param_1 + 0x378);
  do {
    puVar4 = (undefined8 *)puVar2[2];
    if ((*(uint *)(puVar2 + 3) & 9) == 1) {
      __len = puVar2[1];
      iVar1 = munmap((void *)*puVar2,__len);
      if (iVar1 != 0) {
        __len = 0;
      }
      lVar3 = __len + lVar3;
    }
    puVar2 = puVar4;
  } while (puVar4 != (undefined8 *)0x0);
  return lVar3;
}


