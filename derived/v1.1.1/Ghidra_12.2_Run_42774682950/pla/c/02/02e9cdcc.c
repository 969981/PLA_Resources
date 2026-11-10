/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e9cdcc; name: FUN_02e9cdcc
 */


undefined8 FUN_02e9cdcc(long param_1,ulong param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  uint uVar8;
  undefined8 uVar9;
  ulong uVar10;
  
  if (((*(uint *)(*(long *)(param_1 + 0x10) + 0x40) < 2) ||
      (lVar7 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x38) + 8), lVar7 == 0)) &&
     (lVar7 = DAT_0440a410, DAT_0440a410 == 0)) {
    FUN_02e43d1c();
    uVar8 = *(uint *)(DAT_0440a410 + 0xb0);
    lVar7 = DAT_0440a410;
  }
  else {
    uVar8 = *(uint *)(lVar7 + 0xb0);
  }
  if (uVar8 != 0) {
    iVar5 = 0;
    while( true ) {
      iVar1 = iVar5 + (uVar8 >> 1);
      uVar10 = *(ulong *)(*(long *)(lVar7 + 0xa8) + (long)iVar1 * 8);
      if (uVar10 == param_2) break;
      if (uVar10 < param_2) {
        iVar5 = iVar1 + 1;
      }
      uVar8 = uVar8 - (uVar10 < param_2) >> 1;
      if (uVar8 == 0) {
        return 2;
      }
    }
    if ((*(long *)(lVar7 + 0xa8) + (long)iVar1 * 8 != 0) &&
       (uVar8 = *(uint *)(DAT_0440a140 + 0x38), uVar8 != 0)) {
      uVar4 = 0;
      if (uVar8 != 0) {
        uVar4 = (uint)param_2 / uVar8;
      }
      plVar6 = *(long **)(*(long *)(DAT_0440a140 + 0x30) +
                         (ulong)((uint)param_2 - uVar4 * uVar8) * 8);
      if (plVar6 != (long *)0x0) {
        while (plVar6[1] != param_2) {
          plVar6 = (long *)*plVar6;
          if (plVar6 == (long *)0x0) {
            return 2;
          }
        }
        if ((2 < *(uint *)(plVar6[2] + 0x40)) &&
           (lVar7 = *(long *)(*(long *)(plVar6[2] + 0x38) + 0x10), lVar7 != 0)) {
          uVar2 = *(undefined8 *)(lVar7 + 0x68);
          *param_3 = *(undefined8 *)(lVar7 + 0x60);
          param_3[1] = uVar2;
          uVar9 = *(undefined8 *)(lVar7 + 0x80);
          uVar2 = *(undefined8 *)(lVar7 + 0x70);
          uVar3 = *(undefined8 *)(lVar7 + 0x78);
          *(undefined1 *)(param_3 + 5) = *(undefined1 *)(lVar7 + 0x88);
          param_3[3] = uVar3;
          param_3[4] = uVar9;
          param_3[2] = uVar2;
          return 1;
        }
      }
    }
  }
  return 2;
}


