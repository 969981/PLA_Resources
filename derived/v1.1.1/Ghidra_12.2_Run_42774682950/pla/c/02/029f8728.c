/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029f8728; name: FUN_029f8728
 */


void FUN_029f8728(long param_1,undefined8 param_2,long *param_3)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_90 [16];
  byte local_80 [4];
  undefined4 local_7c;
  ulong local_78;
  undefined8 local_70;
  undefined7 uStack_68;
  undefined1 local_61;
  undefined6 uStack_60;
  undefined1 uStack_5a;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  lVar5 = *param_3;
  if ((*(byte *)(lVar5 + 0x178) & 7) != 0) {
    uStack_60 = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_61 = 0;
    local_38 = 0;
    uStack_50 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_80[0] = *(byte *)(lVar5 + 0x7d);
    local_7c = 0x1d;
    local_78 = (ulong)local_80[0];
    uStack_5a = 1;
    local_58 = 0x1000000;
    FUN_029da128(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb40),auStack_90,local_80);
    *(byte *)(lVar5 + 0x385) = *(byte *)(lVar5 + 0x385) | 8;
    lVar5 = *param_3;
  }
  bVar1 = *(byte *)(lVar5 + 0x387);
  if ((bVar1 >> 3 & 1) == 0) {
    if ((bVar1 >> 5 & 1) == 0) {
      if ((bVar1 >> 4 & 1) == 0) {
        if ((bVar1 >> 6 & 1) == 0) {
          return;
        }
        lVar2 = 6;
      }
      else {
        lVar2 = 4;
      }
    }
    else {
      lVar2 = 5;
    }
  }
  else {
    lVar2 = 3;
  }
  do {
    do {
      lVar3 = *(long *)(param_1 + 0x20);
      lVar4 = *(long *)(*(long *)(*(long *)(*(long *)(lVar3 + 0x20) + 0x10) + 8) +
                        (ulong)*(byte *)(lVar5 + 0x7d) * 8 + 0x120);
      *(byte *)(lVar4 + 0x387) = *(byte *)(lVar4 + 0x387) & ((byte)(1 << lVar2) ^ 0xff);
      FUN_02a3e6b8(*(undefined8 *)(lVar3 + 0x18),0x1f,*(undefined1 *)(lVar5 + 0x7d));
      bVar1 = *(byte *)(lVar5 + 0x387);
      lVar2 = 3;
    } while ((bVar1 >> 3 & 1) != 0);
    lVar2 = 5;
  } while ((((bVar1 >> 5 & 1) != 0) || (lVar2 = 4, (bVar1 >> 4 & 1) != 0)) ||
          (lVar2 = 6, (bVar1 >> 6 & 1) != 0));
  return;
}


