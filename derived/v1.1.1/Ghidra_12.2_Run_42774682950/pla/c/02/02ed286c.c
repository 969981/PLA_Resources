/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ed286c; name: FUN_02ed286c
 */


int FUN_02ed286c(long param_1,long param_2,uint param_3,uint param_4)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  byte bVar7;
  
  if ((param_3 & 1) == 0) {
LAB_02ed28c8:
    if (*(char *)(param_2 + 0x1c) == '\0') {
      if ((*(long *)(param_1 + 0x78) == 0) ||
         ((*(byte *)(*(long *)(param_1 + 0x78) + 0x98) & 1) != 0)) {
        if ((param_4 & 1) == 0) {
          iVar2 = FUN_02ed9750(param_1,param_2,param_3 & 1);
        }
        else {
          iVar2 = 1;
        }
      }
      else {
        iVar2 = FUN_02ed9ad0(param_1,param_2,param_3 & 1);
      }
      bVar7 = (byte)((uint)*(undefined4 *)(param_1 + 0xaa) >> 0x1c) & 1;
      *(byte *)(param_2 + 0x1c) = bVar7;
      uVar1 = *(ushort *)(param_2 + 0x18);
    }
    else {
      bVar7 = 1;
      iVar2 = 1;
      uVar1 = *(ushort *)(param_2 + 0x18);
    }
  }
  else {
    uVar1 = *(ushort *)(param_2 + 0x18);
    uVar5 = FUN_02ed55c0(param_1);
    lVar6 = *(long *)(param_1 + 0x78);
    if ((lVar6 != 0) && (*(short *)(lVar6 + 0x90) = *(short *)(lVar6 + 0x90) + 1, (uVar1 & 1) != 0))
    {
      *(short *)(lVar6 + 0x92) = *(short *)(lVar6 + 0x92) + 1;
    }
    if ((uVar5 & 1) != 0) goto LAB_02ed28c8;
    bVar7 = *(byte *)(param_2 + 0x1c);
    iVar2 = 2;
    uVar1 = *(ushort *)(param_2 + 0x18);
  }
  if (((uVar1 & 1) != 0) && (*(long *)(param_1 + 0x88) != 0)) {
    *(ushort *)(param_2 + 0x18) = uVar1 & 0xfffe;
    *(undefined1 *)(param_2 + 0x1c) = 0;
    iVar4 = (**(code **)(**(long **)(param_1 + 0x88) + 0x120))
                      (*(long **)(param_1 + 0x88),param_2,param_3 & 1,param_4 & 1);
    if (iVar4 != 1) {
      if (iVar4 == 0x50) {
        iVar4 = 0x50;
        if (iVar2 != 1) {
          iVar4 = iVar2;
        }
        lVar6 = *(long *)(param_1 + 0x80);
        iVar2 = iVar4;
      }
      else {
        lVar6 = *(long *)(param_1 + 0x80);
        iVar2 = iVar4;
      }
      goto joined_r0x02ed2a18;
    }
  }
  lVar6 = *(long *)(param_1 + 0x80);
joined_r0x02ed2a18:
  iVar4 = iVar2;
  if (lVar6 != 0) {
    *(byte *)(param_2 + 0x1c) = bVar7;
    iVar3 = (**(code **)(**(long **)(param_1 + 0x80) + 0x120))
                      (*(long **)(param_1 + 0x80),param_2,param_3 & 1,param_4 & 1);
    if (iVar3 != 1) {
      if (iVar3 == 0x50) {
        iVar4 = 0x50;
        if (iVar2 != 1) {
          iVar4 = iVar2;
        }
      }
      else {
        iVar4 = iVar3;
      }
    }
  }
  return iVar4;
}


