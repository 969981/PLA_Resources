/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 012fb8dc; name: FUN_012fb8dc
 */


void FUN_012fb8dc(long *param_1,int param_2,uint param_3,uint param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  if (((*param_1 == 0) || (param_1[1] == 0)) || (lVar2 = param_1[2], lVar2 == 0)) {
    return;
  }
  lVar3 = *(long *)(lVar2 + 0x498);
  *(undefined4 *)(lVar2 + 0x490) = 0xd;
  if (*(char *)(lVar3 + 0x7c) != '\0') {
    **(undefined2 **)(lVar3 + 0x58) = 0;
    *(undefined2 *)(lVar3 + 0x7a) = 0;
  }
  lVar3 = *(long *)(lVar2 + 0x4c8);
  *(undefined4 *)(lVar2 + 0x4c0) = 0xd;
  if (*(char *)(lVar3 + 0x7c) != '\0') {
    **(undefined2 **)(lVar3 + 0x58) = 0;
    *(undefined2 *)(lVar3 + 0x7a) = 0;
  }
  lVar3 = *(long *)(lVar2 + 0x4f8);
  *(undefined4 *)(lVar2 + 0x4f0) = 0xd;
  if (*(char *)(lVar3 + 0x7c) != '\0') {
    **(undefined2 **)(lVar3 + 0x58) = 0;
    *(undefined2 *)(lVar3 + 0x7a) = 0;
  }
  lVar3 = *(long *)(lVar2 + 0x528);
  *(undefined4 *)(lVar2 + 0x520) = 0xd;
  if (*(char *)(lVar3 + 0x7c) != '\0') {
    **(undefined2 **)(lVar3 + 0x58) = 0;
    *(undefined2 *)(lVar3 + 0x7a) = 0;
  }
  *(undefined4 *)(lVar2 + 0x550) = 0xd;
  lVar2 = *(long *)(lVar2 + 0x558);
  if (*(char *)(lVar2 + 0x7c) != '\0') {
    **(undefined2 **)(lVar2 + 0x58) = 0;
    *(undefined2 *)(lVar2 + 0x7a) = 0;
  }
  if (param_2 == 0) {
    FUN_012fba34(param_1);
    if ((param_3 & 1) != 0) {
      FUN_012fbc8c(param_1,1);
    }
    if ((param_4 & 1) == 0) goto LAB_012fb9cc;
    uVar1 = 2;
  }
  else {
    if (param_2 == 1) {
      FUN_012fba34(param_1,0);
      goto LAB_012fb9cc;
    }
    if (param_2 != 2) goto LAB_012fb9cc;
    if ((param_3 & 1) != 0) {
      FUN_012fbc8c(param_1,0);
    }
    if ((param_4 & 1) == 0) goto LAB_012fb9cc;
    uVar1 = 1;
  }
  FUN_012fbee4(param_1,uVar1);
LAB_012fb9cc:
  FUN_02814a44(param_1[2],1);
  return;
}


