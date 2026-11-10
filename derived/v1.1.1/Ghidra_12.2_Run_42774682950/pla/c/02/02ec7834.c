/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ec7834; name: FUN_02ec7834
 */


undefined8 FUN_02ec7834(long *param_1,long param_2,long param_3,long *param_4)

{
  int iVar1;
  uint uVar2;
  undefined2 uVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  
  plVar10 = *(long **)(param_2 + 0x18);
  uVar2 = *(uint *)(plVar10 + 1);
  uVar8 = *(uint *)((long)plVar10 + 0xc);
  if (uVar8 <= uVar2) {
    iVar1 = uVar8 + (uVar8 >> 1);
    if (uVar8 == 0) {
      iVar1 = 1;
    }
    uVar8 = iVar1 + uVar8;
    lVar4 = FUN_02f59e50(0,*plVar10,(ulong)uVar8 * 0x28);
    if (lVar4 == 0) goto LAB_02ec7964;
    *plVar10 = lVar4;
    *(uint *)((long)plVar10 + 0xc) = uVar8;
  }
  if (uVar2 < uVar8) {
    uVar9 = (ulong)*(uint *)(plVar10 + 1);
    lVar4 = *plVar10;
    *(uint *)(plVar10 + 1) = *(uint *)(plVar10 + 1) + 1;
    if (lVar4 + uVar9 * 0x28 != 0) {
      FUN_02ea7dd4();
      lVar11 = *(long *)(param_3 + 0x88);
      if (*(long *)(lVar11 + 0x18) == 0) {
        uVar6 = FUN_02ea7fc8();
        lVar7 = *(long *)(lVar11 + 0x18);
        *(undefined8 *)(lVar11 + 0x18) = uVar6;
        if (lVar7 != 0) {
          FUN_02ea800c();
        }
      }
      if (*(long *)(*(long *)(param_3 + 0x88) + 0x18) != 0) {
        plVar10 = (long *)(lVar4 + uVar9 * 0x28 + 0x20);
        *plVar10 = *param_4;
        if (param_1 != (long *)0x0) {
          (**(code **)(*param_1 + 0x10))(param_1);
        }
        lVar11 = lVar4 + uVar9 * 0x28;
        plVar5 = *(long **)(lVar11 + 0x18);
        *(long **)(lVar11 + 0x18) = param_1;
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x18))();
        }
        plVar5 = *(long **)(*(long *)(param_3 + 0x88) + 0x18);
        if ((int)plVar5[1] == 0) {
          lVar4 = lVar4 + uVar9 * 0x28;
          *(byte *)(lVar4 + 0x12) = *(byte *)(lVar4 + 0x12) & 0xfc;
          *(undefined2 *)(lVar4 + 0x10) = 1;
          lVar4 = *plVar10;
        }
        else {
          lVar11 = *plVar5;
          lVar4 = lVar4 + uVar9 * 0x28;
          uVar3 = *(undefined2 *)(lVar11 + 0x10);
          *(undefined1 *)(lVar4 + 0x12) = *(undefined1 *)(lVar11 + 0x12);
          *(undefined2 *)(lVar4 + 0x10) = uVar3;
          lVar4 = *plVar10;
        }
        if (lVar4 == 0) {
          return 1;
        }
        FUN_02ec7368(param_1);
        return 1;
      }
    }
  }
LAB_02ec7964:
  lVar4 = *(long *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = 0;
  if (lVar4 != 0) {
    FUN_02ea800c();
  }
  return 0x34;
}


