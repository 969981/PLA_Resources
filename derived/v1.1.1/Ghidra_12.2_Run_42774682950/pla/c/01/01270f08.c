/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01270f08; name: FUN_01270f08
 */


void FUN_01270f08(long param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 local_50;
  char *pcStack_48;
  undefined8 local_40;
  long *local_38;
  
  if ((ulong)*(byte *)(param_1 + 0x904) < 3) {
    FUN_01270ea0(param_1,*(undefined4 *)(param_1 + (ulong)*(byte *)(param_1 + 0x904) * 4 + 0x8f8),0)
    ;
    puVar3 = (undefined4 *)FUN_0127103c(param_1);
    uVar4 = FUN_01271080(param_1);
    uVar2 = FUN_0281a508();
    *puVar3 = uVar2;
    uVar2 = FUN_0281a4fc(uVar4);
    puVar3[1] = uVar2;
    iVar5 = 1;
    if (param_2 == 0) {
      iVar5 = 2;
    }
    uVar1 = (iVar5 + (uint)*(byte *)(param_1 + 0x904)) % 3;
    *(char *)(param_1 + 0x904) = (char)uVar1;
    if (uVar1 != 3) {
      FUN_01270ea0(param_1,*(undefined4 *)(param_1 + (ulong)(ushort)uVar1 * 4 + 0x8f8),1);
      FUN_01271108(param_1,param_2);
      local_50 = 0xda74cfea38becf9f;
      pcStack_48 = "anime_list_out";
      local_40 = 0xe;
      local_38 = (long *)0x0;
      FUN_00d2df7c(param_1 + 0x180,&local_50);
      if (local_38 != (long *)0x0) {
        (**(code **)(*local_38 + 0x20))();
      }
      *(undefined1 *)(param_1 + 0x924) = 1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


