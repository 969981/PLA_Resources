/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e940d8; name: FUN_02e940d8
 */


/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_02e940d8(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  long lVar8;
  uint *puVar9;
  ulong uVar10;
  char acStack_40 [12];
  uint local_34;
  
  if (param_2 == 0) {
    return 1;
  }
  puVar9 = (uint *)(param_1 + (ulong)*(uint *)(param_1 + 0x28) * 4 + 0x20);
  uVar3 = *puVar9;
  uVar10 = (ulong)param_2;
  if (uVar3 < param_2) {
    bVar4 = (uVar3 & 0x1f) != 0;
    uVar1 = param_2;
    if (bVar4) {
      uVar1 = param_2 + 0x1f;
    }
    uVar2 = 0;
    if (bVar4) {
      uVar2 = 0x20 - (uVar3 & 0x1f);
    }
    lVar8 = (*DAT_0442d140)(0,uVar1,0x20);
    puVar9 = (uint *)(lVar8 + (ulong)uVar2);
    *(long *)(param_1 + 0x40) = lVar8;
    iVar5 = FUN_02e9b7a4(param_1 + 8,puVar9,uVar10,&local_34);
    if (iVar5 == 1 && local_34 == param_2) goto LAB_02e94128;
    (*DAT_0442d158)(0,*(undefined8 *)(param_1 + 0x40));
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  else {
    *puVar9 = uVar3 - param_2;
    puVar9 = *(uint **)(param_1 + 0x58);
    if (puVar9 == (uint *)0x0) {
      puVar9 = *(uint **)(param_1 + 0x18);
      *(ulong *)(param_1 + 0x18) = (long)puVar9 + uVar10;
LAB_02e94128:
      uVar3 = *puVar9;
      goto joined_r0x02e941e0;
    }
  }
  *(ulong *)(param_1 + 0x58) = (long)puVar9 + uVar10;
  uVar3 = *puVar9;
joined_r0x02e941e0:
  if (uVar3 == 0) {
    uVar6 = 1;
    lVar8 = *(long *)(param_1 + 0x40);
  }
  else {
    pcVar7 = strncpy(acStack_40 + -((ulong)(uVar3 + 1) + 0xf & 0x1fffffff0),(char *)(puVar9 + 1),
                     (ulong)uVar3);
    pcVar7[uVar3] = '\0';
    uVar6 = FUN_02e78a60();
    lVar8 = *(long *)(param_1 + 0x40);
  }
  if (lVar8 != 0) {
    (*DAT_0442d158)(0);
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  return uVar6;
}


