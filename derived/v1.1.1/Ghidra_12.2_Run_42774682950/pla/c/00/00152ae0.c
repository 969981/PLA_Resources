/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00152ae0; name: FUN_00152ae0
 */


undefined8 FUN_00152ae0(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  
  if (param_2 < 1) {
    if (param_2 < -0xf4627) {
      if (param_2 == -0xf4628) {
        plVar6 = (long *)(*(long *)(param_1 + 0x18) + 0x40);
        lVar3 = *(long *)(param_1 + 0x10);
        iVar1 = *(int *)(lVar3 + -8);
        goto joined_r0x00152b24;
      }
      plVar5 = (long *)**(long **)(param_1 + 0x20);
      plVar6 = &DAT_039c5c28;
      if ((int)plVar5[1] == 0x16) goto LAB_00152b68;
      lVar3 = *plVar5;
      plVar6 = &DAT_039c5c28;
      if (-param_2 + -0xf4628 <= (int)(uint)*(byte *)(lVar3 + 10)) {
        plVar6 = (long *)(lVar3 + (long)(-param_2 + -0xf4629) * 0x10 + 0x20);
      }
      lVar3 = *(long *)(param_1 + 0x10);
      iVar1 = *(int *)(lVar3 + -8);
    }
    else {
      plVar6 = (long *)(*(long *)(param_1 + 0x10) + (long)param_2 * 0x10);
LAB_00152b68:
      lVar3 = *(long *)(param_1 + 0x10);
      iVar1 = *(int *)(lVar3 + -8);
    }
    if (iVar1 == 0) goto LAB_00152c28;
LAB_00152b74:
    lVar3 = *(long *)(lVar3 + -0x10);
    uVar4 = (ulong)*(uint *)(plVar6 + 1) & 0xf;
    if ((int)uVar4 != 7) goto LAB_00152b88;
LAB_00152c3c:
    *(long *)(*plVar6 + 0x10) = lVar3;
  }
  else {
    plVar6 = (long *)(**(long **)(param_1 + 0x20) + (long)param_2 * 0x10);
    if (*(long **)(param_1 + 0x10) <= plVar6) {
      plVar6 = &DAT_039c5c28;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    iVar1 = *(int *)(lVar3 + -8);
joined_r0x00152b24:
    if (iVar1 != 0) goto LAB_00152b74;
LAB_00152c28:
    lVar3 = 0;
    uVar4 = (ulong)*(uint *)(plVar6 + 1) & 0xf;
    if ((int)uVar4 == 7) goto LAB_00152c3c;
LAB_00152b88:
    if ((int)uVar4 != 5) {
      *(long *)(*(long *)(param_1 + 0x18) + uVar4 * 8 + 0x1a0) = lVar3;
      goto LAB_00152c48;
    }
    *(long *)(*plVar6 + 0x28) = lVar3;
  }
  if (lVar3 != 0) {
    lVar2 = *plVar6;
    if (((*(byte *)(lVar2 + 9) >> 2 & 1) != 0) && ((*(byte *)(lVar3 + 9) & 3) != 0)) {
      FUN_0015ca90(param_1,lVar2,lVar3);
      lVar2 = *plVar6;
    }
    FUN_0015cce0(param_1,lVar2,lVar3);
  }
LAB_00152c48:
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x10;
  return 1;
}


