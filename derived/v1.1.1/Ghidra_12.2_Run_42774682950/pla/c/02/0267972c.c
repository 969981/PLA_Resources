/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0267972c; name: FUN_0267972c
 */


undefined8 FUN_0267972c(long *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  undefined8 *puVar16;
  
  uVar12 = FUN_01a8769c();
  puVar8 = PTR_DAT_04379e70;
  puVar7 = PTR_DAT_04379e68;
  puVar6 = PTR_DAT_043795e0;
  puVar5 = PTR_DAT_043794d8;
  puVar4 = PTR_DAT_043794d0;
  if ((uVar12 & 1) == 0) {
    uVar13 = 0;
  }
  else {
    lVar14 = param_1[0x191];
    if ((lVar14 == 0) || (*(int *)(lVar14 + 0xc) == 0)) {
LAB_0267975c:
      uVar13 = 1;
    }
    else {
      piVar1 = (int *)(lVar14 + 0xc);
      iVar10 = *(int *)(lVar14 + 0xc);
      do {
        puVar16 = *(undefined8 **)(lVar14 + 0x10);
        if (((*puVar7 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar7), iVar11 != 0)) {
          if (((*PTR_DAT_043795d8 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_043795d8), iVar11 != 0)) {
            if (((*puVar4 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar4), iVar11 != 0)) {
              uVar13 = FUN_0087f8f0();
              *(undefined8 *)puVar5 = uVar13;
              __cxa_guard_release(puVar4);
            }
            *(undefined **)puVar6 = puVar5;
            __cxa_guard_release(PTR_DAT_043795d8);
          }
          *(undefined **)puVar8 = puVar6;
          __cxa_guard_release(puVar7);
        }
        if (puVar16 == (undefined8 *)0x0) goto LAB_0267975c;
        while (puVar16 != (undefined8 *)puVar8) {
          puVar16 = (undefined8 *)*puVar16;
          if (puVar16 == (undefined8 *)0x0) {
            return 1;
          }
        }
        iVar11 = *piVar1;
        if (iVar11 == iVar10) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar10 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            lVar14 = *(long *)(lVar14 + 0x18);
            if (lVar14 != 0) {
              uVar9 = FUN_01a87cb8(param_1);
              iVar10 = FUN_01a87ef0(param_1,uVar9);
              if (iVar10 != 0) {
                (**(code **)(*param_1 + 0x140))(param_1);
              }
              lVar15 = *(long *)(lVar14 + 8);
              piVar1 = (int *)(lVar15 + 0xc);
              do {
                iVar10 = *piVar1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                  *piVar1 = iVar10 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (iVar10 == 1) {
                *(undefined8 *)(lVar15 + 0x18) = 0;
                (**(code **)(*(long *)(lVar14 + -0x50) + 0x20))((long *)(lVar14 + -0x50));
              }
            }
            goto LAB_0267975c;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        uVar13 = 1;
        iVar10 = iVar11;
      } while (iVar11 != 0);
    }
  }
  return uVar13;
}


