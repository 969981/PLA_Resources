/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0158ed30; name: FUN_0158ed30
 */


void FUN_0158ed30(long param_1,undefined8 *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  long *local_38;
  
  if (((*PTR_DAT_04379678 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04379678), iVar4 != 0))
  {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  lVar6 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar6;
  plVar7 = *(long **)(lVar6 + 0xd0);
  if (plVar7 == (long *)0x0) {
    FUN_00d853e0(&local_38,0);
  }
  else {
    plVar5 = plVar7 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *(int *)plVar5 = (int)*plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    FUN_00d853e0(&local_38,plVar7);
    do {
      iVar4 = (int)*plVar5 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *(int *)plVar5 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
    }
  }
  lVar6 = FUN_0158b4c0(local_38,*param_2);
  FUN_02a47560(&local_58);
  *(undefined8 *)(param_1 + 0x650) = local_58;
  *(undefined8 *)(param_1 + 0x658) = local_50;
  plVar7 = *(long **)(param_1 + 0x668);
  *(undefined8 *)(param_1 + 0x668) = 0;
  *(undefined8 *)(param_1 + 0x660) = local_48;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x20))();
  }
  *(undefined8 *)(param_1 + 0x668) = local_40;
  *(undefined8 *)(param_1 + 0x670) = *(undefined8 *)(lVar6 + 0x20);
  *(undefined8 *)(param_1 + 0x678) = *(undefined8 *)(lVar6 + 0x28);
  *(undefined8 *)(param_1 + 0x680) = *(undefined8 *)(lVar6 + 0x30);
  plVar7 = *(long **)(lVar6 + 0x38);
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x18))(plVar7);
  }
  plVar5 = *(long **)(param_1 + 0x688);
  *(long **)(param_1 + 0x688) = plVar7;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x20))();
  }
  *(undefined8 *)(param_1 + 0x690) = *(undefined8 *)(lVar6 + 0x58);
  FUN_02a47560(&local_58,lVar6 + 0x60);
  *(undefined8 *)(param_1 + 0x6b8) = local_58;
  *(undefined8 *)(param_1 + 0x6c0) = local_50;
  plVar7 = *(long **)(param_1 + 0x6d0);
  *(undefined8 *)(param_1 + 0x6d0) = 0;
  *(undefined8 *)(param_1 + 0x6c8) = local_48;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x20))();
  }
  *(undefined8 *)(param_1 + 0x6d0) = local_40;
  FUN_02a47560(&local_58,lVar6 + 8);
  *(undefined8 *)(param_1 + 0x698) = local_58;
  *(undefined8 *)(param_1 + 0x6a0) = local_50;
  plVar7 = *(long **)(param_1 + 0x6b0);
  *(undefined8 *)(param_1 + 0x6b0) = 0;
  *(undefined8 *)(param_1 + 0x6a8) = local_48;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x20))();
  }
  *(undefined8 *)(param_1 + 0x6b0) = local_40;
  FUN_01569a28(param_1 + 0x5e8,lVar6);
  if (local_38 != (long *)0x0) {
    lVar6 = local_38[0xb];
    piVar1 = (int *)(lVar6 + 0xc);
    do {
      iVar4 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 + -1 == 0) {
      *(undefined8 *)(lVar6 + 0x18) = 0;
      (**(code **)(*local_38 + 0x20))();
    }
  }
  return;
}


