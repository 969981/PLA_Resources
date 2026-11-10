/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01247188; name: FUN_01247188
 */


void FUN_01247188(long *param_1,int param_2)

{
  long lVar1;
  long lVar2;
  
  if (((*param_1 == 0) || (param_1[1] == 0)) || (lVar1 = param_1[2], lVar1 == 0)) {
    return;
  }
  lVar2 = *(long *)(lVar1 + 0x498);
  *(undefined4 *)(lVar1 + 0x490) = 0xd;
  if (*(char *)(lVar2 + 0x7c) != '\0') {
    **(undefined2 **)(lVar2 + 0x58) = 0;
    *(undefined2 *)(lVar2 + 0x7a) = 0;
  }
  lVar2 = *(long *)(lVar1 + 0x4c8);
  *(undefined4 *)(lVar1 + 0x4c0) = 0xd;
  if (*(char *)(lVar2 + 0x7c) != '\0') {
    **(undefined2 **)(lVar2 + 0x58) = 0;
    *(undefined2 *)(lVar2 + 0x7a) = 0;
  }
  lVar2 = *(long *)(lVar1 + 0x4f8);
  *(undefined4 *)(lVar1 + 0x4f0) = 0xd;
  if (*(char *)(lVar2 + 0x7c) != '\0') {
    **(undefined2 **)(lVar2 + 0x58) = 0;
    *(undefined2 *)(lVar2 + 0x7a) = 0;
  }
  lVar2 = *(long *)(lVar1 + 0x528);
  *(undefined4 *)(lVar1 + 0x520) = 0xd;
  if (*(char *)(lVar2 + 0x7c) != '\0') {
    **(undefined2 **)(lVar2 + 0x58) = 0;
    *(undefined2 *)(lVar2 + 0x7a) = 0;
  }
  *(undefined4 *)(lVar1 + 0x550) = 0xd;
  lVar1 = *(long *)(lVar1 + 0x558);
  if (*(char *)(lVar1 + 0x7c) != '\0') {
    **(undefined2 **)(lVar1 + 0x58) = 0;
    *(undefined2 *)(lVar1 + 0x7a) = 0;
  }
  if (param_2 == 4) {
    FUN_01247a14(param_1,0);
    FUN_01247c6c(param_1,1);
  }
  else {
    switch(param_2) {
    case 1:
      FUN_01247308(param_1,0);
      break;
    case 2:
      FUN_01247308(param_1,0);
      FUN_01247560(param_1,1);
      break;
    case 3:
      FUN_01247308(param_1,0);
      FUN_012477bc(param_1,1);
      FUN_01247560(param_1,2);
      break;
    case 5:
      FUN_01247a14(param_1,0);
    }
  }
  FUN_02814a44(param_1[2],1);
  return;
}


