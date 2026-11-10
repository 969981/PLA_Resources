/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001741a0; name: FUN_001741a0
 */


/* WARNING: Removing unreachable block (ram,0x0017449c) */
/* WARNING: Removing unreachable block (ram,0x00174310) */
/* WARNING: Removing unreachable block (ram,0x00174704) */

void FUN_001741a0(undefined8 *param_1,long param_2,long param_3)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  uint local_48;
  undefined4 uStack_44;
  
  lVar2 = FUN_00174860();
  if (lVar2 != 0) {
    param_3 = lVar2;
  }
  *(long *)(param_2 + 0x68) = param_3;
  lVar2 = FUN_00179140(param_1[1],&local_48,4);
  if (lVar2 != 0) goto LAB_0017480c;
  *(uint *)(param_2 + 0x28) = local_48;
  lVar2 = FUN_00179140(param_1[1],&local_48,4);
  if (lVar2 != 0) goto LAB_0017480c;
  *(uint *)(param_2 + 0x2c) = local_48;
  lVar2 = FUN_00179140(param_1[1],&local_48,1);
  if (lVar2 != 0) goto LAB_0017480c;
  *(undefined1 *)(param_2 + 10) = (undefined1)local_48;
  lVar2 = FUN_00179140(param_1[1],&local_48,1);
  if (lVar2 != 0) goto LAB_0017480c;
  *(undefined1 *)(param_2 + 0xb) = (undefined1)local_48;
  lVar2 = FUN_00179140(param_1[1],&local_48,1);
  if (lVar2 != 0) goto LAB_0017480c;
  *(undefined1 *)(param_2 + 0xc) = (undefined1)local_48;
  lVar2 = FUN_00179140(param_1[1],&local_48,4);
  uVar6 = local_48;
  if (lVar2 != 0) goto LAB_0017480c;
  lVar2 = (long)(int)local_48;
  uVar3 = FUN_00161510(*param_1,0,0,lVar2 << 2);
  *(undefined8 *)(param_2 + 0x38) = uVar3;
  *(uint *)(param_2 + 0x18) = uVar6;
  lVar2 = FUN_00179140(param_1[1],uVar3,lVar2 << 2);
  if ((lVar2 != 0) || (lVar2 = FUN_00179140(param_1[1],&local_48,4), uVar6 = local_48, lVar2 != 0))
  goto LAB_0017480c;
  lVar2 = FUN_00161510(*param_1,0,0,(long)(int)local_48 << 4);
  *(long *)(param_2 + 0x30) = lVar2;
  *(uint *)(param_2 + 0x14) = uVar6;
  if (0 < (int)uVar6) {
    uVar8 = (ulong)uVar6;
    *(undefined4 *)(lVar2 + 8) = 0;
    if (uVar6 != 1) {
      if (uVar6 == 2) {
        lVar2 = 1;
      }
      else {
        lVar4 = 0;
        lVar2 = 1;
        do {
          *(undefined4 *)(*(long *)(param_2 + 0x30) + lVar4 + 0x18) = 0;
          lVar2 = lVar2 + 2;
          lVar9 = *(long *)(param_2 + 0x30) + lVar4;
          lVar4 = lVar4 + 0x20;
          *(undefined4 *)(lVar9 + 0x28) = 0;
        } while (uVar8 - ((ulong)(uVar6 - 1) & 1) != lVar2);
        if ((uVar6 - 1 & 1) == 0) goto LAB_00174358;
      }
      *(undefined4 *)(*(long *)(param_2 + 0x30) + lVar2 * 0x10 + 8) = 0;
    }
LAB_00174358:
    lVar2 = 0;
    do {
      lVar9 = *(long *)(param_2 + 0x30);
      lVar4 = FUN_00179140(param_1[1],&local_48,1);
      if (lVar4 != 0) goto LAB_0017480c;
      uVar6 = 0;
      switch((undefined1)local_48) {
      case 0:
        break;
      case 1:
        lVar4 = FUN_00179140(param_1[1],&local_48,1);
        if (lVar4 != 0) goto LAB_0017480c;
        *(uint *)(lVar9 + lVar2) = local_48 & 0xff;
        uVar6 = 1;
        break;
      default:
        goto switchD_001743c8_caseD_2;
      case 3:
        lVar4 = FUN_00179140(param_1[1],&local_48,8);
        if (lVar4 != 0) goto LAB_0017480c;
        *(ulong *)(lVar9 + lVar2) = CONCAT44(uStack_44,local_48);
        uVar6 = 3;
        break;
      case 4:
      case 0x14:
        lVar4 = FUN_00174860(param_1);
        *(long *)(lVar9 + lVar2) = lVar4;
        uVar6 = *(byte *)(lVar4 + 8) | 0x40;
        break;
      case 0x13:
        lVar4 = FUN_00179140(param_1[1],&local_48,8);
        if (lVar4 != 0) goto LAB_0017480c;
        *(ulong *)(lVar9 + lVar2) = CONCAT44(uStack_44,local_48);
        uVar6 = 0x13;
      }
      *(uint *)(lVar9 + lVar2 + 8) = uVar6;
switchD_001743c8_caseD_2:
      lVar2 = lVar2 + 0x10;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  lVar2 = FUN_00179140(param_1[1],&local_48,4);
  uVar6 = local_48;
  if (lVar2 != 0) goto LAB_0017480c;
  puVar5 = (undefined8 *)FUN_00161510(*param_1,0,0,(long)(int)local_48 << 4);
  *(undefined8 **)(param_2 + 0x58) = puVar5;
  *(uint *)(param_2 + 0x10) = uVar6;
  if (0 < (int)uVar6) {
    uVar8 = (ulong)uVar6;
    *puVar5 = 0;
    if (uVar6 != 1) {
      if (uVar6 == 2) {
        lVar2 = 1;
      }
      else {
        lVar4 = 0;
        lVar2 = 1;
        do {
          *(undefined8 *)(*(long *)(param_2 + 0x58) + lVar4 + 0x10) = 0;
          lVar2 = lVar2 + 2;
          lVar9 = *(long *)(param_2 + 0x58) + lVar4;
          lVar4 = lVar4 + 0x20;
          *(undefined8 *)(lVar9 + 0x20) = 0;
        } while (uVar8 - ((ulong)(uVar6 - 1) & 1) != lVar2);
        if ((uVar6 - 1 & 1) == 0) goto LAB_001744e4;
      }
      *(undefined8 *)(*(long *)(param_2 + 0x58) + lVar2 * 0x10) = 0;
    }
LAB_001744e4:
    lVar2 = 0;
    do {
      lVar4 = FUN_00179140(param_1[1],&local_48,1);
      if (lVar4 != 0) goto LAB_0017480c;
      *(undefined1 *)(*(long *)(param_2 + 0x58) + lVar2 + 8) = (undefined1)local_48;
      lVar4 = FUN_00179140(param_1[1],&local_48,1);
      if (lVar4 != 0) goto LAB_0017480c;
      lVar4 = *(long *)(param_2 + 0x58) + lVar2;
      uVar8 = uVar8 - 1;
      lVar2 = lVar2 + 0x10;
      *(undefined1 *)(lVar4 + 9) = (undefined1)local_48;
    } while (uVar8 != 0);
  }
  lVar2 = FUN_00179140(param_1[1],&local_48,4);
  uVar6 = local_48;
  if (lVar2 != 0) goto LAB_0017480c;
  puVar5 = (undefined8 *)FUN_00161510(*param_1,0,0,(long)(int)local_48 << 3);
  *(undefined8 **)(param_2 + 0x40) = puVar5;
  *(uint *)(param_2 + 0x20) = uVar6;
  if (0 < (int)uVar6) {
    uVar8 = (ulong)uVar6;
    *puVar5 = 0;
    if (uVar6 != 1) {
      uVar7 = (ulong)(uVar6 - 1) & 3;
      if (uVar8 - 2 < 3) {
        lVar4 = 1;
      }
      else {
        lVar2 = 0;
        do {
          lVar4 = lVar2;
          lVar2 = lVar4 * 8;
          *(undefined8 *)(*(long *)(param_2 + 0x40) + lVar2 + 8) = 0;
          *(undefined8 *)(*(long *)(param_2 + 0x40) + lVar2 + 0x10) = 0;
          *(undefined8 *)(*(long *)(param_2 + 0x40) + lVar2 + 0x18) = 0;
          *(undefined8 *)(*(long *)(param_2 + 0x40) + lVar2 + 0x20) = 0;
          lVar2 = lVar4 + 4;
        } while (~uVar7 + uVar8 != lVar4 + 4);
        lVar4 = lVar4 + 5;
      }
      if ((uVar6 - 1 & 3) != 0) {
        lVar4 = lVar4 << 3;
        do {
          *(undefined8 *)(*(long *)(param_2 + 0x40) + lVar4) = 0;
          uVar7 = uVar7 - 1;
          lVar4 = lVar4 + 8;
        } while (uVar7 != 0);
      }
    }
    if (0 < (int)uVar6) {
      uVar7 = 0;
      do {
        uVar3 = FUN_0015c910(*param_1);
        *(undefined8 *)(*(long *)(param_2 + 0x40) + uVar7 * 8) = uVar3;
        FUN_001741a0(param_1,*(undefined8 *)(*(long *)(param_2 + 0x40) + uVar7 * 8),
                     *(undefined8 *)(param_2 + 0x68));
        uVar7 = uVar7 + 1;
      } while (uVar8 != uVar7);
    }
  }
  lVar2 = FUN_00179140(param_1[1],&local_48,4);
  uVar6 = local_48;
  if (lVar2 != 0) goto LAB_0017480c;
  lVar2 = (long)(int)local_48;
  uVar3 = FUN_00161510(*param_1,0,0,lVar2 << 2);
  *(undefined8 *)(param_2 + 0x48) = uVar3;
  *(uint *)(param_2 + 0x1c) = uVar6;
  lVar2 = FUN_00179140(param_1[1],uVar3,lVar2 << 2);
  if ((lVar2 != 0) || (lVar2 = FUN_00179140(param_1[1],&local_48,4), uVar6 = local_48, lVar2 != 0))
  goto LAB_0017480c;
  puVar5 = (undefined8 *)FUN_00161510(*param_1,0,0,(long)(int)local_48 << 4);
  *(undefined8 **)(param_2 + 0x50) = puVar5;
  *(uint *)(param_2 + 0x24) = uVar6;
  if (0 < (int)uVar6) {
    uVar8 = (ulong)uVar6;
    *puVar5 = 0;
    if (uVar6 != 1) {
      if (uVar6 == 2) {
        lVar2 = 1;
      }
      else {
        lVar4 = 0;
        lVar2 = 1;
        do {
          *(undefined8 *)(*(long *)(param_2 + 0x50) + lVar4 + 0x10) = 0;
          lVar2 = lVar2 + 2;
          lVar9 = *(long *)(param_2 + 0x50) + lVar4;
          lVar4 = lVar4 + 0x20;
          *(undefined8 *)(lVar9 + 0x20) = 0;
        } while (uVar8 - ((ulong)(uVar6 - 1) & 1) != lVar2);
        if ((uVar6 - 1 & 1) == 0) goto LAB_0017474c;
      }
      *(undefined8 *)(*(long *)(param_2 + 0x50) + lVar2 * 0x10) = 0;
    }
LAB_0017474c:
    lVar2 = 0;
    do {
      uVar3 = FUN_00174860(param_1);
      *(undefined8 *)(*(long *)(param_2 + 0x50) + lVar2) = uVar3;
      lVar4 = FUN_00179140(param_1[1],&local_48,4);
      if (lVar4 != 0) goto LAB_0017480c;
      *(uint *)(*(long *)(param_2 + 0x50) + lVar2 + 8) = local_48;
      lVar4 = FUN_00179140(param_1[1],&local_48,4);
      if (lVar4 != 0) goto LAB_0017480c;
      lVar4 = *(long *)(param_2 + 0x50) + lVar2;
      uVar8 = uVar8 - 1;
      lVar2 = lVar2 + 0x10;
      *(uint *)(lVar4 + 0xc) = local_48;
    } while (uVar8 != 0);
  }
  lVar2 = FUN_00179140(param_1[1],&local_48,4);
  if (lVar2 == 0) {
    uVar8 = (ulong)local_48;
    if (0 < (int)local_48) {
      lVar2 = 0;
      do {
        uVar3 = FUN_00174860(param_1);
        *(undefined8 *)(*(long *)(param_2 + 0x58) + lVar2) = uVar3;
        uVar8 = uVar8 - 1;
        lVar2 = lVar2 + 0x10;
      } while (uVar8 != 0);
    }
    return;
  }
LAB_0017480c:
  FUN_00174820(param_1,"truncated");
                    /* WARNING: Does not return */
  pcVar1 = (code *)UndefinedInstructionException(0,0x17481c);
  (*pcVar1)();
}


