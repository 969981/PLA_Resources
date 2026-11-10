/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004142c0; name: FUN_004142c0
 */


undefined8 FUN_004142c0(undefined8 param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  
  if ((((int)param_2[2] != 0) && (iVar4 = FUN_004042b0(param_1,&DAT_038d0274,1), iVar4 != 1)) ||
     ((iVar4 = FUN_0040c130(param_2), iVar4 != 0 &&
      (iVar4 = FUN_004042b0(param_1,&DAT_0390f9d5,1), iVar4 != 1)))) {
    return 0;
  }
  lVar5 = (long)(int)param_2[1];
  if (0 < (int)param_2[1]) {
    bVar3 = false;
    do {
      uVar1 = *(uint *)(*param_2 + lVar5 * 4 + -4);
      if (uVar1 >> 0x1c == 0 && !bVar3) {
        uVar2 = uVar1 >> 0x18 & 0xf;
        if (uVar2 == 0) goto LAB_0041446c;
LAB_00414398:
        iVar4 = FUN_004042b0(param_1,uVar2 + 0x3a043d2,1);
        if (iVar4 != 1) {
          return 0;
        }
        uVar1 = *(uint *)(*param_2 + lVar5 * 4 + -4);
        uVar2 = uVar1 >> 0x14 & 0xf;
        if ((uVar2 | 1) == 0) goto LAB_004143cc;
LAB_00414478:
        iVar4 = FUN_004042b0(param_1,uVar2 + 0x3a043d2,1);
        if (iVar4 != 1) {
          return 0;
        }
        uVar1 = *(uint *)(*param_2 + lVar5 * 4 + -4);
        uVar2 = uVar1 >> 0x10 & 0xf;
        if ((uVar2 | 1) == 0) goto LAB_004144ac;
LAB_004143d8:
        iVar4 = FUN_004042b0(param_1,uVar2 + 0x3a043d2,1);
        if (iVar4 != 1) {
          return 0;
        }
        uVar1 = *(uint *)(*param_2 + lVar5 * 4 + -4);
        uVar2 = uVar1 >> 0xc & 0xf;
        if ((uVar2 | 1) == 0) goto LAB_0041440c;
LAB_004144b8:
        iVar4 = FUN_004042b0(param_1,uVar2 + 0x3a043d2,1);
        if (iVar4 != 1) {
          return 0;
        }
        uVar1 = *(uint *)(*param_2 + lVar5 * 4 + -4);
        uVar2 = uVar1 >> 8 & 0xf;
        if ((uVar2 | 1) == 0) goto LAB_004144ec;
LAB_00414418:
        iVar4 = FUN_004042b0(param_1,uVar2 + 0x3a043d2,1);
        if (iVar4 != 1) {
          return 0;
        }
        uVar1 = *(uint *)(*param_2 + lVar5 * 4 + -4);
        uVar2 = uVar1 >> 4 & 0xf;
        if ((uVar2 | 1) == 0) goto LAB_0041444c;
LAB_004144f8:
        iVar4 = FUN_004042b0(param_1,uVar2 + 0x3a043d2,1);
        if (iVar4 != 1) {
          return 0;
        }
        uVar2 = *(uint *)(*param_2 + lVar5 * 4 + -4) & 0xf;
        if ((uVar2 | 1) != 0) goto LAB_0041452c;
LAB_0041433c:
        bVar3 = false;
      }
      else {
        iVar4 = FUN_004042b0(param_1,(uVar1 >> 0x1c) + 0x3a043d2,1);
        if (iVar4 != 1) {
          return 0;
        }
        uVar1 = *(uint *)(*param_2 + lVar5 * 4 + -4);
        uVar2 = uVar1 >> 0x18 & 0xf;
        if ((uVar2 | 1) != 0) goto LAB_00414398;
LAB_0041446c:
        uVar2 = uVar1 >> 0x14 & 0xf;
        if (uVar2 != 0) goto LAB_00414478;
LAB_004143cc:
        uVar2 = uVar1 >> 0x10 & 0xf;
        if (uVar2 != 0) goto LAB_004143d8;
LAB_004144ac:
        uVar2 = uVar1 >> 0xc & 0xf;
        if (uVar2 != 0) goto LAB_004144b8;
LAB_0041440c:
        uVar2 = uVar1 >> 8 & 0xf;
        if (uVar2 != 0) goto LAB_00414418;
LAB_004144ec:
        uVar2 = uVar1 >> 4 & 0xf;
        if (uVar2 != 0) goto LAB_004144f8;
LAB_0041444c:
        uVar2 = uVar1 & 0xf;
        if ((uVar1 & 0xf) == 0) goto LAB_0041433c;
LAB_0041452c:
        bVar3 = true;
        iVar4 = FUN_004042b0(param_1,uVar2 + 0x3a043d2,1);
        if (iVar4 != 1) {
          return 0;
        }
      }
      lVar5 = lVar5 + -1;
    } while (0 < lVar5);
  }
  return 1;
}


