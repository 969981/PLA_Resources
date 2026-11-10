/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0107ea14; name: FUN_0107ea14
 */


void FUN_0107ea14(long *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  lVar4 = *param_1;
  plVar5 = (long *)*param_2;
  if (*(uint *)(lVar4 + 0x160) < 0xfffffffe) {
    FUN_00155150(*(undefined8 *)(lVar4 + 0x158),0xfff0b9d8);
  }
  if ((int)plVar5[1] == -1) {
    *(long *)(lVar4 + 0x158) = *plVar5;
    uVar1 = 0xffffffff;
    goto LAB_0107eaac;
  }
  if ((int)plVar5[1] == -2) {
    *(long *)(lVar4 + 0x158) = *plVar5;
LAB_0107eaf0:
    uVar1 = 0xfffffffe;
  }
  else {
    lVar2 = *(long *)(lVar4 + 0x158);
    lVar3 = *plVar5;
    if (((lVar2 == lVar3) || (lVar2 == 0)) || (lVar3 == 0)) {
LAB_0107ea68:
      *(long *)(lVar4 + 0x158) = lVar3;
      if ((int)plVar5[1] == -2) goto LAB_0107eaf0;
      lVar2 = *plVar5;
      if (lVar2 == 0) {
        FUN_00151490(0);
      }
      else {
        FUN_00151e00(lVar2,0xfff0b9d8);
        if (*plVar5 != lVar2) {
          FUN_0014fe00(*plVar5,lVar2,1);
        }
      }
      lVar2 = *plVar5;
    }
    else {
      lVar2 = FUN_001513b0(lVar2,0xfff0b9d8);
      lVar3 = FUN_001513b0(lVar3,0xfff0b9d8);
      if (lVar2 != lVar3) {
        lVar3 = *plVar5;
        goto LAB_0107ea68;
      }
      lVar2 = *(long *)(lVar4 + 0x158);
      if (*plVar5 == 0) {
        FUN_00151490(lVar2);
        lVar2 = *(long *)(lVar4 + 0x158);
      }
      else {
        FUN_00151e00(*plVar5,0xfff0b9d8,(long)(int)plVar5[1]);
        if (*plVar5 != lVar2) {
          FUN_0014fe00(*plVar5,lVar2,1);
        }
        lVar2 = *(long *)(lVar4 + 0x158);
      }
    }
    uVar1 = FUN_00155070(lVar2,0xfff0b9d8);
  }
LAB_0107eaac:
  *(undefined4 *)(lVar4 + 0x160) = uVar1;
  return;
}


