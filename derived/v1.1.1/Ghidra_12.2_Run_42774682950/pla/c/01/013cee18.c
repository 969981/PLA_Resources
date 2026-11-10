/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013cee18; name: FUN_013cee18
 */


void FUN_013cee18(long param_1,undefined8 param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
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
  if (*(char *)((long)plVar4 + 0xa3) != '\x01') {
    *(undefined1 *)((long)plVar4 + 0xa3) = 1;
    (**(code **)(*plVar4 + 0xa0))(plVar4,1);
  }
  if (*(char *)((long)plVar4 + 0xa2) != '\x01') {
    *(undefined1 *)((long)plVar4 + 0xa2) = 1;
    (**(code **)(*plVar4 + 0x98))(plVar4,1);
  }
  local_50 = 0xe2a06d3a0634e918;
  pcStack_48 = "grid_panel";
  local_40 = 10;
  local_38 = (long *)0x0;
  lVar5 = FUN_00d2ec48(param_1 + 0x180,&local_50);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
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
        piVar2 = (int *)(lVar7 + 0xc);
        if (*(int *)(lVar7 + 0x1c) != 0) {
          iVar8 = iVar6;
          iVar1 = (int)local_50;
          piVar2 = (int *)(lVar7 + 0x10);
        }
        lVar7 = *(long *)(*(long *)(lVar7 + 0x40) + 0x20) +
                (ulong)(uint)(iVar8 + *piVar2 * iVar1) * 0x28;
        *(ulong *)(lVar7 + 0x20) = *(ulong *)(lVar7 + 0x20) | 1;
        iVar8 = (int)local_50;
        while (iVar8 = iVar8 + 1, iVar8 < (int)local_28 + (int)local_50) {
          lVar7 = *(long *)(lVar5 + 0x468);
          iVar1 = iVar8;
          iVar3 = iVar6;
          piVar2 = (int *)(lVar7 + 0xc);
          if (*(int *)(lVar7 + 0x1c) != 0) {
            iVar1 = iVar6;
            iVar3 = iVar8;
            piVar2 = (int *)(lVar7 + 0x10);
          }
          lVar7 = *(long *)(*(long *)(lVar7 + 0x40) + 0x20) +
                  (ulong)(uint)(iVar1 + *piVar2 * iVar3) * 0x28;
          *(ulong *)(lVar7 + 0x20) = *(ulong *)(lVar7 + 0x20) | 1;
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < local_50._4_4_ + local_28._4_4_);
  }
  return;
}


