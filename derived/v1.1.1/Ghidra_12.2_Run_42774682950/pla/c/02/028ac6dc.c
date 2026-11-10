/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028ac6dc; name: FUN_028ac6dc
 */


void FUN_028ac6dc(long param_1)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  undefined8 uVar11;
  int iVar12;
  long *plVar13;
  long lVar14;
  
  puVar9 = PTR_DAT_0437a6a8;
  puVar8 = PTR_DAT_0437a6a0;
  puVar7 = PTR_DAT_043794d8;
  puVar6 = PTR_DAT_043794d0;
  lVar2 = *(long *)(param_1 + 0x70);
  lVar3 = *(long *)(param_1 + 0x78);
  do {
    if (lVar2 == lVar3) {
      return;
    }
    lVar14 = *(long *)(lVar2 + 0x20);
    if ((lVar14 != 0) && (*(int *)(lVar14 + 0xc) != 0)) {
      piVar1 = (int *)(lVar14 + 0xc);
      iVar12 = *(int *)(lVar14 + 0xc);
      do {
        plVar13 = *(long **)(lVar14 + 0x10);
        if (((*puVar8 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar8), iVar10 != 0)) {
          if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar6), iVar10 != 0)) {
            uVar11 = FUN_0087f8f0();
            *(undefined8 *)puVar7 = uVar11;
            __cxa_guard_release(puVar6);
          }
          *(undefined **)puVar9 = puVar7;
          __cxa_guard_release(puVar8);
        }
        while( true ) {
          if (plVar13 == (long *)0x0) goto LAB_028ac72c;
          if (plVar13 == (long *)puVar9) break;
          plVar13 = (long *)*plVar13;
        }
        iVar10 = *piVar1;
        if (iVar10 == iVar12) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar12 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') {
            if (*(long *)(lVar14 + 0x18) != 0) {
              plVar13 = (long *)(*(long *)(lVar14 + 0x18) + -8);
              (**(code **)(*plVar13 + 0x108))(plVar13);
              (**(code **)(*plVar13 + 0x18))(plVar13);
            }
            break;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar12 = iVar10;
      } while (iVar10 != 0);
    }
LAB_028ac72c:
    lVar2 = lVar2 + 0x30;
  } while( true );
}


