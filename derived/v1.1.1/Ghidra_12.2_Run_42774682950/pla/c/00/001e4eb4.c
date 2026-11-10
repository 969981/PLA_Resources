/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001e4eb4; name: FUN_001e4eb4
 */


int FUN_001e4eb4(long param_1,char *param_2,char *param_3,int param_4)

{
  undefined1 *puVar1;
  char *pcVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  char *pcVar10;
  byte bVar11;
  char *pcVar12;
  undefined1 *puVar13;
  long lVar14;
  undefined1 *puVar15;
  
  puVar9 = (undefined8 *)(param_1 + 0x50);
  FUN_001f86a8(*puVar9);
  *puVar9 = 0;
  if (*(int *)(param_1 + 0x88) == 1) {
    *(undefined4 *)(param_1 + 0x88) = 1;
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined8 *)(param_1 + 0x98) = 0;
  }
  pcVar12 = *(char **)(param_1 + 0x60);
  if (pcVar12 == (char *)0x0) {
    pcVar12 = (char *)FUN_001e5280(*(undefined8 *)(param_1 + 0x58),"Content-Type");
  }
  pcVar10 = pcVar12;
  if (pcVar12 == (char *)0x0) {
    pcVar10 = param_2;
  }
  if (pcVar10 == (char *)0x0) {
    if (*(int *)(param_1 + 0x18) == 4) {
      pcVar10 = "multipart/mixed";
    }
    else if (*(int *)(param_1 + 0x18) == 2) {
      pcVar10 = (char *)FUN_001e4e2c(*(undefined8 *)(param_1 + 0x68));
      if (((pcVar10 == (char *)0x0) &&
          (pcVar10 = (char *)FUN_001e4e2c(*(undefined8 *)(param_1 + 0x20)), pcVar10 == (char *)0x0))
         && (pcVar10 = (char *)0x0, *(long *)(param_1 + 0x68) != 0)) {
        pcVar10 = "application/octet-stream";
      }
    }
    else {
      pcVar10 = (char *)FUN_001e4e2c(*(undefined8 *)(param_1 + 0x68));
    }
  }
  if (*(int *)(param_1 + 0x18) == 4) {
    lVar14 = *(long *)(param_1 + 0x40);
    puVar15 = (undefined1 *)0x0;
    if (lVar14 != 0) {
      puVar15 = (undefined1 *)(lVar14 + 0x20);
    }
  }
  else {
    lVar14 = 0;
    if ((pcVar12 == (char *)0x0) && (pcVar10 != (char *)0x0)) {
      iVar5 = FUN_001f8b48(pcVar10,"text/plain");
      if ((iVar5 != 0) && ((param_4 == 0 || (*(long *)(param_1 + 0x68) == 0)))) {
        pcVar10 = (char *)0x0;
      }
      lVar14 = 0;
      puVar15 = (undefined1 *)0x0;
    }
    else {
      puVar15 = (undefined1 *)0x0;
    }
  }
  lVar6 = FUN_001e5280(*(undefined8 *)(param_1 + 0x58),"Content-Disposition");
  if (lVar6 != 0) goto LAB_001e4ff0;
  if (param_3 == (char *)0x0) {
    if ((*(long *)(param_1 + 0x68) != 0) || (*(long *)(param_1 + 0x70) != 0)) {
LAB_001e5048:
      param_3 = "attachment";
      goto LAB_001e5050;
    }
    if (pcVar10 != (char *)0x0) {
      iVar5 = FUN_001f8bec(pcVar10,"multipart/",10);
      if (iVar5 == 0) goto LAB_001e5048;
      goto LAB_001e4ff4;
    }
LAB_001e516c:
    bVar11 = 0;
  }
  else {
LAB_001e5050:
    iVar5 = thunk_FUN_001f8b48(param_3,"attachment");
    if ((iVar5 == 0) || (*(long *)(param_1 + 0x70) != 0)) {
      if (param_3 != (char *)0x0) {
        if (*(long *)(param_1 + 0x70) == 0) goto LAB_001e50b4;
        puVar7 = (undefined1 *)FUN_001e52dc();
        if (puVar7 != (undefined1 *)0x0) goto LAB_001e50b8;
        puVar13 = (undefined1 *)0x0;
LAB_001e50cc:
        iVar5 = 0x1b;
        goto LAB_001e5134;
      }
    }
    else if ((param_3 != (char *)0x0) && (*(long *)(param_1 + 0x68) != 0)) {
LAB_001e50b4:
      puVar7 = (undefined1 *)0x0;
LAB_001e50b8:
      if (*(long *)(param_1 + 0x68) == 0) {
        puVar13 = (undefined1 *)0x0;
      }
      else {
        puVar13 = (undefined1 *)FUN_001e52dc();
        if (puVar13 == (undefined1 *)0x0) goto LAB_001e50cc;
      }
      pcVar12 = "; name=\"";
      puVar1 = puVar7;
      if (puVar7 == (undefined1 *)0x0) {
        pcVar12 = "";
        puVar1 = &DAT_03996322;
      }
      puVar8 = &DAT_039042e1;
      if (puVar7 == (undefined1 *)0x0) {
        puVar8 = &DAT_03996322;
      }
      pcVar2 = "; filename=\"";
      puVar3 = puVar13;
      if (puVar13 == (undefined1 *)0x0) {
        pcVar2 = "";
        puVar3 = &DAT_03996322;
      }
      puVar4 = &DAT_039042e1;
      if (puVar13 == (undefined1 *)0x0) {
        puVar4 = &DAT_03996322;
      }
      iVar5 = FUN_001e4d74(puVar9,"Content-Disposition: %s%s%s%s%s%s%s",param_3,pcVar12,puVar1,
                           puVar8,pcVar2,puVar3,puVar4);
LAB_001e5134:
      FUN_002044d4(puVar7);
      FUN_002044d4(puVar13);
      if (iVar5 != 0) {
        return iVar5;
      }
    }
LAB_001e4ff0:
    if (pcVar10 == (char *)0x0) goto LAB_001e516c;
LAB_001e4ff4:
    pcVar12 = "; boundary=";
    if (puVar15 == (undefined1 *)0x0) {
      pcVar12 = "";
      puVar15 = &DAT_03996322;
    }
    iVar5 = FUN_001e4d74(puVar9,"Content-Type: %s%s%s",pcVar10,pcVar12,puVar15);
    if (iVar5 != 0) {
      return iVar5;
    }
    bVar11 = 1;
  }
  lVar6 = FUN_001e5280(*(undefined8 *)(param_1 + 0x58),"Content-Transfer-Encoding");
  if (lVar6 == 0) {
    if (*(undefined8 **)(param_1 + 0xa0) == (undefined8 *)0x0) {
      if (((bool)(param_4 != 0 | bVar11 ^ 1)) || (*(int *)(param_1 + 0x18) == 4)) goto LAB_001e5184;
      puVar8 = &DAT_038b2cf0;
    }
    else {
      puVar8 = (undefined *)**(undefined8 **)(param_1 + 0xa0);
      if (puVar8 == (undefined *)0x0) goto LAB_001e5184;
    }
    iVar5 = FUN_001e4d74(puVar9,"Content-Transfer-Encoding: %s",puVar8);
    if (iVar5 != 0) {
      return iVar5;
    }
  }
LAB_001e5184:
  if (*(int *)(param_1 + 0x88) == 1) {
    *(undefined4 *)(param_1 + 0x88) = 1;
    *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_1 + 0x50);
    *(undefined8 *)(param_1 + 0x98) = 0;
  }
  if ((lVar14 != 0) && (*(int *)(param_1 + 0x18) == 4)) {
    iVar5 = FUN_001f8b48(pcVar10,"multipart/form-data");
    lVar14 = *(long *)(lVar14 + 0x10);
    pcVar12 = (char *)0x0;
    if (iVar5 != 0) {
      pcVar12 = "form-data";
    }
    for (; lVar14 != 0; lVar14 = *(long *)(lVar14 + 0x10)) {
      iVar5 = FUN_001e4eb4(lVar14,0,pcVar12,param_4);
      if (iVar5 != 0) {
        return iVar5;
      }
    }
  }
  return 0;
}


