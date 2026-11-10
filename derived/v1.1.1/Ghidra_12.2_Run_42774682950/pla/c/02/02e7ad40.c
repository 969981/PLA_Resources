/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e7ad40; name: FUN_02e7ad40
 */


void FUN_02e7ad40(undefined8 param_1,long param_2,long param_3)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 local_60;
  undefined1 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_40;
  undefined1 local_38;
  undefined1 local_30;
  undefined8 local_28;
  
  lVar4 = *(long *)(param_3 + 0x18);
  if (*(char *)(lVar4 + 0x48) == '\0') {
    local_50 = *(undefined8 *)(lVar4 + 0x10);
  }
  else {
    local_50 = 0;
  }
  bVar1 = *(byte *)(param_3 + 0x28);
  uVar3 = bVar1 - 0x80;
  local_38 = *(undefined1 *)(param_3 + 0x29);
  if (uVar3 < 0x21 && (1L << ((ulong)uVar3 & 0x3f) & 0x100010001U) != 0) {
    local_30 = *(undefined1 *)(param_3 + 0x2a);
  }
  else {
    local_30 = 0xff;
  }
  local_40 = *(undefined4 *)(lVar4 + 0x3c);
  local_28 = 0;
  local_48 = 0;
  if (bVar1 == 0xe0) {
    FUN_02ee3614((float)((uint)*(byte *)(param_3 + 0x2a) | (uint)*(byte *)(param_3 + 0x2b) << 7) *
                 0.0078125,DAT_0440a160,0x83,&local_50);
  }
  else if (((bVar1 == 0xb0) && (bVar1 = *(byte *)(param_3 + 0x2a), bVar1 != 0x78)) &&
          (bVar1 != 0x7b)) {
    if (bVar1 == 0x79) {
      *(undefined2 *)(param_2 + 0x10) = 0;
      iVar5 = 1;
      local_58 = 0;
      local_60 = 0x400000000;
      do {
        FUN_02ee3548(DAT_0440a160,iVar5,&local_50,&local_60);
        iVar5 = iVar5 + 1;
      } while (iVar5 != 0x86);
    }
    else {
      uVar6 = NEON_ucvtf((uint)*(byte *)(param_3 + 0x2b));
      FUN_02ee3614(uVar6,DAT_0440a160,bVar1 + 1,&local_50);
      if (*(char *)(param_3 + 0x2a) == '@') {
        uVar2 = *(ushort *)(param_2 + 0x10) &
                ((ushort)(1 << (ulong)(*(byte *)(param_3 + 0x29) & 0x1f)) ^ 0xffff);
        *(ushort *)(param_2 + 0x10) = uVar2;
        *(ushort *)(param_2 + 0x10) =
             uVar2 | (ushort)(0x3f < *(byte *)(param_3 + 0x2b)) <<
                     (ulong)(*(byte *)(param_3 + 0x29) & 0x1f);
      }
    }
  }
  return;
}


