/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029d2bd8; name: FUN_029d2bd8
 */


void FUN_029d2bd8(long param_1,undefined8 param_2,long *param_3)

{
  byte bVar1;
  short sVar2;
  undefined2 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  sVar2 = (short)param_3[1];
  uVar3 = *(undefined2 *)(*param_3 + 0x76);
  FUN_02994344(*(undefined8 *)(param_1 + 0x38),*param_3,sVar2);
  if (sVar2 == 0) {
    lVar4 = *(long *)(param_1 + 0x20);
    lVar5 = *param_3;
    lVar6 = *(long *)(*(long *)(*(long *)(*(long *)(lVar4 + 0x20) + 0x10) + 8) +
                      (ulong)*(byte *)(lVar5 + 0x7d) * 8 + 0x120);
    *(byte *)(lVar6 + 0x388) = *(byte *)(lVar6 + 0x388) | 0x80;
    FUN_02a3e6b8(*(undefined8 *)(lVar4 + 0x18),0x1e,*(undefined1 *)(lVar5 + 0x7d),0xf);
  }
  lVar4 = *(long *)(param_1 + 0x20);
  *(short *)(*(long *)(*(long *)(*(long *)(*(long *)(lVar4 + 0x20) + 0x10) + 8) +
                       (ulong)*(byte *)(*param_3 + 0x7d) * 8 + 0x120) + 0x76) = (short)param_3[1];
  FUN_02a3e6b8(*(undefined8 *)(lVar4 + 0x18),0x25);
  FUN_02a3e6b8(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x4c,
               *(undefined1 *)(*param_3 + 0x7d),sVar2 != 0);
  lVar5 = *(long *)(param_1 + 0x20);
  bVar1 = *(byte *)(*param_3 + 0x7d);
  lVar4 = *(long *)(lVar5 + 0x20);
  FUN_029e93f0(*(undefined8 *)(lVar4 + 0x18),
               *(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x10) + 8) + (ulong)bVar1 * 8 + 0x120));
  FUN_02a3e6b8(*(undefined8 *)(lVar5 + 0x18),0x5e,(ulong)bVar1);
  if (sVar2 != 0) {
    FUN_02a3e6b8(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x5d,
                 *(undefined1 *)(*param_3 + 0x7d));
  }
  FUN_02994660(*(undefined8 *)(param_1 + 0x38),*param_3);
  if (*(char *)((long)param_3 + 10) != '\0') {
    lVar4 = *(long *)(param_1 + 0x20);
    bVar1 = *(byte *)(*param_3 + 0x7d);
    lVar5 = *(long *)(*(long *)(*(long *)(*(long *)(lVar4 + 0x20) + 0x10) + 8) + (ulong)bVar1 * 8 +
                     0x120);
    *(undefined2 *)(lVar5 + 0x78) = uVar3;
    *(undefined2 *)(lVar5 + 0x76) = 0;
    FUN_02a3e6b8(*(undefined8 *)(lVar4 + 0x18),0x1c,(ulong)bVar1,uVar3);
    lVar4 = *(long *)(param_1 + 0x20);
    lVar5 = *param_3;
    lVar6 = *(long *)(*(long *)(*(long *)(*(long *)(lVar4 + 0x20) + 0x10) + 8) +
                      (ulong)*(byte *)(lVar5 + 0x7d) * 8 + 0x120);
    *(byte *)(lVar6 + 0x385) = *(byte *)(lVar6 + 0x385) | 1;
    FUN_02a3e6b8(*(undefined8 *)(lVar4 + 0x18),0x20,*(undefined1 *)(lVar5 + 0x7d),8);
  }
  if ((ulong)*(byte *)(*param_3 + 0x7d) < 0x1e) {
    lVar4 = *(long *)(param_1 + 0x40) + (ulong)*(byte *)(*param_3 + 0x7d) * 2;
    *(short *)(lVar4 + 0x88) = *(short *)(lVar4 + 0x88) + 1;
  }
  return;
}


