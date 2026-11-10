/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02baa8b0; name: FUN_02baa8b0
 */


void FUN_02baa8b0(long param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  code *UNRECOVERED_JUMPTABLE;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  undefined4 uVar12;
  
  if (*(char *)(param_1 + 0x90) != '\0') {
    uVar12 = *(undefined4 *)(param_1 + 0x84);
    uVar7 = *(undefined4 *)(param_1 + 0x88);
    uVar8 = *(undefined4 *)(param_1 + 0x8c);
    uVar5 = *(undefined8 *)(param_2 + 0x10);
    UNRECOVERED_JUMPTABLE = DAT_043f0d18;
    goto LAB_02baa8e0;
  }
  *(undefined4 *)(param_2 + 0x358) = *(undefined4 *)(param_1 + 100);
  uVar2 = *(uint *)(param_1 + 100);
  if (uVar2 < 0xc) {
    if ((1 << (ulong)(uVar2 & 0x1f) & 0xc0eU) == 0) {
      if (uVar2 != 0) goto LAB_02baa928;
      uVar12 = *(undefined4 *)(param_1 + 0x68);
      uVar5 = *(undefined8 *)(param_2 + 0x10);
      UNRECOVERED_JUMPTABLE = DAT_043f0db8;
    }
    else {
      uVar12 = *(undefined4 *)(param_1 + 0x6c);
      uVar5 = *(undefined8 *)(param_2 + 0x10);
      UNRECOVERED_JUMPTABLE = DAT_043f0dc0;
    }
    (*UNRECOVERED_JUMPTABLE)(uVar12,uVar5);
  }
LAB_02baa928:
  lVar9 = *(long *)(param_1 + 0x58);
  if (lVar9 == 0) {
    uVar8 = *(undefined4 *)(param_1 + 0x70);
    uVar7 = *(undefined4 *)(param_1 + 0x78);
    if (1 < *(uint *)(param_1 + 0x74)) {
                    /* WARNING: Could not recover jumptable at 0x02baa97c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*DAT_043f0cc8)(*(undefined8 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x358),uVar7,uVar8,
                      *(undefined4 *)(param_1 + 0x80));
      return;
    }
    uVar5 = *(undefined8 *)(param_2 + 0x10);
    uVar12 = *(undefined4 *)(param_2 + 0x358);
    UNRECOVERED_JUMPTABLE = DAT_043f0cb0;
LAB_02baa8e0:
                    /* WARNING: Could not recover jumptable at 0x02baa8e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(uVar5,uVar12,uVar7,uVar8);
    return;
  }
  uVar2 = *(uint *)(lVar9 + 0xa0);
  uVar11 = *(ulong *)(*(long *)(lVar9 + 0x98) + 0x138);
  uVar10 = (uint)uVar11;
  if (uVar2 < 3) {
    uVar10 = uVar10 & uVar2 - 1;
  }
  else {
    iVar4 = 0;
    if ((ulong)uVar2 != 0) {
      iVar4 = (int)(uVar11 / uVar2);
    }
    uVar10 = uVar10 - iVar4 * uVar2;
  }
  pcVar6 = (char *)FUN_02bc0470((long)(int)uVar10,lVar9 + 0x58);
  uVar2 = *(uint *)(param_1 + 0x60);
  cVar3 = *pcVar6;
  if ((*(char *)(param_2 + 0x2c0) == '\0') || (cVar3 == '\0')) {
    if (cVar3 == '\0' || cVar3 == '\0' && *(char *)(param_2 + 0x2c0) == '\0') goto LAB_02baaa50;
    lVar9 = *(long *)(pcVar6 + 8);
  }
  else {
    lVar9 = *(long *)(pcVar6 + 8);
    if (*(long *)(param_2 + 0x2c8) == lVar9) goto LAB_02baaa50;
  }
  lVar1 = 0;
  if (cVar3 != '\0') {
    lVar1 = lVar9;
  }
  *(undefined8 *)(param_2 + 0x2d8) = *(undefined8 *)(lVar1 + 0x40);
  uVar5 = *(undefined8 *)(pcVar6 + 8);
  *(undefined8 *)(param_2 + 0x2c0) = *(undefined8 *)pcVar6;
  *(undefined8 *)(param_2 + 0x2c8) = uVar5;
  if (uVar2 == 8) {
    uVar12 = 0;
LAB_02baaa44:
    *(undefined4 *)(param_2 + 0x2d0) = uVar12;
  }
  else {
    if (uVar2 == 0x10) {
      uVar12 = 1;
      goto LAB_02baaa44;
    }
    if (uVar2 == 0x20) {
      uVar12 = 2;
      goto LAB_02baaa44;
    }
  }
  *(uint *)(param_2 + 0x2b8) = uVar2 >> 3;
LAB_02baaa50:
  if (1 < *(uint *)(param_1 + 0x74)) {
                    /* WARNING: Could not recover jumptable at 0x02baaa8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_043f0cd0)(*(undefined8 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x358),
                    *(undefined4 *)(param_2 + 0x2d0),*(undefined4 *)(param_1 + 0x70),
                    *(long *)(param_2 + 0x2d8) +
                    (ulong)*(uint *)(param_2 + 0x2b8) * (ulong)*(uint *)(param_1 + 0x7c),
                    *(int *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x80));
    return;
  }
  if (*(int *)(param_1 + 0x78) == 0) {
                    /* WARNING: Could not recover jumptable at 0x02baaad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_043f0cb8)(*(undefined8 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x358),
                    *(undefined4 *)(param_2 + 0x2d0),*(undefined4 *)(param_1 + 0x70),
                    *(long *)(param_2 + 0x2d8) +
                    (ulong)*(uint *)(param_2 + 0x2b8) * (ulong)*(uint *)(param_1 + 0x7c));
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x02baaabc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_043f0cc0)();
  return;
}


