/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00e1ac80; name: FUN_00e1ac80
 */


void FUN_00e1ac80(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR__ostream_041ee710;
  puVar2 = param_1 + 0xe;
  *puVar2 = &PTR__ostream_041ee738;
  std::ios_base::init(puVar2);
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  *param_1 = &PTR_FUN_041ee6a0;
  param_1[0x1f] = 0;
  *puVar2 = &PTR_FUN_041ee6c8;
  std::streambuf::streambuf((streambuf *)(param_1 + 1));
  puVar1 = PTR_vtable_0437c0b0 + 0x10;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[1] = puVar1;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0x10;
  return;
}


