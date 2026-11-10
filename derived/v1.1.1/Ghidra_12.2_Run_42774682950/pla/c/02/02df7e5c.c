/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02df7e5c; name: FUN_02df7e5c
 */


void FUN_02df7e5c(long param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined1 uVar5;
  char cVar6;
  bool bVar7;
  short sVar8;
  long lVar9;
  int *piVar10;
  void *__dest;
  uint uVar11;
  
  uVar2 = *(uint *)(param_1 + 0x7c);
  if (*(int *)(param_1 + 0x88) - 1U == uVar2) {
    lVar9 = *(long *)(param_1 + 0x98);
    piVar10 = (int *)(param_1 + 0xa4);
  }
  else {
    lVar9 = *(long *)(param_1 + 0x98);
    piVar10 = (int *)(lVar9 + (ulong)(uVar2 + 1) * 4);
  }
  iVar4 = *(int *)(lVar9 + (ulong)uVar2 * 4);
  iVar3 = *piVar10;
  uVar2 = *(uint *)(param_1 + 0x8c);
  uVar11 = uVar2;
  if (*(uint *)(param_1 + 0x70) <= uVar2) {
    uVar11 = *(uint *)(param_1 + 0x70);
  }
  lVar9 = *(long *)(param_1 + 0x68);
  *(uint *)(param_1 + 0x8c) = uVar2 - uVar11;
  uVar1 = iVar3 - iVar4 & 0xffff;
  __dest = (void *)(*(long *)(lVar9 + 0x18) + (ulong)*(ushort *)(lVar9 + 0x20) * 0x5f0);
  uVar5 = *(undefined1 *)(param_1 + 0x90);
  memcpy(__dest,*(void **)(param_1 + 0xb0),(ulong)uVar1);
  *(uint *)((long)__dest + 0x5e4) = uVar1;
  *(uint *)((long)__dest + 0x5e8) = uVar11;
  *(undefined1 *)((long)__dest + 0x5ec) = uVar5;
  uVar11 = *(uint *)(lVar9 + 0x28);
  uVar2 = *(ushort *)(lVar9 + 0x20) + 1;
  sVar8 = 0;
  if (uVar11 != 0) {
    sVar8 = (short)(uVar2 / uVar11);
  }
  *(short *)(lVar9 + 0x20) = (short)uVar2 - sVar8 * (short)uVar11;
  piVar10 = (int *)(lVar9 + 0x24);
  do {
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(piVar10,0x10);
    if (bVar7) {
      *piVar10 = *piVar10 + 1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if ((*(short *)(param_1 + 0x54) == 1) || (*(int *)(param_1 + 0x7c) != *(int *)(param_1 + 0x84))) {
    *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + 1;
    *(ulong *)(param_1 + 0xb0) = *(long *)(param_1 + 0xb0) + (ulong)uVar1;
    *(undefined1 *)(param_1 + 0x90) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_1 + 0x80);
    *(ulong *)(param_1 + 0xb0) = *(long *)(param_1 + 0xb8) + (ulong)*(uint *)(param_1 + 0x74);
    *(undefined1 *)(param_1 + 0x90) = 1;
    *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x58) / 400;
  }
  return;
}


