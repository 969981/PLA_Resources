/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c63254; name: FUN_02c63254
 */


void FUN_02c63254(long param_1,ushort param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  ulong uVar8;
  
  uVar8 = (ulong)param_2;
  iVar5 = FUN_02c6b1c0(*(undefined8 *)(param_1 + 0x98),0);
  uVar1 = *(undefined4 *)(&DAT_03a84cb8 + uVar8 * 4);
  if ((param_2 == 0) || (iVar5 != 0xb8)) {
    bVar4 = param_2 == 1;
    if ((!bVar4) && (iVar5 == 0x22e)) {
      FUN_02c6360c(param_1,0x22e,uVar1,param_3);
      bVar4 = false;
      goto LAB_02c63308;
    }
    if ((param_2 == 2) || (iVar5 != 0x22f)) goto LAB_02c63308;
    FUN_02c6360c(param_1,0x22f,uVar1,param_3);
    uVar7 = *(undefined4 *)(&DAT_03a84cc4 + uVar8 * 4);
    bVar3 = false;
  }
  else {
    FUN_02c6360c(param_1,0xb8,uVar1,param_3);
    bVar4 = param_2 == 1;
LAB_02c63308:
    bVar3 = param_2 == 2;
    uVar7 = *(undefined4 *)(&DAT_03a84cc4 + uVar8 * 4);
    if ((param_2 == 0) || (iVar5 != 0x225)) {
      if (iVar5 == 0x22a && !bVar4) {
        FUN_02c6360c(param_1,0x22a,uVar7,param_3);
        bVar4 = false;
      }
      else if (iVar5 == 0x229 && !bVar3) {
        FUN_02c6360c(param_1,0x229,uVar7,param_3);
        bVar3 = false;
      }
    }
    else {
      FUN_02c6360c(param_1,0x225,uVar7,param_3);
    }
  }
  iVar5 = FUN_02c6b1c0(*(undefined8 *)(param_1 + 0x98),1);
  if ((param_2 == 0) || (iVar5 != 0xb8)) {
    if (!bVar4 && iVar5 == 0x22e) {
      uVar6 = 0x22e;
      goto LAB_02c63430;
    }
    if (!bVar3 && iVar5 == 0x22f) {
      uVar6 = 0x22f;
      goto LAB_02c63430;
    }
    if ((param_2 != 0) && (iVar5 == 0x225)) {
      uVar6 = 0x225;
LAB_02c635d8:
      uVar2 = uVar7;
      goto LAB_02c63438;
    }
    if (!bVar4 && iVar5 == 0x22a) {
      uVar6 = 0x22a;
      goto LAB_02c635d8;
    }
    if (!bVar3 && iVar5 == 0x229) {
      uVar6 = 0x229;
      goto LAB_02c635d8;
    }
  }
  else {
    uVar6 = 0xb8;
LAB_02c63430:
    uVar2 = uVar1;
LAB_02c63438:
    FUN_02c6360c(param_1,uVar6,uVar2,param_3);
  }
  iVar5 = FUN_02c6b1c0(*(undefined8 *)(param_1 + 0x98),2);
  if ((param_2 == 0) || (iVar5 != 0xb8)) {
    if (!bVar4 && iVar5 == 0x22e) {
      uVar6 = 0x22e;
      goto LAB_02c634a8;
    }
    if (!bVar3 && iVar5 == 0x22f) {
      uVar6 = 0x22f;
      goto LAB_02c634a8;
    }
    if ((param_2 != 0) && (iVar5 == 0x225)) {
      uVar6 = 0x225;
LAB_02c635e8:
      uVar2 = uVar7;
      goto LAB_02c634b0;
    }
    if (!bVar4 && iVar5 == 0x22a) {
      uVar6 = 0x22a;
      goto LAB_02c635e8;
    }
    if (!bVar3 && iVar5 == 0x229) {
      uVar6 = 0x229;
      goto LAB_02c635e8;
    }
  }
  else {
    uVar6 = 0xb8;
LAB_02c634a8:
    uVar2 = uVar1;
LAB_02c634b0:
    FUN_02c6360c(param_1,uVar6,uVar2,param_3);
  }
  iVar5 = FUN_02c6b1c0(*(undefined8 *)(param_1 + 0x98),3);
  if ((param_2 == 0) || (iVar5 != 0xb8)) {
    if (bVar4 || iVar5 != 0x22e) {
      if (bVar3 || iVar5 != 0x22f) {
        if ((param_2 == 0) || (iVar5 != 0x225)) {
          if (bVar4 || iVar5 != 0x22a) {
            if (bVar3 || iVar5 != 0x229) {
              return;
            }
            uVar6 = 0x229;
          }
          else {
            uVar6 = 0x22a;
          }
        }
        else {
          uVar6 = 0x225;
        }
        goto LAB_02c63528;
      }
      uVar6 = 0x22f;
    }
    else {
      uVar6 = 0x22e;
    }
  }
  else {
    uVar6 = 0xb8;
  }
  uVar7 = uVar1;
LAB_02c63528:
  FUN_02c6360c(param_1,uVar6,uVar7,param_3);
  return;
}


