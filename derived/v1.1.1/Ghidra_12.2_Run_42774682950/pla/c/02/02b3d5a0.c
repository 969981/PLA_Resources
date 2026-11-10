/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b3d5a0; name: FUN_02b3d5a0
 */


void FUN_02b3d5a0(long *param_1,undefined8 *param_2)

{
  uint *puVar1;
  int iVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  uint *puVar6;
  undefined4 local_6c;
  undefined4 auStack_68 [2];
  
  if ((param_1[1] - *param_1 >> 3) * -0x71c71c71c71c71c7 !=
      ((ulong)(param_2[8] - param_2[7]) >> 2 & 0xffffffff)) {
    FUN_02adb74c(param_1);
  }
  puVar1 = (uint *)param_2[1];
  for (puVar6 = (uint *)*param_2; puVar6 != puVar1; puVar6 = puVar6 + 5) {
    if (puVar6[1] - 2 < 7) {
      lVar3 = (long)(int)puVar6[2];
      switch(puVar6[1]) {
      case 2:
        puVar4 = (undefined4 *)(&DAT_03889e20 + lVar3 * 4);
        break;
      case 3:
        puVar4 = (undefined4 *)(&DAT_0388a300 + lVar3 * 4);
        break;
      case 4:
        puVar4 = (undefined4 *)(&DAT_03889a70 + lVar3 * 4);
        break;
      case 5:
        puVar4 = (undefined4 *)(&DAT_03889320 + lVar3 * 4);
        break;
      case 6:
        puVar4 = (undefined4 *)(&DAT_038896b0 + lVar3 * 4);
        break;
      case 7:
        puVar4 = (undefined4 *)(&DAT_0388a8c8 + lVar3 * 4);
        break;
      case 8:
        puVar4 = (undefined4 *)(&DAT_0388a610 + lVar3 * 4);
      }
      local_6c = *puVar4;
    }
    else {
      local_6c = 1;
    }
    if (puVar6[3] - 2 < 0x35) {
      uVar5 = *(undefined8 *)(&DAT_03a839e0 + (long)(int)(puVar6[3] - 2) * 8);
    }
    else {
      uVar5 = 0;
    }
    auStack_68[0] = (undefined4)uVar5;
    lVar3 = *param_1 + (ulong)*puVar6 * 0x48;
    FUN_02b76540(lVar3,&local_6c,auStack_68);
    iVar2 = FUN_02b59060(uVar5);
    *(int *)(lVar3 + 0x40) = *(int *)(lVar3 + 0x40) + iVar2;
  }
  return;
}


