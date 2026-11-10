/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013c50d4; name: FUN_013c50d4
 */


void FUN_013c50d4(long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  long *plVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  int iVar8;
  undefined8 local_50;
  char *pcStack_48;
  undefined8 local_40;
  long *local_38;
  undefined8 local_28;
  
  plVar4 = (long *)FUN_00d2e944(param_1 + 0x180);
  if (plVar4 != (long *)0x0) {
    local_50 = 0xe2a06d3a0634e918;
    pcStack_48 = "grid_panel";
    local_40 = 10;
    local_38 = (long *)0x0;
    lVar5 = FUN_00d2ec48(param_1 + 0x180,&local_50);
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x20))();
    }
    if (lVar5 != 0) {
      if (*(char *)((long)plVar4 + 0xa3) != '\x01') {
        *(undefined1 *)((long)plVar4 + 0xa3) = 1;
        (**(code **)(*plVar4 + 0xa0))(plVar4,1);
      }
      if (*(char *)((long)plVar4 + 0xa2) != '\x01') {
        *(undefined1 *)((long)plVar4 + 0xa2) = 1;
        (**(code **)(*plVar4 + 0x98))(plVar4,1);
      }
      local_50 = 0;
      local_28 = 0;
      FUN_0280e56c(lVar5,param_2,&local_50,&local_28);
      if (0 < local_28._4_4_) {
        iVar6 = local_50._4_4_;
        do {
          if (0 < (int)local_28) {
            lVar7 = *(long *)(lVar5 + 0x468);
            iVar8 = (int)local_50;
            iVar1 = iVar6;
            piVar3 = (int *)(lVar7 + 0xc);
            if (*(int *)(lVar7 + 0x1c) != 0) {
              iVar8 = iVar6;
              iVar1 = (int)local_50;
              piVar3 = (int *)(lVar7 + 0x10);
            }
            lVar7 = *(long *)(*(long *)(lVar7 + 0x40) + 0x20) +
                    (ulong)(uint)(iVar8 + *piVar3 * iVar1) * 0x28;
            *(ulong *)(lVar7 + 0x20) = *(ulong *)(lVar7 + 0x20) | 1;
            iVar8 = (int)local_50;
            while (iVar8 = iVar8 + 1, iVar8 < (int)local_28 + (int)local_50) {
              lVar7 = *(long *)(lVar5 + 0x468);
              iVar1 = iVar8;
              iVar2 = iVar6;
              piVar3 = (int *)(lVar7 + 0xc);
              if (*(int *)(lVar7 + 0x1c) != 0) {
                iVar1 = iVar6;
                iVar2 = iVar8;
                piVar3 = (int *)(lVar7 + 0x10);
              }
              lVar7 = *(long *)(*(long *)(lVar7 + 0x40) + 0x20) +
                      (ulong)(uint)(iVar1 + *piVar3 * iVar2) * 0x28;
              *(ulong *)(lVar7 + 0x20) = *(ulong *)(lVar7 + 0x20) | 1;
            }
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < local_50._4_4_ + local_28._4_4_);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


