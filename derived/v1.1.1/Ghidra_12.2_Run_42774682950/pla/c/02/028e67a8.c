/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028e67a8; name: FUN_028e67a8
 */


undefined8 FUN_028e67a8(long param_1,long *param_2,undefined8 *param_3)

{
  int iVar1;
  bool bVar2;
  long *plVar3;
  int *piVar4;
  code *pcVar5;
  ulong uVar6;
  int local_58 [2];
  undefined8 local_50;
  float local_48;
  long *local_38;
  
  piVar4 = *(int **)(param_1 + 8);
  if ((((10 < *(ushort *)((long)piVar4 - (long)*piVar4)) &&
       (uVar6 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[5], uVar6 != 0)) &&
      (*(int *)((long)piVar4 + uVar6) == 1)) &&
     (uVar6 = (**(code **)(*param_2 + 0x18))(param_2,0), (uVar6 & 1) == 0)) {
    return 0;
  }
  plVar3 = (long *)(**(code **)(**(long **)(param_1 + 0x210) + 0x58))();
  (**(code **)(*plVar3 + 0x88))(local_58,0x3f800000);
  if (local_58[0] == 0) {
    return 0;
  }
  if ((code *)*param_3 != (code *)0x0) {
    local_38 = plVar3;
    (*(code *)*param_3)(param_3 + 4,&local_38);
  }
  if (((local_58[0] == 1) && (1.0 <= local_48)) && (*(int *)(param_1 + 0x218) == 0)) {
    piVar4 = *(int **)(param_1 + 8);
    if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 0xb) ||
       (uVar6 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[5], uVar6 == 0)) {
      bVar2 = false;
    }
    else {
      bVar2 = *(int *)((long)piVar4 + uVar6) == 1;
    }
    (**(code **)(*param_2 + 0x58))(param_2,local_50,param_1 + 0x38,bVar2);
    return 1;
  }
  piVar4 = *(int **)(param_1 + 8);
  if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 0xb) ||
     (uVar6 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[5], uVar6 == 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = *(int *)((long)piVar4 + uVar6) == 1;
  }
  (**(code **)(*param_2 + 0x30))(param_2,*(undefined8 *)(param_1 + 0x200),bVar2);
  (**(code **)(*param_2 + 0x38))(0x3f800000,param_2,plVar3);
  (**(code **)(*param_2 + 0x48))(param_2);
  iVar1 = *(int *)(param_1 + 0x218);
  if (iVar1 == 4) {
    pcVar5 = *(code **)(*param_2 + 0x70);
  }
  else {
    if (iVar1 == 3) {
      (**(code **)(*param_2 + 0x68))
                (1.0 - *(float *)(param_1 + 0x22c) / *(float *)(param_1 + 0x228),param_2);
      goto LAB_028e695c;
    }
    if (iVar1 != 2) goto LAB_028e695c;
    pcVar5 = *(code **)(*param_2 + 0x60);
  }
  (*pcVar5)(param_2);
LAB_028e695c:
  (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x38);
  return 1;
}


