/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031a3b30; name: FUN_031a3b30
 */


undefined8
FUN_031a3b30(long param_1,undefined8 param_2,long param_3,int *param_4,int *param_5,long *param_6,
            uint *param_7)

{
  int iVar1;
  uint uVar2;
  short sVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  int local_70 [2];
  int local_68 [2];
  
  iVar1 = *(int *)(param_1 + 0x30);
  sVar3 = *(short *)(param_3 + 10);
  iVar8 = (int)sVar3;
  *(int *)(param_3 + 4) = *param_5 + iVar1;
  uVar2 = *param_7;
  *param_7 = uVar2 + 0x3ea704;
  if (0xffc158fb < uVar2) {
    FUN_033299e0(0xf69c29ca);
  }
  uVar9 = 0;
  if (0 < sVar3) {
    iVar6 = *param_4;
    iVar7 = (int)sVar3;
    do {
      if ((*(byte *)(*(long *)(param_1 + 0xe0) + (long)iVar6 * 0x14 + 0x10) >> 3 & 1) == 0) {
        lVar5 = param_6[1];
        *(int *)(*param_6 + (long)(int)lVar5 * 4) = *param_5 + iVar1;
        *(int *)(param_6 + 1) = (int)lVar5 + 1;
        local_68[0] = *param_5;
        local_70[0] = *param_4;
        FUN_031997c0(param_2,param_1,local_68,local_70);
        *param_5 = *param_5 + 1;
        iVar6 = *param_4 + 1;
        *param_4 = iVar6;
      }
      else {
        lVar5 = param_6[1];
        *(undefined4 *)(*param_6 + (long)(int)lVar5 * 4) = 0xffffffff;
        *(int *)(param_6 + 1) = (int)lVar5 + 1;
        iVar6 = *param_4 + 1;
        *param_4 = iVar6;
        iVar8 = iVar8 + -1;
        uVar9 = 1;
      }
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  uVar4 = sVar3 * 0x492f70;
  uVar2 = *param_7;
  *param_7 = uVar2 + uVar4;
  if (CARRY4(uVar2,uVar4)) {
    FUN_033299e0(0xf69c29ca);
  }
  *(short *)(param_3 + 10) = (short)iVar8;
  if (iVar8 == 0) {
    *(undefined4 *)(param_3 + 4) = 0xffffffff;
  }
  return uVar9;
}


