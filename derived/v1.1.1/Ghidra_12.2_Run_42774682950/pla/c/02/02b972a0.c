/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b972a0; name: FUN_02b972a0
 */


void FUN_02b972a0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,uint param_4,
                 undefined8 param_5)

{
  long *plVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 local_a0;
  long *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [64];
  
  (*DAT_043f0428)(auStack_80);
  (*DAT_043f0420)(auStack_80,param_2[2]);
  if (3 < *(uint *)(param_3 + 2)) {
                    /* WARNING: Subroutine does not return */
    FUN_02b62030();
  }
  plVar7 = *(long **)(param_2[1] + (long)(int)*(uint *)(param_3 + 2) * 8);
  (**(code **)(*plVar7 + 0x28))(&local_a0,plVar7,*param_3,*(undefined4 *)(param_3 + 1));
  if (local_98 == (long *)0x0) {
    uVar8 = 0;
  }
  else {
    uVar8 = (**(code **)(*local_98 + 0x68))();
  }
  (*DAT_043f0430)(auStack_80,uVar8,local_90,*param_3);
  FUN_02b97450(param_1,*param_2,&local_a0);
  FUN_02b975dc(*param_1,*param_2,auStack_80);
  if ((param_4 | 1) == 3) {
    uVar2 = *(undefined4 *)((long)param_3 + 0xc);
    uVar8 = *param_1;
    uVar6 = FUN_02b59060(uVar2);
    FUN_02b97950(uVar8,param_2,uVar2,uVar6,param_5);
  }
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 0x30))(local_98,&local_a0);
    plVar7 = local_98;
    local_a0 = 0;
    local_98 = (long *)0x0;
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 10;
      do {
        iVar5 = (int)*plVar1 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*plVar7 + 0x10))();
      }
    }
    local_90 = 0xffffffffffffffff;
    uStack_88 = 0;
    if (local_98 != (long *)0x0) {
      plVar7 = local_98 + 10;
      do {
        iVar5 = (int)*plVar7 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar4) {
          *(int *)plVar7 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*local_98 + 0x10))();
      }
    }
  }
  return;
}


