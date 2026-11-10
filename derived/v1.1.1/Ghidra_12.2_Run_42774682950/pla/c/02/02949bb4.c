/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02949bb4; name: FUN_02949bb4
 */


void FUN_02949bb4(long param_1,long param_2,undefined8 param_3,uint param_4)

{
  uint uVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  short sVar6;
  uint uVar7;
  uint uVar8;
  
  lVar5 = *(long *)(param_1 + 0x10e8);
  if ((lVar5 == 0) || (uVar1 = *(uint *)(param_1 + 0x10f0) & 0x7fffffff, uVar1 == 0)) {
    sVar6 = 0;
  }
  else {
    sVar6 = 0;
    uVar7 = 0;
    do {
      bVar2 = *(byte *)(lVar5 + (ulong)uVar7);
      uVar7 = uVar7 + 1;
      sVar6 = sVar6 + (ushort)(bVar2 >> 7);
      if (uVar1 <= uVar7) break;
      if ((bVar2 & 0x70) == 0x10) {
        if ((bVar2 & 0xf) != 0) {
          uVar8 = 1;
          do {
            uVar7 = uVar7 + (*(byte *)(lVar5 + (ulong)uVar7) & 0x1f) * 8 + 1;
            if ((bVar2 & 0xf) <= uVar8) break;
            uVar8 = uVar8 + 1;
          } while (uVar7 < uVar1);
        }
      }
      else {
        uVar7 = uVar7 + (bVar2 & 0xf);
      }
    } while (uVar7 < uVar1);
  }
  *(short *)(param_1 + 0x1100) = sVar6;
  if (param_4 < 8) {
    uVar3 = *(undefined4 *)(&DAT_038886e0 + (long)(int)param_4 * 4);
  }
  else {
    uVar3 = 2;
  }
  *(undefined4 *)(param_1 + 0x1104) = uVar3;
  if ((((*(short *)(param_2 + 0x122) == 0) ||
       (lVar5 = *(long *)(param_2 + (ulong)*(byte *)(param_2 + 0x130) * 8 + 0x150),
       *(short *)(*(long *)(lVar5 + 0x58) + 0x122) == 0)) ||
      (lVar5 = FUN_02941830(*(long *)(lVar5 + 0x88) + 0x58), 0 < lVar5)) &&
     ((*(short *)(param_2 + 0x124) == 0 || (*(int *)(param_2 + 300) != 2)))) {
    iVar4 = (uint)(param_4 - 3 < 2) << 1;
  }
  else {
    iVar4 = 1;
  }
  *(int *)(param_1 + 0x1108) = iVar4;
  return;
}


