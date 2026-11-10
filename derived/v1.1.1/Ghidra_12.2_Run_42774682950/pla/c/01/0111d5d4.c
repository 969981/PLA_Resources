/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0111d5d4; name: FUN_0111d5d4
 */


undefined8 FUN_0111d5d4(long param_1,undefined4 param_2,int param_3)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  undefined1 auStack_40 [16];
  
  FUN_02c4fb44(auStack_40);
  iVar3 = FUN_02c4fc60(auStack_40,0xe);
  if (iVar3 == 0) {
    iVar3 = FUN_0111d778(param_1,param_2);
    if (iVar3 == 0) {
      iVar3 = 6;
      uVar4 = *(uint *)(param_1 + 0x530);
      do {
        if (uVar4 < 6) {
          uVar5 = (ulong)(uVar4 * 0x1e);
          if (*(short *)(param_1 + uVar5 * 4 + 0x68) == 0) {
            return 1;
          }
          if (*(short *)(param_1 + (uVar5 << 2 | 4) + 0x68) == 0) {
            return 1;
          }
          lVar1 = param_1 + uVar5 * 4;
          if (*(short *)(lVar1 + 0x70) == 0) {
            return 1;
          }
          if (*(short *)(lVar1 + 0x74) == 0) {
            return 1;
          }
          if (*(short *)(lVar1 + 0x78) == 0) {
            return 1;
          }
          if (*(short *)(lVar1 + 0x7c) == 0) {
            return 1;
          }
          if (*(short *)(lVar1 + 0x80) == 0) {
            return 1;
          }
          if (*(short *)(lVar1 + 0x84) == 0) {
            return 1;
          }
          if (*(short *)(lVar1 + 0x88) == 0) {
            return 1;
          }
          if (*(short *)(lVar1 + 0x8c) == 0) {
            return 1;
          }
          if (*(short *)(lVar1 + 0x90) == 0) {
            return 1;
          }
          if (*(short *)(lVar1 + 0x94) == 0) {
            return 1;
          }
          if (*(short *)(lVar1 + 0x98) == 0) {
            return 1;
          }
          if (*(short *)(lVar1 + 0x9c) == 0) {
            return 1;
          }
          if (*(short *)(lVar1 + 0xa0) == 0) {
            return 1;
          }
          if (*(short *)(lVar1 + 0xa4) == 0) {
            return 1;
          }
          if (*(short *)(lVar1 + 0xa8) == 0) {
            return 1;
          }
          if (*(short *)(lVar1 + 0xac) == 0) {
            return 1;
          }
          if (*(short *)(lVar1 + 0xb0) == 0) {
            return 1;
          }
          if (*(short *)(lVar1 + 0xb4) == 0) {
            return 1;
          }
          if (*(short *)(lVar1 + 0xb8) == 0) {
            return 1;
          }
          if (*(short *)(lVar1 + 0xbc) == 0) {
            return 1;
          }
          if (*(short *)(lVar1 + 0xc0) == 0) {
            return 1;
          }
          if (*(short *)(lVar1 + 0xc4) == 0) {
            return 1;
          }
          if (*(short *)(lVar1 + 200) == 0) {
            return 1;
          }
          if (*(short *)(lVar1 + 0xcc) == 0) {
            return 1;
          }
          if (*(short *)(lVar1 + 0xd0) == 0) {
            return 1;
          }
          if (*(short *)(lVar1 + 0xd4) == 0) {
            return 1;
          }
          if (*(short *)(lVar1 + 0xd8) == 0) {
            return 1;
          }
          if (*(short *)(lVar1 + 0xdc) == 0) {
            return 1;
          }
        }
        uVar2 = 0;
        if (uVar4 + 1 < 6) {
          uVar2 = uVar4 + 1;
        }
        iVar3 = iVar3 + -1;
        uVar4 = uVar2;
      } while (iVar3 != 0);
    }
    else if ((uint)(iVar3 + param_3) < 1000) {
      return 1;
    }
  }
  return 0;
}


