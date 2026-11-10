/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011037c4; name: FUN_011037c4
 */


void FUN_011037c4(long param_1,long *param_2)

{
  long lVar1;
  int *piVar2;
  long lVar3;
  undefined4 uVar4;
  int iVar5;
  
  lVar3 = *param_2;
  if (*(long *)(param_1 + 0x200) == lVar3) {
    lVar3 = 0;
    do {
      lVar1 = param_1 + lVar3;
      if (*(int *)(lVar1 + 0x220) != 0) {
        if ((*(undefined1 **)(lVar1 + 0x250) == &DAT_cbf29ce484222645) ||
           (*(char *)(lVar1 + 0x23c) == '\0')) {
          uVar4 = 2;
          if (*(undefined1 **)(lVar1 + 600) != &DAT_cbf29ce484222645) {
            uVar4 = 4;
          }
        }
        else {
          uVar4 = 3;
        }
        *(undefined4 *)(lVar1 + 0x220) = uVar4;
      }
      lVar3 = lVar3 + 0x90;
    } while (lVar3 != 0xb40);
    lVar3 = *param_2;
  }
  if (*(long *)(param_1 + 0xd80) == lVar3) {
    lVar3 = 0;
    do {
      lVar1 = param_1 + lVar3;
      if (*(int *)(lVar1 + 0xda0) != 0) {
        if ((*(undefined1 **)(lVar1 + 0xdd0) == &DAT_cbf29ce484222645) ||
           (*(char *)(lVar1 + 0xdbc) == '\0')) {
          uVar4 = 2;
          if (*(undefined1 **)(lVar1 + 0xdd8) != &DAT_cbf29ce484222645) {
            uVar4 = 4;
          }
        }
        else {
          uVar4 = 3;
        }
        *(undefined4 *)(lVar1 + 0xda0) = uVar4;
      }
      lVar3 = lVar3 + 0x90;
    } while (lVar3 != 0xb40);
    lVar3 = *param_2;
  }
  if (*(long *)(param_1 + 0x1900) == lVar3) {
    piVar2 = (int *)(param_1 + 0x1920);
    lVar3 = 0x14;
    iVar5 = *piVar2;
    while( true ) {
      if (iVar5 != 0) {
        if ((*(undefined1 **)(piVar2 + 0xc) == &DAT_cbf29ce484222645) || ((char)piVar2[7] == '\0'))
        {
          iVar5 = 2;
          if (*(undefined1 **)(piVar2 + 0xe) != &DAT_cbf29ce484222645) {
            iVar5 = 4;
          }
        }
        else {
          iVar5 = 3;
        }
        *piVar2 = iVar5;
      }
      lVar3 = lVar3 + -1;
      piVar2 = piVar2 + 0x24;
      if (lVar3 == 0) break;
      iVar5 = *piVar2;
    }
    lVar3 = *param_2;
  }
  if (*(long *)(param_1 + 0x2480) == lVar3) {
    piVar2 = (int *)(param_1 + 0x24a0);
    lVar3 = 0x14;
    iVar5 = *piVar2;
    while( true ) {
      if (iVar5 != 0) {
        if ((*(undefined1 **)(piVar2 + 0xc) == &DAT_cbf29ce484222645) || ((char)piVar2[7] == '\0'))
        {
          iVar5 = 2;
          if (*(undefined1 **)(piVar2 + 0xe) != &DAT_cbf29ce484222645) {
            iVar5 = 4;
          }
        }
        else {
          iVar5 = 3;
        }
        *piVar2 = iVar5;
      }
      lVar3 = lVar3 + -1;
      piVar2 = piVar2 + 0x24;
      if (lVar3 == 0) break;
      iVar5 = *piVar2;
    }
    lVar3 = *param_2;
  }
  if (*(long *)(param_1 + 0x3000) == lVar3) {
    piVar2 = (int *)(param_1 + 0x3020);
    lVar3 = 0x14;
    iVar5 = *piVar2;
    while( true ) {
      if (iVar5 != 0) {
        if ((*(undefined1 **)(piVar2 + 0xc) == &DAT_cbf29ce484222645) || ((char)piVar2[7] == '\0'))
        {
          iVar5 = 2;
          if (*(undefined1 **)(piVar2 + 0xe) != &DAT_cbf29ce484222645) {
            iVar5 = 4;
          }
        }
        else {
          iVar5 = 3;
        }
        *piVar2 = iVar5;
      }
      lVar3 = lVar3 + -1;
      piVar2 = piVar2 + 0x24;
      if (lVar3 == 0) break;
      iVar5 = *piVar2;
    }
  }
  return;
}


