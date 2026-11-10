/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001523e0; name: FUN_001523e0
 */


void FUN_001523e0(long param_1,int param_2)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  
  if (param_2 < 1) {
    if (param_2 < -0xf4627) {
      if (param_2 == -0xf4628) {
        plVar5 = (long *)(*(long *)(param_1 + 0x18) + 0x40);
        iVar2 = *(int *)(*(long *)(param_1 + 0x18) + 0x48);
        goto joined_r0x00152424;
      }
      plVar4 = (long *)**(long **)(param_1 + 0x20);
      plVar5 = &DAT_039c5c28;
      if ((int)plVar4[1] == 0x16) goto LAB_00152468;
      lVar3 = *plVar4;
      plVar5 = &DAT_039c5c28;
      if (-param_2 + -0xf4628 <= (int)(uint)*(byte *)(lVar3 + 10)) {
        plVar5 = (long *)(lVar3 + (long)(-param_2 + -0xf4629) * 0x10 + 0x20);
      }
      iVar2 = (int)plVar5[1];
    }
    else {
      plVar5 = (long *)(*(long *)(param_1 + 0x10) + (long)param_2 * 0x10);
LAB_00152468:
      iVar2 = (int)plVar5[1];
    }
    if (iVar2 != 0x45) goto LAB_00152514;
LAB_00152474:
    puVar6 = (undefined8 *)FUN_00172500(*plVar5,*(long *)(param_1 + 0x10) + -0x20);
    if (*(int *)(puVar6 + 1) != 0) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((((*(byte *)(lVar3 + -8) >> 6 & 1) != 0) && ((*(byte *)(*plVar5 + 9) >> 2 & 1) != 0)) &&
         ((*(byte *)(*(long *)(lVar3 + -0x10) + 9) & 3) != 0)) {
        FUN_0015cbe0(param_1);
        lVar3 = *(long *)(param_1 + 0x10);
      }
      uVar1 = *(undefined8 *)(lVar3 + -8);
      *puVar6 = *(undefined8 *)(lVar3 + -0x10);
      puVar6[1] = uVar1;
      goto LAB_00152534;
    }
  }
  else {
    plVar5 = (long *)(**(long **)(param_1 + 0x20) + (long)param_2 * 0x10);
    if (*(long **)(param_1 + 0x10) <= plVar5) {
      plVar5 = &DAT_039c5c28;
    }
    iVar2 = (int)plVar5[1];
joined_r0x00152424:
    if (iVar2 == 0x45) goto LAB_00152474;
LAB_00152514:
    puVar6 = (undefined8 *)0x0;
  }
  FUN_001755e0(param_1,plVar5,*(long *)(param_1 + 0x10) + -0x20,*(long *)(param_1 + 0x10) + -0x10,
               puVar6);
LAB_00152534:
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x20;
  return;
}


