/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029ed774; name: FUN_029ed774
 */


void FUN_029ed774(long param_1,long param_2)

{
  byte bVar1;
  ulong uVar2;
  byte *pbVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  byte local_68 [8];
  long local_60;
  undefined1 local_58;
  
  lVar5 = *(long *)(param_1 + 0x48);
  uVar2 = (ulong)*(byte *)(lVar5 + 0xd88);
  if (*(byte *)(lVar5 + 0xd88) != 0) {
    uVar6 = 0;
    uVar7 = 0;
    do {
      if (((((uVar7 & 0xff) < (uint)uVar2) && (*(int *)(lVar5 + uVar6 * 0x60 + 0x10) == 3)) &&
          (*(char *)(lVar5 + uVar6 * 0x60 + 0x28) == '\0')) &&
         (local_60 = *(long *)(lVar5 + uVar6 * 0x60 + 8), *(short *)(local_60 + 0x74) == 0)) {
        local_58 = *(undefined1 *)(lVar5 + uVar6 * 0x60 + 0x27);
        FUN_029eb040(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x13e0),local_68,&local_60);
        if (local_68[0] < 0x1e) {
          bVar1 = *(byte *)(param_2 + 8);
          uVar2 = (ulong)bVar1;
          if (uVar2 == 0) {
            uVar2 = 0;
          }
          else {
            pbVar3 = (byte *)(param_2 + 9);
            uVar4 = uVar2;
            do {
              if (*pbVar3 == local_68[0]) goto LAB_029ed7d0;
              uVar4 = uVar4 - 1;
              pbVar3 = pbVar3 + 1;
            } while (uVar4 != 0);
          }
          *(byte *)(param_2 + uVar2 + 9) = local_68[0];
          *(byte *)(param_2 + 8) = bVar1 + 1;
        }
LAB_029ed7d0:
        *(undefined1 *)(lVar5 + uVar6 * 0x60 + 0x65) = 1;
      }
      uVar2 = (ulong)*(byte *)(lVar5 + 0xd88);
      uVar6 = uVar6 + 1;
      uVar7 = uVar7 + 1;
    } while (uVar6 < uVar2);
  }
  return;
}


