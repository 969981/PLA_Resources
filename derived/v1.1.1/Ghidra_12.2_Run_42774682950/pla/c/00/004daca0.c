/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004daca0; name: FUN_004daca0
 */


bool FUN_004daca0(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  undefined4 *puVar7;
  code *pcVar8;
  
  iVar3 = *(int *)**(undefined8 **)(param_1 + 0x166);
  if (*param_1 == iVar3) {
    return true;
  }
  piVar5 = (int *)FUN_004dbe50();
  if (iVar3 == *piVar5) {
    puVar7 = &DAT_04181630;
    iVar3 = DAT_04181630;
  }
  else {
    iVar3 = *(int *)**(undefined8 **)(param_1 + 0x166);
    piVar5 = (int *)FUN_004dbee0();
    if (iVar3 != *piVar5) {
      return false;
    }
    puVar7 = &DAT_041816c0;
    iVar3 = DAT_041816c0;
  }
  if (iVar3 == 0) {
    return false;
  }
  piVar5 = puVar7 + 6;
  pcVar8 = *(code **)(puVar7 + 4);
  if (pcVar8 != (code *)0x0) goto LAB_004dad5c;
LAB_004dad4c:
  do {
    piVar6 = piVar5 + 6;
    if (*piVar5 == 0) {
      return false;
    }
    pcVar8 = *(code **)(piVar5 + 4);
    piVar5 = piVar6;
  } while (pcVar8 == (code *)0x0);
LAB_004dad5c:
  piVar6 = (int *)(*pcVar8)();
  iVar3 = *piVar6;
  iVar4 = param_1[0x175];
  if ((iVar4 != 0) && (iVar3 != iVar4)) {
    if ((*(byte *)(*(long *)(*(long *)(param_1 + 2) + 0xc0) + 0x60) >> 3 & 1) == 0) {
      if (iVar3 < iVar4) goto LAB_004dad4c;
    }
    else {
      iVar2 = 0xff00;
      if (iVar3 != 0x100) {
        iVar2 = iVar3;
      }
      iVar1 = 0xff00;
      if (iVar4 != 0x100) {
        iVar1 = iVar4;
      }
      if (iVar1 < iVar2) goto LAB_004dad4c;
    }
  }
  iVar4 = FUN_004e2fc0(param_1,9,0,iVar3,0);
  if (iVar4 != 0) {
    iVar4 = param_1[0x176];
    if ((iVar4 != 0) && (iVar3 != iVar4)) {
      if ((*(byte *)(*(long *)(*(long *)(param_1 + 2) + 0xc0) + 0x60) >> 3 & 1) == 0) {
        if (iVar4 <= iVar3) goto LAB_004dad4c;
      }
      else {
        iVar2 = 0xff00;
        if (iVar3 != 0x100) {
          iVar2 = iVar3;
        }
        iVar3 = 0xff00;
        if (iVar4 != 0x100) {
          iVar3 = iVar4;
        }
        if (iVar2 <= iVar3) goto LAB_004dad4c;
      }
    }
    if (((*(ulong *)(piVar6 + 2) & (ulong)(uint)param_1[0x173]) == 0) &&
       (((*(byte *)(piVar6 + 1) >> 1 & 1) == 0 ||
        ((*(byte *)(*(long *)(param_1 + 0x122) + 0x1e) & 3) == 0)))) {
      return *param_1 == piVar5[-6];
    }
  }
  goto LAB_004dad4c;
}


