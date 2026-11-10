/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004f5c60; name: FUN_004f5c60
 */


ulong * FUN_004f5c60(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  ulong *puVar5;
  
  puVar1 = (ulong *)*param_1;
  if (puVar1 != (ulong *)0x0) {
    uVar4 = (*puVar1 & 0xff00ff00ff00ff00) >> 8 | (*puVar1 & 0xff00ff00ff00ff) << 8;
    uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
    uVar2 = uVar4 >> 0x20 | uVar4 << 0x20;
    uVar4 = (*param_2 & 0xff00ff00ff00ff00) >> 8 | (*param_2 & 0xff00ff00ff00ff) << 8;
    uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
    uVar4 = uVar4 >> 0x20 | uVar4 << 0x20;
    iVar3 = (uint)(uVar4 < uVar2) - (uint)(uVar2 < uVar4);
    if (iVar3 < 1) {
      do {
        puVar5 = puVar1;
        if (iVar3 == 0) {
          return (ulong *)0x0;
        }
        puVar1 = (ulong *)puVar5[2];
        if (puVar1 == (ulong *)0x0) {
          param_2[2] = 0;
          puVar5[2] = (ulong)param_2;
          return param_2;
        }
        uVar4 = (*puVar1 & 0xff00ff00ff00ff00) >> 8 | (*puVar1 & 0xff00ff00ff00ff) << 8;
        uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
        uVar2 = uVar4 >> 0x20 | uVar4 << 0x20;
        uVar4 = (*param_2 & 0xff00ff00ff00ff00) >> 8 | (*param_2 & 0xff00ff00ff00ff) << 8;
        uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
        uVar4 = uVar4 >> 0x20 | uVar4 << 0x20;
        iVar3 = (uint)(uVar4 < uVar2) - (uint)(uVar2 < uVar4);
      } while (iVar3 < 1);
    }
    else {
      puVar5 = (ulong *)0x0;
    }
    param_2[2] = (ulong)puVar1;
    if (puVar5 != (ulong *)0x0) {
      param_1 = puVar5 + 2;
    }
  }
  *param_1 = (ulong)param_2;
  return param_2;
}


