/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00929ec4; name: FUN_00929ec4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00929ec4(undefined8 param_1,int param_2,short param_3,uint param_4,int param_5)

{
  int *piVar1;
  ushort uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  long *local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 uStack_40;
  long *local_38;
  char *local_30;
  undefined8 uStack_28;
  undefined4 local_14;
  
  if (((DAT_043a8728 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_043a8728), iVar5 != 0)) {
    DAT_043a8698 = 0x1e3;
    DAT_043a869c = 1;
    _DAT_043a86a0 = 0x2000001cb;
    local_70 = 0xed823a8180ff1aeb;
    local_68 = "tokiNoHoukou_ActPoint_Target_Technical";
    local_60 = 0x26;
    FUN_02a4754c(0x43a86a8,&local_70);
    DAT_043a86cc = 1;
    DAT_043a86c8 = 0x1e4;
    DAT_043a86d0 = 0x2000001cc;
    local_38 = (long *)0x30b7994926856f0e;
    local_30 = "akuuSetudan_ActPoint_Target_Technical";
    uStack_28 = 0x25;
    FUN_02a4754c(0x43a86d8,&local_38);
    DAT_043a86fc = 1;
    DAT_043a86f8 = 0x1e7;
    DAT_043a8700 = 0x2000001d3;
    local_50 = 0x2625b1875672c73e;
    local_48 = "shadowDive_ActPoint_Target_Technical";
    uStack_40 = 0x24;
    FUN_02a4754c(&DAT_043a8708,&local_50);
    FUN_00100250(0x929e20,0,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043a8728);
  }
  if ((((DAT_043a8698 == param_2) && (DAT_043a869c == param_3)) && (DAT_043a86a0 == param_4)) &&
     (DAT_043a86a4 == param_5)) {
    lVar9 = 0;
  }
  else if (((DAT_043a86c8 == param_2) && (DAT_043a86cc == param_3)) &&
          (((uint)DAT_043a86d0 == param_4 && (DAT_043a86d0._4_4_ == param_5)))) {
    lVar9 = 1;
  }
  else {
    if (((DAT_043a86f8 != param_2) || (DAT_043a86fc != param_3)) ||
       (((uint)DAT_043a8700 != param_4 || (DAT_043a8700._4_4_ != param_5)))) {
      plVar8 = &DAT_0428af30;
      plVar7 = &DAT_0428af30 + (ulong)param_4 * 6;
      lVar9 = *plVar7;
      if (param_5 == 2) {
        if ((lVar9 != 0) && (plVar8 = &DAT_0428af30, *(char *)(lVar9 + 0x1e1) != '\0')) {
          plVar8 = plVar7;
        }
        piVar1 = (int *)((long)*(uint **)(*plVar8 + 0x250) + (ulong)**(uint **)(*plVar8 + 0x250));
        if (*(ushort *)((long)piVar1 - (long)*piVar1) < 0x97) {
          return 0;
        }
        uVar2 = ((ushort *)((long)piVar1 - (long)*piVar1))[0x4b];
      }
      else {
        if ((lVar9 != 0) && (plVar8 = &DAT_0428af30, *(char *)(lVar9 + 0x1e1) != '\0')) {
          plVar8 = plVar7;
        }
        piVar1 = (int *)((long)*(uint **)(*plVar8 + 0x250) + (ulong)**(uint **)(*plVar8 + 0x250));
        if (*(ushort *)((long)piVar1 - (long)*piVar1) < 0x95) {
          return 0;
        }
        uVar2 = ((ushort *)((long)piVar1 - (long)*piVar1))[0x4a];
      }
      if ((ulong)uVar2 == 0) {
        return 0;
      }
      return *(undefined4 *)((long)piVar1 + (ulong)uVar2);
    }
    lVar9 = 2;
  }
  local_70 = 0x63e2672f9e43a54e;
  local_68 = "battle_logic";
  local_60 = 0xc;
  local_58 = (long *)0x0;
  if (((*PTR_DAT_04379660 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04379660), iVar5 != 0))
  {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  uVar6 = *(undefined8 *)PTR_DAT_04379668;
  *(undefined8 *)PTR_DAT_04379670 = uVar6;
  FUN_00d7d9e4(&local_38,uVar6,&local_70);
  if (local_38 == (long *)0x0) {
    local_14 = 0;
  }
  else {
    local_14 = FUN_00d78f50(local_38,lVar9 * 0x30 + 0x43a86a8);
    if (local_38 != (long *)0x0) {
      plVar8 = local_38 + 10;
      do {
        iVar5 = (int)*plVar8 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar4) {
          *(int *)plVar8 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*local_38 + 0x10))();
      }
    }
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  return local_14;
}


