/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00fa5b14; name: FUN_00fa5b14
 */


void FUN_00fa5b14(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  
  puVar1 = PTR_DAT_0437d9a0 + 0x40;
  *param_1 = (long)(PTR_DAT_0437d9a0 + 0x18);
  plVar2 = param_1 + 0xe;
  *plVar2 = (long)puVar1;
  std::ios_base::init(plVar2);
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  puVar1 = PTR_DAT_0437d9a8 + 0x40;
  *param_1 = (long)(PTR_DAT_0437d9a8 + 0x18);
  *plVar2 = (long)puVar1;
  std::streambuf::streambuf((streambuf *)(param_1 + 1));
  puVar1 = PTR_vtable_0437c0b0 + 0x10;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[1] = (long)puVar1;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0x10;
  return;
}


