/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01fa015c; name: FUN_01fa015c
 */


void FUN_01fa015c(long *param_1,byte param_2,int param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  char cVar6;
  bool bVar7;
  bool bVar8;
  long lVar9;
  int iVar10;
  long *local_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  FUN_00956dac(&local_48,*param_1 + 0x1a8);
  lVar9 = FUN_00bd1b18(local_48 + 0x1e,auStack_40);
  if (lVar9 == 0) {
    lVar9 = FUN_00a3e9dc(local_48 + 0x1e,auStack_38);
    if (lVar9 != 0) {
      FUN_02a9d180(lVar9,param_2 & 1);
    }
    goto joined_r0x01fa03ac;
  }
  uVar4 = *(uint *)(lVar9 + 0x214);
  uVar2 = uVar4 & 0xffffffdf;
  if ((param_2 & 1) == 0) {
    uVar2 = uVar4 | 0x20;
  }
  bVar7 = (uVar4 != 0) != (uVar2 != 0);
  if ((((uVar2 == uVar4) || (((uVar2 != 0 ^ param_2) & 1) == 0)) ||
      (iVar3 = *(int *)(lVar9 + 0x21c), iVar3 == 0)) || (*(int *)(lVar9 + 0x224) == param_3)) {
    if (bVar7) goto LAB_01fa026c;
  }
  else {
    if ((param_2 & 1) == 0) {
      bVar8 = iVar3 == 2;
    }
    else {
      bVar8 = (iVar3 == 1 & param_2) != 0;
    }
    if (bVar7 || bVar8) {
LAB_01fa026c:
      if (param_3 < 1) {
        *(undefined8 *)(lVar9 + 0x21c) = 0;
        *(undefined4 *)(lVar9 + 0x224) = 0;
        uVar5 = *(undefined4 *)(lVar9 + 0x22c);
        *(undefined4 *)(lVar9 + 0x228) = uVar5;
        if (uVar2 == 0) {
          *(undefined4 *)(lVar9 + 0x228) = uVar5;
          FUN_01bdb280(uVar5,lVar9);
          if (*(int *)(lVar9 + 0x210) != 0) {
            *(undefined4 *)(lVar9 + 0x210) = 0;
            goto LAB_01fa02ec;
          }
        }
        else {
          *(undefined4 *)(lVar9 + 0x228) = 0;
          FUN_01bdb280(0,lVar9);
          if (*(uint *)(lVar9 + 0x210) != uVar2) {
            *(uint *)(lVar9 + 0x210) = uVar2;
LAB_01fa02ec:
            FUN_01bdb4e8(lVar9);
          }
        }
      }
      else {
        if (uVar2 == 0) {
          if (*(int *)(lVar9 + 0x210) != 0) {
            *(undefined4 *)(lVar9 + 0x210) = 0;
            FUN_01bdb4e8(lVar9);
          }
          iVar10 = 1;
          iVar3 = *(int *)(lVar9 + 0x21c);
        }
        else {
          iVar10 = 2;
          iVar3 = *(int *)(lVar9 + 0x21c);
        }
        if (iVar3 == 0) {
          *(int *)(lVar9 + 0x21c) = iVar10;
          *(undefined4 *)(lVar9 + 0x220) = 0;
          *(int *)(lVar9 + 0x224) = param_3;
          if (iVar10 == 1) {
            *(undefined4 *)(lVar9 + 0x228) = 0;
          }
          else {
            *(undefined4 *)(lVar9 + 0x228) = *(undefined4 *)(lVar9 + 0x22c);
          }
        }
        else if (iVar3 == iVar10) {
          if ((param_3 < *(int *)(lVar9 + 0x224)) &&
             (*(int *)(lVar9 + 0x224) = param_3, param_3 < *(int *)(lVar9 + 0x220))) {
            *(int *)(lVar9 + 0x220) = param_3;
          }
        }
        else {
          *(int *)(lVar9 + 0x21c) = iVar10;
          *(undefined4 *)(lVar9 + 0x220) = 0;
          *(int *)(lVar9 + 0x224) = param_3;
        }
      }
      *(uint *)(lVar9 + 0x214) = uVar2;
      goto joined_r0x01fa03ac;
    }
  }
  *(uint *)(lVar9 + 0x214) = uVar2;
  if ((*(uint *)(lVar9 + 0x210) != uVar2) && (*(int *)(lVar9 + 0x21c) == 0)) {
    *(uint *)(lVar9 + 0x210) = uVar2;
  }
joined_r0x01fa03ac:
  if (local_48 != (long *)0x0) {
    lVar9 = local_48[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar3 = *piVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = iVar3 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar3 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*local_48 + 0x20))();
    }
  }
  return;
}


