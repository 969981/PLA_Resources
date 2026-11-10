/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029d003c; name: FUN_029d003c
 */


void FUN_029d003c(long param_1,uint param_2,long param_3)

{
  undefined1 uVar1;
  byte bVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined4 *puVar9;
  undefined4 auStack_48 [2];
  
  if (((*(short *)(param_3 + 0x70) != 0x1ec) || ((param_2 | 4) != 7)) ||
     (*(char *)(param_3 + 0x369) != '\x01')) {
    return;
  }
  FUN_02973a70(*(undefined8 *)(param_1 + 0x38),param_3);
  lVar6 = *(long *)(param_1 + 0x20);
  lVar4 = *(long *)(lVar6 + 0x20);
  bVar2 = *(byte *)(param_3 + 0x7d);
  FUN_02a38210(*(undefined8 *)(lVar4 + 0x18),
               *(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x10) + 8) + (ulong)bVar2 * 8 + 0x120));
  FUN_02a3e6b8(*(undefined8 *)(lVar6 + 0x18),0x5b,(ulong)bVar2);
  FUN_02952a80(param_3,0,0);
  lVar4 = *(long *)(param_1 + 0x20);
  bVar2 = *(byte *)(param_3 + 0x7d);
  FUN_02952a80(*(undefined8 *)
                (*(long *)(*(long *)(*(long *)(lVar4 + 0x20) + 0x10) + 8) + (ulong)bVar2 * 8 + 0x120
                ),0,0);
  FUN_02a3e6b8(*(undefined8 *)(lVar4 + 0x18),0x54,(ulong)bVar2,0,0);
  FUN_02a3e6b8(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x8f,
               *(undefined1 *)(param_3 + 0x7d));
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  uVar7 = *(undefined8 *)(param_1 + 0x38);
  uVar1 = *(undefined1 *)(param_3 + 0x7d);
  uVar3 = FUN_029506a8(param_3,0x10);
  FUN_02a3cc80(uVar5,uVar1,uVar3);
  bVar2 = FUN_029679e0(uVar7,uVar1,auStack_48);
  if (bVar2 != 0) {
    uVar8 = (ulong)bVar2;
    puVar9 = auStack_48;
    do {
      FUN_02a3cc80(uVar5,uVar1,*puVar9);
      uVar8 = uVar8 - 1;
      puVar9 = puVar9 + 1;
    } while (uVar8 != 0);
  }
  FUN_02a3fa08(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x9d,0x4c,
               *(undefined1 *)(param_3 + 0x7d),0xffff0000);
  return;
}


