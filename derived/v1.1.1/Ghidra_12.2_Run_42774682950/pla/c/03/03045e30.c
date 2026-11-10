/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03045e30; name: FUN_03045e30
 */


void FUN_03045e30(long param_1,uint param_2)

{
  uint uVar1;
  ushort *puVar2;
  long *plVar3;
  long lVar4;
  ushort uVar5;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  uint *puVar11;
  undefined8 uVar12;
  ulong *puVar13;
  long *plVar14;
  
  param_2 = param_2 & 0xffffff;
  if (param_2 < *(uint *)(param_1 + 0x58)) {
    uVar6 = *(ushort *)(*(long *)(param_1 + 0x50) + (ulong)param_2 * 2);
    if (uVar6 != 0xffff) {
      *(undefined2 *)(*(long *)(param_1 + 0x50) + (ulong)param_2 * 2) = 0xffff;
      uVar5 = uVar6;
      if (*(char *)(param_1 + 0x62) == '\0') {
        do {
          lVar10 = *(long *)(param_1 + 0x40);
          puVar13 = (ulong *)(lVar10 + (ulong)uVar5 * 0x10 + 8);
          plVar14 = (long *)(*puVar13 & 0xfffffffffffffffc);
          if (plVar14 != (long *)0x0) {
            if ((*puVar13 & 3) == 0) {
              *puVar13 = (ulong)plVar14 | 1;
              do {
                lVar4 = *plVar14;
                plVar14 = (long *)(plVar14[1] & 0xfffffffffffffffc);
                (**(code **)(lVar4 + 8))();
              } while (plVar14 != (long *)0x0);
              *puVar13 = 0;
            }
            else {
              do {
                plVar3 = (long *)(plVar14[1] & 0xfffffffffffffffc);
                plVar14[1] = (ulong)plVar3 | 1;
                plVar14 = plVar3;
              } while (plVar3 != (long *)0x0);
            }
          }
          puVar2 = (ushort *)(lVar10 + (ulong)uVar5 * 0x10);
          uVar5 = *puVar2;
        } while (uVar5 != 0xffff);
        *puVar2 = *(ushort *)(param_1 + 0x38);
        *(ushort *)(param_1 + 0x38) = uVar6;
      }
      else {
        puVar11 = (uint *)(param_1 + 0x74);
        uVar8 = *puVar11;
        iVar9 = *(int *)(param_1 + 0x70);
        uVar1 = iVar9 + 1;
        if (iVar9 < (int)(uVar8 & 0x3fffffff)) {
          lVar10 = *(long *)(param_1 + 0x68);
        }
        else {
          uVar12 = *(undefined8 *)(param_1 + 0x68);
          if (0x3ffffffe < iVar9) {
            FUN_032bd0a8(uVar1);
            uVar8 = *puVar11;
          }
          uVar8 = (uVar8 & 0x3fffffff) << 1;
          if (0x3ffffffe < uVar8) {
            uVar8 = 0x3fffffff;
          }
          uVar7 = uVar1;
          if ((int)uVar1 <= (int)uVar8) {
            uVar7 = uVar8;
          }
          lVar10 = FUN_032bd1d4(PTR_PTR_0434a080,uVar7,2,uVar12,iVar9,puVar11);
          iVar9 = *(int *)(param_1 + 0x70);
          *(long *)(param_1 + 0x68) = lVar10;
        }
        *(ushort *)(lVar10 + (long)iVar9 * 2) = uVar6;
        *(uint *)(param_1 + 0x70) = uVar1;
      }
    }
  }
  return;
}


