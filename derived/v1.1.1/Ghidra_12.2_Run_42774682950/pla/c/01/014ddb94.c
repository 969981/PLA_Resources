/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014ddb94; name: FUN_014ddb94
 */


void FUN_014ddb94(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_48;
  int iStack_44;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar1 = thunk_FUN_00d2e944(param_1 + 0x180);
  if ((lVar1 == 0) || (lVar2 = FUN_00d2eb20(param_1 + 0x180,"grid_panel"), lVar2 == 0)) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  FUN_028077c0(lVar1,1);
  FUN_0280779c(lVar1,1);
  local_40 = 0;
  local_38 = 0;
  FUN_0280e56c(lVar2,param_2,&local_38,&local_40);
  if (0 < local_40._4_4_) {
    uVar3 = local_40 & 0xffffffff;
    iVar4 = local_40._4_4_;
    iVar7 = (int)local_38;
    iVar5 = local_38._4_4_;
    iVar6 = local_38._4_4_;
    do {
      if (0 < (int)uVar3) {
        local_48 = iVar7;
        iStack_44 = iVar6;
        FUN_0280f4d4(lVar2,&local_48,1);
        while( true ) {
          iVar7 = iVar7 + 1;
          uVar3 = local_40 & 0xffffffff;
          if ((int)local_40 + (int)local_38 <= iVar7) break;
          local_48 = iVar7;
          iStack_44 = iVar6;
          FUN_0280f4d4(lVar2,&local_48,1);
        }
        iVar4 = local_40._4_4_;
        iVar7 = (int)local_38;
        iVar5 = local_38._4_4_;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar5 + iVar4);
  }
  return;
}


