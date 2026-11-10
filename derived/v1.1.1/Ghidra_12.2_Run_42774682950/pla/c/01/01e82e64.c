/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e82e64; name: FUN_01e82e64
 */


uint FUN_01e82e64(long param_1,undefined4 param_2)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  undefined *puVar14;
  int iVar15;
  long *plVar16;
  long *local_58;
  
  puVar7 = PTR_DAT_0437a0f0;
  puVar6 = PTR_DAT_0437a0e8;
  puVar5 = PTR_DAT_043794d8;
  puVar14 = PTR_DAT_043794d0;
  lVar11 = *(long *)(param_1 + 0x150);
  if ((lVar11 != 0) && (*(int *)(lVar11 + 0xc) != 0)) {
    piVar1 = (int *)(lVar11 + 0xc);
    iVar15 = *(int *)(lVar11 + 0xc);
    do {
      plVar16 = *(long **)(lVar11 + 0x10);
      if (((*puVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar6), iVar8 != 0)) {
        if (((*puVar14 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar14), iVar8 != 0)) {
          uVar10 = FUN_0087f8f0();
          *(undefined8 *)puVar5 = uVar10;
          __cxa_guard_release(puVar14);
        }
        *(undefined **)puVar7 = puVar5;
        __cxa_guard_release(puVar6);
      }
      while( true ) {
        if (plVar16 == (long *)0x0) goto LAB_01e82e88;
        if (plVar16 == (long *)puVar7) break;
        plVar16 = (long *)*plVar16;
      }
      iVar8 = *piVar1;
      if (iVar8 == iVar15) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar15 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_01e82ee4;
        lVar11 = *(long *)(lVar11 + 0x18);
        if (lVar11 != 0) {
          plVar16 = (long *)(lVar11 + -0x50);
          FUN_01847f10(&local_58,plVar16);
          if (local_58 == (long *)0x0) {
            bVar4 = false;
          }
          else {
            uVar9 = FUN_018501fc(local_58,param_2);
            puVar14 = (undefined *)(uVar9 & 0xffffffff);
            if (local_58 != (long *)0x0) {
              lVar12 = local_58[0xb];
              piVar1 = (int *)(lVar12 + 0xc);
              do {
                iVar15 = *piVar1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                  *piVar1 = iVar15 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar15 == 1) {
                *(undefined8 *)(lVar12 + 0x18) = 0;
                (**(code **)(*local_58 + 0x20))();
              }
            }
            bVar4 = true;
          }
          uVar13 = (uint)puVar14;
          lVar11 = *(long *)(lVar11 + 8);
          piVar1 = (int *)(lVar11 + 0xc);
          do {
            iVar15 = *piVar1;
            cVar3 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar2) {
              *piVar1 = iVar15 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar15 + -1 == 0) {
            *(undefined8 *)(lVar11 + 0x18) = 0;
            (**(code **)(*plVar16 + 0x20))(plVar16);
          }
          if (bVar4) goto LAB_01e82e8c;
        }
        break;
      }
      ClearExclusiveLocal();
LAB_01e82ee4:
      iVar15 = iVar8;
    } while (iVar8 != 0);
  }
LAB_01e82e88:
  uVar13 = 0;
LAB_01e82e8c:
  return uVar13 & 1;
}


