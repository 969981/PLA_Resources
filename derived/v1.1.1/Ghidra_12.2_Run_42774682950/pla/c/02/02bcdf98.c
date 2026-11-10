/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bcdf98; name: FUN_02bcdf98
 */


ulong * FUN_02bcdf98(ulong *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  
  lVar1 = *param_1 + 0x18;
  lVar2 = param_2 + 0x18;
  if (*param_1 < 0x11) {
    lVar1 = 0x28;
  }
  if (param_2 < 0x11) {
    lVar2 = 0x28;
  }
  puVar4 = (ulong *)((long)param_1 + lVar1);
  if ((*(byte *)((long)param_1 + 0xc) & 4) != 0) {
    puVar4 = param_1;
  }
  puVar5 = param_1;
  if ((*(byte *)((long)param_1 + 0xc) >> 1 & 1) == 0) {
    puVar5 = (ulong *)((long)param_1 - param_1[-1]);
  }
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *param_1 = param_2;
  *(char *)((long)param_1 + 0xc) = (puVar5 == param_1) << 1;
  lVar3 = param_2 + 0x10;
  *(undefined2 *)((long)param_1 + 0xd) = 0x300;
  if (param_2 < 0x11) {
    lVar3 = 0x20;
  }
  *(undefined8 *)((long)param_1 + 0xf) = 0;
  uVar6 = (lVar1 - lVar2) - 0x18;
  *(undefined8 *)((long)param_1 + 0x17) = 0;
  *(undefined1 *)((long)param_1 + 0x1f) = 0;
  if ((ulong)(lVar1 - lVar2) < 0x29) {
    uVar6 = 0x10;
  }
  *(long *)((long)param_1 + lVar3) = lVar2;
  puVar5 = param_1;
  if ((*(byte *)((long)param_1 + 0xc) >> 2 & 1) == 0) {
    lVar1 = *param_1 + 0x18;
    if (*param_1 < 0x11) {
      lVar1 = 0x28;
    }
    puVar5 = (ulong *)((long)param_1 + lVar1);
  }
  *(undefined4 *)(puVar5 + 1) = 0xffffffff;
  lVar1 = uVar6 + 0x10;
  *(undefined2 *)((long)puVar5 + 0xd) = 0x300;
  if (uVar6 < 0x11) {
    lVar1 = 0x20;
  }
  *puVar5 = uVar6;
  lVar2 = uVar6 + 0x18;
  *(undefined8 *)((long)puVar5 + 0xf) = 0;
  if (uVar6 < 0x11) {
    lVar2 = 0x28;
  }
  *(undefined8 *)((long)puVar5 + 0x17) = 0;
  *(undefined1 *)((long)puVar5 + 0x1f) = 0;
  *(char *)((long)puVar5 + 0xc) = (puVar4 == param_1) << 2;
  *(long *)((long)puVar5 + lVar1) = lVar2;
  return puVar5;
}


