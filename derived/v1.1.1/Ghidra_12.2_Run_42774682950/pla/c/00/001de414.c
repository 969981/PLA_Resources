/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001de414; name: FUN_001de414
 */


undefined8 FUN_001de414(undefined8 param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 local_18;
  int local_14;
  
  local_14 = 0;
  local_18 = 4;
  iVar1 = nnsocketGetSockOpt(param_1,0xffff,0x1007,&local_14,&local_18);
  if (iVar1 != 0) {
    local_14 = nnsocketGetLastErrno();
  }
  uVar2 = 1;
  if ((local_14 != 0) && (local_14 != 0x6a)) {
    uVar2 = 0;
  }
  if (param_2 != (int *)0x0) {
    *param_2 = local_14;
  }
  return uVar2;
}


