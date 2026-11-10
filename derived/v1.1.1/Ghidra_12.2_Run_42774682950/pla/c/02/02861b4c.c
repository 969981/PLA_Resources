/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02861b4c; name: FUN_02861b4c
 */


void FUN_02861b4c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  long *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long *local_70;
  undefined4 local_68;
  long *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  long *local_40;
  undefined4 local_38;
  char *local_28;
  
  plVar5 = DAT_043ef5b0;
  uVar7 = *(undefined8 *)(*(long *)PTR_DAT_04379ff8 + 0xa8);
  if (DAT_043ef5b0 != (long *)0x0) {
    plVar6 = DAT_043ef5b0 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_02b21ce4(&local_60,plVar5);
  plVar6 = *(long **)(param_1 + 0x2f90);
  *(undefined8 *)(param_1 + 0x2f90) = 0;
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 10;
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
      (**(code **)(*plVar6 + 0x10))();
    }
  }
  *(long **)(param_1 + 0x2f90) = local_60;
  if (local_60 != (long *)0x0) {
    local_90 = (long *)0x393ea7d;
    FUN_009f1b84(&local_60,&local_90);
    FUN_0098c5f8(param_1 + 0x2f30,0,&local_60,0,uVar7,0);
    if ((*(long *)(param_1 + 0x2f38) != 0) &&
       (*(char *)(*(long *)(param_1 + 0x2f38) + 0x1e1) != '\0')) {
      local_28 = "bin/appli/misc/util/poke_model_util/env/light/room/room.trlgt";
      FUN_009f1b84(&local_90,&local_28);
      plVar6 = local_60;
      local_60 = (long *)0x0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x20))();
      }
      plVar6 = local_40;
      local_60 = local_90;
      local_90 = (long *)0x0;
      local_58 = uStack_88;
      uStack_50 = local_80;
      local_48 = uStack_78;
      local_40 = (long *)0x0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x20))();
      }
      local_40 = local_70;
      local_70 = (long *)0x0;
      local_38 = local_68;
      if (local_90 != (long *)0x0) {
        (**(code **)(*local_90 + 0x20))();
      }
      FUN_0098c5f8(param_1 + 0x2f60,0,&local_60,0,uVar7,0);
      if ((*(long *)(param_1 + 0x2f38) != 0) &&
         (*(char *)(*(long *)(param_1 + 0x2f38) + 0x1e1) != '\0')) {
        if (local_40 != (long *)0x0) {
          (**(code **)(*local_40 + 0x20))();
        }
        if (local_60 != (long *)0x0) {
          (**(code **)(*local_60 + 0x20))();
        }
        if (plVar5 != (long *)0x0) {
          plVar6 = plVar5 + 10;
          do {
            iVar4 = (int)*plVar6 + -1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar3) {
              *(int *)plVar6 = iVar4;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar4 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


