/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028b55c4; name: FUN_028b55c4
 */


void FUN_028b55c4(undefined8 param_1,undefined4 *param_2,int *param_3)

{
  uint *puVar1;
  long lVar2;
  ulong uVar3;
  ushort *puVar4;
  undefined4 uVar5;
  
  puVar4 = (ushort *)((long)param_3 - (long)*param_3);
  if (*puVar4 < 5) {
    uVar3 = 0;
    lVar2 = 0;
  }
  else {
    uVar3 = 0;
    if ((ulong)puVar4[2] != 0) {
      uVar3 = (ulong)*(byte *)((long)param_3 + (ulong)puVar4[2]);
    }
    if ((*puVar4 < 7) || ((ulong)puVar4[3] == 0)) {
      lVar2 = 0;
    }
    else {
      puVar1 = (uint *)((long)param_3 + (ulong)puVar4[3]);
      lVar2 = (long)puVar1 + (ulong)*puVar1;
    }
  }
  uVar5 = (*(code *)(&PTR_FUN_04272e08)[uVar3])(param_1,lVar2,0);
  *param_2 = uVar5;
  puVar4 = (ushort *)((long)param_3 - (long)*param_3);
  if (*puVar4 < 9) {
    uVar3 = 0;
    lVar2 = 0;
  }
  else {
    uVar3 = 0;
    if ((ulong)puVar4[4] != 0) {
      uVar3 = (ulong)*(byte *)((long)param_3 + (ulong)puVar4[4]);
    }
    if ((*puVar4 < 0xb) || ((ulong)puVar4[5] == 0)) {
      lVar2 = 0;
    }
    else {
      puVar1 = (uint *)((long)param_3 + (ulong)puVar4[5]);
      lVar2 = (long)puVar1 + (ulong)*puVar1;
    }
  }
  uVar5 = (*(code *)(&PTR_FUN_04272e08)[uVar3])(param_1,lVar2,0);
  param_2[1] = uVar5;
  puVar4 = (ushort *)((long)param_3 - (long)*param_3);
  if (*puVar4 < 0xd) {
    uVar3 = 0;
    lVar2 = 0;
  }
  else {
    uVar3 = 0;
    if ((ulong)puVar4[6] != 0) {
      uVar3 = (ulong)*(byte *)((long)param_3 + (ulong)puVar4[6]);
    }
    if ((*puVar4 < 0xf) || ((ulong)puVar4[7] == 0)) {
      lVar2 = 0;
    }
    else {
      puVar1 = (uint *)((long)param_3 + (ulong)puVar4[7]);
      lVar2 = (long)puVar1 + (ulong)*puVar1;
    }
  }
  uVar5 = (*(code *)(&PTR_FUN_04272e08)[uVar3])(param_1,lVar2,0);
  param_2[2] = uVar5;
  return;
}


