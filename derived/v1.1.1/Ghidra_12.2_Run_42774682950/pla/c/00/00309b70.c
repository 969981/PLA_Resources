/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00309b70; name: FUN_00309b70
 */


bool FUN_00309b70(undefined8 param_1)

{
  int iVar1;
  undefined4 local_8;
  undefined4 local_4;
  
  if (*(int *)PTR_DAT_043739f8 == 0) {
    local_4 = 0;
    iVar1 = nnsocketSetSockOpt(param_1,0x29,0x1b,&local_4,4);
    return iVar1 == 0;
  }
  local_8 = 1;
  nnsocketSetSockOpt(param_1,0x29,0x1b,&local_8,4);
  return false;
}


