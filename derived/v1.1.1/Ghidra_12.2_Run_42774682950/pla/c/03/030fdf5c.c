/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030fdf5c; name: FUN_030fdf5c
 */


void FUN_030fdf5c(long param_1,int *param_2,int *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  undefined1 uVar5;
  undefined8 *puVar6;
  undefined2 *puVar7;
  undefined8 uVar8;
  
  if (param_2 == param_3) {
    return;
  }
  piVar4 = param_2;
  do {
    piVar3 = piVar4 + 1;
    puVar6 = (undefined8 *)
             (*(long *)(param_1 + 0x68) + (long)*(int *)(param_1 + 0x74) * (long)*piVar4);
    uVar8 = *puVar6;
    uVar2 = *(undefined4 *)(puVar6 + 1);
    puVar6 = (undefined8 *)(*(long *)(param_1 + 0x110) + (long)*piVar4 * 0x20);
    puVar6[1] = CONCAT44(uVar2,uVar2);
    *puVar6 = uVar8;
    piVar4 = piVar3;
  } while (param_3 != piVar3);
  uVar5 = 0x3a;
  if (*(char *)(param_1 + 0x15dc) != '\0') {
    uVar5 = 0;
  }
  piVar4 = param_2;
  do {
    piVar3 = piVar4 + 1;
    puVar7 = (undefined2 *)(*(long *)(param_1 + 0x15c0) + (long)*piVar4 * 0x14);
    *puVar7 = 0x7f7f;
    *(undefined1 *)(puVar7 + 1) = 0x7f;
    *(undefined1 *)((long)puVar7 + 3) = uVar5;
    *(undefined8 *)(puVar7 + 4) = 0;
    *(undefined4 *)(puVar7 + 8) = 0;
    *(undefined4 *)(puVar7 + 2) = 0;
    piVar4 = piVar3;
  } while (param_3 != piVar3);
  if (*(long *)(param_1 + 0x1670) != 0) {
    FUN_030ff594(*(long *)(param_1 + 0x1670),param_2,param_3);
  }
  if (*(char *)(param_1 + 0x15dc) != '\0') {
    piVar4 = param_2;
    do {
      piVar3 = piVar4 + 1;
      puVar6 = (undefined8 *)
               (*(long *)(param_1 + 0x98) + (long)*(int *)(param_1 + 0xa4) * (long)*piVar4);
      uVar8 = *puVar6;
      puVar1 = (undefined8 *)(*(long *)(param_1 + 0x120) + (long)*piVar4 * 0x10);
      puVar1[1] = puVar6[1];
      *puVar1 = uVar8;
      piVar4 = piVar3;
    } while (param_3 != piVar3);
  }
  FUN_03100244(*(undefined8 *)(param_1 + 0x1678),param_2,param_3);
  return;
}


