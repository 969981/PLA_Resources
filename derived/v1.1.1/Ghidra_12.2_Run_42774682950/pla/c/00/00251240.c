/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00251240; name: FUN_00251240
 */


uint * FUN_00251240(long param_1,char *param_2)

{
  int iVar1;
  uint *puVar2;
  ulong uVar3;
  char acStack_88 [72];
  
  if (*(short *)(param_1 + 8) != 0) {
    uVar3 = 0;
    puVar2 = (uint *)(param_1 + 0xc);
    do {
      FUN_00263544(acStack_88,0x47,param_1 + 0xc + (ulong)*puVar2,puVar2);
      iVar1 = strcmp(acStack_88,param_2);
      if (iVar1 == 0) {
        return puVar2;
      }
      uVar3 = uVar3 + 1;
      puVar2 = puVar2 + 4;
    } while (uVar3 < *(ushort *)(param_1 + 8));
  }
  return (uint *)0x0;
}


