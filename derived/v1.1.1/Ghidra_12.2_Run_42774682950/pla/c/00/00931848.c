/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00931848; name: FUN_00931848
 */


void FUN_00931848(undefined8 *param_1)

{
  byte bVar1;
  byte *pbVar2;
  undefined1 *puVar3;
  
  puVar3 = &DAT_cbf29ce484222645;
  FUN_009318d0();
  *param_1 = &DAT_0427d478;
  param_1[9] = &PTR_LAB_0427d4b0;
  pbVar2 = *(byte **)PTR_PTR_04379cf8;
  param_1[0xc] = pbVar2;
  bVar1 = *pbVar2;
  while (bVar1 != 0) {
    pbVar2 = pbVar2 + 1;
    puVar3 = (undefined1 *)(((ulong)puVar3 ^ (ulong)bVar1) * 0x100000001b3);
    bVar1 = *pbVar2;
  }
  param_1[0xb] = puVar3;
  param_1[0xd] = 0;
  param_1[1] = 0;
  param_1[2] = param_1;
  return;
}


