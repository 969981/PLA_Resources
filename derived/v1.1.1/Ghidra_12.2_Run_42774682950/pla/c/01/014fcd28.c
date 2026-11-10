/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014fcd28; name: FUN_014fcd28
 */


void FUN_014fcd28(long param_1,ulong param_2,uint param_3,uint param_4)

{
  long lVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined8 local_90;
  char *pcStack_88;
  undefined8 local_80;
  long *local_78;
  undefined8 local_70;
  char *pcStack_68;
  undefined8 local_60;
  long *local_58;
  
  lVar1 = param_1 + (param_2 & 0xffffffff) * 4;
  uVar10 = *(undefined4 *)(lVar1 + 0x640);
  uVar9 = *(undefined8 *)(param_1 + 0x600);
  uVar6 = FUN_014fcf64(param_1,uVar10);
  uVar7 = FUN_02c618d4(*(undefined8 *)(param_1 + 0x5b8),*(undefined4 *)(lVar1 + 0x640));
  FUN_014f1640(uVar9,uVar10,&DAT_043c5f28 + (ulong)param_3 * 0x28,~uVar6 & 1,uVar7 & 1,param_4 & 1);
  if (param_3 == 4) {
    plVar8 = *(long **)(param_1 + 0x2c8);
    if (plVar8 != (long *)0x0) {
      plVar2 = plVar8 + 10;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *(int *)plVar2 = (int)*plVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    local_60 = 0x21;
    local_70 = 0x26ef585a66f62315;
    pcStack_68 = "anime_L_list_w_04_catch_wz_select";
    local_90 = 0x6aa73964d0353b6;
    pcStack_88 = "anime_L_list_w_04_catch_noset";
    local_80 = 0x1d;
    if (*(int *)(lVar1 + 0x640) == 0) {
      local_70 = 0x6aa73964d0353b6;
      pcStack_68 = "anime_L_list_w_04_catch_noset";
      local_90 = 0x26ef585a66f62315;
      pcStack_88 = "anime_L_list_w_04_catch_wz_select";
      local_60 = 0x1d;
      local_80 = 0x21;
    }
    local_58 = (long *)0x0;
    local_78 = (long *)0x0;
    FUN_0283b430(plVar8,&local_90);
    FUN_0283b1e8(plVar8,&local_70);
    if (local_78 != (long *)0x0) {
      (**(code **)(*local_78 + 0x20))();
    }
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x20))();
    }
    local_70 = 0x7ae6170161b4a458;
    pcStack_68 = "anime_L_list_w_04_switch_selecting_noset";
    local_60 = 0x28;
    local_58 = (long *)0x0;
    FUN_0283b1e8(plVar8,&local_70);
    uVar10 = 0x40400000;
    if (*(int *)(lVar1 + 0x640) != 0) {
      uVar10 = 0x3f800000;
    }
    FUN_0283b748(uVar10,plVar8,&local_70);
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x20))();
    }
    local_70 = 0x26e5dc225aef94bd;
    pcStack_68 = "anime_L_list_w_04_select";
    local_60 = 0x18;
    local_58 = (long *)0x0;
    FUN_0283b1e8(plVar8,&local_70);
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x20))();
    }
    if (plVar8 != (long *)0x0) {
      plVar2 = plVar8 + 10;
      do {
        iVar5 = (int)*plVar2 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *(int *)plVar2 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  return;
}


