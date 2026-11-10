/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029e3c38; name: FUN_029e3c38
 */


void FUN_029e3c38(long param_1,byte *param_2)

{
  byte bVar1;
  ulong uVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  
  uVar2 = (ulong)*param_2;
  bVar3 = param_2[1];
  lVar4 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 8) + uVar2 * 8 + 0x120);
  if (*(byte *)(lVar4 + 0x369) != bVar3) {
    if (((param_2[4] != 0) && (lVar4 != 0)) && (*(char *)(lVar4 + 0x7d) != '\x1f')) {
      FUN_02a3e6b8(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x99,*(char *)(lVar4 + 0x7d),0)
      ;
      uVar2 = (ulong)*param_2;
      bVar3 = param_2[1];
    }
    lVar5 = *(long *)(param_1 + 0x20);
    bVar1 = param_2[2];
    FUN_02952a80(*(undefined8 *)
                  (*(long *)(*(long *)(*(long *)(lVar5 + 0x20) + 0x10) + 8) + uVar2 * 8 + 0x120),
                 bVar3,bVar1 != 0);
    FUN_02a3e6b8(*(undefined8 *)(lVar5 + 0x18),0x54,uVar2,bVar3,bVar1);
    if (param_2[5] != 0) {
      FUN_02a3e6b8(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x8f,*param_2);
      FUN_02a3a6c4(*(undefined8 *)(param_1 + 0x20),param_2 + 8);
    }
    if (((param_2[4] != 0) && (lVar4 != 0)) && (*(char *)(lVar4 + 0x7d) != '\x1f')) {
      FUN_02a3e6b8(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x9a);
      return;
    }
  }
  return;
}


