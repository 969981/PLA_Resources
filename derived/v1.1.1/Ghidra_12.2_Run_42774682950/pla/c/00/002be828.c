/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002be828; name: FUN_002be828
 */


void FUN_002be828(long *param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long *plVar4;
  code *pcVar5;
  long lVar6;
  
  *param_1 = (long)(PTR_DAT_04373530 + 0x10);
  if ((*(byte *)(param_1 + 0xa4) & 1) == 0) {
    if ((*(byte *)(param_1 + 0xa1) & 1) == 0) goto LAB_002be858;
LAB_002be884:
    FUN_002e2ea0(PTR_LAB_04373088,param_1[0xa3]);
    lVar6 = param_1[0x97];
    puVar2 = (undefined8 *)PTR_DAT_04373140;
  }
  else {
    FUN_002e2ea0(PTR_LAB_04373088,param_1[0xa6]);
    if ((*(byte *)(param_1 + 0xa1) & 1) != 0) goto LAB_002be884;
LAB_002be858:
    lVar6 = param_1[0x97];
    puVar2 = (undefined8 *)PTR_DAT_04373140;
  }
  PTR_DAT_04373140 = (undefined *)puVar2;
  if (lVar6 != 0) {
    plVar4 = (long *)param_1[0x9c];
    param_1[0x97] = 0;
    param_1[0x9c] = 0;
    if (param_1 + 0x98 == plVar4) {
      pcVar5 = *(code **)(*plVar4 + 0x20);
LAB_002be8d4:
      (*pcVar5)();
    }
    else if (plVar4 != (long *)0x0) {
      pcVar5 = *(code **)(*plVar4 + 0x28);
      goto LAB_002be8d4;
    }
                    /* try { // try from 002be8e4 to 002be8eb has its CatchHandler @ 002beb30 */
    (**(code **)(*(long *)*puVar2 + 0x120))((long *)*puVar2,lVar6);
  }
  plVar4 = (long *)param_1[0x9c];
  if (param_1 + 0x98 == plVar4) {
    pcVar5 = *(code **)(*plVar4 + 0x20);
LAB_002be914:
    (*pcVar5)();
  }
  else if (plVar4 != (long *)0x0) {
    pcVar5 = *(code **)(*plVar4 + 0x28);
    goto LAB_002be914;
  }
  puVar3 = PTR_DAT_043734a0;
  plVar4 = (long *)param_1[0x86];
  puVar1 = PTR_DAT_043734a0 + 0x10;
  param_1[0x56] = (long)(PTR_DAT_04373540 + 0x10);
  param_1[0x70] = (long)puVar1;
  if (param_1 + 0x82 == plVar4) {
    pcVar5 = *(code **)(*plVar4 + 0x20);
LAB_002be960:
    (*pcVar5)();
  }
  else if (plVar4 != (long *)0x0) {
    pcVar5 = *(code **)(*plVar4 + 0x28);
    goto LAB_002be960;
  }
  plVar4 = (long *)param_1[0x7c];
  if (param_1 + 0x78 == plVar4) {
    pcVar5 = *(code **)(*plVar4 + 0x20);
LAB_002be98c:
    (*pcVar5)();
  }
  else if (plVar4 != (long *)0x0) {
    pcVar5 = *(code **)(*plVar4 + 0x28);
    goto LAB_002be98c;
  }
  if (param_1[0x5a] != 0) {
                    /* try { // try from 002be9a4 to 002be9a7 has its CatchHandler @ 002beb2c */
    (**(code **)(*(long *)*puVar2 + 0xc0))();
  }
  plVar4 = (long *)param_1[0x59];
  param_1[0x59] = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))(plVar4);
    FUN_002e2ea0(PTR_LAB_04373088,plVar4);
  }
  lVar6 = param_1[0x4d];
  if (lVar6 != 0) {
    plVar4 = (long *)param_1[0x52];
    param_1[0x4d] = 0;
    param_1[0x52] = 0;
    if (param_1 + 0x4e == plVar4) {
      pcVar5 = *(code **)(*plVar4 + 0x20);
LAB_002bea0c:
      (*pcVar5)();
    }
    else if (plVar4 != (long *)0x0) {
      pcVar5 = *(code **)(*plVar4 + 0x28);
      goto LAB_002bea0c;
    }
                    /* try { // try from 002bea1c to 002bea23 has its CatchHandler @ 002beb18 */
    (**(code **)(*(long *)*puVar2 + 0x120))((long *)*puVar2,lVar6);
  }
  plVar4 = (long *)param_1[0x52];
  if (param_1 + 0x4e == plVar4) {
    pcVar5 = *(code **)(*plVar4 + 0x20);
LAB_002bea4c:
    (*pcVar5)();
  }
  else if (plVar4 != (long *)0x0) {
    pcVar5 = *(code **)(*plVar4 + 0x28);
    goto LAB_002bea4c;
  }
  plVar4 = (long *)param_1[0x3c];
  param_1[10] = (long)(PTR_DAT_04373538 + 0x10);
  param_1[0x26] = (long)(puVar3 + 0x10);
  if (param_1 + 0x38 == plVar4) {
    pcVar5 = *(code **)(*plVar4 + 0x20);
LAB_002bea90:
    (*pcVar5)();
  }
  else if (plVar4 != (long *)0x0) {
    pcVar5 = *(code **)(*plVar4 + 0x28);
    goto LAB_002bea90;
  }
  plVar4 = (long *)param_1[0x32];
  if (param_1 + 0x2e == plVar4) {
    pcVar5 = *(code **)(*plVar4 + 0x20);
LAB_002beabc:
    (*pcVar5)();
  }
  else if (plVar4 != (long *)0x0) {
    pcVar5 = *(code **)(*plVar4 + 0x28);
    goto LAB_002beabc;
  }
  plVar4 = (long *)param_1[0x18];
  if (param_1 + 0x14 == plVar4) {
    pcVar5 = *(code **)(*plVar4 + 0x20);
  }
  else {
    if (plVar4 == (long *)0x0) goto LAB_002beaec;
    pcVar5 = *(code **)(*plVar4 + 0x28);
  }
  (*pcVar5)();
LAB_002beaec:
  if (param_1[0x12] != 0) {
                    /* try { // try from 002beb00 to 002beb03 has its CatchHandler @ 002beb14 */
    (**(code **)(*(long *)*puVar2 + 0xc0))();
  }
  return;
}


