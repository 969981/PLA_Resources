/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005b72e4; name: FUN_005b72e4
 */


undefined8 FUN_005b72e4(ulong *param_1,ulong *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong *puVar3;
  long *plVar4;
  ulong *puVar5;
  ulong *puVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  ulong *puVar10;
  long *plVar11;
  
  uVar2 = *param_1;
  if ((*param_2 ^ uVar2) < 2) {
    if (1 < uVar2) {
      uVar9 = 0;
      puVar5 = param_1 + 1;
      if ((uVar2 & 1) == 0) goto LAB_005b7360;
LAB_005b735c:
      puVar5 = (ulong *)param_1[1];
LAB_005b7360:
      if (*param_2 >> 1 <= uVar9) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("i < size()","external/com_google_absl\\absl/container/inlined_vector.h",0x13e
                      ,"operator[]");
      }
      puVar3 = param_2 + 1;
      if ((*param_2 & 1) != 0) {
        puVar3 = (ulong *)param_2[1];
      }
      if (puVar5[uVar9 * 3 + 2] == puVar3[uVar9 * 3 + 2]) {
        puVar5 = puVar5 + uVar9 * 3;
        puVar10 = (ulong *)*puVar5;
        if (puVar10 == puVar5 + 1) goto LAB_005b7344;
        plVar11 = (long *)puVar3[uVar9 * 3];
        if (puVar10[4] == ((long *)puVar3[uVar9 * 3])[4]) {
          do {
            uVar2 = FUN_005c5e98(puVar10 + 5,plVar11 + 5);
            if ((uVar2 & 1) == 0) break;
            puVar3 = (ulong *)puVar10[1];
            if ((ulong *)puVar10[1] == (ulong *)0x0) {
              puVar3 = puVar10 + 2;
              puVar6 = (ulong *)*puVar3;
              if ((ulong *)*puVar6 != puVar10) {
                do {
                  uVar2 = *puVar3;
                  puVar3 = (ulong *)(uVar2 + 0x10);
                  puVar6 = (ulong *)*puVar3;
                } while (*puVar6 != uVar2);
                goto LAB_005b7434;
              }
              plVar4 = (long *)plVar11[1];
              if ((long *)plVar11[1] != (long *)0x0) goto LAB_005b743c;
LAB_005b7458:
              plVar4 = plVar11 + 2;
              plVar7 = (long *)*plVar4;
              if ((long *)*plVar7 != plVar11) {
                do {
                  lVar8 = *plVar4;
                  plVar4 = (long *)(lVar8 + 0x10);
                  plVar7 = (long *)*plVar4;
                } while (*plVar7 != lVar8);
              }
            }
            else {
              do {
                puVar6 = puVar3;
                puVar3 = (ulong *)*puVar6;
              } while ((ulong *)*puVar6 != (ulong *)0x0);
LAB_005b7434:
              plVar4 = (long *)plVar11[1];
              if ((long *)plVar11[1] == (long *)0x0) goto LAB_005b7458;
LAB_005b743c:
              do {
                plVar7 = plVar4;
                plVar4 = (long *)*plVar7;
              } while ((long *)*plVar7 != (long *)0x0);
            }
            if (puVar6 == puVar5 + 1) goto LAB_005b7340;
            puVar10 = puVar6;
            plVar11 = plVar7;
            if (puVar6[4] != plVar7[4]) break;
          } while( true );
        }
      }
      goto LAB_005b7488;
    }
    uVar1 = 1;
  }
  else {
LAB_005b7488:
    uVar1 = 0;
  }
  return uVar1;
LAB_005b7340:
  uVar2 = *param_1;
LAB_005b7344:
  uVar9 = uVar9 + 1;
  if (uVar2 >> 1 <= uVar9) {
    return 1;
  }
  puVar5 = param_1 + 1;
  if ((uVar2 & 1) != 0) goto LAB_005b735c;
  goto LAB_005b7360;
}


