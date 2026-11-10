/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ee59c4; name: FUN_02ee59c4
 */


undefined8 * FUN_02ee59c4(long *param_1,ulong param_2,undefined1 *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  
  uVar6 = *(uint *)(param_1 + 1);
  if (uVar6 == 0) {
    lVar3 = 0;
  }
  else {
    iVar4 = 0;
    do {
      iVar1 = iVar4 + (uVar6 >> 1);
      uVar7 = *(ulong *)(*param_1 + (long)iVar1 * 0x28 + 0x20);
      if (uVar7 == param_2) {
        *param_3 = 1;
        return (undefined8 *)(*param_1 + (long)iVar1 * 0x28);
      }
      if (uVar7 < param_2) {
        iVar4 = iVar1 + 1;
      }
      uVar6 = uVar6 - (uVar7 < param_2) >> 1;
    } while (uVar6 != 0);
    lVar3 = (long)iVar4;
  }
  *param_3 = 0;
  if (*param_1 + lVar3 * 0x28 == 0) {
    uVar6 = *(uint *)(param_1 + 1);
    uVar5 = *(uint *)((long)param_1 + 0xc);
    if (uVar6 < uVar5) {
LAB_02ee5a9c:
      if (uVar6 < uVar5) {
        uVar6 = *(uint *)(param_1 + 1);
        *(uint *)(param_1 + 1) = uVar6 + 1;
        puVar2 = (undefined8 *)(*param_1 + (ulong)uVar6 * 0x28);
        if (puVar2 == (undefined8 *)0x0) {
          return (undefined8 *)0x0;
        }
        lVar3 = *param_1 + (ulong)uVar6 * 0x28;
        *(undefined4 *)(lVar3 + 8) = 0;
        *(undefined1 *)(lVar3 + 0xc) = 0;
        *(undefined8 *)(lVar3 + 0x10) = 0;
        *(undefined8 *)(lVar3 + 0x18) = 0;
        *puVar2 = &PTR_LAB_042aaab8;
        goto LAB_02ee5a40;
      }
    }
    else {
      iVar4 = uVar5 + (uVar5 >> 1);
      if (uVar5 == 0) {
        iVar4 = 1;
      }
      uVar7 = FUN_02ee5cb4(param_1,iVar4);
      if ((uVar7 & 1) != 0) {
        uVar5 = *(uint *)((long)param_1 + 0xc);
        goto LAB_02ee5a9c;
      }
    }
    puVar2 = (undefined8 *)0x0;
  }
  else {
    puVar2 = (undefined8 *)FUN_02ee5aec(param_1);
    if (puVar2 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
LAB_02ee5a40:
    puVar2[4] = param_2;
  }
  return puVar2;
}


