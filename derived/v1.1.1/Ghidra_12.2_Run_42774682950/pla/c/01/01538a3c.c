/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01538a3c; name: FUN_01538a3c
 */


void FUN_01538a3c(long *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  int iVar15;
  undefined8 *puVar16;
  
  lVar14 = *param_1;
  FUN_02c90b50(*(undefined8 *)(lVar14 + 0x4b8),1);
  puVar7 = PTR_DAT_0437f890;
  puVar6 = PTR_DAT_0437f888;
  puVar5 = PTR_DAT_043794d8;
  puVar4 = PTR_DAT_043794d0;
  if (0 < *(int *)(lVar14 + 0x4f0)) {
    lVar11 = *(long *)(lVar14 + 0x98);
    if ((lVar11 == 0) || (*(int *)(lVar11 + 0xc) == 0)) {
LAB_01538a98:
      plVar13 = (long *)0x0;
    }
    else {
      piVar1 = (int *)(lVar11 + 0xc);
      iVar15 = *(int *)(lVar11 + 0xc);
      do {
        puVar16 = *(undefined8 **)(lVar11 + 0x10);
        if (((*puVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar6), iVar8 != 0)) {
          if (((*puVar4 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar4), iVar8 != 0)) {
            uVar10 = FUN_0087f8f0();
            *(undefined8 *)puVar5 = uVar10;
            __cxa_guard_release(puVar4);
          }
          *(undefined **)puVar7 = puVar5;
          __cxa_guard_release(puVar6);
        }
        if (puVar16 == (undefined8 *)0x0) goto LAB_01538a98;
        while (puVar16 != (undefined8 *)puVar7) {
          puVar16 = (undefined8 *)*puVar16;
          plVar13 = (long *)0x0;
          if (puVar16 == (undefined8 *)0x0) goto LAB_01538a9c;
        }
        iVar8 = *piVar1;
        if (iVar8 == iVar15) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar15 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            plVar13 = (long *)0x0;
            if (*(long *)(lVar11 + 0x18) != 0) {
              plVar13 = (long *)(*(long *)(lVar11 + 0x18) + -0x50);
            }
            break;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        plVar13 = (long *)0x0;
        iVar15 = iVar8;
      } while (iVar8 != 0);
    }
LAB_01538a9c:
    plVar9 = (long *)FUN_01517f48(plVar13 + 0x32,lVar14 + 0x68);
    lVar11 = *plVar9;
    if (plVar13 != (long *)0x0) {
      lVar12 = plVar13[0xb];
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        iVar15 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar15 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar15 + -1 == 0) {
        *(undefined8 *)(lVar12 + 0x18) = 0;
        (**(code **)(*plVar13 + 0x20))(plVar13);
      }
    }
    *(undefined4 *)(lVar11 + 0x2d8) = *(undefined4 *)(lVar14 + 0x4f0);
  }
  return;
}


