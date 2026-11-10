/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f2da48; name: FUN_02f2da48
 */


int FUN_02f2da48(long param_1,long *param_2,byte param_3,byte param_4)

{
  uint *puVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  float fVar10;
  
  lVar9 = param_2[3];
  *(long *)(lVar9 + 0x238) = param_1;
  if ((((param_3 ^ 1) & 1) == 0) && (((param_4 ^ 1) & 1) == 0)) {
    puVar1 = (uint *)(lVar9 + 0x2a3);
    uVar6 = *puVar1;
    if ((uVar6 >> 7 & 1) == 0) {
      *puVar1 = uVar6 | 0x80;
      lVar4 = *(long *)(lVar9 + 0x180);
      if ((*(byte *)(lVar4 + 0xab) >> 4 & 1) == 0) {
        do {
          lVar8 = *(long *)(lVar4 + 0x80);
          if (lVar8 == 0) break;
          lVar4 = lVar8;
        } while ((*(byte *)(lVar8 + 0xab) >> 4 & 1) == 0);
      }
      uVar7 = *(byte *)(lVar4 + 0xc0) >> 3 & 7;
      *(uint *)(param_1 + 0x158) = uVar7;
      uVar6 = *(byte *)(lVar4 + 0xc1) & 0xf;
      if (uVar6 == 3) {
        uVar5 = (**(code **)(**(long **)(lVar9 + 0x180) + 0x230))
                          (*(long **)(lVar9 + 0x180),*(undefined8 *)(lVar9 + 0x228));
        uVar7 = *(uint *)(param_1 + 0x158);
        uVar6 = 1;
        if ((uVar5 & 1) != 0) {
          uVar6 = 2;
        }
      }
      *puVar1 = uVar7 & 7 | uVar6 << 3 | *puVar1 & 0xffffff80;
    }
    else {
      *(uint *)(param_1 + 0x158) = uVar6 & 7;
      uVar6 = *puVar1 >> 3 & 0xf;
    }
    *(uint *)(param_1 + 0x15c) = uVar6;
    if (*(int *)(lVar9 + 0x164) != 0) goto LAB_02f2dad0;
    lVar4 = (*DAT_0442d138)(0,0x68);
    *(long *)(lVar9 + 0x158) = lVar4;
    if (lVar4 != 0) {
      *(undefined4 *)(lVar9 + 0x164) = 1;
      goto LAB_02f2dad0;
    }
    iVar3 = 2;
LAB_02f2dc84:
    (**(code **)(*param_2 + 0x68))(param_2,1);
    (**(code **)*param_2)(param_2);
    (*DAT_0442d150)(5,param_2);
  }
  else {
LAB_02f2dad0:
    if (*(int *)(param_1 + 0x15c) == 0) {
LAB_02f2db84:
      if ((*(byte *)(param_2 + 4) & 1) == 0) {
        iVar3 = (**(code **)(*param_2 + 0x70))
                          (param_2,*(undefined8 *)(lVar9 + 0x2c8),*(undefined4 *)(lVar9 + 0x2d0));
        if (iVar3 == 1) {
          *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) | 1;
        }
        else if (iVar3 != 0x3f) goto LAB_02f2dc84;
      }
      else {
        iVar3 = 1;
      }
    }
    else {
      plVar2 = (long *)(lVar9 + 0x18);
      if ((*(ushort *)(lVar9 + 0x198) & 1) == 0) {
        (**(code **)(*plVar2 + 0x50))(plVar2,0);
      }
      else if ((*(ushort *)(lVar9 + 0x198) >> 4 & 1) != 0) {
        (**(code **)(*plVar2 + 0x58))();
      }
      if (*(float *)(lVar9 + 0x78) * 0.05 < -37.0) {
        fVar10 = 0.0;
      }
      else {
        uVar6 = (uint)(*(float *)(lVar9 + 0x78) * 1393317.6 + 1.0653532e+09);
        fVar10 = (float)(uVar6 & 0x7fffff | 0x3f800000);
        fVar10 = (fVar10 * (fVar10 * 0.32518977 + 0.020805772) + 0.65304345) *
                 (float)(uVar6 & 0xff800000);
      }
      if (DAT_042ac988 < *(float *)(lVar9 + 0xe0) * fVar10) goto LAB_02f2db84;
      if (*(int *)(param_1 + 0x15c) == 1) {
        iVar3 = 3;
        goto LAB_02f2dc84;
      }
      if (((*(int *)(param_1 + 0x158) != 0 | param_3 ^ 1 | param_4 ^ 1) & 1) != 0)
      goto LAB_02f2db84;
      if ((*(int *)(param_1 + 0x15c) != 0) && ((*(byte *)(param_1 + 0x50) & 1) != 0)) {
        FUN_02ecefd4(lVar9);
      }
      *(byte *)(param_1 + 0x50) = *(byte *)(param_1 + 0x50) & 0xfe;
      iVar3 = 1;
    }
    if ((param_3 & 1) == 0) {
      *(long **)(param_1 + 0x130) = param_2;
    }
    else {
      *(long **)(param_1 + 0x128) = param_2;
      lVar4 = 0;
      if (param_2[3] != 0) {
        lVar4 = param_2[3] + 0x18;
      }
      *(long *)(param_1 + 8) = lVar4;
      *(uint *)(lVar9 + 0x2a3) = *(uint *)(lVar9 + 0x2a3) & 0xfdffffff;
    }
  }
  return iVar3;
}


