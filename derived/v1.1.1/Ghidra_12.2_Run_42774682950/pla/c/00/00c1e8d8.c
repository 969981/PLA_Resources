/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00c1e8d8; name: FUN_00c1e8d8
 */


void FUN_00c1e8d8(long *param_1,long *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  int iVar14;
  
  puVar8 = PTR_DAT_043794d8;
  puVar7 = PTR_DAT_043794d0;
  puVar6 = PTR_DAT_043794c8;
  puVar5 = PTR_DAT_043794b8;
  puVar4 = PTR_DAT_043794b0;
  lVar11 = *param_2;
  lVar12 = 0;
  if (lVar11 != 0) {
    if (*(int *)(lVar11 + 0xc) == 0) {
LAB_00c1e95c:
      lVar12 = 0;
    }
    else {
      piVar1 = (int *)(lVar11 + 0xc);
      iVar14 = *(int *)(lVar11 + 0xc);
      do {
        puVar13 = *(undefined8 **)(lVar11 + 0x10);
        if (((*puVar4 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar4), iVar9 != 0)) {
          if (((*PTR_DAT_043794c0 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_043794c0), iVar9 != 0)) {
            if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar7), iVar9 != 0)) {
              uVar10 = FUN_0087f8f0();
              *(undefined8 *)puVar8 = uVar10;
              __cxa_guard_release(puVar7);
            }
            *(undefined **)puVar6 = puVar8;
            __cxa_guard_release(PTR_DAT_043794c0);
          }
          *(undefined **)puVar5 = puVar6;
          __cxa_guard_release(puVar4);
        }
        if (puVar13 == (undefined8 *)0x0) goto LAB_00c1e95c;
        while (puVar13 != (undefined8 *)puVar5) {
          puVar13 = (undefined8 *)*puVar13;
          lVar12 = 0;
          if (puVar13 == (undefined8 *)0x0) goto LAB_00c1e8fc;
        }
        iVar9 = *piVar1;
        if (iVar9 == iVar14) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar14 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            lVar12 = 0;
            if (*(long *)(lVar11 + 0x18) != 0) {
              lVar12 = *(long *)(lVar11 + 0x18) + -0x50;
            }
            break;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        lVar12 = 0;
        iVar14 = iVar9;
      } while (iVar9 != 0);
    }
  }
LAB_00c1e8fc:
  *param_1 = lVar12;
  return;
}


