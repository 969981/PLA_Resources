/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00445600; name: FUN_00445600
 */


/* WARNING: Type propagation algorithm not settling */

int FUN_00445600(long *param_1)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  char *pcVar6;
  code *pcVar7;
  
  if ((*(code **)(*param_1 + 8) != (code *)0x0) &&
     (iVar2 = (**(code **)(*param_1 + 8))(param_1), iVar2 < 1)) {
    iVar2 = -1;
    pcVar6 = "opening session";
    pcVar7 = *(code **)(*param_1 + 0x28);
    goto joined_r0x0044584c;
  }
  if ((*(byte *)((long)param_1 + 0x21) & 1) != 0) {
    FUN_004458e0(&LAB_00445860,param_1);
  }
  iVar2 = FUN_00407950(param_1[1]);
  lVar5 = *param_1;
  if (iVar2 < 1) {
LAB_004456d8:
    if (*(code **)(lVar5 + 0x18) != (code *)0x0) {
      iVar2 = (**(code **)(lVar5 + 0x18))(param_1);
      if (iVar2 == -1) {
        iVar2 = -2;
        pcVar6 = "processing";
        pcVar7 = *(code **)(*param_1 + 0x28);
        goto joined_r0x0044584c;
      }
      if (iVar2 == 0) {
        pcVar6 = "flushing";
        pcVar7 = *(code **)(*param_1 + 0x28);
        goto joined_r0x004456b8;
      }
    }
    iVar2 = FUN_00407950(param_1[1]);
    if (iVar2 < 1) {
LAB_00445798:
      iVar2 = 0;
      pcVar6 = (char *)0x0;
      pcVar7 = *(code **)(*param_1 + 0x28);
    }
    else {
      iVar2 = 0;
      pcVar6 = "processing";
      pcVar7 = *(code **)(*param_1 + 0x20);
      if (pcVar7 != (code *)0x0) goto LAB_00445758;
      do {
        do {
          iVar2 = iVar2 + 1;
          iVar3 = FUN_00407950(param_1[1]);
          if (iVar3 <= iVar2) goto LAB_00445798;
          pcVar7 = *(code **)(*param_1 + 0x20);
        } while (pcVar7 == (code *)0x0);
LAB_00445758:
        uVar4 = FUN_00407970(param_1[1],iVar2);
        iVar3 = (*pcVar7)(param_1,uVar4);
        if (iVar3 == -1) {
          iVar2 = -2;
          pcVar7 = *(code **)(*param_1 + 0x28);
          goto joined_r0x0044584c;
        }
      } while (iVar3 != 0);
      iVar2 = -1;
      pcVar6 = "reading strings";
      pcVar7 = *(code **)(*param_1 + 0x28);
    }
  }
  else {
    iVar2 = 0;
    pcVar6 = "writing strings";
    pcVar7 = *(code **)(lVar5 + 0x10);
    if (pcVar7 != (code *)0x0) goto LAB_00445690;
    do {
      do {
        iVar2 = iVar2 + 1;
        iVar3 = FUN_00407950(param_1[1]);
        lVar5 = *param_1;
        if (iVar3 <= iVar2) goto LAB_004456d8;
        pcVar7 = *(code **)(lVar5 + 0x10);
      } while (pcVar7 == (code *)0x0);
LAB_00445690:
      uVar4 = FUN_00407970(param_1[1],iVar2);
      iVar3 = (*pcVar7)(param_1,uVar4);
    } while (0 < iVar3);
    pcVar7 = *(code **)(*param_1 + 0x28);
joined_r0x004456b8:
    iVar2 = -1;
  }
joined_r0x0044584c:
  if ((pcVar7 == (code *)0x0) || (iVar3 = (*pcVar7)(param_1), 0 < iVar3)) {
    if (iVar2 != -1) {
      return iVar2;
    }
  }
  else {
    pcVar1 = "closing session";
    if (pcVar6 != (char *)0x0) {
      pcVar1 = pcVar6;
    }
    pcVar6 = pcVar1;
  }
  FUN_004014b0(0x28,0x71,0x6b,"external/openssl/crypto/ui/ui_lib.c",0x21f);
  FUN_00402170(2,"while ",pcVar6);
  return -1;
}


