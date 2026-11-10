/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f03e74; name: FUN_02f03e74
 */


void FUN_02f03e74(long *param_1,uint param_2,long param_3,uint param_4)

{
  uint uVar1;
  undefined2 *puVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  uint *puVar9;
  long lVar10;
  byte *pbVar11;
  
  uVar5 = (**(code **)(*param_1 + 0x78))();
  if ((uVar5 & 1) == 0) {
    return;
  }
  (**(code **)(*param_1 + 0x50))(param_1);
  plVar6 = (long *)(**(code **)(*param_1 + 0x38))(param_1);
  if (*(uint *)(plVar6 + 1) == param_2) {
    if (param_2 == 0) {
      return;
    }
    uVar5 = 0;
    puVar9 = (uint *)(param_3 + 4);
    pbVar11 = (byte *)(*plVar6 + 2);
    do {
      if ((*(short *)(pbVar11 + -2) != (short)puVar9[-1]) || (*puVar9 != (uint)*pbVar11)) break;
      uVar5 = uVar5 + 1;
      puVar9 = puVar9 + 3;
      pbVar11 = pbVar11 + 4;
    } while (param_2 != uVar5);
    if ((uint)uVar5 == param_2) {
      return;
    }
  }
  if (*plVar6 != 0) {
    *(undefined4 *)(plVar6 + 1) = 0;
    FUN_02f59e60(0);
    *plVar6 = 0;
    *(undefined4 *)((long)plVar6 + 0xc) = 0;
  }
  if (param_2 != 0) {
    uVar4 = *(uint *)(plVar6 + 1);
    if (uVar4 <= param_2) {
      if (*(uint *)((long)plVar6 + 0xc) < param_2) {
        uVar1 = *(uint *)((long)plVar6 + 0xc) + (param_2 - uVar4);
        lVar7 = (*DAT_0442d148)(0,0,(ulong)uVar1 << 2);
        if (lVar7 == 0) goto LAB_02f04054;
        *plVar6 = lVar7;
        *(uint *)((long)plVar6 + 0xc) = uVar1;
      }
      else {
        lVar7 = 0;
      }
      if (uVar4 < param_2) {
        lVar8 = ~(ulong)uVar4 + (ulong)param_2;
        lVar10 = (ulong)uVar4 * 4;
        lVar3 = lVar7 + lVar10;
        while( true ) {
          if (lVar3 != 0) {
            puVar2 = (undefined2 *)(lVar7 + lVar10);
            *puVar2 = 0xffff;
            *(undefined1 *)(puVar2 + 1) = 2;
            *(byte *)((long)puVar2 + 3) = *(byte *)((long)puVar2 + 3) & 0xfe;
          }
          if (lVar8 == 0) break;
          lVar7 = *plVar6;
          lVar8 = lVar8 + -1;
          lVar10 = lVar10 + 4;
          lVar3 = lVar7 + lVar10;
        }
      }
    }
    uVar5 = (ulong)param_2;
    lVar7 = 0;
    *(uint *)(plVar6 + 1) = param_2;
    pbVar11 = (byte *)(param_3 + 8);
    do {
      uVar5 = uVar5 - 1;
      *(short *)(*plVar6 + lVar7) = (short)*(undefined4 *)(pbVar11 + -8);
      *(char *)(*plVar6 + lVar7 + 2) = (char)*(undefined4 *)(pbVar11 + -4);
      lVar10 = *plVar6 + lVar7;
      lVar7 = lVar7 + 4;
      *(byte *)(lVar10 + 3) = *(byte *)(lVar10 + 3) & 0xfe | *pbVar11;
      pbVar11 = pbVar11 + 0xc;
    } while (uVar5 != 0);
  }
LAB_02f04054:
  if ((param_4 & 1) == 0) {
    return;
  }
  FUN_02f04094(param_1);
  return;
}


