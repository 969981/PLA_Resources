/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f58d10; name: FUN_02f58d10
 */


undefined8 * FUN_02f58d10(int param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  int *piVar4;
  ulong uVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 local_70;
  undefined8 local_68;
  
  if (param_3 < 0x11) {
    puVar3 = (undefined8 *)FUN_02f58a70(param_1,param_2,param_4);
    return puVar3;
  }
  uVar5 = *(ulong *)(&DAT_0442c120 + (long)param_1 * 0x820);
  uVar9 = param_3 - 1;
  lVar11 = (long)param_1;
  if (param_3 < uVar5) {
    puVar3 = (undefined8 *)FUN_02f58a70(param_1,param_2,param_4 + param_3);
    if (puVar3 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    if ((uVar9 & (ulong)puVar3) != 0) {
      puVar3 = (undefined8 *)(((ulong)puVar3 & -param_3) + param_3);
    }
    *(uint *)((*(ulong *)(&DAT_0442c148 + lVar11 * 0x820) & (ulong)puVar3) + 0x2c) =
         *(uint *)((*(ulong *)(&DAT_0442c148 + lVar11 * 0x820) & (ulong)puVar3) + 0x2c) | 4;
    return puVar3;
  }
  if ((param_3 & uVar9) == 0) {
    uVar7 = *(ulong *)(&DAT_0442c138 + lVar11 * 0x820);
    if (param_3 < uVar7) {
      uVar10 = 0;
      if (uVar5 != 0) {
        uVar10 = param_4 / uVar5;
      }
      lVar8 = 1;
      if ((uVar5 - 1 & param_4) != 0) {
        lVar8 = 2;
      }
      uVar10 = uVar10 + lVar8;
      uVar2 = 0;
      if (uVar5 != 0) {
        uVar2 = param_3 / uVar5;
      }
      if (uVar10 < uVar2) {
        uVar10 = uVar2 + 1;
      }
      local_68 = 0;
      lVar8 = uVar10 * uVar5;
      uVar2 = 0;
      if (uVar5 != 0) {
        uVar2 = uVar7 / uVar5;
      }
      uVar5 = uVar10 << 1;
      if (uVar10 << 1 <= uVar2 << 1) {
        uVar5 = uVar2 << 1;
      }
      local_70 = 0;
      puVar3 = (undefined8 *)FUN_02f58f80(param_1,lVar8,&local_68,&local_70);
      if (puVar3 != (undefined8 *)0x0) {
        do {
          puVar1 = puVar3 + 0xc;
          if ((uVar9 & (ulong)puVar1) != 0) {
            puVar1 = (undefined8 *)(((ulong)puVar1 & -param_3) + param_3);
          }
          if (((ulong)((long)puVar1 - (long)puVar3) < *(ulong *)(&DAT_0442c138 + lVar11 * 0x820) &&
               (long)puVar1 + param_4 <= (ulong)((long)puVar3 + lVar8)) &&
             ((undefined8 *)(*(ulong *)(&DAT_0442c148 + lVar11 * 0x820) & (ulong)puVar1) == puVar3))
          {
            puVar3[9] = 0;
            puVar3[10] = 0;
            *puVar3 = 0;
            puVar3[7] = 0;
            puVar3[8] = 0;
            puVar3[5] = 0;
            puVar3[6] = 0;
            *(int *)(puVar3 + 6) = (int)uVar10;
            puVar3[3] = 0;
            puVar3[4] = 0;
            puVar3[1] = 0;
            puVar3[2] = 0xffffffff00000000;
            *(int *)((long)puVar3 + 0x3c) = (int)local_68;
            puVar3[0xb] = local_70;
            return puVar1;
          }
          FUN_02f585b0(param_1,puVar3,lVar8,local_68,lVar8,puVar3[0xb]);
          uVar10 = uVar10 + 1;
          if (uVar5 < uVar10) goto LAB_02f58f30;
          lVar8 = uVar10 * *(ulong *)(&DAT_0442c120 + (long)param_1 * 0x820);
          local_70 = 0;
          local_68 = 0;
          puVar3 = (undefined8 *)FUN_02f58f80(param_1,lVar8,&local_68,&local_70);
        } while (puVar3 != (undefined8 *)0x0);
      }
      piVar4 = __errno_location();
      iVar6 = 0xc;
      goto LAB_02f58f3c;
    }
  }
LAB_02f58f30:
  piVar4 = __errno_location();
  iVar6 = 0x16;
LAB_02f58f3c:
  *piVar4 = iVar6;
  return (undefined8 *)0x0;
}


