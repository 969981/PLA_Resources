/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eeb990; name: FUN_02eeb990
 */


void FUN_02eeb990(long param_1,long param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  undefined2 *puVar6;
  undefined2 *puVar8;
  undefined2 *puVar7;
  long *plVar9;
  
  if (*(short *)(param_1 + 0x112) == 0) {
    return;
  }
  uVar1 = *(uint *)(param_2 + 0x20);
  uVar4 = *(uint *)(param_2 + 0x24);
  plVar9 = *(long **)(param_1 + 0xe0);
  *(short *)(param_2 + 0x10) = *(short *)(param_2 + 0x10) + -1;
  if (uVar4 <= uVar1) {
    iVar2 = uVar4 + (uVar4 >> 1);
    if (uVar4 == 0) {
      iVar2 = 1;
    }
    uVar4 = iVar2 + uVar4;
    lVar3 = (*DAT_0442d148)(0,*(undefined8 *)(param_2 + 0x18),(ulong)uVar4 << 1);
    if (lVar3 == 0) goto LAB_02eebb64;
    *(long *)(param_2 + 0x18) = lVar3;
    *(uint *)(param_2 + 0x24) = uVar4;
  }
  if (uVar1 < uVar4) {
    puVar6 = (undefined2 *)(*(long *)(param_2 + 0x18) + (ulong)*(uint *)(param_2 + 0x20) * 2);
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) + 1;
    if (puVar6 != (undefined2 *)0x0) {
      *puVar6 = (short)param_3;
      uVar5 = (ulong)(param_3 >> 3) & 0x1fff;
      *(byte *)(*(long *)(param_2 + 0x30) + uVar5) =
           *(byte *)(*(long *)(param_2 + 0x30) + uVar5) | (byte)(1 << (ulong)(param_3 & 7));
      iVar2 = (**(code **)(*plVar9 + 0x58))(plVar9,param_3);
      *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) - iVar2;
      iVar2 = (**(code **)(**(long **)(param_1 + 0xe0) + 0x20))();
      uVar4 = (uint)*(ushort *)(param_1 + 0x112);
      if ((iVar2 - 1U & 0xffff) <= uVar4) {
        uVar4 = iVar2 - 1U & 0xffff;
      }
      if (*(uint *)(param_2 + 0x20) <= uVar4) {
        return;
      }
      uVar5 = (ulong)(**(ushort **)(param_2 + 0x18) >> 3);
      *(byte *)(*(long *)(param_2 + 0x30) + uVar5) =
           *(byte *)(*(long *)(param_2 + 0x30) + uVar5) &
           ((byte)(1 << ((ulong)**(ushort **)(param_2 + 0x18) & 7)) ^ 0xff);
      iVar2 = (**(code **)(*plVar9 + 0x58))(plVar9);
      *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + iVar2;
      *(short *)(param_2 + 0x10) = *(short *)(param_2 + 0x10) + 1;
      uVar4 = *(uint *)(param_2 + 0x20);
      lVar3 = (ulong)uVar4 - 1;
      if (0 < lVar3) {
        puVar6 = *(undefined2 **)(param_2 + 0x18);
        *puVar6 = puVar6[1];
        if (1 < lVar3) {
          puVar7 = puVar6 + 1;
          do {
            puVar8 = puVar7 + 1;
            *puVar7 = *puVar8;
            puVar7 = puVar8;
          } while (puVar8 < puVar6 + lVar3);
        }
        uVar4 = *(uint *)(param_2 + 0x20);
      }
      *(uint *)(param_2 + 0x20) = uVar4 - 1;
      return;
    }
  }
LAB_02eebb64:
  *(undefined2 *)(param_2 + 0x12) = 0;
  return;
}


