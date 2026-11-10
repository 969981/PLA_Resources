/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f32724; name: FUN_02f32724
 */


undefined8 FUN_02f32724(short *param_1,short *param_2,int param_3,ulong param_4,ulong param_5)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  
  if (param_3 != 0) {
    param_5 = param_5 & 0xffffffff;
    do {
      iVar6 = (int)*param_1;
      lVar5 = 4;
      uVar7 = (ulong)*(byte *)(param_1 + 1);
      *param_2 = *param_1;
      do {
        bVar1 = *(byte *)((long)param_1 + lVar5);
        iVar2 = ((bVar1 & 7) << 1 | 1) * *(int *)(&DAT_03aa0c24 + uVar7 * 4);
        uVar4 = *(int *)(&DAT_03aa0be4 + ((ulong)bVar1 & 0xf) * 4) + (int)uVar7;
        lVar5 = lVar5 + 1;
        iVar3 = iVar2 + 7;
        if (-1 < iVar2) {
          iVar3 = iVar2;
        }
        iVar2 = -(iVar3 >> 3);
        if ((bVar1 & 8) == 0) {
          iVar2 = iVar3 >> 3;
        }
        iVar2 = iVar2 + iVar6;
        iVar3 = -0x8000;
        if (-0x8001 < iVar2) {
          iVar3 = 0x7fff;
        }
        if (iVar2 == (short)iVar2) {
          iVar3 = iVar2;
        }
        if (0x57 < (int)uVar4) {
          uVar4 = 0x58;
        }
        param_2[param_5] = (short)iVar3;
        param_2 = param_2 + param_5 * 2;
        uVar4 = uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU);
        iVar2 = ((bVar1 >> 4 & 7) << 1 | 1) * *(int *)(&DAT_03aa0c24 + (ulong)uVar4 * 4);
        iVar6 = iVar2 + 7;
        if (-1 < iVar2) {
          iVar6 = iVar2;
        }
        iVar2 = -(iVar6 >> 3);
        if ((bVar1 & 0x80) == 0) {
          iVar2 = iVar6 >> 3;
        }
        iVar3 = iVar3 + iVar2;
        iVar6 = -0x8000;
        if (-0x8001 < iVar3) {
          iVar6 = 0x7fff;
        }
        if (iVar3 == (short)iVar3) {
          iVar6 = iVar3;
        }
        iVar3 = *(int *)(&DAT_03aa0be4 + (ulong)(bVar1 >> 4) * 4);
        *param_2 = (short)iVar6;
        uVar4 = uVar4 + iVar3;
        if (0x57 < (int)uVar4) {
          uVar4 = 0x58;
        }
        uVar7 = (ulong)(uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU));
      } while ((int)lVar5 != 0x23);
      iVar2 = *(int *)(&DAT_03aa0c24 + uVar7 * 4) *
              ((*(byte *)((long)param_1 + lVar5) & 7) << 1 | 1);
      iVar3 = iVar2 + 7;
      if (-1 < iVar2) {
        iVar3 = iVar2;
      }
      iVar2 = -(iVar3 >> 3);
      if ((*(byte *)((long)param_1 + lVar5) & 8) == 0) {
        iVar2 = iVar3 >> 3;
      }
      iVar2 = iVar2 + iVar6;
      iVar6 = 0x7fff;
      if (iVar2 < -0x8000) {
        iVar6 = 0x8000;
      }
      if (iVar2 == (short)iVar2) {
        iVar6 = iVar2;
      }
      param_2[param_5] = (short)iVar6;
      param_3 = param_3 + -1;
      param_2 = param_2 + param_5 * 2;
      param_1 = (short *)((long)param_1 + (param_4 & 0xffffffff));
    } while (param_3 != 0);
  }
  return 1;
}


