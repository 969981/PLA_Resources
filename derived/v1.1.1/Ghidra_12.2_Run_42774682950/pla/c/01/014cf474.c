/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014cf474; name: FUN_014cf474
 */


undefined8 FUN_014cf474(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  undefined4 uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  
  lVar5 = FUN_014cf334();
  if (lVar5 == 0) {
    return 0;
  }
  plVar10 = *(long **)(lVar5 + 0x68);
  if (plVar10 != (long *)0x0) {
    plVar1 = plVar10 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (*(int *)(param_1 + 0x98) == 1) {
    lVar8 = plVar10[0xdc];
    if (((((*(int *)(lVar8 + 0x3b8) == 5) ||
          (lVar9 = *(long *)(lVar8 + 0x3b0), *(long *)(lVar9 + 0x7f0) == 0x15f6d5d379098b6a)) ||
         (*(long *)(lVar9 + 0x7f8) == 0x15f6d5d379098b6a)) ||
        ((*(long *)(lVar9 + 0x800) == 0x15f6d5d379098b6a ||
         (*(long *)(lVar9 + 0x808) == 0x15f6d5d379098b6a)))) ||
       (*(long *)(lVar9 + 0x810) == 0x15f6d5d379098b6a)) {
      *(undefined4 *)(lVar5 + 0x70) = *(undefined4 *)(lVar8 + 0x428);
      uVar7 = 2;
      goto LAB_014cf5e4;
    }
    goto switchD_014cf564_caseD_1;
  }
  switch(*(int *)(param_1 + 0x98)) {
  case 0:
    uVar6 = FUN_0158ef94(plVar10);
    if ((uVar6 & 1) != 0) {
      FUN_0158ff68(plVar10);
      uVar7 = 1;
      goto LAB_014cf5e4;
    }
    if (*(char *)plVar10[0xd8] != '\0') {
      if (((*PTR_DAT_0437a480 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_0437a480), iVar4 != 0)) {
        FUN_00100250(PTR_LAB_0437b4a8,PTR_DAT_0437a488,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_0437a480);
      }
      lVar5 = *(long *)PTR_DAT_0437a488;
      *(long *)PTR_DAT_0437a490 = lVar5;
      if (lVar5 != 0) {
        FUN_00d7e25c(lVar5,plVar10 + 0xd7);
        uVar11 = 0;
        goto joined_r0x014cf5d0;
      }
    }
    break;
  case 2:
    FUN_0155f1c8(plVar10[0xdc],0x15f6d5d379098b6a);
    uVar7 = 3;
LAB_014cf5e4:
    *(undefined4 *)(param_1 + 0x98) = uVar7;
    uVar11 = 0;
joined_r0x014cf5d0:
    if (plVar10 == (long *)0x0) {
      return uVar11;
    }
    goto LAB_014cf51c;
  case 3:
    if (*(int *)(plVar10[0xdc] + 0x3b8) == 5) {
      uVar7 = 4;
      goto LAB_014cf5e4;
    }
    break;
  case 4:
    uVar6 = FUN_0158ff9c(plVar10);
    if ((uVar6 & 1) != 0) {
      uVar11 = 1;
      goto joined_r0x014cf5d0;
    }
  }
switchD_014cf564_caseD_1:
  uVar11 = 0;
  if (plVar10 != (long *)0x0) {
LAB_014cf51c:
    plVar1 = plVar10 + 10;
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
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
  }
  return uVar11;
}


