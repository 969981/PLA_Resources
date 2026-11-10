/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032e8290; name: FUN_032e8290
 */


/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_032e8290(long param_1,undefined4 param_2,ulong *param_3)

{
  byte bVar1;
  undefined4 uVar2;
  ulong *puVar3;
  int *piVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long *plVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  int local_48 [2];
  
  uVar10 = *(ulong *)(param_1 + 0x20) & *param_3;
  uVar9 = (uint)uVar10;
  if (((((uVar9 >> 0xe & 1) != 0) &&
       (plVar7 = (long *)FUN_032e2008(param_3,0x4000), plVar7 != (long *)0x0)) &&
      (puVar3 = (ulong *)*plVar7, puVar3 != (ulong *)0x0)) && (0 < (int)*puVar3)) {
    uVar8 = *puVar3 & 0xffffffff;
    do {
      uVar6 = FUN_032e8158(param_2,puVar3[1]);
      local_48[0] = (int)puVar3[2];
      param_2 = FUN_032c8610(uVar6,local_48,4);
      uVar8 = uVar8 - 1;
      puVar3 = puVar3 + 2;
    } while (uVar8 != 0);
  }
  if ((uVar10 & 1) != 0) {
    if (((*param_3 & 1) == 0) || (puVar3 = (ulong *)FUN_032e2008(param_3,1), puVar3 == (ulong *)0x0)
       ) {
      uVar10 = 0;
    }
    else {
      uVar10 = *puVar3;
    }
    local_48[0] = (int)uVar10;
    param_2 = FUN_032c8610(param_2,local_48,4);
    if ((uVar10 & 0x6f) == 0x28) {
      if ((((byte)*param_3 >> 1 & 1) == 0) ||
         (puVar5 = (undefined8 *)FUN_032e2008(param_3,2), puVar5 == (undefined8 *)0x0)) {
        uVar6 = 0;
      }
      else {
        uVar6 = *puVar5;
      }
      local_48[0] = FUN_032e8598(param_1,uVar6);
      param_2 = FUN_032c8610(param_2,local_48,4);
    }
  }
  if ((uVar9 >> 3 & 1) != 0) {
    param_2 = FUN_032e8158(param_2,param_3);
  }
  if ((uVar9 >> 0xf & 1) != 0) {
    param_2 = FUN_032e81e4(param_2,param_3);
  }
  if ((uVar9 >> 4 & 1) != 0) {
    if ((((byte)*param_3 >> 4 & 1) == 0) ||
       (piVar4 = (int *)FUN_032e2008(param_3,0x10), piVar4 == (int *)0x0)) {
      local_48[0] = 0;
    }
    else {
      local_48[0] = *piVar4;
    }
    param_2 = FUN_032c8610(param_2,local_48,4);
  }
  if ((uVar9 >> 0x14 & 1) == 0) {
    bVar1 = *(byte *)((long)param_3 + 2);
  }
  else {
    if (((*(byte *)((long)param_3 + 2) >> 4 & 1) == 0) ||
       (piVar4 = (int *)FUN_032e2008(param_3,0x100000), piVar4 == (int *)0x0)) {
      local_48[0] = 0;
    }
    else {
      local_48[0] = *piVar4;
    }
    param_2 = FUN_032c8610(param_2,local_48,4);
    bVar1 = *(byte *)((long)param_3 + 2);
  }
  if ((((bVar1 >> 5 & 1) != 0) &&
      (piVar4 = (int *)FUN_032e2008(param_3,0x200000), piVar4 != (int *)0x0)) && (*piVar4 != 0)) {
    local_48[0] = *piVar4;
    param_2 = FUN_032c8610(param_2,local_48,4);
  }
  if ((((char)*(byte *)((long)param_3 + 2) < '\0') &&
      (puVar5 = (undefined8 *)FUN_032e2008(param_3,0x800000), puVar5 != (undefined8 *)0x0)) &&
     ((plVar7 = (long *)*puVar5, plVar7 != (long *)0x0 && ((long)(short)*plVar7 != 0)))) {
    lVar11 = (long)(short)*plVar7 << 3;
    do {
      plVar7 = plVar7 + 1;
      uVar6 = FUN_032e2c18(plVar7);
      uVar2 = FUN_032e81b0(param_2,uVar6);
      local_48[0] = FUN_032e3f38(plVar7);
      uVar2 = FUN_032c8610(uVar2,local_48,4);
      local_48[0] = FUN_032e8598(param_1,*(undefined8 *)(*plVar7 + 8));
      param_2 = FUN_032c8610(uVar2,local_48,4);
      lVar11 = lVar11 + -8;
    } while (lVar11 != 0);
  }
  if ((uVar9 >> 0x19 & 1) != 0) {
    if (((*(byte *)((long)param_3 + 3) >> 1 & 1) == 0) ||
       (puVar5 = (undefined8 *)FUN_032e2008(param_3,0x2000000), puVar5 == (undefined8 *)0x0)) {
      uVar6 = 0;
    }
    else {
      uVar6 = *puVar5;
    }
    param_2 = FUN_032e81b0(param_2,uVar6);
  }
  return param_2;
}


