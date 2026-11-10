/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01861730; name: FUN_01861730
 */


undefined8 FUN_01861730(long *param_1)

{
  int *piVar1;
  char cVar2;
  byte *pbVar3;
  undefined8 *puVar4;
  byte *pbVar5;
  undefined8 *puVar6;
  byte *pbVar7;
  undefined8 *puVar8;
  bool bVar9;
  int iVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  int iVar15;
  undefined8 *puVar16;
  long *local_68;
  
  if ((*param_1 == 0) || (*(int *)(*param_1 + 0xc) == 0)) {
LAB_0186184c:
    uVar11 = 1;
  }
  else {
    if ((*param_1 == 0) || (FUN_00be940c(&local_68), local_68 == (long *)0x0)) {
LAB_01861770:
      lVar13 = param_1[2];
      pbVar3 = PTR_DAT_043794d0;
      puVar4 = (undefined8 *)PTR_DAT_043794d8;
      pbVar5 = PTR_DAT_043795d8;
      puVar6 = (undefined8 *)PTR_DAT_043795e0;
      pbVar7 = PTR_DAT_0437a250;
      puVar8 = (undefined8 *)PTR_DAT_0437a258;
    }
    else {
      uVar12 = FUN_01ec9c84(local_68);
      lVar13 = local_68[0xb];
      piVar1 = (int *)(lVar13 + 0xc);
      do {
        iVar15 = *piVar1;
        cVar2 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar9) {
          *piVar1 = iVar15 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      bVar9 = iVar15 == 1;
      if (bVar9) {
        *(undefined8 *)(lVar13 + 0x18) = 0;
      }
      if ((uVar12 & 1) == 0) {
        if (bVar9) {
          (**(code **)(*local_68 + 0x20))(local_68);
        }
        goto LAB_0186184c;
      }
      if (!bVar9) goto LAB_01861770;
      (**(code **)(*local_68 + 0x20))(local_68);
      lVar13 = param_1[2];
      pbVar3 = PTR_DAT_043794d0;
      puVar4 = (undefined8 *)PTR_DAT_043794d8;
      pbVar5 = PTR_DAT_043795d8;
      puVar6 = (undefined8 *)PTR_DAT_043795e0;
      pbVar7 = PTR_DAT_0437a250;
      puVar8 = (undefined8 *)PTR_DAT_0437a258;
    }
    PTR_DAT_043794d0 = pbVar3;
    PTR_DAT_043794d8 = (undefined *)puVar4;
    PTR_DAT_043795d8 = pbVar5;
    PTR_DAT_043795e0 = (undefined *)puVar6;
    PTR_DAT_0437a250 = pbVar7;
    PTR_DAT_0437a258 = (undefined *)puVar8;
    if ((lVar13 != 0) && (*(int *)(lVar13 + 0xc) != 0)) {
      piVar1 = (int *)(lVar13 + 0xc);
      iVar15 = *(int *)(lVar13 + 0xc);
      do {
        puVar16 = *(undefined8 **)(lVar13 + 0x10);
        if (((*pbVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(pbVar7), iVar10 != 0)) {
          if (((*pbVar5 & 1) == 0) && (iVar10 = __cxa_guard_acquire(pbVar5), iVar10 != 0)) {
            if (((*pbVar3 & 1) == 0) && (iVar10 = __cxa_guard_acquire(pbVar3), iVar10 != 0)) {
              uVar11 = FUN_0087f8f0();
              *puVar4 = uVar11;
              __cxa_guard_release(pbVar3);
            }
            *puVar6 = puVar4;
            __cxa_guard_release(pbVar5);
          }
          *puVar8 = puVar6;
          __cxa_guard_release(pbVar7);
        }
        while( true ) {
          if (puVar16 == (undefined8 *)0x0) goto LAB_01861778;
          if (puVar16 == puVar8) break;
          puVar16 = (undefined8 *)*puVar16;
        }
        iVar10 = *piVar1;
        if (iVar10 == iVar15) {
          cVar2 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar9) {
            *piVar1 = iVar15 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 != '\0') goto LAB_0186186c;
          lVar13 = *(long *)(lVar13 + 0x18);
          if (lVar13 != 0) {
            lVar14 = *(long *)(lVar13 + 8);
            piVar1 = (int *)(lVar14 + 0xc);
            iVar15 = *(int *)(lVar13 + 0x304);
            do {
              iVar10 = *piVar1;
              cVar2 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar9) {
                *piVar1 = iVar10 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar10 + -1 != 0) {
              if (iVar15 == 0) break;
              goto LAB_0186184c;
            }
            *(undefined8 *)(lVar14 + 0x18) = 0;
            (**(code **)(*(long *)(lVar13 + -0x50) + 0x20))();
            if (iVar15 != 0) goto LAB_0186184c;
          }
          break;
        }
        ClearExclusiveLocal();
LAB_0186186c:
        iVar15 = iVar10;
      } while (iVar10 != 0);
    }
LAB_01861778:
    uVar11 = 0;
  }
  return uVar11;
}


