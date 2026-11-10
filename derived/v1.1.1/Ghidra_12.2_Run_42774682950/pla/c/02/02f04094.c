/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f04094; name: FUN_02f04094
 */


void FUN_02f04094(long *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  ushort uVar5;
  long *plVar6;
  undefined2 *puVar7;
  int iVar8;
  int *piVar9;
  ushort *puVar10;
  ulong uVar11;
  long lVar12;
  int *piVar13;
  int *piVar14;
  long lVar15;
  ushort *puVar16;
  undefined4 *puVar17;
  undefined4 uVar18;
  ushort *local_68;
  ulong local_58;
  
  plVar6 = (long *)(**(code **)(*param_1 + 0x80))();
  if (plVar6 == (long *)0x0) {
    return;
  }
  lVar15 = *plVar6;
  do {
    if (lVar15 == 0) {
                    /* WARNING: Could not recover jumptable at 0x02f04174. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x40))(param_1);
      return;
    }
    piVar9 = *(int **)(lVar15 + 0x28);
    uVar4 = *(uint *)(lVar15 + 0x30);
    if ((uVar4 == 0) || (*piVar9 == *(int *)(lVar15 + 0x3c))) {
      piVar13 = piVar9;
    }
    else {
      lVar12 = (ulong)uVar4 * 0x10;
      piVar14 = piVar9;
      do {
        lVar12 = lVar12 + -0x10;
        if (lVar12 == 0) goto LAB_02f04134;
        piVar13 = piVar14 + 4;
        piVar1 = piVar14 + 4;
        piVar14 = piVar13;
      } while (*piVar1 != *(int *)(lVar15 + 0x3c));
    }
    if ((piVar13 == piVar9 + (ulong)uVar4 * 4) || (*(long *)(piVar13 + 2) == 0)) {
LAB_02f04134:
      puVar10 = *(ushort **)(lVar15 + 0x20);
      if ((puVar10 != (ushort *)0x0) && ((ulong)*puVar10 != 0)) {
        lVar12 = (ulong)*puVar10 << 1;
        plVar6 = (long *)((long)puVar10 + ((ulong)((int)lVar12 + 5) & 0x3fffc) + 8);
        do {
          if (*plVar6 != 0) {
            FUN_02f0efb8(DAT_0440a150,*plVar6,lVar15);
            *plVar6 = 0;
            (**(code **)(**(long **)(lVar15 + 0x18) + 0x18))();
          }
          plVar6 = plVar6 + 2;
          lVar12 = lVar12 + -2;
        } while (lVar12 != 0);
      }
    }
    else {
      puVar10 = *(ushort **)(*(long *)(piVar13 + 2) + 0x18);
      if (puVar10 == (ushort *)0x0) {
        puVar17 = (undefined4 *)0x0;
        puVar16 = (ushort *)0x0;
        local_68 = (ushort *)0x0;
      }
      else {
        puVar16 = puVar10 + 1;
        puVar17 = (undefined4 *)((long)puVar10 + ((ulong)((uint)*puVar10 * 2 + 5) & 0x3fffc));
        local_68 = puVar16 + *puVar10;
      }
      for (; puVar16 != local_68; puVar16 = puVar16 + 1) {
        uVar18 = *puVar17;
        uVar5 = *puVar16;
        puVar10 = *(ushort **)(lVar15 + 0x20);
        if (puVar10 == (ushort *)0x0) {
          local_58 = 0;
        }
        else {
          local_58 = (ulong)*puVar10;
          uVar11 = 0;
          plVar6 = (long *)((long)puVar10 + ((ulong)((uint)*puVar10 * 2 + 5) & 0x3fffc) + 8);
          do {
            if (puVar10[uVar11 + 1] == uVar5) {
              if (*plVar6 == 0) {
                *(undefined4 *)(plVar6 + -1) = uVar18;
              }
              else {
                FUN_02f0f0a8(DAT_0440a150,*plVar6,uVar5,0,4,0);
              }
              goto LAB_02f04228;
            }
            uVar11 = uVar11 + 1;
            plVar6 = plVar6 + 2;
          } while (uVar11 < local_58);
        }
        iVar8 = (int)local_58;
        uVar4 = iVar8 + 1;
        uVar3 = uVar4 * 2 + 5 & 0x7fffc;
        puVar7 = (undefined2 *)(*DAT_0442d138)(0,uVar3 + uVar4 * 0x10);
        if (puVar7 != (undefined2 *)0x0) {
          if (*(long *)(lVar15 + 0x20) != 0) {
            memcpy(puVar7 + 1,(void *)(*(long *)(lVar15 + 0x20) + 2),(ulong)(uint)(iVar8 * 2));
            memcpy((void *)((long)puVar7 + (ulong)uVar3),
                   (void *)(*(long *)(lVar15 + 0x20) + (ulong)(iVar8 * 2 + 5U & 0x3fffc)),
                   (ulong)(uint)(iVar8 << 4));
            FUN_02f59e60(0,*(undefined8 *)(lVar15 + 0x20));
          }
          puVar7[uVar4] = uVar5;
          *puVar7 = (short)uVar4;
          *(undefined2 **)(lVar15 + 0x20) = puVar7;
          puVar2 = (undefined4 *)((long)puVar7 + local_58 * 0x10 + (ulong)uVar3);
          *puVar2 = uVar18;
          *(undefined8 *)(puVar2 + 2) = 0;
        }
LAB_02f04228:
        puVar17 = puVar17 + 1;
      }
    }
    lVar15 = *(long *)(lVar15 + 0x10);
  } while( true );
}


