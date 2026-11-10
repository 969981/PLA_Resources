/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0149de94; name: FUN_0149de94
 */


void FUN_0149de94(long param_1,long *param_2)

{
  uint uVar1;
  uint *puVar2;
  int *piVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  uint *puVar9;
  ushort uVar10;
  ulong uVar11;
  ulong uVar12;
  uint *puVar13;
  ushort *puVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long *local_28;
  
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04379558), iVar5 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  *(undefined8 *)PTR_DAT_04379568 = *(undefined8 *)PTR_DAT_04379560;
  FUN_01148a98(&local_28);
  puVar9 = *(uint **)(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0x260) = 0;
  uVar11 = (ulong)(int)*puVar9;
  uVar10 = ((ushort *)((long)puVar9 - uVar11))[2];
  uVar12 = (ulong)uVar10;
  if (*(ushort *)((long)puVar9 - uVar11) < 5) {
    puVar13 = (uint *)0x0;
  }
  else if (uVar10 == 0) {
    uVar12 = 0;
    puVar13 = (uint *)0x0;
  }
  else {
    puVar13 = (uint *)((long)((long)puVar9 + uVar12) + (ulong)*(uint *)((long)puVar9 + uVar12));
  }
  puVar2 = (uint *)((long)((long)puVar9 + uVar12) + (ulong)*(uint *)((long)puVar9 + uVar12));
  if (puVar13 != puVar2 + *puVar2) {
    uVar12 = 0;
LAB_0149dfdc:
    puVar13 = puVar13 + 1;
    piVar3 = (int *)((long)puVar13 + (ulong)*puVar13);
    puVar14 = (ushort *)((long)piVar3 - (long)*piVar3);
    uVar10 = *puVar14;
    if (uVar10 < 5) {
      lVar15 = 0;
    }
    else {
      lVar15 = 0;
      if ((ulong)puVar14[2] != 0) {
        lVar15 = *(long *)((long)piVar3 + (ulong)puVar14[2]);
      }
    }
    if (lVar15 == *param_2) {
      if (uVar10 < 7) {
        uVar16 = 0;
LAB_0149e02c:
        uVar17 = ((long *)local_28[0x37])[1];
        if (uVar17 != 0) {
          uVar6 = uVar17 - (uVar17 >> 1 & 0x5555555555555555);
          uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
          uVar6 = (uVar6 + (uVar6 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (uVar6 < 2) {
            uVar7 = uVar17 - 1 & uVar16;
          }
          else {
            uVar7 = uVar16;
            if (uVar17 <= uVar16) {
              uVar7 = 0;
              if (uVar17 != 0) {
                uVar7 = uVar16 / uVar17;
              }
              uVar7 = uVar16 - uVar7 * uVar17;
            }
          }
          plVar8 = *(long **)(*(long *)local_28[0x37] + uVar7 * 8);
          if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
            if (uVar6 < 2) {
              do {
                if (plVar8[1] == uVar16) {
                  if (plVar8[2] == uVar16) goto LAB_0149e0e0;
                }
                else if ((plVar8[1] & uVar17 - 1) != uVar7) break;
                plVar8 = (long *)*plVar8;
              } while (plVar8 != (long *)0x0);
            }
            else {
              do {
                uVar6 = plVar8[1];
                if (uVar6 == uVar16) {
                  if (plVar8[2] == uVar16) goto LAB_0149e0e0;
                }
                else {
                  if (uVar17 <= uVar6) {
                    uVar4 = 0;
                    if (uVar17 != 0) {
                      uVar4 = uVar6 / uVar17;
                    }
                    uVar6 = uVar6 - uVar4 * uVar17;
                  }
                  if (uVar6 != uVar7) break;
                }
                plVar8 = (long *)*plVar8;
              } while (plVar8 != (long *)0x0);
            }
          }
        }
        goto LAB_0149dfb4;
      }
      uVar16 = 0;
      if (((ulong)puVar14[3] == 0) ||
         (uVar16 = *(ulong *)((long)piVar3 + (ulong)puVar14[3]), uVar16 != 0x99736eaaf7fe189b))
      goto LAB_0149e02c;
      goto LAB_0149e0e8;
    }
    goto LAB_0149dfb4;
  }
LAB_0149e138:
  *(undefined2 *)(param_1 + 0x60) = 0x11;
  *(undefined4 *)(param_1 + 0x260) = 1;
joined_r0x0149e118:
  if ((local_28 != (long *)0x0) && (uVar11 = FUN_02a43a5c(local_28[0xb]), (uVar11 & 1) != 0)) {
    (**(code **)(*local_28 + 0x20))(local_28);
  }
  return;
LAB_0149e0e0:
  if ((char)plVar8[3] != '\0') {
LAB_0149e0e8:
    if (uVar10 < 9) {
      uVar10 = 0;
    }
    else {
      uVar10 = puVar14[4];
      if ((ulong)uVar10 != 0) {
        uVar10 = (ushort)*(undefined4 *)((long)piVar3 + (ulong)uVar10);
      }
    }
    *(ushort *)(param_1 + uVar12 * 2 + 0x60) = uVar10;
    uVar1 = *(int *)(param_1 + 0x260) + 1;
    uVar12 = (ulong)uVar1;
    *(uint *)(param_1 + 0x260) = uVar1;
    uVar11 = (ulong)*puVar9;
  }
LAB_0149dfb4:
  puVar2 = (uint *)((long)puVar9 + (ulong)*(ushort *)((long)puVar9 + (4 - (long)(int)uVar11)));
  puVar2 = (uint *)((long)puVar2 + (ulong)*puVar2);
  if (puVar13 == puVar2 + *puVar2) goto LAB_0149e110;
  goto LAB_0149dfdc;
LAB_0149e110:
  if ((int)uVar12 != 0) goto joined_r0x0149e118;
  goto LAB_0149e138;
}


