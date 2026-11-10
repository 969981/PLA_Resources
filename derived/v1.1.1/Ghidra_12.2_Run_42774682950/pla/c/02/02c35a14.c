/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c35a14; name: FUN_02c35a14
 */


ulong FUN_02c35a14(long *param_1,uint param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  
  uVar10 = (ulong)param_2;
  if (param_2 == 0xfd) {
    bVar1 = (**(code **)(*param_1 + 0x48))(param_1);
    uVar8 = (uint)(1 < bVar1) << 6;
LAB_02c35b28:
    uVar11 = 0;
    uVar3 = 0;
    uVar4 = 0x20000;
  }
  else {
    if (param_2 == 0xfe) {
      uVar10 = (ulong)*(uint *)((long)param_1 + 0x124);
    }
    else if (param_2 == 0xff) {
      iVar2 = (**(code **)(*param_1 + 0x40))(param_1);
      if (iVar2 != 0) {
        if (iVar2 == 1) {
          uVar10 = 0xff;
          uVar8 = 1;
        }
        else {
          plVar5 = (long *)FUN_00d1603c();
          lVar9 = *plVar5;
          *(long *)PTR_DAT_0437b198 = lVar9;
          uVar8 = (uint)(*(int *)(lVar9 + 0x238) == 5) << 1;
          uVar10 = 0xff;
        }
        goto LAB_02c35b28;
      }
      uVar10 = 0xff;
      uVar4 = 0x20000;
      uVar11 = 0;
      uVar8 = 0;
      uVar3 = 0;
      goto LAB_02c35b2c;
    }
    if (*(uint *)(param_1 + 0x12) <= (uint)uVar10) {
      uVar10 = 0;
      uVar11 = 0;
      goto LAB_02c35bc4;
    }
    lVar9 = param_1[0x13] + uVar10 * 0x18;
    uVar8 = *(uint *)(lVar9 + 8);
    uVar11 = *(uint *)(lVar9 + 0xc);
    uVar3 = uVar8 & 0xff000000;
    uVar4 = uVar8 & 0xff0000;
  }
LAB_02c35b2c:
  uVar3 = *(uint *)((long)param_1 + 300) & *(uint *)((long)param_1 + 0x134) |
          (uVar4 | uVar3 | uVar8 & 0xffff) & ~*(uint *)((long)param_1 + 0x134);
  uVar12 = (ulong)uVar3;
  uVar4 = uVar3 >> 0x10;
  uVar8 = uVar4;
  if ((uVar3 & 0x40) != 0) {
    uVar8 = uVar4 & 0xffe7 | 4;
  }
  uVar13 = uVar12 & 0xff000000;
  if ((uVar3 & 0x20) != 0) {
    uVar8 = uVar4 & 0xffe3 | 8;
  }
  if ((uVar8 >> 1 & 1) == 0) {
    puVar6 = (undefined8 *)FUN_00d1603c();
    uVar7 = *puVar6;
    *(undefined8 *)PTR_DAT_0437b198 = uVar7;
    uVar4 = FUN_02c2d2d8(uVar7,*(undefined8 *)(*(long *)(param_1[0x13] + uVar10 * 0x18) + 0x58));
    uVar12 = (ulong)(uVar3 & 0xffe0 | uVar3 & 3 | (uVar4 & 7) << 2);
  }
  uVar10 = uVar13 | ((ulong)uVar8 & 0xff) << 0x10 | uVar12 & 0xffff;
LAB_02c35bc4:
  return uVar10 | (ulong)uVar11 << 0x20;
}


