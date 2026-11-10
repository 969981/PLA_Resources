/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00da20bc; name: FUN_00da20bc
 */


int FUN_00da20bc(long param_1,uint param_2)

{
  int *piVar1;
  long lVar2;
  int iVar3;
  uint *puVar4;
  ulong uVar5;
  undefined1 auStack_68 [16];
  int *local_58;
  uint local_50;
  undefined8 local_48;
  char *local_40;
  undefined8 uStack_38;
  int *local_30;
  uint local_28;
  undefined8 local_18;
  
  local_48 = 0x71cfcea90142567d;
  local_40 = "vib_table";
  uStack_38 = 9;
  FUN_010868dc(&local_30,param_1 + 0x38,&local_48);
  if ((((local_30 == (int *)0x0) || (local_28 == 0xffffffff)) ||
      (*(ushort *)((long)local_30 - (long)*local_30) < 5)) ||
     (uVar5 = (ulong)((ushort *)((long)local_30 - (long)*local_30))[2], uVar5 == 0)) {
    iVar3 = 0;
  }
  else {
    puVar4 = (uint *)((long)local_30 + uVar5);
    puVar4 = (uint *)((long)puVar4 + (ulong)local_28 * 4 + (ulong)*puVar4 + 4);
    piVar1 = (int *)((long)puVar4 + (ulong)*puVar4);
    puVar4 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (6 - (long)*piVar1)));
    iVar3 = *(int *)((long)puVar4 + (ulong)*puVar4);
  }
  if ((int)param_2 < 0) {
    return 1;
  }
  if (iVar3 <= (int)param_2) {
    return 1;
  }
  if (local_30 != (int *)0x0) {
    if (((local_28 != 0xffffffff) && (4 < *(ushort *)((long)local_30 - (long)*local_30))) &&
       (uVar5 = (ulong)((ushort *)((long)local_30 - (long)*local_30))[2], uVar5 != 0)) {
      puVar4 = (uint *)((long)local_30 + uVar5);
      puVar4 = (uint *)((long)puVar4 + (ulong)local_28 * 4 + (ulong)*puVar4 + 4);
      piVar1 = (int *)((long)puVar4 + (ulong)*puVar4);
      puVar4 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (6 - (long)*piVar1)));
      puVar4 = (uint *)((long)puVar4 + (ulong)*puVar4);
      if ((ulong)(long)(int)param_2 < (ulong)*puVar4) {
        local_50 = puVar4[(ulong)param_2 + 1];
        goto LAB_00da21e8;
      }
    }
    local_30 = (int *)0x0;
  }
  local_50 = 0xffffffff;
LAB_00da21e8:
  local_48 = 0x29417c3ac320b72c;
  local_40 = "group";
  uStack_38 = 5;
  local_58 = local_30;
  FUN_010868dc(auStack_68,&local_58,&local_48);
  local_18 = 0;
  lVar2 = FUN_0108703c(auStack_68,&local_18);
  if (lVar2 < 0x1e0f2020be5b5db7) {
    if (lVar2 == -0x519ad049a3ede465) {
      lVar2 = 0;
    }
    else if (lVar2 == -0x324878d8e05287d4) {
      lVar2 = 1;
    }
    else {
      if (lVar2 != 0x183c3362cd1f99b6) {
        return 1;
      }
      lVar2 = 4;
    }
  }
  else if (lVar2 < 0x5e152411f5da3b3f) {
    if (lVar2 != 0x1e0f2020be5b5db7) {
      return 1;
    }
    lVar2 = 2;
  }
  else if (lVar2 == 0x60866d12e7d91b01) {
    lVar2 = 3;
  }
  else if (lVar2 == 0x5e152411f5da3b3f) {
    lVar2 = 5;
  }
  else {
    if (lVar2 != 0x79479c9171128967) {
      return 1;
    }
    lVar2 = 6;
  }
  return 1 << lVar2;
}


