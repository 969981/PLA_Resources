/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00b1df44; name: FUN_00b1df44
 */


void FUN_00b1df44(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  long *local_60 [4];
  long *local_40;
  char *local_28;
  
  if (*(char *)(param_1 + 0xf8) == '\0') {
    uVar6 = *(undefined8 *)(param_1 + 8);
    local_28 = "bin/chara/table/dressup_table_p1.bin";
    FUN_009f1b84(local_60,&local_28);
    FUN_00938764(param_1 + 0x68,0,local_60,0,uVar6,0);
    if (local_40 != (long *)0x0) {
      (**(code **)(*local_40 + 0x20))();
    }
    if (local_60[0] != (long *)0x0) {
      (**(code **)(*local_60[0] + 0x20))();
    }
    local_28 = "bin/chara/table/dressup_table_p2.bin";
    FUN_009f1b84(local_60,&local_28);
    FUN_00938764(param_1 + 0x98,0,local_60,0,uVar6,0);
    if (local_40 != (long *)0x0) {
      (**(code **)(*local_40 + 0x20))();
    }
    if (local_60[0] != (long *)0x0) {
      (**(code **)(*local_60[0] + 0x20))();
    }
    local_28 = "bin/chara/table/skin_color_table.bin";
    FUN_009f1b84(local_60,&local_28);
    uVar5 = FUN_00938764(param_1 + 200,1,local_60,0,uVar6,0);
    if (((uVar5 & 1) != 0) && (plVar7 = *(long **)(param_1 + 0xf0), plVar7 != (long *)0x0)) {
      lVar8 = plVar7[0xb];
      if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar8 + 0x10) == 0) {
        uVar6 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
        *(undefined8 *)(lVar8 + 0x10) = uVar6;
      }
      piVar1 = (int *)(lVar8 + 0xc);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      lVar8 = plVar7[0xb];
      piVar1 = (int *)(lVar8 + 0xc);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        *(undefined8 *)(lVar8 + 0x18) = 0;
        (**(code **)(*plVar7 + 0x20))(plVar7);
      }
    }
    if (local_40 != (long *)0x0) {
      (**(code **)(*local_40 + 0x20))();
    }
    if (local_60[0] != (long *)0x0) {
      (**(code **)(*local_60[0] + 0x20))();
    }
    *(undefined1 *)(param_1 + 0xf8) = 1;
  }
  return;
}


