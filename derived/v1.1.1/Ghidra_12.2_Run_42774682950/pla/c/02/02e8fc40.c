/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e8fc40; name: FUN_02e8fc40
 */


int FUN_02e8fc40(long param_1,uint *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  char cVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  
  if ((char)param_2[0xe] != '\0') {
    *(undefined1 *)(param_1 + 0xf0) = 1;
  }
  if (param_2[0xf] == 0) {
LAB_02e8fd0c:
    iVar4 = 1;
LAB_02e8fd10:
    if ((((iVar4 == 1) && ((char)param_2[0xe] != '\0')) &&
        (iVar4 = FUN_02e94658(param_1), iVar4 != 1)) && (param_2[0xf] != 0)) {
      uVar8 = 0;
      do {
        FUN_02f06dc4(DAT_0440a138,param_2[0xc],param_2[0xd],
                     *(undefined4 *)(*(long *)(param_2 + 0x10) + uVar8 * 4),0);
        uVar8 = uVar8 + 1;
      } while (uVar8 < param_2[0xf]);
    }
LAB_02e8fda4:
    (*DAT_0442d150)(0,*(undefined8 *)(param_2 + 0x10));
LAB_02e8fdb8:
    cVar6 = (char)param_2[0xe];
  }
  else {
    if (param_2[0xf] != 1) {
      uVar8 = 0;
LAB_02e8fcdc:
      iVar4 = FUN_02f06dc4(DAT_0440a138,param_2[0xc],param_2[0xd],
                           *(undefined4 *)(*(long *)(param_2 + 0x10) + uVar8 * 4),(char)param_2[0xe]
                          );
      if (iVar4 == 1) goto code_r0x02e8fcfc;
      if ((int)uVar8 != 0) {
        uVar9 = 0;
        do {
          FUN_02f06dc4(DAT_0440a138,param_2[0xc],param_2[0xd],
                       *(undefined4 *)(*(long *)(param_2 + 0x10) + uVar9 * 4),0);
          uVar9 = uVar9 + 1;
        } while (uVar8 != uVar9);
        goto LAB_02e8fd10;
      }
      goto LAB_02e8fda4;
    }
    iVar4 = FUN_02f06dc4(DAT_0440a138,param_2[0xc],param_2[0xd],param_2[0x10],(char)param_2[0xe]);
    cVar6 = (char)param_2[0xe];
    if ((iVar4 == 1) && (cVar6 != '\0')) {
      iVar4 = FUN_02e94658(param_1);
      if (iVar4 != 1) {
        FUN_02f06dc4(DAT_0440a138,param_2[0xc],param_2[0xd],param_2[0x10],0);
      }
      goto LAB_02e8fdb8;
    }
  }
  if (cVar6 != '\0') {
    *(undefined1 *)(param_1 + 0xf0) = 0;
    *(undefined4 *)(param_1 + 0xe8) = 0;
  }
  uVar5 = *param_2;
  if (1 < uVar5) {
    if (uVar5 - 2 < 2) {
      uVar5 = param_2[0xe];
      if (param_2[0xc] != 1) {
        uVar5 = 0;
      }
      goto LAB_02e8fdd8;
    }
    if (1 < uVar5 - 6) {
      uVar5 = 0;
      goto LAB_02e8fdd8;
    }
  }
  uVar5 = param_2[1];
LAB_02e8fdd8:
  uVar3 = param_2[10];
  uVar7 = *(undefined8 *)(param_2 + 0xc);
  uVar1 = *(undefined8 *)(param_2 + 6);
  uVar2 = *(undefined8 *)(param_2 + 8);
  *(int *)(param_1 + 0xf4) = iVar4;
  if (uVar3 != 2) {
    uVar7 = 0;
  }
  FUN_02e9823c(param_1 + 0xf8,uVar1,uVar5,uVar7,iVar4,uVar2);
  return iVar4;
code_r0x02e8fcfc:
  uVar8 = uVar8 + 1;
  if (param_2[0xf] <= uVar8) goto LAB_02e8fd0c;
  goto LAB_02e8fcdc;
}


