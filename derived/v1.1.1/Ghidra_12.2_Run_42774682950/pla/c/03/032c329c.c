/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032c329c; name: FUN_032c329c
 */


/* WARNING: Removing unreachable block (ram,0x032c331c) */

undefined8 FUN_032c329c(long *param_1,uint param_2)

{
  ulong *puVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  
  puVar5 = PTR_PTR_0434a080;
  lVar11 = *param_1;
  lVar4 = param_1[1];
  uVar3 = *(uint *)((long)param_1 + 0xc);
  puVar6 = (undefined8 *)
           (**(code **)(*(long *)PTR_PTR_0434a080 + 0x10))
                     (PTR_PTR_0434a080,(long)(int)(param_2 << 4),0);
  if (puVar6 == (undefined8 *)0x0) {
    return 0x80040200;
  }
  uVar8 = param_2 - 1;
  *param_1 = (long)puVar6;
  if ((0 < (int)param_2) && (*puVar6 = 0xffffffffffffffff, uVar8 != 0)) {
    if (param_2 == 2) {
      lVar9 = 1;
    }
    else {
      lVar10 = 0;
      lVar9 = 1;
      do {
        *(undefined8 *)(*param_1 + lVar10 + 0x10) = 0xffffffffffffffff;
        lVar9 = lVar9 + 2;
        lVar2 = *param_1 + lVar10;
        lVar10 = lVar10 + 0x20;
        *(undefined8 *)(lVar2 + 0x20) = 0xffffffffffffffff;
      } while ((ulong)param_2 - ((ulong)uVar8 & 1) != lVar9);
      if ((uVar8 & 1) == 0) goto LAB_032c3368;
    }
    *(undefined8 *)(*param_1 + lVar9 * 0x10) = 0xffffffffffffffff;
  }
LAB_032c3368:
  *(undefined4 *)(param_1 + 1) = 0;
  *(uint *)((long)param_1 + 0xc) = uVar8;
  if (-1 < (int)uVar3) {
    lVar9 = 0;
    do {
      uVar12 = *(ulong *)(lVar11 + lVar9 * 0x10);
      if (uVar12 != 0xffffffffffffffff) {
        uVar13 = *(undefined8 *)(lVar11 + lVar9 * 0x10 + 8);
        uVar8 = *(uint *)((long)param_1 + 0xc);
        if ((int)uVar8 < (int)param_1[1] * 2) {
          FUN_032c329c(param_1,uVar8 * 2 + 2);
          uVar8 = *(uint *)((long)param_1 + 0xc);
        }
        uVar7 = (int)(uVar12 >> 4) * -0x61c8864f;
        while( true ) {
          uVar7 = uVar7 & uVar8;
          puVar1 = (ulong *)(*param_1 + (ulong)uVar7 * 0x10);
          if (*puVar1 == 0xffffffffffffffff) break;
          uVar7 = uVar7 + 1;
        }
        *(int *)(param_1 + 1) = (int)param_1[1] + 1;
        *puVar1 = uVar12;
        *(undefined8 *)(*param_1 + (ulong)uVar7 * 0x10 + 8) = uVar13;
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 != (ulong)uVar3 + 1);
  }
  if (-1 < (int)lVar4) {
    (**(code **)(*(long *)puVar5 + 0x18))(puVar5,lVar11,(long)(int)(uVar3 * 0x10 + 0x10));
  }
  return 0;
}


