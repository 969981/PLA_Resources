/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00153580; name: FUN_00153580
 */


char * FUN_00153580(long param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  uint uVar2;
  long lVar3;
  char *pcVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  
  if (param_2 < 1) {
    if (param_2 < -0xf4627) {
      if (param_2 == -0xf4628) {
        plVar5 = (long *)(*(long *)(param_1 + 0x18) + 0x40);
        uVar2 = *(uint *)(*(long *)(param_1 + 0x18) + 0x48);
      }
      else {
        plVar8 = (long *)**(long **)(param_1 + 0x20);
        plVar5 = &DAT_039c5c28;
        if ((int)plVar8[1] == 0x16) goto LAB_00153670;
        lVar3 = *plVar8;
        plVar5 = &DAT_039c5c28;
        if (-param_2 + -0xf4628 <= (int)(uint)*(byte *)(lVar3 + 10)) {
          plVar5 = (long *)(lVar3 + (long)(-param_2 + -0xf4629) * 0x10 + 0x20);
        }
        uVar2 = *(uint *)(plVar5 + 1);
      }
    }
    else {
      plVar5 = (long *)(*(long *)(param_1 + 0x10) + (long)param_2 * 0x10);
LAB_00153670:
      uVar2 = *(uint *)(plVar5 + 1);
    }
  }
  else {
    plVar5 = (long *)(**(long **)(param_1 + 0x20) + (long)param_2 * 0x10);
    if (*(long **)(param_1 + 0x10) <= plVar5) {
      plVar5 = &DAT_039c5c28;
    }
    uVar2 = *(uint *)(plVar5 + 1);
  }
  if ((uVar2 & 0x3f) == 6) {
    if (0 < param_3) {
      lVar3 = *(long *)(*plVar5 + 0x18);
      if (param_3 <= *(int *)(lVar3 + 0x10)) {
        lVar3 = *(long *)(*(long *)(lVar3 + 0x58) + ((long)param_3 + -1) * 0x10);
        puVar6 = (undefined8 *)**(undefined8 **)(*plVar5 + ((long)param_3 + -1) * 8 + 0x20);
        pcVar4 = "(*no name)";
        if (lVar3 != 0) {
          pcVar4 = (char *)(lVar3 + 0x18);
        }
        goto LAB_00153694;
      }
    }
  }
  else if ((((uVar2 & 0x3f) == 0x26) && (0 < param_3)) &&
          (param_3 <= (int)(uint)*(byte *)(*plVar5 + 10))) {
    puVar6 = (undefined8 *)(*plVar5 + (long)param_3 * 0x10 + 0x10);
    pcVar4 = "";
LAB_00153694:
    puVar7 = *(undefined8 **)(param_1 + 0x10);
    uVar1 = puVar6[1];
    *puVar7 = *puVar6;
    puVar7[1] = uVar1;
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
    return pcVar4;
  }
  return (char *)0x0;
}


