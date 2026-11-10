/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00505710; name: FUN_00505710
 */


uint FUN_00505710(long *param_1)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  long lVar4;
  
  if ((param_1 != (long *)0x0) && (lVar4 = *param_1, lVar4 != 0)) {
    uVar1 = *(uint *)param_1[1];
    puVar2 = (uint *)param_1[1] + 4;
    while( true ) {
      if ((uVar1 == 1) &&
         (iVar3 = strcmp("grpc.compression_enabled_algorithms_bitset",*(char **)(puVar2 + -2)),
         iVar3 == 0)) {
        uVar1 = *puVar2 & 0xe | 1;
        *puVar2 = uVar1;
        return uVar1;
      }
      lVar4 = lVar4 + -1;
      if (lVar4 == 0) break;
      uVar1 = puVar2[4];
      puVar2 = puVar2 + 8;
    }
  }
  return 0xf;
}


