/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029e2ed0; name: FUN_029e2ed0
 */


void FUN_029e2ed0(long param_1,undefined1 *param_2,byte *param_3)

{
  byte bVar1;
  ulong uVar2;
  byte bVar3;
  long lVar4;
  undefined1 auStack_40 [8];
  undefined1 local_38;
  undefined2 local_37;
  
  *param_2 = 0;
  lVar4 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 8) + (ulong)*param_3 * 8 + 0x120);
  if ((*(short *)(lVar4 + 0x74) != 0) || (param_3[4] != 0)) {
    bVar3 = param_3[1];
    if ((ulong)bVar3 != 4) {
      if (bVar3 < *(byte *)(lVar4 + 0x368)) {
        bVar3 = *(byte *)(lVar4 + (ulong)bVar3 * 0x1c + 0x304);
      }
      else {
        bVar3 = 0;
      }
      bVar1 = param_3[2];
      if (bVar3 <= param_3[2]) {
        bVar1 = bVar3;
      }
      if (bVar1 != 0) {
        FUN_02a3b928(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x60) + 0x5e0) + 0x20),lVar4);
        FUN_02a3a6c4(*(undefined8 *)(param_1 + 0x20),param_3 + 8);
        uVar2 = FUN_029917a0(*(undefined8 *)(param_1 + 0x38),lVar4,param_3[1]);
        if ((uVar2 & 1) != 0) {
          local_37 = 0;
          local_38 = *(undefined1 *)(lVar4 + 0x7d);
          FUN_029fdc80(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x19c0),auStack_40,&local_38);
        }
        *param_2 = 1;
      }
    }
  }
  return;
}


