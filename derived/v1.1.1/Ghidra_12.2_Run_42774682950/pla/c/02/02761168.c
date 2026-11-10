/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02761168; name: FUN_02761168
 */


void FUN_02761168(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 < *(undefined8 **)(param_1 + 0x10)) {
    *puVar1 = &PTR_LAB_0426b978;
    puVar1[1] = &PTR_FUN_0426b958;
    FUN_02762fb0(puVar1 + 2,param_2 + 0x10);
    FUN_02762fb0(puVar1 + 6,param_2 + 0x30);
    FUN_02763008(puVar1 + 10,param_2 + 0x50);
    uVar2 = *(undefined8 *)(param_2 + 0x78);
    puVar1[0xe] = *(undefined8 *)(param_2 + 0x70);
    puVar1[0xf] = uVar2;
    FUN_02762fb0(puVar1 + 0x10,param_2 + 0x80);
    FUN_027630b8(puVar1 + 0x14,param_2 + 0xa0);
    FUN_02762fb0(puVar1 + 0x18,param_2 + 0xc0);
    uVar2 = *(undefined8 *)(param_2 + 0xe8);
    puVar1[0x1c] = *(undefined8 *)(param_2 + 0xe0);
    puVar1[0x1d] = uVar2;
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0xf0;
    return;
  }
  FUN_02762d20(param_1,param_2);
  return;
}


