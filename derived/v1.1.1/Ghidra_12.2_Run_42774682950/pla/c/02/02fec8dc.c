/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fec8dc; name: FUN_02fec8dc
 */


undefined8 FUN_02fec8dc(long *param_1,long *param_2,uint param_3)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  long lVar15;
  long lVar16;
  
  lVar15 = *param_1;
  if ((int)param_3 < 9) {
    param_3 = 8;
  }
  lVar5 = param_1[1];
  uVar3 = *(uint *)((long)param_1 + 0xc);
  puVar6 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,(long)(int)(param_3 << 4),0);
  if (puVar6 == (undefined8 *)0x0) {
    uVar7 = 0x80040200;
  }
  else {
    uVar9 = param_3 - 1;
    lVar8 = 0;
    *param_1 = (long)puVar6;
    *puVar6 = 0xffffffffffffffff;
    lVar16 = (((ulong)uVar9 & 1) - (ulong)param_3) + 1;
    do {
      *(undefined8 *)(*param_1 + lVar8 + 0x10) = 0xffffffffffffffff;
      lVar12 = *param_1 + lVar8;
      lVar8 = lVar8 + 0x20;
      lVar16 = lVar16 + 2;
      *(undefined8 *)(lVar12 + 0x20) = 0xffffffffffffffff;
    } while (lVar16 != 0);
    if ((uVar9 & 1) != 0) {
      *(undefined8 *)(*param_1 + lVar8 + 0x10) = 0xffffffffffffffff;
    }
    *(undefined4 *)(param_1 + 1) = 0;
    *(uint *)((long)param_1 + 0xc) = uVar9;
    if (-1 < (int)uVar3) {
      lVar16 = 0;
      do {
        plVar2 = (long *)(lVar15 + lVar16 * 0x10);
        lVar8 = *plVar2;
        if (lVar8 != -1) {
          uVar9 = *(uint *)((long)param_1 + 0xc);
          if ((int)uVar9 < (int)param_1[1] * 2) {
            FUN_02fec8dc(param_1,param_2,uVar9 * 2 + 2);
            uVar9 = *(uint *)((long)param_1 + 0xc);
            lVar8 = *plVar2;
          }
          uVar10 = (int)lVar8 * -0x61c8864f;
          uVar10 = (uVar10 & 0xff00ff00) >> 8 | (uVar10 & 0xff00ff) << 8;
          uVar4 = uVar10 >> 0x10 | uVar10 << 0x10;
          uVar10 = (int)((ulong)lVar8 >> 0x20) * -0x61c8864f;
          uVar10 = (uVar10 & 0xff00ff00) >> 8 | (uVar10 & 0xff00ff) << 8;
          uVar10 = uVar10 >> 0x10 | uVar10 << 0x10;
          lVar12 = *param_1;
          uVar10 = (uVar4 + (uVar4 >> 2) + uVar10 * 0x40 + 0x9e3779b9 ^ uVar10) & uVar9;
          uVar11 = (ulong)uVar10;
          lVar13 = *(long *)(lVar12 + uVar11 * 0x10);
          if (lVar13 == -1) {
            iVar14 = 1;
          }
          else {
            do {
              uVar10 = (uint)uVar11;
              if (lVar13 == lVar8) {
                iVar14 = 0;
                break;
              }
              uVar10 = uVar10 + 1 & uVar9;
              uVar11 = (ulong)uVar10;
              lVar13 = *(long *)(lVar12 + uVar11 * 0x10);
              iVar14 = 1;
            } while (lVar13 != -1);
          }
          *(int *)(param_1 + 1) = (int)param_1[1] + iVar14;
          plVar1 = (long *)(lVar12 + (long)(int)uVar10 * 0x10);
          lVar8 = plVar2[1];
          *plVar1 = *plVar2;
          plVar1[1] = lVar8;
        }
        lVar16 = lVar16 + 1;
      } while (lVar16 != (ulong)uVar3 + 1);
    }
    if (-1 < (int)lVar5) {
      (**(code **)(*param_2 + 0x18))(param_2,lVar15,(long)(int)(uVar3 * 0x10 + 0x10));
    }
    uVar7 = 0;
  }
  return uVar7;
}


