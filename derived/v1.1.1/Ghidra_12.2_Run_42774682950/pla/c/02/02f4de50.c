/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f4de50; name: FUN_02f4de50
 */


void FUN_02f4de50(long param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  long lVar7;
  int *local_50;
  undefined4 local_48;
  undefined4 local_44;
  
  FUN_02f4df88(&local_50);
  uVar6 = local_44;
  piVar5 = local_50;
  if (local_50 != (int *)0x0) {
    *local_50 = *local_50 + 1;
  }
  uVar2 = *(uint *)(param_1 + 0x48);
  uVar3 = *(uint *)(param_1 + 0x4c);
  if (uVar2 < uVar3) {
    if (uVar3 <= uVar2) goto LAB_02f4df38;
LAB_02f4dea0:
    uVar3 = *(uint *)(param_1 + 0x48);
    *(uint *)(param_1 + 0x48) = uVar3 + 1;
    puVar1 = (undefined8 *)(*(long *)(param_1 + 0x40) + (ulong)uVar3 * 0x10);
    if (puVar1 == (undefined8 *)0x0) goto LAB_02f4df38;
    lVar7 = *(long *)(param_1 + 0x40) + (ulong)uVar3 * 0x10;
    *puVar1 = piVar5;
    *(undefined4 *)(lVar7 + 8) = local_48;
    *(undefined4 *)(lVar7 + 0xc) = uVar6;
    if (piVar5 == (int *)0x0) goto LAB_02f4df3c;
    *piVar5 = *piVar5 + 1;
  }
  else {
    iVar4 = uVar3 + (uVar3 >> 1);
    if (uVar3 == 0) {
      iVar4 = 1;
    }
    uVar3 = iVar4 + uVar3;
    lVar7 = (*DAT_0442d148)(0,*(undefined8 *)(param_1 + 0x40),(ulong)uVar3 << 4);
    if (lVar7 != 0) {
      *(long *)(param_1 + 0x40) = lVar7;
      *(uint *)(param_1 + 0x4c) = uVar3;
      if (uVar2 < uVar3) goto LAB_02f4dea0;
    }
LAB_02f4df38:
    if (piVar5 == (int *)0x0) goto LAB_02f4df3c;
  }
  iVar4 = *piVar5;
  *piVar5 = iVar4 + -1;
  if (iVar4 + -1 == 0) {
    (*DAT_0442d150)(uVar6,piVar5);
  }
LAB_02f4df3c:
  FUN_02f4cea4(param_1);
  if ((local_50 != (int *)0x0) && (iVar4 = *local_50, *local_50 = iVar4 + -1, iVar4 + -1 == 0)) {
    (*DAT_0442d150)(local_44);
  }
  return;
}


