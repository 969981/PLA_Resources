/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e202d4; name: FUN_01e202d4
 */


uint FUN_01e202d4(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  uint uVar10;
  int iVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  long *plVar15;
  int iVar16;
  undefined8 *puVar17;
  
  puVar9 = PTR_DAT_04379e70;
  puVar8 = PTR_DAT_04379e68;
  puVar7 = PTR_DAT_043795e0;
  puVar6 = PTR_DAT_043795d8;
  puVar5 = PTR_DAT_043794d8;
  puVar4 = PTR_DAT_043794d0;
  lVar14 = *(long *)(param_1 + 0x138);
  uVar10 = 0;
  if (lVar14 != 0) {
    if (*(int *)(lVar14 + 0xc) == 0) {
LAB_01e20410:
      uVar10 = 0;
    }
    else {
      piVar1 = (int *)(lVar14 + 0xc);
      iVar16 = *(int *)(lVar14 + 0xc);
      do {
        puVar17 = *(undefined8 **)(lVar14 + 0x10);
        if (((*puVar8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar8), iVar11 != 0)) {
          if (((*puVar6 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar6), iVar11 != 0)) {
            if (((*puVar4 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar4), iVar11 != 0)) {
              uVar13 = FUN_0087f8f0();
              *(undefined8 *)puVar5 = uVar13;
              __cxa_guard_release(puVar4);
            }
            *(undefined **)puVar7 = puVar5;
            __cxa_guard_release(puVar6);
          }
          *(undefined **)puVar9 = puVar7;
          __cxa_guard_release(puVar8);
        }
        if (puVar17 == (undefined8 *)0x0) goto LAB_01e20410;
        while (puVar17 != (undefined8 *)puVar9) {
          puVar17 = (undefined8 *)*puVar17;
          uVar10 = 0;
          if (puVar17 == (undefined8 *)0x0) goto LAB_01e202f8;
        }
        iVar11 = *piVar1;
        if (iVar11 == iVar16) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar16 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            lVar14 = *(long *)(lVar14 + 0x18);
            if (lVar14 == 0) goto LAB_01e20410;
            plVar15 = (long *)(lVar14 + -0x50);
            uVar10 = FUN_025eab94(plVar15);
            uVar12 = FUN_02a43a5c(*(undefined8 *)(lVar14 + 8));
            if ((uVar12 & 1) != 0) {
              (**(code **)(*plVar15 + 0x20))(plVar15);
            }
            break;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        uVar10 = 0;
        iVar16 = iVar11;
      } while (iVar11 != 0);
    }
  }
LAB_01e202f8:
  return uVar10 & 1;
}


