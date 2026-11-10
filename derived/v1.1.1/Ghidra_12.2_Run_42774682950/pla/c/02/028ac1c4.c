/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028ac1c4; name: FUN_028ac1c4
 */


void FUN_028ac1c4(long param_1,undefined8 *param_2)

{
  int *piVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  undefined8 uVar10;
  int iVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long *local_58;
  
  puVar8 = PTR_DAT_0437a6a8;
  puVar7 = PTR_DAT_0437a6a0;
  puVar6 = PTR_DAT_043794d8;
  puVar5 = PTR_DAT_043794d0;
  lVar14 = *(long *)(param_1 + 0x70);
  lVar2 = *(long *)(param_1 + 0x78);
  if (lVar14 != lVar2) {
    do {
      lVar13 = *(long *)(lVar14 + 0x20);
      if ((lVar13 != 0) && (*(int *)(lVar13 + 0xc) != 0)) {
        piVar1 = (int *)(lVar13 + 0xc);
        iVar11 = *(int *)(lVar13 + 0xc);
        do {
          plVar12 = *(long **)(lVar13 + 0x10);
          if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar7), iVar9 != 0)) {
            if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar5), iVar9 != 0)) {
              uVar10 = FUN_0087f8f0();
              *(undefined8 *)puVar6 = uVar10;
              __cxa_guard_release(puVar5);
            }
            *(undefined **)puVar8 = puVar6;
            __cxa_guard_release(puVar7);
          }
          while( true ) {
            if (plVar12 == (long *)0x0) goto LAB_028ac220;
            if (plVar12 == (long *)puVar8) break;
            plVar12 = (long *)*plVar12;
          }
          iVar9 = *piVar1;
          if (iVar9 == iVar11) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar11 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') {
              if (*(long *)(lVar13 + 0x18) != 0) {
                plVar12 = (long *)(*(long *)(lVar13 + 0x18) + -8);
                local_58 = plVar12;
                (*(code *)*param_2)(param_2 + 4,&local_58);
                (**(code **)(*plVar12 + 0x18))(plVar12);
              }
              break;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          iVar11 = iVar9;
        } while (iVar9 != 0);
      }
LAB_028ac220:
      lVar14 = lVar14 + 0x30;
    } while (lVar14 != lVar2);
  }
  return;
}


