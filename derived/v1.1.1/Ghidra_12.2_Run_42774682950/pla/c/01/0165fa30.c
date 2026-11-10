/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0165fa30; name: FUN_0165fa30
 */


void FUN_0165fa30(long param_1)

{
  uint uVar1;
  int *piVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  
  if ((*(char *)(param_1 + 0x54) != '\0') &&
     (uVar1 = *(int *)(param_1 + 0x70) + 1, *(uint *)(param_1 + 0x70) = uVar1, 0x13 < uVar1)) {
    *(undefined4 *)(param_1 + 0x70) = 0;
    lVar7 = nn::os::GetSystemTick();
    if (lVar7 < *(long *)(param_1 + 0x58)) {
      lVar13 = *(long *)(param_1 + 0x58) + lVar7;
    }
    else {
      *(long *)(param_1 + 0x58) = lVar7;
      lVar13 = lVar7;
    }
    uVar8 = nn::os::ConvertToTimeSpan(lVar13 - *(long *)(param_1 + 0x60));
    uVar11 = ((long)uVar8 >> 0x20) * 0x26d694b3 + ((uVar8 & 0xffffffff) * 0x26d694b3 >> 0x20);
    lVar3 = ((long)(((long)uVar8 >> 0x20) * 0x112e0be8 + ((long)uVar11 >> 0x20) +
                   ((uVar8 & 0xffffffff) * 0x112e0be8 + (uVar11 & 0xffffffff) >> 0x20)) >> 0x1a) -
            ((long)uVar8 >> 0x3f);
    if (*(long *)(param_1 + 0x68) < lVar3) {
      if (((*PTR_DAT_04379558 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379558), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379558);
      }
      lVar10 = *(long *)PTR_DAT_04379560;
      *(long *)PTR_DAT_04379568 = lVar10;
      if ((lVar10 != 0) && (plVar12 = *(long **)(lVar10 + 0x340), plVar12 != (long *)0x0)) {
        lVar10 = plVar12[0xb];
        if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl("","","",0);
        }
        if (*(long *)(lVar10 + 0x10) == 0) {
          uVar9 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
          *(undefined8 *)(lVar10 + 0x10) = uVar9;
        }
        piVar2 = (int *)(lVar10 + 0xc);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = *piVar2 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((((char)plVar12[0x22] != '\0') &&
            (uVar11 = lVar3 - *(long *)(param_1 + 0x68), (uint)uVar11 < 2)) && (plVar12[0x23] != -1)
           ) {
          plVar12[0x23] = plVar12[0x23] + (uVar11 & 0xffffffff);
        }
        lVar10 = plVar12[0xb];
        piVar2 = (int *)(lVar10 + 0xc);
        do {
          iVar6 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = iVar6 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar6 + -1 == 0) {
          *(undefined8 *)(lVar10 + 0x18) = 0;
          (**(code **)(*plVar12 + 0x20))(plVar12);
        }
      }
      if (*(long *)(param_1 + 0x58) == lVar13) {
        *(long *)(param_1 + 0x68) = lVar3;
      }
      else {
        *(long *)(param_1 + 0x60) = lVar7;
        uVar8 = nn::os::ConvertToTimeSpan(lVar7);
        *(long *)(param_1 + 0x58) = lVar7;
        uVar11 = ((long)uVar8 >> 0x20) * 0x26d694b3 + ((uVar8 & 0xffffffff) * 0x26d694b3 >> 0x20);
        *(long *)(param_1 + 0x68) =
             ((long)(((long)uVar8 >> 0x20) * 0x112e0be8 + ((long)uVar11 >> 0x20) +
                    ((uVar8 & 0xffffffff) * 0x112e0be8 + (uVar11 & 0xffffffff) >> 0x20)) >> 0x1a) -
             ((long)uVar8 >> 0x3f);
      }
    }
  }
  return;
}


