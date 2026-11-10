/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001525f0; name: FUN_001525f0
 */


void FUN_001525f0(long param_1,int param_2,undefined8 param_3)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  
  if (param_2 < 1) {
    if (param_2 < -0xf4627) {
      if (param_2 == -0xf4628) {
        plVar5 = (long *)(*(long *)(param_1 + 0x18) + 0x40);
        iVar2 = *(int *)(*(long *)(param_1 + 0x18) + 0x48);
        goto joined_r0x0015263c;
      }
      plVar7 = (long *)**(long **)(param_1 + 0x20);
      plVar5 = &DAT_039c5c28;
      if ((int)plVar7[1] == 0x16) goto LAB_00152680;
      lVar3 = *plVar7;
      plVar5 = &DAT_039c5c28;
      if (-param_2 + -0xf4628 <= (int)(uint)*(byte *)(lVar3 + 10)) {
        plVar5 = (long *)(lVar3 + (long)(-param_2 + -0xf4629) * 0x10 + 0x20);
      }
      iVar2 = (int)plVar5[1];
    }
    else {
      plVar5 = (long *)(*(long *)(param_1 + 0x10) + (long)param_2 * 0x10);
LAB_00152680:
      iVar2 = (int)plVar5[1];
    }
    if (iVar2 != 0x45) goto LAB_00152730;
LAB_0015268c:
    puVar6 = (undefined8 *)FUN_00172330(*plVar5,param_3);
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
      lVar3 = -1;
      goto LAB_0015276c;
    }
  }
  else {
    plVar5 = (long *)(**(long **)(param_1 + 0x20) + (long)param_2 * 0x10);
    if (*(long **)(param_1 + 0x10) <= plVar5) {
      plVar5 = &DAT_039c5c28;
    }
    iVar2 = (int)plVar5[1];
joined_r0x0015263c:
    if (iVar2 == 0x45) goto LAB_0015268c;
LAB_00152730:
    puVar6 = (undefined8 *)0x0;
  }
  plVar7 = (long *)(param_1 + 0x10);
  puVar4 = (undefined8 *)*plVar7;
  *(undefined4 *)(puVar4 + 1) = 0x13;
  *puVar4 = param_3;
  lVar3 = *plVar7;
  *plVar7 = lVar3 + 0x10;
  FUN_001755e0(param_1,plVar5,lVar3,lVar3 + -0x10,puVar6);
  lVar3 = -2;
LAB_0015276c:
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + lVar3 * 0x10;
  return;
}


