/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 018d1d8c; name: FUN_018d1d8c
 */


void FUN_018d1d8c(undefined8 *param_1,long *param_2,undefined8 param_3,long *param_4,
                 undefined1 *param_5)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long *local_48;
  long *local_38;
  
  local_38 = (long *)*param_2;
  if (local_38 != (long *)0x0) {
    lVar7 = local_38[0xb];
    if (*(undefined8 **)(lVar7 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar7 + 0x10) == 0) {
      uVar6 = (**(code **)**(undefined8 **)(lVar7 + 0x18))();
      *(undefined8 *)(lVar7 + 0x10) = uVar6;
    }
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_48 = (long *)*param_4;
  if (local_48 != (long *)0x0) {
    plVar2 = local_48 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_01b389d8(param_1,&local_38,param_3,&local_48);
  if (local_48 != (long *)0x0) {
    plVar2 = local_48 + 10;
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
      (**(code **)(*local_48 + 0x10))();
    }
  }
  if (local_38 != (long *)0x0) {
    lVar7 = local_38[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      iVar5 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 == 0) {
      *(undefined8 *)(lVar7 + 0x18) = 0;
      (**(code **)(*local_38 + 0x20))();
    }
  }
  *param_1 = &PTR_LAB_0422d278;
  param_1[9] = &PTR_LAB_0422d3e8;
  param_1[10] = &PTR_LAB_0422d4c8;
  param_1[0xc6] = &PTR_LAB_0422d4f0;
  param_1[199] = &PTR_LAB_0422d550;
  *(undefined1 *)(param_1 + 200) = *param_5;
  param_1[0xc9] = 0;
  param_1[0xca] = 0;
  FUN_018e22ac(param_1 + 0xc9,param_5 + 8);
  param_1[0xcc] = 0;
  param_1[0xcb] = 0;
  FUN_0095e898(param_1 + 0xcb,param_5 + 0x18);
  param_1[0xd5] = 0;
  param_1[0xd4] = 0;
  param_1[0xd3] = 0;
  param_1[0xd2] = 0;
  param_1[0xcd] = 0;
  param_1[0xce] = 0;
  param_1[0xcf] = 0;
  param_1[0xd0] = 0;
  *(undefined4 *)(param_1 + 0xd1) = 0;
  param_1[0xe2] = 0;
  param_1[0xe3] = 0;
  param_1[0xe4] = 0;
  param_1[0xe5] = 0;
  param_1[0xe6] = 0;
  param_1[0xe7] = 0;
  param_1[0xe8] = 0;
  param_1[0xe9] = 0;
  param_1[0xeb] = 0;
  *(undefined4 *)((long)param_1 + 0x75f) = 0;
  param_1[0xea] = 0;
  nn::os::InitializeLightEvent((long)param_1 + 0x76c,0,1);
  param_1[0xef] = 0;
  *(undefined1 *)(param_1 + 0xf0) = 1;
  *(undefined1 *)(param_1 + 0xf1) = 0;
  *(undefined1 *)((long)param_1 + 0x78c) = 0;
  param_1[0xf3] = 0;
  *(undefined1 *)(param_1 + 0xf4) = 0;
  *(undefined2 *)(param_1 + 0xf5) = 0;
  FUN_018d1c9c(param_1 + 0xf6);
  param_1[0x102] = 9;
  *(undefined1 *)(param_1 + 0xfd) = 0;
  *(undefined4 *)((long)param_1 + 0x80c) = 0;
  param_1[0xfe] = 0;
  param_1[0xff] = 0;
  param_1[0x100] = 0;
  *(undefined1 *)(param_1 + 0x101) = 0;
  *(undefined1 *)(param_1 + 0x103) = 0;
  *(undefined8 *)((long)param_1 + 0x81c) = 0x900000000;
  *(undefined4 *)((long)param_1 + 0x824) = 0;
  *(undefined1 *)(param_1 + 0x105) = 0;
  *(undefined8 *)((long)param_1 + 0x82c) = 0x900000000;
  *(undefined4 *)((long)param_1 + 0x834) = 0;
  *(undefined1 *)(param_1 + 0x107) = 0;
  *(undefined8 *)((long)param_1 + 0x83c) = 0x900000000;
  *(undefined4 *)((long)param_1 + 0x844) = 0;
  *(undefined1 *)(param_1 + 0x109) = 0;
  *(undefined8 *)((long)param_1 + 0x84c) = 0x900000000;
  *(undefined4 *)((long)param_1 + 0x854) = 0;
  *(undefined1 *)(param_1 + 0x10b) = 0;
  *(undefined8 *)((long)param_1 + 0x85c) = 0x900000000;
  *(undefined4 *)((long)param_1 + 0x864) = 0;
  *(undefined1 *)(param_1 + 0x10d) = 0;
  *(undefined8 *)((long)param_1 + 0x86c) = 0x900000000;
  *(undefined4 *)((long)param_1 + 0x874) = 0;
  *(undefined1 *)(param_1 + 0x10f) = 0;
  *(undefined8 *)((long)param_1 + 0x87c) = 0x900000000;
  *(undefined4 *)((long)param_1 + 0x884) = 0;
  *(undefined1 *)(param_1 + 0x111) = 0;
  *(undefined8 *)((long)param_1 + 0x88c) = 0x900000000;
  *(undefined4 *)((long)param_1 + 0x894) = 0;
  *(undefined1 *)(param_1 + 0x113) = 0;
  *(undefined8 *)((long)param_1 + 0x89c) = 0x900000000;
  *(undefined4 *)((long)param_1 + 0x8a4) = 0;
  *(undefined1 *)(param_1 + 0x115) = 0;
  *(undefined8 *)((long)param_1 + 0x8ac) = 0x900000000;
  *(undefined4 *)((long)param_1 + 0x8b4) = 0;
  *(undefined1 *)(param_1 + 0x117) = 0;
  *(undefined8 *)((long)param_1 + 0x8bc) = 0x900000000;
  *(undefined4 *)((long)param_1 + 0x8c4) = 0;
  *(undefined1 *)(param_1 + 0x119) = 0;
  *(undefined8 *)((long)param_1 + 0x8cc) = 0x900000000;
  *(undefined4 *)((long)param_1 + 0x8d4) = 0;
  *(undefined1 *)(param_1 + 0x11b) = 0;
  *(undefined8 *)((long)param_1 + 0x8dc) = 0x900000000;
  *(undefined4 *)((long)param_1 + 0x8e4) = 0;
  *(undefined1 *)(param_1 + 0x11d) = 0;
  *(undefined8 *)((long)param_1 + 0x8ec) = 0x900000000;
  *(undefined4 *)((long)param_1 + 0x8f4) = 0;
  *(undefined1 *)(param_1 + 0x11f) = 0;
  *(undefined8 *)((long)param_1 + 0x8fc) = 0x900000000;
  *(undefined4 *)((long)param_1 + 0x904) = 0;
  *(undefined4 *)((long)param_1 + 0x62c) = 0;
  return;
}


