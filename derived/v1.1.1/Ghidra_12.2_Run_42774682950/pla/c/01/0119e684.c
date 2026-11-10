/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0119e684; name: FUN_0119e684
 */


undefined8 FUN_0119e684(long param_1,undefined4 param_2,uint param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  
  uVar7 = FUN_011a9a80(*(undefined8 *)(param_1 + 0x16b8));
  if ((uVar7 & 1) != 0) {
    return 1;
  }
  if (((*PTR_DAT_04379678 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04379678), iVar6 != 0))
  {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  lVar9 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar9;
  plVar10 = *(long **)(lVar9 + 0xd0);
  if (plVar10 != (long *)0x0) {
    plVar11 = plVar10 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar3) {
        *(int *)plVar11 = (int)*plVar11 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar11 = (long *)plVar10[0xb];
  if (plVar11 != (long *)0x0) {
    plVar1 = plVar11 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar8 = (**(code **)(*plVar11 + 0x58))(plVar11,param_2);
  lVar9 = lVar8;
  if (plVar11 != (long *)0x0) {
    plVar1 = plVar11 + 10;
    do {
      iVar6 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar6;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 == 0) {
      lVar9 = (**(code **)(*plVar11 + 0x10))(plVar11);
    }
  }
  plVar11 = plVar10 + 10;
  do {
    iVar6 = (int)*plVar11 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar3) {
      *(int *)plVar11 = iVar6;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar6 == 0) {
    lVar9 = (**(code **)(*plVar10 + 0x10))(plVar10);
  }
  uVar7 = FUN_011a3754(lVar9,lVar8,param_3);
  if ((uVar7 & 1) != 0) {
    return 1;
  }
  uVar4 = FUN_02c6df60(*(undefined8 *)(lVar8 + 0x98));
  uVar4 = uVar4 & 0xff;
  uVar7 = FUN_02c8b05c(*(undefined8 *)(lVar8 + 0x98));
  if (((uVar7 & 1) == 0) && (uVar5 = FUN_02c6bbd4(*(undefined8 *)(lVar8 + 0x98)), uVar5 < 0x1f)) {
    if (uVar5 < 0x1a) {
      if (0x13 < uVar5) {
        uVar4 = uVar4 + 1;
      }
    }
    else {
      uVar4 = uVar4 + 2;
    }
  }
  else {
    uVar4 = uVar4 + 3;
  }
  if (9 < uVar4) {
    uVar4 = 10;
  }
  if (uVar4 < 3) {
    lVar9 = 0;
LAB_0119e7b4:
    if ((uint)(ushort)(&DAT_03888b60)[lVar9 * 4] == (param_3 & 0xffff)) {
      return 1;
    }
  }
  else {
    if (uVar4 < 6) {
      lVar9 = 1;
      goto LAB_0119e7b4;
    }
    if (uVar4 < 9) {
      lVar9 = 2;
      goto LAB_0119e7b4;
    }
    if (uVar4 == 9) {
      lVar9 = 3;
      goto LAB_0119e7b4;
    }
  }
  uVar4 = FUN_02c6e298(*(undefined8 *)(lVar8 + 0x98));
  uVar4 = uVar4 & 0xff;
  uVar5 = FUN_02c8b05c(*(undefined8 *)(lVar8 + 0x98));
  if (((uVar5 >> 1 & 1) == 0) && (uVar5 = FUN_02c6bf10(*(undefined8 *)(lVar8 + 0x98)), uVar5 < 0x1f)
     ) {
    if (uVar5 < 0x1a) {
      if (0x13 < uVar5) {
        uVar4 = uVar4 + 1;
      }
    }
    else {
      uVar4 = uVar4 + 2;
    }
  }
  else {
    uVar4 = uVar4 + 3;
  }
  if (9 < uVar4) {
    uVar4 = 10;
  }
  if (uVar4 < 3) {
    lVar9 = 0;
LAB_0119e804:
    if ((uint)(ushort)(&DAT_03888b60)[lVar9 * 4] == (param_3 & 0xffff)) {
      return 1;
    }
  }
  else {
    if (uVar4 < 6) {
      lVar9 = 1;
      goto LAB_0119e804;
    }
    if (uVar4 < 9) {
      lVar9 = 2;
      goto LAB_0119e804;
    }
    if (uVar4 == 9) {
      lVar9 = 3;
      goto LAB_0119e804;
    }
  }
  uVar4 = FUN_02c6e5d0(*(undefined8 *)(lVar8 + 0x98));
  uVar4 = uVar4 & 0xff;
  uVar5 = FUN_02c8b05c(*(undefined8 *)(lVar8 + 0x98));
  if (((uVar5 >> 2 & 1) == 0) && (uVar5 = FUN_02c6c24c(*(undefined8 *)(lVar8 + 0x98)), uVar5 < 0x1f)
     ) {
    if (uVar5 < 0x1a) {
      if (0x13 < uVar5) {
        uVar4 = uVar4 + 1;
      }
    }
    else {
      uVar4 = uVar4 + 2;
    }
  }
  else {
    uVar4 = uVar4 + 3;
  }
  if (9 < uVar4) {
    uVar4 = 10;
  }
  if (uVar4 < 3) {
    lVar9 = 0;
LAB_0119e854:
    if ((uint)(ushort)(&DAT_03888b60)[lVar9 * 4] == (param_3 & 0xffff)) {
      return 1;
    }
  }
  else {
    if (uVar4 < 6) {
      lVar9 = 1;
      goto LAB_0119e854;
    }
    if (uVar4 < 9) {
      lVar9 = 2;
      goto LAB_0119e854;
    }
    if (uVar4 == 9) {
      lVar9 = 3;
      goto LAB_0119e854;
    }
  }
  uVar4 = FUN_02c6ec40(*(undefined8 *)(lVar8 + 0x98));
  uVar4 = uVar4 & 0xff;
  uVar5 = FUN_02c8b05c(*(undefined8 *)(lVar8 + 0x98));
  if (((uVar5 >> 3 & 1) == 0) && (uVar5 = FUN_02c6c588(*(undefined8 *)(lVar8 + 0x98)), uVar5 < 0x1f)
     ) {
    if (uVar5 < 0x1a) {
      if (0x13 < uVar5) {
        uVar4 = uVar4 + 1;
      }
    }
    else {
      uVar4 = uVar4 + 2;
    }
  }
  else {
    uVar4 = uVar4 + 3;
  }
  if (9 < uVar4) {
    uVar4 = 10;
  }
  if (uVar4 < 3) {
    lVar9 = 0;
LAB_0119e8a4:
    if ((uint)(ushort)(&DAT_03888b60)[lVar9 * 4] == (param_3 & 0xffff)) {
      return 1;
    }
  }
  else {
    if (uVar4 < 6) {
      lVar9 = 1;
      goto LAB_0119e8a4;
    }
    if (uVar4 < 9) {
      lVar9 = 2;
      goto LAB_0119e8a4;
    }
    if (uVar4 == 9) {
      lVar9 = 3;
      goto LAB_0119e8a4;
    }
  }
  uVar4 = FUN_02c6ef78(*(undefined8 *)(lVar8 + 0x98));
  uVar4 = uVar4 & 0xff;
  uVar5 = FUN_02c8b05c(*(undefined8 *)(lVar8 + 0x98));
  if (((uVar5 >> 4 & 1) == 0) && (uVar5 = FUN_02c6c8c4(*(undefined8 *)(lVar8 + 0x98)), uVar5 < 0x1f)
     ) {
    if (uVar5 < 0x1a) {
      if (0x13 < uVar5) {
        uVar4 = uVar4 + 1;
      }
    }
    else {
      uVar4 = uVar4 + 2;
    }
  }
  else {
    uVar4 = uVar4 + 3;
  }
  if (9 < uVar4) {
    uVar4 = 10;
  }
  if (uVar4 < 3) {
    lVar9 = 0;
  }
  else if (uVar4 < 6) {
    lVar9 = 1;
  }
  else if (uVar4 < 9) {
    lVar9 = 2;
  }
  else {
    if (uVar4 != 9) goto LAB_0119e904;
    lVar9 = 3;
  }
  if ((uint)(ushort)(&DAT_03888b60)[lVar9 * 4] == (param_3 & 0xffff)) {
    return 1;
  }
LAB_0119e904:
  uVar4 = FUN_02c6e908(*(undefined8 *)(lVar8 + 0x98));
  uVar4 = uVar4 & 0xff;
  uVar5 = FUN_02c8b05c(*(undefined8 *)(lVar8 + 0x98));
  if (((uVar5 >> 5 & 1) == 0) && (uVar5 = FUN_02c6cc00(*(undefined8 *)(lVar8 + 0x98)), uVar5 < 0x1f)
     ) {
    if (uVar5 < 0x1a) {
      if (0x13 < uVar5) {
        uVar4 = uVar4 + 1;
      }
    }
    else {
      uVar4 = uVar4 + 2;
    }
  }
  else {
    uVar4 = uVar4 + 3;
  }
  if (9 < uVar4) {
    uVar4 = 10;
  }
  if (uVar4 < 3) {
    lVar9 = 0;
  }
  else if (uVar4 < 6) {
    lVar9 = 1;
  }
  else if (uVar4 < 9) {
    lVar9 = 2;
  }
  else {
    if (uVar4 != 9) {
      return 0;
    }
    lVar9 = 3;
  }
  if ((uint)(ushort)(&DAT_03888b60)[lVar9 * 4] == (param_3 & 0xffff)) {
    return 1;
  }
  return 0;
}


