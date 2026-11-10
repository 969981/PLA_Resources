/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ecddbc; name: FUN_02ecddbc
 */


uint FUN_02ecddbc(long param_1,uint *param_2)

{
  uint *puVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  
  puVar1 = (uint *)(param_1 + 0x2a3);
  uVar3 = *puVar1;
  if ((uVar3 >> 7 & 1) == 0) {
    *puVar1 = uVar3 | 0x80;
    lVar4 = *(long *)(param_1 + 0x180);
    if ((*(byte *)(lVar4 + 0xab) >> 4 & 1) == 0) {
      do {
        lVar6 = *(long *)(lVar4 + 0x80);
        if (lVar6 == 0) break;
        lVar4 = lVar6;
      } while ((*(byte *)(lVar6 + 0xab) >> 4 & 1) == 0);
    }
    uVar5 = *(byte *)(lVar4 + 0xc0) >> 3 & 7;
    *param_2 = uVar5;
    uVar3 = *(byte *)(lVar4 + 0xc1) & 0xf;
    if (uVar3 == 3) {
      uVar2 = (**(code **)(**(long **)(param_1 + 0x180) + 0x230))
                        (*(long **)(param_1 + 0x180),*(undefined8 *)(param_1 + 0x228));
      uVar5 = *param_2;
      uVar3 = 1;
      if ((uVar2 & 1) != 0) {
        uVar3 = 2;
      }
    }
    *puVar1 = uVar5 & 7 | uVar3 << 3 | *puVar1 & 0xffffff80;
  }
  else {
    *param_2 = uVar3 & 7;
    uVar3 = *puVar1 >> 3 & 0xf;
  }
  return uVar3;
}


