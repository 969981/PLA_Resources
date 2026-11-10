/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c62974; name: FUN_02c62974
 */


void FUN_02c62974(long param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  int iVar3;
  bool bVar4;
  ushort uVar5;
  uint uVar6;
  long *plVar7;
  long lVar8;
  undefined1 uVar9;
  ushort uVar10;
  int *piVar11;
  ulong uVar12;
  long lVar13;
  undefined4 local_4c;
  undefined1 auStack_48 [8];
  
  FUN_02c6cf3c(*(undefined8 *)(param_1 + 0x98));
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x98) + 0x10) + 4) >> 2 & 1) != 0) {
    return;
  }
  FUN_02c7e788(*(long *)(param_1 + 0x98),1);
  local_4c = 0xd;
  plVar7 = (long *)FUN_00a246f0(auStack_48,param_2,&local_4c);
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 10;
    do {
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar13 = *(long *)(param_1 + 0x98);
  lVar8 = nn::os::GetCurrentThread();
  plVar1 = (long *)(lVar13 + 0x30);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar13 + 0x24));
        while (*plVar1 == 0) {
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar8;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_02c62a34;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar2 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar8;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_02c62a34:
  uVar6 = FUN_02c69ba8(lVar13);
  *(undefined8 *)(lVar13 + 0x30) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar13 + 0x24));
  if (uVar6 - 1 < 10) {
    FUN_02c2e33c(*(undefined8 *)(DAT_043f2380 + (ulong)uVar6 * 8 + 8),0,plVar7);
  }
  FUN_02c80efc(*(undefined8 *)(param_1 + 0x98),plVar7[0xb]);
  FUN_02c7ead4(*(undefined8 *)(param_1 + 0x98),0);
  uVar6 = FUN_02c6849c(*(undefined8 *)(param_1 + 0x98));
  uVar5 = FUN_02c6f924(*(undefined8 *)(param_1 + 0x98));
  bVar4 = (uVar6 | 1) != 0x38b;
  uVar10 = 0;
  if ((int)uVar6 < 0x38a && bVar4) {
    uVar10 = uVar5;
  }
  if (uVar10 < 0x1c) {
    uVar12 = 0;
    if ((int)uVar6 < 0x38a && bVar4) {
      uVar12 = (ulong)uVar6;
    }
    lVar8 = *(&DAT_043f23a0)[uVar12 * 4];
    uVar12 = (&DAT_043f23a0)[uVar12 * 4][1] - lVar8 >> 3;
    if ((uVar10 < uVar12) && (*(long *)(lVar8 + (ulong)uVar10 * 8) != 0)) goto LAB_02c62b24;
  }
  uVar10 = 0;
  lVar8 = *DAT_043f23a0;
  uVar12 = DAT_043f23a0[1] - lVar8 >> 3;
LAB_02c62b24:
  if (uVar12 <= uVar10) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  piVar11 = *(int **)(lVar8 + (ulong)uVar10 * 8);
  if ((*(ushort *)((long)piVar11 - (long)*piVar11) < 99) ||
     (uVar12 = (ulong)((ushort *)((long)piVar11 - (long)*piVar11))[0x31], uVar12 == 0)) {
    uVar9 = 0;
  }
  else {
    uVar9 = *(undefined1 *)((long)piVar11 + uVar12);
  }
  FUN_02c8420c(*(undefined8 *)(param_1 + 0x98),uVar9);
  plVar1 = plVar7 + 10;
  do {
    iVar3 = (int)*plVar1 + -1;
    cVar2 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar3;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar3 == 0) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
  }
  return;
}


