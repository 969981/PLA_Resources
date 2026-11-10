/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00237358; name: FUN_00237358
 */


void FUN_00237358(undefined8 param_1,long param_2,long param_3)

{
  long *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined *puVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  ushort uVar11;
  uint uVar12;
  int *piVar13;
  long lVar14;
  int iVar15;
  long lVar16;
  long lVar17;
  ushort *puVar18;
  ulong uVar19;
  long lVar20;
  
  puVar7 = PTR_DAT_04372bb8;
  if (*(short *)(param_3 + 0x78) != 0) {
    uVar19 = 0;
    plVar1 = (long *)(param_2 + 0x28);
    do {
      lVar20 = *(long *)(param_3 + 0x68);
      plVar8 = (long *)(**(code **)PTR_DAT_04372ba8)(0x28,4,*(undefined8 *)puVar7);
      if (plVar8 != (long *)0x0) {
        *plVar8 = (long)plVar8;
        plVar8[1] = (long)plVar8;
        plVar8[4] = (long)(plVar8 + 3);
        plVar8[2] = 0;
        plVar8[3] = (long)(plVar8 + 3);
      }
      lVar17 = lVar20 + uVar19 * 0x38;
      FUN_00238114(plVar8,lVar17,param_2 + 0x38);
      puVar18 = (ushort *)(lVar17 + 0x30);
      uVar11 = *puVar18;
      if (uVar11 != 0) {
        uVar9 = 0;
        do {
          lVar17 = *(long *)(lVar20 + uVar19 * 0x38 + 0x20) + uVar9 * 0x38;
          uVar4 = *(undefined4 *)(lVar17 + 0x24);
          uVar5 = *(undefined4 *)(lVar17 + 0x28);
          uVar2 = *(undefined4 *)(lVar17 + 0x2c);
          uVar3 = *(undefined4 *)(lVar17 + 0x30);
          plVar10 = (long *)plVar8[4];
          if (plVar8 + 3 != plVar10) {
            uVar12 = 0;
            if (uVar9 == 0) goto LAB_00237498;
            while( true ) {
              plVar10 = (long *)plVar10[1];
              uVar12 = uVar12 + 1;
              if (plVar8 + 3 == plVar10) break;
              if (uVar9 == uVar12) {
LAB_00237498:
                iVar15 = (int)plVar10[2];
                if (0 < iVar15) {
                  piVar13 = (int *)plVar10[3];
                  lVar17 = 0;
                  lVar14 = 0;
                  iVar6 = *piVar13;
                  while( true ) {
                    if (0 < iVar6) {
                      **(undefined4 **)((long)piVar13 + lVar14 + 8) = uVar4;
                      piVar13 = (int *)plVar10[3];
                      if (1 < *(int *)((long)piVar13 + lVar14)) {
                        *(undefined4 *)(*(long *)((long)piVar13 + lVar14 + 8) + 4) = uVar5;
                        piVar13 = (int *)plVar10[3];
                        if (2 < *(int *)((long)piVar13 + lVar14)) {
                          *(undefined4 *)(*(long *)((long)piVar13 + lVar14 + 8) + 8) = uVar2;
                          piVar13 = (int *)plVar10[3];
                          if (3 < *(int *)((long)piVar13 + lVar14)) {
                            *(undefined4 *)(*(long *)((long)piVar13 + lVar14 + 8) + 0xc) = uVar3;
                            piVar13 = (int *)plVar10[3];
                            if (4 < *(int *)((long)piVar13 + lVar14)) {
                              lVar16 = 4;
                              do {
                                *(undefined4 *)(*(long *)((long)piVar13 + lVar14 + 8) + lVar16 * 4)
                                     = 0;
                                piVar13 = (int *)plVar10[3];
                                lVar16 = lVar16 + 1;
                              } while (lVar16 < *(int *)((long)piVar13 + lVar14));
                            }
                          }
                        }
                      }
                      iVar15 = (int)plVar10[2];
                    }
                    lVar17 = lVar17 + 1;
                    if (iVar15 <= lVar17) break;
                    lVar14 = lVar17 * 0x10;
                    iVar6 = piVar13[lVar17 * 4];
                  }
                }
              }
            }
            uVar11 = *puVar18;
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 < uVar11);
      }
      lVar20 = *plVar8;
      uVar19 = uVar19 + 1;
      *plVar8 = *plVar1;
      *(long **)(lVar20 + 8) = plVar1;
      *(long **)(*plVar1 + 8) = plVar8;
      *plVar1 = lVar20;
    } while (uVar19 < *(ushort *)(param_3 + 0x78));
  }
  return;
}


