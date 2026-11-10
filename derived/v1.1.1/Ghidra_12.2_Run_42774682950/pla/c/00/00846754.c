/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00846754; name: FUN_00846754
 */


void FUN_00846754(uint *param_1,long *param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  long local_a8 [5];
  byte local_80;
  ushort local_7e;
  uint local_38 [2];
  
  memset(param_1,0,4);
  lVar2 = FUN_00845d14(param_2[8],0);
  if (lVar2 != 0) {
    iVar5 = 0;
    do {
      lVar2 = FUN_00845d14(param_2[8],iVar5);
      if (*(char *)(lVar2 + 0x648) != '\0') {
        FUN_00845d14(param_2[8],iVar5);
        uVar3 = FUN_007f07d0();
        if (((uVar3 & 1) != 0) &&
           (lVar2 = FUN_00845d14(param_2[8],iVar5), *(short *)(lVar2 + 0x10) != 0)) {
          lVar2 = FUN_00845d14(param_2[8],iVar5);
          if (*(int *)(lVar2 + 0x5fc) == 0xffffff) {
            memset(param_1,0xff,4);
            *param_1 = *param_1 & 0xffffff;
            return;
          }
          lVar2 = FUN_00845d14(param_2[8],iVar5);
          *param_1 = *param_1 | *(uint *)(lVar2 + 0x5fc);
          FUN_00848470(local_a8);
          lVar2 = FUN_00845d14(param_2[8],iVar5);
          if ((*(uint *)(lVar2 + 0x5f8) - 0x1c != (uint)*(byte *)(lVar2 + 0x14)) &&
             (*(byte *)(lVar2 + 0x14) + 0x1c <= *(uint *)(lVar2 + 0x5f8))) {
            uVar6 = 0;
            do {
              uVar4 = FUN_00845d14(param_2[8],iVar5);
              FUN_008484cc(local_a8,uVar4,uVar6);
              if (local_a8[0] == 0) break;
              uVar4 = FUN_0084886c(local_a8);
              (**(code **)(*param_2 + 0x98))(local_38,param_2,uVar4);
              *param_1 = *param_1 | local_38[0];
              iVar7 = 1;
              if ((local_80 & 1) != 0) {
                iVar7 = 2;
              }
              if ((local_80 & 2) != 0) {
                iVar7 = iVar7 + 2;
              }
              if ((local_80 & 4) != 0) {
                iVar7 = iVar7 + 4;
              }
              if ((local_80 & 8) != 0) {
                iVar7 = iVar7 + 8;
              }
              uVar6 = uVar6 + local_7e + iVar7;
              lVar2 = FUN_00845d14(param_2[8],iVar5);
              uVar1 = 0;
              if (*(byte *)(lVar2 + 0x14) + 0x1c <= *(uint *)(lVar2 + 0x5f8)) {
                uVar1 = (*(uint *)(lVar2 + 0x5f8) - (uint)*(byte *)(lVar2 + 0x14)) - 0x1c;
              }
            } while (uVar6 < uVar1);
          }
          FUN_008484c8(local_a8);
        }
      }
      iVar5 = iVar5 + 1;
      lVar2 = FUN_00845d14(param_2[8],iVar5);
    } while (lVar2 != 0);
  }
  return;
}


