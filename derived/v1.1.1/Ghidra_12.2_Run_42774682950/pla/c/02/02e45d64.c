/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e45d64; name: FUN_02e45d64
 */


void FUN_02e45d64(long *param_1)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long *local_70;
  ulong uStack_68;
  long local_60;
  undefined8 uStack_58;
  long *local_50;
  undefined8 local_48;
  long local_40;
  undefined8 local_38;
  
  iVar4 = (int)param_1[1];
  uVar2 = local_48._4_4_;
  if (iVar4 == 0) {
    local_48 = (ulong)local_48._4_4_ << 0x20;
  }
  else {
    local_48 = (ulong)local_48._4_4_ << 0x20;
    local_40 = *(long *)*param_1;
    local_38 = 0;
    if (local_40 == 0) {
      if (iVar4 - 1U != 0) {
        uVar6 = 0;
        do {
          local_40 = ((long *)*param_1)[uVar6 + 1];
          if (local_40 != 0) goto LAB_02e45f24;
          uVar6 = uVar6 + 1;
        } while (iVar4 - 1U != uVar6);
        local_40 = 0;
LAB_02e45f24:
        iVar4 = (int)uVar6 + 1;
      }
      local_48 = CONCAT44(uVar2,iVar4);
    }
    if (local_40 != 0) {
      local_50 = param_1;
      do {
        lVar3 = local_40;
        lVar7 = *(long *)(local_40 + 0x78);
        FUN_02e45fac(&local_70,param_1,&local_50);
        local_50 = local_70;
        local_48 = uStack_68;
        local_40 = local_60;
        local_38 = uStack_58;
        FUN_02e50298(lVar3);
        FUN_02e473f0(param_1 + 9,lVar3);
        if ((lVar7 != 0) && (*(int *)(lVar7 + 0x48) == 0)) {
          FUN_02e45218(param_1,lVar7);
        }
      } while (local_40 != 0);
    }
  }
  iVar4 = (int)param_1[4];
  if (iVar4 != 0) {
    plVar1 = param_1 + 3;
    uVar6 = local_48 >> 0x20;
    local_48 = local_48 & 0xffffffff00000000;
    local_40 = *(long *)*plVar1;
    local_38 = 0;
    if (local_40 == 0) {
      if (iVar4 - 1U != 0) {
        uVar5 = 0;
        do {
          local_40 = ((long *)*plVar1)[uVar5 + 1];
          if (local_40 != 0) goto LAB_02e45e5c;
          uVar5 = uVar5 + 1;
        } while (iVar4 - 1U != uVar5);
        local_40 = 0;
LAB_02e45e5c:
        iVar4 = (int)uVar5 + 1;
      }
      local_48 = CONCAT44((int)uVar6,iVar4);
    }
    if (local_40 != 0) {
      local_50 = plVar1;
      do {
        lVar3 = local_40;
        FUN_02e46028(&local_70,plVar1,&local_50);
        local_50 = local_70;
        local_48 = uStack_68;
        local_40 = local_60;
        local_38 = uStack_58;
        FUN_02e47d6c(lVar3);
        FUN_02e47fdc(param_1 + 10,lVar3);
      } while (local_40 != 0);
    }
  }
  *(undefined1 *)((long)param_1 + 0x7c) = 1;
  return;
}


