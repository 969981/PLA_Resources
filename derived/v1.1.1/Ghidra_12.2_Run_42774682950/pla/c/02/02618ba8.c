/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02618ba8; name: FUN_02618ba8
 */


void FUN_02618ba8(long *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((char)param_1[0xd1] != '\0') && ((*(byte *)(param_1 + 0xd2) & 1) == 0)) {
    iVar1 = (**(code **)(*param_1 + 0x358))(param_1);
    if (iVar1 == 0) {
      if (0 < *(int *)((long)param_1 + 0x68c)) {
        iVar1 = *(int *)((long)param_1 + 0x68c) + -1;
        *(int *)((long)param_1 + 0x68c) = iVar1;
        if (iVar1 != 0) {
          return;
        }
        iVar1 = (**(code **)(*param_1 + 0x360))(param_1);
        if (iVar1 == 0) {
          uVar2 = (**(code **)(*param_1 + 0x370))(param_1);
          *(undefined4 *)((long)param_1 + 0x68c) = uVar2;
          *(undefined1 *)((long)param_1 + 0x689) = 1;
          return;
        }
        if (iVar1 == 1) {
          *(undefined4 *)((long)param_1 + 0x68c) = 1;
          return;
        }
        if (iVar1 != 2) {
          return;
        }
      }
      uVar2 = (**(code **)(*param_1 + 0x370))(param_1);
      *(undefined4 *)((long)param_1 + 0x68c) = uVar2;
    }
    else {
      if (iVar1 == 2) {
        if (*(char *)((long)param_1 + 0x689) != '\0') {
                    /* WARNING: Could not recover jumptable at 0x02618c60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*param_1 + 0x368))(param_1);
          return;
        }
      }
      else if (iVar1 != 1) {
        return;
      }
      *(undefined4 *)((long)param_1 + 0x68c) = 0;
    }
  }
  return;
}


