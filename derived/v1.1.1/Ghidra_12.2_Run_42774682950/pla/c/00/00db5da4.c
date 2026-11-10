/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00db5da4; name: FUN_00db5da4
 */


long FUN_00db5da4(undefined1 *param_1)

{
  uint *puVar1;
  uint *puVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  int iVar7;
  undefined8 uVar8;
  int *piVar9;
  long lVar10;
  long lVar11;
  uint *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ushort *puVar16;
  byte *pbVar17;
  undefined1 *puVar18;
  long *plVar19;
  undefined8 *local_48 [2];
  long *local_38;
  
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379558), iVar7 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar10 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar10;
  if ((lVar10 == 0) || (plVar19 = *(long **)(lVar10 + 0x268), plVar19 == (long *)0x0)) {
    return -1;
  }
  lVar10 = plVar19[0xb];
  if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  if (*(long *)(lVar10 + 0x10) == 0) {
    uVar8 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
    *(undefined8 *)(lVar10 + 0x10) = uVar8;
  }
  piVar9 = (int *)(lVar10 + 0xc);
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar9,0x10);
    if (bVar5) {
      *piVar9 = *piVar9 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (((*PTR_DAT_0437a780 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_0437a780), iVar7 != 0))
  {
    FUN_00100250(PTR_LAB_0437a8a0,PTR_DAT_0437a788,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a780);
  }
  *(undefined8 *)PTR_DAT_0437a790 = *(undefined8 *)PTR_DAT_0437a788;
  FUN_01e656d0(local_48);
  if (local_48[0] != (undefined8 *)0x0) {
    FUN_00b1e8cc(&local_38);
    plVar6 = local_38;
    if (local_48[0] != (undefined8 *)0x0) {
      piVar9 = (int *)(local_48[0] + 1);
      do {
        iVar7 = *piVar9;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar5) {
          *piVar9 = iVar7 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar7 + -1 == 0) {
        local_48[0][2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar10 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar10;
        local_38 = (long *)*local_48[0];
        FUN_02a44274(lVar10 + 0xd8,&local_38);
      }
    }
    if (plVar6 != (long *)0x0) {
      if (*(char *)((long)plVar19 + 0x7d) == '\0') {
        piVar9 = (int *)FUN_00b1e13c(plVar6);
        if (piVar9 != (int *)0x0) goto LAB_00db5f3c;
LAB_00db60e0:
        lVar10 = -1;
      }
      else {
        piVar9 = (int *)FUN_00b1e15c(plVar6);
        if (piVar9 == (int *)0x0) goto LAB_00db60e0;
LAB_00db5f3c:
        if ((*(ushort *)((long)piVar9 - (long)*piVar9) < 5) ||
           (uVar14 = (ulong)((ushort *)((long)piVar9 - (long)*piVar9))[2], uVar14 == 0))
        goto LAB_00db60e0;
        uVar15 = (ulong)*(uint *)((long)piVar9 + uVar14);
        puVar1 = (uint *)((long)((long)piVar9 + uVar14) + uVar15);
        puVar12 = puVar1 + 1;
        uVar13 = (ulong)*puVar1;
        if (uVar13 == 0) goto LAB_00db60e0;
        puVar1 = puVar12 + uVar13;
        lVar11 = (long)piVar9 + uVar15 + uVar14 + 9;
        lVar10 = -1;
        do {
          piVar9 = (int *)((long)puVar12 + (ulong)*puVar12);
          puVar16 = (ushort *)((long)piVar9 - (long)*piVar9);
          puVar2 = (uint *)((long)piVar9 + (ulong)puVar16[2]);
          uVar14 = (ulong)*puVar2;
          bVar3 = *(byte *)((long)puVar2 + uVar14 + 4);
          puVar18 = &DAT_cbf29ce484222645;
          if (bVar3 != 0) {
            puVar18 = &DAT_cbf29ce484222645;
            pbVar17 = (byte *)(lVar11 + uVar14 + puVar16[2] + (ulong)*puVar12);
            do {
              puVar18 = (undefined1 *)(((ulong)puVar18 ^ (ulong)bVar3) * 0x100000001b3);
              bVar3 = *pbVar17;
              pbVar17 = pbVar17 + 1;
            } while (bVar3 != 0);
          }
          if (puVar18 == param_1) {
            if ((*puVar16 < 0x15) || ((ulong)puVar16[10] == 0)) {
              lVar10 = 0;
            }
            else {
              lVar10 = (long)*(int *)((long)piVar9 + (ulong)puVar16[10]);
            }
            break;
          }
          puVar12 = puVar12 + 1;
          lVar11 = lVar11 + 4;
        } while (puVar12 != puVar1);
      }
      lVar11 = plVar6[0xb];
      piVar9 = (int *)(lVar11 + 0xc);
      do {
        iVar7 = *piVar9;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar5) {
          *piVar9 = iVar7 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar7 + -1 == 0) {
        *(undefined8 *)(lVar11 + 0x18) = 0;
        (**(code **)(*plVar6 + 0x20))(plVar6);
      }
      goto LAB_00db5e64;
    }
  }
  lVar10 = -1;
LAB_00db5e64:
  lVar11 = plVar19[0xb];
  piVar9 = (int *)(lVar11 + 0xc);
  do {
    iVar7 = *piVar9;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar9,0x10);
    if (bVar5) {
      *piVar9 = iVar7 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar7 + -1 == 0) {
    *(undefined8 *)(lVar11 + 0x18) = 0;
    (**(code **)(*plVar19 + 0x20))(plVar19);
  }
  return lVar10;
}


