/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0062703c; name: FUN_0062703c
 */


undefined4 * FUN_0062703c(undefined4 *param_1,undefined4 *param_2)

{
  byte *pbVar1;
  long *plVar2;
  char cVar3;
  char cVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  *param_1 = *param_2;
  pbVar1 = (byte *)(param_1 + 2);
  if ((*(long **)(param_1 + 8) == *(long **)(param_2 + 8)) ||
     (uVar5 = (**(code **)(**(long **)(param_1 + 8) + 0x20))(), (uVar5 & 1) != 0)) {
    if ((*pbVar1 & 1) == 0) {
      pbVar1[0] = 0;
      pbVar1[1] = 0;
    }
    else {
      **(undefined1 **)(param_1 + 6) = 0;
      *(undefined8 *)(param_1 + 4) = 0;
      if ((*(byte *)(param_1 + 2) & 1) != 0) {
        (**(code **)(**(long **)(param_1 + 8) + 0x18))
                  (*(long **)(param_1 + 8),*(undefined8 *)(param_1 + 6),
                   *(ulong *)(param_1 + 2) & 0xfffffffffffffffe,1);
        *(undefined8 *)(param_1 + 2) = 0;
      }
    }
    uVar8 = *(undefined8 *)(param_2 + 4);
    uVar7 = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_1 + 4) = uVar8;
    *(undefined8 *)pbVar1 = uVar7;
    *(undefined8 *)(param_2 + 4) = 0;
    *(undefined8 *)(param_2 + 6) = 0;
    *(undefined8 *)(param_2 + 2) = 0;
    cVar3 = *(char *)(param_1 + 10);
    cVar4 = *(char *)(param_2 + 10);
  }
  else {
    if (param_1 != param_2) {
      uVar5 = *(ulong *)(param_2 + 4);
      lVar6 = *(long *)(param_2 + 6);
      if ((*(byte *)(param_2 + 2) & 1) == 0) {
        lVar6 = (long)param_2 + 9;
        uVar5 = (ulong)(*(byte *)(param_2 + 2) >> 1);
      }
      FUN_02762710(pbVar1,lVar6,uVar5);
    }
    cVar3 = *(char *)(param_1 + 10);
    cVar4 = *(char *)(param_2 + 10);
  }
  if (cVar3 == '\0') {
    if (cVar4 != '\0') {
      *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
      uVar7 = *(undefined8 *)(param_2 + 0xe);
      *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
      *(undefined8 *)(param_1 + 0xe) = uVar7;
      lVar6 = *(long *)(param_2 + 0x12);
      plVar2 = (long *)(param_1 + 0xe);
      *(long *)(param_1 + 0x12) = lVar6;
      if (lVar6 == 0) {
        *(long **)(param_1 + 0xc) = plVar2;
      }
      else {
        *(long **)(*plVar2 + 0x10) = plVar2;
        *(undefined4 **)(param_2 + 0xc) = param_2 + 0xe;
        *(undefined8 *)(param_2 + 0xe) = 0;
        *(undefined8 *)(param_2 + 0x12) = 0;
      }
      *(undefined1 *)(param_1 + 10) = 1;
    }
  }
  else if (cVar4 == '\0') {
    FUN_02767254(param_1 + 0xc,*(undefined8 *)(param_1 + 0xe));
    *(undefined1 *)(param_1 + 10) = 0;
  }
  else {
    FUN_00613e44(param_1 + 0xc,param_2 + 0xc);
  }
  return param_1;
}


