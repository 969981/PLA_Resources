/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00423ce0; name: FUN_00423ce0
 */


ulong FUN_00423ce0(undefined8 *param_1,long param_2,ulong param_3,long param_4,long param_5)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  size_t __n;
  byte bVar6;
  byte *pbVar7;
  byte bVar8;
  ulong uVar9;
  
  if ((((param_3 == 0) && (param_2 == 0)) && (param_4 == 0)) && (param_5 == 0)) {
    if (*(int *)(param_1 + 0x11) == -1) {
      return 0;
    }
    uVar4 = FUN_0041c080(*param_1,0,0,0,&DAT_03a046eb);
    if ((int)uVar4 == 0) {
      return uVar4;
    }
    iVar3 = FUN_0041cbf0(*param_1);
    __n = (size_t)iVar3;
  }
  else {
    if (param_4 == 0) {
      if (param_2 == 0) {
        return 1;
      }
    }
    else {
      iVar3 = FUN_0041c080(*param_1,param_4,param_5,0,0);
      if (iVar3 == 0) {
        return 0;
      }
      if (param_2 == 0) {
        return (ulong)(iVar3 != 0);
      }
    }
    lVar5 = FUN_0041c7c0(*param_1);
    if (lVar5 == 0) {
      return 0;
    }
    uVar4 = FUN_0041c380(*param_1,param_3 & 0xffffffff);
    if ((int)uVar4 == 0) {
      return uVar4;
    }
    uVar4 = FUN_0041c080(*param_1,0,0,param_2,&DAT_03a046eb);
    if ((int)uVar4 == 0) {
      return uVar4;
    }
    iVar3 = FUN_0041cbf0(*param_1);
    uVar4 = FUN_0041cc00(*param_1,param_1 + 9,&DAT_03a046eb,iVar3);
    if ((int)uVar4 == 0) {
      return uVar4;
    }
    cVar1 = *(char *)(param_1 + 9);
    uVar2 = iVar3 - 1;
    bVar6 = cVar1 << 1;
    if ((int)uVar2 < 1) {
      uVar4 = 0;
    }
    else {
      uVar4 = (ulong)uVar2;
      pbVar7 = (byte *)((long)param_1 + 0x49);
      uVar9 = uVar4;
      do {
        pbVar7[-0x41] = bVar6 | *pbVar7 >> 7;
        bVar6 = *pbVar7 << 1;
        pbVar7 = pbVar7 + 1;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    bVar8 = 0x87;
    if (iVar3 != 0x10) {
      bVar8 = 0x1b;
    }
    *(byte *)((long)param_1 + uVar4 + 8) = bVar6 ^ bVar8 & cVar1 >> 7;
    cVar1 = *(char *)(param_1 + 1);
    bVar6 = cVar1 << 1;
    if ((int)uVar2 < 1) {
      uVar4 = 0;
    }
    else {
      uVar4 = (ulong)uVar2;
      pbVar7 = (byte *)(param_1 + 5);
      uVar9 = uVar4;
      do {
        uVar9 = uVar9 - 1;
        *pbVar7 = bVar6 | pbVar7[-0x1f] >> 7;
        bVar6 = pbVar7[-0x1f] << 1;
        pbVar7 = pbVar7 + 1;
      } while (uVar9 != 0);
    }
    __n = (size_t)iVar3;
    *(byte *)((long)param_1 + uVar4 + 0x28) = bVar6 ^ bVar8 & cVar1 >> 7;
    FUN_004006a0(param_1 + 9,__n);
    uVar4 = FUN_0041c080(*param_1,0,0,0,&DAT_03a046eb);
    if ((int)uVar4 == 0) {
      return uVar4;
    }
  }
  memset(param_1 + 9,0,__n);
  *(undefined4 *)(param_1 + 0x11) = 0;
  return 1;
}


