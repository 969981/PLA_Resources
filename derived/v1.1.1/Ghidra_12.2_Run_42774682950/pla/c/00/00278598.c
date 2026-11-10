/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00278598; name: FUN_00278598
 */


void FUN_00278598(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  ushort uVar3;
  int iVar4;
  undefined8 uVar5;
  long *plVar6;
  uint uVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  
  if ((0x20 < *(uint *)(param_2 + 4)) &&
     (lVar11 = param_2 + (ulong)*(uint *)(param_2 + 0x14), lVar11 != 0)) {
    *(ulong *)(param_1 + 0xe8) = (ulong)*(uint *)(param_2 + 4);
    uVar5 = FUN_0028d5d4(lVar11);
    *(undefined8 *)(param_1 + 0x98) = uVar5;
    if (*(long *)(param_1 + 0x18) == 0) {
      FUN_0028d610(uVar5,*(undefined8 *)(param_1 + 0x10));
      lVar11 = *(long *)(param_1 + 0x98);
      uVar3 = *(ushort *)(lVar11 + 0xdc);
      uVar7 = (uint)uVar3;
      *(uint *)(param_1 + 0x80) = uVar7;
    }
    else {
      FUN_0028d6ac();
      lVar11 = *(long *)(param_1 + 0x98);
      uVar3 = *(ushort *)(lVar11 + 0xdc);
      uVar7 = (uint)uVar3;
      *(uint *)(param_1 + 0x80) = uVar7;
    }
    if (uVar7 == 0) {
      *(undefined8 *)(param_1 + 0x88) = 0;
      *(undefined8 *)(param_1 + 0x90) = 0;
    }
    else {
      lVar10 = (ulong)uVar3 * 0x90 + 0x20;
      plVar6 = (long *)(**(code **)(**(long **)(param_1 + 0x458) + 0x10))
                                 (*(long **)(param_1 + 0x458),lVar10,0x80);
      *(long *)(param_1 + 0x460) = *(long *)(param_1 + 0x460) + lVar10;
      iVar4 = *(int *)(param_1 + 0x80);
      *(int *)(param_1 + 0x468) = *(int *)(param_1 + 0x468) + 1;
      *(long **)(param_1 + 0x88) = plVar6;
      if (iVar4 == 0) {
        *(long **)(param_1 + 0x90) = plVar6;
      }
      else {
        puVar1 = PTR_DAT_04372f20 + 0x10;
        plVar9 = plVar6;
        do {
          *plVar9 = (long)puVar1;
          *(undefined1 *)(plVar9 + 1) = 0;
          plVar9[6] = 0;
          plVar9[7] = 0;
          plVar9 = plVar9 + 0x12;
        } while (plVar9 != plVar6 + (long)iVar4 * 0x12);
        *(long **)(param_1 + 0x90) = plVar6;
        if (0 < *(int *)(param_1 + 0x80)) {
          lVar10 = *(long *)(param_1 + 0xb8);
          FUN_00279d88(plVar6,*(undefined8 *)(lVar11 + 0x28),lVar10);
          if (1 < *(int *)(param_1 + 0x80)) {
            uVar8 = (ulong)*(uint *)(lVar10 + 8);
            lVar10 = lVar10 + uVar8;
            lVar12 = 1;
            lVar13 = 0x90;
            lVar14 = 0x78;
            do {
              lVar2 = 0;
              if ((int)uVar8 != 0) {
                lVar2 = lVar10;
              }
              FUN_00279d88(*(long *)(param_1 + 0x90) + lVar13,*(long *)(lVar11 + 0x28) + lVar14,
                           lVar2);
              uVar8 = (ulong)*(uint *)(lVar2 + 8);
              lVar12 = lVar12 + 1;
              lVar13 = lVar13 + 0x90;
              lVar10 = lVar2 + uVar8;
              lVar14 = lVar14 + 0x78;
            } while (lVar12 < *(int *)(param_1 + 0x80));
          }
        }
      }
    }
  }
  return;
}


