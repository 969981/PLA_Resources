/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006dbfd0; name: FUN_006dbfd0
 */


undefined8 FUN_006dbfd0(undefined8 param_1)

{
  int iVar1;
  ulong uVar2;
  undefined1 auStack_60 [8];
  undefined4 local_58 [10];
  ulong local_30;
  undefined8 local_28;
  
  if (DAT_0419cca8 != '\0') {
    if (((DAT_043a0d60 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043a0d60), iVar1 != 0)) {
      DAT_043a0d70 = 0;
      DAT_043a0d78 = FUN_00612290();
      DAT_043a0d80 = 0;
      DAT_043a0d68 = &DAT_043a0d70;
      DAT_043a0d88 = 0;
      DAT_043a0d90 = 0;
      DAT_043a0d98 = 0;
      DAT_043a0da0 = FUN_00612290();
      FUN_006dd38c(local_58,"_npln");
      iVar1 = FUN_006dd4a4(local_58);
      if (iVar1 == 0) {
        memset(&DAT_0439fd58,0x20,0x1000);
        iVar1 = nn::fs::OpenFile((FileHandle *)&local_28,"_npln:/npln_config.json",1);
        if (iVar1 == 0) {
          nn::fs::GetFileSize(&local_30,local_28);
          if (0xfff < local_30) {
            local_30 = 0x1000;
          }
          iVar1 = nn::fs::ReadFile(auStack_60,local_28,0,&DAT_0439fd58,local_30);
          nn::fs::CloseFile(local_28);
        }
        if (iVar1 == 0) {
          FUN_006dd1d4(&DAT_043a0d68,&DAT_0439fd58,0x1000);
        }
      }
      FUN_006dd448(local_58);
      DAT_043a0d58 = 1;
      FUN_00100250(FUN_006dc180,&DAT_043a0d68,&PTR_LOOP_0411a000);
      __cxa_guard_release(&DAT_043a0d60);
    }
    uVar2 = FUN_006dc224(&DAT_043a0d68,param_1);
    if ((uVar2 & 1) == 0) {
      local_58[0] = 0x80341;
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0,(Result *)local_58,"");
    }
    param_1 = FUN_006dc330(&DAT_043a0d68,param_1);
  }
  return param_1;
}


