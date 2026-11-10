/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0150fed0; name: FUN_0150fed0
 */


/* WARNING: Removing unreachable block (ram,0x0150ff80) */

void FUN_0150fed0(long param_1,ulong param_2)

{
  uint *puVar1;
  ushort uVar2;
  long *plVar3;
  bool bVar4;
  int iVar5;
  int *piVar6;
  undefined1 *puVar7;
  ulong uVar8;
  uint *puVar9;
  undefined4 uVar10;
  uint uVar11;
  uint *puVar12;
  long lVar13;
  ulong uVar14;
  undefined1 *local_40;
  long *local_38;
  
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04379558), iVar5 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  *(undefined8 *)PTR_DAT_04379568 = *(undefined8 *)PTR_DAT_04379560;
  FUN_01148a98(&local_38);
  piVar6 = *(int **)(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0xc60) = 0;
  uVar2 = ((ushort *)((long)piVar6 - (long)*piVar6))[2];
  uVar8 = (ulong)uVar2;
  if (*(ushort *)((long)piVar6 - (long)*piVar6) < 5) {
    puVar9 = (uint *)0x0;
  }
  else if (uVar2 == 0) {
    uVar8 = 0;
    puVar9 = (uint *)0x0;
  }
  else {
    puVar9 = (uint *)((long)((long)piVar6 + uVar8) + (ulong)*(uint *)((long)piVar6 + uVar8));
  }
  puVar1 = (uint *)((long)((long)piVar6 + uVar8) + (ulong)*(uint *)((long)piVar6 + uVar8));
  if (puVar9 != puVar1 + *puVar1) {
    if ((param_2 & 1) == 0) {
      uVar11 = 0;
      puVar9 = puVar9 + 3;
      do {
        uVar8 = (ulong)puVar9[-2];
        lVar13 = uVar8 - (long)*(int *)((long)puVar9 + (uVar8 - 8));
        if ((*(ushort *)((long)puVar9 + lVar13 + -8) < 7) ||
           (uVar14 = (ulong)*(ushort *)((long)puVar9 + lVar13 + -2), uVar14 == 0)) {
          uVar10 = 0;
        }
        else {
          uVar10 = *(undefined4 *)((long)puVar9 + uVar8 + uVar14 + -8);
        }
        *(undefined4 *)(param_1 + (ulong)uVar11 * 0xc + 0x60) = uVar10;
        uVar8 = (ulong)puVar9[-2];
        lVar13 = uVar8 - (long)*(int *)((long)puVar9 + (uVar8 - 8));
        if ((*(ushort *)((long)puVar9 + lVar13 + -8) < 5) ||
           (uVar14 = (ulong)*(ushort *)((long)puVar9 + lVar13 + -4), uVar14 == 0)) {
          uVar10 = 0;
        }
        else {
          uVar10 = *(undefined4 *)((long)puVar9 + uVar8 + uVar14 + -8);
        }
        *(undefined4 *)(param_1 + (ulong)*(uint *)(param_1 + 0xc60) * 0xc + 100) = uVar10;
        uVar8 = (ulong)puVar9[-2];
        lVar13 = uVar8 - (long)*(int *)((long)puVar9 + (uVar8 - 8));
        if ((*(ushort *)((long)puVar9 + lVar13 + -8) < 9) ||
           (uVar14 = (ulong)*(ushort *)((long)puVar9 + lVar13), uVar14 == 0)) {
          uVar10 = 0;
        }
        else {
          uVar10 = *(undefined4 *)((long)puVar9 + uVar8 + uVar14 + -8);
        }
        *(undefined4 *)(param_1 + (ulong)*(uint *)(param_1 + 0xc60) * 0xc + 0x68) = uVar10;
        uVar11 = *(int *)(param_1 + 0xc60) + 1;
        *(uint *)(param_1 + 0xc60) = uVar11;
        puVar1 = (uint *)((long)piVar6 + (ulong)*(ushort *)((long)piVar6 + (4 - (long)*piVar6)));
        puVar1 = (uint *)((long)puVar1 + (ulong)*puVar1);
        puVar12 = puVar9 + -1;
        puVar9 = puVar9 + 1;
        if (puVar12 == puVar1 + (ulong)*puVar1 + 1) goto LAB_01510238;
        plVar3 = local_38;
      } while (uVar11 < 0x100);
      goto joined_r0x01510288;
    }
    puVar9 = puVar9 + 2;
    do {
      uVar8 = (ulong)puVar9[-1];
      lVar13 = uVar8 - (long)*(int *)((long)puVar9 + (uVar8 - 4));
      if ((*(ushort *)((long)puVar9 + lVar13 + -4) < 0xb) ||
         (uVar14 = (ulong)*(ushort *)((long)puVar9 + lVar13 + 6), uVar14 == 0)) {
        puVar7 = (undefined1 *)0x0;
LAB_01510148:
        local_40 = puVar7;
        uVar8 = FUN_010f4ccc(local_38,&local_40);
        if ((uVar8 & 1) != 0) goto LAB_0151015c;
      }
      else {
        puVar7 = *(undefined1 **)((long)puVar9 + uVar8 + uVar14 + -4);
        if (puVar7 != &DAT_cbf29ce484222645) goto LAB_01510148;
LAB_0151015c:
        plVar3 = local_38;
        if (0xff < *(uint *)(param_1 + 0xc60)) goto joined_r0x01510288;
        uVar8 = (ulong)puVar9[-1];
        lVar13 = uVar8 - (long)*(int *)((long)puVar9 + (uVar8 - 4));
        if ((*(ushort *)((long)puVar9 + lVar13 + -4) < 7) ||
           (uVar14 = (ulong)*(ushort *)((long)puVar9 + lVar13 + 2), uVar14 == 0)) {
          uVar10 = 0;
        }
        else {
          uVar10 = *(undefined4 *)((long)puVar9 + uVar8 + uVar14 + -4);
        }
        *(undefined4 *)(param_1 + (ulong)*(uint *)(param_1 + 0xc60) * 0xc + 0x60) = uVar10;
        uVar8 = (ulong)puVar9[-1];
        lVar13 = uVar8 - (long)*(int *)((long)puVar9 + (uVar8 - 4));
        if ((*(ushort *)((long)puVar9 + lVar13 + -4) < 5) ||
           (uVar14 = (ulong)*(ushort *)((long)puVar9 + lVar13), uVar14 == 0)) {
          uVar10 = 0;
        }
        else {
          uVar10 = *(undefined4 *)((long)puVar9 + uVar8 + uVar14 + -4);
        }
        *(undefined4 *)(param_1 + (ulong)*(uint *)(param_1 + 0xc60) * 0xc + 100) = uVar10;
        uVar8 = (ulong)puVar9[-1];
        lVar13 = uVar8 - (long)*(int *)((long)puVar9 + (uVar8 - 4));
        if ((*(ushort *)((long)puVar9 + lVar13 + -4) < 9) ||
           (uVar14 = (ulong)*(ushort *)((long)puVar9 + lVar13 + 4), uVar14 == 0)) {
          uVar10 = 0;
        }
        else {
          uVar10 = *(undefined4 *)((long)puVar9 + uVar8 + uVar14 + -4);
        }
        *(undefined4 *)(param_1 + (ulong)*(uint *)(param_1 + 0xc60) * 0xc + 0x68) = uVar10;
        *(int *)(param_1 + 0xc60) = *(int *)(param_1 + 0xc60) + 1;
      }
      piVar6 = *(int **)(param_1 + 0x58);
      puVar1 = (uint *)((long)piVar6 + (ulong)*(ushort *)((long)piVar6 + (4 - (long)*piVar6)));
      puVar1 = (uint *)((long)puVar1 + (ulong)*puVar1);
      bVar4 = puVar9 != puVar1 + (ulong)*puVar1 + 1;
      puVar9 = puVar9 + 1;
    } while (bVar4);
    uVar11 = *(uint *)(param_1 + 0xc60);
LAB_01510238:
    plVar3 = local_38;
    if (uVar11 != 0) goto joined_r0x01510288;
  }
  *(undefined8 *)(param_1 + 0x60) = 0x1000000ce;
  *(undefined4 *)(param_1 + 0x68) = 9999999;
  *(undefined4 *)(param_1 + 0xc60) = 1;
  plVar3 = local_38;
joined_r0x01510288:
  if ((plVar3 != (long *)0x0) && (uVar8 = FUN_02a43a5c(plVar3[0xb]), (uVar8 & 1) != 0)) {
    (**(code **)(*plVar3 + 0x20))(plVar3);
  }
  return;
}


