/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008310b0; name: FUN_008310b0
 */


undefined8 FUN_008310b0(ushort *param_1,long param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  long *plVar3;
  ushort uVar4;
  byte bVar5;
  undefined8 uVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined4 local_38 [4];
  undefined4 local_28 [2];
  
  local_38[0] = 0;
  local_28[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_28);
  uVar12 = *(undefined8 *)(param_1 + 8);
  uVar6 = FUN_0082deb0(param_2 + 8);
  bVar5 = FUN_0082e514(uVar12,uVar6);
  if (bVar5 != 0xff) {
    uVar4 = *param_1;
    uVar7 = (uint)uVar4;
    if (*(int *)(param_2 + 0x3c) == 3) {
      if (uVar7 != 0) {
        lVar8 = *(long *)(param_1 + 0x10);
        uVar9 = (ulong)bVar5;
        lVar10 = *(long *)(lVar8 + uVar9 * 8);
        if (uVar7 == 1) {
          lVar11 = 0;
        }
        else {
          lVar11 = 0;
          do {
            puVar2 = (undefined1 *)(lVar10 + lVar11);
            plVar3 = (long *)(lVar8 + lVar11 * 8);
            lVar11 = lVar11 + 2;
            *puVar2 = 0;
            *(undefined1 *)(*plVar3 + uVar9) = 0;
            puVar2[1] = 0;
            *(undefined1 *)(plVar3[1] + uVar9) = 0;
          } while ((ulong)uVar4 - ((ulong)uVar4 & 1) != lVar11);
        }
        if ((uVar4 & 1) != 0) {
          *(undefined1 *)(lVar10 + lVar11) = 0;
          *(undefined1 *)(*(long *)(lVar8 + lVar11 * 8) + uVar9) = 0;
        }
        return 0;
      }
    }
    else if (uVar7 != 0) {
      uVar9 = 0;
      do {
        if (*(char *)(*(long *)(*(long *)(param_1 + 0x10) + (ulong)bVar5 * 8) + (uVar9 & 0xff)) !=
            '\0') {
          return 1;
        }
        uVar1 = (int)uVar9 + 1;
        uVar9 = (ulong)uVar1;
      } while ((uVar1 & 0xff) < uVar7);
    }
  }
  return 0;
}


