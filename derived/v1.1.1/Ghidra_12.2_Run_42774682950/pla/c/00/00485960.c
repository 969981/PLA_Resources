/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00485960; name: FUN_00485960
 */


void FUN_00485960(long param_1,undefined8 param_2)

{
  undefined1 auStack_198 [40];
  undefined1 auStack_170 [40];
  undefined1 auStack_148 [80];
  byte local_f8 [31];
  byte local_d9;
  undefined1 auStack_b8 [40];
  undefined1 auStack_90 [40];
  undefined1 auStack_68 [40];
  char local_40 [32];
  
  FUN_00429910(param_2,0x20,local_f8);
  local_f8[0] = local_f8[0] & 0xf8;
  local_d9 = local_d9 & 0x3f | 0x40;
  FUN_00482e40(auStack_198,local_f8);
  FUN_0048a0d0(auStack_68,auStack_148);
  FUN_0048a900(auStack_90,auStack_198,auStack_68);
  FUN_0048a900(auStack_b8,auStack_170,auStack_68);
  FUN_0048ac80(param_1,auStack_b8);
  FUN_0048ac80(local_40,auStack_90);
  *(byte *)(param_1 + 0x1f) = *(byte *)(param_1 + 0x1f) ^ local_40[0] << 7;
  FUN_004006a0(local_f8,0x40);
  return;
}


