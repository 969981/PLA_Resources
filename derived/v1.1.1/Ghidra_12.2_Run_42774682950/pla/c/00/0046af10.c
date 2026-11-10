/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0046af10; name: FUN_0046af10
 */


undefined8 FUN_0046af10(long *param_1,int param_2,undefined8 param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  long lVar4;
  undefined8 *puVar5;
  code *pcVar6;
  undefined8 uVar7;
  long lVar8;
  int local_1c0 [2];
  undefined8 local_1b8;
  undefined1 auStack_1b0 [24];
  undefined8 auStack_198 [6];
  undefined8 local_168 [35];
  int local_50 [2];
  undefined1 *local_48;
  
  lVar8 = *param_1;
  if (lVar8 == 0) {
LAB_0046b078:
    uVar7 = 0;
  }
  else {
    local_1c0[0] = 0;
    local_1b8 = 0;
    FUN_00400140(*(undefined8 *)(lVar8 + 0x90));
    uVar7 = *(undefined8 *)(lVar8 + 8);
    local_50[0] = param_2;
    if (param_2 == 0) {
LAB_0046af80:
      piVar3 = (int *)0x0;
      FUN_00400160(*(undefined8 *)(lVar8 + 0x90));
      if (param_2 == 2) goto LAB_0046afe0;
LAB_0046af94:
      if (piVar3 == (int *)0x0) goto LAB_0046afe0;
    }
    else {
      if (param_2 == 2) {
        puVar5 = auStack_198;
LAB_0046afa8:
        local_48 = auStack_1b0;
        *puVar5 = param_3;
      }
      else if (param_2 == 1) {
        puVar5 = local_168;
        goto LAB_0046afa8;
      }
      iVar1 = FUN_00407710(uVar7,local_50);
      if (iVar1 == -1) goto LAB_0046af80;
      piVar3 = (int *)FUN_00407970(uVar7);
      FUN_00400160(*(undefined8 *)(lVar8 + 0x90));
      if (param_2 != 2) goto LAB_0046af94;
LAB_0046afe0:
      iVar1 = FUN_00407950(*(undefined8 *)(lVar8 + 0x10));
      if (0 < iVar1) {
        iVar1 = 0;
        do {
          lVar4 = FUN_00407970(*(undefined8 *)(lVar8 + 0x10),iVar1);
          if ((((*(long *)(lVar4 + 8) != 0) &&
               (pcVar6 = *(code **)(*(long *)(lVar4 + 8) + 0x30), pcVar6 != (code *)0x0)) &&
              (*(int *)(lVar4 + 4) == 0)) &&
             (iVar2 = (*pcVar6)(lVar4,param_2,param_3,local_1c0), iVar2 != 0)) {
            piVar3 = local_1c0;
            goto LAB_0046b050;
          }
          iVar1 = iVar1 + 1;
          iVar2 = FUN_00407950(*(undefined8 *)(lVar8 + 0x10));
        } while (iVar1 < iVar2);
      }
      if (piVar3 == (int *)0x0) goto LAB_0046b078;
    }
LAB_0046b050:
    iVar1 = *piVar3;
    *param_4 = iVar1;
    *(undefined8 *)(param_4 + 2) = *(undefined8 *)(piVar3 + 2);
    if (iVar1 == 2) {
      FUN_00466b90();
    }
    else if (iVar1 == 1) {
      FUN_00466c20();
    }
    uVar7 = 1;
  }
  return uVar7;
}


