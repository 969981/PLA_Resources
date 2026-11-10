/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01469138; name: FUN_01469138
 */


undefined8 FUN_01469138(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong local_78;
  long *local_70;
  undefined8 local_68;
  long *local_60;
  int local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined1 uStack_4c;
  undefined1 uStack_4b;
  undefined1 uStack_4a;
  undefined4 local_48;
  undefined1 local_44;
  undefined4 local_40;
  undefined2 uStack_3c;
  undefined2 uStack_3a;
  undefined4 local_38;
  undefined2 local_34;
  
  local_78 = 0xc63b8b496c6c79f0;
  local_70 = (long *)0x38d5318;
  local_68 = 0x19;
  local_60 = (long *)0x0;
  uVar5 = FUN_028501c4(&local_78);
  if (local_60 != (long *)0x0) {
    (**(code **)(*local_60 + 0x20))();
  }
  if ((uVar5 & 1) == 0) {
    local_78 = local_78 & 0xffffffffffffff00;
    local_48 = 0;
    local_70 = (long *)0x0;
    local_68 = 0;
    local_44 = 0;
    local_40 = 0;
    uStack_3c = 0;
    uStack_3a = 0;
    local_38 = 0;
    local_34 = 0;
    local_60 = (long *)&DAT_cbf29ce484222645;
    local_58 = 0;
    uStack_54 = 0;
    uStack_50 = 0;
    uStack_4c = 0;
    uStack_4b = 0;
    uStack_4a = 0;
    lVar6 = FUN_01467b34(*(undefined8 *)(param_1 + 0x4c8),"View_Top");
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    local_68 = *param_2;
    local_58 = *(int *)(param_2 + 1);
    uStack_54 = *(undefined4 *)((long)param_2 + 0xc);
    uStack_50 = *(undefined4 *)(param_2 + 2);
    uStack_4c = *(undefined1 *)((long)param_2 + 0x14);
    uStack_4a = *(undefined1 *)(param_2 + 3);
    local_44 = *(undefined1 *)(param_2 + 4);
    local_40 = *(undefined4 *)((long)param_2 + 0x24);
    local_48 = *(undefined4 *)((long)param_2 + 0x1c);
    local_38 = *(undefined4 *)(param_2 + 5);
    local_34 = *(undefined2 *)((long)param_2 + 0x2c);
    uStack_4b = *(undefined1 *)((long)param_2 + 0x15);
    if (local_58 == 0) {
      local_78 = (ulong)local_78._1_7_ << 8;
      FUN_0148d5e0(lVar6,&local_78);
    }
    else {
      local_78 = CONCAT71(local_78._1_7_,2);
      FUN_0148db64(lVar6,&local_78);
    }
    if (local_70 != (long *)0x0) {
      plVar1 = local_70 + 10;
      do {
        iVar4 = (int)*plVar1 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*local_70 + 0x10))();
      }
    }
    uVar7 = 1;
  }
  else {
    uVar7 = 0;
  }
  return uVar7;
}


