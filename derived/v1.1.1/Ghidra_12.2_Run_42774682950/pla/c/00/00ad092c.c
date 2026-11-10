/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00ad092c; name: FUN_00ad092c
 */


void FUN_00ad092c(long param_1,long *param_2,undefined8 *param_3)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  
  pcVar8 = *(code **)(param_1 + 0x1f8);
  plVar1 = (long *)(param_1 + 0x1f0);
  if (*param_2 == 0) {
    if (pcVar8 != (code *)0x0) {
      *(undefined8 *)(param_1 + 0x200) = 0;
      *(undefined8 *)(param_1 + 0x208) = 0;
      *plVar1 = 0;
      *(undefined8 *)(param_1 + 0x1f8) = 0;
      (*pcVar8)(param_1 + 0x210);
    }
    *(undefined1 **)(param_1 + 0x1f0) = &LAB_00ad1bb0;
    *(undefined1 **)(param_1 + 0x1f8) = &LAB_00ad1bb8;
    *(undefined1 **)(param_1 + 0x200) = &LAB_00ad1bbc;
    *(undefined1 **)(param_1 + 0x208) = &LAB_00ad1bc0;
  }
  else {
    if (pcVar8 != (code *)0x0) {
      *(undefined8 *)(param_1 + 0x200) = 0;
      *(undefined8 *)(param_1 + 0x208) = 0;
      *plVar1 = 0;
      *(undefined8 *)(param_1 + 0x1f8) = 0;
      (*pcVar8)(param_1 + 0x210);
    }
    if ((code *)param_2[2] != (code *)0x0) {
      (*(code *)param_2[2])(param_2 + 4,param_1 + 0x210);
      lVar2 = *param_2;
      lVar4 = param_2[1];
      lVar5 = param_2[3];
      *(long *)(param_1 + 0x200) = param_2[2];
      *(long *)(param_1 + 0x208) = lVar5;
      *plVar1 = lVar2;
      *(long *)(param_1 + 0x1f8) = lVar4;
    }
  }
  pcVar8 = *(code **)(param_1 + 0x278);
  if (pcVar8 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x280) = 0;
    *(undefined8 *)(param_1 + 0x288) = 0;
    *(undefined8 *)(param_1 + 0x270) = 0;
    *(undefined8 *)(param_1 + 0x278) = 0;
    (*pcVar8)(param_1 + 0x290);
  }
  if ((code *)param_3[2] != (code *)0x0) {
    (*(code *)param_3[2])(param_3 + 4,param_1 + 0x290);
    uVar3 = *param_3;
    uVar6 = param_3[1];
    uVar7 = param_3[3];
    *(undefined8 *)(param_1 + 0x280) = param_3[2];
    *(undefined8 *)(param_1 + 0x288) = uVar7;
    *(undefined8 *)(param_1 + 0x270) = uVar3;
    *(undefined8 *)(param_1 + 0x278) = uVar6;
  }
  return;
}


