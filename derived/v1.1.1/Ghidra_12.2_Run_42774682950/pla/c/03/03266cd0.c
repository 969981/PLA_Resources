/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03266cd0; name: FUN_03266cd0
 */


void FUN_03266cd0(long param_1,ulong param_2,ushort param_3)

{
  long *plVar1;
  undefined4 *puVar2;
  long lVar3;
  uint uVar4;
  ushort uVar5;
  undefined2 uVar6;
  ulong uVar7;
  int iVar8;
  ushort *puVar9;
  ulong uVar10;
  long lVar11;
  
  iVar8 = *(int *)(param_1 + 0xc0);
  if (iVar8 == 0) {
    if ((~(uint)param_2 & 0xffff) == 0) {
      puVar9 = (ushort *)(param_1 + 0xa0);
    }
    else {
      puVar9 = (ushort *)(*(long *)(param_1 + 0x100) + (param_2 & 0xffff) * 0x20 + 0x10);
    }
    *puVar9 = param_3;
    if (param_3 == 0xffff) {
      *(short *)(param_1 + 0xa2) = (short)param_2;
    }
    else {
      *(short *)(*(long *)(param_1 + 0x100) + (ulong)param_3 * 0x20 + 0xe) = (short)param_2;
    }
  }
  else {
    puVar9 = *(ushort **)(param_1 + 0xb8);
    if ((~(uint)param_2 & 0xffff) == 0) {
      *(ushort *)(param_1 + 0xa0) = *puVar9;
    }
    else {
      *(ushort *)(*(long *)(param_1 + 0x100) + (param_2 & 0xffff) * 0x20 + 0x10) = *puVar9;
      puVar9 = *(ushort **)(param_1 + 0xb8);
      iVar8 = *(int *)(param_1 + 0xc0);
    }
    uVar5 = *puVar9;
    lVar11 = 0;
    plVar1 = (long *)(param_1 + 0xe8);
    while( true ) {
      uVar10 = (ulong)uVar5;
      puVar2 = (undefined4 *)(*(long *)(param_1 + 0x100) + uVar10 * 0x20);
      *(short *)((long)puVar2 + 0xe) = (short)param_2;
      if ((~(uint)param_2 & 0xffff) == 0) {
        uVar4 = *(int *)(param_1 + 0xf8) >> 5;
        uVar7 = uVar10;
        if (uVar4 != 0xffffffff) {
          memset((void *)(*plVar1 + (long)(int)((uVar4 + 1) * (uint)uVar5) * 4),0,
                 (-(ulong)(uVar4 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar4 << 2) + 4);
        }
      }
      else {
        uVar7 = (ulong)((uint)param_2 & 0xffff);
      }
      FUN_03267358(plVar1,uVar10,plVar1,uVar7,param_1 + 0xd0,uVar10);
      if ((ulong)(iVar8 - 1) * 2 == lVar11) break;
      uVar6 = FUN_03267620(param_1,*puVar2,uVar10);
      *(undefined2 *)((long)puVar2 + 0x12) = uVar6;
      lVar3 = *(long *)(param_1 + 0xb8) + lVar11;
      lVar11 = lVar11 + 2;
      uVar5 = *(ushort *)(lVar3 + 2);
      *(ushort *)(puVar2 + 4) = uVar5;
      param_2 = uVar10;
    }
    *(ushort *)(puVar2 + 4) = param_3;
    uVar6 = *(undefined2 *)(*(long *)(param_1 + 0xb8) + (long)*(int *)(param_1 + 0xc0) * 2 + -2);
    if (param_3 == 0xffff) {
      *(undefined2 *)(param_1 + 0xa2) = uVar6;
    }
    else {
      *(undefined2 *)(*(long *)(param_1 + 0x100) + (ulong)param_3 * 0x20 + 0xe) = uVar6;
    }
  }
  return;
}


