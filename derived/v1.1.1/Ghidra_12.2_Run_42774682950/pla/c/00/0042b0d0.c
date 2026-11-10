/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0042b0d0; name: FUN_0042b0d0
 */


void FUN_0042b0d0(long param_1)

{
  int iVar1;
  int local_28 [2];
  undefined1 *local_20;
  undefined1 local_4 [4];
  
  iVar1 = FUN_0040c070(*(undefined8 *)(param_1 + 0x10));
  local_28[0] = iVar1 + 0xe;
  if (-1 < iVar1 + 7) {
    local_28[0] = iVar1 + 7;
  }
  local_28[0] = local_28[0] >> 3;
  local_28[1] = 2;
  local_20 = local_4;
  local_4[0] = 0xff;
  iVar1 = FUN_0041cf10(local_28,0);
  FUN_0040a0e0(1,iVar1 << 1,0x10);
  return;
}


