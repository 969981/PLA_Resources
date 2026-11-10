/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f58010; name: FUN_02f58010
 */


void FUN_02f58010(int param_1)

{
  int *piVar1;
  int *piVar2;
  long *plVar3;
  uint uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  int iVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  long lVar15;
  
  FUN_02f58260();
  lVar12 = 0;
  lVar11 = (long)param_1;
  do {
    lVar5 = *(long *)(&DAT_0442c770 + lVar11 * 0x820 + lVar12 * 8);
    while (lVar5 != 0) {
      if (*(long *)(lVar5 + 0x8f8) != 0) {
        uVar7 = FUN_02f582b0(param_1,lVar5);
        FUN_02f582d0(param_1,uVar7);
      }
      lVar15 = 0;
      do {
        plVar3 = (long *)(lVar5 + lVar15 * 0x10);
        plVar6 = (long *)plVar3[1];
joined_r0x02f58100:
        while (plVar6 != (long *)0x0) {
          plVar13 = (long *)plVar6[9];
          if ((int)plVar6[1] == 0) goto LAB_02f58130;
          piVar1 = (int *)((long)plVar6 + 0xc);
          piVar2 = (int *)((long)plVar6 + 0x1c);
          plVar6 = plVar13;
          if (*piVar1 == *piVar2) goto LAB_02f5817c;
        }
        lVar15 = lVar15 + 1;
      } while (lVar15 != 0x7e);
      FUN_02f58540(lVar5);
      lVar15 = 0;
      do {
        lVar8 = *(long *)(lVar5 + lVar15 * 8 + 0x7e0);
        if ((lVar8 != 0) && (uVar4 = *(uint *)(lVar8 + 0x1c), uVar14 = (ulong)uVar4, uVar4 != 0)) {
          do {
            FUN_02f582d0(param_1);
            uVar14 = uVar14 - 1;
          } while (uVar14 != 0);
        }
        lVar15 = lVar15 + 1;
      } while (lVar15 != 0x20);
      lVar15 = ((0x928UL >> (*(ulong *)(&DAT_0442c128 + (long)param_1 * 0x820) & 0x3f)) + 1) *
               *(long *)(&DAT_0442c120 + (long)param_1 * 0x820);
      lVar8 = *(long *)(lVar5 + 0x900);
      FUN_02f585b0(param_1,lVar5,lVar15,*(undefined8 *)(lVar5 + 0x910),lVar15,
                   *(undefined8 *)(lVar5 + 0x918));
      lVar5 = lVar8;
    }
    lVar12 = lVar12 + 1;
    if (lVar12 == 0x2f) {
      lVar12 = 0;
      do {
        FUN_02f58650(param_1,lVar11 * 0x820 + 0x442c570 + lVar12);
        lVar12 = lVar12 + 0x10;
      } while (lVar12 != 0x200);
      *(undefined8 *)(&DAT_0442c8e8 + lVar11 * 0x820) = 0;
      FUN_02f59d80(*(undefined4 *)(&DAT_0442d120 + lVar11 * 4));
      *(undefined4 *)(&DAT_0442c0e0 + lVar11 * 0x820) = 0;
      return;
    }
  } while( true );
LAB_02f58130:
  plVar10 = (long *)*plVar3;
  uVar4 = *(uint *)(plVar6 + 3);
  if (*(uint *)(plVar6 + 2) <= *(uint *)(plVar6 + 3)) {
    uVar4 = *(uint *)(plVar6 + 2);
  }
  if (plVar10 == (long *)0x0) {
    iVar9 = 0;
    plVar10 = (long *)*plVar6;
  }
  else {
    iVar9 = 0;
    do {
      plVar10 = (long *)*plVar10;
      iVar9 = iVar9 + 1;
    } while (plVar10 != (long *)0x0);
    plVar10 = (long *)*plVar6;
  }
  for (; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
    iVar9 = iVar9 + 1;
  }
  piVar1 = (int *)((long)plVar6 + 0x1c);
  plVar6 = plVar13;
  if (uVar4 == *piVar1 + iVar9) {
LAB_02f5817c:
    FUN_02f58420(param_1,lVar5);
    plVar6 = plVar13;
  }
  goto joined_r0x02f58100;
}


