/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010b40e8; name: FUN_010b40e8
 */


void FUN_010b40e8(long param_1,long param_2,short param_3,int param_4)

{
  uint uVar1;
  long *plVar2;
  ushort uVar3;
  char cVar4;
  short sVar5;
  long lVar6;
  ushort *puVar7;
  bool bVar8;
  long *plVar9;
  int iVar10;
  undefined2 *puVar11;
  ulong uVar12;
  uint uVar13;
  ushort *puVar14;
  ushort *puVar15;
  ushort *puVar16;
  uint uVar17;
  long lVar18;
  ushort *puVar19;
  uint uVar20;
  
  plVar9 = *(long **)(param_1 + 0x58);
  if (plVar9 != (long *)0x0) {
    plVar2 = plVar9 + 10;
    do {
      cVar4 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar8) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  if (param_4 == 10) {
    param_4 = FUN_010c4560();
    cVar4 = *(char *)((long)plVar9 + 0x7c);
  }
  else {
    cVar4 = *(char *)((long)plVar9 + 0x7c);
  }
  if (cVar4 == '\0') goto LAB_010b4300;
  *(undefined2 *)plVar9[0xb] = 0;
  *(undefined2 *)((long)plVar9 + 0x7a) = 0;
  if (*(char *)((long)plVar9 + 0x7c) == '\0') goto LAB_010b4300;
  if (*(ushort *)(plVar9 + 0xf) < 2) {
    if (((short)(param_3 + 0x11) == 0) && (*(ushort *)(plVar9 + 0xf) == 1)) {
      *(undefined2 *)((long)plVar9 + 0x7a) = 1;
      puVar11 = (undefined2 *)plVar9[0xb];
      goto LAB_010b4160;
    }
  }
  else {
    *(undefined2 *)((long)plVar9 + 0x7a) = 1;
    *(short *)plVar9[0xb] = param_3 + 0x11;
    puVar11 = (undefined2 *)(plVar9[0xb] + (ulong)*(ushort *)((long)plVar9 + 0x7a) * 2);
LAB_010b4160:
    *puVar11 = 0;
  }
  if (*(char *)((long)plVar9 + 0x7c) != '\0') {
    uVar13 = (uint)*(ushort *)(plVar9 + 0xf) - (uint)*(ushort *)((long)plVar9 + 0x7a);
    if (uVar13 == 0) {
      iVar10 = 0;
    }
    else {
      puVar14 = (ushort *)(plVar9[0xb] + (ulong)*(ushort *)((long)plVar9 + 0x7a) * 2);
      puVar15 = *(ushort **)(param_2 + 0x58);
      iVar10 = 0;
      do {
        while( true ) {
          uVar3 = *puVar15;
          *puVar14 = uVar3;
          if (uVar3 == 0x10) break;
          if (uVar3 == 0) goto LAB_010b42b4;
          puVar14 = puVar14 + 1;
          puVar15 = puVar15 + 1;
          iVar10 = iVar10 + 1;
          uVar13 = uVar13 - 1;
          if (uVar13 == 0) goto LAB_010b4344;
        }
        uVar3 = puVar15[1];
        uVar1 = uVar3 + 2;
        bVar8 = uVar13 < uVar1;
        uVar13 = uVar13 - uVar1;
        if (bVar8 || uVar13 == 0) {
          *puVar14 = 0;
          goto LAB_010b42b4;
        }
        uVar17 = uVar3 + 1;
        uVar20 = uVar17 & 7;
        puVar19 = puVar14 + 1;
        *puVar19 = uVar3;
        puVar7 = puVar15 + 1;
        puVar16 = puVar15;
        if (uVar20 != 0) {
          lVar6 = 0;
          do {
            lVar18 = lVar6;
            uVar17 = uVar17 - 1;
            uVar20 = uVar20 - 1;
            *(undefined2 *)((long)puVar14 + lVar18 + 4) =
                 *(undefined2 *)((long)puVar15 + lVar18 + 4);
            lVar6 = lVar18 + 2;
          } while (uVar20 != 0);
          puVar19 = (ushort *)((long)puVar14 + lVar18 + 4);
          puVar16 = (ushort *)((long)puVar15 + lVar18 + 2);
          puVar7 = puVar16 + 1;
          puVar14 = puVar19;
        }
        puVar15 = puVar7;
        if (6 < uVar3) {
          puVar14 = puVar19;
          do {
            puVar14[1] = puVar16[2];
            puVar14[2] = puVar15[2];
            puVar14[3] = puVar15[3];
            puVar14[4] = puVar15[4];
            puVar14[5] = puVar15[5];
            puVar14[6] = puVar15[6];
            puVar16 = puVar15 + 7;
            puVar14[7] = *puVar16;
            puVar15 = puVar15 + 8;
            uVar17 = uVar17 - 8;
            puVar14 = puVar14 + 8;
            *puVar14 = *puVar15;
          } while (uVar17 != 0);
        }
        iVar10 = uVar1 + iVar10;
      } while (uVar13 != 0);
LAB_010b4344:
      if (iVar10 != 0) {
        iVar10 = iVar10 + -1;
        puVar14[-1] = 0;
      }
    }
LAB_010b42b4:
    uVar13 = (uint)*(ushort *)((long)plVar9 + 0x7a) + iVar10;
    sVar5 = (short)uVar13;
    *(short *)((long)plVar9 + 0x7a) = sVar5;
    if (*(char *)((long)plVar9 + 0x7c) != '\0') {
      uVar1 = (uVar13 & 0xffff) + 1;
      if (uVar1 < *(ushort *)(plVar9 + 0xf)) {
        *(short *)((long)plVar9 + 0x7a) = sVar5 + 1;
        *(short *)(plVar9[0xb] + ((ulong)uVar13 & 0xffff) * 2) = (short)(param_4 + 0x11U);
        uVar12 = (ulong)*(ushort *)((long)plVar9 + 0x7a);
      }
      else {
        if (((param_4 + 0x11U & 0xffff) != 0) || (uVar1 != *(ushort *)(plVar9 + 0xf)))
        goto LAB_010b4300;
        uVar12 = (ulong)uVar13 & 0xffff;
        *(short *)((long)plVar9 + 0x7a) = sVar5 + 1;
      }
      *(undefined2 *)(plVar9[0xb] + uVar12 * 2) = 0;
    }
  }
LAB_010b4300:
  plVar2 = plVar9 + 10;
  do {
    iVar10 = (int)*plVar2 + -1;
    cVar4 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar8) {
      *(int *)plVar2 = iVar10;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar10 == 0) {
                    /* WARNING: Could not recover jumptable at 0x010b436c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar9 + 0x10))();
    return;
  }
  return;
}


