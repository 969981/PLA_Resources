/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e433e4; name: FUN_02e433e4
 */


void FUN_02e433e4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auStack_48 [8];
  undefined1 *local_40;
  ulong local_38;
  undefined1 auStack_24 [4];
  
  local_38 = 0;
  *(undefined1 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = param_2;
  local_40 = (undefined1 *)0x0;
  if (*(long *)(DAT_04409a48 + 0xe0) != -1) {
    FUN_02e44d58(auStack_48,*(long *)(DAT_04409a48 + 0xe0),auStack_24);
  }
  for (lVar1 = *(long *)(PTR_DAT_043885e0 + 0x10); lVar1 != 0; lVar1 = *(long *)(lVar1 + 0x10)) {
    FUN_02ef2914(DAT_0440a140,*(undefined8 *)(*(long *)(lVar1 + 8) + 0x48),auStack_48,0);
  }
  *(undefined1 *)(DAT_04409a48 + 0xd8) = 1;
  if ((local_40 != (undefined1 *)0x0) &&
     (local_38 = local_38 & 0xffffffff00000000, auStack_48 != local_40)) {
    (*DAT_0442d158)(4);
  }
  return;
}


