/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a35ee0; name: FUN_02a35ee0
 */


void FUN_02a35ee0(long *param_1,char param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  
  lVar6 = *(long *)(param_1[6] + 0x70);
  if (*(long *)(lVar6 + 0x28) == 0) {
    uVar4 = *(uint *)(*param_1 + 0x110);
  }
  else {
    uVar3 = *(uint *)(*(long *)(lVar6 + 0x28) + 0xc);
    uVar4 = *(uint *)(*param_1 + 0x110);
    if (5 < (uVar3 & 0xff)) {
      if ((uVar3 & 0xff) < 0xc) {
        lVar10 = 2;
      }
      else if ((uVar3 & 0xff) < 0x12) {
        lVar10 = 1;
      }
      else if ((uVar3 & 0xff) < 0x18) {
        lVar10 = 3;
      }
      else {
        lVar10 = (ulong)((uVar3 & 0xff) < 0x1e) << 2;
      }
      goto joined_r0x02a35f28;
    }
  }
  lVar10 = 0;
joined_r0x02a35f28:
  if (uVar4 < 3) {
    if ((&PTR_DAT_0427cd28)[(int)uVar4][lVar10] != param_2) {
      return;
    }
  }
  else if (param_2 != '\x02') {
    return;
  }
  iVar9 = 0;
  if (*(long *)(lVar6 + 0xe0) != 0) {
    iVar9 = *(int *)(*(long *)(lVar6 + 0xe0) + 0xc);
  }
  if ((iVar9 == param_3) &&
     ((*(long *)(lVar6 + 0x268) == 0 || (*(int *)(*(long *)(lVar6 + 0x268) + 0xc) == 0)))) {
    lVar10 = 100;
    if (param_3 != 1) {
      lVar10 = 0x65;
    }
    lVar11 = *(long *)(lVar6 + lVar10 * 8 + 8);
    if ((lVar11 == 0) || (*(int *)(lVar11 + 0xc) == 0)) {
      lVar7 = *(long *)(lVar6 + 0x1c8);
      lVar6 = 0x800;
      if (uVar4 != 0) {
        lVar6 = 0xaac;
      }
      if ((lVar7 != 0) && (*(char *)(lVar7 + 10) == '\x03')) {
        iVar2 = *(int *)(lVar7 + 0x10);
        iVar5 = *(int *)(lVar7 + 0x14);
        iVar8 = (int)(lVar6 * *(int *)(lVar7 + 0xc) + 0x800U >> 0xc);
        iVar9 = iVar2;
        if (iVar2 <= iVar8) {
          iVar9 = iVar8;
        }
        iVar1 = iVar5;
        if (iVar9 <= iVar5) {
          iVar1 = iVar9;
        }
        if (iVar5 != 0 || iVar2 != 0) {
          iVar8 = iVar1;
        }
        *(int *)(lVar7 + 0xc) = iVar8;
        lVar11 = *(long *)(*(long *)(param_1[6] + 0x70) + lVar10 * 8 + 8);
      }
      if (((lVar11 != 0) && (*(byte *)(lVar11 + 10) < 2)) &&
         (*(undefined4 *)(lVar11 + 0xc) = 1, *(byte *)(lVar11 + 10) == 1)) {
        *(undefined1 *)(lVar11 + 10) = 2;
        return;
      }
    }
  }
  return;
}


