/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eac964; name: FUN_02eac964
 */


undefined4
FUN_02eac964(uint param_1,int param_2,int param_3,undefined8 param_4,undefined8 param_5,
            undefined8 param_6)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  ulong uVar6;
  long lVar7;
  int *piVar8;
  int *piVar9;
  long lVar10;
  
  uVar4 = DAT_0440a430;
  iVar2 = (param_1 & 0xf | param_2 << 4) + param_3 * 0x10000;
  lVar7 = (ulong)DAT_0440a430 * 0x20;
  piVar8 = DAT_0440a428;
  if ((DAT_0440a430 != 0) && (*DAT_0440a428 != iVar2)) {
    piVar9 = DAT_0440a428;
    lVar10 = lVar7;
    do {
      lVar10 = lVar10 + -0x20;
      if (lVar10 == 0) goto LAB_02eac9ec;
      piVar8 = piVar9 + 8;
      piVar1 = piVar9 + 8;
      piVar9 = piVar8;
    } while (*piVar1 != iVar2);
  }
  if (piVar8 != DAT_0440a428 + (ulong)DAT_0440a430 * 8) {
    return 1;
  }
LAB_02eac9ec:
  piVar8 = DAT_0440a428;
  if (DAT_0440a430 != 0) {
    iVar3 = *DAT_0440a428;
    while (iVar3 != iVar2) {
      lVar7 = lVar7 + -0x20;
      if (lVar7 == 0) goto LAB_02eaca24;
      iVar3 = piVar8[8];
      piVar8 = piVar8 + 8;
    }
  }
  if (piVar8 == DAT_0440a428 + (ulong)DAT_0440a430 * 8) {
LAB_02eaca24:
    piVar8 = DAT_0440a428;
    if (DAT_0440a430 < DAT_0440a434) {
joined_r0x02eacaa4:
      DAT_0440a428 = piVar8;
      if (uVar4 < DAT_0440a434) {
        uVar6 = (ulong)DAT_0440a430;
        DAT_0440a430 = DAT_0440a430 + 1;
        piVar9 = (int *)0x0;
        if (piVar8 + uVar6 * 8 == (int *)0x0) goto LAB_02eaca64;
        piVar8[uVar6 * 8] = iVar2;
        piVar8 = piVar8 + uVar6 * 8;
        goto LAB_02eaca5c;
      }
    }
    else {
      iVar3 = DAT_0440a434 + (DAT_0440a434 >> 1);
      if (DAT_0440a434 == 0) {
        iVar3 = 1;
      }
      uVar6 = FUN_02eacd84(iVar3);
      piVar8 = DAT_0440a428;
      if ((uVar6 & 1) != 0) goto joined_r0x02eacaa4;
    }
    piVar9 = (int *)0x0;
  }
  else {
LAB_02eaca5c:
    piVar9 = piVar8 + 2;
    *(undefined8 *)piVar9 = param_4;
    *(undefined8 *)(piVar8 + 4) = param_5;
    *(undefined8 *)(piVar8 + 6) = param_6;
  }
LAB_02eaca64:
  uVar5 = 1;
  if (piVar9 == (int *)0x0) {
    uVar5 = 2;
  }
  return uVar5;
}


