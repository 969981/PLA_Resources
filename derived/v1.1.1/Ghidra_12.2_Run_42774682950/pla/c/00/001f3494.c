/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001f3494; name: FUN_001f3494
 */


int FUN_001f3494(int param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if (param_1 != 0) {
    if (param_1 < 0) {
      nnsocketSetLastErrno(0x16);
      return -1;
    }
    auVar3 = FUN_001f8fb4();
    puVar1 = PTR_DAT_04372740;
    iVar2 = param_1;
    do {
      iVar2 = nnsocketPoll(0,0,iVar2);
      if (iVar2 != -1) {
        return -(uint)(iVar2 != 0);
      }
      iVar2 = nnsocketGetLastErrno();
      if (iVar2 != 0) {
        if (iVar2 != 4) {
          return -1;
        }
        if (*(int *)puVar1 != 0) {
          return -1;
        }
      }
      auVar4 = FUN_001f8fb4();
      iVar2 = FUN_001f8fe0(auVar4._0_8_,auVar4._8_8_,auVar3._0_8_,auVar3._8_8_);
      iVar2 = param_1 - iVar2;
    } while (0 < iVar2);
  }
  return 0;
}


