/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029cf4f8; name: FUN_029cf4f8
 */


void FUN_029cf4f8(long param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong *puVar1;
  undefined1 uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x20);
  puVar1 = param_3 + 3;
  uVar3 = *(uint *)(param_3 + 2);
  uVar2 = *(undefined1 *)(param_3[1] + 0x7d);
  FUN_02951ca0(param_3[1],uVar3,puVar1);
  FUN_02a3e6b8(*(undefined8 *)(lVar5 + 0x18),0x13,uVar2,uVar3 & 0xff,
               *(undefined4 *)((long)param_3 + 0x1c),*(undefined4 *)(param_3 + 3));
  if ((int)uVar3 < 8) {
    if ((uVar3 == 5) && (uVar3 = 8, (*puVar1 & 0x3f07) != 0xf01)) {
      uVar3 = 5;
    }
    FUN_02a3e6b8(*(undefined8 *)(lVar5 + 0x18),0x73,uVar2,uVar3);
  }
  if (*(char *)(param_3 + 4) != '\0') {
    FUN_029cf644(param_1,param_3[1],*(undefined4 *)(param_3 + 2));
  }
  FUN_029cfd50(param_1,param_3[1],*(undefined4 *)(param_3 + 2),puVar1,
               *(undefined1 *)((long)param_3 + 0x21),param_3[5]);
  FUN_029d003c(param_1,*(undefined4 *)(param_3 + 2),param_3[1]);
  FUN_029d01c8(param_1,*param_3,param_3[1],*(undefined4 *)(param_3 + 2),puVar1);
  if (*(char *)(param_3 + 6) == '\0') {
    lVar4 = *(long *)(*(long *)(param_1 + 0x60) + 800);
    lVar5 = *(long *)(*(long *)(*(long *)(lVar4 + 0x10) + 8) +
                      (ulong)*(byte *)(param_3[1] + 0x7d) * 8 + 0x120);
    if (*(short *)(lVar5 + 0x76) != 0) {
      FUN_029825a0(*(undefined8 *)(lVar4 + 0x38),lVar5,4);
      return;
    }
  }
  return;
}


