/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d2be88; name: FUN_00d2be88
 */


/* WARNING: Type propagation algorithm not settling */

bool FUN_00d2be88(long param_1)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  char cVar9;
  long lVar10;
  byte bVar11;
  
  if (*(long *)(param_1 + 0x388) == 0) {
    bVar4 = true;
    if (*(long *)(param_1 + 0x398) == 0) goto LAB_00d2beb4;
LAB_00d2bfa0:
    iVar8 = FUN_02838e30();
    bVar5 = iVar8 == 1;
    lVar10 = *(long *)(param_1 + 0x3a0);
    if (lVar10 != 0) goto LAB_00d2bfb4;
LAB_00d2bec0:
    bVar6 = true;
    lVar10 = *(long *)(param_1 + 0x120);
    bVar2 = false;
    bVar7 = true;
    if (lVar10 != 0) {
LAB_00d2becc:
      bVar6 = bVar7;
      bVar2 = *(char *)(lVar10 + 0x1e1) != '\0';
    }
  }
  else {
    lVar10 = *(long *)(*(long *)(param_1 + 0x388) + 0x68);
    cVar9 = '\0';
    if (lVar10 != 0) {
      cVar9 = *(char *)(lVar10 + 0x1e1);
    }
    bVar4 = cVar9 == '\x01';
    if (*(long *)(param_1 + 0x398) != 0) goto LAB_00d2bfa0;
LAB_00d2beb4:
    bVar5 = true;
    lVar10 = *(long *)(param_1 + 0x3a0);
    if (lVar10 == 0) goto LAB_00d2bec0;
LAB_00d2bfb4:
    if (*(long *)(lVar10 + 0x68) != 0) {
      bVar6 = *(char *)(*(long *)(lVar10 + 0x68) + 0x1e1) == '\x01';
      lVar10 = *(long *)(param_1 + 0x120);
      bVar7 = bVar6;
      if (lVar10 == 0) {
        bVar2 = false;
        goto LAB_00d2bed8;
      }
      goto LAB_00d2becc;
    }
    bVar6 = false;
    lVar10 = *(long *)(param_1 + 0x120);
    bVar7 = false;
    if (lVar10 != 0) goto LAB_00d2becc;
    bVar2 = false;
  }
LAB_00d2bed8:
  if (*(char *)(param_1 + 0x270) == '\0') {
    bVar7 = true;
  }
  else {
    bVar7 = false;
    if (*(long *)(param_1 + 0x240) != 0) {
      bVar7 = *(char *)(*(long *)(param_1 + 0x240) + 0x1e1) != '\0';
    }
  }
  if (*(char *)(param_1 + 0x2b8) == '\0') {
    bVar3 = true;
  }
  else {
    bVar3 = false;
    if (*(long *)(param_1 + 0x288) != 0) {
      bVar3 = *(char *)(*(long *)(param_1 + 0x288) + 0x1e1) != '\0';
    }
  }
  lVar10 = *(long *)(param_1 + 0x390);
  bVar1 = bVar2 & bVar7 & bVar3;
  if (lVar10 == 0) {
    bVar7 = (bool)(bVar4 & bVar5 & bVar6 & bVar1);
  }
  else {
    bVar11 = 0;
    if (*(long *)(lVar10 + 0x68) != 0) {
      bVar11 = *(byte *)(*(long *)(lVar10 + 0x68) + 0x1e1);
    }
    bVar7 = (bVar11 & bVar4 & bVar5 & bVar6 & bVar1) != 0;
    if (((*(long *)(lVar10 + 0x68) != 0) && (*(char *)(*(long *)(lVar10 + 0x68) + 0x1e1) != '\0'))
       && (*(char *)(param_1 + 0x3a9) == '\0')) {
      FUN_0284faf0();
      *(undefined1 *)(param_1 + 0x3a9) = 1;
      lVar10 = *(long *)(param_1 + 0x388);
      goto joined_r0x00d2c01c;
    }
  }
  lVar10 = *(long *)(param_1 + 0x388);
joined_r0x00d2c01c:
  if (((lVar10 == 0) || (bVar4 != true)) || (*(char *)(param_1 + 0x3a8) != '\0')) {
    lVar10 = *(long *)(param_1 + 0x398);
  }
  else {
    FUN_0284c0b0();
    *(undefined1 *)(param_1 + 0x3a8) = 1;
    lVar10 = *(long *)(param_1 + 0x398);
  }
  if (((lVar10 == 0) || (bVar5 != true)) || (*(char *)(param_1 + 0x3aa) != '\0')) {
    lVar10 = *(long *)(param_1 + 0x3a0);
  }
  else {
    FUN_02838e48();
    *(undefined1 *)(param_1 + 0x3aa) = 1;
    lVar10 = *(long *)(param_1 + 0x3a0);
  }
  if (((lVar10 != 0) && (bVar6 == true)) && (*(char *)(param_1 + 0x3ab) == '\0')) {
    FUN_0284f5e4();
    *(undefined1 *)(param_1 + 0x3ab) = 1;
  }
  return bVar7;
}


