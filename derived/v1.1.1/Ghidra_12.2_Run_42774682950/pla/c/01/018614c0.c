/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 018614c0; name: FUN_018614c0
 */


undefined8 FUN_018614c0(long *param_1)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  bool bVar4;
  byte *pbVar5;
  undefined8 *puVar6;
  byte *pbVar7;
  undefined8 *puVar8;
  byte *pbVar9;
  undefined8 *puVar10;
  int iVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  int iVar16;
  undefined8 *puVar17;
  long *local_68;
  
  if ((*param_1 == 0) || (*(int *)(*param_1 + 0xc) == 0)) {
LAB_018616a0:
    uVar12 = 1;
  }
  else {
    if ((*param_1 == 0) || (FUN_00b911c4(&local_68), local_68 == (long *)0x0)) {
LAB_01861500:
      lVar14 = param_1[2];
      pbVar5 = PTR_DAT_043794d0;
      puVar6 = (undefined8 *)PTR_DAT_043794d8;
      pbVar7 = PTR_DAT_043795d8;
      puVar8 = (undefined8 *)PTR_DAT_043795e0;
      pbVar9 = PTR_DAT_0437a250;
      puVar10 = (undefined8 *)PTR_DAT_0437a258;
    }
    else {
      uVar13 = FUN_01ba01d8(local_68);
      if (((uVar13 & 1) == 0) || (uVar13 = FUN_01ba01bc(local_68), (uVar13 & 1) != 0)) {
        lVar14 = local_68[0xb];
        piVar1 = (int *)(lVar14 + 0xc);
        do {
          iVar16 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar16 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar16 == 1) {
          *(undefined8 *)(lVar14 + 0x18) = 0;
          (**(code **)(*local_68 + 0x20))(local_68);
        }
        goto LAB_018616a0;
      }
      lVar14 = local_68[0xb];
      piVar1 = (int *)(lVar14 + 0xc);
      do {
        iVar16 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar16 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar16 + -1 != 0) goto LAB_01861500;
      *(undefined8 *)(lVar14 + 0x18) = 0;
      (**(code **)(*local_68 + 0x20))(local_68);
      lVar14 = param_1[2];
      pbVar5 = PTR_DAT_043794d0;
      puVar6 = (undefined8 *)PTR_DAT_043794d8;
      pbVar7 = PTR_DAT_043795d8;
      puVar8 = (undefined8 *)PTR_DAT_043795e0;
      pbVar9 = PTR_DAT_0437a250;
      puVar10 = (undefined8 *)PTR_DAT_0437a258;
    }
    PTR_DAT_043794d0 = pbVar5;
    PTR_DAT_043794d8 = (undefined *)puVar6;
    PTR_DAT_043795d8 = pbVar7;
    PTR_DAT_043795e0 = (undefined *)puVar8;
    PTR_DAT_0437a250 = pbVar9;
    PTR_DAT_0437a258 = (undefined *)puVar10;
    if ((lVar14 != 0) && (*(int *)(lVar14 + 0xc) != 0)) {
      piVar1 = (int *)(lVar14 + 0xc);
      iVar16 = *(int *)(lVar14 + 0xc);
      do {
        puVar17 = *(undefined8 **)(lVar14 + 0x10);
        if (((*pbVar9 & 1) == 0) && (iVar11 = __cxa_guard_acquire(pbVar9), iVar11 != 0)) {
          if (((*pbVar7 & 1) == 0) && (iVar11 = __cxa_guard_acquire(pbVar7), iVar11 != 0)) {
            if (((*pbVar5 & 1) == 0) && (iVar11 = __cxa_guard_acquire(pbVar5), iVar11 != 0)) {
              uVar12 = FUN_0087f8f0();
              *puVar6 = uVar12;
              __cxa_guard_release(pbVar5);
            }
            *puVar8 = puVar6;
            __cxa_guard_release(pbVar7);
          }
          *puVar10 = puVar8;
          __cxa_guard_release(pbVar9);
        }
        while( true ) {
          if (puVar17 == (undefined8 *)0x0) goto LAB_01861508;
          if (puVar17 == puVar10) break;
          puVar17 = (undefined8 *)*puVar17;
        }
        iVar11 = *piVar1;
        if (iVar11 == iVar16) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar16 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 != '\0') goto LAB_01861608;
          lVar14 = *(long *)(lVar14 + 0x18);
          if (lVar14 != 0) {
            if ((*(char *)(lVar14 + 0x304) < '\0') || (*(char *)(lVar14 + 0x1b0) != '\0')) {
              bVar4 = false;
            }
            else {
              bVar4 = true;
            }
            lVar15 = *(long *)(lVar14 + 8);
            piVar1 = (int *)(lVar15 + 0xc);
            do {
              iVar16 = *piVar1;
              cVar3 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar2) {
                *piVar1 = iVar16 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar16 + -1 != 0) {
              if (bVar4) break;
              goto LAB_018616a0;
            }
            *(undefined8 *)(lVar15 + 0x18) = 0;
            (**(code **)(*(long *)(lVar14 + -0x50) + 0x20))();
            if (!bVar4) goto LAB_018616a0;
          }
          break;
        }
        ClearExclusiveLocal();
LAB_01861608:
        iVar16 = iVar11;
      } while (iVar11 != 0);
    }
LAB_01861508:
    uVar12 = 0;
  }
  return uVar12;
}


