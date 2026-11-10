/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f56980; name: FUN_02f56980
 */


undefined8 FUN_02f56980(long param_1,long param_2,int *param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  
  if ((*(byte *)(param_1 + 0x5a) & 0xe) == 0) {
    lVar6 = *(long *)(param_2 + 0x230);
    uVar7 = *(undefined8 *)(param_1 + 0x10);
    if ((*(ushort *)(lVar6 + 0xc) & 0x7c) == 4) {
      iVar4 = *(int *)(lVar6 + 0x20);
    }
    else {
      iVar4 = 0;
    }
    *param_3 = iVar4;
    lVar8 = *(long *)(param_2 + 0x318);
    if (*(short *)(lVar6 + 0x1a) == 0x11) {
      uVar2 = (uint)DAT_042ab268;
      if (*(int *)(lVar8 + 0x18) != 0) {
        uVar2 = (uint)DAT_042ab268 << 2;
      }
      iVar4 = uVar2 + iVar4;
      *param_3 = iVar4;
    }
    uVar2 = 0;
    if (DAT_042ab268 != 0) {
      uVar2 = ((iVar4 + (uint)DAT_042ab268) - 1) / (uint)DAT_042ab268;
    }
    *param_3 = uVar2 * DAT_042ab268;
    iVar4 = FUN_02f52330(uVar7);
    iVar5 = FUN_02f522f8(uVar7);
    if (*param_3 + (iVar5 - iVar4) < *(int *)(lVar8 + 0x10) + *(int *)(lVar8 + 0xc)) {
      uVar1 = *(uint *)(lVar8 + 0x14);
      uVar2 = ((iVar5 - iVar4) - *(int *)(lVar8 + 0xc)) + *param_3 + *(int *)(lVar8 + 0x18);
      uVar3 = 0;
      if (uVar1 != 0) {
        uVar3 = uVar2 / uVar1;
      }
      uVar2 = uVar2 - uVar3 * uVar1;
      *param_4 = uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU);
      return 1;
    }
  }
  return 0;
}


