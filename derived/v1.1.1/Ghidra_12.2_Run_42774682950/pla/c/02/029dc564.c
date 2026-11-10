/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029dc564; name: FUN_029dc564
 */


void FUN_029dc564(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long local_a0 [10];
  undefined6 uStack_50;
  undefined2 local_4a;
  undefined2 uStack_48;
  byte bStack_46;
  undefined1 uStack_45;
  byte bStack_44;
  undefined1 uStack_43;
  undefined1 auStack_40 [8];
  undefined1 *local_38;
  
  uStack_48 = 0;
  bStack_46 = 0;
  uStack_45 = 0;
  bStack_44 = 0;
  uStack_43 = 0;
  local_a0[9] = 0;
  uStack_50 = 0;
  local_4a = 0;
  local_a0[0] = 0;
  local_a0[7] = 0;
  local_a0[8] = 0;
  local_a0[5] = 0;
  local_a0[6] = 0;
  local_a0[3] = 0;
  local_a0[4] = 0;
  local_a0[1] = 0;
  local_a0[2] = 0;
  lVar2 = *(long *)(*(long *)(param_1 + 0x60) + 0x12c0);
  FUN_029e9bc4(lVar2,local_a0);
  local_38 = (undefined1 *)local_a0;
  FUN_029f7874(*(undefined8 *)(*(long *)(lVar2 + 0x60) + 0x17e0),auStack_40,&local_38);
  if (bStack_46 != 0) {
    bStack_44 = 1;
    lVar2 = local_a0[0];
    while (lVar2 != 0) {
      lVar3 = *(long *)(lVar2 + 0x60);
      uVar1 = FUN_02c6cf3c(*(undefined8 *)(lVar3 + 0x98));
      if ((((uVar1 & 1) == 0) &&
          ((*(ushort *)(*(long *)(*(long *)(lVar3 + 0x98) + 0x10) + 4) >> 2 & 1) == 0)) &&
         (*(short *)(lVar2 + 0x74) != 0)) {
        lVar3 = *(long *)(*(long *)(param_1 + 0x60) + 800);
        lVar2 = *(long *)(*(long *)(*(long *)(lVar3 + 0x10) + 8) +
                          (ulong)*(byte *)(lVar2 + 0x7d) * 8 + 0x120);
        if (*(short *)(lVar2 + 0x76) != 0) {
          FUN_029825a0(*(undefined8 *)(lVar3 + 0x38),lVar2,7);
        }
      }
      uVar1 = (ulong)bStack_44;
      if (bStack_46 <= bStack_44) {
        return;
      }
      bStack_44 = bStack_44 + 1;
      lVar2 = local_a0[uVar1];
    }
  }
  return;
}


