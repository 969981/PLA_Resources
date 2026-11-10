/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00824398; name: FUN_00824398
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_00824398(long param_1,ulong param_2,byte *param_3,ulong param_4,ulong *param_5)

{
  ulong uVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  byte *pbVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  if (param_4 == 0) {
    uVar4 = 0;
joined_r0x00824744:
    if (param_5 != (ulong *)0x0) {
      *param_5 = uVar4;
    }
    return 1;
  }
  uVar4 = 0;
  uVar5 = 0;
  if (*param_3 < 0x20) goto LAB_008243d4;
LAB_008244c0:
  pbVar6 = param_3;
  uVar8 = uVar5;
LAB_008244c8:
  uVar5 = uVar8 + 4;
  do {
    if (param_4 < uVar5) {
      return 0;
    }
    bVar2 = *pbVar6;
    uVar7 = bVar2 - 0x41;
    if (uVar7 < 0x1a) {
LAB_0082441c:
      bVar2 = pbVar6[1];
joined_r0x008244f4:
      uVar10 = (uint)bVar2;
      uVar9 = uVar10 - 0x41;
      if (uVar9 < 0x1a) goto LAB_0082442c;
LAB_008244f8:
      if (uVar10 - 0x61 < 0x1a) {
        uVar9 = uVar10 - 0x47;
        bVar2 = pbVar6[2];
        goto joined_r0x00824514;
      }
      if (9 < uVar10 - 0x30) {
        if (uVar10 < 0x2f) {
          uVar9 = 0x3e;
          if ((uVar10 == 0x2b) || (uVar10 == 0x2d)) goto LAB_0082442c;
        }
        else if ((uVar10 == 0x5f) || (uVar10 == 0x2f)) {
          uVar9 = 0x3f;
          bVar2 = pbVar6[2];
          goto joined_r0x008246a4;
        }
        uVar9 = 0;
        goto LAB_0082442c;
      }
      uVar9 = uVar10 + 4;
      bVar2 = pbVar6[2];
joined_r0x008246a4:
      uVar11 = (uint)bVar2;
      uVar10 = uVar11 - 0x41;
      if (0x19 < uVar10) goto LAB_00824518;
LAB_0082443c:
      bVar2 = pbVar6[3];
    }
    else {
      uVar9 = (uint)bVar2;
      if (bVar2 - 0x61 < 0x1a) {
        uVar7 = uVar9 - 0x47;
        bVar2 = pbVar6[1];
        goto joined_r0x008244f4;
      }
      uVar10 = (uint)bVar2;
      if (uVar10 - 0x30 < 10) {
        uVar7 = uVar10 + 4;
        bVar2 = pbVar6[1];
        goto joined_r0x008244f4;
      }
      if (uVar10 < 0x2f) {
        uVar7 = 0x3e;
        if ((uVar9 == 0x2b) || (uVar10 == 0x2d)) goto LAB_0082441c;
LAB_008246f4:
        uVar7 = 0;
        bVar2 = pbVar6[1];
      }
      else {
        if ((uVar10 != 0x5f) && (uVar9 != 0x2f)) goto LAB_008246f4;
        uVar7 = 0x3f;
        bVar2 = pbVar6[1];
      }
      uVar10 = (uint)bVar2;
      uVar9 = uVar10 - 0x41;
      if (0x19 < uVar9) goto LAB_008244f8;
LAB_0082442c:
      bVar2 = pbVar6[2];
joined_r0x00824514:
      uVar10 = bVar2 - 0x41;
      uVar11 = (uint)bVar2;
      if (uVar10 < 0x1a) goto LAB_0082443c;
LAB_00824518:
      if (uVar11 - 0x61 < 0x1a) {
        uVar10 = uVar11 - 0x47;
        bVar2 = pbVar6[3];
      }
      else if (uVar11 - 0x30 < 10) {
        uVar10 = uVar11 + 4;
        bVar2 = pbVar6[3];
      }
      else {
        if (uVar11 < 0x2f) {
          uVar10 = 0x3e;
          if ((uVar11 == 0x2b) || (uVar11 == 0x2d)) goto LAB_0082443c;
        }
        else if ((uVar11 == 0x5f) || (uVar11 == 0x2f)) {
          uVar10 = 0x3f;
          bVar2 = pbVar6[3];
          goto joined_r0x00824724;
        }
        uVar10 = 0x40;
        bVar2 = pbVar6[3];
      }
    }
joined_r0x00824724:
    uVar3 = (uint)bVar2;
    uVar11 = uVar3 - 0x41;
    if (0x19 < uVar11) {
      if (uVar3 - 0x61 < 0x1a) {
        uVar11 = uVar3 - 0x47;
      }
      else if (uVar3 - 0x30 < 10) {
        uVar11 = uVar3 + 4;
      }
      else if (uVar3 < 0x2f) {
        uVar11 = 0x3e;
        if ((uVar3 != 0x2b) && (uVar3 != 0x2d)) goto LAB_0082472c;
      }
      else if ((uVar3 == 0x5f) || (uVar3 == 0x2f)) {
        uVar11 = 0x3f;
      }
      else {
LAB_0082472c:
        uVar11 = 0x40;
      }
    }
    if (param_2 <= uVar4) {
      return 0;
    }
    uVar10 = uVar10 & 0x7f;
    uVar8 = uVar4 + 1;
    *(byte *)(param_1 + uVar4) = (byte)((uVar9 & 0x3f) >> 4) | (byte)(uVar7 << 2);
    if (uVar10 < 0x40) {
      if (param_2 <= uVar8) {
        return 0;
      }
      uVar1 = uVar4 + 2;
      *(byte *)(param_1 + uVar8) = (byte)(uVar10 >> 2) | (byte)((uVar9 & 0x3f) << 4);
      uVar8 = uVar1;
      if ((uVar11 & 0x7f) < 0x40) {
        if (param_2 <= uVar1) {
          return 0;
        }
        *(byte *)(param_1 + uVar1) = (byte)(uVar11 & 0x7f) | (byte)(uVar10 << 6);
        uVar8 = uVar4 + 3;
      }
    }
    uVar4 = uVar8;
    if (param_4 <= uVar5) goto joined_r0x00824744;
    param_3 = pbVar6 + 4;
    if (0x1f < *param_3) goto LAB_008244c0;
LAB_008243d4:
    uVar8 = uVar5 + 1;
    if (param_4 <= uVar8) goto joined_r0x00824744;
    pbVar6 = param_3 + 1;
    if (0x1f < *pbVar6) goto LAB_008244c8;
    if (param_4 <= uVar5 + 2) goto joined_r0x00824744;
    pbVar6 = param_3 + 2;
    uVar5 = uVar5 + 6;
  } while( true );
}


