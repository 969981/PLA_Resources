/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f19998; name: FUN_02f19998
 */


undefined8 FUN_02f19998(undefined8 param_1,long *param_2,long *param_3)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long local_38;
  
  uVar2 = (**(code **)(*param_3 + 0x28))(param_3);
  if ((uVar2 & 1) != 0) {
    local_38 = 0;
    lVar3 = FUN_02e966f8(DAT_0440a148,*(undefined4 *)((long)param_2 + 0xc),&local_38);
    if (lVar3 == 0) {
      return 0;
    }
    iVar1 = (**(code **)(*param_3 + 0x30))(param_3,lVar3,*param_2);
    if (iVar1 == 1) {
      if ((*param_2 != 0) && (*(int *)((long)param_2 + 0xc) != -1)) {
        FUN_02e968c8(DAT_0440a148);
        if (param_2[2] != 0) {
          FUN_02e8e5e0(param_2[2],0);
        }
      }
      *param_2 = lVar3;
      param_2[2] = local_38;
      return 1;
    }
    FUN_02e968c8(DAT_0440a148,*(undefined4 *)((long)param_2 + 0xc));
    if (local_38 == 0) {
      return 0;
    }
    FUN_02e8e5e0(local_38,0);
  }
  return 0;
}


