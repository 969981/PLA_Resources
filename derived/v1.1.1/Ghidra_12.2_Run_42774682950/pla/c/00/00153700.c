/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00153700; name: FUN_00153700
 */


char * FUN_00153700(long param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  uint uVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  char *pcVar9;
  
  if (param_2 < 1) {
    if (param_2 < -0xf4627) {
      if (param_2 == -0xf4628) {
        plVar4 = (long *)(*(long *)(param_1 + 0x18) + 0x40);
        uVar2 = *(uint *)(*(long *)(param_1 + 0x18) + 0x48);
      }
      else {
        plVar8 = (long *)**(long **)(param_1 + 0x20);
        plVar4 = &DAT_039c5c28;
        if ((int)plVar8[1] == 0x16) goto LAB_0015380c;
        lVar5 = *plVar8;
        plVar4 = &DAT_039c5c28;
        if (-param_2 + -0xf4628 <= (int)(uint)*(byte *)(lVar5 + 10)) {
          plVar4 = (long *)(lVar5 + (long)(-param_2 + -0xf4629) * 0x10 + 0x20);
        }
        uVar2 = *(uint *)(plVar4 + 1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 0x10) + (long)param_2 * 0x10);
LAB_0015380c:
      uVar2 = *(uint *)(plVar4 + 1);
    }
  }
  else {
    plVar4 = (long *)(**(long **)(param_1 + 0x20) + (long)param_2 * 0x10);
    if (*(long **)(param_1 + 0x10) <= plVar4) {
      plVar4 = &DAT_039c5c28;
    }
    uVar2 = *(uint *)(plVar4 + 1);
  }
  if ((uVar2 & 0x3f) == 6) {
    if (0 < param_3) {
      lVar5 = *(long *)(*plVar4 + 0x18);
      if (param_3 <= *(int *)(lVar5 + 0x10)) {
        puVar3 = *(undefined8 **)(*plVar4 + ((long)param_3 + -1) * 8 + 0x20);
        lVar7 = *(long *)(*(long *)(lVar5 + 0x58) + ((long)param_3 + -1) * 0x10);
        puVar6 = (undefined8 *)*puVar3;
        lVar5 = 0;
        pcVar9 = "(*no name)";
        if (lVar7 != 0) {
          pcVar9 = (char *)(lVar7 + 0x18);
        }
        goto LAB_00153834;
      }
    }
  }
  else if ((((uVar2 & 0x3f) == 0x26) && (0 < param_3)) &&
          (lVar5 = *plVar4, param_3 <= (int)(uint)*(byte *)(lVar5 + 10))) {
    puVar3 = (undefined8 *)0x0;
    pcVar9 = "";
    puVar6 = (undefined8 *)(lVar5 + (long)param_3 * 0x10 + 0x10);
LAB_00153834:
    lVar7 = *(long *)(param_1 + 0x10);
    *(long *)(param_1 + 0x10) = lVar7 + -0x10;
    uVar1 = *(undefined8 *)(lVar7 + -8);
    *puVar6 = *(undefined8 *)(lVar7 + -0x10);
    puVar6[1] = uVar1;
    if (lVar5 == 0) {
      if (((puVar3 != (undefined8 *)0x0) && ((*(byte *)((undefined8 *)*puVar3 + 1) >> 6 & 1) != 0))
         && ((undefined8 *)*puVar3 == puVar3 + 2)) {
        FUN_0015cc00(param_1,puVar3);
      }
    }
    else if ((((*(byte *)(*(long **)(param_1 + 0x10) + 1) >> 6 & 1) != 0) &&
             ((*(byte *)(lVar5 + 9) >> 2 & 1) != 0)) &&
            ((*(byte *)(**(long **)(param_1 + 0x10) + 9) & 3) != 0)) {
      FUN_0015ca90();
      return pcVar9;
    }
    return pcVar9;
  }
  return (char *)0x0;
}


