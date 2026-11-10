/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0086fab0; name: _INIT_128
 */


void _INIT_128(void)

{
  undefined *puVar1;
  undefined4 local_28 [4];
  undefined4 local_18 [2];
  
  puVar1 = PTR_DAT_04378428;
  local_28[0] = 0;
  *(undefined4 *)PTR_DAT_04378428 = 0;
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_28 | 4),(Result *)local_18);
  FUN_007ee578(puVar1 + 4,local_28);
  *(undefined4 *)(puVar1 + 0x14) = 0xffffffff;
  *(undefined8 *)(puVar1 + 0x28) = 0;
  *(undefined8 *)(puVar1 + 0x18) = 0;
  *(undefined8 *)(puVar1 + 0x20) = 0;
  return;
}


