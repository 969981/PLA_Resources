/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032f6514; name: FUN_032f6514
 */


void FUN_032f6514(long *param_1,long *param_2,uint param_3)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  
  lVar14 = *param_1;
  if ((int)param_3 < 9) {
    param_3 = 8;
  }
  lVar5 = param_1[1];
  uVar3 = *(uint *)((long)param_1 + 0xc);
  puVar6 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,(long)(int)(param_3 << 4),0);
  if (puVar6 != (undefined8 *)0x0) {
    uVar8 = param_3 - 1;
    lVar7 = 0;
    *param_1 = (long)puVar6;
    *puVar6 = 0xffffffffffffffff;
    lVar15 = (((ulong)uVar8 & 1) - (ulong)param_3) + 1;
    do {
      *(undefined8 *)(*param_1 + lVar7 + 0x10) = 0xffffffffffffffff;
      lVar11 = *param_1 + lVar7;
      lVar7 = lVar7 + 0x20;
      lVar15 = lVar15 + 2;
      *(undefined8 *)(lVar11 + 0x20) = 0xffffffffffffffff;
    } while (lVar15 != 0);
    if ((uVar8 & 1) != 0) {
      *(undefined8 *)(*param_1 + lVar7 + 0x10) = 0xffffffffffffffff;
    }
    *(undefined4 *)(param_1 + 1) = 0;
    *(uint *)((long)param_1 + 0xc) = uVar8;
    if (-1 < (int)uVar3) {
      lVar15 = 0;
      do {
        plVar2 = (long *)(lVar14 + lVar15 * 0x10);
        lVar7 = *plVar2;
        if (lVar7 != -1) {
          uVar8 = *(uint *)((long)param_1 + 0xc);
          if ((int)uVar8 < (int)param_1[1] * 2) {
            FUN_032f6514(param_1,param_2,uVar8 * 2 + 2);
            uVar8 = *(uint *)((long)param_1 + 0xc);
            lVar7 = *plVar2;
          }
          uVar9 = (int)lVar7 * -0x61c8864f;
          uVar9 = (uVar9 & 0xff00ff00) >> 8 | (uVar9 & 0xff00ff) << 8;
          uVar4 = uVar9 >> 0x10 | uVar9 << 0x10;
          uVar9 = (int)((ulong)lVar7 >> 0x20) * -0x61c8864f;
          uVar9 = (uVar9 & 0xff00ff00) >> 8 | (uVar9 & 0xff00ff) << 8;
          uVar9 = uVar9 >> 0x10 | uVar9 << 0x10;
          lVar11 = *param_1;
          uVar9 = (uVar4 + (uVar4 >> 2) + uVar9 * 0x40 + 0x9e3779b9 ^ uVar9) & uVar8;
          uVar10 = (ulong)uVar9;
          lVar12 = *(long *)(lVar11 + uVar10 * 0x10);
          if (lVar12 == -1) {
            iVar13 = 1;
          }
          else {
            do {
              uVar9 = (uint)uVar10;
              if (lVar12 == lVar7) {
                iVar13 = 0;
                break;
              }
              uVar9 = uVar9 + 1 & uVar8;
              uVar10 = (ulong)uVar9;
              lVar12 = *(long *)(lVar11 + uVar10 * 0x10);
              iVar13 = 1;
            } while (lVar12 != -1);
          }
          *(int *)(param_1 + 1) = (int)param_1[1] + iVar13;
          plVar1 = (long *)(lVar11 + (long)(int)uVar9 * 0x10);
          lVar7 = plVar2[1];
          *plVar1 = *plVar2;
          plVar1[1] = lVar7;
        }
        lVar15 = lVar15 + 1;
      } while (lVar15 != (ulong)uVar3 + 1);
    }
    if (-1 < (int)lVar5) {
                    /* WARNING: Could not recover jumptable at 0x032f66e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 0x18))(param_2,lVar14,(long)(int)(uVar3 * 0x10 + 0x10));
      return;
    }
  }
  return;
}


