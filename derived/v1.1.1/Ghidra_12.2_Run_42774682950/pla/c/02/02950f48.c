/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02950f48; name: FUN_02950f48
 */


void FUN_02950f48(long param_1,ulong param_2)

{
  uint uVar1;
  ushort uVar2;
  undefined4 uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x60);
  FUN_0295107c(param_1,param_1 + 0x2ea,lVar4);
  FUN_02c5fee8(lVar4,*(undefined4 *)(param_1 + 0x6c));
  uVar2 = *(ushort *)(param_1 + 0x74);
  uVar1 = FUN_02c66e84(*(undefined8 *)(lVar4 + 0x98));
  if (uVar2 <= uVar1) {
    uVar1 = (uint)uVar2;
  }
  FUN_02c788b4(*(undefined8 *)(lVar4 + 0x98),uVar1);
  if (*(short *)(param_1 + 0x74) == 0) {
    uVar3 = 0;
  }
  else if ((*(byte *)(param_1 + 0x98) & 7) == 0) {
    if ((*(byte *)(param_1 + 0xa0) & 7) == 0) {
      if ((*(byte *)(param_1 + 0xa8) & 7) == 0) {
        if ((*(byte *)(param_1 + 0xb0) & 7) == 0) {
          if ((*(byte *)(param_1 + 0xb8) & 7) == 0) {
            if ((*(byte *)(param_1 + 0xc0) & 7) == 0) {
              uVar3 = 0;
              if ((*(byte *)(param_1 + 200) & 7) != 0) {
                uVar3 = 7;
              }
            }
            else {
              uVar3 = 6;
            }
          }
          else {
            uVar3 = 5;
          }
        }
        else {
          uVar3 = 4;
        }
      }
      else {
        uVar3 = 3;
      }
    }
    else {
      uVar3 = 2;
    }
  }
  else {
    uVar3 = 1;
  }
  FUN_02c77f1c(*(undefined8 *)(lVar4 + 0x98),uVar3);
  FUN_0294fdb8(param_1);
  if (((*(ushort *)(param_1 + 0x87) >> 5 & 1) == 0) && ((param_2 & 1) == 0)) {
    uVar2 = (ushort)*(byte *)(param_1 + 0x369);
  }
  else {
    uVar2 = *(ushort *)(param_1 + 0x87) & 0x1f;
  }
  FUN_02c62fcc(lVar4,uVar2,0);
  FUN_02c79f04(*(undefined8 *)(lVar4 + 0x98),*(undefined2 *)(param_1 + 0x76));
  return;
}


