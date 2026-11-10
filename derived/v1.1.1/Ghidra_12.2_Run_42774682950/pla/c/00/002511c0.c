/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002511c0; name: FUN_002511c0
 */


uint * FUN_002511c0(long param_1,char *param_2)

{
  ushort uVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  
  uVar1 = *(ushort *)(param_1 + 8);
  if (uVar1 != 0) {
    uVar4 = 0;
    puVar3 = (uint *)(param_1 + 0xc);
    do {
      iVar2 = strcmp((char *)(param_1 + (ulong)*puVar3),param_2);
      if (iVar2 == 0) {
        return puVar3;
      }
      uVar4 = uVar4 + 1;
      puVar3 = puVar3 + 0xc;
    } while (uVar4 < uVar1);
  }
  return (uint *)0x0;
}


