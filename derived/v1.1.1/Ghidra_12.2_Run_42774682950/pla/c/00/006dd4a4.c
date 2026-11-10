/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006dd4a4; name: FUN_006dd4a4
 */


int FUN_006dd4a4(byte *param_1)

{
  int iVar1;
  FsContext *pFVar2;
  undefined1 *local_28;
  
  if (param_1[0x20] != 0) {
    return 0;
  }
  local_28 = &LAB_006dd53c;
  pFVar2 = (FsContext *)nn::fs::GetCurrentThreadFsContext();
  nn::fs::SetCurrentThreadFsContext((FsContext *)&local_28);
  if ((*param_1 & 1) == 0) {
    iVar1 = nn::fs::MountRom((char *)(param_1 + 1));
  }
  else {
    iVar1 = nn::fs::MountRom(*(char **)(param_1 + 0x10));
  }
  if (iVar1 == 0) {
    param_1[0x20] = 1;
  }
  nn::fs::SetCurrentThreadFsContext(pFVar2);
  return iVar1;
}


