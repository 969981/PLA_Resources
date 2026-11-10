/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03017280; name: FUN_03017280
 */


uint FUN_03017280(long param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  uint *puVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  char cVar9;
  bool bVar10;
  undefined4 *puVar11;
  long *plVar12;
  int *piVar13;
  long lVar14;
  ulong uVar15;
  undefined8 *puVar16;
  uint uVar17;
  uint uVar18;
  ulong *puVar19;
  ulong *puVar20;
  long *plVar21;
  ulong *puVar22;
  
  if ((*param_2 == 0) && (0 < (int)*(uint *)(param_1 + 0x48))) {
    lVar14 = 0;
    piVar13 = *(int **)(param_1 + 0x40) + 0xe;
    if (**(int **)(param_1 + 0x40) == 0) goto LAB_03017304;
    do {
      do {
        lVar14 = lVar14 + -1;
        piVar2 = piVar13 + 0x1c;
        if (-lVar14 == (ulong)*(uint *)(param_1 + 0x48)) goto LAB_03017488;
        piVar1 = piVar13 + 0xe;
        piVar13 = piVar2;
      } while (*piVar1 != 0);
LAB_03017304:
    } while (((((((piVar13[-0xd] != param_2[1]) || (piVar13[-0xc] != param_2[2])) ||
                (piVar13[-0xb] != param_2[3])) ||
               ((piVar13[-10] != param_2[4] || (piVar13[-9] != param_2[5])))) ||
              (piVar13[-8] != param_2[6])) ||
             (((((piVar13[-7] != param_2[7] || (piVar13[-6] != param_2[8])) ||
                ((piVar13[-5] != param_2[9] ||
                 (((piVar13[-4] != param_2[10] || (piVar13[-3] != param_2[0xb])) ||
                  (piVar13[-2] != param_2[0xc])))))) ||
               (((piVar13[-1] != param_2[0xd] || (*piVar13 != param_2[0xe])) ||
                ((piVar13[1] != param_2[0xf] ||
                 ((((piVar13[2] != param_2[0x10] || (piVar13[3] != param_2[0x11])) ||
                   ((piVar13[4] != param_2[0x12] ||
                    (((piVar13[5] != param_2[0x13] || (piVar13[6] != param_2[0x14])) ||
                     (piVar13[7] != param_2[0x15])))))) ||
                  ((piVar13[8] != param_2[0x16] || (piVar13[9] != param_2[0x17])))))))))) ||
              (piVar13[10] != param_2[0x18])))) ||
            (((piVar13[0xb] != param_2[0x19] || (piVar13[0xc] != param_2[0x1a])) ||
             (piVar13[0xd] != param_2[0x1b]))));
    if ((int)lVar14 != 1) {
      uVar18 = -(int)lVar14;
      goto LAB_03017604;
    }
  }
LAB_03017488:
  puVar3 = (uint *)(param_1 + 0x5c);
  if ((~*(uint *)(param_1 + 0x5c) & 0xffffff) == 0) {
    puVar19 = (ulong *)(param_1 + 0x38);
    plVar12 = (long *)(*puVar19 & 0xfffffffffffffffc);
    *puVar19 = (ulong)plVar12 | 1;
    if (plVar12 == (long *)0x0) {
      uVar15 = 0;
    }
    else {
      puVar20 = puVar19;
      do {
        while( true ) {
          puVar22 = (ulong *)(plVar12 + 1);
          uVar15 = *puVar22;
          plVar21 = (long *)(uVar15 & 0xfffffffffffffffc);
          if ((uVar15 & 3) == 0) break;
          (**(code **)(*plVar12 + 8))();
          *puVar20 = *puVar20 & 3 | (ulong)plVar21;
          plVar12 = plVar21;
          if (plVar21 == (long *)0x0) goto LAB_0301769c;
        }
        (**(code **)(*plVar12 + 0x20))(plVar12,param_1);
        plVar12 = plVar21;
        puVar20 = puVar22;
      } while (plVar21 != (long *)0x0);
LAB_0301769c:
      uVar15 = *puVar19 & 0xfffffffffffffffc;
    }
    *puVar19 = uVar15;
  }
  uVar17 = *puVar3;
  uVar18 = uVar17 & 0xffffff;
  if (uVar18 != 0xffffff) {
LAB_030174d0:
    uVar4 = *puVar3;
    if (uVar4 == uVar17) {
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(puVar3,0x10);
      if (bVar10) {
        *puVar3 = uVar17 + 0x1000000 & 0xff000000 |
                  *(uint *)(*(long *)(param_1 + 0x40) + (ulong)uVar18 * 0x70) & 0xffffff;
        cVar9 = ExclusiveMonitorsStatus();
      }
      if (cVar9 == '\0') {
        piVar13 = (int *)(param_1 + 0x60);
        do {
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(piVar13,0x10);
          if (bVar10) {
            *piVar13 = *piVar13 + 1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        iVar8 = *(int *)(param_1 + 100);
        uVar17 = iVar8 + 1;
        if (uVar17 <= uVar18) {
          uVar4 = uVar18 + 1;
          if (uVar17 <= uVar4) {
            uVar17 = uVar4;
          }
          piVar13 = (int *)(param_1 + 100);
          do {
            if (*piVar13 != iVar8) {
              do {
                ClearExclusiveLocal();
                iVar8 = *piVar13;
                uVar17 = uVar4;
                if (uVar4 < iVar8 + 1U) {
                  uVar17 = iVar8 + 1;
                }
                while (*piVar13 == iVar8) {
                  cVar9 = '\x01';
                  bVar10 = (bool)ExclusiveMonitorPass(piVar13,0x10);
                  if (bVar10) {
                    *piVar13 = uVar17 - 1;
                    cVar9 = ExclusiveMonitorsStatus();
                  }
                  if (cVar9 == '\0') goto LAB_0301757c;
                }
              } while( true );
            }
            cVar9 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(piVar13,0x10);
            if (bVar10) {
              *piVar13 = uVar17 - 1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
        }
LAB_0301757c:
        puVar11 = (undefined4 *)(*(long *)(param_1 + 0x40) + (ulong)uVar18 * 0x70);
        *puVar11 = 0;
        FUN_03017c48(0x411cf5c3,puVar11,1);
        puVar16 = (undefined8 *)(*(long *)(param_1 + 0x40) + (ulong)(uVar18 & 0xffff) * 0x70);
        uVar5 = *(undefined8 *)(param_2 + 2);
        *puVar16 = *(undefined8 *)param_2;
        puVar16[1] = uVar5;
        uVar5 = *(undefined8 *)(param_2 + 4);
        uVar6 = *(undefined8 *)(param_2 + 6);
        uVar7 = *(undefined8 *)(param_2 + 10);
        puVar16[4] = *(undefined8 *)(param_2 + 8);
        puVar16[5] = uVar7;
        puVar16[2] = uVar5;
        puVar16[3] = uVar6;
        uVar5 = *(undefined8 *)(param_2 + 0xc);
        uVar6 = *(undefined8 *)(param_2 + 0xe);
        uVar7 = *(undefined8 *)(param_2 + 0x12);
        puVar16[8] = *(undefined8 *)(param_2 + 0x10);
        puVar16[9] = uVar7;
        puVar16[6] = uVar5;
        puVar16[7] = uVar6;
        uVar5 = *(undefined8 *)(param_2 + 0x14);
        uVar6 = *(undefined8 *)(param_2 + 0x16);
        uVar7 = *(undefined8 *)(param_2 + 0x1a);
        puVar16[0xc] = *(undefined8 *)(param_2 + 0x18);
        puVar16[0xd] = uVar7;
        puVar16[10] = uVar5;
        puVar16[0xb] = uVar6;
        puVar19 = (ulong *)(param_1 + 0x20);
        plVar12 = (long *)(*puVar19 & 0xfffffffffffffffc);
        *puVar19 = (ulong)plVar12 | 1;
        if (plVar12 == (long *)0x0) {
          uVar15 = 0;
        }
        else {
          puVar20 = puVar19;
          do {
            while( true ) {
              puVar22 = (ulong *)(plVar12 + 1);
              uVar15 = *puVar22;
              plVar21 = (long *)(uVar15 & 0xfffffffffffffffc);
              if ((uVar15 & 3) == 0) break;
              (**(code **)(*plVar12 + 8))();
              *puVar20 = *puVar20 & 3 | (ulong)plVar21;
              plVar12 = plVar21;
              if (plVar21 == (long *)0x0) goto LAB_03017718;
            }
            (**(code **)(*plVar12 + 0x20))(plVar12,param_1,(ulong)(uVar18 & 0xffff));
            plVar12 = plVar21;
            puVar20 = puVar22;
          } while (plVar21 != (long *)0x0);
LAB_03017718:
          uVar15 = *puVar19 & 0xfffffffffffffffc;
        }
        *puVar19 = uVar15;
        goto LAB_03017604;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    uVar18 = uVar4 & 0xffffff;
    uVar17 = uVar4;
    if (uVar18 == 0xffffff) goto LAB_03017620;
    goto LAB_030174d0;
  }
LAB_03017620:
  uVar18 = 0xffff;
LAB_03017604:
  return uVar18 & 0xffff;
}


