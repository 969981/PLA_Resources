/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 033067ac; name: FUN_033067ac
 */


void FUN_033067ac(ulong *param_1,ulong *param_2)

{
  char cVar1;
  ulong uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong *puVar10;
  ulong local_50 [2];
  ulong local_40;
  ulong local_38;
  
  if ((ulong *)*param_2 == (ulong *)0x0) {
    FUN_03306908(param_1);
    return;
  }
  cVar1 = (char)param_1[1];
  if (cVar1 == '\x02') {
    puVar10 = (ulong *)param_1[2];
joined_r0x03306804:
    if ((ulong *)*param_2 == puVar10) {
      return;
    }
LAB_03306808:
    iVar4 = FUN_032e2120(*param_1);
    iVar5 = FUN_032e2120(param_2[1]);
    if (iVar4 == iVar5) {
      iVar4 = FUN_032e2188(*param_1);
      iVar5 = FUN_032e2188(param_2[1]);
      if (((iVar5 <= iVar4) && (uVar6 = FUN_032db770(param_2[1]), (uVar6 & 1) != 0)) &&
         (uVar6 = FUN_032db770(*param_1), (uVar6 & 1) != 0)) {
        if ((char)param_1[1] == '\x02') {
          puVar10 = (ulong *)param_1[2];
        }
        else if ((char)param_1[1] == '\x01') {
          puVar10 = param_1 + 2;
        }
        else {
          puVar10 = (ulong *)0x0;
        }
        uVar6 = *param_1;
        puVar7 = (undefined8 *)FUN_032e20b0(uVar6,0x100);
        if ((puVar7 != (undefined8 *)0x0) && ((code *)*puVar7 != (code *)0x0)) {
          (*(code *)*puVar7)(puVar10,uVar6,1);
        }
        *param_1 = param_2[1];
        goto LAB_03306680;
      }
    }
    FUN_03306908(param_1);
  }
  else {
    if (cVar1 == '\x01') {
      puVar10 = param_1 + 2;
      goto joined_r0x03306804;
    }
    if (cVar1 != '\0') goto LAB_03306808;
  }
  *param_1 = param_2[1];
  FUN_03306530(param_1,param_2);
LAB_03306680:
  FUN_032e42b4(&local_38,*param_1);
  if (1 < local_38) {
    *param_1 = *(ulong *)(*param_1 + 8);
  }
  local_38 = *param_2;
  uVar6 = param_2[1];
  uVar8 = param_2[2];
  if ((uVar8 & 1) != 0) {
    FUN_032e0c28(uVar8 & 0xfffffffffffffffe);
  }
  FUN_032e42b4(local_50,uVar6);
  uVar9 = uVar8;
  if ((1 < local_50[0]) &&
     (uVar3 = FUN_032e2598(uVar6), uVar2 = local_38, local_38 = uVar2, (uVar3 >> 3 & 1) == 0)) {
    if (*(long *)(uVar6 + 8) == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = FUN_032e3508(*(long *)(uVar6 + 8));
      if ((uVar9 & 1) != 0) {
        FUN_032e0c28(uVar9 & 0xfffffffffffffffe);
      }
    }
    local_38 = uVar2;
    if ((uVar8 & 1) != 0) {
      FUN_032e0c40(uVar8 & 0xfffffffffffffffe);
    }
  }
  FUN_032dd9e8(local_50,param_1);
  FUN_032dc480(local_50,&local_38);
  if ((local_40 & 1) != 0) {
    FUN_032e0c40(local_40 & 0xfffffffffffffffe);
  }
  if ((uVar9 & 1) != 0) {
    FUN_032e0c40(uVar9 & 0xfffffffffffffffe);
  }
  return;
}


