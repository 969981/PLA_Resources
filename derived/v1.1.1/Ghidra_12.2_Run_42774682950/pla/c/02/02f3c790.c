/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f3c790; name: FUN_02f3c790
 */


void FUN_02f3c790(undefined8 param_1,long param_2,long param_3,uint param_4,uint param_5)

{
  long lVar1;
  long *plVar2;
  int iVar3;
  byte bVar4;
  long lVar5;
  uint uVar6;
  long *plVar7;
  long *plVar8;
  int iVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  
  uVar10 = param_3 - *(long *)(param_2 + 8);
  lVar5 = *(long *)(param_2 + 0x18);
  lVar1 = uVar10 + param_4;
  if (lVar5 == 0) goto LAB_02f3c828;
  bVar4 = *(byte *)(param_2 + 0x44);
  iVar9 = (int)uVar10;
  if ((bVar4 & 1) == 0) {
    if ((((param_5 & 1) == 0) || ((bVar4 >> 2 & 1) != 0)) || ((*(byte *)(lVar5 + 0x5a) & 1) == 0))
    goto LAB_02f3c7e4;
    FUN_02f3c930(param_2,uVar10 & 0xffffffff);
    if ((*(byte *)(param_2 + 0x44) >> 1 & 1) != 0) goto LAB_02f3c7e8;
LAB_02f3c800:
    lVar5 = *(long *)(param_2 + 0x18);
  }
  else {
    if ((*(int *)(param_2 + 0x24) < iVar9) || (lVar1 <= *(int *)(param_2 + 0x24))) {
LAB_02f3c7e4:
      if ((bVar4 >> 1 & 1) == 0) goto LAB_02f3c800;
    }
    else {
      if ((param_5 & 1) == 0) {
        FUN_02f3bf24(lVar5,param_2 + 0x28);
        uVar6 = (uint)*(byte *)(param_2 + 0x44);
      }
      else {
        uVar6 = bVar4 | 4;
        *(char *)(param_2 + 0x44) = (char)uVar6;
      }
      *(byte *)(param_2 + 0x44) = (byte)uVar6 & 0xfe;
      if ((uVar6 >> 1 & 1) == 0) goto LAB_02f3c800;
    }
LAB_02f3c7e8:
    iVar3 = *(int *)(param_2 + 0x34);
    if ((iVar3 < iVar9) || (lVar1 <= iVar3)) goto LAB_02f3c800;
    FUN_02f3c048(*(undefined8 *)(param_2 + 0x18),param_2 + 0x38,iVar3 - iVar9);
    *(byte *)(param_2 + 0x44) = *(byte *)(param_2 + 0x44) & 0xfd;
    lVar5 = *(long *)(param_2 + 0x18);
  }
  if (((lVar5 != 0) && ((*(byte *)(lVar5 + 0x5a) >> 4 & 1) == 0)) &&
     ((*(byte *)(lVar5 + 0x5a) & 3) != 0)) {
    FUN_02f50ed4(param_1,lVar5,uVar10 & 0xffffffff,param_4);
  }
LAB_02f3c828:
  plVar7 = (long *)(param_2 + 0x10);
  if ((long *)*plVar7 != (long *)0x0) {
    plVar12 = (long *)*plVar7;
    plVar11 = (long *)0x0;
    do {
      while (plVar8 = plVar12, lVar1 <= *plVar8) {
        plVar12 = (long *)plVar8[3];
        plVar11 = plVar8;
        if ((long *)plVar8[3] == (long *)0x0) {
          return;
        }
      }
      if ((int)plVar8[1] == 1) {
        FUN_02f38238(plVar8[2]);
      }
      plVar12 = (long *)plVar8[3];
      plVar2 = plVar7;
      if ((long *)*plVar7 != plVar8) {
        plVar2 = plVar11 + 3;
      }
      *plVar2 = (long)plVar12;
      (*DAT_0442d150)(0,plVar8);
    } while (plVar12 != (long *)0x0);
  }
  return;
}


