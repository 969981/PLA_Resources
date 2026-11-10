/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bced14; name: FUN_02bced14
 */


void FUN_02bced14(undefined8 param_1,ulong *param_2)

{
  long lVar1;
  ulong *puVar2;
  byte bVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong *puVar11;
  
  uVar4 = (uint)*(byte *)((long)param_2 + 0xc);
  *(undefined1 *)((long)param_2 + 0xd) = 0;
  if ((*(byte *)((long)param_2 + 0xc) >> 2 & 1) == 0) {
    lVar6 = *param_2 + 0x18;
    if (*param_2 < 0x11) {
      lVar6 = 0x28;
    }
    if ((lVar6 != 0) && ((*(byte *)((long)param_2 + lVar6 + 0xc) >> 3 & 1) == 0)) {
      FUN_02bcefa0(param_1,param_2);
      uVar5 = *param_2;
      if ((*(byte *)((long)param_2 + 0xc) >> 2 & 1) == 0) {
        lVar6 = uVar5 + 0x18;
        if (uVar5 < 0x11) {
          lVar6 = 0x28;
        }
        puVar11 = (ulong *)((long)param_2 + lVar6);
        uVar10 = *(ulong *)((long)param_2 + lVar6);
      }
      else {
        puVar11 = param_2;
        uVar10 = uVar5;
      }
      lVar7 = uVar10 + 0x18;
      lVar6 = uVar5 + 0x18;
      if (uVar5 < 0x11) {
        lVar6 = 0x28;
      }
      if (uVar10 < 0x11) {
        lVar7 = 0x28;
      }
      lVar1 = 0x18;
      if ((ulong)(lVar6 + lVar7) < 0x11) {
        lVar1 = 0x28;
      }
      uVar5 = (lVar6 + lVar7) - lVar1;
      puVar8 = param_2;
      if ((*(byte *)((long)param_2 + 0xc) >> 1 & 1) == 0) {
        puVar8 = (ulong *)((long)param_2 - param_2[-1]);
      }
      bVar3 = *(byte *)((long)puVar11 + 0xc);
      *(undefined4 *)(param_2 + 1) = 0xffffffff;
      puVar9 = (ulong *)((long)puVar11 + lVar7);
      if ((bVar3 & 4) != 0) {
        puVar9 = puVar11;
      }
      lVar6 = uVar5 + 0x10;
      bVar3 = (puVar8 == param_2) << 1 | 4;
      if (puVar9 != puVar11) {
        bVar3 = (puVar8 == param_2) << 1;
      }
      *param_2 = uVar5;
      lVar7 = uVar5 + 0x18;
      *(undefined1 *)((long)param_2 + 0x1f) = 0;
      *(byte *)((long)param_2 + 0xc) = bVar3;
      if (uVar5 < 0x11) {
        lVar6 = 0x20;
      }
      *(undefined2 *)((long)param_2 + 0xd) = 0x300;
      if (uVar5 < 0x11) {
        lVar7 = 0x28;
      }
      *(undefined8 *)((long)param_2 + 0xf) = 0;
      *(undefined8 *)((long)param_2 + 0x17) = 0;
      *(long *)((long)param_2 + lVar6) = lVar7;
      FUN_02bcefa0(param_1);
      FUN_02bce290(param_1,param_2);
      uVar4 = (uint)*(byte *)((long)param_2 + 0xc);
    }
  }
  if (((uVar4 >> 1 & 1) == 0) && (param_2[-1] != 0)) {
    puVar11 = (ulong *)((long)param_2 - param_2[-1]);
    if ((*(byte *)((long)puVar11 + 0xc) >> 3 & 1) == 0) {
      FUN_02bcefa0(param_1,puVar11);
      uVar5 = *puVar11;
      if ((*(byte *)((long)puVar11 + 0xc) >> 2 & 1) == 0) {
        lVar6 = uVar5 + 0x18;
        if (uVar5 < 0x11) {
          lVar6 = 0x28;
        }
        puVar8 = (ulong *)((long)puVar11 + lVar6);
        uVar10 = *(ulong *)((long)puVar11 + lVar6);
      }
      else {
        puVar8 = puVar11;
        uVar10 = uVar5;
      }
      lVar7 = uVar10 + 0x18;
      lVar6 = uVar5 + 0x18;
      if (uVar5 < 0x11) {
        lVar6 = 0x28;
      }
      if (uVar10 < 0x11) {
        lVar7 = 0x28;
      }
      lVar1 = 0x18;
      if ((ulong)(lVar6 + lVar7) < 0x11) {
        lVar1 = 0x28;
      }
      uVar5 = (lVar6 + lVar7) - lVar1;
      puVar9 = puVar11;
      if ((*(byte *)((long)puVar11 + 0xc) >> 1 & 1) == 0) {
        puVar9 = (ulong *)((long)puVar11 - puVar11[-1]);
      }
      bVar3 = *(byte *)((long)puVar8 + 0xc);
      *(undefined4 *)(puVar11 + 1) = 0xffffffff;
      puVar2 = (ulong *)((long)puVar8 + lVar7);
      if ((bVar3 & 4) != 0) {
        puVar2 = puVar8;
      }
      lVar6 = uVar5 + 0x10;
      bVar3 = (puVar9 == puVar11) << 1 | 4;
      if (puVar2 != puVar8) {
        bVar3 = (puVar9 == puVar11) << 1;
      }
      *puVar11 = uVar5;
      lVar7 = uVar5 + 0x18;
      *(undefined1 *)((long)puVar11 + 0x1f) = 0;
      *(byte *)((long)puVar11 + 0xc) = bVar3;
      if (uVar5 < 0x11) {
        lVar6 = 0x20;
      }
      *(undefined2 *)((long)puVar11 + 0xd) = 0x300;
      if (uVar5 < 0x11) {
        lVar7 = 0x28;
      }
      *(undefined8 *)((long)puVar11 + 0xf) = 0;
      *(undefined8 *)((long)puVar11 + 0x17) = 0;
      *(long *)((long)puVar11 + lVar6) = lVar7;
      FUN_02bcefa0(param_1);
      FUN_02bce290(param_1,puVar11);
      param_2 = puVar11;
    }
  }
  FUN_02bce290(param_1,param_2);
  return;
}


