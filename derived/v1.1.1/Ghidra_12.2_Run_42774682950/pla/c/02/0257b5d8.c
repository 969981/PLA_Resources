/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0257b5d8; name: FUN_0257b5d8
 */


uint FUN_0257b5d8(long param_1,undefined4 *param_2)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  uint uVar13;
  undefined *puVar14;
  long *plVar15;
  
  if (((*(byte *)(param_1 + 0x708) & 3) == 0) &&
     (lVar10 = FUN_025788d4(param_1,*param_2), puVar7 = PTR_DAT_0437a110, puVar6 = PTR_DAT_0437a108,
     puVar5 = PTR_DAT_043794d8, puVar14 = PTR_DAT_043794d0, lVar10 != 0)) {
    lVar12 = *(long *)(param_1 + 0x730);
    if ((lVar12 != 0) && (*(int *)(lVar12 + 0xc) != 0)) {
      piVar1 = (int *)(lVar12 + 0xc);
      iVar8 = *(int *)(lVar12 + 0xc);
      do {
        plVar15 = *(long **)(lVar12 + 0x10);
        if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar7), iVar9 != 0)) {
          if (((*puVar14 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar14), iVar9 != 0)) {
            uVar11 = FUN_0087f8f0();
            *(undefined8 *)puVar5 = uVar11;
            __cxa_guard_release(puVar14);
          }
          *(undefined **)puVar6 = puVar5;
          __cxa_guard_release(puVar7);
        }
        while( true ) {
          if (plVar15 == (long *)0x0) goto LAB_0257b61c;
          if (plVar15 == (long *)puVar6) break;
          plVar15 = (long *)*plVar15;
        }
        iVar9 = *piVar1;
        if (iVar9 == iVar8) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar8 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 != '\0') goto LAB_0257b698;
          lVar12 = *(long *)(lVar12 + 0x18);
          if (lVar12 != 0) {
            plVar15 = (long *)(lVar12 + -0x50);
            iVar8 = FUN_017e60cc(plVar15,*param_2);
            if (iVar8 == 0) {
              if (*(long *)(*(long *)(lVar10 + 0x98) + 8) == 0) {
                puVar14 = (undefined *)0x1;
              }
              else {
                iVar8 = FUN_02c66b3c();
                puVar14 = (undefined *)(ulong)(iVar8 != 0);
              }
LAB_0257b71c:
              bVar4 = false;
            }
            else {
              if (iVar8 == 1) {
                puVar14 = (undefined *)0x0;
                goto LAB_0257b71c;
              }
              bVar4 = true;
            }
            uVar13 = (uint)puVar14;
            lVar12 = *(long *)(lVar12 + 8);
            piVar1 = (int *)(lVar12 + 0xc);
            do {
              iVar8 = *piVar1;
              cVar3 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar2) {
                *piVar1 = iVar8 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar8 + -1 == 0) {
              *(undefined8 *)(lVar12 + 0x18) = 0;
              (**(code **)(*plVar15 + 0x20))(plVar15);
            }
            if (!bVar4) goto LAB_0257b63c;
          }
          break;
        }
        ClearExclusiveLocal();
LAB_0257b698:
        iVar8 = iVar9;
      } while (iVar9 != 0);
    }
LAB_0257b61c:
    if ((*(long *)(*(long *)(lVar10 + 0x98) + 8) == 0) || (iVar8 = FUN_02c66b3c(), iVar8 != 0)) {
      uVar13 = (uint)(*(char *)(param_2 + 1) == '\0');
      goto LAB_0257b63c;
    }
  }
  uVar13 = 0;
LAB_0257b63c:
  return uVar13 & 1;
}


