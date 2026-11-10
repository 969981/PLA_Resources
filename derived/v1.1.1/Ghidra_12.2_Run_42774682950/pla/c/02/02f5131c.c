/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f5131c; name: FUN_02f5131c
 */


void FUN_02f5131c(long param_1)

{
  long *plVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ushort uVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  long lVar9;
  ushort *puVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  uint uVar16;
  
  *(undefined1 *)(param_1 + 0x94) = 1;
  uVar7 = FUN_02f4f580(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x80));
  if (*(long **)(param_1 + 0x78) != (long *)0x0) {
    uVar2 = *(undefined4 *)(param_1 + 0x90);
    uVar6 = (**(code **)(**(long **)(param_1 + 0x78) + 600))();
    if (uVar6 != 0) {
      uVar15 = 0;
      plVar1 = (long *)(param_1 + 0x70);
      do {
        if (uVar15 < *(uint *)(*(long *)(param_1 + 0x78) + 0xd8)) {
          plVar14 = *(long **)(*(long *)(*(long *)(param_1 + 0x78) + 0xd0) + uVar15 * 8);
        }
        else {
          plVar14 = (long *)0x0;
        }
        iVar3 = *(int *)((long)plVar14 + 0x104);
        if (iVar3 == 3) {
          for (lVar9 = *(long *)(param_1 + 0x88); lVar9 != 0; lVar9 = *(long *)(lVar9 + 0x30)) {
            if (*(long **)(lVar9 + 0x10) == plVar14) {
              if ((int)plVar14[0x1d] != 0) {
                uVar16 = 0;
                goto LAB_02f514c8;
              }
              break;
            }
          }
LAB_02f51564:
          FUN_02f518a0(param_1,uVar7,plVar14);
        }
        else {
          if (iVar3 == 2) {
            uVar16 = 0;
            if ((*(ushort *)(plVar14 + 0x21) + 1 & 0xffff) < *(uint *)(plVar14 + 0x1d)) {
              uVar16 = *(ushort *)(plVar14 + 0x21) + 1;
            }
            *(short *)(plVar14 + 0x21) = (short)uVar16;
          }
          else if ((iVar3 == 1) && (uVar4 = *(uint *)(plVar14 + 0x1d), uVar4 != 0)) {
            DAT_0440a190 = DAT_0440a190 * 0x5851f42d4c957f2d + 1;
            uVar5 = 0;
            uVar16 = (uint)((ulong)DAT_0440a190 >> 0x21);
            if (uVar4 != 0) {
              uVar5 = uVar16 / uVar4;
            }
            uVar16 = uVar16 - uVar5 * uVar4;
          }
          else {
            uVar16 = 0;
          }
          puVar8 = (undefined8 *)(*DAT_0442d138)(0,0x38);
          if (puVar8 != (undefined8 *)0x0) {
            *(undefined4 *)(puVar8 + 2) = uVar7;
            *puVar8 = &PTR_LAB_042af378;
            puVar8[3] = plVar14;
            *(uint *)(puVar8 + 4) = uVar16 & 0xffff;
            *(undefined4 *)((long)puVar8 + 0x24) = 0;
            *(undefined4 *)(puVar8 + 6) = uVar2;
            (**(code **)(*plVar14 + 0x10))(plVar14);
            lVar9 = *plVar1;
            if (lVar9 == 0) {
LAB_02f51430:
              puVar8[1] = 0;
              plVar14 = plVar1;
              if (*plVar1 != 0) {
                plVar14 = (long *)(*(long *)(param_1 + 0x68) + 8);
              }
              *plVar14 = (long)puVar8;
              *(undefined8 **)(param_1 + 0x68) = puVar8;
            }
            else if (*(int *)(puVar8 + 2) < *(int *)(lVar9 + 0x10)) {
              puVar8[1] = lVar9;
              *plVar1 = (long)puVar8;
            }
            else {
              do {
                lVar13 = lVar9;
                lVar9 = *(long *)(lVar13 + 8);
                if (lVar9 == 0) goto LAB_02f51430;
              } while (*(int *)(lVar9 + 0x10) <= *(int *)(puVar8 + 2));
              puVar8[1] = lVar9;
              if (lVar13 == 0) {
                *plVar1 = (long)puVar8;
              }
              else {
                *(undefined8 **)(lVar13 + 8) = puVar8;
              }
            }
          }
        }
        uVar15 = uVar15 + 1;
      } while (uVar15 != uVar6);
    }
  }
  return;
LAB_02f514c8:
  if (*(uint *)(lVar9 + 0x20) != 0) {
    lVar13 = (ulong)*(uint *)(lVar9 + 0x20) << 1;
    puVar10 = *(ushort **)(lVar9 + 0x18);
    do {
      if ((uint)*puVar10 == (uVar16 & 0xffff)) {
        puVar8 = (undefined8 *)(*DAT_0442d138)(0,0x38);
        if (puVar8 != (undefined8 *)0x0) {
          *(undefined4 *)(puVar8 + 2) = uVar7;
          *puVar8 = &PTR_LAB_042af378;
          puVar8[3] = plVar14;
          *(uint *)(puVar8 + 4) = uVar16;
          *(undefined4 *)((long)puVar8 + 0x24) = 0;
          *(undefined4 *)(puVar8 + 6) = uVar2;
          (**(code **)(*plVar14 + 0x10))(plVar14);
          lVar13 = *plVar1;
          if (lVar13 == 0) goto LAB_02f51548;
          if (*(int *)(lVar13 + 0x10) <= *(int *)(puVar8 + 2)) goto LAB_02f51594;
          puVar8[1] = lVar13;
          goto LAB_02f51638;
        }
        break;
      }
      lVar13 = lVar13 + -2;
      puVar10 = puVar10 + 1;
    } while (lVar13 != 0);
  }
  goto LAB_02f514d0;
  while (*(int *)(lVar13 + 0x10) <= *(int *)(puVar8 + 2)) {
LAB_02f51594:
    lVar12 = lVar13;
    lVar13 = *(long *)(lVar12 + 8);
    if (lVar13 == 0) goto LAB_02f51548;
  }
  puVar8[1] = lVar13;
  if (lVar12 == 0) {
LAB_02f51638:
    *plVar1 = (long)puVar8;
  }
  else {
    *(undefined8 **)(lVar12 + 8) = puVar8;
  }
LAB_02f514d0:
  uVar16 = uVar16 + 1;
  if (*(uint *)(plVar14 + 0x1d) <= uVar16) goto LAB_02f51564;
  goto LAB_02f514c8;
LAB_02f51548:
  puVar8[1] = 0;
  plVar11 = plVar1;
  if (*plVar1 != 0) {
    plVar11 = (long *)(*(long *)(param_1 + 0x68) + 8);
  }
  *plVar11 = (long)puVar8;
  *(undefined8 **)(param_1 + 0x68) = puVar8;
  goto LAB_02f514d0;
}


