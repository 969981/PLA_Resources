/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ea7a60; name: FUN_02ea7a60
 */


ulong * FUN_02ea7a60(long param_1,ulong param_2,uint param_3,undefined1 *param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  ulong *puVar5;
  ulong uVar6;
  
  uVar4 = *(uint *)(param_1 + 0x20);
  if (uVar4 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 0;
    do {
      iVar1 = iVar3 + (uVar4 >> 1);
      puVar5 = (ulong *)(*(long *)(param_1 + 0x18) + (long)iVar1 * 0x18);
      uVar6 = *puVar5;
      uVar2 = (uint)puVar5[1];
      if (uVar6 == param_2 && uVar2 == param_3) {
        *param_4 = 1;
        return (ulong *)(*(long *)(param_1 + 0x18) + (long)iVar1 * 0x18);
      }
      if ((uVar6 < param_2) || ((uVar6 == param_2 && (uVar2 < param_3)))) {
        iVar3 = iVar1 + 1;
        uVar4 = uVar4 - 1;
      }
      uVar4 = uVar4 >> 1;
    } while (uVar4 != 0);
  }
  *param_4 = 0;
  if (*(long *)(param_1 + 0x18) + (long)iVar3 * 0x18 == 0) {
    puVar5 = (ulong *)FUN_02ea7c4c();
  }
  else {
    puVar5 = (ulong *)FUN_02ea7b3c();
  }
  if (puVar5 != (ulong *)0x0) {
    *puVar5 = param_2;
    *(uint *)(puVar5 + 1) = param_3;
  }
  return puVar5;
}


