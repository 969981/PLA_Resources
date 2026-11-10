/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01add6ec; name: FUN_01add6ec
 */


void FUN_01add6ec(long param_1,long *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  int iVar13;
  long *plVar14;
  long *local_68;
  long *local_58;
  
  puVar7 = PTR_DAT_0437a0f0;
  puVar6 = PTR_DAT_0437a0e8;
  puVar5 = PTR_DAT_043794d8;
  puVar4 = PTR_DAT_043794d0;
  lVar10 = *param_2;
  if ((lVar10 != 0) && (*(int *)(lVar10 + 0xc) != 0)) {
    piVar1 = (int *)(lVar10 + 0xc);
    iVar13 = *(int *)(lVar10 + 0xc);
    do {
      plVar14 = *(long **)(lVar10 + 0x10);
      if (((*puVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar6), iVar8 != 0)) {
        if (((*puVar4 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar4), iVar8 != 0)) {
          uVar9 = FUN_0087f8f0();
          *(undefined8 *)puVar5 = uVar9;
          __cxa_guard_release(puVar4);
        }
        *(undefined **)puVar7 = puVar5;
        __cxa_guard_release(puVar6);
      }
      while( true ) {
        if (plVar14 == (long *)0x0) {
          return;
        }
        if (plVar14 == (long *)puVar7) break;
        plVar14 = (long *)*plVar14;
      }
      iVar8 = *piVar1;
      if (iVar8 == iVar13) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar13 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar10 = *(long *)(lVar10 + 0x18);
          if (lVar10 == 0) {
            return;
          }
          plVar14 = (long *)(lVar10 + -0x50);
          FUN_01847290(&local_58,plVar14);
          if (local_58 == (long *)0x0) goto LAB_01add808;
          if (*(undefined1 **)(param_1 + 0x740) == &DAT_cbf29ce484222645) goto LAB_01add7ec;
          FUN_01ad9044(&local_68,local_58,0x28);
          if (local_68 != (long *)0x0) {
            if (*(long *)(param_1 + 0x5b0) == 0) {
              puVar12 = (undefined8 *)PTR_DAT_04379c88;
            }
            else {
              puVar12 = (undefined8 *)(*(long *)(param_1 + 0x5b0) + 0x58);
            }
            FUN_01f85aac(local_68,*puVar12);
            if (local_68 != (long *)0x0) {
              lVar11 = local_68[0xb];
              piVar1 = (int *)(lVar11 + 0xc);
              do {
                iVar13 = *piVar1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                  *piVar1 = iVar13 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (iVar13 + -1 == 0) {
                *(undefined8 *)(lVar11 + 0x18) = 0;
                (**(code **)(*local_68 + 0x20))();
              }
            }
          }
          if (local_58 != (long *)0x0) {
LAB_01add7ec:
            lVar11 = local_58[0xb];
            piVar1 = (int *)(lVar11 + 0xc);
            do {
              iVar13 = *piVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar13 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar13 + -1 == 0) {
              *(undefined8 *)(lVar11 + 0x18) = 0;
              (**(code **)(*local_58 + 0x20))();
            }
          }
LAB_01add808:
          lVar10 = *(long *)(lVar10 + 8);
          piVar1 = (int *)(lVar10 + 0xc);
          do {
            iVar13 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar13 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar13 + -1 == 0) {
            *(undefined8 *)(lVar10 + 0x18) = 0;
            (**(code **)(*plVar14 + 0x20))(plVar14);
            return;
          }
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar13 = iVar8;
    } while (iVar8 != 0);
  }
  return;
}


