/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031e94b4; name: FUN_031e94b4
 */


void FUN_031e94b4(long *param_1,int param_2,long *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  int *piVar16;
  long lVar17;
  int *piVar18;
  int *local_70;
  undefined8 local_68;
  
  lVar17 = *param_1;
  local_70 = (int *)0x0;
  local_68 = -0x8000000000000000;
  FUN_001d58f0(param_1 + 8,lVar17 + (long)param_2 * 0x50,&local_70);
  lVar14 = tpidr_el0;
  if ((int)local_68 != 0) {
    piVar1 = local_70 + (int)local_68;
    piVar18 = local_70;
    do {
      uVar8 = *(uint *)(param_1 + 0xd);
      if (0 < (int)uVar8) {
        lVar12 = param_1[0xc];
        lVar15 = 0;
        lVar10 = 0;
        piVar16 = (int *)(lVar12 + 4);
        do {
          if ((piVar16[-1] == param_2) && (*piVar16 == *piVar18)) {
            if ((int)lVar15 != 1) {
              *(uint *)(param_1 + 0xd) = uVar8 - 1;
              if (uVar8 + (int)lVar15 != 1) {
                *(undefined8 *)(lVar12 + (lVar10 >> 0x1d)) =
                     *(undefined8 *)(lVar12 + (long)(int)(uVar8 - 1) * 8);
              }
              FUN_031ed430(*param_3,-lVar15 & 0xffffffff);
              FUN_031ed6b8(*param_3,-lVar15 & 0xffffffff);
            }
            break;
          }
          lVar15 = lVar15 + -1;
          lVar10 = lVar10 + 0x100000000;
          piVar16 = piVar16 + 2;
        } while ((ulong)uVar8 + lVar15 != 0);
      }
      lVar12 = (long)DAT_0444b53c;
      lVar10 = *(long *)(lVar14 + 0x38d490);
      if (lVar10 == 0) {
        lVar10 = FUN_0333d16c(0,1);
        *(long *)(lVar14 + 0x38d490) = lVar10;
      }
      if (*(long *)(lVar10 + lVar12 * 8 + 0x18) != 0) {
        FUN_0332a954();
      }
      piVar18 = piVar18 + 1;
    } while (piVar18 != piVar1);
  }
  lVar10 = local_68;
  uVar8 = local_68._4_4_;
  lVar12 = (long)param_2;
  local_68 = (ulong)local_68._4_4_ << 0x20;
  if ((-1 < lVar10) && (local_70 != (int *)0x0)) {
    (**(code **)(*(long *)PTR_PTR_0434a090 + 0x18))(PTR_PTR_0434a090,local_70,uVar8 << 2);
  }
  FUN_001d530c(param_1 + 4,*(undefined4 *)(lVar17 + lVar12 * 0x50 + 0x44));
  lVar17 = (long)(int)param_1[1] + -1;
  iVar9 = (int)lVar17;
  *(int *)(param_1 + 1) = iVar9;
  if (iVar9 != param_2) {
    puVar11 = (undefined8 *)(*param_1 + lVar17 * 0x50);
    puVar13 = (undefined8 *)(*param_1 + lVar12 * 0x50);
    uVar4 = puVar11[1];
    *puVar13 = *puVar11;
    uVar3 = puVar11[2];
    uVar5 = puVar11[3];
    uVar6 = puVar11[5];
    puVar13[4] = puVar11[4];
    puVar13[5] = uVar6;
    puVar13[2] = uVar3;
    puVar13[3] = uVar5;
    uVar3 = puVar11[6];
    uVar6 = puVar11[7];
    uVar5 = puVar11[8];
    uVar7 = puVar11[9];
    puVar13[1] = uVar4;
    puVar13[8] = uVar5;
    puVar13[9] = uVar7;
    puVar13[6] = uVar3;
    puVar13[7] = uVar6;
  }
  lVar10 = (long)DAT_0444b53c;
  lVar17 = *(long *)(lVar14 + 0x38d490);
  if (lVar17 == 0) {
    lVar17 = FUN_0333d16c(0,1);
    *(long *)(lVar14 + 0x38d490) = lVar17;
  }
  if (*(long *)(lVar17 + lVar10 * 8 + 0x18) != 0) {
    FUN_0332a954();
  }
  if ((int)param_1[1] != param_2) {
    FUN_001d4ecc(param_1 + 4,*(undefined4 *)(*param_1 + lVar12 * 0x50 + 0x44),param_2);
    iVar9 = (int)param_1[0xd];
    if (0 < iVar9) {
      lVar10 = 0;
      lVar17 = 0;
      lVar14 = 0;
      do {
        if (*(int *)(param_1[0xc] + lVar10) == (int)param_1[1]) {
          *(int *)(param_1[0xc] + lVar10) = param_2;
          lVar12 = *param_3;
          uVar2 = ((undefined4 *)(param_1[0xc] + lVar10))[1];
          *(undefined4 *)(*(long *)(lVar12 + 0xb0) + lVar17) =
               *(undefined4 *)(param_1[0xc] + lVar10);
          *(undefined4 *)(*(long *)(lVar12 + 0xb0) + lVar17 + 4) = uVar2;
          iVar9 = (int)param_1[0xd];
        }
        lVar14 = lVar14 + 1;
        lVar17 = lVar17 + 0x60;
        lVar10 = lVar10 + 8;
      } while (lVar14 < iVar9);
    }
  }
  return;
}


