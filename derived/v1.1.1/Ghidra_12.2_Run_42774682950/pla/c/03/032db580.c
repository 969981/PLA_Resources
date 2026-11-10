/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032db580; name: FUN_032db580
 */


void FUN_032db580(undefined8 *param_1,uint param_2,uint param_3)

{
  ulong *puVar1;
  uint uVar2;
  
  uVar2 = (uint)*param_1;
  if ((uVar2 >> 0x14 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (uVar2 & 0xfffff) - (uVar2 >> 1 & 0x55555);
    uVar2 = (uVar2 >> 2 & 0x33333333) + (uVar2 & 0x33333333);
    uVar2 = *(uint *)(param_1 + (ulong)((uVar2 + (uVar2 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2)
            & 0xf0000000;
  }
  puVar1 = (ulong *)FUN_032e1fa4(param_1,0x100000);
  *puVar1 = (ulong)(param_2 & 0xffff | (param_3 & 0xfff) << 0x10 | uVar2);
  return;
}


