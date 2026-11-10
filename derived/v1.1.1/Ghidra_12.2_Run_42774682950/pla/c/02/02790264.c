/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02790264; name: FUN_02790264
 */


void FUN_02790264(char param_1)

{
  short *psVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  byte bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  
  puVar6 = PTR_DAT_04379558;
  bVar5 = param_1 - 1;
  if (bVar5 < 5) {
    if (((*PTR_DAT_04379558 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_04379558), iVar9 != 0)) {
      FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379558);
    }
    puVar8 = PTR_DAT_04379568;
    puVar7 = PTR_DAT_04379560;
    lVar11 = *(long *)PTR_DAT_04379560;
    *(long *)PTR_DAT_04379568 = lVar11;
    plVar12 = *(long **)(lVar11 + 0x2a8);
    if (plVar12 != (long *)0x0) {
      lVar11 = plVar12[0xb];
      if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) {
LAB_02790528:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar11 + 0x10) == 0) {
        uVar10 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
        *(undefined8 *)(lVar11 + 0x10) = uVar10;
      }
      piVar2 = (int *)(lVar11 + 0xc);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = *piVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379558), iVar9 != 0)) {
        FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379558);
      }
      lVar11 = *(long *)puVar7;
      *(long *)puVar8 = lVar11;
      plVar13 = *(long **)(lVar11 + 0x220);
      if (plVar13 != (long *)0x0) {
        lVar11 = plVar13[0xb];
        if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) goto LAB_02790528;
        if (*(long *)(lVar11 + 0x10) == 0) {
          uVar10 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
          *(undefined8 *)(lVar11 + 0x10) = uVar10;
        }
        piVar2 = (int *)(lVar11 + 0xc);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar4) {
            *piVar2 = *piVar2 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        local_68 = plVar12[0x2556];
        local_60 = plVar12[0x2557];
        psVar1 = (short *)((long)&local_68 + (ulong)bVar5 * 4);
        local_58 = (int)plVar12[0x2558];
        if ((((*psVar1 == 0) &&
             (lVar11 = (ulong)bVar5 * 4, *(short *)((long)&local_68 + lVar11 + 2) == 0)) &&
            ((short)plVar13[0x23] == 0)) && (*(char *)((long)plVar13 + 0x11a) == '\0')) {
          *psVar1 = 0;
          *(undefined2 *)((long)&local_68 + lVar11 | 2) = 1;
        }
        else {
          *psVar1 = (short)plVar13[0x23];
          *(ushort *)((long)&local_68 + (ulong)bVar5 * 4 + 2) =
               (ushort)*(byte *)((long)plVar13 + 0x11a);
        }
        *(undefined2 *)(plVar12 + 0x2556) = (undefined2)local_68;
        *(undefined2 *)((long)plVar12 + 0x12ab2) = local_68._2_2_;
        *(undefined2 *)((long)plVar12 + 0x12ab4) = local_68._4_2_;
        *(undefined2 *)((long)plVar12 + 0x12ab6) = local_68._6_2_;
        *(undefined2 *)(plVar12 + 0x2557) = (undefined2)local_60;
        *(undefined2 *)((long)plVar12 + 0x12aba) = local_60._2_2_;
        *(undefined2 *)((long)plVar12 + 0x12abc) = local_60._4_2_;
        *(undefined2 *)((long)plVar12 + 0x12abe) = local_60._6_2_;
        *(undefined2 *)(plVar12 + 0x2558) = (undefined2)local_58;
        *(undefined2 *)((long)plVar12 + 0x12ac2) = local_58._2_2_;
        lVar11 = plVar13[0xb];
        piVar2 = (int *)(lVar11 + 0xc);
        do {
          iVar9 = *piVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar4) {
            *piVar2 = iVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar9 + -1 == 0) {
          *(undefined8 *)(lVar11 + 0x18) = 0;
          (**(code **)(*plVar13 + 0x20))(plVar13);
        }
      }
      lVar11 = plVar12[0xb];
      piVar2 = (int *)(lVar11 + 0xc);
      do {
        iVar9 = *piVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar9 + -1 == 0) {
        *(undefined8 *)(lVar11 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x02790494. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar12 + 0x20))(plVar12);
        return;
      }
    }
  }
  return;
}


