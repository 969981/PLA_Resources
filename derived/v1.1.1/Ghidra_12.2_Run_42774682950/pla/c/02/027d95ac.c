/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027d95ac; name: FUN_027d95ac
 */


undefined8 FUN_027d95ac(long param_1,long param_2,undefined4 *param_3)

{
  long *plVar1;
  int *piVar2;
  undefined2 uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  undefined8 local_1e0;
  undefined1 auStack_1d8 [8];
  undefined1 auStack_1d0 [376];
  long local_58;
  undefined8 local_50;
  ulong local_48;
  
  if (param_2 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0xb8) != 2) {
    return 0;
  }
  if (DAT_04408e40 == 0) {
    local_50 = 0;
    local_58 = 0;
  }
  else {
    local_58 = DAT_04408e40;
    local_50 = DAT_04408e60;
  }
  local_48 = 0;
  memset(auStack_1d0,0,0x178);
  FUN_02c65514(param_2,auStack_1d0);
  local_1e0 = CONCAT44(local_1e0._4_4_,4);
  FUN_027daafc(auStack_1d8,&local_1e0,&local_58);
  FUN_027d81fc(&local_1e0,param_1 + 0xf8,&local_58);
  FUN_027dabb4(&local_1e0,auStack_1d0,&local_58);
  lVar9 = *(long *)(param_1 + 0x90);
  if ((*(long *)(lVar9 + 0xa8) != 0) && (*(int *)(*(long *)(lVar9 + 0xa8) + 0xc) != 0)) {
    plVar7 = *(long **)(lVar9 + 0xb8);
    if (plVar7 == (long *)0x0) {
      return 0;
    }
    uVar8 = (**(code **)(*plVar7 + 0x18))(plVar7,lVar9 + 0x6c,*(undefined8 *)(param_1 + 0x88));
    if (((uVar8 & 1) != 0) &&
       (uVar8 = (**(code **)(**(long **)(param_1 + 0x90) + 0x40))
                          (*(long **)(param_1 + 0x90),DAT_04408e40,local_48 & 0xffffffff,
                           (undefined8 *)(param_1 + 0x88)), (uVar8 & 1) != 0)) {
      local_1e0 = *(undefined8 *)(param_1 + 8);
      lVar9 = FUN_0161dc70(auStack_1d8,local_1e0,&local_1e0);
      if (lVar9 != 0) {
        piVar2 = (int *)(lVar9 + 0x50);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = *piVar2 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      plVar7 = *(long **)(param_1 + 0xa8);
      *(undefined8 *)(param_1 + 0xa8) = 0;
      if (plVar7 != (long *)0x0) {
        plVar1 = plVar7 + 10;
        do {
          iVar6 = (int)*plVar1 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *(int *)plVar1 = iVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar6 == 0) {
          (**(code **)(*plVar7 + 0x10))();
        }
      }
      *(long *)(param_1 + 0xa8) = lVar9;
      FUN_02c653d0(lVar9,param_2);
      uVar3 = *(undefined2 *)(param_3 + 1);
      *(undefined4 *)(param_1 + 0xa0) = *param_3;
      *(undefined2 *)(param_1 + 0xa4) = uVar3;
      *(undefined4 *)(param_1 + 0xb8) = 3;
      return 1;
    }
  }
  return 0;
}


