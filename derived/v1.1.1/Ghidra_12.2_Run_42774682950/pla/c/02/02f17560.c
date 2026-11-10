/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f17560; name: FUN_02f17560
 */


void FUN_02f17560(uint param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  uint local_48;
  uint uStack_44;
  
  local_48 = 0xffffffff;
  uStack_44 = 0xffffffff;
  FUN_02f17a04(param_1 & 1,&uStack_44,&local_48);
  uVar1 = uStack_44;
  if (local_48 <= uStack_44) {
    uVar1 = local_48;
  }
  if (DAT_0440ae38 <= uVar1) {
    uVar1 = DAT_0440ae38;
  }
  if (uVar1 != 0) {
    uVar5 = 0;
    do {
      lVar2 = *(long *)(DAT_0440ae30 + uVar5 * 8);
      if (*(int *)(lVar2 + 0x194) == 0x2b) {
        FUN_02f16c00(lVar2,lVar2 + 0x168);
        if (*(int *)(lVar2 + 0x194) == 0x2e) {
          *(undefined4 *)(*(long *)(lVar2 + 8) + 0x110) = 0x42ca0000;
        }
        else {
          lVar3 = *(long *)(lVar2 + 0x58);
          if (lVar3 != 0) {
            for (lVar4 = *(long *)(lVar2 + 0x28); lVar4 != 0; lVar4 = *(long *)(lVar4 + 0x48)) {
              if ((*(long *)(lVar4 + 0x20) != 0) && ((~*(byte *)(lVar4 + 0x168) & 3) != 0)) {
                FUN_02f295dc(*(undefined8 *)(lVar4 + 0x58),lVar3,lVar4);
              }
            }
          }
          (**(code **)(*(long *)(lVar2 + 0x68) + 0x18))((long *)(lVar2 + 0x68));
          *(undefined8 *)(lVar2 + 0x58) = 0;
        }
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar1);
  }
  FUN_02f17da8();
  return;
}


