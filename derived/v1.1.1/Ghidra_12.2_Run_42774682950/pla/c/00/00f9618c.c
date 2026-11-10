/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00f9618c; name: FUN_00f9618c
 */


undefined1 FUN_00f9618c(long param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined1 local_a8 [4];
  undefined4 local_a4;
  undefined1 *local_a0;
  code *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  undefined1 *apuStack_80 [12];
  undefined1 local_14 [4];
  
  local_a8[0] = 1;
  local_a0 = &LAB_028aea54;
  local_14[0] = 0;
  local_98 = FUN_028aea98;
  local_90 = &LAB_028aea9c;
  apuStack_80[0] = local_14;
  local_88 = &LAB_028aeaa8;
  local_a4 = param_2;
  FUN_028aafe0(param_1,param_1 + 0x118,local_a8,&local_a0);
  pcVar1 = local_98;
  if (local_98 != (code *)0x0) {
    local_90 = (undefined1 *)0x0;
    local_88 = (undefined1 *)0x0;
    local_a0 = (undefined1 *)0x0;
    local_98 = (code *)0x0;
    (*pcVar1)(apuStack_80);
  }
  return local_14[0];
}


