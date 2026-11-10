/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03058f68; name: FUN_03058f68
 */


void FUN_03058f68(long *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long lVar12;
  int iVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  
  lVar5 = tpidr_el0;
  if (*(long *)(lVar5 + 0x38d490) == 0) {
    lVar15 = FUN_0333d16c(0,1);
    *(long *)(lVar5 + 0x38d490) = lVar15;
    lVar15 = *(long *)(lVar15 + 0x10);
  }
  else {
    lVar15 = *(long *)(*(long *)(lVar5 + 0x38d490) + 0x10);
  }
  if (lVar15 != 0) {
    puVar11 = *(undefined8 **)(lVar15 + 8);
    uVar10 = (long)puVar11 + 0x17U & 0xfffffffffffffff8;
    if ((uVar10 <= *(ulong *)(lVar15 + 0x10)) &&
       (*(ulong *)(lVar15 + 8) = uVar10, puVar11 != (undefined8 *)0x0)) {
      *puVar11 = "TtDefragmentInactiveCaches";
      uVar6 = nn::os::GetSystemTick();
      puVar11[1] = uVar6;
    }
  }
  FUN_030593d0(param_1,param_2);
  if (lVar15 != 0) {
    puVar11 = *(undefined8 **)(lVar15 + 8);
    uVar10 = (long)puVar11 + 0x17U & 0xfffffffffffffff8;
    if ((uVar10 <= *(ulong *)(lVar15 + 0x10)) &&
       (*(ulong *)(lVar15 + 8) = uVar10, puVar11 != (undefined8 *)0x0)) {
      *puVar11 = &DAT_0390f40e;
      uVar6 = nn::os::GetSystemTick();
      puVar11[1] = uVar6;
    }
  }
  if (*(long *)(lVar5 + 0x38d490) == 0) {
    lVar15 = FUN_0333d16c(0,1);
    *(long *)(lVar5 + 0x38d490) = lVar15;
    lVar15 = *(long *)(lVar15 + 0x10);
  }
  else {
    lVar15 = *(long *)(*(long *)(lVar5 + 0x38d490) + 0x10);
  }
  if (lVar15 != 0) {
    puVar11 = *(undefined8 **)(lVar15 + 8);
    uVar10 = (long)puVar11 + 0x17U & 0xfffffffffffffff8;
    if ((uVar10 <= *(ulong *)(lVar15 + 0x10)) &&
       (*(ulong *)(lVar15 + 8) = uVar10, puVar11 != (undefined8 *)0x0)) {
      *puVar11 = "TtInactiveBodyMaintenence";
      uVar6 = nn::os::GetSystemTick();
      puVar11[1] = uVar6;
    }
  }
  lVar17 = *param_1;
  lVar18 = *(long *)(lVar17 + 0x80);
  lVar19 = param_1[0x62];
  lVar16 = param_1[99];
  uVar2 = *(uint *)(lVar16 + 4);
  if ((lVar19 != lVar16) || (uVar2 != 0)) {
    uVar8 = 0;
    do {
      uVar3 = *(uint *)(lVar19 + ((long)((ulong)uVar8 << 0x20) >> 0x1e) + 0x10);
      uVar10 = (ulong)uVar3 & 0xffffff;
      if (((uint)uVar10 != 0xffffff) && ((uint)uVar10 < *(uint *)(lVar17 + 0x40))) {
        lVar12 = *(long *)(lVar17 + 0x38);
        uVar4 = *(uint *)(lVar12 + uVar10 * 0xc0 + 0x54);
        if (((uVar4 & 3) != 0) &&
           ((*(uint *)(lVar12 + uVar10 * 0xc0 + 0x50) == uVar3 &&
            ((*(byte *)(lVar12 + uVar10 * 0xc0 + 0x88) & 1) != 0)))) {
          if ((uVar4 >> 3 & 1) == 0) {
            lVar12 = lVar12 + uVar10 * 0xc0;
            uVar6 = *(undefined8 *)(lVar12 + 0x68);
            puVar11 = (undefined8 *)(lVar18 + uVar10 * 0x18);
            uVar14 = *(undefined8 *)(lVar12 + 0x70);
            *puVar11 = *(undefined8 *)(lVar12 + 0x60);
            puVar11[1] = uVar6;
            puVar11[2] = uVar14;
            *(undefined2 *)(lVar12 + 0x58) = 0x28;
          }
          uVar9 = *(uint *)((long)param_1 + 0x32c);
          iVar13 = (int)param_1[0x65];
          uVar4 = iVar13 + 1;
          if (iVar13 < (int)(uVar9 & 0x3fffffff)) {
            lVar12 = param_1[100];
          }
          else {
            lVar12 = param_1[100];
            if (0x3ffffffe < iVar13) {
              FUN_032bd0a8(uVar4);
              uVar9 = *(uint *)((long)param_1 + 0x32c);
            }
            uVar9 = (uVar9 & 0x3fffffff) << 1;
            if (0x3ffffffe < uVar9) {
              uVar9 = 0x3fffffff;
            }
            uVar1 = uVar4;
            if ((int)uVar4 <= (int)uVar9) {
              uVar1 = uVar9;
            }
            lVar12 = FUN_032bd1d4(PTR_PTR_0434a080,uVar1,4,lVar12,iVar13,
                                  (uint *)((long)param_1 + 0x32c));
            iVar13 = (int)param_1[0x65];
            param_1[100] = lVar12;
          }
          *(uint *)(lVar12 + (long)iVar13 * 4) = uVar3;
          *(uint *)(param_1 + 0x65) = uVar4;
        }
      }
      uVar3 = uVar8 + 1;
      if (((0xfe < (int)uVar8) || (uVar8 = uVar3, *(int *)(lVar19 + 4) <= (int)uVar3)) &&
         (uVar8 = uVar3, *(long *)(lVar19 + 8) != 0)) {
        uVar8 = 0;
        lVar19 = *(long *)(lVar19 + 8);
      }
    } while ((lVar19 != lVar16) || (uVar2 != uVar8));
    lVar16 = param_1[0x62];
  }
  lVar19 = *(long *)(lVar16 + 8);
  *(undefined8 *)(lVar16 + 8) = 0;
  lVar16 = param_1[0x62];
  iVar13 = *(int *)(lVar16 + 4);
  if (0 < iVar13) {
    if (0xff < iVar13) {
      iVar13 = 0x100;
    }
    lVar17 = 0;
    do {
      lVar18 = lVar17 * 4;
      lVar17 = lVar17 + 1;
      *(undefined4 *)(lVar16 + lVar18 + 0x10) = 0xffffff;
      lVar16 = param_1[0x62];
    } while (lVar17 < iVar13);
  }
  *(undefined4 *)(lVar16 + 4) = 0;
  param_1[99] = param_1[0x62];
  while (lVar19 != 0) {
    lVar17 = *(long *)(lVar19 + 8);
    lVar16 = *(long *)(lVar5 + 0x38d490);
    if (lVar16 == 0) {
      lVar16 = FUN_0333d16c(0,1);
      *(long *)(lVar5 + 0x38d490) = lVar16;
    }
    plVar7 = *(long **)(*(long *)(lVar16 + 8) + 0x58);
    (**(code **)(*plVar7 + 0x18))(plVar7,lVar19,0x410);
    lVar19 = lVar17;
  }
  if (lVar15 != 0) {
    puVar11 = *(undefined8 **)(lVar15 + 8);
    uVar10 = (long)puVar11 + 0x17U & 0xfffffffffffffff8;
    if ((uVar10 <= *(ulong *)(lVar15 + 0x10)) &&
       (*(ulong *)(lVar15 + 8) = uVar10, puVar11 != (undefined8 *)0x0)) {
      *puVar11 = &DAT_0390f40e;
      uVar6 = nn::os::GetSystemTick();
      puVar11[1] = uVar6;
    }
  }
  FUN_032bf22c(param_1 + 2,*(undefined8 *)(param_2 + 0x4e0));
  return;
}


