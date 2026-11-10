/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0015ea20; name: FUN_0015ea20
 */


undefined8 FUN_0015ea20(long param_1,long param_2)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  uint uVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  
  plVar9 = *(long **)(param_2 + 0x18);
  plVar5 = plVar9 + (long)(1 << (ulong)(*(byte *)(param_2 + 0xb) & 0x1f)) * 4;
  uVar4 = (ulong)*(uint *)(param_2 + 0xc);
  if (*(uint *)(param_2 + 0xc) == 0) {
    uVar8 = 0;
  }
  else {
    lVar10 = 0;
    uVar11 = 0;
    uVar8 = 0;
    lVar7 = *(long *)(param_2 + 0x10);
    if ((*(byte *)(lVar7 + 8) >> 6 & 1) != 0) goto LAB_0015ea9c;
LAB_0015ea7c:
    uVar11 = uVar11 + 1;
    if (uVar11 < uVar4) {
      while( true ) {
        lVar10 = lVar10 + 0x10;
        lVar7 = *(long *)(param_2 + 0x10);
        if ((*(byte *)(lVar7 + lVar10 + 8) >> 6 & 1) == 0) break;
LAB_0015ea9c:
        if ((*(byte *)(*(long *)(lVar7 + lVar10) + 9) & 3) == 0) break;
        FUN_0015cac0(param_1);
        uVar4 = (ulong)*(uint *)(param_2 + 0xc);
        uVar8 = 1;
        uVar11 = uVar11 + 1;
        if (uVar4 <= uVar11) goto LAB_0015eacc;
      }
      goto LAB_0015ea7c;
    }
LAB_0015eacc:
    plVar9 = *(long **)(param_2 + 0x18);
  }
  if (plVar5 <= plVar9) {
    bVar2 = false;
    bVar1 = false;
LAB_0015ebd8:
    if (*(char *)(param_1 + 0x55) == '\0') {
      plVar5 = (long *)(param_1 + 0x78);
    }
    else if (bVar1) {
      plVar5 = (long *)(param_1 + 0x88);
    }
    else {
      if (!bVar2) {
        return uVar8;
      }
      plVar5 = (long *)(param_1 + 0x90);
    }
    *(long *)(param_2 + 0x30) = *plVar5;
    *plVar5 = param_2;
    return uVar8;
  }
  bVar1 = false;
  bVar2 = false;
  uVar3 = *(uint *)(plVar9 + 1);
  uVar6 = *(uint *)(plVar9 + 3);
  if (uVar3 != 0) goto LAB_0015eb20;
LAB_0015eb50:
  if ((uVar6 >> 6 & 1) == 0) goto joined_r0x0015eb10;
  if ((*(byte *)(plVar9[2] + 9) & 3) == 0) goto joined_r0x0015eb10;
  *(undefined4 *)(plVar9 + 3) = 10;
joined_r0x0015eb70:
  plVar9 = plVar9 + 4;
  if (plVar9 < plVar5) {
    do {
      uVar3 = *(uint *)(plVar9 + 1);
      uVar6 = *(uint *)(plVar9 + 3);
      if (uVar3 == 0) goto LAB_0015eb50;
LAB_0015eb20:
      if ((uVar6 >> 6 & 1) == 0) {
LAB_0015eb94:
        if (((uVar3 >> 6 & 1) != 0) && ((*(byte *)(*plVar9 + 9) & 3) != 0)) goto code_r0x0015eba8;
      }
      else {
        if ((uVar6 & 0xf) == 4) {
          if ((*(byte *)(plVar9[2] + 9) & 3) != 0) {
            FUN_0015cac0(param_1);
            uVar3 = *(uint *)(plVar9 + 1);
          }
          goto LAB_0015eb94;
        }
        if ((*(byte *)(plVar9[2] + 9) & 3) == 0) goto LAB_0015eb94;
        if ((uVar3 >> 6 & 1) == 0) {
          bVar2 = true;
        }
        else {
          bVar2 = true;
          if ((*(byte *)(*plVar9 + 9) & 3) != 0) {
            bVar1 = true;
          }
        }
      }
joined_r0x0015eb10:
      plVar9 = plVar9 + 4;
      if (plVar5 <= plVar9) break;
    } while( true );
  }
  goto LAB_0015ebd8;
code_r0x0015eba8:
  FUN_0015cac0(param_1);
  uVar8 = 1;
  goto joined_r0x0015eb70;
}


