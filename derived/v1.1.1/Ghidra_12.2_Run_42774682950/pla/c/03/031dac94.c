/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031dac94; name: FUN_031dac94
 */


void FUN_031dac94(long param_1,undefined4 *param_2,ushort *param_3,ushort *param_4,
                 undefined1 *param_5)

{
  ushort *puVar1;
  long *plVar2;
  long *plVar3;
  int iVar4;
  undefined1 uVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  int *piVar9;
  ulong uVar10;
  ushort *puVar11;
  undefined4 local_48 [2];
  
  plVar2 = (long *)(param_1 + 0x50);
  lVar6 = FUN_031dd758(plVar2);
  if (lVar6 == 0) {
    lVar6 = -0x100000000;
    uVar7 = 0xffffffff;
  }
  else {
    uVar7 = *(uint *)(lVar6 + 4);
    lVar6 = (lVar6 - *(long *)(param_1 + 0x60)) * 0x20000000;
  }
  lVar8 = *plVar2;
  uVar7 = uVar7 | (uint)lVar6;
  plVar3 = (long *)(lVar8 + (long)(int)uVar7 * 0x18 + 8);
  if (param_3 != param_4) {
    uVar10 = (long)param_4 + (-2 - (long)param_3);
    puVar11 = param_3;
    if (((uint)uVar10 >> 1 & 1) == 0) {
      puVar11 = param_3 + 1;
      *(undefined4 *)(*plVar3 + (ulong)*param_3 * 8) = 0xfffffffe;
    }
    if (1 < uVar10) {
      do {
        *(undefined4 *)(*plVar3 + (ulong)*puVar11 * 8) = 0xfffffffe;
        puVar1 = puVar11 + 1;
        puVar11 = puVar11 + 2;
        *(undefined4 *)(*plVar3 + (ulong)*puVar1 * 8) = 0xfffffffe;
      } while (puVar11 != param_4);
    }
  }
  iVar4 = *(int *)(lVar8 + (long)(int)uVar7 * 0x18 + 0x10);
  if (iVar4 != 0) {
    lVar8 = (long)iVar4 << 3;
    piVar9 = (int *)*plVar3;
    do {
      if (*piVar9 != -2) {
        uVar5 = 0;
        *param_5 = 0;
        goto LAB_031dadec;
      }
      lVar8 = lVar8 + -8;
      piVar9 = piVar9 + 2;
    } while (lVar8 != 0);
  }
  if ((*(uint *)(param_1 + 0x68) < (uint)((ulong)lVar6 >> 0x20)) ||
     (lVar6 = *(long *)(param_1 + 0x60) + (lVar6 >> 0x20) * 8, *(uint *)(lVar6 + 4) != uVar7)) {
    lVar6 = FUN_031dd758(plVar2,*plVar2 + (long)(int)uVar7 * 0x18);
  }
  FUN_031dd7dc(plVar2,lVar6);
  *param_5 = 1;
  local_48[0] = *param_2;
  uVar5 = FUN_031dae20(param_1,local_48,param_5 + 8);
LAB_031dadec:
  param_5[1] = uVar5;
  return;
}


