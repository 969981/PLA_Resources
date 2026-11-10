/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ec82a8; name: FUN_01ec82a8
 */


void FUN_01ec82a8(long param_1,long *param_2,uint param_3)

{
  ushort uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  char *pcVar6;
  long *plVar7;
  int *piVar8;
  long lVar9;
  undefined4 uVar10;
  long *local_40;
  undefined1 auStack_38 [8];
  
  if (((*PTR_DAT_0437a708 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_0437a708), iVar4 != 0))
  {
    FUN_00100250(PTR_LAB_0437a778,PTR_DAT_0437a710,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a708);
  }
  uVar5 = *(undefined8 *)PTR_DAT_0437a710;
  *(undefined8 *)PTR_DAT_0437a718 = uVar5;
  pcVar6 = (char *)FUN_010aace4(uVar5,*param_2,param_3 & 1);
  local_40 = (long *)FUN_01ecedc8(auStack_38,*(undefined8 *)(param_1 + 8));
  if (local_40 == (long *)0x0) {
    plVar7 = (long *)0x0;
  }
  else {
    lVar9 = local_40[0xb];
    if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar9 + 0x10) == 0) {
      uVar5 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
      *(undefined8 *)(lVar9 + 0x10) = uVar5;
    }
    piVar8 = (int *)(lVar9 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
      if (bVar3) {
        *piVar8 = *piVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar7 = local_40;
  }
  plVar7[0x14] = *param_2;
  if (*pcVar6 == '\0') {
    piVar8 = *(int **)(pcVar6 + 0x10);
    if (piVar8 == (int *)0x0) {
      piVar8 = *(int **)(pcVar6 + 8);
    }
    uVar10 = 0;
    if (*(ushort *)((long)piVar8 - (long)*piVar8) < 0x5f) goto LAB_01ec8388;
    uVar1 = ((ushort *)((long)piVar8 - (long)*piVar8))[0x2f];
  }
  else {
    piVar8 = *(int **)(pcVar6 + 0x18);
    uVar10 = 0;
    if (*(ushort *)((long)piVar8 - (long)*piVar8) < 0x5b) goto LAB_01ec8388;
    uVar1 = ((ushort *)((long)piVar8 - (long)*piVar8))[0x2d];
  }
  uVar10 = 0;
  if ((ulong)uVar1 != 0) {
    uVar10 = *(undefined4 *)((long)piVar8 + (ulong)uVar1);
  }
LAB_01ec8388:
  *(undefined4 *)(plVar7 + 0x15) = uVar10;
  FUN_01ec9dc8(param_1 + 0x288,*(undefined8 *)(param_1 + 0x288),&local_40);
  if (local_40 != (long *)0x0) {
    lVar9 = local_40[0xb];
    piVar8 = (int *)(lVar9 + 0xc);
    do {
      iVar4 = *piVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
      if (bVar3) {
        *piVar8 = iVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*local_40 + 0x20))();
    }
  }
  return;
}


