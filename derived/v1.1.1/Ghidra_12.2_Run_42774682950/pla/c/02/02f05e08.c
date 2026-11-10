/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f05e08; name: FUN_02f05e08
 */


undefined8 FUN_02f05e08(undefined8 *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined8 *puVar5;
  int *piVar6;
  int *piVar7;
  long lVar8;
  int *piVar9;
  
  piVar7 = (int *)*param_1;
  uVar3 = *(uint *)(param_1 + 1);
  if ((uVar3 == 0) || (*piVar7 == param_2)) {
    piVar6 = piVar7;
  }
  else {
    lVar8 = (ulong)uVar3 * 0x10;
    piVar9 = piVar7;
    do {
      lVar8 = lVar8 + -0x10;
      if (lVar8 == 0) goto LAB_02f05e70;
      piVar1 = piVar9 + 4;
      piVar6 = piVar9 + 4;
      piVar9 = piVar9 + 4;
    } while (*piVar1 != param_2);
  }
  if (piVar6 == piVar7 + (ulong)uVar3 * 4) {
LAB_02f05e70:
    puVar5 = (undefined8 *)(*DAT_0442d138)(2,0x20);
    if (puVar5 == (undefined8 *)0x0) {
      return 2;
    }
    puVar5[2] = 0;
    puVar5[3] = 0;
    *puVar5 = 0x2ca33bdb00000000;
    puVar5[1] = 0;
    piVar6 = (int *)*param_1;
    uVar3 = *(uint *)(param_1 + 1);
    piVar7 = piVar6;
    if ((uVar3 != 0) && (*piVar6 != param_2)) {
      lVar8 = (ulong)uVar3 * 0x10;
      piVar9 = piVar6;
      do {
        lVar8 = lVar8 + -0x10;
        if (lVar8 == 0) goto LAB_02f05ef4;
        piVar7 = piVar9 + 4;
        piVar1 = piVar9 + 4;
        piVar9 = piVar7;
      } while (*piVar1 != param_2);
    }
    if (piVar7 == piVar6 + (ulong)uVar3 * 4) {
LAB_02f05ef4:
      uVar4 = *(uint *)((long)param_1 + 0xc);
      if (uVar4 <= uVar3) {
        iVar2 = uVar4 + (uVar4 >> 1);
        if (uVar4 == 0) {
          iVar2 = 1;
        }
        uVar4 = uVar4 + iVar2;
        piVar6 = (int *)(*DAT_0442d148)(0,piVar6,(ulong)uVar4 << 4);
        if (piVar6 == (int *)0x0) goto LAB_02f05f80;
        *param_1 = piVar6;
        *(uint *)((long)param_1 + 0xc) = uVar4;
      }
      if (uVar4 <= uVar3) {
LAB_02f05f80:
        if (puVar5[2] != 0) {
          *(undefined4 *)(puVar5 + 3) = 0;
          (*DAT_0442d150)(0);
          puVar5[2] = 0;
          *(undefined4 *)((long)puVar5 + 0x1c) = 0;
        }
        puVar5[1] = 0;
        (*DAT_0442d150)(2,puVar5);
        return 2;
      }
      uVar3 = *(uint *)(param_1 + 1);
      *(uint *)(param_1 + 1) = uVar3 + 1;
      if (piVar6 + (ulong)uVar3 * 4 == (int *)0x0) goto LAB_02f05f80;
      piVar6[(ulong)uVar3 * 4] = param_2;
      piVar7 = piVar6 + (ulong)uVar3 * 4;
    }
    *(undefined8 **)(piVar7 + 2) = puVar5;
  }
  return 1;
}


